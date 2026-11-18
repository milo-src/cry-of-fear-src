"""Bring the CoF client cursor contract to the disposable RT engine tree."""
from pathlib import Path
import shutil
from prepare_vgui import replace_once

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    header = target/'engine/client/input.h'
    replace_once(header, 'void IN_SetRelativeMouseMode( qboolean set );',
        'void IN_SetClientMouseVisible(qboolean visible);\n'
        'qboolean IN_ClientMouseIsVisible(void);\n'
        'void IN_SetRelativeMouseMode( qboolean set );')
    client = target/'engine/client/dll_int/cl_game.c'
    replace_once(client, 'static void GAME_EXPORT pfnSetMouseEnable( qboolean fEnable )\n{\n}',
        'static void GAME_EXPORT pfnSetMouseEnable( qboolean fEnable )\n{\n'
        '\tIN_SetClientMouseVisible(fEnable);\n}')
    folder = target/'engine/client/input'
    shutil.copy2(ROOT/'src/cof/input/client_cursor.inc', folder/'cof_client_cursor.inc')
    source = folder/'input.c'
    replace_once(source, 'static qboolean\tin_mouseinitialized;',
        'static qboolean\tin_mouseinitialized;\nstatic qboolean cof_client_mouse_visible;')
    text = source.read_text()
    if text.count('!host.mouse_visible && cls.state == ca_active') != 2:
        raise ValueError('RT mouse grab checks changed')
    source.write_text(text.replace('!host.mouse_visible && cls.state == ca_active',
        '!host.mouse_visible && !cof_client_mouse_visible && cls.state == ca_active'))
    replace_once(source, 'void IN_ActivateMouse( void )',
        '#include "cof_client_cursor.inc"\n\nvoid IN_ActivateMouse( void )')
    replace_once(source, '\t// find mouse movement',
        '\tif (cof_client_mouse_visible && !host.mouse_visible)\n'
        '\t\tPlatform_SetCursorType(dc_arrow);\n\n\t// find mouse movement')
    probe = ROOT/'tests/cof/engine/cursor_runtime_tests.inc'
    if probe.exists():
        shutil.copy2(probe, folder/'cof_cursor_tests.inc')
        replace_once(source, 'void Host_InputFrame( void )\n{',
            '#include "cof_cursor_tests.inc"\nvoid Host_InputFrame( void )\n{\n\tCofCursorTestFrame();')
    platform = target/'engine/platform/sdl2/in_sdl2.c'
    replace_once(platform, '\thost.mouse_visible = visible;',
        '\tif (!visible && IN_ClientMouseIsVisible()) return;\n\n'
        '\thost.mouse_visible = visible;')
    # Background client/menu updates must not hide or warp the desktop pointer.
    replace_once(platform, '\tVGui_UpdateInternalCursorState( type );',
        '\tVGui_UpdateInternalCursorState( type );\n'
        '\tif (!(SDL_GetWindowFlags(host.hWnd) & SDL_WINDOW_INPUT_FOCUS))\n'
        '\t{\n\t\tSDL_ShowCursor(SDL_TRUE);\n\t\treturn;\n\t}')
    # FOCUS_LOST may follow MINIMIZED and replace HOST_SLEEP with NOFOCUS.
    # Inspect the window itself before beginning any Vulkan frame.
    view = target/'engine/client/cl_view.c'
    replace_once(view, '#include "common.h"',
        '#if XASH_SDL == 2\n#include <SDL.h>\n#endif\n#include "common.h"')
    replace_once(view, '\tif( host.status == HOST_SLEEP )\n\t\treturn false;',
        '\tif( host.status == HOST_SLEEP )\n\t\treturn false;\n'
        '#if XASH_SDL == 2\n'
        '\tif (host.hWnd && (SDL_GetWindowFlags(host.hWnd) & SDL_WINDOW_MINIMIZED))\n'
        '\t\treturn false;\n#endif')
