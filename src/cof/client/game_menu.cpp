// Recovered CoF CGameMenu / CDifficulty presentation; see analysis/menu/vgui.md.
// The renderer/input bridge is a source-built Xash adaptation, not Valve VGUI.
#include "hud.h"
#include "cl_util.h"
#include "keydefs.h"
#include "ui_draw.h"
#include "ref_params.h"
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>

extern bool CofSecondaryMenuOpen(int action);
extern bool CofSecondaryMenuVisible();
extern void CofSecondaryMenuDraw();
extern int CofSecondaryMenuKeyEvent(int, int, const char*);
extern void CofSecondaryMenuReset();
extern bool CofSaveLoadVisible();
extern void CofSaveLoadOpen();
extern void CofSaveMenuOpen();
extern void CofSaveLoadDraw();
extern int CofSaveLoadKeyEvent(int, int, const char*);
extern void CofSaveLoadReset();
extern void CofMenuOpticsTestFrame();

namespace {
enum Panel { Closed, Main, Difficulty };
Panel panel;
bool menuWorld;
int hovered = -1;
unsigned unlockFlags;
std::string campaign;
bool menuRTX;
cvar_t *menuGlass, *menuParallax;
float menuLookX, menuLookY, menuOpticsTime;
int menuDrawX, menuDrawY;
bool MenuMotionActive() {
    return menuRTX && menuWorld && panel == Main &&
        !CofSecondaryMenuVisible() && !CofSaveLoadVisible() &&
        menuParallax && menuParallax->value > 0;
}
int MainRowX() { return ScreenWidth/2-140+menuDrawX; }
int MainRowY(int row) { return ScreenHeight-(11-row)*38+menuDrawY; }
const char* art[] = {"newgame", "loadgame", "customc", "jserver", "hserver",
                     "language", "unlockables", "extras", "options", "quit"};
bool Inside(int x, int y, int bx, int by, int w, int h) {
    return x >= bx && x < bx + w && y >= by && y < by + h;
}
void Sound() { gEngfuncs.pfnPlaySoundByName(const_cast<char*>("ui/3d_click.wav"), .5f); }
void Show(Panel next) {
    panel = next;
    hovered = -1;
    gEngfuncs.pfnSetMouseEnable(next != Closed);
}
int GameMenuMessage(const char*, int size, void*) {
    if (size != 0) return 0;
    menuWorld = true;
    CofSecondaryMenuReset();
    Show(Main);
    if (gEngfuncs.pfnGetCvarFloat("cof_menu_pending") == 1) {
        gEngfuncs.Cvar_SetValue("cof_menu_pending", 0);
        CofSecondaryMenuOpen(7);
    }
    gEngfuncs.Con_Printf("COF_MENU GameMenu received\n");
    return 1;
}
int UnlocksMessage(const char*, int size, void* data) {
    if ((size != 4 && size != 6) || !data) return 0;
    const unsigned char* bytes = static_cast<unsigned char*>(data);
    unlockFlags = unsigned(bytes[0]) | unsigned(bytes[1]) << 8 |
                  unsigned(bytes[2]) << 16 | unsigned(bytes[3]) << 24;
    return 1;
}
int VguiMenuMessage(const char*, int size, void* data) {
    if (size != 2 || !data) return 0;
    const unsigned char* bytes = static_cast<unsigned char*>(data);
    switch (bytes[0]) {
    case 32: Show(Difficulty); return 1;
    case 36: CofSecondaryMenuOpen(6); return 1;
    case 37: return GameMenuMessage("GameMenu", 0, nullptr);
    case 188: CofSecondaryMenuOpen(7); return 1;
    case 200:
    case 222:
        CofSecondaryMenuReset(); CofSaveLoadReset(); Show(Closed); return 1;
    }
    gEngfuncs.Con_Printf("COF_VGUI panel %d is not ported yet\n", bytes[0]);
    return 0;
}
int SaveLoadMessage(const char*, int size, void* data) {
    if (!data || size < 1) return 0;
    const unsigned char* bytes = static_cast<unsigned char*>(data);
    if (bytes[0] > 1 || (!bytes[0] && (size < 2 || !std::memchr(bytes + 1, 0, size - 1)))) return 0;
    if (bytes[0]) CofSaveLoadOpen(); else CofSaveMenuOpen();
    return 1;
}
void MainAction(int row) {
    Sound();
    switch (row) {
    case 0: campaign.clear(); Show(Difficulty); break;
    case 1: CofSaveLoadOpen(); break;
    case 2: CofSecondaryMenuOpen(3); break;
    case 3: gEngfuncs.pfnClientCmd("cof_menu_join\n"); break;
    case 4: gEngfuncs.pfnClientCmd("cof_menu_host\n"); break;
    case 5: CofSecondaryMenuOpen(6); break;
    case 6: CofSecondaryMenuOpen(7); break;
    case 7: CofSecondaryMenuOpen(8); break;
    case 8: gEngfuncs.pfnClientCmd("cof_menu_options\n"); break;
    case 9: gEngfuncs.pfnClientCmd("quit\n"); break;
    }
}
void CancelDifficulty() {
    Sound();
    campaign.clear();
    if (menuWorld) Show(Main);
    else {
        Show(Closed);
        const char* level = gEngfuncs.pfnGetLevelName();
        if (level && (std::strstr(level, "c_loadgame") || std::strstr(level, "c_difficulty_settings")))
            gEngfuncs.pfnClientCmd("returnmenu\n");
    }
}
void Click(int x, int y) {
    if (panel == Main) {
        for (int i = 0; i < 10; ++i)
            if (Inside(x, y, MainRowX(), MainRowY(i), 280, 38)) {
                MainAction(i); return;
            }
    } else if (panel == Difficulty) {
        x -= ScreenWidth / 2 - 320; y -= ScreenHeight / 2 - 240;
        if (Inside(x, y, 95, 409, 450, 47)) { CancelDifficulty(); return; }
        // No completed-game progression is fabricated: nightmare remains locked.
        for (int i = 0; i < ((unlockFlags & 0x20) ? 4 : 3); ++i)
            if (Inside(x, y, 120, 90 + i*75, 400, 75)) {
                char command[32];
                std::snprintf(command, sizeof(command), "skillset %d\n", i+1);
                Sound();
                if (!campaign.empty()) {
                    const std::string select = "campaign " + campaign + "\n";
                    gEngfuncs.pfnServerCmd(select.c_str());
                }
                gEngfuncs.pfnServerCmd(command); Show(Closed); return;
            }
    }
}
}

