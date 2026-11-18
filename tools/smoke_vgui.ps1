#requires -Version 7.0
param([int]$Width = 1280, [int]$Height = 720)
$ErrorActionPreference = 'Stop'
if ($env:COF_INTERACTIVE_TEST -ne '1') { throw 'Interactive test disabled. Use python tools/smoke_rtx.py for isolated testing. Set COF_INTERACTIVE_TEST=1 only for an explicitly authorized interactive session.' }
if ($Width -lt 800 -or $Width -gt 3840 -or $Height -lt 600 -or $Height -gt 2160) { throw 'Invalid resolution' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$previous = $env:COF_VGUITEST
$started = Get-Date
$configPath = "$runtime/cryoffear/config.cfg"
$configBackup = [IO.File]::ReadAllBytes($configPath)
Add-Type @'
using System;
using System.Runtime.InteropServices;
public static class CofVguiInput {
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
$nativeInputSent = $false
try {
    $env:COF_VGUITEST = '1'
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-nosound -game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +cof_menu_2d_test" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally { $env:COF_VGUITEST = $previous }
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 65) {
        $observed = @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName)
        $modules = @($modules + $observed | Where-Object { $_ } | Sort-Object -Unique)
        if (-not $nativeInputSent -and (Test-Path "$runtime/engine.log")) {
            $liveLog = Get-Content "$runtime/engine.log" -Raw
            if ($liveLog -match 'COF_VGUI_NATIVE_INPUT_READY') {
                $process.Refresh()
                $handle = [CofVguiInput]::FindWindow($process.Id)
                if ($handle -eq [IntPtr]::Zero) { throw 'Native game window not found' }
                foreach ($character in 'echo COF_VGUI_COMMAND_OK'.ToCharArray()) {
                    [CofVguiInput]::PostMessage($handle, 0x102, [IntPtr][int]$character, [IntPtr]1) | Out-Null
                }
                [CofVguiInput]::PostMessage($handle, 0x100, [IntPtr]13, [IntPtr]0x001c0001) | Out-Null
                [CofVguiInput]::PostMessage($handle, 0x101, [IntPtr]13, [IntPtr]([long]0xc01c0001)) | Out-Null
                $nativeInputSent = $true
            }
        }
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Menu test timed out; see engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/vgui-${Width}x${Height}.log"
    if ($log -notmatch 'COF_VGUI_COMMAND_OK' -or $log -notmatch 'COF_VGUI_TEST_COMPLETE failures=0' -or $log -match 'COF_VGUI_TEST FAIL') { throw 'VGUI input/render checks failed' }
    foreach ($required in @('xash.dll', 'menu.dll', 'ref_gl.dll', 'cryoffear\cl_dlls\client.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module loaded' }
    $screenshots = @(Get-ChildItem $runtime -Filter '*.png' | Where-Object { $_.LastWriteTime -ge $started } | Sort-Object LastWriteTime | ForEach-Object FullName)
    if ($screenshots.Count -lt 8) { throw 'Expected menu/panel captures missing' }
    [ordered]@{ result='pass'; resolution=@($Width,$Height); screenshots=$screenshots; modules=$modules; originalGameModulesLoaded=$false } |
        ConvertTo-Json -Depth 5 | Set-Content "$reportDir/vgui-${Width}x${Height}.json"
    Write-Output "PASS: CoF options/console; input; own DLLs; exit 0 ($Width x $Height)."
    Write-Output $screenshots
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
    [IO.File]::WriteAllBytes($configPath, $configBackup)
}
