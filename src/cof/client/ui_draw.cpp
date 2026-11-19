// Xash renderer adaptation, not original VGUI implementation.
#include "hud.h"
#include "cl_util.h"
#include "triangleapi.h"
#define ALLOC_CHECK(x)
#include "cof_render_api.h"
#include "ui_draw.h"
#include <map>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>

namespace {
render_api_t renderer = {};
struct Texture { int id, width, height; };
std::map<std::string, Texture> textures;
}

extern "C" int DLLEXPORT HUD_GetRenderInterface(int version, render_api_t* api, render_interface_t* callbacks) {
    if (version != CL_RENDER_INTERFACE_VERSION || !api || !callbacks) return 0;
    renderer = *api;
    std::memset(callbacks, 0, sizeof(*callbacks));
    callbacks->version = CL_RENDER_INTERFACE_VERSION;
    textures.clear();
    return 1;
}

#include "menu_rain_video.inc"

void CofUiVidInit() { textures.clear(); menuRainFilm.reset(); }

void CofDrawRainLens(int x,int y,int width,int height,float alpha) {
    if (!renderer.GL_LoadTexture || alpha<=0) return;
    const char* name="#cof/procedural_rain_lens.tga";
    if (textures.find(name)==textures.end()) {
        // Transparent centre, faint dark meniscus and a small specular crescent.
        // Analytic coverage: no sprite edits, square quads or full-screen tint.
        // This lightweight lens overlay does not sample/refract the scene buffer.
        const int w=64,h=128;
        std::vector<byte> image(18+w*h*4,0);
        image[2]=2; image[12]=w; image[14]=h; image[16]=32; image[17]=0x28;
        for (int py=0;py<h;++py) for (int px=0;px<w;++px) {
            const float u=(px+.5f)/w*2-1, v=(py+.5f)/h;
            // A round lower bead merging into a long, tapering drainage trail.
            const float bulb=std::sqrt(u*u+std::pow((v-.73f)*3.8f,2.f))-.78f;
            const float trailWidth=.045f+.16f*v;
            const float trail=std::fmax((std::fabs)(u+.025f*std::sin(v*15))-trailWidth,
                                        std::fmax(.06f-v,v-.72f));
            const float distance=std::fmin(bulb,trail);
            const float coverage=std::fmax(0.f,std::fmin(1.f,-distance*32));
            const float rim=std::exp(-(std::fabs)(distance+.035f)*34)*coverage;
            const float glint=std::exp(-((u+.44f)*(u+.44f)*65+(v-.62f)*(v-.62f)*350))*coverage;
            const float light=std::fmax(0.f,-u)*rim*.24f+glint*.35f;
            const float dark=std::fmax(0.f,u)*rim*.18f;
            const float opacity=light+dark;
            const int index=18+(py*w+px)*4;
            const byte shade=opacity>0 ? byte(255*light/opacity) : 0;
            image[index]=image[index+1]=image[index+2]=shade;
            image[index+3]=byte(255*std::fmin(opacity,.48f));
        }
        Texture texture={renderer.GL_LoadTexture(name,image.data(),int(image.size()),TF_CLAMP|TF_NOMIPMAP),w,h};
        textures.emplace(name,texture);
    }
    CofDrawImage(name,x,y,width,height,0,0,1,1,1,1,1,alpha);
}

