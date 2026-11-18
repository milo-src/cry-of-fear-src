// CoF's 2D GameUI main menu, hosted by the source-built MainUI backend.
// Evidence: analysis/menu/assets.md and GameUI.dll 0x1003d1d7/0x1003fa90.
// MainUI remains responsible for platform input, options and server browsing.
#include "BaseWindow.h"
#include "Action.h"
#include "YesNoMessageBox.h"
#include "MenuStrings.h"
#include "keydefs.h"
#include "BaseFontBackend.h"
#include <stdlib.h>

namespace
{
const char *MenuLabels[10] = {
    "COF_ResumeGame", "COF_NewGame", "COF_LoadGame", "COF_3DMenu", "COF_2DMenu",
    "COF_Unlockables", "COF_JoinCoop", "COF_CreateCoop", "GameUI_GameMenu_Options", "GameUI_GameMenu_Quit"
};

void SetPending(int value)
{
    EngFuncs::CvarRegister("cof_menu_pending", "0", 0);
    EngFuncs::CvarSetValue("cof_menu_pending", value);
}

void SinglePlayerMap(const char *map)
{
    EngFuncs::CvarSetValue("deathmatch", 0);
    EngFuncs::CvarSetValue("coop", 0);
    EngFuncs::CvarSetValue("teamplay", 0);
    EngFuncs::CvarSetValue("maxplayers", 1);
    UI_CloseMenu();
    char command[128];
    snprintf(command, sizeof(command), "disconnect\nmaxplayers 1\ndeathmatch 0\ncoop 0\nmap %s\n", map);
    EngFuncs::ClientCmd(false, command);
}

void To3DMenu()
{
    SetPending(0);
    SinglePlayerMap("c_game_menu1");
}

void ReturnMenu()
{
    SetPending(0);
    EngFuncs::ClientCmd(false, "disconnect\nmaxplayers 1\ndeathmatch 0\nmenu_main\n");
}

void BeginSinglePlayer() { SinglePlayerMap("c_difficulty_settings"); }
void LoadGame() { SinglePlayerMap("c_loadgame"); }
void Unlockables()
{
    SetPending(1);
    SinglePlayerMap("c_game_menu1");
}

void Options() { UI_Options_Menu(); }
void JoinServer() { UI_InternetGames_Menu(); }
void HostServer() { UI_CreateGame_Menu(); }
void OpenExtra()
{
    static const char *urls[] = {
        "http://www.cry-of-fear.com/donate.php", "http://www.cdbaby.com/cd/andreasronnberg",
        "http://www.cdbaby.com/cd/andreasronnberg2", "http://teampsykskallar.spreadshirt.se/",
        "http://www.moddb.com/mods/afraid-of-monsters-dc", "http://www.facebook.com/CryOfFearOfficial"
    };
    if (EngFuncs::CmdArgc() != 2) return;
    const char *arg = EngFuncs::CmdArgv(1);
    if (arg[0] < '1' || arg[0] > '6' || arg[1]) return;
    EngFuncs::ShellExecute(urls[arg[0] - '1'], NULL, false);
}

// CMenuEntry registration runs in UI_Init, before any game client is loaded.
ADD_COMMAND(to3dmenu, To3DMenu);
ADD_COMMAND(returnmenu, ReturnMenu);
ADD_COMMAND(beginspgame, BeginSinglePlayer);
ADD_COMMAND(cof_menu_options, Options);
ADD_COMMAND(cof_menu_join, JoinServer);
ADD_COMMAND(cof_menu_host, HostServer);
ADD_COMMAND(cof_menu_load, LoadGame);
ADD_COMMAND(cof_openextra, OpenExtra);

class CofMenuAction : public CMenuAction
{
public:
    CofMenuAction() : paintEnabled(false) {}
    bool paintEnabled;
    bool MouseMove(int, int) override
    {
        if (!(iFlags & QMF_HASMOUSEFOCUS))
            EngFuncs::PlayLocalSound("UI/buttonrollover.wav");
        return true;
    }
    bool KeyDown(int key) override
    {
        const bool accepted = UI::Key::IsEnter(key) ||
            (UI::Key::IsLeftMouse(key) && (iFlags & QMF_HASMOUSEFOCUS));
        if (!accepted) return false;
        if (!IsPressed()) EngFuncs::PlayLocalSound("UI/buttonclick.wav");
        _Event(QM_PRESSED);
        return true;
    }
    bool KeyUp(int key) override
    {
        if (!UI::Key::IsEnter(key) && !UI::Key::IsLeftMouse(key)) return false;
        const bool activate = IsPressed() && (UI::Key::IsEnter(key) || (iFlags & QMF_HASMOUSEFOCUS));
        m_bPressed = false;
        if (activate)
        {
            EngFuncs::PlayLocalSound("UI/buttonclickrelease.wav");
            _Event(QM_RELEASED);
        }
        return true;
    }
    void Draw() override
    {
        if (!paintEnabled) return;
        // GameMenuItem has transparent background, no border/shadow, west
        // alignment and zero text insets. Draw at native font metrics.
        const bool armed = (iFlags & (QMF_HASMOUSEFOCUS | QMF_HASKEYBOARDFOCUS)) != 0;
        const unsigned int color = armed ? (IsPressed() ? 0xffc0ba50 : 0xffffffff) : 0xffc8c8c8;
        const int tall = g_FontMgr->GetFontTall(font);
        UI_DrawString(font, m_scPos.x, m_scPos.y + (m_scSize.h - tall) / 2,
            m_scSize.w, tall, szName, color, tall, QM_TOPLEFT,
            ETF_FORCECOL | ETF_NOSIZELIMIT | ETF_NO_WRAP);
    }
};
}

