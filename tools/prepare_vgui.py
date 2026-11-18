"""Integrate the source-owned CoF UI and console ABI into the disposable host."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def replace_once(path, anchor, replacement):
    text = path.read_text()
    if text.count(anchor) != 1:
        raise ValueError(f'Unexpected UI hook in {path}: {anchor}')
    path.write_text(text.replace(anchor, replacement))


def prepare_vgui(target):
    source = ROOT / 'src/cof/vgui'
    ui = target / '3rdparty/mainui'
    folder = ui / 'cof_vgui'
    folder.mkdir(exist_ok=True)
    for file in source.glob('*'):
        if file.suffix in ('.h', '.cpp'):
            shutil.copy2(file, folder / file.name)
    shutil.copy2(ROOT/'tests/cof/vgui/runtime_tests.inc', folder/'runtime_tests.inc')
    with (folder/'ui.cpp').open('a') as stream:
        stream.write('\n#include "runtime_tests.inc"\n')
    replace_once(ui/'wscript', "\t\t'*.cpp',", "\t\t'*.cpp',\n\t\t'cof_vgui/*.cpp',")
    replace_once(ui/'BaseMenu.cpp', 'void UI_Init( void )\n{',
        'namespace cof { namespace vgui { void Register(); } }\nvoid UI_Init( void )\n{\n\tcof::vgui::Register();')
    replace_once(ui/'BaseMenu.cpp', 'void UI_UpdateMenu( float flTime )\n{',
        'namespace cof { namespace vgui { void TestFrame(); } }\nvoid UI_UpdateMenu( float flTime )\n{\n\tcof::vgui::TestFrame();')
    # Route every options entry, including menu_options and client optionshack,
    # through the same recovered dialog. No stock configuration page remains.
    replace_once(ui/'menus/Configuration.cpp', 'ADD_MENU( menu_options, CMenuOptions, UI_Options_Menu );',
        'namespace cof { namespace vgui { void OpenOptions(); } }\n'
        'void UI_Options_Menu( void ) { cof::vgui::OpenOptions(); }\n'
        'ADD_COMMAND(menu_options, UI_Options_Menu);')
    exports = ui/'exports.txt'
    exports.write_text(exports.read_text() + '\nGetCofUIAPI\n')
    replace_once(ui/'font/FontRenderer.h', 'FONT_VGUI_EXACT = 1 << 3',
        'FONT_COF_CONTROL = 1 << 4,\n\tFONT_VGUI_EXACT = 1 << 3')
    replace_once(ui/'font/WinAPIFont.cpp', '((flags & FONT_VGUI_EXACT) ? 0 : 6)',
        '((flags & (FONT_VGUI_EXACT | FONT_COF_CONTROL)) ? 0 : 6)')
    shutil.copy2(source/'engine_bridge.h', target/'engine/cof_ui_engine_bridge.h')
    hooks = (source/'engine_hooks.inc').read_text()
    clui = target/'engine/client/dll_int/cl_gameui.c'
    replace_once(clui, 'gameui_static_t\tgameui;',
        '#include "../../cof_ui_engine_bridge.h"\ngameui_static_t\tgameui;\n' + hooks)
    replace_once(clui, '\tgameui.dllFuncs.pfnInit();', '\tCofUILoad();\n\tgameui.dllFuncs.pfnInit();')
    replace_once(clui, '\t// deinitialize game', '\tmemset(&cof_ui, 0, sizeof(cof_ui));\n\t// deinitialize game')
    console = target/'engine/client/console.c'
    replace_once(console, 'static void Con_Clear_f( void )\n{',
        'extern void CofUIConsoleClear(void);\nstatic void Con_Clear_f( void )\n{\n\tCofUIConsoleClear();')
    replace_once(console, 'void Con_ToggleConsole_f( void )\n{',
        'extern qboolean CofUIConsoleToggle(void);\nextern void CofUIConsolePrint(const char*);\nvoid Con_ToggleConsole_f( void )\n{\n'
        '\tif (host.allow_console && !UI_CreditsActive() && CofUIConsoleToggle()) return;')
    replace_once(console, 'void Con_Print( const char *txt )\n{',
        'void Con_Print( const char *txt )\n{\n\tCofUIConsolePrint(txt);')
    replace_once(console, 'scr_drawversion, "1",', 'scr_drawversion, "0",')
    replace_once(console, 'void Con_DrawVersion( void )\n{',
        'void Con_DrawVersion( void )\n{\n\tif( UI_IsVisible() ) return; // CoF GameUI has no Xash version overlay.\n')
