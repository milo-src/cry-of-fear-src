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
int secondSelection, selectionMode;
Item quickslots[3];
int quickIndexes[3];
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
int QuickSlotsMessage(const char*,int size,void* buffer) {
    if(size!=3 || !buffer) return 0;
    const auto* bytes=static_cast<const unsigned char*>(buffer);
    for(int i=0;i<3;++i) if(bytes[i]>6) return 0;
    for(int i=0;i<3;++i) { quickIndexes[i]=bytes[i]; quickslots[i]=slots[bytes[i]]; }
    return 1;
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
    if (bytes[1]) {
        std::memset(imageVisible, 0, sizeof(imageVisible));
        selected = secondSelection = selectionMode = 0;
    }
    slots[slot] = item;
    for(int i=0;i<3;++i) if(quickIndexes[i]==slot) quickslots[i]=item;
    imageVisible[slot] = !item.path.empty();
    threeSlots = static_cast<unsigned char>(end[1]) != 0;
    if (bytes[1] || (selected == slot && item.path.empty()) || (threeSlots && selected > 3)) selected = 0;
    // The remaining flags suppress pickup notifications and select Glock tactical art.
    // Tactical-art switching and pickup notifications remain separate UI paths.
    if (std::getenv("COF_INVENTORYTEST"))
        gEngfuncs.Con_Printf("COF_INVENTORY_CLIENT slot=%d item=%s\n", slot, item.fields["map_name"].c_str());
    return 1;
}
void Sound(const char* name) { gEngfuncs.pfnPlaySoundByName(const_cast<char*>(name), 1); }
void SetVisible(bool value) {
    if (visible == value) return;
    visible = value;
    selected = 0;
    secondSelection = selectionMode = 0;
    gEngfuncs.pfnSetMouseEnable(value ? 1 : 0);
    Sound(value ? "inventory/inventory_open.wav" : "inventory/inventory_close.wav");
    if (value) gEngfuncs.pfnServerCmd("cof_inventory_sync\n");
}
void ToggleInventory() { SetVisible(!visible); }
void OpenInventory() { ToggleInventory(); }
void CloseInventory() {} // Original -inventory only releases the input key.
void SelectSlot(int slot) {
    if (!visible || slot < 1 || slot > (threeSlots ? 3 : 6) || slots[slot].path.empty()) return;
    if (secondSelection) {
        char command[256];
        const int first=secondSelection, mode=selectionMode;
        secondSelection=selectionMode=0;
        if (slot == first || slots[first].path.empty()) { Sound("inventory/inventory_no.wav"); return; }
        if (mode == 2 && !slots[slot].fields["classname"].empty()) {
            std::snprintf(command,sizeof(command),"inventorydualwield %d %d\n",first,slot);
        } else if (mode == 1 && !slots[slot].fields["combined_result"].empty() &&
                   !slots[first].fields["combined_result"].empty()) {
            const std::string& result=slots[first].fields["combined_result"];
            // Descriptor data is not allowed to inject another console command.
            if(result.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-")!=std::string::npos) {
                Sound("inventory/inventory_no.wav"); return;
            }
            std::snprintf(command,sizeof(command),"inventorycombine %d %d %s\n",first,slot,result.c_str());
        } else { Sound("inventory/inventory_no.wav"); return; }
        gEngfuncs.pfnServerCmd(command); selected=0; Sound("inventory/inventory_click.wav"); return;
    }
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
    const bool selectedWeapon=selected && slots[selected].fields["classname"].compare(0,7,"weapon_")==0;
    if (selected && Inside(x, y, slotX[selected] + 99, slotY[selected], 126, selectedWeapon?210:126)) {
        const int action = (y - slotY[selected]) / 42;
        const std::string& classname = slots[selected].fields["classname"];
        const bool weapon = classname.compare(0,7,"weapon_") == 0;
        if ((action == 0 && (classname == "item_key" || weapon)) || (action == 2 && weapon)) {
            char command[40];
            std::snprintf(command, sizeof(command), "%s %d\n", action == 2 ? "inventorydrop" : "inventoryequip", selected);
            gEngfuncs.pfnServerCmd(command);
            selected = 0;
        } else if (action == 1 || (action == 3 && weapon)) {
            secondSelection=selected; selectionMode=action==1?1:2; selected=0;
        } else if (action == 4 && weapon) {
            const int quick=(x-slotX[selected]-99)/42;
            char command[48]; std::snprintf(command,sizeof(command),"quickselset%d %d\n",quick+1,selected);
            quickIndexes[quick]=selected; quickslots[quick]=slots[selected]; gEngfuncs.pfnServerCmd(command); selected=0;
            Sound("inventory/inventory_click.wav");
        } else {
            // Keep unsupported commands honest until their server behavior is recovered.
            Sound("inventory/inventory_no.wav");
            gEngfuncs.Con_Printf("COF_UI action not yet restored: %s\n", action == 1 ? "combine" : "drop/equip");
        }
        return;
    }
    for(int quick=0;quick<3;++quick) if(Inside(x,y,403+102*quick,73,99,99)) {
        char command[32]; std::snprintf(command,sizeof(command),"quicksel %d\n",quick+1);
        gEngfuncs.pfnServerCmd(command); selected=0; return;
    }
    // Explicit port control for ending a pair; original server command retained.
    if(Inside(x,y,403,181,200,24)) { gEngfuncs.pfnServerCmd("inventoryunpair\n"); selected=0; return; }
    const int hovered = HoverSlot(x, y);
    if (hovered && !slots[hovered].path.empty()) SelectSlot(hovered);
    else selected = 0;
}
}

