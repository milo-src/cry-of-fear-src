#requires -Version 7.0
param([int]$Width = 1280, [int]$Height = 720)
$ErrorActionPreference = 'Stop'
if ($Width -lt 800 -or $Width -gt 3840 -or $Height -lt 600 -or $Height -gt 2160) { throw 'Invalid resolution' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$previous = $env:COF_MENUTEST
$started = Get-Date
try {
    $env:COF_MENUTEST = '1'
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +map c_game_menu1" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally { $env:COF_MENUTEST = $previous }
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 65) {
        $observed = @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName)
        $modules = @($modules + $observed | Where-Object { $_ } | Sort-Object -Unique)
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Menu test timed out; see engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/menu-${Width}x${Height}.log"
    foreach ($marker in @('3d', '2d', 'returned', 'complete')) {
        if ($log -notmatch "COF_MENU_ROUNDTRIP $marker") { throw "Missing roundtrip stage: $marker" }
    }
    if (($log | Select-String -Pattern 'COF_MENU GameMenu received' -AllMatches).Matches.Count -lt 2) { throw 'Menu message did not arrive on both loads' }
    if ($log -notmatch 'COF_MENU_TEST_COMPLETE failures=0' -or $log -match 'COF_MENU_TEST FAIL|COF_UI missing image') { throw 'Menu input/render checks failed' }
    foreach ($required in @('xash.dll', 'menu.dll', 'ref_gl.dll', 'cryoffear\dlls\hl.dll', 'cryoffear\cl_dlls\client.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module loaded' }
    $screenshots = @(Get-ChildItem $runtime -Filter '*.png' | Where-Object { $_.LastWriteTime -ge $started } | Sort-Object LastWriteTime | ForEach-Object FullName)
    if ($screenshots.Count -lt 8) { throw 'Expected menu/panel captures missing' }
    [ordered]@{ result='pass'; resolution=@($Width,$Height); screenshots=$screenshots; modules=$modules; originalGameModulesLoaded=$false } |
        ConvertTo-Json -Depth 5 | Set-Content "$reportDir/menu-${Width}x${Height}.json"
    Write-Output "PASS: 3D -> 2D -> 3D; panel input; own DLLs; exit 0 ($Width x $Height)."
    Write-Output $screenshots
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
}
