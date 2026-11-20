"""Stage a portable test distribution; archive only its explicit file manifest.

Uses audited Waf runtimes, fresh repository defaults, and staged game resources.
Large immutable assets are hardlinked locally; ZIP contains ordinary file data.
Never edits installed game assets or includes personal saves/configs/caches.
"""
from pathlib import Path
import argparse
import hashlib
import json
import os
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / 'out/distribution/CryOfFear-Test-2026-11-19'
STATE = ROOT / 'build/test-package-files.json'
ASSET_DIRS = {'gfx','inventoryitems','maps','media','models','mp3','resource','sound','sprites','textures','events','rtx_menu'}
ASSET_EXT = {'.bsp','.wad','.mdl','.spr','.wav','.mp3','.ogg','.tga','.bmp','.png','.jpg','.jpeg','.dds','.txt','.seq','.lst','.lmp','.res','.custom','.chw','.scr','.ent','.pk3','.crn','.ttf','.otf','.avi','.webm'}


def digest(path):
    result=hashlib.sha256()
    with path.open('rb') as f:
        for block in iter(lambda:f.read(1024*1024),b''):result.update(block)
    return result.hexdigest()


def stage_crt():
    """Use Microsoft's app-local redistributables, never arbitrary System32 DLLs."""
    vswhere=Path(os.environ['ProgramFiles(x86)'])/'Microsoft Visual Studio/Installer/vswhere.exe'
    install=Path(subprocess.check_output([str(vswhere),'-latest','-products','*','-property','installationPath'],text=True).strip())
    versions=sorted((p for p in (install/'VC/Redist/MSVC').iterdir() if all(v.isdigit() for v in p.name.split('.'))),key=lambda p:tuple(map(int,p.name.split('.'))))
    crt=next(p for p in versions[-1].glob('x64/Microsoft.VC*.CRT') if (p/'vcruntime140_1.dll').exists())
    entries=json.loads(STATE.read_text())
    for p in crt.glob('*.dll'):
        shutil.copy2(p,DEST/'RTX'/p.name)
        entries.append('RTX/'+p.name)
    STATE.write_text(json.dumps(sorted(set(entries)),indent=2)+'\n')


