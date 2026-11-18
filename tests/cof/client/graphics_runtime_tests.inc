// Test-only driver verifies received server protocol and records actual frames.
#include <cstdlib>
#include <cmath>
static int graphicsClientStage = -1, graphicsClientCaptured = -1, graphicsClientFailures;
static double graphicsStageTime;
static void GraphicsStageCommand() {
    graphicsClientStage = std::atoi(gEngfuncs.Cmd_Argv(1));
    graphicsStageTime = gEngfuncs.GetClientTime();
}
static void GraphicsClientCheck(bool pass, const char* name) {
    gEngfuncs.Con_Printf("COF_GRAPHICS_CLIENT %s %s\n", pass ? "PASS" : "FAIL", name);
    if (!pass) ++graphicsClientFailures;
}
void CofGraphicsClientTestFrame(float time) {
    if (!std::getenv("COF_GRAPHICSTEST")) return;
    static bool registered;
    if (!registered) { gEngfuncs.pfnAddCommand("cof_graphics_stage", GraphicsStageCommand); registered = true; }
    if (graphicsClientStage < 0 || graphicsClientCaptured == graphicsClientStage || time - graphicsStageTime < .8) return;
    graphicsClientCaptured = graphicsClientStage;
    const float bw = gEngfuncs.pfnGetCvarFloat("cof_blackwhite");
    const float fog = gEngfuncs.pfnGetCvarFloat("cof_fog_enable");
    if (graphicsClientStage == 0) GraphicsClientCheck(bw == 0 && fog == 0, "baseline_state");
    if (graphicsClientStage == 1) GraphicsClientCheck(fog == 1 &&
        gEngfuncs.pfnGetCvarFloat("cof_fog_end") == 180 &&
        gEngfuncs.pfnGetCvarFloat("cof_fog_r") == 80, "fog_received");
    if (graphicsClientStage == 2) GraphicsClientCheck(bw == 190 && fog == 0, "blackwhite_received_fog_cleared");
    if (graphicsClientStage == 3) GraphicsClientCheck(bw == 0, "blackwhite_reset_received");
    if (graphicsClientStage < 4) {
        gEngfuncs.Con_Printf("COF_GRAPHICS_CAPTURE stage=%d bw=%.0f fog=%.0f\n", graphicsClientStage, bw, fog);
        gEngfuncs.pfnClientCmd("snapshot\n");
    } else {
        gEngfuncs.Con_Printf("COF_GRAPHICS_CLIENT_COMPLETE failures=%d\n", graphicsClientFailures);
        gEngfuncs.pfnClientCmd("quit\n");
    }
}
