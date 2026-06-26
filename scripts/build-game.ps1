[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [string]$GameDir = "cryoffear",

    [string]$ServerInstallDir = "cl_dlls",

    [string]$ClientInstallDir = "cl_dlls",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$SourceDir = "",

    [string]$BuildDir = "",

    [string]$InstallPrefix = "",

    [string]$DeployDir = "",

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

$openVguiSourceDir = Join-Path $repoRoot "external\openvgui"
$openVguiBuildDir = Join-Path $repoRoot "build\openvgui"

if (-not $InstallPrefix) {
    $InstallPrefix = Join-Path $repoRoot "out\xash3d"
}

if (-not (Test-Path (Join-Path $SourceDir "CMakeLists.txt"))) {
    throw "COF source directory is missing or incomplete: $SourceDir"
}

$argsForOpenVgui = @{
    Configuration = $Configuration
    Jobs = $Jobs
    SourceDir = $openVguiSourceDir
    BuildDir = $openVguiBuildDir
}

if ($X64) {
    $argsForOpenVgui.X64 = $true
}

if ($Generator) {
    $argsForOpenVgui.Generator = $Generator
}

if ($Platform) {
    $argsForOpenVgui.Platform = $Platform
}

if ($CleanFirst) {
    $argsForOpenVgui.CleanFirst = $true
}

& "$PSScriptRoot\build-openvgui.ps1" @argsForOpenVgui

$argsForHlsdk = @{
    Configuration = $Configuration
    GameDir = $GameDir
    Jobs = $Jobs
    SourceDir = $SourceDir
    BuildDir = $BuildDir
    InstallPrefix = $InstallPrefix
    ServerInstallDir = $ServerInstallDir
    ClientInstallDir = $ClientInstallDir
    UseVGUI = $true
    UseNoVGUIMOTD = $true
    UseNoVGUIScoreboard = $true
    OpenVGUIRoot = $openVguiSourceDir
    OpenVGUIBuildDir = $openVguiBuildDir
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

if (-not $NoInstall -and $DeployDir) {
    $openVguiDll = Join-Path (Join-Path $openVguiBuildDir $Configuration) "vgui.dll"
    Copy-CofGameRuntime -SourceRoot $InstallPrefix -DeployRoot $DeployDir -GameDir $GameDir -VguiDll $openVguiDll
    Repair-CofLocalizationForXash -DeployRoot $DeployDir -GameDir $GameDir
    Write-Host ""
    Write-Host "COF game DLLs deployed to $DeployDir\$GameDir\cl_dlls"
}