class CMenuMain : public CMenuBaseWindow
{
public:
    CMenuMain() : CMenuBaseWindow("Cof2DMenu"), m_connected(false), m_single(true), m_font(0), m_revealStart(-1) {}
    bool IsRoot() const override { return true; }
    void Show() override
    {
        CMenuBaseWindow::Show();
        DisableTransition(); // VGUI reveals rows; it does not fade the whole menu.
        m_revealStart = -1;
        for (int i = 0; i < 10; ++i) m_actions[i].paintEnabled = false;
    }
    bool KeyDown(int key) override
    {
        if (UI::Key::IsEscape(key))
        {
            if (CL_IsActive()) UI_CloseMenu();
            else Quit();
            return true;
        }
        return CMenuBaseWindow::KeyDown(key);
    }
    void Think() override
    {
        const double now = EngFuncs::DoubleTime();
        if (m_revealStart < 0) m_revealStart = now;
        // Original 1003f830 reveals children from the end every .03 seconds.
        // Hidden rows retain their child index; filtering does not close gaps.
        const int revealed = (int)((now - m_revealStart) / 0.03);
        for (int i = 0; i < 10; ++i) m_actions[i].paintEnabled = i >= 10 - revealed;
        bool connected = CL_IsActive();
        bool single = gpGlobals->maxClients < 2;
        bool labelsChanged = false;
        // Commands can open this window before the first frame initializes
        // MainUI's localization dictionary. Refresh without storing stale keys.
        for (int i = 0; i < 10; ++i)
        {
            const char *label = L(MenuLabels[i]);
            if (label != m_actions[i].szName)
            {
                m_actions[i].szName = label;
                labelsChanged = true;
            }
        }
        if (labelsChanged || connected != m_connected || single != m_single)
        {
            Layout();
            CalcItemsPositions();
            CalcItemsSizes();
        }
        CMenuBaseWindow::Think();
    }
private:
    void _Init() override
    {
        EngFuncs::CvarRegister("cof_menu_pending", "0", 0);
        void (*actions[9])() = { UI_CloseMenu, BeginSinglePlayer, LoadGame, To3DMenu, ReturnMenu,
                                Unlockables, JoinServer, HostServer, Options };
        for (int i = 0; i < 10; ++i)
        {
            m_actions[i].SetNameAndStatus(L(MenuLabels[i]), NULL);
            m_actions[i].iFlags = QMF_DISABLESCAILING | QMF_SILENT;
            m_actions[i].colorBase = 0xffc8c8c8;
            m_actions[i].colorFocus = 0xffffffff;
            m_actions[i].eFocusAnimation = QM_HIGHLIGHTIFFOCUS;
            m_actions[i].eTextAlignment = QM_LEFT;
            m_actions[i].charSize = 18;
            if (i < 9) m_actions[i].onReleased = actions[i];
            else m_actions[i].onReleased = VoidCb(&CMenuMain::Quit);
            AddItem(m_actions[i]);
        }
        m_dialog.Link(this);
    }
    void _VidInit() override
    {
        iFlags = QMF_DISABLESCAILING;
        SetRect(0, 0, ScreenWidth, ScreenHeight);
        // The console also uses Tahoma: matching by family alone would select
        // its smaller normal-weight face. Validate the complete font request.
        CBaseFont *font = g_FontMgr->GetIFontFromHandle(m_font);
        if (!font || !font->IsEqualTo("Tahoma", 18, 1000, 0, FONT_VGUI_EXACT))
            m_font = CFontBuilder("Tahoma", 18, 1000).SetFlags(FONT_VGUI_EXACT).Create();
        for (int i = 0; i < 10; ++i) m_actions[i].font = m_font;
        Layout();
    }
    void Layout()
    {
        m_connected = CL_IsActive();
        m_single = gpGlobals->maxClients < 2;
        int count = 0;
        for (int i = 0; i < 10; ++i)
        {
            bool visible = !((i == 0 || i == 4) && !m_connected)
                           && !((i == 6 || i == 7) && m_connected && m_single);
            m_actions[i].SetVisibility(visible);
            if (visible) ++count;
        }
        // Original GameUI uses actual pixels, without 640/1024 scaling.
        int y = ScreenHeight - count * 28 - 64;
        // Menu::CalculateWidth (GameUI 10096249) includes every item, even
        // hidden entries, and adds eight pixels to the widest content size.
        // Menu::SizeMenuItems (10096579) applies this same width to all rows.
        int width = 0;
        for (int i = 0; i < 10; ++i)
        {
            const int itemWidth = g_FontMgr->GetTextWideScaled(m_font, m_actions[i].szName, 18) + 8;
            if (itemWidth > width) width = itemWidth;
        }
        for (int i = 0; i < 10; ++i)
        {
            if (!m_actions[i].IsVisible()) continue;
            m_actions[i].SetRect(32, y, width, 28);
            y += 28;
        }
    }
    void Quit()
    {
        m_dialog.SetMessage(L("GameUI_QuitConfirmationText"));
        m_dialog.onPositive.SetCommand(false, "quit\n");
        m_dialog.Show();
    }
    CofMenuAction m_actions[10];
    CMenuYesNoMessageBox m_dialog;
    bool m_connected, m_single;
    HFont m_font;
    double m_revealStart;
};

