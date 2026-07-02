[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [switch]$Install,

    [string]$GameDir = "valve",

    [string]$ServerInstallDir = "",

    [string]$ClientInstallDir = "",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$SourceDir = "",

    [string]$BuildDir = "",

    [string]$InstallPrefix = "",

    [string]$Generator = "",

    [string]$Platform = "",

    [switch]$UseVGUI,

    [switch]$UseNoVGUIMOTD,

    [switch]$UseNoVGUIScoreboard,

    [string]$OpenVGUIRoot = "",

    [string]$OpenVGUIBuildDir = "",

    [switch]$CleanFirst
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$defaultSdkDir = Join-Path $repoRoot "external\hlsdk-portable"

if ($SourceDir) {
    $sdkDir = Convert-ToFullPath $SourceDir
}
else {
    $sdkDir = $defaultSdkDir
}

if (-not $BuildDir) {
    $BuildDir = Join-Path $repoRoot "build\hlsdk-portable"
}

if (-not $InstallPrefix) {
    $InstallPrefix = Join-Path $repoRoot "out\xash3d"
}

$BuildDir = Convert-ToFullPath $BuildDir
$InstallPrefix = Convert-ToFullPath $InstallPrefix
$wafBuildType = Convert-CmakeConfigurationToWafBuildType -Configuration $Configuration
$supportsInstallOverrides = [bool](Select-String `
    -Path (Join-Path $sdkDir "wscript") `
    -Pattern "GAMEDIR_OVERRIDE" `
    -Quiet `
    -ErrorAction SilentlyContinue)

if (-not (Get-Command "python" -ErrorAction SilentlyContinue)) {
    throw "Python is required by HLSDK waf build scripts."
}

if ($Generator) {
    Write-Warning "-Generator is ignored by waf builds."
}

if ($Platform) {
    Write-Warning "-Platform is ignored by waf builds. Use -X64 for 64-bit waf builds."
}

$waf = Join-Path $sdkDir "waf.bat"
if (-not (Test-Path -LiteralPath $waf)) {
    $waf = Join-Path $sdkDir "waf"
}

if (-not (Test-Path -LiteralPath $waf)) {
    throw "Cannot find HLSDK waf entrypoint in $sdkDir."
}

if (-not (Test-Path -LiteralPath (Join-Path $sdkDir "wscript"))) {
    throw "Cannot find wscript in HLSDK source directory: $sdkDir"
}

$configureArgs = @(
    "configure",
    "-T", $wafBuildType,
    "-o", $BuildDir,
    "--prefix=/",
    "--disable-werror"
)

if ($X64) {
    $configureArgs += "-8"
}

if ($supportsInstallOverrides -and $GameDir) {
    $configureArgs += "--gamedir=$GameDir"
}

if ($supportsInstallOverrides -and $ServerInstallDir) {
    $configureArgs += "--server-install-dir=$ServerInstallDir"
}

if ($supportsInstallOverrides -and $ClientInstallDir) {
    $configureArgs += "--client-install-dir=$ClientInstallDir"
}

if (-not $supportsInstallOverrides -and ($ServerInstallDir -or $ClientInstallDir)) {
    Write-Warning "This waf source tree does not support install-dir overrides; using mod_options.txt values."
}

if ($UseVGUI) {
    if (-not $OpenVGUIRoot -or -not $OpenVGUIBuildDir) {
        throw "VGUI waf builds require -OpenVGUIRoot and -OpenVGUIBuildDir."
    }

    $vguiCompatDir = New-OpenVguiWafCompatDir `
        -OpenVGUIRoot $OpenVGUIRoot `
        -OpenVGUIBuildDir $OpenVGUIBuildDir `
        -Configuration $Configuration

    $configureArgs += "--enable-vgui"
    $configureArgs += "--vgui=$vguiCompatDir"
}

if ($UseNoVGUIMOTD) {
    $configureArgs += "--enable-novgui-motd"
}

if ($UseNoVGUIScoreboard) {
    $configureArgs += "--enable-novgui-scoreboard"
}

Invoke-Checked -FilePath $waf -ArgumentList $configureArgs -WorkingDirectory $sdkDir

if ($CleanFirst) {
    Invoke-Checked -FilePath $waf -ArgumentList @("clean", "-o", $BuildDir) -WorkingDirectory $sdkDir
}

Invoke-Checked -FilePath $waf -ArgumentList @("build", "-o", $BuildDir, "-j$Jobs") -WorkingDirectory $sdkDir

if ($Install) {
    Invoke-Checked -FilePath $waf -ArgumentList @("install", "-o", $BuildDir, "--destdir=$InstallPrefix") -WorkingDirectory $sdkDir
    Write-Host ""
    Write-Host "HLSDK installed to $InstallPrefix\$GameDir"
}
