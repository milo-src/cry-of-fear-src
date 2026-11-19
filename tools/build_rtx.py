"""Build the optional x64 Vulkan path tracer with Waf and pinned RTGL1 DLLs."""
from pathlib import Path
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import urllib.request
import zipfile
from prepare_engine import prepare as prepare_engine
from prepare_game import prepare as prepare_game
from build_nri import prepare as prepare_nri

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = ROOT / 'out/runtime-rtx'
PACKAGE_SHA = '699da67f5a131b30185c8d25a6644ad679227a63befe967fffe8a2796b6c86fe'
PACKAGE_URL = 'https://github.com/boofiboi/xash-rt/releases/download/1.2.2/hl1-rt-improved_1.2.2_win.zip'
DLLS = ('RayTracedGL1.dll', 'NRI.dll', 'amd_fidelityfx_vk.dll',
        'nvngx_dlss.dll', 'nvngx_dlssd.dll', 'nvngx_dlssg.dll')

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def run_waf(source, build, args, env):
    for command in (['configure', '-o', str(build), *args], ['build', '-j8']):
        log = ROOT / 'build' / (build.name + '-' + command[0] + '.log')
        print(log, flush=True)
        with log.open('w', encoding='utf-8') as out:
            code = subprocess.call([sys.executable, 'waf', *command], cwd=source, env=env, stdout=out, stderr=subprocess.STDOUT)
        if code:
            print(log.read_text(encoding='utf-8', errors='replace')[-9000:])
            raise RuntimeError('Waf failed: ' + str(log))