bool CofInventoryVisible() { return visible; }
bool CofInventoryQuickSlotsTest() {
    const Item saved[3]={quickslots[0],quickslots[1],quickslots[2]};
    const int indexes[3]={quickIndexes[0],quickIndexes[1],quickIndexes[2]};
    unsigned char valid[3]={1,0,6}, invalid[3]={1,7,6};
    bool ok=QuickSlotsMessage("CofQuickSlots",3,valid) && quickIndexes[0]==1 &&
        quickIndexes[1]==0 && quickIndexes[2]==6 && quickslots[0].path==slots[1].path;
    ok=ok && !QuickSlotsMessage("CofQuickSlots",2,valid) &&
        !QuickSlotsMessage("CofQuickSlots",3,invalid) && quickIndexes[1]==0;
    for(int i=0;i<3;++i) { quickslots[i]=saved[i]; quickIndexes[i]=indexes[i]; }
    return ok;
}
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
    if (key == K_MOUSE2) { selected = secondSelection = selectionMode = 0; return 0; }
    // Console and test/save/screenshot bindings remain available.
    if (key == '`' || (key >= K_F1 && key <= K_F12) ||
        (binding && (!std::strcmp(binding, "cof_inventory") || !std::strcmp(binding, "+inventory")))) return 1;
    return 0;
}

extern void CofUiTestInit();
void CofInventoryClientInit() {
    CofUiTestInit();
    for (auto& slot : slots) slot = Item();
    for (auto& slot : quickslots) slot = Item();
    for (int& index : quickIndexes) index=0;
    secondSelection=selectionMode=0;
    visible = false; threeSlots = false; selected = 0;
    std::memset(imageVisible, 0, sizeof(imageVisible));
    gEngfuncs.pfnSetMouseEnable(0);
    gEngfuncs.pfnHookUserMsg("Inventory", InventoryMessage);
    gEngfuncs.pfnHookUserMsg("CofQuickSlots", QuickSlotsMessage);
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
    secondSelection=selectionMode=0;
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
    for(int quick=0;quick<3;++quick) if(!quickslots[quick].path.empty())
        CofDrawImage(quickslots[quick].fields["quick_picture"].empty()?quickslots[quick].fields["inventory_picture"].c_str():
            quickslots[quick].fields["quick_picture"].c_str(),x+398+102*quick,y+68);
    gHUD.DrawHudString(x+403,y+185,ScreenWidth,"Unpair weapons",210,210,210);
    if(secondSelection) {
        const int sx=x+slotX[secondSelection], sy=y+slotY[secondSelection];
        const int alpha=96+(int(gEngfuncs.GetClientTime()*180)%128);
        gEngfuncs.pfnFillRGBABlend(sx,sy,99,2,255,0,0,alpha);
        gEngfuncs.pfnFillRGBABlend(sx,sy+97,99,2,255,0,0,alpha);
        gEngfuncs.pfnFillRGBABlend(sx,sy,2,99,255,0,0,alpha);
        gEngfuncs.pfnFillRGBABlend(sx+97,sy,2,99,255,0,0,alpha);
    }
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
        CofDrawImage(slots[selected].fields["classname"].compare(0,7,"weapon_") == 0 ?
            "gfx/vgui/inventory_weapons.tga" : "gfx/vgui/inventory_items.tga",
            x + slotX[selected] + 94, y + slotY[selected] - 5);
}

#include "ui_runtime_tests.inc"
