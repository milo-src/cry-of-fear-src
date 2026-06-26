[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [switch]$Install,

    [string]$GameDir = "valve",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$SourceDir = "",

    [string]$BuildDir = "",

    [string]$InstallPrefix = "",

    [string]$Generator = "",

    [string]$Platform = "",

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
$isWindows = Test-RunningOnWindows

if (-not (Get-Command "cmake" -ErrorAction SilentlyContinue)) {
    throw "CMake is required to build hlsdk-portable."
}

if (-not (Test-Path (Join-Path $sdkDir "CMakeLists.txt"))) {
    throw "Cannot find CMakeLists.txt in HLSDK source directory: $sdkDir"
}

if ($sdkDir -eq (Convert-ToFullPath $defaultSdkDir)) {
    Initialize-RepoSubmodules -Paths @("external/hlsdk-portable")
}

$configureArgs = @(
    "-S", $sdkDir,
    "-B", $BuildDir,
    "-DGAMEDIR=$GameDir",
    "-DCMAKE_INSTALL_PREFIX=$InstallPrefix"
)

if ($Generator) {
    $configureArgs += @("-G", $Generator)
}

if ($isWindows) {
    if (-not $Platform -and -not ($Generator -match "Ninja|MinGW|Unix Makefiles")) {
        if ($X64) {
            $Platform = "x64"
        }
        else {
            $Platform = "Win32"
        }
    }

    if ($Platform) {
        $configureArgs += @("-A", $Platform)
    }
}
else {
    $configureArgs += "-DCMAKE_BUILD_TYPE=$Configuration"
}

if ($X64) {
    $configureArgs += "-D64BIT=ON"
}

Invoke-Checked -FilePath "cmake" -ArgumentList $configureArgs -WorkingDirectory $repoRoot

$buildArgs = @(
    "--build", $BuildDir,
    "--config", $Configuration,
    "--parallel", "$Jobs"
)

if ($CleanFirst) {
    $buildArgs += "--clean-first"
}

if ($Install) {
    $buildArgs += @("--target", "install")
}

Invoke-Checked -FilePath "cmake" -ArgumentList $buildArgs -WorkingDirectory $repoRoot

if ($Install) {
    Write-Host ""
    Write-Host "HLSDK installed to $InstallPrefix\$GameDir"
}
