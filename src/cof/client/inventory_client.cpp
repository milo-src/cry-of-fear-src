// Reconstructed six-slot inventory presentation. Static provenance: analysis/ui/inventory.md.
// Xash input/render plumbing is new; no original VGUI DLL is loaded.
#include "hud.h"
#include "cl_util.h"
#include "keydefs.h"
#include "item_descriptor.h"
#include "ui_draw.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace {
struct Item { std::string path; cof::Descriptor fields; };
Item slots[7];
bool visible, threeSlots;
bool imageVisible[7];
int selected;
const int slotX[] = {0, 36, 138, 240, 36, 138, 240};
const int slotY[] = {0, 73, 73, 73, 232, 232, 232};

bool ReadItem(const char* path, Item& item) {
    item = Item();
    if (!*path) return true;
    if (!cof::ValidDescriptorPath(path)) return false;
    int length = 0;
    byte* data = gEngfuncs.COM_LoadFile(const_cast<char*>(path), 5, &length);
    if (!data) return false;
    const bool valid = length > 0 && length <= 65536 &&
        cof::ParseDescriptor(std::string(reinterpret_cast<char*>(data), length), item.fields);
    gEngfuncs.COM_FreeFile(data);
    if (valid) item.path = path;
    return valid;
}

int InventoryMessage(const char*, int size, void* buffer) {
    // Do not let malformed packets leave a partly updated slot or read past the payload.
    if (size < 6 || !buffer) return 0;
    const auto* bytes = static_cast<const unsigned char*>(buffer);
    const char* path = reinterpret_cast<const char*>(bytes + 2);
    const char* end = static_cast<const char*>(std::memchr(path, 0, size - 5));
    if (!end || end - path > 127 || end - path + 6 != size || bytes[0] < 1 || bytes[0] > 6) return 0;
    Item item;
    if (!ReadItem(path, item)) {
        gEngfuncs.Con_Printf("COF_UI invalid item descriptor: %s\n", path);
        return 0;
    }
    const int slot = bytes[0];
    if (bytes[1]) { std::memset(imageVisible, 0, sizeof(imageVisible)); selected = 0; }
    slots[slot] = item;
    imageVisible[slot] = !item.path.empty();
    threeSlots = static_cast<unsigned char>(end[1]) != 0;
    if (bytes[1] || (selected == slot && item.path.empty()) || (threeSlots && selected > 3)) selected = 0;
    // The remaining flags suppress pickup notifications and select Glock tactical art.
    // Those weapon/notification paths are not implemented by the current key-only server.
    if (std::getenv("COF_INVENTORYTEST"))
        gEngfuncs.Con_Printf("COF_INVENTORY_CLIENT slot=%d item=%s\n", slot, item.fields["map_name"].c_str());
    return 1;
}
void Sound(const char* name) { gEngfuncs.pfnPlaySoundByName(const_cast<char*>(name), 1); }
void SetVisible(bool value) {
    if (visible == value) return;
    visible = value;
    selected = 0;
    gEngfuncs.pfnSetMouseEnable(value ? 1 : 0);
    Sound(value ? "inventory/inventory_open.wav" : "inventory/inventory_close.wav");
    if (value) gEngfuncs.pfnServerCmd("cof_inventory_sync\n");
}
void ToggleInventory() { SetVisible(!visible); }
void OpenInventory() { ToggleInventory(); }
void CloseInventory() {} // Original -inventory only releases the input key.
void SelectSlot(int slot) {
    if (!visible || slot < 1 || slot > (threeSlots ? 3 : 6) || slots[slot].path.empty()) return;
    selected = slot;
    Sound("inventory/inventory_toggle.wav");
}
void Slot1() { SelectSlot(1); }
void Slot2() { SelectSlot(2); }
void Slot3() { SelectSlot(3); }
void Slot4() { SelectSlot(4); }
void Slot5() { SelectSlot(5); }
void Slot6() { SelectSlot(6); }
int OriginX() { return ScreenWidth / 2 - 374; }
int OriginY() { return ScreenHeight / 2 - 240; }
bool Inside(int x, int y, int bx, int by, int w, int h) {
    return x >= bx && x < bx + w && y >= by && y < by + h;
}
int HoverSlot(int x, int y) {
    for (int slot = 1; slot <= (threeSlots ? 3 : 6); ++slot)
        if (Inside(x, y, slotX[slot], slotY[slot], 99, 99)) return slot;
    return 0;
}
void Click(int x, int y) {
    if (selected && Inside(x, y, slotX[selected] + 99, slotY[selected], 126, 126)) {
        const int action = (y - slotY[selected]) / 42;
        if (action == 0 && slots[selected].fields["classname"] == "item_key") {
            char command[40];
            std::snprintf(command, sizeof(command), "inventoryequip %d\n", selected);
            gEngfuncs.pfnServerCmd(command);
            selected = 0;
        } else {
            // Keep unsupported commands honest until their server behavior is recovered.
            Sound("inventory/inventory_no.wav");
            gEngfuncs.Con_Printf("COF_UI action not yet restored: %s\n", action == 1 ? "combine" : "drop/equip");
        }
        return;
    }
    const int hovered = HoverSlot(x, y);
    if (hovered && !slots[hovered].path.empty()) SelectSlot(hovered);
    else selected = 0;
}
}

