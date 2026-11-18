#include "hud.h"
#include "cl_util.h"
#include "ui_draw.h"
#include "ui_font.h"
#include <cstring>

namespace {
unsigned char widths[768];
bool attempted, loaded;
void Load() {
    if (attempted) return;
    attempted = true;
    int size = 0;
    byte* data = gEngfuncs.COM_LoadFile(const_cast<char*>("gfx/vgui/fonts/640_credits.chw"),5,&size);
    if (data) {
        if (size == 768) { std::memcpy(widths,data,768); loaded = true; }
        gEngfuncs.COM_FreeFile(data);
    }
}
int Advance(unsigned char ch) {
    if (!loaded) return 9;
    return static_cast<signed char>(widths[ch*3]) + widths[ch*3+1] + static_cast<signed char>(widths[ch*3+2]);
}
}
int CofUiTextWidth(const char* text) {
    Load(); int width = 0;
    for (const unsigned char* c = reinterpret_cast<const unsigned char*>(text); c && *c; ++c)
        width += Advance(*c);
    return width;
}
void CofUiText(int x, int y, const char* text, bool centered, float red, float green, float blue) {
    if (!text) return;
    Load();
    if (centered) x -= CofUiTextWidth(text)/2;
    for (const unsigned char* c = reinterpret_cast<const unsigned char*>(text); *c; ++c) {
        // Control/space cells contain replacement marks; advance only.
        if (*c > 32) {
            const int bearing = loaded ? static_cast<signed char>(widths[*c*3]) : 0;
            const int ink = loaded ? widths[*c*3+1] : 19;
            if (ink) CofDrawImage("gfx/vgui/fonts/640_credits.tga",x+bearing,y,ink,22,
                *c/256.f,0,(*c*19+ink)/4864.f,1,red,green,blue);
        }
        x += Advance(*c);
    }
}

void CofPagerText(int x,int y,const char* text) {
    static unsigned char metrics[768];
    static bool tried,ready;
    if(!tried) {
        tried=true;int size=0;
        byte* data=gEngfuncs.COM_LoadFile(const_cast<char*>("gfx/vgui/fonts/640_pager.chw"),5,&size);
        if(data){if(size==768){std::memcpy(metrics,data,768);ready=true;}gEngfuncs.COM_FreeFile(data);}
    }
    if(!ready||!text) return;
    const unsigned char* p=reinterpret_cast<const unsigned char*>(text);
    while(*p && *p!='\n' && *p!='\r') {
        unsigned ch=*p++;
        if(ch>=0xc2&&ch<=0xf4) {
            int extra=ch<0xe0?1:ch<0xf0?2:3;
            unsigned value=ch&((1u<<(6-extra))-1);
            bool valid=true;
            for(int i=0;i<extra;++i){if((p[i]&0xc0)!=0x80){valid=false;break;}value=(value<<6)|(p[i]&63);}
            if(valid) {
                p+=extra;
                ch=value>=0x410&&value<=0x44f?value-0x410+0xc0:value==0x401?0xa8:value==0x451?0xb8:'?';
            }
        }
        int bearing=static_cast<signed char>(metrics[ch*3]);
        int ink=metrics[ch*3+1];
        // Clip the final label to the viewport instead of spilling outside it.
        if(ch>32 && ink && x+bearing<ScreenWidth) {
            int visible=ink;
            if(x+bearing+visible>ScreenWidth)visible=ScreenWidth-x-bearing;
            if(visible>0)CofDrawImage("gfx/vgui/fonts/640_pager.tga",x+bearing,y,visible,16,
                ch/256.f,0,(ch*10+visible)/2560.f,1);
        }
        x+=bearing+ink+static_cast<signed char>(metrics[ch*3+2]);
    }
}
