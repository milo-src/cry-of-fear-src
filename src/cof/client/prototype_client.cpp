// New prototype instrumentation/UI, not recovered original gameplay.
#include "hud.h"
#include "cl_util.h"
#include "cl_entity.h"
#include <cstdlib>
extern void CofInventoryDraw();
extern void CofStatusHudDraw();
extern void CofUiTestFrame();

void CofPrototypeFrame(float time) {
    static cvar_t* smoke = nullptr;
    static float first = -1.0f;
    static bool captured = false;
    static int movement_stage = 0;
    static float before[3] = {};
    if (!smoke) smoke = gEngfuncs.pfnRegisterVariable("cof_smoketest", std::getenv("COF_SMOKETEST") ? "1" : "0", 0);
    if (first < 0.0f || time < first) { first = time; captured = false; movement_stage = 0; }
    CofUiTestFrame();
    CofStatusHudDraw();
    CofInventoryDraw();
    if (smoke && smoke->value != 0 && !std::getenv("COF_DOORTEST") && !std::getenv("COF_INVENTORYTEST")) {
        cl_entity_t* player = gEngfuncs.GetLocalPlayer();
        if (player && time - first > 2 && movement_stage == 0) {
            for (int i = 0; i < 3; ++i) before[i] = player->origin[i];
            gEngfuncs.pfnClientCmd("+forward\n");
            movement_stage = 1;
        }
        if (time - first > 2.4f && movement_stage == 1) {
            gEngfuncs.pfnClientCmd("-forward\n");
            movement_stage = 2;
        }
        if (player && time - first > 3 && movement_stage == 2) {
            gEngfuncs.Con_Printf("COF_SMOKE_MOVEMENT %.3f %.3f %.3f -> %.3f %.3f %.3f\n",
                before[0], before[1], before[2], player->origin[0], player->origin[1], player->origin[2]);
            movement_stage = 3;
        }
    }
    if (smoke && smoke->value != 0 && time - first > 5 && !captured) {
        captured = true;
        gEngfuncs.Con_Printf("COF_SMOKE_CLIENT_RENDERED time=%.2f\n", time);
        gEngfuncs.pfnClientCmd("snapshot\n");
    }
    if (smoke && smoke->value != 0 && time - first > 9)
        gEngfuncs.pfnClientCmd("quit\n");
}
