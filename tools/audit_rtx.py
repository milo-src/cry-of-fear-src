"""Verify the x64 runtime against Waf outputs and the pinned dependency archive."""
import hashlib
import json
from pathlib import Path
import struct
import zipfile
from build_rtx import ROOT, RUNTIME, DLLS, PACKAGE_SHA

def digest(data):return hashlib.sha256(data).hexdigest()

def audit():
    package=ROOT/'deps/rtx/rt-release.zip'
    if digest(package.read_bytes())!=PACKAGE_SHA:raise RuntimeError('RTX package checksum mismatch')
    sources={
        'xash3d.exe':'build/engine-rtx/game_launch/xash3d.exe',
        'xash.dll':'build/engine-rtx/engine/xash.dll',
        'ref_gl.dll':'build/engine-rtx/ref/gl/ref_gl.dll',
        'filesystem_stdio.dll':'build/engine-rtx/filesystem/filesystem_stdio.dll',
        'menu.dll':'build/engine-rtx/3rdparty/mainui/menu.dll',
        'NRI.dll':'build/nri/NRI.dll',
        'SDL2.dll':'deps/sdl2/SDL2-2.32.10/lib/x64/SDL2.dll',
        'cryoffear/cl_dlls/client_amd64.dll':'build/game-rtx/cl_dll/client_amd64.dll',
        'cryoffear/dlls/hl_amd64.dll':'build/game-rtx/dlls/hl_amd64.dll',
    }
    expected={name:digest((ROOT/source).read_bytes()) for name,source in sources.items()}
    with zipfile.ZipFile(package) as archive:
        expected.update({name:digest(archive.read('rt_bin/'+name)) for name in DLLS if name!='NRI.dll'})
        for name in archive.namelist():
            if name.startswith('rt/shaders/') and name.endswith('.spv') or name in (
                'rt/BlueNoise_LDR_RGBA_128.ktx2','rt/WaterNormal_n.ktx2','rt/DirtMask.ktx2'):
                if (RUNTIME/name).read_bytes()!=archive.read(name):raise RuntimeError('RT resource mismatch: '+name)
    actual={p.relative_to(RUNTIME).as_posix() for p in RUNTIME.rglob('*') if p.suffix.lower() in ('.dll','.exe')}
    if actual!=set(expected):raise RuntimeError('Unexpected native modules: '+str(actual^set(expected)))
    for name,sha in expected.items():
        data=(RUNTIME/name).read_bytes()
        if digest(data)!=sha:raise RuntimeError('Provenance mismatch: '+name)
        pe=struct.unpack_from('<I',data,0x3c)[0]
        if data[:2]!=b'MZ' or data[pe:pe+4]!=b'PE\0\0' or struct.unpack_from('<H',data,pe+4)[0]!=0x8664:
            raise RuntimeError('Expected x64 module: '+name)
    manifest=json.loads((RUNTIME/'rtx-build-manifest.json').read_text())
    if expected!=manifest['files']:raise RuntimeError('RTX manifest mismatch')
    report=dict(result='pass',native_modules=expected,original_cof_native_modules='none',build='Waf x64',
                external_binaries='Pinned RTGL1, FidelityFX, NVIDIA DLSS; official SDL2. NRI rebuilt with Waf.')
    (RUNTIME/'runtime-audit.json').write_text(json.dumps(report,indent=2)+'\n')
    print(f'PASS: {len(expected)} x64 modules; own engine/game/NRI, pinned tracing dependencies, no original game DLLs')
    return report

if __name__=='__main__':audit()
