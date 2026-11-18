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
    shutil.copy2(ROOT/'tests/cof/vgui/console_runtime_tests.inc', folder/'console_runtime_tests.inc')
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
    shutil.copy2(ROOT/'tests/cof/vgui/chat_engine_tests.inc', target/'engine/client/chat_engine_tests.inc')
    with console.open('a') as stream:
        stream.write('\n#include "chat_engine_tests.inc"\n')
    replace_once(console, 'static void Con_MessageMode_f( void )',
        'static void CofChatInputTest_f(void);\nstatic void Con_MessageMode_f( void )')
    replace_once(console, '\tCmd_AddCommand( "messagemode",',
        '\tif(getenv("COF_CHATTEST")) Cmd_AddCommand("cof_chat_input_test",CofChatInputTest_f,"CoF opt-in chat test");\n\tCmd_AddCommand( "messagemode",')
    # CoF chat remains an engine input destination, not a modal MainUI window.
    replace_once(console, 'con_color, "240 180 24",', 'con_color, "255 255 255",')
    replace_once(console, 'static void Con_DrawNotify( void )\n{',
        'extern qboolean CofUIChatInput(int,const char*,const char*,int,unsigned,int);\n'
        'static void Con_DrawNotify( void )\n{')
    replace_once(console, '\t\tstring\tbuf;\n\t\tint\tlen;\n\n\t\t// update chatline position',
        '\t\tstring\tbuf;\n\t\tint\tlen;\n'
        '\t\tint r=255,g=255,b=255;\n'
        '\t\tsscanf(con_color.string,"%d %d %d",&r,&g,&b);\n'
        '\t\tunsigned color=0xff000000u|((unsigned)bound(0,r,255)<<16)|((unsigned)bound(0,g,255)<<8)|bound(0,b,255);\n'
        '\t\tif(CofUIChatInput(y,con.chat_cmd,con.chat.buffer,con.chat.cursor,color,((int)(host.realtime*4)&1)==0)) return;\n'
        '\n\t\t// update chatline position')
    replace_once(console, '\tint len = Q_strlen( edit->buffer );\n\n\tif( ch ==',
        '\tint len = Q_strlen( edit->buffer );\n'
        '\tif(edit==&con.chat && ch>=32 && len>=120) return;\n\n\tif( ch ==')
    shutil.copy2(source/'engine_chat.inc', target/'engine/client/cof_engine_chat.inc')
    replace_once(console, 'void Key_Message( int key )',
        '#include "cof_engine_chat.inc"\nvoid Key_Message( int key )')
    anchor = next(line for line in console.read_text().splitlines()
                  if 'Q_snprintf( buffer,' in line and 'con.chat_cmd, con.chat.buffer' in line)
    replace_once(console, anchor, '\t\t\tCofChatSanitize(con.chat.buffer);\n' + anchor)
    replace_once(console, 'static void Con_Clear_f( void )\n{',
        'extern void CofUIConsoleClear(void);\nstatic void Con_Clear_f( void )\n{\n\tCofUIConsoleClear();')
    replace_once(console, 'void Con_ToggleConsole_f( void )\n{',
        'extern qboolean CofUIConsoleToggle(void);\nextern void CofUIConsolePrint(const char*);\nvoid Con_ToggleConsole_f( void )\n{\n'
        '\tif (CofUIConsoleToggle()) return;')
    replace_once(console, 'void Con_Print( const char *txt )\n{',
        'void Con_Print( const char *txt )\n{\n\tCofUIConsolePrint(txt);')
    replace_once(console, 'scr_drawversion, "1",', 'scr_drawversion, "0",')
    replace_once(console, 'void Con_DrawVersion( void )\n{',
        'void Con_DrawVersion( void )\n{\n\tif( UI_IsVisible() ) return; // CoF GameUI has no Xash version overlay.\n')
    keys = target/'engine/client/input/in_keys.c'
    # Global grave key precedes client panels, chat and cinematic consumption.
    replace_once(keys, '\tif( OSK_KeyEvent( key, down ) )',
        '\tif( key == \'`\' || key == \'~\' )\n\t{\n'
        '\t\tkeys[key].down = down ? true : false;\n'
        '\t\tif( down && keys[key].repeats++ == 0 ) Con_ToggleConsole_f();\n'
        '\t\tif( !down ) keys[key].repeats = 0;\n\t\treturn;\n\t}\n'
        '\tif( OSK_KeyEvent( key, down ) )')
    replace_once(keys, "\t// console key is hardcoded, so the user can never unbind it\n\tif( key == '`' || key == '~' )\n\t{\n\t\t// we are in typing mode, so don't switch to console\n\t\tif( cls.key_dest == key_message || !down )\n\t\t\treturn;\n\n\t\tCon_ToggleConsole_f();\n\t\treturn;\n\t}\n", '')
    # Mouse buttons are dispatched during SDL event pumping, before the regular
    # frame cursor poll. Synchronize coordinates before hit testing/capture.
    mouse = target/'engine/client/input/input.c'
    replace_once(mouse, 'void IN_MouseEvent( int key, int down )\n{',
        'void IN_MouseEvent( int key, int down )\n{\n'
        '\tif( cls.key_dest == key_menu ) IN_MouseMove();')
    # Consume the text generated by the physical console key too (e.g. Russian
    # yo). Process grave before Ctrl/text-entry filtering in SDL's key adapter.
    sdl = target/'engine/platform/sdl2/host_sdl2.c'
    # The opt-in chat harness calls engine entrypoints directly. Physical input
    # from the shared desktop must not contaminate its scripted message buffers.
    replace_once(sdl, 'static void SDLash_KeyEvent( SDL_KeyboardEvent key )\n{',
        'static void SDLash_KeyEvent( SDL_KeyboardEvent key )\n{\n\tif(getenv("COF_CHATTEST")) return;')
    replace_once(sdl, 'static void SDLash_KeyEvent( SDL_KeyboardEvent key )',
        'static qboolean cof_console_text;\nstatic void SDLash_KeyEvent( SDL_KeyboardEvent key )')
    replace_once(sdl, '\tint keynum = key.keysym.scancode;',
        '\tint keynum = key.keysym.scancode;\n'
        '\tif( down ) cof_console_text = keynum == SDL_SCANCODE_GRAVE;\n'
        '\tif( keynum == SDL_SCANCODE_GRAVE ) { Key_Event( \'`\', down ); return; }')
    replace_once(sdl, '\tcase SDL_TEXTINPUT:\n\t\tSDLash_InputEvent( event->text );',
        '\tcase SDL_TEXTINPUT:\n'
        '\t\tif(getenv("COF_CHATTEST")) break;\n'
        '\t\tif( cof_console_text ) { cof_console_text = false; break; }\n'
        '\t\tSDLash_InputEvent( event->text );')
