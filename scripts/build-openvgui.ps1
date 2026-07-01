[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [switch]$X64,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$SourceDir = "",

    [string]$BuildDir = "",

    [string]$Generator = "",

    [string]$Platform = "",

    [switch]$CleanFirst
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$defaultSourceDir = Join-Path $repoRoot "external\openvgui"

if (-not $SourceDir) {
    $SourceDir = $defaultSourceDir
}

if (-not $BuildDir) {
    $BuildDir = Join-Path $repoRoot "build\openvgui"
}

$SourceDir = Convert-ToFullPath $SourceDir
$BuildDir = Convert-ToFullPath $BuildDir
$isWindows = Test-RunningOnWindows

if (-not (Get-Command "cmake" -ErrorAction SilentlyContinue)) {
    throw "CMake is required to build openvgui."
}

if (-not (Test-Path (Join-Path $SourceDir "CMakeLists.txt"))) {
    throw "Cannot find CMakeLists.txt in openvgui source directory: $SourceDir"
}

$configureArgs = @(
    "-S", $SourceDir,
    "-B", $BuildDir
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

Invoke-Checked -FilePath "cmake" -ArgumentList $configureArgs -WorkingDirectory $repoRoot

$buildArgs = @(
    "--build", $BuildDir,
    "--config", $Configuration,
    "--parallel", "$Jobs"
)

if ($CleanFirst) {
    $buildArgs += "--clean-first"
}

Invoke-Checked -FilePath "cmake" -ArgumentList $buildArgs -WorkingDirectory $repoRoot

$runtimeNames = if ($isWindows) {
    @("vgui.dll")
}
elseif ([System.Runtime.InteropServices.RuntimeInformation]::IsOSPlatform(
    [System.Runtime.InteropServices.OSPlatform]::OSX
)) {
    @("libvgui.dylib")
}
else {
    @("libvgui.so")
}

$runtimeDll = ""
foreach ($runtimeName in $runtimeNames) {
    foreach ($candidateRoot in @((Join-Path $BuildDir $Configuration), $BuildDir)) {
        $candidate = Join-Path $candidateRoot $runtimeName
        if (Test-Path -LiteralPath $candidate) {
            $runtimeDll = $candidate
            break
        }
    }

    if ($runtimeDll) {
        break
    }
}

if (-not $runtimeDll) {
    throw "openvgui built successfully, but its runtime library was not found in $BuildDir"
}

Write-Host ""
Write-Host "openvgui built: $runtimeDll"