def main():
    if hasattr(sys.stdout, 'reconfigure'): sys.stdout.reconfigure(errors='replace')
    package = ROOT / 'deps/rtx/rt-release.zip'
    package.parent.mkdir(parents=True, exist_ok=True)
    if not package.exists(): urllib.request.urlretrieve(PACKAGE_URL, package)
    if sha(package) != PACKAGE_SHA: raise RuntimeError('RTX release checksum mismatch')
    sdk = ROOT / 'deps/rtx/sdk'
    libdir = sdk / 'Build/x64-Release'
    libdir.mkdir(parents=True, exist_ok=True)
    shutil.copytree(ROOT/'external/rtgl1/Include', sdk/'Include', dirs_exist_ok=True)
    RUNTIME.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(package) as archive:
        for name in DLLS:
            data = archive.read('rt_bin/' + name)
            (libdir/name).write_bytes(data)
            (RUNTIME/name).write_bytes(data)
        # Generic tracer resources only: no original games, VGUI or replacement maps.
        for name in archive.namelist():
            if name.startswith('rt/shaders/') and name.endswith('.spv') or name in (
                    'rt/BlueNoise_LDR_RGBA_128.ktx2', 'rt/WaterNormal_n.ktx2', 'rt/DirtMask.ktx2'):
                target = RUNTIME/name
                target.parent.mkdir(parents=True, exist_ok=True)
                target.write_bytes(archive.read(name))
    vswhere = Path(os.environ['ProgramFiles(x86)'])/'Microsoft Visual Studio/Installer/vswhere.exe'
    installs = json.loads(subprocess.check_output([str(vswhere),'-products','*','-version','[17.0,18.0)',
        '-requires','Microsoft.VisualStudio.Component.VC.Tools.x86.x64','-format','json','-utf8'], encoding='utf-8'))
    vs = installs[0]
    compiler = 'msvc ' + '.'.join(vs['installationVersion'].split('.')[:2])
    toolsets = sorted((Path(vs['installationPath'])/'VC/Tools/MSVC').iterdir())
    lib = toolsets[-1]/'bin/Hostx64/x64/lib.exe'
    header = (sdk/'Include/RTGL1/RTGL1.h').read_text()
    exports = re.findall(r'^RGAPI\s+.*?RGCONV\s+(rg\w+)\s*\(', header, re.M)
    definition = libdir/'RayTracedGL1.def'
    definition.write_text('LIBRARY RayTracedGL1\nEXPORTS\n'+'\n'.join(exports)+'\n')
    subprocess.run([str(lib), '/nologo', '/machine:x64', '/def:'+str(definition), '/out:'+str(libdir/'RayTracedGL1.lib')], check=True)
    env = dict(os.environ, PYTHONUTF8='1', PYTHONIOENCODING='utf-8', VSLANG='1033', RTGL1_SDK_PATH=str(sdk), COF_REPO_ROOT=str(ROOT))
    # Owned numeric material sidecars, built by Waf separately from game assets.
    material_source=ROOT/'build/rtx-material-source'
    shutil.copytree(ROOT/'rtx_materials',material_source,dirs_exist_ok=True,
                    ignore=shutil.ignore_patterns('__pycache__'))
    shutil.copy2(ROOT/'external/xash-rt/waf',material_source/'waf')
    material_build=ROOT/'build/rtx-materials'
    run_waf(material_source,material_build,[],env)
    pack=json.loads((material_build/'pack.json').read_text())
    material_destination=RUNTIME/'rt/mat/cof_pbr'
    material_destination.mkdir(parents=True,exist_ok=True)
    materials={}
    for name,expected in pack['files'].items():
        source=material_build/name
        if sha(source)!=expected:raise RuntimeError('Material build mismatch: '+name)
        shutil.copy2(source,material_destination/name)
        materials['rt/mat/cof_pbr/'+name]=expected
    from prepare_rtx_shaders import prepare as prepare_shaders, verify as verify_shader
    shaders=prepare_shaders()
    run_waf(shaders,ROOT/'build/rtx-shaders',[],env)
    shader_hashes={}
    for name in ('EfWaves.comp.spv','CmPrepareFinal.comp.spv','RtVolumetric.rgen.spv','RtRaygenDirect.rgen.spv','RtRaygenPrimary.rgen.spv','RtRaygenReflRefr.rgen.spv','RtRaygenIndirectInit.rgen.spv','RtRaygenIndirectFinal.rgen.spv'):
        compiled=ROOT/'build/rtx-shaders'/name
        destination=RUNTIME/'rt/shaders'/name
        verify_shader(destination,compiled)
        shutil.copy2(compiled,destination)
        shader_hashes['rt/shaders/'+name]=sha(destination)
    nri = prepare_nri()
    run_waf(nri, ROOT/'build/nri', ['--msvc_version='+compiler,'--check-cxx-compiler=msvc'], env)
    shutil.copy2(ROOT/'build/nri/NRI.dll', RUNTIME/'NRI.dll')
    engine = prepare_engine(True)
    # Never let the upstream helper silently invoke a second build system.
    helper = engine/'scripts/waifulib/rtgl1.py'
    text = helper.read_text()
    start = text.index("\tLogs.info('RayTracedGL1 library not found.")
    end = text.index('\ndef configure(', start)
    helper.write_text(text[:start]+"\traise Errors.WafError('Pinned RTGL1 import library missing; run tools/build_rtx.py')\n\n"+text[end:])
    common = ['-8','-T','humanrights','--disable-werror','--msvc_version='+compiler,
              '--check-c-compiler=msvc','--check-cxx-compiler=msvc']
    sdl = ROOT/'deps/sdl2/SDL2-2.32.10'
    engine_build = ROOT/'build/engine-rtx'
    run_waf(engine, engine_build, common+['--enable-raytracing','--enable-bundled-deps',
             '--gamedir=cryoffear','--sdl2='+str(sdl)], env)
    game = prepare_game(True)
    game_build = ROOT/'build/game-rtx'
    run_waf(game, game_build, common, env)
    artifacts = {
        engine_build/'game_launch/xash3d.exe':'xash3d.exe',
        engine_build/'engine/xash.dll':'xash.dll',
        engine_build/'filesystem/filesystem_stdio.dll':'filesystem_stdio.dll',
        engine_build/'ref/gl/ref_gl.dll':'ref_gl.dll',
        engine_build/'3rdparty/mainui/menu.dll':'menu.dll',
        sdl/'lib/x64/SDL2.dll':'SDL2.dll',
    }
    for source, relative in artifacts.items(): shutil.copy2(source,RUNTIME/relative)
    for folder in ('cl_dll','dlls'):
        matches=list((game_build/folder).glob('*.dll'))
        if len(matches)!=1: raise RuntimeError('Unexpected game output: '+str(matches))
        destination=RUNTIME/'cryoffear'/('cl_dlls' if folder=='cl_dll' else 'dlls')
        destination.mkdir(parents=True,exist_ok=True)
        shutil.copy2(matches[0],destination/matches[0].name)
    # Share staged resource files via hard links, excluding all native modules.
    # Configs/save files remain independent writable copies.
    assets=ROOT/'out/runtime/cryoffear'
    for source in assets.rglob('*'):
        if not source.is_file() or source.suffix.lower() in ('.dll','.exe','.pdb','.log'):continue
        relative=source.relative_to(assets)
        if relative.parts[0] in ('cl_dlls','dlls','save'):continue
        destination=RUNTIME/'cryoffear'/relative
        destination.parent.mkdir(parents=True,exist_ok=True)
        if source.suffix.lower()=='.cfg' or len(relative.parts)==1:
            if not destination.exists():shutil.copy2(source,destination)
        elif not destination.exists(): os.link(source,destination)
    native={p.relative_to(RUNTIME).as_posix():sha(p) for p in RUNTIME.rglob('*') if p.suffix.lower() in ('.dll','.exe')}
    from import_menu_rain import stage as stage_menu_rain
    optics=stage_menu_rain(RUNTIME)
    (RUNTIME/'rtx-build-manifest.json').write_text(json.dumps(dict(architecture='x64',build='Waf',
        xash_rt_commit='72234513ab02502f16a5fa7e0f4e6c6a5c52f5e8',package_url=PACKAGE_URL,
        package_sha256=PACKAGE_SHA,files=native,
        shaders=shader_hashes,materials=materials,optics=optics),indent=2)+'\n')
    from audit_rtx import audit
    audit()
    print('Built optional Vulkan RT runtime:',RUNTIME)

if __name__=='__main__': main()
