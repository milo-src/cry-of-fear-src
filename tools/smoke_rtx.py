"""Exercise RTX preferences or a real map, recording native modules and window pixels."""
import argparse
import ctypes as C
from ctypes import wintypes as W
import json
import os
from pathlib import Path
import re
import subprocess
import time
from PIL import Image, ImageGrab
from renderer_settings import ROOT

def capture(pid, path):
    user = C.WinDLL('user32', use_last_error=True)
    user.GetForegroundWindow.restype = W.HWND
    user.GetWindowThreadProcessId.argtypes = [W.HWND, C.POINTER(W.DWORD)]
    user.SetForegroundWindow.argtypes = [W.HWND]
    user.ShowWindow.argtypes = [W.HWND, C.c_int]
    user.SetWindowPos.argtypes = [W.HWND, W.HWND, C.c_int, C.c_int, C.c_int, C.c_int, W.UINT]
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
    hwnd=windows[0];user.ShowWindow(hwnd, 9)
    # Windows may refuse foreground activation from a background test process.
    # Join the foreground input queue briefly; never send synthetic keystrokes.
    foreground=user.GetForegroundWindow()
    thread=user.GetWindowThreadProcessId(foreground,None)
    own=C.WinDLL('kernel32').GetCurrentThreadId()
    joined=thread != own and user.AttachThreadInput(own,thread,True)
    try: user.SetForegroundWindow(hwnd)
    finally:
        if joined:user.AttachThreadInput(own,thread,False)
    time.sleep(.25)
    rect=W.RECT();point=W.POINT();user.GetClientRect(hwnd,C.byref(rect));user.ClientToScreen(hwnd,C.byref(point))
    # Vulkan swapchains cannot be captured with PrintWindow (black pixels).
    # Raising briefly also works when Windows refuses focus. Verify that the
    # game's HWND covers the capture region instead of trusting activation.
    user.SetWindowPos(hwnd,W.HWND(-1),0,0,0,0,0x13)
    try:
        time.sleep(.15)
        def check_visible():
            for x in (2,rect.right//2,rect.right-3):
                for y in (2,rect.bottom//2,rect.bottom-3):
                    if user.WindowFromPoint(W.POINT(point.x+x,point.y+y))!=hwnd:
                        raise RuntimeError('Game window is occluded; capture refused')
        check_visible()
        frame=ImageGrab.grab(bbox=(point.x,point.y,point.x+rect.right,point.y+rect.bottom))
        check_visible()
    finally:user.SetWindowPos(hwnd,W.HWND(-2),0,0,0,0,0x13)
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

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--renderer',choices=['normal','rtx'],default='rtx')
    parser.add_argument('--ui',action='store_true')
    parser.add_argument('--console-output',action='store_true',help='Verify real command replies without -dev or -console')
    parser.add_argument('--graphics',action='store_true',help='Use the stationary water/lighting fixture')
    parser.add_argument('--water-view',action='store_true',help='Inspect water reflections from a low camera angle')
    parser.add_argument('--motion',action='store_true',help='Walk past the water and capture settling light')
    parser.add_argument('--denoiser',choices=['0','1'],default='0')
    parser.add_argument('--map',default='c_sdkmap1')
    args=parser.parse_args()
    if args.console_output:args.ui=True
    if args.water_view:args.graphics=True
    if args.graphics or args.motion:args.map='cof_graphics_test'
    if not re.fullmatch('[a-zA-Z0-9_]+',args.map):parser.error('Invalid map')
    runtime=ROOT/('out/runtime-rtx' if args.renderer=='rtx' else 'out/runtime')
    report=ROOT/'analysis/local';report.mkdir(parents=True,exist_ok=True)
    tag=args.renderer+('-settings' if args.ui else '-'+args.map)
    if args.console_output:tag=args.renderer+'-console-output'
    if args.motion:tag+='-motion-'+args.denoiser
    if args.water_view:tag+='-water-view'
    settings=ROOT/'build'/('test-'+tag+'-renderer.cfg');settings.unlink(missing_ok=True)
    env=dict(os.environ,COF_RENDERER_SETTINGS=str(settings),COF_RTX_AVAILABLE='1',
             COF_RTX_ACTIVE=str(int(args.renderer=='rtx')),COF_RTX_PROFILE='1')
    for flag in ('COF_MENU2DTEST','COF_MENUTEST','COF_GRAPHICSTEST','COF_POINTERTEST','COF_VGUITEST','COF_SMOKETEST','COF_RTX_UITEST','COF_RTX_MOTIONTEST','COF_RTX_WATER_VIEW','COF_CONSOLE_OUTPUTTEST'):
        env.pop(flag,None)
    if args.water_view:env['COF_RTX_WATER_VIEW']='1'
    env['COF_RTX_UITEST' if args.ui else 'COF_RTX_MOTIONTEST' if args.motion else 'COF_GRAPHICSTEST' if args.graphics else 'COF_SMOKETEST']='1'
    if args.console_output:
        env.pop('COF_RTX_UITEST',None);env['COF_CONSOLE_OUTPUTTEST']='1'
    configs={p:p.read_bytes() for p in (runtime/'cryoffear').glob('*.cfg')}
    logpath=runtime/'engine.log';logpath.unlink(missing_ok=True)
    command=[str(runtime/'xash3d.exe'),'-game','cryoffear','-windowed','-width','1280','-height','720','-log']
    if not args.console_output:command+=['-dev','2']
    command += ['+menu_main'] if args.ui else ['+map',args.map]
    command += ['+rt_denoiser',args.denoiser]
    startup=subprocess.STARTUPINFO();startup.dwFlags=subprocess.STARTF_USESHOWWINDOW;startup.wShowWindow=0
    shots=[];modules=[];observed=set()
    with (report/(tag+'-stderr.log')).open('w') as errors:
        process=subprocess.Popen(command,cwd=runtime,env=env,startupinfo=startup,stdout=errors,stderr=errors)
        try:
            begin=time.monotonic()
            while process.poll() is None and time.monotonic()-begin<60:
                text=logpath.read_text(errors='replace') if logpath.exists() else ''
                markers=['balanced default','enable confirmation','disable and restore balance','keyboard window visible','advanced scrollbar visible','console window visible'] if args.ui else ['COF_GRAPHICS_CAPTURE stage=0','COF_GRAPHICS_CAPTURE stage=3'] if args.graphics else ['COF_SMOKE_CLIENT_RENDERED']
                if args.motion:markers=['COF_RTX_MOTION_CAPTURE '+str(i)+' ' for i in (4,7,10,12,14,16)]
                if args.console_output:markers=['COF_CONSOLE_OUTPUT_CAPTURE','COF_CONSOLE_MAP_CAPTURE']
                for marker in markers:
                    if marker in text and marker not in observed:
                        shot=report/(tag+'-'+str(len(shots))+'.png');capture(process.pid,shot)
                        check_ui_pixels(shot,marker,args.graphics or args.motion)
                        shots.append(str(shot));observed.add(marker)
                        if not modules:
                            output=subprocess.check_output(['powershell','-NoProfile','-Command',f'(Get-Process -Id {process.pid}).Modules | ForEach-Object FileName | ConvertTo-Json'],text=True)
                            modules=json.loads(output)
                if 'Crash: address' in text or 'Host_Error:' in text:raise RuntimeError('Runtime crash: '+str(logpath))
                time.sleep(.1)
            if process.poll() is None:raise RuntimeError('Smoke timed out: '+str(logpath))
            if process.returncode:raise RuntimeError('Exit code '+str(process.returncode))
            text=logpath.read_text(errors='replace');(report/(tag+'.log')).write_text(text)
            marker='COF_RTX_UI_COMPLETE failures=0' if args.ui else 'COF_GRAPHICS_CLIENT_COMPLETE failures=0' if args.graphics else 'COF_SMOKE_CLIENT_RENDERED'
            if args.motion:marker='COF_RTX_MOTION_COMPLETE'
            if args.console_output:marker='COF_CONSOLE_OUTPUT_COMPLETE failures=0'
            if marker not in text or 'COF_RTX_UI FAIL' in text:raise RuntimeError('Missing/failed assertions')
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
            if not shots:raise RuntimeError('No window pixels captured')
            if args.renderer=='rtx':
                for name in ('vulkan-1.dll','RayTracedGL1.dll','NRI.dll','ref_gl.dll','client_amd64.dll'):
                    if not any(Path(p).name.lower()==name.lower() for p in modules):raise RuntimeError('Module not observed: '+name)
                if not args.console_output and 'COF_RTX profile=1' not in text:raise RuntimeError('Balanced preset not applied')
            if any('steamapps' in p.lower() for p in modules):raise RuntimeError('Original game binary loaded')
            movement=re.search(r'COF_SMOKE_MOVEMENT ([\d.-]+) ([\d.-]+) ([\d.-]+) -> ([\d.-]+) ([\d.-]+) ([\d.-]+)',text)
            if not args.ui and args.map=='c_sdkmap1':
                if not movement:raise RuntimeError('Player movement not observed')
                xyz=list(map(float,movement.groups()))
                if sum((xyz[i]-xyz[i+3])**2 for i in range(3))<1:raise RuntimeError('Player did not move')
            (report/(tag+'.json')).write_text(json.dumps(dict(result='pass',command=command,screenshots=shots,modules=modules,geometry=geometry),indent=2))
            print('PASS',tag,*shots,sep='\n')
        finally:
            if process.poll() is None:process.terminate();process.wait(timeout=5)
            for path,data in configs.items():path.write_bytes(data)
            settings.unlink(missing_ok=True)

if __name__=='__main__':main()