bool CofInventoryVisible() { return visible; }
int CofInventoryKeyEvent(int down, int key, const char* binding) {
    if (!visible) return 1;
    // Let releases reach the engine, including keys held before the menu opened.
    if (!down) return 1;
    if (key == K_ESCAPE || key == K_TAB) { SetVisible(false); return 0; }
    if (key == K_MOUSE1) {
        int x, y; gEngfuncs.GetMousePosition(&x, &y);
        Click(x - OriginX(), y - OriginY());
        return 0;
    }
    if (key == K_MOUSE2) { selected = 0; return 0; }
    // Console and test/save/screenshot bindings remain available.
    if (key == '`' || (key >= K_F1 && key <= K_F12) ||
        (binding && (!std::strcmp(binding, "cof_inventory") || !std::strcmp(binding, "+inventory")))) return 1;
    return 0;
}

extern void CofUiTestInit();
void CofInventoryClientInit() {
    CofUiTestInit();
    for (auto& slot : slots) slot = Item();
    visible = false; threeSlots = false; selected = 0;
    std::memset(imageVisible, 0, sizeof(imageVisible));
    gEngfuncs.pfnSetMouseEnable(0);
    gEngfuncs.pfnHookUserMsg("Inventory", InventoryMessage);
    gEngfuncs.pfnAddCommand("cof_inventory", ToggleInventory);
    gEngfuncs.pfnAddCommand("+inventory", OpenInventory);
    gEngfuncs.pfnAddCommand("-inventory", CloseInventory);
    void (*commands[])() = {Slot1, Slot2, Slot3, Slot4, Slot5, Slot6};
    const char* names[] = {"cof_inv1", "cof_inv2", "cof_inv3", "cof_inv4", "cof_inv5", "cof_inv6"};
    for (int i = 0; i < 6; ++i) gEngfuncs.pfnAddCommand(const_cast<char*>(names[i]), commands[i]);
}
void CofInventoryVidInit() {
    // A video mode/map reset must release the pointer, including after loading a save.
    visible = false; selected = 0;
    gEngfuncs.pfnSetMouseEnable(0);
}
void CofInventoryDraw() {
    if (!visible) return;
    if (gHUD.m_Health.m_iHealth <= 0 || gHUD.m_iIntermission) { SetVisible(false); return; }
    const int x = OriginX(), y = OriginY();
    // Original full-screen black child and centered, native-size background image.
    gEngfuncs.pfnFillRGBABlend(0, 0, ScreenWidth, ScreenHeight, 0, 0, 0, 255);
    CofDrawImage("gfx/vgui/backgroundtoall.tga", ScreenWidth / 2 - 400, ScreenHeight / 2 - 300, 800, 600);
    CofDrawImage(threeSlots ? "gfx/vgui/640_inventory_three.tga" : "gfx/vgui/640_inventory.tga", x, y, 748, 480);
    int mx, my; gEngfuncs.GetMousePosition(&mx, &my);
    const int hover = HoverSlot(mx - x, my - y);
    for (int slot = 1; slot <= (threeSlots ? 3 : 6); ++slot) {
        if (slots[slot].path.empty() || !imageVisible[slot]) continue;
        CofDrawImage(slots[slot].fields["inventory_picture"].c_str(), x + slotX[slot] - 5, y + slotY[slot] - 5);
    }
    if (hover && !slots[hover].path.empty())
        CofDrawImage(slots[hover].fields["check_picture"].c_str(), x + 31, y + 348);
    if (hover && !slots[hover].path.empty()) {
        const int sx = x + slotX[hover], sy = y + slotY[hover];
        // ColorButton::paintBorder: half-white outline only while armed/hovered.
        gEngfuncs.pfnFillRGBABlend(sx, sy, 99, 1, 255, 255, 255, 127);
        gEngfuncs.pfnFillRGBABlend(sx, sy + 98, 99, 1, 255, 255, 255, 127);
        gEngfuncs.pfnFillRGBABlend(sx, sy, 1, 99, 255, 255, 255, 127);
        gEngfuncs.pfnFillRGBABlend(sx + 98, sy, 1, 99, 255, 255, 255, 127);
    }
    if (selected)
        CofDrawImage("gfx/vgui/inventory_items.tga", x + slotX[selected] + 94, y + slotY[selected] - 5, 126, 126);
}

#include "ui_runtime_tests.inc"
