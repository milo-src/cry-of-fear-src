#requires -Version 7.0
param([int]$Width=1280,[int]$Height=720)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$runtime=Join-Path $root 'out/runtime'
$map=Join-Path $runtime 'cryoffear/maps/cof_chat_fixture.bsp'
if(Test-Path -LiteralPath $map){throw 'Fixture path already exists; refusing to overwrite'}
$config=Join-Path $runtime 'cryoffear/config.cfg'
$backup=[IO.File]::ReadAllBytes($config)
$previous=$env:COF_CHATTEST
$process=$null
$modules=@()
$started=Get-Date
try {
    # The coop prefix exercises the recovered visibility condition on known geometry.
    python "$PSScriptRoot/create_chat_fixture.py"
    if($LASTEXITCODE -ne 0){throw 'Could not create chat fixture'}
    $env:COF_CHATTEST='1'
    $process=Start-Process -FilePath "$runtime/xash3d.exe" -ArgumentList "-game cryoffear -windowed -width $Width -height $Height -console -dev 1 -log +con_notifytime 0 +scr_drawversion 0 +map cof_chat_fixture" -WorkingDirectory $runtime -WindowStyle Hidden -PassThru
    $env:COF_CHATTEST=$previous
    $watch=[Diagnostics.Stopwatch]::StartNew()
    while(-not $process.HasExited -and $watch.Elapsed.TotalSeconds -lt 45) {
        $modules=@($modules + @((Get-Process -Id $process.Id -ErrorAction SilentlyContinue).Modules | ForEach-Object FileName) | Where-Object {$_} | Sort-Object -Unique)
        Start-Sleep -Milliseconds 250
        $process.Refresh()
    }
    if(-not $process.HasExited){throw 'Chat test timed out'}
    $process.WaitForExit()
    if($process.ExitCode -ne 0){throw "Game exited with $($process.ExitCode)"}
    if((Get-Item "$runtime/engine.log").LastWriteTime -lt $started){throw 'Stale engine log'}
    $log=Get-Content "$runtime/engine.log" -Raw
    $log | Set-Content "$root/analysis/local/chat-${Width}x${Height}.log"
    if($log -notmatch 'COF_CHAT_COMPLETE failures=0' -or $log -match 'COF_CHAT FAIL'){throw 'Chat checks failed; see analysis/local chat log'}
    if($log -notmatch 'COF_CHAT_INPUT mode=say bytes=120 dest=1' -or $log -notmatch 'COF_CHAT_FONT Verdana'){throw 'Input limit/font path was not exercised'}
    foreach($required in @('xash.dll','menu.dll','ref_gl.dll','cryoffear\cl_dlls\client.dll','cryoffear\dlls\hl.dll')) {
        if(-not ($modules | Where-Object {$_ -ieq (Join-Path $runtime $required)})){throw "Missing runtime module $required"}
    }
    if($modules | Where-Object {$_ -like '*Steam*Cry of Fear*'}){throw 'Original binary loaded'}
    $shots=@(Get-ChildItem $runtime -Filter 'cof_chat_fixture_*.png' | Where-Object {$_.LastWriteTime -ge $started} | Sort-Object LastWriteTime | ForEach-Object FullName)
    if($shots.Count -lt 3){throw 'Missing chat captures'}
    @{passed=$true;resolution=@($Width,$Height);screenshots=@($shots);modules=$modules;input='engine Con_CharEvent/Key_Message entrypoints'} | ConvertTo-Json -Depth 4 | Set-Content "$root/analysis/local/chat-${Width}x${Height}.json"
    Write-Output "PASS chat ${Width}x${Height}"
} finally {
    $env:COF_CHATTEST=$previous
    if($process -and -not $process.HasExited){Stop-Process -Id $process.Id -Force}
    [IO.File]::WriteAllBytes($config,$backup)
    Remove-Item -LiteralPath $map -ErrorAction SilentlyContinue
}
