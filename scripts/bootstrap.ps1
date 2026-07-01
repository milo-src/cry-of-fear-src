[CmdletBinding()]
param()

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot

$requiredDirs = @(
    "external\xash3d-fwgs",
    "external\hlsdk-portable",
    "external\openvgui"
)

foreach ($dir in $requiredDirs) {
    $fullPath = Join-Path $repoRoot $dir
    if (-not (Test-Path -LiteralPath $fullPath)) {
        throw "Required vendored dependency is missing: $fullPath"
    }
}

Write-Host ""
Write-Host "Vendored dependencies are present."
