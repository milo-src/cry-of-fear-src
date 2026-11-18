// CoF secondary menu presentation. Addresses and limitations: analysis/menu/vgui.md.
// Native art, hitboxes and actions are recovered; Xash drawing/input is a port.
#include "hud.h"
#include "cl_util.h"
#include "keydefs.h"
#include "ui_draw.h"
#include "ui_font.h"
#include "item_descriptor.h"
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define HSPRITE Win32HSPRITE
#include <windows.h>
#undef HSPRITE
#endif

extern void CofGameMenuReturn();
extern void CofGameMenuCampaign(const char* firstmap);
extern unsigned CofGameMenuUnlockFlags();

namespace {
int panel, hover = -1, scroll;
struct Campaign { std::string firstmap, description, author; };
std::vector<Campaign> campaigns;
const char* extraArt[] = {"donate", "soundtrack1", "soundtrack2", "clothes", "aomdc", "facebook", "cancel"};
const unsigned unlockMask[] = {0x1f,0x20,0x400000,0x80000000u,0x1000000,0x800000,
    0x40,0x80000,0x100000,0x200000,0x80,0x100,0x200,0x400,0x800,0x1000,
    0x2000,0x4000,0x8000,0x10000,0x20000};
// Original installed CP1251 strings from10035e10; font atlas preserves these bytes.
const char* unlockNames[] = {
    "\xcf\xf0\xee\xf1\xec\xee\xf2\xf0\x20\xe4\xee\xf1\xf2\xf3\xef\xed\xfb\xf5\x20\xf1\xf2\xf0\xe0\xed\xe8\xf6\x20\xef\xee\xe4\xf1\xea\xe0\xe7\xee\xea\x2e",
    "\xca\xee\xf8\xec\xe0\xf0\xed\xfb\xe9\x20\xf0\xe5\xe6\xe8\xec\x20\xf1\xeb\xee\xe6\xed\xee\xf1\xf2\xe8\x2e",
    "\xca\xee\xec\xec\xe5\xed\xf2\xe0\xf0\xe8\xe8\x20\xf0\xe0\xe7\xf0\xe0\xe1\xee\xf2\xf7\xe8\xea\xee\xe2\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xec\xe5\xed\xfe\x20\xf1\xeb\xee\xe6\xed\xee\xf1\xf2\xe8\x2e",
    "\xcf\xf3\xf2\xfc\x20\xe4\xee\xea\xf2\xee\xf0\xe0\x2e\x20\xd9\xe5\xeb\xf7\xee\xea\x20\xe4\xeb\x60\x20\xe8\xe3\xf0\xfb\x2e",
    "\xcf\xcd\xc2\x20\x2d\x20\xed\xe0\xe6\xec\xe8\xf2\xe5\x20\x46\x2c\x20\xf7\xf2\xee\xe1\xfb\x20\xe2\xea\xeb\xfe\xf7\xe8\xf2\xfc\x2e",
    "\xd2\xe0\xe9\xed\xe0\x60\x20\xef\xee\xf1\xfb\xeb\xea\xe0\x2e",
    "\xc2\xe8\xed\xf2\xee\xe2\xea\xe0\x20\x46\x41\x4d\x41\x53\x2c\x20\xe1\xe5\xf1\xea\xee\xed\xe5\xf7\xed\xfb\xe5\x20\xe1\xee\xe5\xef\xf0\xe8\xef\xe0\xf1\xfb\x2e",
    "\xd2\xee\xef\xee\xf0\x20\x41\x6f\x4d\x2e",
    "\xca\xe0\xec\xe5\xf0\xe0\x20\xd1\xec\xe5\xf0\xf2\xe8\x2e",
    "\xca\xed\xe8\xe3\xe0\x20\xd1\xe0\xe9\xec\xee\xed\xe0\x2e",
    "\x44\x61\x76\x69\x64\x20\x4c\x65\x61\x74\x68\x65\x72\x68\x6f\x66\x66\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x4d\x6f\x64\x44\x42\x20\x68\x6f\x6f\x64\x69\x65\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x48\x65\x6c\x6c\x6f\x20\x4b\x69\x74\x74\x79\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x41\x66\x72\x61\x69\x64\x20\x6f\x66\x20\x4d\x6f\x6e\x73\x74\x65\x72\x73\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x43\x61\x6d\x6f\x75\x66\x6c\x61\x67\x65\x20\x68\x6f\x6f\x64\x69\x65\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x48\x61\x6c\x66\x2d\x4c\x69\x66\x65\x20\x43\x72\x65\x61\x74\x69\x6f\x6e\x73\x20\x68\x6f\x6f\x64\x69\x65\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x42\x6c\x61\x63\x6b\x20\x4d\x65\x74\x61\x6c\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x54\x65\x61\x6d\x20\x50\x73\x79\x6b\x73\x6b\x61\x6c\x6c\x61\x72\x20\x68\x6f\x6f\x64\x69\x65\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x41\x77\x65\x73\x6f\x6d\x65\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x53\x69\x63\x6b\x20\x53\x69\x6d\x6f\x6e\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e",
    "\x41\x6f\x4d\x20\x54\x77\x69\x74\x63\x68\x65\x72\x20\x73\x75\x69\x74\x20\x2d\x20\xf1\xec\x2e\x20\xe2\x20\xf2\xe0\xe9\xed\xee\xe9\x20\xea\xee\xec\xed\xe0\xf2\xe5\x2e"};
const char* lockedText = "\xc4\xe0\xed\xed\xfb\xe9\x20\xe1\xee\xed\xf3\xf1\x20\xef\xee\xea\xe0\x20\xed\xe5\x20\xe4\xee\xf1\xf2\xf3\xef\xe5\xed\x2e";
bool Inside(int x, int y, int bx, int by, int w, int h) {
    return x >= bx && x < bx + w && y >= by && y < by + h;
}
void Sound(const char* name = "ui/3d_click.wav") {
    gEngfuncs.pfnPlaySoundByName(const_cast<char*>(name), 1);
}
void Text(int x, int y, const std::string& text, bool centered = false) {
    CofUiText(x,y,text.c_str(),centered);
}
bool ValidMap(const std::string& map) {
    if (map.empty() || map.size() > 63) return false;
    for (unsigned char ch : map)
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
              (ch >= '0' && ch <= '9') || ch == '_' || ch == '-')) return false;
    return true;
}
void LoadCampaign(const char* name) {
    if (!name || std::strlen(name) > 240 || std::strchr(name, '/') || std::strchr(name, '\\')) return;
    std::string path = std::string("maps/") + name;
    int length = 0;
    byte* buffer = gEngfuncs.COM_LoadFile(const_cast<char*>(path.c_str()), 5, &length);
    if (!buffer) return;
    std::string data;
    if (length > 0 && length <= 65536) data.assign(reinterpret_cast<char*>(buffer), length);
    gEngfuncs.COM_FreeFile(buffer);
    size_t pos = 0;
    std::string key, value;
    Campaign record;
    while (cof::Token(data, pos, key)) {
        if (!cof::Token(data, pos, value)) return;
        if (key == "firstmap") record.firstmap = value;
        else if (key == "description") record.description = value.substr(0, 128);
        else if (key == "author") record.author = value.substr(0, 128);
        else return;
    }
    if (pos > data.size() || !ValidMap(record.firstmap)) return;
    if (record.description.empty()) record.description = record.firstmap;
    campaigns.push_back(record);
}
void LoadCampaigns() {
    campaigns.clear(); scroll = 0;
#ifdef _WIN32
    const char* directory = gEngfuncs.pfnGetGameDirectory();
    if (!directory || !*directory) return;
    std::string pattern = std::string(directory) + "/maps/*.custom";
    WIN32_FIND_DATAA entry;
    HANDLE search = FindFirstFileA(pattern.c_str(), &entry);
    if (search == INVALID_HANDLE_VALUE) return;
    do {
        if (!(entry.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) LoadCampaign(entry.cFileName);
    } while (campaigns.size() < 256 && FindNextFileA(search, &entry));
    FindClose(search);
#endif
}
void Back() { panel = 0; hover = -1; CofGameMenuReturn(); }
int Hit(int mx, int my) {
    int x = ScreenWidth / 2, y = ScreenHeight / 2;
    if (panel == 8) {
        x -= 400; y -= 300;
        for (int i = 0; i < 6; ++i) if (Inside(mx,my,x+100,y+92*i,600,92)) return i;
        if (Inside(mx,my,x+260,y+562,280,38)) return 6;
    } else if (panel == 6) {
        x -= 320; y -= 240;
        for (int i = 0; i < 7; ++i)
            if (Inside(mx,my,x+83+(i%3)*158,y+64+(i/3)*117,158,117)) return i;
    } else if (panel == 7) {
        x -= 400; y -= 300;
        for (int i = 0; i < 21; ++i)
            if (Inside(mx,my,x+85+(i%7)*90,y+139+(i/7)*90,90,90)) return i;
        if (Inside(mx,my,x+304,y+503,192,54)) return 50;
    } else if (panel == 3) {
        if (Inside(mx,my,x-325,y-262,650,512)) {
            const int row = (my-(y-262))/32+scroll;
            if (row < static_cast<int>(campaigns.size())) return row;
        }
        if (Inside(mx,my,0,y+262,ScreenWidth,32)) return 1000;
    }
    return -1;
}
void Click(int target) {
    if (target < 0) return;
    if (panel == 8) {
        if (target == 6) { Back(); return; }
        char command[40]; std::snprintf(command,sizeof(command),"cof_openextra %d\n",target+1);
        gEngfuncs.pfnClientCmd(command); Sound();
    } else if (panel == 6) {
        const int language[] = {1,7,5,2,3,4,6};
        char command[40]; std::snprintf(command,sizeof(command),"subtitleset %d\n",language[target]);
        gEngfuncs.pfnServerCmd(command); Sound(); Back();
    } else if (panel == 7) {
        if (target == 50) { Sound(); Back(); return; }
        if (!(CofGameMenuUnlockFlags() & unlockMask[target])) return;
        if (target == 3) { panel = 0; gEngfuncs.pfnClientCmd("map c_doc_city\n"); }
        else if (target == 0)
            gEngfuncs.Con_Printf("COF_MENU costume selection is not restored yet\n");
    } else if (panel == 3) {
        if (target == 1000) { Sound(); Back(); return; }
        // Original router exposes IDs50..79 despite256 allocated rows.
        if (target >= 30) return;
        const std::string map = campaigns[target].firstmap;
        panel = 0; hover = -1; Sound(); CofGameMenuCampaign(map.c_str());
    }
}
}

