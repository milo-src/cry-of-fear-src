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

void CofUiVidInit() { textures.clear(); }

bool CofDrawImage(const char* path, int x, int y, int width, int height,
                  float u0, float v0, float u1, float v1, float red, float green, float blue) {
    if (!path || !*path || !renderer.GL_LoadTexture || !gEngfuncs.pTriAPI) return false;
    auto found = textures.find(path);
    if (found == textures.end()) {
        Texture texture = {};
        int length = 0;
        byte* data = gEngfuncs.COM_LoadFile(const_cast<char*>(path), 5, &length);
        if (data) {
            if (length > 0 && length <= 16 * 1024 * 1024)
                texture.id = renderer.GL_LoadTexture(path, data, length, TF_CLAMP | TF_NOMIPMAP);
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
    tri->RenderMode(kRenderTransTexture);
    tri->CullFace(TRI_NONE);
    renderer.GL_Bind(0, texture.id);
    tri->Color4f(red, green, blue, 1);
    tri->Begin(TRI_QUADS);
    tri->TexCoord2f(u0, v0); tri->Vertex3f(x, y, 0);
    tri->TexCoord2f(u1, v0); tri->Vertex3f(x + width, y, 0);
    tri->TexCoord2f(u1, v1); tri->Vertex3f(x + width, y + height, 0);
    tri->TexCoord2f(u0, v1); tri->Vertex3f(x, y + height, 0);
    tri->End();
    tri->Color4f(1, 1, 1, 1);
    tri->RenderMode(kRenderNormal);
    return true;
}
