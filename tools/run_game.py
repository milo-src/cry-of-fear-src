"""Launch the source-built prototype; never starts or loads the installed game."""
import argparse
from pathlib import Path
import re
import subprocess
import os
from renderer_settings import read_settings, rtx_available, SETTINGS

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = ROOT / 'out/runtime'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--map', default='c_game_menu1')
    parser.add_argument('--2d', dest='menu_2d', action='store_true', help='Start in the disconnected 2D menu')
    parser.add_argument('--renderer', choices=['normal','rtx'], help='Override saved choice for this launch only')
    parser.add_argument('--borderless', action='store_true', help='Borderless desktop window (uses the monitor resolution)')
    parser.add_argument('--width', type=int, default=1280, help='Window width (default: 1280)')
    parser.add_argument('--height', type=int, default=720, help='Window height (default: 720)')
    parser.add_argument('--dry-run', action='store_true', help='Validate and print the selected runtime without starting')
    args = parser.parse_args()
    if not (640 <= args.width <= 16384 and 480 <= args.height <= 16384):
        parser.error('Resolution must be between 640x480 and 16384x16384')
    enabled, profile = read_settings()
    if args.renderer: enabled = int(args.renderer == 'rtx')
    rt_runtime = ROOT / 'out/runtime-rtx'
    available = rtx_available(rt_runtime)
    if enabled and not available:
        raise SystemExit('RTX build is incomplete. Run build-rtx.bat, or start-game.bat --renderer normal.')
    runtime = rt_runtime if enabled else RUNTIME
    suffix = '_amd64' if enabled else ''
    if not re.fullmatch(r'[A-Za-z0-9_]+', args.map):
        parser.error('Map must be a plain map name')
    required = ['xash3d.exe', 'xash.dll', 'SDL2.dll', f'cryoffear/dlls/hl{suffix}.dll',
                f'cryoffear/cl_dlls/client{suffix}.dll', 'cryoffear/delta.lst', 'cryoffear/cryoffear.rc',
                f'cryoffear/maps/{args.map}.bsp']
    missing = [name for name in required if not (runtime / name).is_file()]
    if missing:
        raise SystemExit('Run build.bat first. Missing: ' + ', '.join(missing))
    command = [str(runtime / 'xash3d.exe'), '-game', 'cryoffear',
               '-borderless' if args.borderless else '-windowed',
               '-width', str(args.width), '-height', str(args.height), '-log']
    if not args.menu_2d:
        command += ['+map', args.map]
    else:
        command += ['+menu_main']
    env = dict(os.environ, COF_RENDERER_SETTINGS=str(SETTINGS), COF_RTX_AVAILABLE=str(int(available)),
               COF_RTX_ACTIVE=str(enabled), COF_RTX_PROFILE=str(profile))
    print(f'Renderer: {"Vulkan RTX" if enabled else "OpenGL"}; RTX profile: {("Performance","Balanced","Quality")[profile]}')
    if args.dry_run:
        print(subprocess.list2cmdline(command));return
    process = subprocess.Popen(command, cwd=runtime, env=env)
    print(f'Prototype started (PID {process.pid}). Log: {runtime / "engine.log"}')


if __name__ == '__main__':
    main()
