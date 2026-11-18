"""Launch the source-built prototype; never starts or loads the installed game."""
import argparse
from pathlib import Path
import re
import subprocess

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = ROOT / 'out/runtime'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--map', default='c_sdkmap1')
    args = parser.parse_args()
    if not re.fullmatch(r'[A-Za-z0-9_]+', args.map):
        parser.error('Map must be a plain map name')
    required = ['xash3d.exe', 'xash.dll', 'SDL2.dll', 'cryoffear/dlls/hl.dll',
                'cryoffear/cl_dlls/client.dll', 'cryoffear/delta.lst', 'cryoffear/cryoffear.rc',
                f'cryoffear/maps/{args.map}.bsp']
    missing = [name for name in required if not (RUNTIME / name).is_file()]
    if missing:
        raise SystemExit('Run build.bat first. Missing: ' + ', '.join(missing))
    command = [str(RUNTIME / 'xash3d.exe'), '-game', 'cryoffear', '-windowed',
               '-width', '1280', '-height', '720', '-log', '+map', args.map]
    process = subprocess.Popen(command, cwd=RUNTIME)
    print(f'Prototype started (PID {process.pid}). Log: {RUNTIME / "engine.log"}')


if __name__ == '__main__':
    main()
