#requires -Version 7.0
# PowerShell 7 can enumerate the x86 game's modules from this x64 host.
param([string]$Map = 'c_sdkmap1', [switch]$Doors, [switch]$Inventory, [switch]$InventorySave, [switch]$Ui, [int]$Width = 1280, [int]$Height = 720)
$ErrorActionPreference = 'Stop'
if ($Ui) { $Inventory = $true }
if ($Ui -and $InventorySave) { throw 'UI and save fixtures run separately' }
if ($Width -lt 800 -or $Width -gt 3840 -or $Height -lt 480 -or $Height -gt 2160) { throw 'Invalid test resolution' }
if ($Map -notmatch '^[a-zA-Z0-9_]+$') { throw 'Invalid map name' }
if ($Doors -and $Inventory) { throw 'Run door and inventory fixtures separately' }
if ($InventorySave -and !$Inventory) { throw 'InventorySave requires Inventory' }
if ($Inventory -and $Map -ne 'c_sdkmap1') { throw 'Inventory fixtures require c_sdkmap1' }
$taskRoot = Split-Path $PSScriptRoot -Parent
$runtime = Join-Path $taskRoot 'out/runtime'
$reportDir = Join-Path $taskRoot 'analysis/local'
New-Item -ItemType Directory -Force -Path $reportDir | Out-Null
$oldUi = $env:COF_UITEST
$oldSmoke = $env:COF_SMOKETEST
$oldDoors = $env:COF_DOORTEST
$oldInventory = $env:COF_INVENTORYTEST
$oldInventorySave = $env:COF_INVENTORYSAVE
$suffix = if ($Ui) { "-ui-${Width}x${Height}" } elseif ($Doors) { '-doors' } elseif ($InventorySave) { '-inventory-save' } elseif ($Inventory) { '-inventory' } else { '' }
$env:COF_UITEST = if ($Ui) { '1' } else { $null }
$env:COF_SMOKETEST = '1'
$env:COF_DOORTEST = if ($Doors) { '1' } else { $null }
$env:COF_INVENTORYTEST = if ($Inventory) { '1' } else { $null }
$env:COF_INVENTORYSAVE = if ($InventorySave) { '1' } else { $null }
try {
    $process = Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +map $Map" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
} finally {
    $env:COF_UITEST = $oldUi
    $env:COF_SMOKETEST = $oldSmoke
    $env:COF_DOORTEST = $oldDoors
    $env:COF_INVENTORYTEST = $oldInventory
    $env:COF_INVENTORYSAVE = $oldInventorySave
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
    if ($Ui -and ($log -notmatch 'COF_UI_TEST_COMPLETE failures=0' -or $log -match 'COF_UI_TEST FAIL' -or $log -notmatch 'COF_UI_STAMINA value=40' -or $log -notmatch 'COF_UI_HEALTHCAP value=1' -or $log -match 'COF_UI missing image')) { throw 'UI integration checks failed' }
    $distanceSquared = 0.0
    if ($Doors) {
        if ($log -notmatch 'COF_DOOR_TEST_COMPLETE failures=0' -or $log -match 'COF_DOOR_TEST FAIL') {
            throw "Door integration checks failed; see $reportDir/smoke-$Map$suffix.log"
        }
    } elseif ($Inventory) {
        if ($log -notmatch 'COF_INVENTORY_TEST_COMPLETE failures=0' -or $log -match 'COF_INVENTORY_TEST FAIL') {
            throw "Inventory integration checks failed; see $reportDir/smoke-$Map$suffix.log"
        }
        if ($log -notmatch 'COF_INVENTORY_CLIENT slot=1 item=sewerkey') { throw 'Client did not receive key inventory state' }
        if ($InventorySave -and $log -notmatch 'COF_INVENTORY_SAVE_COMPLETE failures=0') { throw 'Inventory save/load checks failed' }
        if ($InventorySave -and $log -notmatch 'COF_INVENTORY_SAVE_COMPLETE[\s\S]*COF_INVENTORY_CLIENT slot=1 item=sewerkey') {
            throw 'Client inventory did not resynchronize after load'
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
    $report = [ordered]@{map=$Map; exitCode=$process.ExitCode; movementUnits=$(if ($Doors -or $Inventory) { $null } else { [math]::Sqrt($distanceSquared) }); doorIntegration=$Doors.IsPresent; uiIntegration=[bool]$Ui; resolution=@($Width,$Height); inventoryIntegration=[bool]$Inventory; inventorySaveLoad=$InventorySave.IsPresent; screenshot=$shot.FullName; modules=$modules; originalGameModulesLoaded=$false}
    $report | ConvertTo-Json -Depth 5 | Set-Content "$reportDir/smoke-$Map$suffix.json"
    Write-Output "PASS: $Map$suffix rendered, behavior checks passed, own DLLs loaded, exit 0."
    Write-Output $shot.FullName
} finally {
    if (-not $process.HasExited) { Stop-Process -Id $process.Id }
}
