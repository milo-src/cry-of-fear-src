// Included only in the inventory translation unit. Execution requires COF_UITEST.
#include "cl_entity.h"
#include "usercmd.h"
extern "C" void CL_CreateMove(float, usercmd_t*, int);
namespace {
bool uiRunning;
int uiPhase, uiFailures;
float uiStart;
void UiCheck(bool valid, const char* name) {
    if (!valid) ++uiFailures;
    gEngfuncs.Con_Printf("COF_UI_TEST %s %s\n", valid ? "PASS" : "FAIL", name);
}
void UiKey(int key) { gEngfuncs.Key_Event(key, 1); gEngfuncs.Key_Event(key, 0); }
void UiMouse(int x, int y) { gEngfuncs.pfnSetMousePos(OriginX() + x, OriginY() + y); }
void StartUiTest() {
    if (!std::getenv("COF_UITEST")) return;
    uiRunning = true; uiPhase = uiFailures = 0; uiStart = gEngfuncs.GetClientTime();
    UiCheck(visible && slots[1].fields["map_name"] == "sewerkey", "real_key_received_and_menu_open");
    UiCheck(OriginX() == ScreenWidth / 2 - 374 && OriginY() == ScreenHeight / 2 - 240, "native_canvas_centered");
    UiMouse(76, 113);
    gEngfuncs.pfnClientCmd("+forward\n");
}
}
void CofUiTestInit() {
    uiRunning = false;
    if (std::getenv("COF_UITEST")) gEngfuncs.pfnAddCommand("cof_ui_test", StartUiTest);
}
void CofUiTestFrame() {
    if (!uiRunning || !std::getenv("COF_UITEST")) return;
    const float elapsed = gEngfuncs.GetClientTime() - uiStart;
    if (uiPhase == 0 && elapsed > 0.3f) {
        int mx, my; gEngfuncs.GetMousePosition(&mx, &my);
        gEngfuncs.Con_Printf("COF_UI_POINTER observed=%d,%d expected=%d,%d\n", mx, my, OriginX()+76, OriginY()+113);
        UiCheck(gHUD.m_Health.m_iHealth == 65, "health_message_reaches_hud");
        UiCheck(HoverSlot(mx - OriginX(), my - OriginY()) == 1, "pointer_maps_to_original_slot");
        usercmd_t command = {};
        CL_CreateMove(0.01f, &command, 1);
        UiCheck(command.forwardmove == 0 && command.sidemove == 0 && !command.buttons, "menu_blocks_game_movement");
        gEngfuncs.pfnClientCmd("snapshot\n");
        gEngfuncs.Con_Printf("COF_UI_CAPTURE hover\n");
        uiPhase = 1;
    } else if (uiPhase == 1 && elapsed > 0.6f) {
        UiKey(K_MOUSE1);
        UiCheck(selected == 1, "mouse_opens_context_menu");
        gEngfuncs.pfnClientCmd("snapshot\n");
        gEngfuncs.Con_Printf("COF_UI_CAPTURE context\n");
        uiPhase = 2;
    } else if (uiPhase == 2 && elapsed > 1.0f) {
        UiMouse(36 + 99 + 30, 73 + 20);
        UiKey(K_MOUSE1);
        UiCheck(visible && !selected, "apply_hides_popup_keeps_inventory");
        uiPhase = 3;
    } else if (uiPhase == 3 && elapsed > 1.4f) {
        UiCheck(slots[1].path.empty(), "context_inventoryequip_consumes_real_key");
        gEngfuncs.pfnClientCmd("-forward\n");
        UiKey(K_TAB);
        UiCheck(!visible, "toggle_closes_and_releases_input");
        const bool wasEmpty = slots[1].path.empty();
        unsigned char invalid[] = {1, 0, 'x', 'x', 'x', 0};
        UiCheck(!InventoryMessage("Inventory", sizeof(invalid), invalid) && wasEmpty == slots[1].path.empty(), "malformed_payload_does_not_mutate_slot");
        gEngfuncs.Con_Printf("COF_UI_TEST_COMPLETE failures=%d\n", uiFailures);
        uiRunning = false;
    }
}
