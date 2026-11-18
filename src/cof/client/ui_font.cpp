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