void CofGameMenuReturn() {
    CofSecondaryMenuReset(); CofSaveLoadReset();
    if (menuWorld) Show(Main);
    else {
        Show(Closed);
        const char* level = gEngfuncs.pfnGetLevelName();
        if (level && (std::strstr(level, "c_loadgame") || std::strstr(level, "c_difficulty_settings")))
            gEngfuncs.pfnClientCmd("returnmenu\n");
    }
}
unsigned CofGameMenuUnlockFlags() { return unlockFlags; }
void CofGameMenuCampaign(const char* firstMap) {
    if (!firstMap || !*firstMap || std::strlen(firstMap) > 63) return;
    for (const char* p = firstMap; *p; ++p)
        if (!((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
              (*p >= '0' && *p <= '9') || *p == '_' || *p == '-')) return;
    campaign = firstMap;
    Show(Difficulty);
}
bool CofGameMenuVisible() { return panel != Closed || CofSecondaryMenuVisible() || CofSaveLoadVisible(); }
bool CofGameMenuWorld() { return menuWorld; }
// Applied to the finished cinematic camera, never to player input/viewangles.
// Read the existing UI cursor only; no pointer warp, capture or focus changes.
void CofGameMenuView(ref_params_s* view) {
    if (!menuRTX || !menuWorld) return;
    if (view->paused) {
        gEngfuncs.Cvar_SetValue("cof_menu_glass_visible",0);
        return; // do not add offsets again to a cached paused view
    }
    float dt = std::fmax(0.f,std::fmin(view->frametime,.1f));
    menuOpticsTime += dt;
    float x=0,y=0;
    if (MenuMotionActive() && ScreenWidth>0 && ScreenHeight>0) {
        int mx,my; gEngfuncs.GetMousePosition(&mx,&my);
        if (mx>=0 && my>=0 && mx<ScreenWidth && my<ScreenHeight) {
            x=2.f*mx/ScreenWidth-1;
            y=2.f*my/ScreenHeight-1;
        }
    }
    // Test injection is engine-local; it never moves the operating-system cursor.
    if (std::getenv("COF_MENUOPTICSTEST") && MenuMotionActive()) {
        x=menuOpticsTime<14 ? -.85f : menuOpticsTime<28 ? .85f : 0;
        y=menuOpticsTime<14 ? -.65f : menuOpticsTime<28 ? .65f : 0;
    }
    float follow=1.f-std::exp(-dt*5.f);
    menuLookX+=(x-menuLookX)*follow;
    menuLookY+=(y-menuLookY)*follow;
    view->viewangles[0]+=menuLookY*.8f;
    view->viewangles[1]-=menuLookX*1.2f;
    // Keep the view basis consistent for engine effects and weather.
    gEngfuncs.pfnAngleVectors(view->viewangles,view->forward,view->right,view->up);
    gEngfuncs.Cvar_SetValue("cof_menu_glass_visible",panel!=Closed && menuGlass && menuGlass->value>0 ? 1:0);
    gEngfuncs.Cvar_SetValue("cof_menu_glass_time",menuOpticsTime);
}
void CofGameMenuInit() {
    panel = Closed; menuWorld = false; hovered = -1;
    const char* active=std::getenv("COF_RTX_ACTIVE");
    menuRTX=active && std::atoi(active)!=0;
    menuGlass=CVAR_CREATE("rt_menu_glass","1",FCVAR_ARCHIVE);
    menuParallax=CVAR_CREATE("rt_menu_parallax","1",FCVAR_ARCHIVE);
    CVAR_CREATE("cof_menu_glass_visible","0",0);
    CVAR_CREATE("cof_menu_glass_time","0",0);
    CVAR_CREATE("cof_menu_rain_film","0",0);
    CVAR_CREATE("cof_menu_rain_frame","-1",0);
    gEngfuncs.pfnHookUserMsg("GameMenu", GameMenuMessage);
    gEngfuncs.pfnHookUserMsg("Unlocks", UnlocksMessage);
    gEngfuncs.pfnHookUserMsg("VGUIMenu", VguiMenuMessage);
    gEngfuncs.pfnHookUserMsg("SaveLoad", SaveLoadMessage);
    gEngfuncs.pfnAddCommand("cof_savemenu", CofSaveMenuOpen);
}
void CofGameMenuVidInit() {
    menuLookX=menuLookY=menuOpticsTime=0;
    menuDrawX=menuDrawY=0;
    gEngfuncs.Cvar_SetValue("cof_menu_glass_visible",0);
    gEngfuncs.Cvar_SetValue("cof_menu_rain_film",0);
    gEngfuncs.Cvar_SetValue("cof_menu_rain_frame",-1);
    Show(Closed); CofSecondaryMenuReset(); CofSaveLoadReset();
    campaign.clear();
    const char* level = gEngfuncs.pfnGetLevelName();
    menuWorld = level && std::strstr(level, "game_menu");
    if (menuWorld) Show(Main);
    // Marker message is authoritative on the menu BSP. The difficulty-only
    // map is also reachable from the disconnected engine menu.
    if (level && std::strstr(level, "c_difficulty_settings")) Show(Difficulty);
    if (level && std::strstr(level, "c_loadgame")) CofSaveLoadOpen();
}
int CofGameMenuKeyEvent(int down, int key, const char* binding) {
    if (!CofGameMenuVisible()) return 1;
    if (CofSaveLoadVisible()) return CofSaveLoadKeyEvent(down, key, binding);
    if (CofSecondaryMenuVisible()) return CofSecondaryMenuKeyEvent(down, key, binding);
    if (!down) return 1;
    if (key == K_ESCAPE) {
        if (panel == Difficulty) { CancelDifficulty(); return 0; }
        return 1; // Engine pause menu exposes both original 3D/2D commands.
    }
    if (key == K_MOUSE1) {
        int x, y; gEngfuncs.GetMousePosition(&x, &y); Click(x, y); return 0;
    }
    if (key == '`' || (key >= K_F1 && key <= K_F12)) return 1;
    return 0;
}
void CofGameMenuDraw() {
    bool rainFilm=false;
    if(menuRTX && menuWorld && panel!=Closed && menuGlass && menuGlass->value>0)
        rainFilm=CofDrawMenuRain(menuOpticsTime,menuLookX,menuLookY);
    gEngfuncs.Cvar_SetValue("cof_menu_rain_film",rainFilm?1:0);
    if (CofSaveLoadVisible()) { CofSaveLoadDraw(); return; }
    if (CofSecondaryMenuVisible()) { CofSecondaryMenuDraw(); return; }
    if (panel == Difficulty) {
        CofDrawImage((unlockFlags & 0x20) ? "gfx/vgui/640_difficulty.tga" : "gfx/vgui/640_difficultylocked.tga",
                     ScreenWidth/2-320, ScreenHeight/2-240);
        return;
    }
    if (panel != Main) return;
    menuDrawX=MenuMotionActive() ? int(std::lround(-menuLookX*7.f)) : 0;
    menuDrawY=MenuMotionActive() ? int(std::lround(-menuLookY*4.f)) : 0;
    int mx, my; gEngfuncs.GetMousePosition(&mx, &my);
    int nextHover = -1;
    for (int i = 0; i < 10; ++i)
        if (Inside(mx, my, MainRowX(), MainRowY(i), 280, 38)) nextHover=i;
    if (nextHover != hovered && nextHover >= 0)
        gEngfuncs.pfnPlaySoundByName(const_cast<char*>("ui/3d_rollover.wav"), .5f);
    hovered = nextHover;
    // Keep the mean of the original 0..50 transparency range, without its
    // per-frame random flicker (requested presentation adjustment).
    CofDrawImage("gfx/vgui/menu_logo.tga", ScreenWidth/2-256+menuDrawX*2, ScreenHeight/2-198+menuDrawY*2,
                 512, 66, 0, 0, 1, 1, 1, 1, 1, 1.f-25.f/255.f);
    CofDrawImage("gfx/vgui/menu_logo_ts.tga", ScreenWidth-120-15, ScreenHeight-102-15);
    for (int i = 0; i < 10; ++i) {
        char path[96];
        std::snprintf(path, sizeof(path), "gfx/vgui/menu/%s%s.tga", art[i], i==hovered ? "_mo" : "");
        CofDrawImage(path, MainRowX() + (!menuRTX && i==hovered ? gEngfuncs.pfnRandomLong(-3,3) : 0),
                     MainRowY(i));
    }
    CofMenuOpticsTestFrame();
}

#include "menu_runtime_tests.inc"

#include "menu_optics_test.inc"
