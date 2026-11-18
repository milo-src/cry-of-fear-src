// Original CSaveLoad layout/actions, backed by this port's own Xash saves.
// Original saveinfoN.cof metadata is deliberately not treated as an Xash save.
#include "hud.h"
#include "cl_util.h"
#include "keydefs.h"
#include "ui_draw.h"
#include "ui_font.h"
#include <cstdio>
#include <string>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define HSPRITE Win32HSPRITE
#include <windows.h>
#undef HSPRITE
#endif
extern void CofGameMenuReturn();
namespace {
bool visible, saving, exists[5];
double clicked[5];
int selected = -1;
const int rows[] = {154,190,226,262,296};
std::string labels[5];
void Close() { visible = false; CofGameMenuReturn(); }
bool Inside(int x,int y,int bx,int by,int w,int h) { return x>=bx&&x<bx+w&&y>=by&&y<by+h; }
void Refresh() {
    for (int i = 0; i < 5; ++i) {
        exists[i] = false; clicked[i] = -1;
        char name[80]; std::snprintf(name,sizeof(name),"Slot %d - Empty",i+1); labels[i] = name;
#ifdef _WIN32
        const char* game = gEngfuncs.pfnGetGameDirectory();
        if (!game) continue;
        char basename[40]; std::snprintf(basename,sizeof(basename),"/save/cof_slot%d.sav",i+1);
        const std::string path = std::string(game)+basename;
        WIN32_FILE_ATTRIBUTE_DATA attributes;
        if (!GetFileAttributesExA(path.c_str(),GetFileExInfoStandard,&attributes) ||
            (attributes.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)) continue;
        exists[i] = true;
        FILETIME localTime; SYSTEMTIME stamp;
        if (FileTimeToLocalFileTime(&attributes.ftLastWriteTime,&localTime) && FileTimeToSystemTime(&localTime,&stamp))
            std::snprintf(name,sizeof(name),"Slot %d - %04u-%02u-%02u %02u:%02u",i+1,
                stamp.wYear,stamp.wMonth,stamp.wDay,stamp.wHour,stamp.wMinute);
        else std::snprintf(name,sizeof(name),"Slot %d",i+1);
        labels[i] = name;
#endif
    }
}
}
bool CofSaveLoadVisible() { return visible; }
void CofSaveLoadOpen() { Refresh(); saving = false; visible = true; selected = -1; gEngfuncs.pfnSetMouseEnable(1); }
void CofSaveMenuOpen() { CofSaveLoadOpen(); saving = true; }
void CofSaveLoadReset() { visible = false; saving = false; selected = -1; }
int CofSaveLoadKeyEvent(int down,int key,const char*) {
    if (!visible || !down) return 1;
    if (key == K_ESCAPE) { Close(); return 0; }
    if (key == K_MOUSE1) {
        int mx,my; gEngfuncs.GetMousePosition(&mx,&my); mx-=ScreenWidth/2-320; my-=ScreenHeight/2-240;
        if (Inside(mx,my,260,398,119,43)) { Close(); return 0; }
        for (int i = 0; i < 5; ++i) if (Inside(mx,my,93,rows[i],455,29)) {
            selected = i;
            const double now = gEngfuncs.GetClientTime();
            if ((saving || exists[i]) && clicked[i] >= 0 && now < clicked[i]) {
                char command[40]; std::snprintf(command,sizeof(command),"%s cof_slot%d\n",saving ? "save" : "load",i+1);
                if (saving) Close();
                else { visible = false; gEngfuncs.pfnSetMouseEnable(0); }
                gEngfuncs.pfnClientCmd(command);
            }
            clicked[i] = now + .5;
            break;
        }
        return 0;
    }
    if (key == '`' || (key >= K_F1 && key <= K_F12)) return 1;
    return 0;
}
void CofSaveLoadDraw() {
    if (!visible) return;
    const int x = ScreenWidth/2-320, y = ScreenHeight/2-240;
    CofDrawImage("gfx/vgui/save_load.tga",x,y);
    for (int i = 0; i < 5; ++i) {
        if (selected == i) gEngfuncs.pfnFillRGBABlend(x+93,y+rows[i],455,29,255,255,255,48);
        CofUiText(x+96,y+rows[i]+4,labels[i].c_str());
    }
}
