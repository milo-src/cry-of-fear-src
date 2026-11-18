// Temporary text UI and CofInv wire protocol, not recovered original VGUI.
// The outgoing inventoryuse command and six ordinary slots match binary evidence.
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

static char slots[7][128];
static bool visible;
static int InventoryMessage(const char*, int size, void* buffer) {
    BEGIN_READ(buffer, size);
    const int slot = READ_BYTE();
    const char* label = READ_STRING();
    if (slot >= 1 && slot <= 6) {
        std::strncpy(slots[slot], label, sizeof(slots[slot]) - 1);
        slots[slot][sizeof(slots[slot]) - 1] = '\0';
        if (std::getenv("COF_INVENTORYTEST"))
            gEngfuncs.Con_Printf("COF_INVENTORY_CLIENT slot=%d item=%s\n", slot, slots[slot]);
    }
    return 1;
}
static void ToggleInventory() {
    visible = !visible;
    if (visible) gEngfuncs.pfnServerCmd("cof_inventory_sync\n");
}
static void UseSlot(int slot) {
    char command[32];
    std::snprintf(command, sizeof(command), "inventoryuse %d\n", slot);
    gEngfuncs.pfnServerCmd(command);
}
static void Slot1() { UseSlot(1); }
static void Slot2() { UseSlot(2); }
static void Slot3() { UseSlot(3); }
static void Slot4() { UseSlot(4); }
static void Slot5() { UseSlot(5); }
static void Slot6() { UseSlot(6); }

void CofInventoryClientInit() {
    std::memset(slots, 0, sizeof(slots));
    visible = false;
    gEngfuncs.pfnHookUserMsg("CofInv", InventoryMessage);
    gEngfuncs.pfnAddCommand("cof_inventory", ToggleInventory);
    void (*commands[])() = {Slot1, Slot2, Slot3, Slot4, Slot5, Slot6};
    const char* names[] = {"cof_inv1", "cof_inv2", "cof_inv3", "cof_inv4", "cof_inv5", "cof_inv6"};
    for (int i = 0; i < 6; ++i) gEngfuncs.pfnAddCommand(const_cast<char*>(names[i]), commands[i]);
}

void CofInventoryDraw() {
    if (!visible) return;
    gEngfuncs.pfnFillRGBA(16, 80, 440, 215, 10, 12, 16, 220);
    gEngfuncs.pfnDrawSetTextColor(0.9f, 0.9f, 0.85f);
    gEngfuncs.pfnDrawConsoleString(28, 92, const_cast<char*>("INVENTORY   |   Tab closes   |   1-6 uses item"));
    for (int i = 1; i <= 6; ++i) {
        char line[160];
        std::snprintf(line, sizeof(line), "[%d] %s", i, slots[i][0] ? slots[i] : "- empty -");
        gEngfuncs.pfnDrawConsoleString(28, 106 + i * 24, line);
    }
}
