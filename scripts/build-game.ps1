[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [string]$GameDir = "cof",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$SourceDir = "",

    [string]$BuildDir = "",

    [string]$InstallPrefix = "",

    [string]$Generator = "",

    [string]$Platform = "",

    [switch]$CleanFirst,

    [switch]$NoInstall
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot

if (-not $SourceDir) {
    $SourceDir = Join-Path $repoRoot "src\cof"
}

if (-not $BuildDir) {
    $BuildDir = Join-Path $repoRoot "build\cof"
}

if (-not $InstallPrefix) {
    $InstallPrefix = Join-Path $repoRoot "out\xash3d"
}

if (-not (Test-Path (Join-Path $SourceDir "CMakeLists.txt"))) {
    throw "COF source directory is missing or incomplete: $SourceDir"
}

$argsForHlsdk = @{
    Configuration = $Configuration
    GameDir = $GameDir
    Jobs = $Jobs
    SourceDir = $SourceDir
    BuildDir = $BuildDir
    InstallPrefix = $InstallPrefix
}

if ($X64) {
    $argsForHlsdk.X64 = $true
}

if ($Generator) {
    $argsForHlsdk.Generator = $Generator
}

if ($Platform) {
    $argsForHlsdk.Platform = $Platform
}

if ($CleanFirst) {
    $argsForHlsdk.CleanFirst = $true
}

if (-not $NoInstall) {
    $argsForHlsdk.Install = $true
}

& "$PSScriptRoot\build-hlsdk.ps1" @argsForHlsdk
