"""Verify staged native modules against own Waf build outputs and the SDL manifest."""
import hashlib
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = ROOT / 'out/runtime'


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def audit():
    manifest = json.loads((RUNTIME / 'engine-build-manifest.json').read_text())
    expected = {name: sha for name, sha in manifest['files'].items() if Path(name).suffix.lower() in {'.dll', '.exe'}}
    for name, source in [('cryoffear/dlls/hl.dll', 'dlls/hl.dll'),
                         ('cryoffear/cl_dlls/client.dll', 'cl_dll/client.dll')]:
        expected[name] = digest(ROOT / 'build/game-waf' / source)
    actual = {p.relative_to(RUNTIME).as_posix() for p in RUNTIME.rglob('*') if p.suffix.lower() in {'.dll', '.exe'}}
    if actual != set(expected):
        raise RuntimeError(f'Unexpected or missing native modules: {actual ^ set(expected)}')
    for name, sha in expected.items():
        path = RUNTIME / name
        data = path.read_bytes()
        if digest(path) != sha:
            raise RuntimeError(f'Build provenance mismatch: {name}')
        pe = struct.unpack_from('<I', data, 0x3c)[0]
        if data[:2] != b'MZ' or data[pe:pe+4] != b'PE\0\0' or struct.unpack_from('<H', data, pe+4)[0] != 0x14c:
            raise RuntimeError(f'Expected x86 PE module: {name}')
    report = dict(native_modules=expected, result='pass',
                  game_build='Waf, MSVC x86, open HLSDK with explicit prototype adaptations',
                  engine_build='Waf, MSVC x86, open Xash3D',
                  third_party_runtime='Official SDL2; Windows and display/audio driver dependencies are provided by the OS',
                  original_cof_native_modules='none staged; game resources only')
    (RUNTIME / 'runtime-audit.json').write_text(json.dumps(report, indent=2) + '\n')
    print(f'PASS: {len(expected)} x86 native modules match own builds/official SDL; no extra game binaries')
    return report


if __name__ == '__main__':
    audit()
