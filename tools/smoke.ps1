param([string]$Map = 'c_sdkmap1')
$ErrorActionPreference = 'Stop'
if ($Map -notmatch '^[a-zA-Z0-9_]+$') { throw 'Invalid map name' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$oldSmoke = $env:COF_SMOKETEST
$env:COF_SMOKETEST = '1'
try {
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width 1280 -height 720 -console -dev 1 -log +map $Map" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally {
    $env:COF_SMOKETEST = $oldSmoke
}
$modules = @()
$watch = [Diagnostics.Stopwatch]::StartNew()
try {
    while (-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 35) {
        if ($watch.Elapsed.TotalSeconds -gt 2 -and $modules.Count -eq 0) {
            $modules = @((Get-Process -Id $process.Id).Modules | ForEach-Object FileName)
        }
        Start-Sleep -Milliseconds 200
        $process.Refresh()
    }
    if (-not $process.HasExited) { throw 'Smoke test timed out; see engine.log' }
    $process.WaitForExit()
    if ($process.ExitCode -ne 0) { throw "Game exited with $($process.ExitCode)" }
    $log = Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$reportDir/smoke-$Map.log"
    if ($log -notmatch 'COF_SMOKE_CLIENT_RENDERED') { throw 'No rendered-frame marker' }
    $match = [regex]::Match($log, 'COF_SMOKE_MOVEMENT ([\d.-]+) ([\d.-]+) ([\d.-]+) -> ([\d.-]+) ([\d.-]+) ([\d.-]+)')
    if (-not $match.Success) { throw 'No player movement observation' }
    $distanceSquared = 0.0
    for ($i = 1; $i -le 3; $i++) {
        $delta = [double]::Parse($match.Groups[$i+3].Value, [Globalization.CultureInfo]::InvariantCulture) - [double]::Parse($match.Groups[$i].Value, [Globalization.CultureInfo]::InvariantCulture)
        $distanceSquared += $delta * $delta
    }
    if ($distanceSquared -lt 1) { throw 'Player did not move' }
    foreach ($required in @('xash.dll','cryoffear\dlls\hl.dll','cryoffear\cl_dlls\client.dll','ref_gl.dll')) {
        $expected = [IO.Path]::GetFullPath((Join-Path $runtime $required))
        if ($modules -notcontains $expected) { throw "Required own module not observed: $expected" }
    }
    if ($modules | Where-Object { $_ -match 'Steam\\steamapps\\common\\Cry of Fear' }) { throw 'Original game module was loaded' }
    $shot = Get-ChildItem $runtime -Filter "$($Map)_*.png" | Sort-Object LastWriteTime -Descending | Select-Object -First 1
    if (-not $shot -or $shot.LastWriteTime -lt (Get-Date).AddSeconds(-40)) { throw 'No fresh game screenshot' }
    $report = [ordered]@{map=$Map; exitCode=$process.ExitCode; movementUnits=[math]::Sqrt($distanceSquared); screenshot=$shot.FullName; modules=$modules; originalGameModulesLoaded=$false}
    $report | ConvertTo-Json -Depth 5 | Set-Content "$reportDir/smoke-$Map.json"
    Write-Output "PASS: $Map rendered, player moved $([math]::Round($report.movementUnits, 2)) units, own DLLs loaded, exit 0."
    Write-Output $shot.FullName
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
}
