"""Exercise maps/UI silently on an isolated desktop; optional --readback captures GPU images for review."""
import argparse
import ctypes as C
from ctypes import wintypes as W
import json
import math
import os
from pathlib import Path
import re
import subprocess
import time
from PIL import Image, ImageGrab
from renderer_settings import ROOT
from test_desktop import TestDesktop

def capture(pid, path):
    user = C.WinDLL('user32', use_last_error=True)
    user.GetForegroundWindow.restype = W.HWND
    user.GetWindowThreadProcessId.argtypes = [W.HWND, C.POINTER(W.DWORD)]
    user.WindowFromPoint.argtypes = [W.POINT]
    user.WindowFromPoint.restype = W.HWND
    user.SetProcessDPIAware()
    windows = []
    callback = C.WINFUNCTYPE(W.BOOL, W.HWND, W.LPARAM)
    @callback
    def visit(hwnd, unused):
        owner = W.DWORD();user.GetWindowThreadProcessId(hwnd, C.byref(owner))
        name = C.create_unicode_buffer(128);user.GetClassNameW(hwnd, name, 128)
        if owner.value == pid and name.value.startswith('SDL'): windows.append(hwnd)
        return True
    user.EnumWindows(visit, 0)
    if not windows: raise RuntimeError('Game SDL window missing')
    hwnd=windows[0]
    # Interactive capture is passive: the user must expose the window.
    # Never raise, activate, restore or move it on their behalf.
    rect=W.RECT();point=W.POINT();user.GetClientRect(hwnd,C.byref(rect));user.ClientToScreen(hwnd,C.byref(point))
    def check_visible():
        if rect.right <= 0 or rect.bottom <= 0:
            raise RuntimeError('Game window is not visible; no capture')
        for x in (2,rect.right//2,rect.right-3):
            for y in (2,rect.bottom//2,rect.bottom-3):
                if user.WindowFromPoint(W.POINT(point.x+x,point.y+y))!=hwnd:
                    raise RuntimeError('Game window is occluded; capture refused without raising it')
    check_visible()
    frame=ImageGrab.grab(bbox=(point.x,point.y,point.x+rect.right,point.y+rect.bottom))
    check_visible()
    if max(frame.convert('L').getextrema())-min(frame.convert('L').getextrema())<8:
        raise RuntimeError('Window capture is blank; no visual verification')
    frame.save(path)

def check_ui_pixels(path, marker, connected):
    """Check actual 1280x720 output, including the multitexture HUD regression."""
    frame=Image.open(path).convert('RGB')
    if frame.size!=(1280,720):raise RuntimeError('Unexpected UI capture size')
    if marker in ('keyboard window visible','advanced scrollbar visible','console window visible'):
        x,top,bottom=(40,45,390) if marker=='console window visible' else (384,165,550)
        visible=sum(min(frame.getpixel((x,y)))>100 for y in range(top,bottom))
        if visible/(bottom-top)<.9:raise RuntimeError('Solid VGUI frame disappeared: '+marker)
    if connected:
        # The two narrow health/stamina sprites have a dark gap; an untextured
        # sprite quad fills this entire area white (the reported regression).
        pixels=[frame.getpixel((x,y)) for y in range(570,675) for x in range(57,71)]
        if sum(min(p)>220 for p in pixels)/len(pixels)>.8:
            raise RuntimeError('HUD sprites became solid white rectangles')

def check_menu_night_materials(path):
    """24-second authored camera: catch the reported glowing train/green water.

    Exclude UI, bridge pillars and train windows from the body sample. Medians
    and a window percentile tolerate moving snow and small capture-time skew.
    These are regression bounds, not a pixel-equality claim for the RT image.
    """
    import statistics
    frame=Image.open(path).convert('RGB')
    def pixels(box):return list(frame.crop(box).get_flattened_data())
    def brightness(p):return sum(p)/3
    body=statistics.median(map(brightness,pixels((210,374,285,381))))
    windows=sorted(map(brightness,pixels((218,357,290,369))))
    window95=windows[int(len(windows)*.95)]
    water=pixels((70,580,420,680))
    water_level=statistics.median(map(brightness,water))
    green=statistics.mean(g-(r+b)/2 for r,g,b in water)
    if body>25:raise RuntimeError('Menu train body is overlit')
    if window95<30:raise RuntimeError('Authored train window overlay disappeared')
    if window95>165:raise RuntimeError('Additive train windows have extra screen glow')
    if water_level>12 or abs(green)>1.25:
        raise RuntimeError('Night water acquired a bright/colored unlit floor')
    return dict(train_body_median=body,train_window_p95=window95,
                water_median=water_level,water_green_excess=green)

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--interactive',action='store_true',help='Explicit opt-in: visible game on your desktop with passive pixel capture')
    parser.add_argument('--readback',action='store_true',help='Opt-in Vulkan swapchain readback on the isolated desktop; build tools/build_readback.py first')
    parser.add_argument('--runtime-dir',type=Path,help='Separate staged runtime under out/; keeps an active user build untouched')
    parser.add_argument('--timeout',type=int,default=0,help='Bounded startup/runtime allowance for a cold shader cache (seconds, 1-600)')
    parser.add_argument('--renderer',choices=['normal','rtx'],default='rtx')
    parser.add_argument('--ui',action='store_true')
    parser.add_argument('--console-output',action='store_true',help='Verify real command replies without -dev or -console')
    parser.add_argument('--graphics',action='store_true',help='Use the stationary water/lighting fixture')
    parser.add_argument('--water-view',action='store_true',help='Inspect water reflections from a low camera angle')
    parser.add_argument('--motion',action='store_true',help='Walk past the water and capture settling light')
    parser.add_argument('--lighting',action='store_true',help='Hold a fixed camera with flashlight off on the selected map')
    parser.add_argument('--lens',action='store_true',help='RTX real rain/stop/snow/disabled lens sequence; requires --lighting on an outdoor pose')
    parser.add_argument('--flashlight',action='store_true',help='Enable the real player flashlight with --lighting')
    parser.add_argument('--menu-scene',action='store_true',help='Observe both trains for 38 seconds on the authored menu camera')
    parser.add_argument('--menu-cycle',action='store_true',help='Also observe the authored train retrigger at 84/85 seconds')
    parser.add_argument('--cursor',action='store_true',help='Check RTX client-panel cursor, capture and focus transitions')
    parser.add_argument('--cvar',nargs=2,action='append',default=[],metavar=('NAME','VALUE'),help='Read-only comparison run with temporary runtime cvars')
    parser.add_argument('--label',default='',help='Suffix for comparison artifacts')
    parser.add_argument('--pose',help='Lighting camera: x y z pitch yaw roll')
    parser.add_argument('--arm-pose-check',choices=['contact','clear'],help='Assert arm collision correction or unchanged open-space pose (requires RTX --lighting)')
    parser.add_argument('--darkness-check',choices=['enabled','disabled'],help='Check procedural RTX world absorption masks (requires --lighting)')
    parser.add_argument('--lamp-check',action='store_true',help='Require park lamp geometry at the actual RTX upload boundary')
    parser.add_argument('--wetness-check',choices=['enabled','disabled'],help='Check wet-film atlas and complete per-vertex UV uploads; disable both wetness cvars for disabled check')
    parser.add_argument('--material-check',choices=['authored','auto','disabled'],help='Check RTX numeric mask selection and KTX loading')
    parser.add_argument('--water-check',choices=['zero-alpha','disabled'],help='Require native alpha-zero water at the RT upload boundary, or no replacement water')
    parser.add_argument('--volume-check',choices=['enabled','disabled'],help='Assert local-light volumetric path selection (not pixel visibility)')
    parser.add_argument('--denoiser',choices=['0','1'],help='Override the gameplay denoiser; otherwise test the shipped preset')
    parser.add_argument('--map',default='c_sdkmap1')
    args=parser.parse_args()
    if args.readback and (args.interactive or args.renderer!='rtx'):parser.error('--readback requires isolated RTX mode')
    if args.cursor and not args.interactive:parser.error('--cursor changes focus and requires an explicitly authorized --interactive session')
    if args.flashlight and not args.lighting:parser.error('--flashlight requires --lighting')
    if args.lens and (not args.lighting or args.renderer!='rtx' or args.graphics or args.motion or args.ui or args.menu_scene):
        parser.error('--lens requires RTX --lighting without other scene drivers')
    if args.label and not re.fullmatch('[a-zA-Z0-9_-]+',args.label):parser.error('Invalid label')
    for name,value in args.cvar:
        if not re.fullmatch('[a-zA-Z0-9_]+',name) or not re.fullmatch('[-+.0-9]+',value):parser.error('Invalid numeric cvar')
    if args.menu_cycle:args.menu_scene=True
    if args.cursor:
        if args.renderer!='rtx':parser.error('--cursor requires the RTX engine probe')
        args.menu_scene=True
    if args.menu_scene:args.map='c_game_menu1'
    if args.arm_pose_check and (not args.lighting or args.renderer!='rtx'):
        parser.error('--arm-pose-check requires RTX --lighting')
    if args.darkness_check and (not args.lighting or args.renderer!='rtx'):
        parser.error('--darkness-check requires RTX --lighting')
    if args.lamp_check and (not args.lighting or args.renderer!='rtx'):
        parser.error('--lamp-check requires RTX --lighting')
    if args.material_check and args.renderer!='rtx':parser.error('--material-check requires RTX')
    if args.wetness_check and args.renderer!='rtx':parser.error('--wetness-check requires RTX')
    if args.water_check and args.renderer!='rtx':parser.error('--water-check requires RTX')
    if args.volume_check and args.renderer!='rtx':parser.error('--volume-check requires RTX')
    if args.pose:
        try: pose=[float(v) for v in args.pose.split()]
        except ValueError: parser.error('--pose requires six finite numbers')
        if not args.lighting or len(pose)!=6 or not all(math.isfinite(v) for v in pose):
            parser.error('--pose requires --lighting and six finite numbers')
    if args.console_output:args.ui=True
    if args.water_view:args.graphics=True
    if args.graphics or args.motion:args.map='cof_graphics_test'
    if not re.fullmatch('[a-zA-Z0-9_]+',args.map):parser.error('Invalid map')
    runtime=ROOT/('out/runtime-rtx' if args.renderer=='rtx' else 'out/runtime')
    if args.runtime_dir:
        runtime=args.runtime_dir.resolve()
        if not runtime.is_relative_to((ROOT/'out').resolve()) or not (runtime/'xash3d.exe').is_file():
            parser.error('--runtime-dir must be an existing runtime under out/')
    report=ROOT/'analysis/local';report.mkdir(parents=True,exist_ok=True)
    tag=args.renderer+('-settings' if args.ui else '-'+args.map)
    if args.console_output:tag=args.renderer+'-console-output'
    if args.motion:tag+='-motion-'+(args.denoiser or 'default')
    if args.water_view:tag+='-water-view'
    if args.lighting:tag+='-lighting'
    if args.menu_cycle:tag+='-cycle'
    if args.label:tag+='-'+args.label
    if not args.interactive:tag+='-isolated'
    settings=ROOT/'build'/('test-'+tag+'-renderer.cfg');settings.unlink(missing_ok=True)
    env=dict(os.environ,COF_RENDERER_SETTINGS=str(settings),COF_RTX_AVAILABLE='1',
             COF_RTX_ACTIVE=str(int(args.renderer=='rtx')),COF_RTX_PROFILE='1')
    request=ROOT/'build'/('readback-'+tag+'.request')
    if args.readback:
        layer=ROOT/'build/readback'
        if not (layer/'cof_readback.json').exists():raise RuntimeError('Build tools/build_readback.py first')
        request.unlink(missing_ok=True)
        env.update(VK_LAYER_PATH=str(layer),VK_INSTANCE_LAYERS='VK_LAYER_COF_readback',COF_READBACK_REQUEST=str(request))
    for flag in ('COF_MENU2DTEST','COF_MENUTEST','COF_GRAPHICSTEST','COF_POINTERTEST','COF_VGUITEST','COF_SMOKETEST','COF_RTX_UITEST','COF_RTX_MOTIONTEST','COF_RTX_WATER_VIEW','COF_CONSOLE_OUTPUTTEST','COF_RTX_LIGHTINGTEST','COF_RTX_LIGHTING_POSE'):
        env.pop(flag,None)
    env.pop('COF_MENU_SCENETEST',None)
    env.pop('COF_MENU_CYCLETEST',None)
    env.pop('COF_CURSORTEST',None)
    env.pop('COF_RTX_FLASHLIGHTTEST',None)
    env.pop('COF_RTX_LENSTEST',None)
    if args.flashlight:env['COF_RTX_FLASHLIGHTTEST']='1'
    if args.cursor:env['COF_CURSORTEST']='1'
    if args.water_view:env['COF_RTX_WATER_VIEW']='1'
    if args.lighting:env['COF_RTX_LIGHTINGTEST']='1'
    if args.pose:env['COF_RTX_LIGHTING_POSE']=args.pose
    env['COF_RTX_UITEST' if args.ui else 'COF_RTX_MOTIONTEST' if args.motion else 'COF_GRAPHICSTEST' if args.graphics else 'COF_SMOKETEST']='1'
    if args.lens:
        env.pop('COF_SMOKETEST',None)
        env['COF_RTX_LENSTEST']='1'
    if args.menu_scene:
        env.pop('COF_SMOKETEST',None)
        env['COF_MENU_SCENETEST']='1'
        if args.menu_cycle:env['COF_MENU_CYCLETEST']='1'
    if args.console_output:
        env.pop('COF_RTX_UITEST',None);env['COF_CONSOLE_OUTPUTTEST']='1'
    configs={p:p.read_bytes() for p in (runtime/'cryoffear').glob('*.cfg')}
    logpath=runtime/'engine.log';logpath.unlink(missing_ok=True)
    command=[str(runtime/'xash3d.exe'),'-game','cryoffear','-windowed','-width','1280','-height','720','-log','-nosound']
    if not args.console_output:command+=['-dev','2']
    for name,value in args.cvar:command+=['+'+name,value]
    command += ['+menu_main'] if args.ui else ['+map',args.map]
    if args.denoiser is not None:command += ['+rt_denoiser',args.denoiser]
    if args.menu_scene:command += ['+con_notifytime','0']
    if not args.interactive:command += ['+m_ignore','1']
    startup=subprocess.STARTUPINFO();startup.dwFlags=subprocess.STARTF_USESHOWWINDOW;startup.wShowWindow=0
    shots=[];modules=[];observed=set();desktop_verified=False
    with TestDesktop(args.interactive) as desktop, (report/(tag+'-stderr.log')).open('w') as errors:
        process=(subprocess.Popen(command,cwd=runtime,env=env,startupinfo=startup,stdout=errors,stderr=errors,creationflags=subprocess.BELOW_NORMAL_PRIORITY_CLASS)
                 if args.interactive else desktop.launch(command,runtime,env))
        try:
            begin=time.monotonic()
            while process.poll() is None and time.monotonic()-begin<(min(600,max(1,args.timeout)) if args.timeout else 120 if args.menu_cycle else 60):
                text=logpath.read_text(errors='replace') if logpath.exists() else ''
                markers=['balanced default','enable confirmation','disable and restore balance','keyboard window visible','advanced scrollbar visible','console window visible'] if args.ui else ['COF_GRAPHICS_CAPTURE stage=0','COF_GRAPHICS_CAPTURE stage=3'] if args.graphics else ['COF_SMOKE_CLIENT_RENDERED']
                if args.motion:markers=['COF_RTX_MOTION_CAPTURE '+str(i)+' ' for i in (4,7,10,12,14,16)]
                if args.lens:markers=['COF_LENS_CAPTURE '+str(i)+' ' for i in range(7)]
                if args.console_output:markers=['COF_CONSOLE_OUTPUT_CAPTURE','COF_CONSOLE_MAP_CAPTURE']
                if args.menu_scene:markers=['COF_MENU_SCENE_TRAIN t='+str(i)+'.' for i in (10,18,24,36)]
                if args.menu_cycle:markers+=['COF_MENU_SCENE_TRAIN t='+str(i)+'.' for i in (87,94)]
                for marker in markers:
                    if marker in text and marker not in observed:
                        if args.readback:
                            ppm=report/(tag+'-'+str(len(shots))+'.ppm');ppm.unlink(missing_ok=True)
                            pending=request.with_suffix('.pending');pending.write_text(str(ppm));pending.replace(request)
                            deadline=time.monotonic()+10
                            while not ppm.exists() and process.poll() is None and time.monotonic()<deadline:time.sleep(.05)
                            if not ppm.exists():raise RuntimeError('Vulkan readback failed; no desktop capture fallback')
                            shot=ppm.with_suffix('.png')
                            with Image.open(ppm) as frame:
                                if frame.size!=(1280,720) or frame.convert('L').getextrema()[1]-frame.convert('L').getextrema()[0]<8:
                                    raise RuntimeError('Invalid or blank Vulkan readback')
                                frame.save(shot)
                            shots.append(str(shot));ppm.unlink()
                        if args.interactive:
                            shot=report/(tag+'-'+str(len(shots))+'.png');capture(process.pid,shot)
                            check_ui_pixels(shot,marker,args.graphics or args.motion)
                            shots.append(str(shot))
                        observed.add(marker)
                        if not modules:
                            desktop_verified=desktop.verify_process(process.pid)
                            output=subprocess.check_output(['powershell','-NoProfile','-Command',f'(Get-Process -Id {process.pid}).Modules | ForEach-Object FileName | ConvertTo-Json'],text=True,creationflags=subprocess.CREATE_NO_WINDOW)
                            modules=json.loads(output)
                if 'Crash: address' in text or 'Host_Error:' in text:raise RuntimeError('Runtime crash: '+str(logpath))
                time.sleep(.1)
            if process.poll() is None:raise RuntimeError('Smoke timed out: '+str(logpath))
            if process.returncode:raise RuntimeError('Exit code '+str(process.returncode))
            text=logpath.read_text(errors='replace');(report/(tag+'.log')).write_text(text)
            if 'Audio: Disabled' not in text:raise RuntimeError('Test audio was not disabled')
            marker='COF_RTX_UI_COMPLETE failures=0' if args.ui else 'COF_GRAPHICS_CLIENT_COMPLETE failures=0' if args.graphics else 'COF_SMOKE_CLIENT_RENDERED'
            if args.motion:marker='COF_RTX_MOTION_COMPLETE'
            if args.lens:
                marker='COF_LENS_COMPLETE failures=0'
                if len(observed)!=7 or 'COF_LENS_CAPTURE' not in text or re.search(r'COF_LENS_CAPTURE \d+ FAIL',text):
                    raise RuntimeError('Rain lens state sequence failed')
            if args.console_output:marker='COF_CONSOLE_OUTPUT_COMPLETE failures=0'
            if args.menu_scene:
                marker='COF_MENU_SCENE_COMPLETE failures=0'
                if 'COF_WEATHER_DRAW' not in text:raise RuntimeError('No client precipitation drawn')
                if args.renderer=='rtx':
                    for required in ('COF_RTX_SKY_MODEL models/props/sky_sphere4.mdl speed=80',
                                     'COF_RTX_WATER_VOLUME'):
                        if required not in text:raise RuntimeError('Missing scene submission: '+required)
                    if args.interactive:
                        if len(shots)!=(6 if args.menu_cycle else 4):raise RuntimeError('Missing scene captures')
                        from PIL import ImageChops, ImageStat
                        a=Image.open(shots[1]).crop((0,340,500,395)).convert('RGB')
                        b=Image.open(shots[2]).crop((0,340,500,395)).convert('RGB')
                        if sum(ImageStat.Stat(ImageChops.difference(a,b)).mean)<8:
                            raise RuntimeError('Train position changed on server but not in rendered frames')
                        sky=Image.open(shots[2]).crop((20,100,300,270)).convert('L')
                        if ImageStat.Stat(sky).mean[0]>35:raise RuntimeError('Night menu sky became daylight')
                        material_check=check_menu_night_materials(shots[2])
                        (report/(tag+'-materials.json')).write_text(json.dumps(material_check,indent=2))
            if marker not in text or 'COF_RTX_UI FAIL' in text:raise RuntimeError('Missing/failed assertions')
            if args.cursor and 'COF_CURSOR_COMPLETE failures=0' not in text:
                raise RuntimeError('Cursor/focus regression probe did not pass')
            geometry = None
            if args.motion and args.renderer=='rtx':
                observations=re.findall(r'COF_RTX_GEOMETRY frames=(\d+) samples=(\d+) changed=(\d+)',text)
                if not observations:raise RuntimeError('No geometry observations')
                frames,samples,changed=map(int,observations[-1])
                if frames<30 or samples<100 or changed or 'COF_RTX_GEOMETRY_UNSTABLE' in text:
                    raise RuntimeError('Static triangle identity changed during the staircase replay')
                poses=re.findall(r'COF_RTX_MOTION_CAPTURE \d+ xyz=([\d.-]+) ([\d.-]+) ([\d.-]+)',text)
                if len(poses)<8 or float(poses[-1][2])-float(poses[0][2])<30:
                    raise RuntimeError('Staircase ascent did not occur')
                geometry=dict(frames=frames,samples=samples,unexpected_changes=changed)
            if args.interactive and not shots:raise RuntimeError('No window pixels captured')
            if args.renderer=='rtx':
                volumes=re.findall(r'COF_RTX_LOCAL_VOLUME enabled=(\d) menu=(\d) cell_history=0',text)
                if args.volume_check and (not volumes or volumes[-1][0]!=str(int(args.volume_check=='enabled'))):
                    raise RuntimeError('Unexpected local-light volumetric path')
                water=re.findall(r'COF_RTX_WATER_VOLUME entity=(\d+) top=([-\d.]+) cells=(\d+) alpha=(\d+) model=(\S+)',text)
                if args.water_check=='zero-alpha' and not any(int(alpha)==0 for _,_,_,alpha,_ in water):
                    raise RuntimeError('Native alpha-zero water never reached the RTX upload boundary')
                if args.water_check=='disabled' and water:
                    raise RuntimeError('Disabled water still submitted replacement geometry')
                if re.search(r'Failed to load texture override file:.*cof_(pbr|auto)',text):
                    raise RuntimeError('Numeric RTX material mask failed to load')
                uses=re.findall(r'COF_RTX_PBR_(AUTO_)?USE (\S+) menu=(\d)',text)
                if args.menu_scene and uses:raise RuntimeError('Gameplay material masks leaked into cinematic menu')
                if args.material_check=='authored' and not any(not automatic for automatic,_,_ in uses):
                    raise RuntimeError('No authored masks selected for verified original textures')
                if args.material_check=='auto' and not any(automatic for automatic,_,_ in uses):
                    raise RuntimeError('No automatic masks selected outside the authored pack')
                if args.material_check=='disabled' and uses:raise RuntimeError('Disabled material masks still applied')
                if re.search(r'Too many (geometry infos|vertices|indices|textures)',text,re.I):
                    raise RuntimeError('RTX capacity exceeded: scene geometry/resources were dropped')
                if 'COF_RTX_DARKNESS_UV FAIL' in text:
                    raise RuntimeError('Invalid or missing per-vertex darkness atlas coordinates')
                if 'COF_RTX_WETNESS_UV FAIL' in text:
                    raise RuntimeError('Invalid or missing per-vertex wetness atlas coordinates')
                wetness=re.findall(r'COF_RTX_WETNESS masks=(\d+) ready=(\d) menu=0',text)
                if re.search(r'COF_RTX_WETNESS .*dropped=[1-9]\d*',text):
                    raise RuntimeError('Wet-film atlas exhausted: some receiving surfaces were omitted')
                if args.menu_scene and wetness:
                    raise RuntimeError('Gameplay wetness leaked into cinematic menu')
                if args.wetness_check=='enabled' and not any(int(count)>0 and ready=='1' for count,ready in wetness):
                    raise RuntimeError('No wet-film atlas uploaded')
                if args.wetness_check=='enabled' and not re.search(r'COF_RTX_WETNESS_UPLOAD vertices=\d+ mapped=[1-9]\d*',text):
                    raise RuntimeError('No wet receiver UVs reached the mesh upload boundary')
                if args.wetness_check=='disabled' and any(ready=='1' for count,ready in wetness):
                    raise RuntimeError('Disabled wet film still uploaded')
                if args.lamp_check:
                    uploads=re.findall(r'COF_RTX_SCENE_UPLOADS frame=(\d+) primitives=(\d+) lamps=(\d+)',text)
                    if not uploads or not any(int(lamps)>0 for _,_,lamps in uploads):
                        raise RuntimeError('No park lamp geometry reached the RTX upload boundary')
                    if not re.search(r'COF_RTX_VISIBLE_EMITTER .*hattlykta\.mdl texture=.*tex_fullbright.* emission=1\.00',text):
                        raise RuntimeError('Park diffuser did not reach the RTX visible-emission adapter')
                # Runtime inputs only, not proof of pixel-level parity with
                # GoldSrc. Protect authored darkness on every playable BSP.
                policies=re.findall(r'COF_RTX_LIGHTING_POLICY menu=(\d) synthetic_night=(\d) sky_energy=([\d.]+) baked_fill=(\d+)',text)
                for menu,night,sky,fills in policies:
                    if int(night) or (menu=='0' and int(fills)):
                        raise RuntimeError('Synthetic lighting re-enabled on a gameplay map')
                exposures=re.findall(r'COF_RTX_EXPOSURE menu=(\d) min=([\d.]+) max=([\d.]+) fog_ambient=([\d.]+)',text)
                for menu,low,high,ambient in exposures:
                    if menu=='0' and (abs(float(low)-2)>.0001 or
                        not 0<float(high)-float(low)<.002 or float(ambient)!=0):
                        raise RuntimeError('Gameplay exposure/fog can reveal authored darkness')
                if args.lighting and (not policies or not exposures):
                    raise RuntimeError('Missing runtime lighting policy observations')
                scales=re.findall(r'COF_RTX_MAP_LIGHT_SCALE menu=(\d) scale=([\d.]+)',text)
                if ((args.lighting or args.graphics or args.menu_scene) and not scales) or any(abs(float(scale)-(1 if menu=='1' else .25))>.0001 for menu,scale in scales):
                    raise RuntimeError('Map light conversion does not preserve gameplay/menu calibration')
                fog=re.findall(r'COF_RTX_AUTHORED_FOG active=(\d) start=([\d.]+) end=([\d.]+) menu=(\d)',text)
                if any(active=='1' and (menu!='0' or not 0<float(start)<float(end)) for active,start,end,menu in fog):
                    raise RuntimeError('Authored fog enabled with invalid range or in cinematic menu')
                if args.graphics and not any(active=='1' and float(start)==8 and float(end)==180 for active,start,end,menu in fog):
                    raise RuntimeError('SetFog fixture did not reach the RTX final-pass adapter')
                if args.graphics and (not fog or fog[-1][0]!='0'):
                    raise RuntimeError('SetFog fixture did not disable the RTX fog adapter')
                filters=re.findall(r'COF_RTX_SHADOW_FILTER menu=(\d) denoiser=(\d)',text)
                darkness=re.findall(r'COF_RTX_DARKNESS menu=(\d) sources=(\d+) radius=([\d.]+) strength=([\d.]+)',text)
                if any(menu=='1' and int(count)!=0 for menu,count,radius,strength in darkness):
                    raise RuntimeError('Local absorption was enabled in the cinematic menu')
                if args.menu_scene and 'COF_RTX_DARKNESS_MASK' in text:
                    raise RuntimeError('Cinematic menu received a procedural absorption mask')
                if args.darkness_check:
                    if 'COF_RTX_DARKNESS_GEOMETRY pass=1' not in text or 'COF_RTX_DARKNESS_GEOMETRY pass=0' in text:
                        raise RuntimeError('Black polygon distance checks failed')
                    if not darkness:raise RuntimeError('Missing absorption policy observation')
                    if args.darkness_check=='enabled':
                        if not any(menu=='0' and int(count)>0 for menu,count,radius,strength in darkness) or 'COF_RTX_DARKNESS_MASK' not in text:
                            raise RuntimeError('No procedural absorption masks reached the renderer')
                    elif any(int(count)!=0 or float(strength)!=0 for menu,count,radius,strength in darkness) or 'COF_RTX_DARKNESS_MASK' in text:
                        raise RuntimeError('Disabled absorption still changed world materials')
                arms=re.findall(r'COF_RTX_ARM side=(\d) blocked=(\d) corrected=(\d) clear=(\d) angle=([\d.]+) length_error=([\d.]+)',text)
                for side,blocked,corrected,clear,angle,error in arms:
                    if corrected=='1' and (blocked!='1' or clear!='1' or float(error)>.002):
                        raise RuntimeError('RTX arm correction left penetration or changed limb length')
                    if blocked=='0' and (corrected!='0' or float(angle)!=0):
                        raise RuntimeError('Unobstructed player animation was modified')
                if args.arm_pose_check:
                    if {a[0] for a in arms}!={'0','1'}:raise RuntimeError('Both arm poses were not observed')
                    if args.arm_pose_check=='contact':
                        if not any(a[2]=='1' for a in arms) or any(a[3]!='1' for a in arms):
                            raise RuntimeError('Near-wall arm collision was not resolved')
                    elif any(a[1]!='0' or a[2]!='0' or a[3]!='1' for a in arms):
                        raise RuntimeError('Open-space arm pose was not clear/unchanged')
                if args.lighting and ('0',args.denoiser or '1') not in filters:
                    raise RuntimeError('Gameplay shadow filter was not observed')
                if args.menu_scene and ('1','0') not in filters:
                    raise RuntimeError('Cinematic menu did not retain REBLUR')
                for name in ('vulkan-1.dll','RayTracedGL1.dll','NRI.dll','ref_gl.dll','client_amd64.dll'):
                    if not any(Path(p).name.lower()==name.lower() for p in modules):raise RuntimeError('Module not observed: '+name)
                if not args.console_output and 'COF_RTX profile=1' not in text:raise RuntimeError('Balanced preset not applied')
            if any('steamapps' in p.lower() for p in modules):raise RuntimeError('Original game binary loaded')
            movement=re.search(r'COF_SMOKE_MOVEMENT ([\d.-]+) ([\d.-]+) ([\d.-]+) -> ([\d.-]+) ([\d.-]+) ([\d.-]+)',text)
            if not args.ui and not args.lighting and args.map=='c_sdkmap1':
                if not movement:raise RuntimeError('Player movement not observed')
                xyz=list(map(float,movement.groups()))
                if sum((xyz[i]-xyz[i+3])**2 for i in range(3))<1:raise RuntimeError('Player did not move')
            (report/(tag+'.json')).write_text(json.dumps(dict(result='pass',mode='interactive' if args.interactive else 'isolated-desktop',desktop_verified=desktop_verified,audio='disabled',visual_checks='passed' if args.interactive else 'readback_captured_for_review' if args.readback else 'not_run',command=command,screenshots=shots,modules=modules,geometry=geometry),indent=2))
            print('PASS',tag,'Visual checks: passed' if args.interactive else 'Vulkan readback captured for review' if args.readback else 'Runtime assertions only; visual checks NOT RUN (isolated desktop)',*shots,sep='\n')
        finally:
            if process.poll() is None:process.terminate();process.wait(timeout=5)
            if not args.interactive:process.close()
            for path,data in configs.items():path.write_bytes(data)
            settings.unlink(missing_ok=True)
            request.unlink(missing_ok=True)

if __name__=='__main__':main()
