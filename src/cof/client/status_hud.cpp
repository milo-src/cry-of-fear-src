// Layout and messages recovered from client.dll; see analysis/ui/hud.md.
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include "ui_draw.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace {
int stamina = 100, healthSet;
float warningUntil;
int warningAlpha;
int StaminaMessage(const char*, int size, void* data) {
    if (size != 3) return 0;
    BEGIN_READ(data, size);
    stamina = READ_BYTE();
    if (std::getenv("COF_UITEST")) gEngfuncs.Con_Printf("COF_UI_STAMINA value=%d\n", stamina);
    const float duration = READ_COORD();
    if (duration > 0) warningUntil = gEngfuncs.GetClientTime() + duration;
    return 1;
}
int HealthCapMessage(const char*, int size, void* data) {
    if (size != 1) return 0;
    const int value = *static_cast<unsigned char*>(data);
    if (value <= 2) healthSet = value;
    if (std::getenv("COF_UITEST")) gEngfuncs.Con_Printf("COF_UI_HEALTHCAP value=%d\n", healthSet);
    return 1;
}
void Bar(const char* name, int x, int value, int warning = 0, const char* suffix = "") {
    char path[128];
    const int y = ScreenHeight - 160;
    std::snprintf(path, sizeof(path), "gfx/vgui/640_%s%s.tga", name, suffix);
    CofDrawImage(path, x, y, 32, 160);
    std::snprintf(path, sizeof(path), "gfx/vgui/640_%s_bar%s.tga", name, suffix);
    CofDrawImage(path, x + 11, y + 5, 11, 118);
    if (warning) gEngfuncs.pfnFillRGBABlend(x + 11, y + 5, 11, 118, 255, 0, 0, warning);
    const int empty = static_cast<int>((100 - std::max(0, std::min(100, value))) * 1.18);
    if (empty > 0) {
        std::snprintf(path, sizeof(path), "gfx/vgui/640_%s_barempty%s.tga", name, suffix);
        CofDrawImage(path, x + 11, y + 5, 11, empty, 0, 0, 1, empty / 118.0f);
    }
}
}

void CofStatusHudInit() {
    stamina = 100; healthSet = 0; warningUntil = 0; warningAlpha = 0;
    gEngfuncs.pfnHookUserMsg("Stamina", StaminaMessage);
    gEngfuncs.pfnHookUserMsg("HealthCap", HealthCapMessage);
}

void CofStatusHudDraw() {
    if (!gHUD.m_pCvarDraw->value || (gHUD.m_iHideHUDDisplay & 0x0c) ||
        !std::strcmp(gEngfuncs.pfnGetLevelName(), "maps/c_nightmare.bsp")) return;
    const char* suffixes[] = {"", "2", "3"};
    Bar("healthbar", 32, gHUD.m_Health.m_iHealth, 0, suffixes[healthSet]);
    if (gEngfuncs.GetClientTime() < warningUntil) warningAlpha = 127;
    else warningAlpha = std::max(0, warningAlpha - 15);
    // Original red child of the fill panel. VGUI uses inverted alpha.
    Bar("staminabar", 64, stamina, warningAlpha);
}
