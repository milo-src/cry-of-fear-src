// Opt-in end-to-end input checks. Included in game_menu.cpp to inspect results.
#include <cstdlib>
#include "cl_entity.h"
#include "usercmd.h"
extern "C" void CL_CreateMove(float, usercmd_t*, int);
namespace {
int menuTestPhase, menuTestFailures;
float menuTestStart = -1;
void MenuCheck(bool valid, const char* name) {
    if (!valid) ++menuTestFailures;
    gEngfuncs.Con_Printf("COF_MENU_TEST %s %s\n", valid ? "PASS" : "FAIL", name);
}
void MenuKey(int key) { gEngfuncs.Key_Event(key, 1); gEngfuncs.Key_Event(key, 0); }
void MenuClickRow(int row) {
    gEngfuncs.pfnSetMousePos(ScreenWidth / 2, ScreenHeight - (11-row)*38 + 19);
    MenuKey(K_MOUSE1);
}
}
void CofMenuTestFrame() {
    if (!std::getenv("COF_MENUTEST") || !menuWorld) return;
    float now = gEngfuncs.GetClientTime();
    if (menuTestStart < 0 || now < menuTestStart) {
        menuTestStart = now; menuTestPhase = menuTestFailures = 0;
    }
    const float elapsed = now - menuTestStart;
    if (menuTestPhase == 0 && elapsed > 2) {
        MenuCheck(panel == Main, "marker_message_opens_main");
        gEngfuncs.pfnClientCmd("+forward\n");
        usercmd_t cmd = {}; CL_CreateMove(.01f, &cmd, 1);
        MenuCheck(!cmd.forwardmove && !cmd.sidemove && !cmd.buttons, "menu_blocks_player_input");
        gEngfuncs.pfnClientCmd("-forward\n");
        MenuClickRow(0);
        MenuCheck(panel == Difficulty, "newgame_mouse_opens_difficulty");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 1 && elapsed > 2.7f) {
        MenuKey(K_ESCAPE);
        MenuCheck(panel == Main, "difficulty_escape_returns_main");
        MenuClickRow(5);
        MenuCheck(CofSecondaryMenuVisible(), "language_mouse_opens_panel");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 2 && elapsed > 3.4f) {
        MenuKey(K_ESCAPE);
        MenuCheck(!CofSecondaryMenuVisible() && panel == Main, "language_escape_returns_main");
        MenuClickRow(7);
        MenuCheck(CofSecondaryMenuVisible(), "extras_mouse_opens_panel");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 3 && elapsed > 4.1f) {
        MenuKey(K_ESCAPE);
        MenuClickRow(6);
        MenuCheck(CofSecondaryMenuVisible(), "unlockables_mouse_opens_panel");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 4 && elapsed > 4.8f) {
        MenuKey(K_ESCAPE);
        MenuCheck(panel == Main && !CofSecondaryMenuVisible(), "unlockables_escape_returns_main");
        MenuClickRow(2);
        MenuCheck(CofSecondaryMenuVisible(), "campaign_mouse_opens_panel");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 5 && elapsed > 5.5f) {
        MenuKey(K_ESCAPE);
        MenuCheck(panel == Main && !CofSecondaryMenuVisible(), "campaign_escape_returns_main");
        MenuClickRow(1);
        MenuCheck(CofSaveLoadVisible(), "load_mouse_opens_five_slots");
        gEngfuncs.pfnClientCmd("snapshot\n");
        ++menuTestPhase;
    } else if (menuTestPhase == 6 && elapsed > 6.2f) {
        MenuKey(K_ESCAPE);
        MenuCheck(panel == Main && !CofSaveLoadVisible(), "load_escape_returns_main");
        gEngfuncs.pfnClientCmd("snapshot\n");
        gEngfuncs.Con_Printf("COF_MENU_TEST_COMPLETE failures=%d\n", menuTestFailures);
        ++menuTestPhase;
    }
}
