[CmdletBinding()]
param(
    [string]$Sdl2Path = $env:SDL2_DIR,

    [string]$GameDir = "valve",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [switch]$SkipEngine,

    [switch]$SkipHlsdk
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$installDir = Join-Path $repoRoot "out\xash3d"

& "$PSScriptRoot\bootstrap.ps1"

if (-not $SkipEngine) {
    $engineArgs = @{
        BuildType = "release"
        Jobs = $Jobs
        InstallDir = $installDir
    }

    if ($Sdl2Path) {
        $engineArgs.Sdl2Path = $Sdl2Path
    }

    if ($X64) {
        $engineArgs.X64 = $true
    }

    & "$PSScriptRoot\build-xash3d.ps1" @engineArgs
}

if (-not $SkipHlsdk) {
    $hlsdkArgs = @{
        Configuration = "Release"
        Jobs = $Jobs
        Install = $true
        InstallPrefix = $installDir
        GameDir = $GameDir
    }

    if ($X64) {
        $hlsdkArgs.X64 = $true
    }

    & "$PSScriptRoot\build-hlsdk.ps1" @hlsdkArgs
}

Write-Host ""
Write-Host "Build flow finished. Runtime output: $installDir"
