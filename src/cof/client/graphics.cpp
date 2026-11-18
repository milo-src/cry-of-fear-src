// Native protocol/state recovered from client.dll: see analysis/graphics/client-renderer.md.
// Cvar transport is the source-built Xash renderer adaptation.
#include "hud.h"
#include "cl_util.h"
#include "cl_entity.h"
#include "graphics.h"
#include "weather.h"

namespace {
struct FogState {
    float color[3];
    float duration, start, end;
    int target;
};
FogState fog = {};
CofRainState rain = {};
unsigned blackWhite;
double lastTime;
bool haveTime;
bool bridgeRegistered;

int Short(const unsigned char* p) {
    const unsigned value = unsigned(p[0]) | (unsigned(p[1]) << 8);
    return value < 32768 ? int(value) : int(value) - 65536;
}
void Publish() {
    if (!bridgeRegistered) return; // SDK HUD_Init resets before our cvar registration.
    gEngfuncs.Cvar_SetValue("cof_blackwhite", float(blackWhite));
    gEngfuncs.Cvar_SetValue("cof_fog_r", fog.color[0]);
    gEngfuncs.Cvar_SetValue("cof_fog_g", fog.color[1]);
    gEngfuncs.Cvar_SetValue("cof_fog_b", fog.color[2]);
    gEngfuncs.Cvar_SetValue("cof_fog_start", fog.start);
    gEngfuncs.Cvar_SetValue("cof_fog_end", fog.end);
    gEngfuncs.Cvar_SetValue("cof_fog_enable", fog.start > 0 && fog.end > 0 ? 1 : 0);
}
int BlackWhiteMessage(const char*, int size, void* data) {
    if (size != 1 || !data) return 0;
    blackWhite = *static_cast<unsigned char*>(data);
    Publish();
    return 1;
}
int SetFogMessage(const char*, int size, void* data) {
    if (size != 9 || !data) return 0;
    const unsigned char* p = static_cast<unsigned char*>(data);
    for (int i = 0; i < 3; ++i) fog.color[i] = float(p[i]);
    fog.duration = float(Short(p + 3));
    fog.start = float(Short(p + 5));
    const int end = Short(p + 7);
    if (fog.duration > 0) {
        fog.target = end;
        fog.end = 30000;
    } else {
        fog.end = float(end);
        if (fog.duration < 0) fog.target = end;
    }
    // Begin interpolation from receipt time, including after a map time rewind.
    lastTime = gEngfuncs.GetClientTime();
    haveTime = true;
    Publish();
    return 1;
}
int RainDataMessage(const char*, int size, void* data) {
    if (size != 16 || !data) return 0;
    const unsigned char* p = static_cast<unsigned char*>(data);
    rain.drips = Short(p);
    rain.distance = float(Short(p + 2)) / 8;
    rain.windX = float(Short(p + 4)) / 8;
    rain.windY = float(Short(p + 6)) / 8;
    rain.randomX = float(Short(p + 8)) / 8;
    rain.randomY = float(Short(p + 10)) / 8;
    rain.mode = Short(p + 12);
    rain.height = float(Short(p + 14)) / 8;
    return 1;
}
}

#include "graphics_protocol_tests.inc"

void CofGraphicsInit() {
    CVAR_CREATE("cg_water", "1", FCVAR_ARCHIVE);
    CVAR_CREATE("skybrightvalue", "0.1", FCVAR_ARCHIVE);
    CVAR_CREATE("skybrightcolourr", "0", FCVAR_ARCHIVE);
    CVAR_CREATE("skybrightcolourg", "0", FCVAR_ARCHIVE);
    CVAR_CREATE("skybrightcolourb", "0", FCVAR_ARCHIVE);
    const char* bridge[] = { "cof_blackwhite", "cof_fog_enable", "cof_fog_r",
        "cof_fog_g", "cof_fog_b", "cof_fog_start", "cof_fog_end" };
    for (unsigned i = 0; i < sizeof(bridge) / sizeof(bridge[0]); ++i)
        CVAR_CREATE(bridge[i], "0", 0);
    bridgeRegistered = true;
    gEngfuncs.pfnHookUserMsg("BlackWhite", BlackWhiteMessage);
    gEngfuncs.pfnHookUserMsg("SetFog", SetFogMessage);
    gEngfuncs.pfnHookUserMsg("RainData", RainDataMessage);
    CofGraphicsReset();
    CofGraphicsProtocolTests();
}
void CofGraphicsReset() {
    CofWeatherReset();
    fog = FogState();
    rain = CofRainState();
    blackWhite = 0;
    haveTime = false;
    Publish();
}
void CofGraphicsVidInit() {
    CofWeatherReset();
    // GL resources belong to the renderer. Retain messages across vid_restart.
    Publish();
}
void CofGraphicsFrame(double clientTime) {
    const double delta = haveTime && clientTime > lastTime ? clientTime - lastTime : 0;
    lastTime = clientTime;
    haveTime = true;
    if (fog.duration != 0 && delta > 0) {
        fog.end = float(double(fog.end) - delta / double(fog.duration) * (30000 - fog.target));
        if (fog.end > 30000) fog.end = 30000;
        if (fog.end < float(fog.target)) fog.end = float(fog.target);
        Publish();
    }
}
int CofGraphicsAddEntity(const cl_entity_s* entity) {
    // Keep ordinary water visible if the optional replacement cannot render.
    return !entity || entity->curstate.skin != -3 ||
        gEngfuncs.pfnGetCvarFloat("cg_water") == 0 ||
        gEngfuncs.pfnGetCvarFloat("cof_water_ready") != 1;
}
const CofRainState& CofGraphicsRain() { return rain; }
