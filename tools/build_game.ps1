param([int]$Jobs = 8)
$ErrorActionPreference = 'Stop'
$taskRoot = Split-Path $PSScriptRoot -Parent
Push-Location $taskRoot
try {
    python tools/prepare_sdk.py
    if ($LASTEXITCODE -ne 0) { throw 'SDK preparation failed' }
    python waf configure
    if ($LASTEXITCODE -ne 0) { throw 'Waf configure failed' }
    python waf build "-j$Jobs"
    if ($LASTEXITCODE -ne 0) { throw 'Game compilation failed' }
    python waf install
    if ($LASTEXITCODE -ne 0) { throw 'Game install failed' }
} finally { Pop-Location }