ADD_MENU(menu_main, CMenuMain, UI_Main_Menu);

static void Cof2DTest()
{
    UI_Main_Menu();
    Con_Printf("COF_MENU_2D_READY width=%d height=%d\n", (int)ScreenWidth, (int)ScreenHeight);
}
ADD_COMMAND(cof_menu_2d_test, Cof2DTest);

// Called before MainUI's inactive-menu early return, so the fixture survives
// disconnect and runs while the client owns the 3D overlay.
void CofMenuTestFrame()
{
    if (getenv("COF_MENU2DTEST"))
    {
        static double begin = EngFuncs::DoubleTime();
        static int shot = 0;
        const double elapsed = EngFuncs::DoubleTime() - begin;
        if (!shot && elapsed > 4)
        {
            Con_Printf("COF_MENU_2D_RENDERED\n");
            EngFuncs::ClientCmd(false, "snapshot\n");
            shot = 1;
        }
        if (shot == 1 && elapsed > 5)
        {
            EngFuncs::ClientCmd(false, "quit\n");
            shot = 2;
        }
        return;
    }
    if (!getenv("COF_MENUTEST")) return;
    static int phase = 0;
    static double entered = 0;
    const double now = EngFuncs::DoubleTime();
    if (!entered) entered = now;
    if (phase == 0 && !EngFuncs::ClientInGame()) entered = now;
    if (phase == 0 && EngFuncs::ClientInGame() && now - entered > 12)
    {
        Con_Printf("COF_MENU_ROUNDTRIP 3d\n");
        EngFuncs::ClientCmd(false, "snapshot\n");
        entered = now;
        phase = 1;
    }
    else if (phase == 1 && now - entered > 1)
    {
        ReturnMenu();
        entered = now;
        phase = 2;
    }
    else if (phase == 2 && !EngFuncs::ClientInGame() && now - entered > 3)
    {
        Con_Printf("COF_MENU_ROUNDTRIP 2d\n");
        EngFuncs::ClientCmd(false, "snapshot\n");
        entered = now;
        phase = 3;
    }
    else if (phase == 3 && now - entered > 1)
    {
        To3DMenu();
        entered = now;
        phase = 4;
    }
    else if (phase == 4 && EngFuncs::ClientInGame() && now - entered > 8)
    {
        Con_Printf("COF_MENU_ROUNDTRIP returned\n");
        EngFuncs::ClientCmd(false, "snapshot\n");
        entered = now;
        phase = 5;
    }
    else if (phase == 5 && now - entered > 1)
    {
        Con_Printf("COF_MENU_ROUNDTRIP complete\n");
        EngFuncs::ClientCmd(false, "quit\n");
        phase = 6;
    }
}