def stage():
    from audit_runtime import audit as audit_normal
    from audit_rtx import audit as audit_rtx
    audit_normal();audit_rtx()
    if DEST.exists():raise RuntimeError('Distribution already exists; do not overwrite a shared build')
    DEST.mkdir(parents=True)
    entries=[]
    def copy(source, relative, link=False):
        out=DEST/relative;out.parent.mkdir(parents=True,exist_ok=True)
        if out.exists():out.unlink() # Break a staging hardlink before overlaying defaults.
        if link:os.link(source,out)
        else:shutil.copy2(source,out)
        entries.append(relative)
    def write(relative,text):
        path=DEST/relative;path.parent.mkdir(parents=True,exist_ok=True)
        path.write_text(text,encoding='utf-8',newline='\r\n')
        entries.append(relative)
    for mode,runtime in [('Normal','runtime'),('RTX','runtime-rtx')]:
        src=ROOT/'out'/runtime
        audit=json.loads((src/'runtime-audit.json').read_text())
        for name,sha in audit['native_modules'].items():
            if digest(src/name)!=sha:raise RuntimeError('Changed audited module: '+name)
            copy(src/name,mode+'/'+name)
        game=src/'cryoffear'
        for file in sorted(game.rglob('*')):
            if not file.is_file():continue
            rel=file.relative_to(game)
            if any(part.startswith('.') for part in rel.parts):continue
            if len(rel.parts)>1 and rel.parts[0] not in ASSET_DIRS:continue
            if file.suffix.lower() not in ASSET_EXT:continue
            if file.name.lower() in {'tempdecal.wad','cached.wad','qconsole.log'}:continue
            if rel.parts[0]=='maps' and file.stem.startswith('cof_'):continue
            copy(file,mode+'/cryoffear/'+rel.as_posix(),link=True)
        for file in (ROOT/'runtime').rglob('*'):
            if file.is_file():copy(file,mode+'/cryoffear/'+file.relative_to(ROOT/'runtime').as_posix())
        # Generated protocol, not the unadapted installed delta.lst.
        delta=mode+'/cryoffear/delta.lst'
        if delta not in entries:copy(game/'delta.lst',delta)
        if mode=='RTX':
            for file in sorted((src/'rt').rglob('*')):
                if file.is_file():copy(file,mode+'/'+file.relative_to(src).as_posix(),link=file.suffix.lower() not in {'.spv','.json','.cfg'})
    write('renderer.cfg','COF_RENDERER_V2 0 1 -1 3\n')
    write('Start.bat','@echo off\ncall "%~dp0launch.bat"\n')
    write('Start-Normal.bat','@echo off\ncall "%~dp0launch.bat" normal\n')
    write('Start-RTX.bat','@echo off\ncall "%~dp0launch.bat" rtx\n')
    write('launch.bat',r'''@echo off
setlocal
set "COF_RTX_ACTIVE=0"
set "COF_RTX_PROFILE=1"
set "COF_RTX_UPSCALER=-1"
set "COF_RTX_UPSCALE_QUALITY=3"
set "COF_RENDERER_SETTINGS=%~dp0renderer.cfg"
set "COF_RTX_AVAILABLE=1"
for /f "tokens=1-5" %%A in ('type "%COF_RENDERER_SETTINGS%" 2^>nul') do if "%%A"=="COF_RENDERER_V2" (
    if "%%B"=="1" set "COF_RTX_ACTIVE=1"
    for %%P in (0 1 2) do if "%%C"=="%%P" set "COF_RTX_PROFILE=%%P"
    for %%U in (-1 0 1 2) do if "%%D"=="%%U" set "COF_RTX_UPSCALER=%%U"
    for %%Q in (1 2 3 4 5) do if "%%E"=="%%Q" set "COF_RTX_UPSCALE_QUALITY=%%Q"
)
if /i "%~1"=="normal" set "COF_RTX_ACTIVE=0"
if /i "%~1"=="rtx" set "COF_RTX_ACTIVE=1"
set "GAME_DIR=%~dp0Normal"
if "%COF_RTX_ACTIVE%"=="1" set "GAME_DIR=%~dp0RTX"
set "VIDEO_ARGS="
if not exist "%GAME_DIR%\cryoffear\video.cfg" set "VIDEO_ARGS=-windowed -width 1280 -height 720"
cd /d "%GAME_DIR%"
start "" /d "%GAME_DIR%" "%GAME_DIR%\xash3d.exe" -game cryoffear -log %VIDEO_ARGS% +map c_game_menu1
endlocal
''')
    write('READ-ME.txt','''Cry of Fear — тестовая реконструкция, 19.11.2026

Полностью распакуйте ZIP в отдельную папку перед запуском.
Start.bat — запуск с выбранным в игре режимом (сначала обычный).
Start-Normal.bat — принудительно обычный OpenGL.
Start-RTX.bat — принудительно трассировка Vulkan.
При смене режима закройте игру и запустите Start.bat снова.
Python, исходный репозиторий и пути к Steam на компьютере автора не нужны.
Ресурсы включены. Звук включён. Первый запуск — окно 1280×720.
RTX требует совместимую видеокарту с аппаратной трассировкой и Vulkan.
Настройки и сохранения каждого режима хранятся отдельно в Normal/cryoffear и RTX/cryoffear.

Это незавершённый порт для проверки, не полная замена оригинальной игры.
Включены последние исправления телефона: RTX-пересвет и обычная подсветка.
Оригинальные игровые DLL не используются. Правообладатели ресурсов — авторы Cry of Fear.

WASD — ходьба, Shift — бег, Alt — рывок, Space — прыжок, Ctrl — приседание.
E — взаимодействие, Tab — инвентарь, R — перезарядка, Z — переключение оружия.
Для тестирования карт откройте консоль (~) и введите, например: map c_apartment3
При проблеме пришлите название карты, режим, действия, снимок и engine.log из папки режима.
Не запускайте оба режима одновременно.
''')
    for name,source in {
        'HLSDK':'external/hlsdk-portable/LICENSE','RTGL1':'external/rtgl1/LICENSE',
        'NRI':'external/nri/LICENSE.txt','SDL2':'deps/sdl2/SDL2-2.32.10/LICENSE.txt',
        'NVIDIA-DLSS':'external/rtgl1/licenses/NVIDIA-DLSS.txt','AMD-FidelityFX':'external/rtgl1/licenses/AMD-FidelityFX.txt',
    }.items():copy(ROOT/source,'Licenses/'+name+'.txt')
    entries=sorted(set(entries))
    STATE.write_text(json.dumps(entries,indent=2)+'\n')
    stage_crt()
    print('Staged',len(entries),'files in',DEST,flush=True)


def archive():
    entries=json.loads(STATE.read_text())
    files={}
    for i,name in enumerate(entries):
        p=DEST/name
        files[name]={'bytes':p.stat().st_size,'sha256':digest(p)}
        if i%2000==0:print('Hashing',i,'/',len(entries),flush=True)
    manifest=DEST/'FILES-SHA256.json'
    manifest.write_text(json.dumps({'files':files,'bytes':sum(x['bytes'] for x in files.values())},indent=2)+'\n')
    names=entries+['FILES-SHA256.json']
    listing=ROOT/'build/test-package-zip-list.txt'
    listing.write_text('\n'.join(DEST.name+'/'+s for s in names)+'\n',encoding='utf-8')
    output=DEST.with_suffix('.zip')
    if output.exists():raise RuntimeError('Archive exists; refusing to replace')
    seven=Path('C:/Program Files/7-Zip/7z.exe')
    subprocess.run([str(seven),'a','-tzip','-mx=3','-mmt=2','-scsUTF-8',str(output),'@'+str(listing)],cwd=DEST.parent,check=True)
    subprocess.run([str(seven),'t',str(output)],check=True)
    output.with_suffix('.zip.sha256').write_text(digest(output)+'  '+output.name+'\n')
    print('ARCHIVE_READY',output,'bytes=',output.stat().st_size,flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('action',choices=['stage','archive'])
    args=parser.parse_args()
    (stage if args.action=='stage' else archive)()
