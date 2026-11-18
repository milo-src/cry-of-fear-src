"""Build the open Xash3D engine for Windows x86 without CoF runtime binaries.

Requires Python 3.10+ and Visual Studio C++ Build Tools. Downloads the official
SDL2 development package, verified against a pinned SHA-256 digest. Only the
explicit runtime allowlist below is deployed; legacy Valve VGUI is excluded.
"""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import urllib.request
import zipfile
from prepare_engine import prepare

ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / 'build/engine'
RUNTIME = ROOT / 'out/runtime'
SDL_VERSION = '2.32.10'
SDL_ARCHIVE = f'SDL2-devel-{SDL_VERSION}-VC.zip'
SDL_URL = f'https://www.libsdl.org/release/{SDL_ARCHIVE}'
SDL_SHA256 = 'af347939395a58b365846aaea27391e69f9ec9d4dd650d6ac40802159b418a6e'


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    import sys
    if hasattr(sys.stdout, 'reconfigure'):
        sys.stdout.reconfigure(errors='replace')
    if os.name != 'nt':
        raise RuntimeError('This build entrypoint targets Windows x86.')
    subprocess.run([sys.executable, str(ROOT / 'tools/prepare_sdk.py')], check=True)
    engine = prepare()
    sdk_root = ROOT / 'deps/sdl2'
    sdk_root.mkdir(parents=True, exist_ok=True)
    archive = sdk_root / SDL_ARCHIVE
    if not archive.exists():
        print(f'Downloading {SDL_URL}', flush=True)
        urllib.request.urlretrieve(SDL_URL, archive)
    if sha256(archive) != SDL_SHA256:
        raise RuntimeError(f'SDL archive checksum mismatch: {archive}')
    with zipfile.ZipFile(archive) as package:
        package.extractall(sdk_root)
    sdl = sdk_root / f'SDL2-{SDL_VERSION}'
    vswhere = Path(os.environ.get('ProgramFiles(x86)', 'C:/Program Files (x86)')) / 'Microsoft Visual Studio/Installer/vswhere.exe'
    installations = json.loads(subprocess.check_output([
        str(vswhere), '-products', '*', '-version', '[17.0,18.0)',
        '-requires', 'Microsoft.VisualStudio.Component.VC.Tools.x86.x64',
        '-format', 'json', '-utf8'], encoding='utf-8'))
    if not installations:
        raise RuntimeError('Visual Studio 2022 C++ x86/x64 Build Tools are required.')
    msvc_version = '.'.join(installations[0]['installationVersion'].split('.')[:2])
    BUILD.mkdir(parents=True, exist_ok=True)
    env = dict(os.environ, PYTHONUTF8='1', PYTHONIOENCODING='utf-8', VSLANG='1033')
    commands = [
        ['configure', '-T', 'humanrights', '-o', str(BUILD), '--disable-werror',
         f'--sdl2={sdl}', '--gamedir=cryoffear', '--enable-bundled-deps',
         f'--msvc_version=msvc {msvc_version}', '--check-c-compiler=msvc',
         '--check-cxx-compiler=msvc'],
        ['build', f'-j{min(os.cpu_count() or 2, 8)}'],
    ]
    for command in commands:
        log = ROOT / 'build' / f'engine-{command[0]}.log'
        print(f'Engine {command[0]}: {log}', flush=True)
        with log.open('w', encoding='utf-8') as output:
            result = subprocess.run([sys.executable, 'waf', *command], cwd=engine,
                                    env=env, stdout=output, stderr=subprocess.STDOUT)
        if result.returncode:
            print(log.read_text(encoding='utf-8')[-12000:])
            raise RuntimeError(f'Engine {command[0]} failed; see {log}')
    artifacts = {
        BUILD / 'game_launch/xash3d.exe': 'xash3d.exe',
        BUILD / 'engine/xash.dll': 'xash.dll',
        BUILD / 'filesystem/filesystem_stdio.dll': 'filesystem_stdio.dll',
        BUILD / 'ref/gl/ref_gl.dll': 'ref_gl.dll',
        BUILD / 'ref/soft/ref_soft.dll': 'ref_soft.dll',
        BUILD / '3rdparty/mainui/menu.dll': 'menu.dll',
        BUILD / '3rdparty/extras/extras.pk3': 'cryoffear/extras.pk3',
        sdl / 'lib/x86/SDL2.dll': 'SDL2.dll',
    }
    manifest = {'engine_source': 'vendored external/xash3d-fwgs + src/cof/menu/Main.cpp',
                'sdl_url': SDL_URL, 'sdl_archive_sha256': SDL_SHA256,
                'compiler': f'MSVC {msvc_version}, x86', 'files': {}}
    for source, relative in artifacts.items():
        destination = RUNTIME / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, destination)
        manifest['files'][relative] = sha256(destination)
    (RUNTIME / 'engine-build-manifest.json').write_text(
        json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    print(f'Built and deployed standalone engine to {RUNTIME}')


if __name__ == '__main__':
    main()
