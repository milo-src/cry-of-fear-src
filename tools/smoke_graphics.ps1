#requires -Version 7.0
param([int]$Width = 1280, [int]$Height = 720)
$ErrorActionPreference = 'Stop'
if ($Width -lt 800 -or $Width -gt 3840 -or $Height -lt 480 -or $Height -gt 2160) { throw 'Invalid resolution' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
python (Join-Path $PSScriptRoot 'prepare_graphics_fixture.py')
if ($LASTEXITCODE -ne 0) { throw 'Graphics fixture preparation failed' }
$previous = $env:COF_GRAPHICSTEST
$oldSmoke = $env:COF_SMOKETEST
$started = Get-Date
try {
    $env:COF_GRAPHICSTEST = '1'
    $env:COF_SMOKETEST = $null
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +map cof_graphics_test" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally { $env:COF_GRAPHICSTEST = $previous; $env:COF_SMOKETEST = $oldSmoke }
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 45) {
        $observed = @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName)
        $modules = @($modules + $observed | Where-Object { $_ } | Sort-Object -Unique)
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Graphics test timed out; check hooks and engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/graphics-${Width}x${Height}.log"
    if ($log -notmatch 'COF_GRAPHICS_PROTOCOL_COMPLETE failures=0' -or $log -match 'COF_GRAPHICS_PROTOCOL FAIL') {
        throw 'Graphics protocol unit checks failed'
    }
    if ($log -notmatch 'COF_WATER rendered=[1-9]' -or $log -notmatch 'COF_DESATURATION alpha=') {
        throw 'Recovered shader passes were not observed'
    }
    foreach ($side in @('SERVER', 'CLIENT')) {
        if ($log -notmatch "COF_GRAPHICS_${side}_COMPLETE failures=0" -or $log -match "COF_GRAPHICS_${side} FAIL") {
            throw "Graphics $side assertions failed"
        }
    }
    foreach ($stage in 0..3) {
        if ($log -notmatch "COF_GRAPHICS_CAPTURE stage=$stage") { throw "Missing graphics stage $stage" }
    }
    foreach ($required in @('xash.dll', 'ref_gl.dll', 'cryoffear\dlls\hl.dll', 'cryoffear\cl_dlls\client.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module loaded' }
    $shots = @(Get-ChildItem $runtime -Filter 'cof_graphics_test_*.png' | Where-Object { $_.LastWriteTime -ge $started } | Sort-Object LastWriteTime | ForEach-Object FullName)
    if ($shots.Count -lt 4) { throw 'Graphics stage screenshots missing' }
    [ordered]@{result='pass'; resolution=@($Width,$Height); stages=@('baseline','fog','blackwhite','dynlight');
        screenshots=$shots; modules=$modules; originalGameModulesLoaded=$false;
        visualReviewRequired=$true; fixture=(Get-Content "$runtime/cof_graphics_fixture.json" -Raw | ConvertFrom-Json)} |
        ConvertTo-Json -Depth 7 | Set-Content "$reportDir/graphics-${Width}x${Height}.json"
    Write-Output 'PASS: real entity Use -> server state -> client protocol; four diagnostic captures; own DLLs.'
    Write-Output 'Inspect captures for visual fidelity: protocol checks do not prove renderer equivalence.'
    Write-Output $shots
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
}
