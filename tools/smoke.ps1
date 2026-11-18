#requires -Version 7.0
# PowerShell 7 can enumerate the x86 game's modules from this x64 host.
param([string]$Map = 'c_sdkmap1', [switch]$Doors)
$ErrorActionPreference = 'Stop'
if ($Map -notmatch '^[a-zA-Z0-9_]+$') { throw 'Invalid map name' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$oldSmoke = $env:COF_SMOKETEST
$oldDoors = $env:COF_DOORTEST
$suffix = if ($Doors) { '-doors' } else { '' }
$env:COF_SMOKETEST = '1'
$env:COF_DOORTEST = if ($Doors) { '1' } else { $null }
try {
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width 1280 -height 720 -console -dev 1 -log +map $Map" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally {
    $env:COF_SMOKETEST = $oldSmoke
    $env:COF_DOORTEST = $oldDoors
}
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 35) {
        if (-not $process.HasExited) {
            # Startup and shutdown can expose only part of the module set.
            # Accumulate observations throughout the run rather than sampling once.
            $observed = @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName)
            $modules = @($modules + $observed | Where-Object { $_ } | Sort-Object -Unique)
        }
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Smoke test timed out; see engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/smoke-$Map$suffix.log"
    if ($log -notmatch 'COF_SMOKE_CLIENT_RENDERED') { throw 'No rendered-frame marker' }
    $distanceSquared = 0.0
    if ($Doors) {
        if ($log -notmatch 'COF_DOOR_TEST_COMPLETE failures=0' -or $log -match 'COF_DOOR_TEST FAIL') {
            throw "Door integration checks failed; see $reportDir/smoke-$Map$suffix.log"
        }
    } else {
        $match = [regex]::Match($log, 'COF_SMOKE_MOVEMENT ([\d.-]+) ([\d.-]+) ([\d.-]+) -> ([\d.-]+) ([\d.-]+) ([\d.-]+)')
        if (-not $match.Success) { throw 'No player movement observation' }
        for ($i = 1; $i -le 3; $i++) {
            $delta = [double]::Parse($match.Groups[$i+3].Value, [Globalization.CultureInfo]::InvariantCulture) - [double]::Parse($match.Groups[$i].Value, [Globalization.CultureInfo]::InvariantCulture)
            $distanceSquared += $delta * $delta
        }
        if ($distanceSquared -lt 1) { throw 'Player did not move' }
    }
    foreach ($required in @('xash.dll','cryoffear\dlls\hl.dll','cryoffear\cl_dlls\client.dll','ref_gl.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Required own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module was loaded' }
    $shot = Get-ChildItem $runtime -Filter "$($Map)_*.png" | Sort-Object LastWriteTime -Descending | Select-Object -First 1
    if (-not $shot -or $shot.LastWriteTime -lt (Get-Date).AddSeconds(-40)) { throw 'No fresh game screenshot' }
    $report = [ordered]@{map=$Map; exitCode=$process.ExitCode; movementUnits=$(if ($Doors) { $null } else { [math]::Sqrt($distanceSquared) }); doorIntegration=$Doors.IsPresent; screenshot=$shot.FullName; modules=$modules; originalGameModulesLoaded=$false}
    $report | ConvertTo-Json -Depth 5 | Set-Content "$reportDir/smoke-$Map$suffix.json"
    Write-Output "PASS: $Map$suffix rendered, behavior checks passed, own DLLs loaded, exit 0."
    Write-Output $shot.FullName
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
}
