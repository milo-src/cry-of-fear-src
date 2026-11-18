#requires -Version 7.0
param([int]$Width = 1280, [int]$Height = 720)
$ErrorActionPreference = 'Stop'
if ($Width -lt 800 -or $Width -gt 3840 -or $Height -lt 600 -or $Height -gt 2160) { throw 'Invalid resolution' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$previous = $env:COF_POINTERTEST
$started = Get-Date
$configPath = "$runtime/cryoffear/config.cfg"
$configBackup = [IO.File]::ReadAllBytes($configPath)
Add-Type @'
using System;
using System.Runtime.InteropServices;
public static class CofVguiInput {
    [StructLayout(LayoutKind.Sequential)] public struct Point { public int X,Y; }
    [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr window, ref Point point);
    [DllImport("user32.dll")] public static extern bool SetCursorPos(int x,int y);
    [DllImport("user32.dll")] public static extern bool GetCursorPos(out Point point);
    [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr window,int show);
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr window);
    [DllImport("user32.dll")] public static extern void mouse_event(uint flags,uint dx,uint dy,uint data,UIntPtr extra);
    public static void Move(IntPtr window,int x,int y) { var p=new Point { X=x,Y=y };ClientToScreen(window,ref p);SetCursorPos(p.X,p.Y); }

    [DllImport("user32.dll")] public static extern bool PostMessage(IntPtr window, uint message, IntPtr wparam, IntPtr lparam);
    private delegate bool EnumCallback(IntPtr window, IntPtr parameter);
    [DllImport("user32.dll")] private static extern bool EnumWindows(EnumCallback callback, IntPtr parameter);
    [DllImport("user32.dll")] private static extern uint GetWindowThreadProcessId(IntPtr window, out uint process);
    [DllImport("user32.dll", CharSet=CharSet.Unicode)] private static extern int GetClassName(IntPtr window, System.Text.StringBuilder name, int capacity);
    public static IntPtr FindWindow(int process) {
        IntPtr result=IntPtr.Zero;
        EnumWindows((window,parameter)=> {
            uint owner; GetWindowThreadProcessId(window,out owner);
            var name=new System.Text.StringBuilder(128); GetClassName(window,name,128);
            if(owner==(uint)process && name.ToString().StartsWith("SDL")) { result=window; return false; }
            return true;
        },IntPtr.Zero);
        return result;
    }
}
'@
$sentActions = @{}
$savedCursor = [CofVguiInput+Point]::new()
[CofVguiInput]::GetCursorPos([ref]$savedCursor) | Out-Null
try {
    $env:COF_POINTERTEST = '1'
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +cof_menu_2d_test" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally { $env:COF_POINTERTEST = $previous }
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 65) {
        $observed = @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName)
        $modules = @($modules + $observed | Where-Object { $_ } | Sort-Object -Unique)
        if ((Test-Path "$runtime/engine.log") -and (Get-Item "$runtime/engine.log").LastWriteTime -ge $started) {
            $liveLog = Get-Content "$runtime/engine.log" -Raw
            $handle = [CofVguiInput]::FindWindow($process.Id)
            foreach ($match in [regex]::Matches($liveLog, 'COF_POINTER_DRAG (\w+) (\d+) (\d+) (-?\d+) (-?\d+)')) {
                $tag = $match.Groups[1].Value
                if ($sentActions.ContainsKey($tag)) { continue }
                $x=[int]$match.Groups[2].Value; $y=[int]$match.Groups[3].Value
                $dx=[int]$match.Groups[4].Value; $dy=[int]$match.Groups[5].Value
                [CofVguiInput]::ShowWindow($handle,1) | Out-Null
                [CofVguiInput]::SetForegroundWindow($handle) | Out-Null
                Start-Sleep -Milliseconds 250
                [CofVguiInput]::Move($handle,$x,$y)
                Start-Sleep -Milliseconds 200
                [CofVguiInput]::PostMessage($handle,0x201,[IntPtr]1,[IntPtr](($y -shl 16) -bor $x)) | Out-Null
                Start-Sleep -Milliseconds 150
                for($step=1;$step -le 5;$step++) {
                    [CofVguiInput]::Move($handle,($x+[int]($dx*$step/5)),($y+[int]($dy*$step/5)))
                    Start-Sleep -Milliseconds 100
                }
                [CofVguiInput]::PostMessage($handle,0x202,[IntPtr]0,[IntPtr]((($y+$dy) -shl 16) -bor ($x+$dx))) | Out-Null
                $sentActions[$tag]=$true
            }
            foreach ($match in [regex]::Matches($liveLog, 'COF_POINTER_TOGGLE (\w+)')) {
                $tag='toggle_'+$match.Groups[1].Value
                if ($sentActions.ContainsKey($tag)) { continue }
                [CofVguiInput]::PostMessage($handle,0x100,[IntPtr]0xc0,[IntPtr]0x00290001) | Out-Null
                [CofVguiInput]::PostMessage($handle,0x100,[IntPtr]0xc0,[IntPtr]0x40290001) | Out-Null
                [CofVguiInput]::PostMessage($handle,0x102,[IntPtr]0x451,[IntPtr]1) | Out-Null
                [CofVguiInput]::PostMessage($handle,0x101,[IntPtr]0xc0,[IntPtr]([long]0xc0290001)) | Out-Null
                $sentActions[$tag]=$true
            }
        }
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Menu test timed out; see engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/pointer-${Width}x${Height}.log"
    if ($log -notmatch 'COF_POINTER_COMPLETE failures=0' -or $log -match 'COF_POINTER FAIL') { throw 'VGUI input/render checks failed' }
    foreach ($required in @('xash.dll', 'menu.dll', 'ref_gl.dll', 'cryoffear\cl_dlls\client.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module loaded' }
    $screenshots = @(Get-ChildItem $runtime -Filter '*.png' | Where-Object { $_.LastWriteTime -ge $started } | Sort-Object LastWriteTime | ForEach-Object FullName)
    if ($screenshots.Count -lt 2) { throw 'Expected menu/panel captures missing' }
    [ordered]@{ result='pass'; resolution=@($Width,$Height); screenshots=$screenshots; modules=$modules; originalGameModulesLoaded=$false } |
        ConvertTo-Json -Depth 5 | Set-Content "$reportDir/pointer-${Width}x${Height}.json"
    Write-Output "PASS: CoF options/console; input; own DLLs; exit 0 ($Width x $Height)."
    Write-Output $screenshots
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
    [CofVguiInput]::mouse_event(4,0,0,0,[UIntPtr]::Zero)
    [CofVguiInput]::SetCursorPos($savedCursor.X,$savedCursor.Y) | Out-Null
    [IO.File]::WriteAllBytes($configPath, $configBackup)
}