bool CofDrawImage(const char* path, int x, int y, int width, int height,
                  float u0, float v0, float u1, float v1, float red, float green, float blue, float alpha,
                  const CofUiPlane* plane) {
    if (!path || !*path || !renderer.GL_LoadTexture || !gEngfuncs.pTriAPI) return false;
    auto found = textures.find(path);
    if (found == textures.end()) {
        Texture texture = {};
        int length = 0;
        byte* data = gEngfuncs.COM_LoadFile(const_cast<char*>(path), 5, &length);
        if (data) {
            if (length > 0 && length <= 16 * 1024 * 1024) {
                const byte* pixels = data;
                std::vector<byte> font;
                // VGUI bitmap fonts store glyph coverage in RGB and zero alpha.
                // Adapt that font-only encoding to Xash's normal RGBA loader.
                int uploadLength = length;
                const bool creditsFont = !std::strcmp(path,"gfx/vgui/fonts/640_credits.tga");
                const bool pagerFont = !std::strcmp(path,"gfx/vgui/fonts/640_pager.tga");
                if ((creditsFont || pagerFont) && length >= 18 &&
                    data[1] == 0 && (data[2] == 2 || data[2] == 10) && data[16] == 32) {
                    const size_t start = 18 + data[0];
                    const size_t width = data[12] | (data[13] << 8);
                    const size_t height = data[14] | (data[15] << 8);
                    if (((creditsFont && width == 4864 && height == 22) ||
                         (pagerFont && width == 2560 && height == 16)) && start <= static_cast<size_t>(length)) {
                        const size_t count = width*height;
                        font.assign(18+count*4,0);
                        std::memcpy(font.data(),data,18);
                        font[0] = 0; font[2] = 2;
                        size_t input = start, output = 0;
                        bool valid = true;
                        while (output < count && valid) {
                            size_t run = count-output;
                            bool repeated = false;
                            if (data[2] == 10) {
                                if (input >= static_cast<size_t>(length)) { valid = false; break; }
                                const byte header = data[input++];
                                run = (header&127)+1; repeated = (header&128)!=0;
                            }
                            const size_t sourceBytes = repeated ? 4 : run*4;
                            if (run > count-output || sourceBytes > static_cast<size_t>(length)-input) {
                                valid = false; break;
                            }
                            for (size_t n = 0; n < run; ++n)
                                std::memcpy(font.data()+18+(output+n)*4,data+input+(repeated ? 0 : n*4),4);
                            input += sourceBytes; output += run;
                        }
                        for (size_t i = 18; valid && i < font.size(); i += 4) {
                            font[i+3] = font[i+2];
                            font[i] = font[i+1] = font[i+2] = 255;
                        }
                        if (valid) { pixels = font.data(); uploadLength = static_cast<int>(font.size()); }
                    }
                }
                // Xash otherwise probes the disk before its supplied buffer.
                // A '#' name forces the converted font bytes to be used.
                const std::string uploadName = pixels == data ? path : std::string("#cof/") + path;
                texture.id = renderer.GL_LoadTexture(uploadName.c_str(), pixels, uploadLength, TF_CLAMP | TF_NOMIPMAP);
            }
            gEngfuncs.COM_FreeFile(data);
        }
        if (texture.id) {
            texture.width = static_cast<int>(renderer.RenderGetParm(PARM_TEX_SRC_WIDTH, texture.id));
            texture.height = static_cast<int>(renderer.RenderGetParm(PARM_TEX_SRC_HEIGHT, texture.id));
        } else gEngfuncs.Con_Printf("COF_UI missing image: %s\n", path);
        found = textures.emplace(path, texture).first;
    }
    const Texture& texture = found->second;
    if (!texture.id) return false;
    if (!width) width = texture.width;
    if (!height) height = texture.height;
    auto* tri = gEngfuncs.pTriAPI;
    // HUD_Redraw already runs in the engine's 2D pass.
    tri->RenderMode(kRenderTransTexture);
    tri->CullFace(TRI_NONE);
    renderer.GL_Bind(0, texture.id);
    tri->Color4f(red, green, blue, alpha);
    tri->Begin(TRI_QUADS);
    if (plane) {
        // The HUD API has 2D clip coordinates (no projective texture q).
        // Subdivide the projected card so letters do not shear at a diagonal
        // or show the affine interpolation of one large quad.
        const int columns=16,rows=2;
        auto vertex=[&](float u,float v) {
            const CofUiPoint p=CofUiProject(*plane,x+width*u,y+height*v);
            tri->TexCoord2f(u0+(u1-u0)*u,v0+(v1-v0)*v);
            tri->Vertex3f(p.x,p.y,0);
        };
        for(int row=0;row<rows;++row)for(int col=0;col<columns;++col) {
            const float a=float(col)/columns,b=float(col+1)/columns;
            const float c=float(row)/rows,d=float(row+1)/rows;
            vertex(a,c);vertex(b,c);vertex(b,d);vertex(a,d);
        }
    } else {
    tri->TexCoord2f(u0, v0); tri->Vertex3f(x, y, 0);
    tri->TexCoord2f(u1, v0); tri->Vertex3f(x + width, y, 0);
    tri->TexCoord2f(u1, v1); tri->Vertex3f(x + width, y + height, 0);
    tri->TexCoord2f(u0, v1); tri->Vertex3f(x, y + height, 0);
    }
    tri->End();
    tri->Color4f(1, 1, 1, 1);
    tri->RenderMode(kRenderNormal);
    return true;
}

CofUiPlane CofUiPerspective(float cx,float cy,float distance,float yaw,float pitch,float depth) {
    const float sy=std::sin(yaw),cyaw=std::cos(yaw),sp=std::sin(pitch),cp=std::cos(pitch);
    return {cx,cy,distance,depth,cyaw,sy*sp,cp,-sy,cyaw*sp};
}
CofUiPoint CofUiProject(const CofUiPlane& p,float x,float y) {
    x-=p.cx;y-=p.cy;
    const float scale=p.distance/(p.distance-p.zx*x-p.zy*y-p.depth);
    return {p.cx+(p.xx*x+p.xy*y)*scale,p.cy+p.yy*y*scale};
}
bool CofUiUnproject(const CofUiPlane& p,float x,float y,CofUiPoint& local) {
    const float u=(x-p.cx)/p.distance,v=(y-p.cy)/p.distance;
    const float a=p.xx+u*p.zx,b=p.xy+u*p.zy,c=v*p.zx,d=p.yy+v*p.zy;
    const float det=a*d-b*c;
    if(std::abs(det)<.000001f)return false;
    const float rightX=u*(p.distance-p.depth),rightY=v*(p.distance-p.depth);
    local={p.cx+(rightX*d-b*rightY)/det,p.cy+(a*rightY-rightX*c)/det};
    return true;
}