bool CofSecondaryMenuOpen(int action) {
    if (action != 3 && action != 6 && action != 7 && action != 8) return false;
    panel = action; hover = -1;
    if (action == 3) LoadCampaigns();
    gEngfuncs.pfnSetMouseEnable(1);
    gEngfuncs.Con_Printf("COF_MENU secondary=%d\n", panel);
    return true;
}
bool CofSecondaryMenuVisible() { return panel != 0; }
void CofSecondaryMenuReset() { panel = 0; hover = -1; campaigns.clear(); scroll = 0; }
int CofSecondaryMenuKeyEvent(int down, int key, const char*) {
    if (!panel || !down) return 1;
    if (key == K_ESCAPE) { Back(); return 0; }
    if (key == K_MOUSE1) { int x,y; gEngfuncs.GetMousePosition(&x,&y); Click(Hit(x,y)); return 0; }
    if (panel == 3 && (key == K_MWHEELUP || key == K_MWHEELDOWN)) {
        scroll += key == K_MWHEELUP ? -1 : 1;
        if (scroll < 0) scroll = 0;
        const int maximum = campaigns.size() > 16 ? static_cast<int>(campaigns.size())-16 : 0;
        if (scroll > maximum) scroll = maximum;
        return 0;
    }
    if (key == '`' || (key >= K_F1 && key <= K_F12)) return 1;
    return 0;
}
void CofSecondaryMenuDraw() {
    if (!panel) return;
    int mx,my; gEngfuncs.GetMousePosition(&mx,&my);
    const int hit = Hit(mx,my);
    if (hit != hover && hit >= 0 && panel == 8) Sound("ui/3d_rollover.wav");
    hover = hit;
    int x = ScreenWidth/2, y = ScreenHeight/2;
    if (panel == 8) {
        x -= 400; y -= 300;
        for (int i = 0; i < 7; ++i) {
            char art[100]; std::snprintf(art,sizeof(art),"gfx/vgui/menu/%s%s.tga",extraArt[i],hover==i?"_mo":"");
            CofDrawImage(art,x+(i==6?260:100),y+(i==6?562:92*i));
        }
    } else if (panel == 6) {
        CofDrawImage("gfx/vgui/language_settings.tga",x-320,y-240);
    } else if (panel == 7) {
        x -= 400; y -= 300;
        CofDrawImage("gfx/vgui/unlockables/unlockables_menu.tga",x,y);
        for (int i = 0; i < 21; ++i)
            if (!(CofGameMenuUnlockFlags() & unlockMask[i]))
                CofDrawImage("gfx/vgui/unlockables/unlockables_locked.tga",x+85+(i%7)*90,y+139+(i/7)*90);
        if (hover >= 0 && hover < 21)
            Text(x+400,y+428,(CofGameMenuUnlockFlags()&unlockMask[hover])?unlockNames[hover]:lockedText,true);
    } else if (panel == 3) {
        // Original scroll viewport is700x525 at center(-350,-262); rows650x32.
        for (int row = 0; row < 16 && row+scroll < static_cast<int>(campaigns.size()); ++row) {
            const int index = row+scroll;
            CofUiText(x,y-257+row*32,campaigns[index].description.c_str(),true,1,hover==index?0.f:1.f,hover==index?0.f:1.f);
        }
        if (campaigns.empty()) Text(x,y,"No custom campaigns found.",true);
        if (hover >= 0 && hover < static_cast<int>(campaigns.size())) Text(x,8,campaigns[hover].author,true);
        Text(x,y+269,"Cancel",true);
    }
}
