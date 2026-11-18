// Opt-in tests of actual byte handlers and published renderer state, not a mock decoder.
#include <cstdlib>
#include <cmath>

static int graphicsProtocolChecks, graphicsProtocolFailures;
static void GraphicsProtocolCheck(bool pass, const char* name) {
    ++graphicsProtocolChecks;
    if (!pass) ++graphicsProtocolFailures;
    gEngfuncs.Con_Printf("COF_GRAPHICS_PROTOCOL %s %s\n", pass ? "PASS" : "FAIL", name);
}
static bool GraphicsProtocolValue(const char* name, float expected) {
    const float delta = gEngfuncs.pfnGetCvarFloat(name) - expected;
    return delta > -.01f && delta < .01f;
}
static void CofGraphicsProtocolTests() {
    static bool ran;
    if (ran || !std::getenv("COF_GRAPHICSTEST")) return;
    ran = true;

    unsigned char bw = 128;
    GraphicsProtocolCheck(BlackWhiteMessage("BlackWhite", 1, &bw) == 1 &&
        GraphicsProtocolValue("cof_blackwhite", 128), "blackwhite_unsigned_128");
    GraphicsProtocolCheck(BlackWhiteMessage("BlackWhite", 0, &bw) == 0 &&
        BlackWhiteMessage("BlackWhite", 2, &bw) == 0 &&
        BlackWhiteMessage("BlackWhite", 1, nullptr) == 0 &&
        GraphicsProtocolValue("cof_blackwhite", 128), "blackwhite_reject_without_mutation");
    bw = 0;
    GraphicsProtocolCheck(BlackWhiteMessage("BlackWhite", 1, &bw) == 1 &&
        GraphicsProtocolValue("cof_blackwhite", 0), "blackwhite_zero_releases_override");

    // RGB80/120/240, duration+2, start100, target1000, all shorts little endian.
    unsigned char fogPacket[9] = {80, 120, 240, 2, 0, 100, 0, 232, 3};
    GraphicsProtocolCheck(SetFogMessage("SetFog", 9, fogPacket) == 1 &&
        GraphicsProtocolValue("cof_fog_enable", 1) &&
        GraphicsProtocolValue("cof_fog_r", 80) &&
        GraphicsProtocolValue("cof_fog_g", 120) &&
        GraphicsProtocolValue("cof_fog_b", 240) &&
        GraphicsProtocolValue("cof_fog_start", 100) &&
        GraphicsProtocolValue("cof_fog_end", 30000), "fog_fadein_initial_wire_state");
    GraphicsProtocolCheck(SetFogMessage("SetFog", 8, fogPacket) == 0 &&
        SetFogMessage("SetFog", 10, fogPacket) == 0 &&
        SetFogMessage("SetFog", 9, nullptr) == 0 &&
        GraphicsProtocolValue("cof_fog_end", 30000), "fog_reject_without_mutation");
    double startTime = lastTime;
    CofGraphicsFrame(startTime + 1);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 15500), "fog_fadein_halfway");
    CofGraphicsVidInit();
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 15500), "fog_video_restart_retains_state");
    CofGraphicsFrame(startTime + 2);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 1000), "fog_fadein_complete");
    CofGraphicsFrame(startTime + 20);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 1000), "fog_fadein_clamps_target");

    fogPacket[3] = 254; fogPacket[4] = 255; // signed -2
    GraphicsProtocolCheck(SetFogMessage("SetFog", 9, fogPacket) == 1 &&
        GraphicsProtocolValue("cof_fog_end", 1000), "fog_fadeout_signed_duration");
    startTime = lastTime;
    CofGraphicsFrame(startTime + 1);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 15500), "fog_fadeout_halfway");
    CofGraphicsFrame(startTime + 2);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 30000), "fog_fadeout_complete");
    CofGraphicsFrame(startTime + 20);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 30000), "fog_fadeout_clamps_far_end");
    fogPacket[3] = fogPacket[4] = 0;
    SetFogMessage("SetFog", 9, fogPacket);
    startTime = lastTime;
    CofGraphicsFrame(startTime + 10);
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_fog_end", 1000), "fog_zero_duration_immediate_and_stable");
    unsigned char clearFog[9] = {};
    GraphicsProtocolCheck(SetFogMessage("SetFog", 9, clearFog) == 1 &&
        GraphicsProtocolValue("cof_fog_enable", 0), "fog_allzero_disables");

    // Signed boundary coords and fractional negatives must not become unsigned.
    unsigned char rainPacket[16] = {
        123, 0, 255, 127, 174, 255, 0, 128, 9, 0, 255, 255, 2, 0, 192, 255
    };
    GraphicsProtocolCheck(RainDataMessage("RainData", 16, rainPacket) == 1 &&
        rain.drips == 123 && rain.distance == 4095.875f && rain.windX == -10.25f &&
        rain.windY == -4096 && rain.randomX == 1.125f && rain.randomY == -.125f &&
        rain.mode == 2 && rain.height == -8, "rain_signed_coords_and_field_order");
    GraphicsProtocolCheck(RainDataMessage("RainData", 15, rainPacket) == 0 &&
        RainDataMessage("RainData", 17, rainPacket) == 0 &&
        RainDataMessage("RainData", 16, nullptr) == 0 && rain.windX == -10.25f &&
        rain.drips == 123 && rain.height == -8, "rain_reject_without_mutation");
    bw = 128;
    BlackWhiteMessage("BlackWhite", 1, &bw);
    CofGraphicsVidInit();
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_blackwhite", 128) &&
        CofGraphicsRain().height == -8, "video_restart_retains_colour_and_rain");
    CofGraphicsReset();
    GraphicsProtocolCheck(GraphicsProtocolValue("cof_blackwhite", 0) &&
        GraphicsProtocolValue("cof_fog_enable", 0) && !haveTime &&
        CofGraphicsRain().drips == 0 && CofGraphicsRain().windX == 0,
        "reset_restores_clean_map_state");
    gEngfuncs.Con_Printf("COF_GRAPHICS_PROTOCOL_COMPLETE failures=%d checks=%d\n",
        graphicsProtocolFailures, graphicsProtocolChecks);
}
