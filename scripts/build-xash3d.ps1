[CmdletBinding()]
param(
    [ValidateSet("debug", "release", "none")]
    [string]$BuildType = "release",

    [string]$Sdl2Path = $env:SDL2_DIR,

    [switch]$X64,

    [string]$GameDir = "",

    [string]$DeployDir = "",

    [switch]$SkipInstall,

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$BuildDir = "",

    [string]$InstallDir = ""
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$engineDir = Join-Path $repoRoot "external\xash3d-fwgs"

if (-not $BuildDir) {
    $BuildDir = Join-Path $repoRoot "build\xash3d-fwgs"
}

if (-not $InstallDir) {
    $InstallDir = Join-Path $repoRoot "out\xash3d"
}

$BuildDir = Convert-ToFullPath $BuildDir
$InstallDir = Convert-ToFullPath $InstallDir
$isWindows = Test-RunningOnWindows

if ([string]::IsNullOrWhiteSpace($Sdl2Path)) {
    $Sdl2Path = Find-LocalSdl2
}

if (-not (Get-Command "python" -ErrorAction SilentlyContinue)) {
    throw "Python is required by Xash3D FWGS waf build scripts."
}

if ($isWindows -and [string]::IsNullOrWhiteSpace($Sdl2Path)) {
    throw "SDL2 is required on Windows. Run .\scripts\fetch-sdl2.ps1, set SDL2_DIR, or pass -Sdl2Path C:\Path\To\SDL2."
}

if ($isWindows) {
    $waf = Join-Path $engineDir "waf.bat"
}
else {
    $waf = Join-Path $engineDir "waf"
}

if (-not (Test-Path $waf)) {
    throw "Cannot find Xash3D waf entrypoint at $waf."
}

$configureArgs = @(
    "configure",
    "-T", $BuildType,
    "-o", $BuildDir,
    "--disable-werror"
)

if ($isWindows) {
    $configureArgs += "--sdl2=$Sdl2Path"
}

if ($X64) {
    $configureArgs += "-8"
}

if ($GameDir) {
    $configureArgs += "--gamedir=$GameDir"
}

Invoke-Checked -FilePath $waf -ArgumentList $configureArgs -WorkingDirectory $engineDir
Invoke-Checked -FilePath $waf -ArgumentList @("build", "-j$Jobs") -WorkingDirectory $engineDir

if (-not $SkipInstall) {
    New-Item -ItemType Directory -Force -Path $InstallDir | Out-Null
    Invoke-Checked -FilePath $waf -ArgumentList @("install", "--destdir=$InstallDir") -WorkingDirectory $engineDir
    Write-Host ""
    Write-Host "Xash3D FWGS installed to $InstallDir"

    if ($DeployDir) {
        Copy-XashRuntime -SourceDir $InstallDir -DeployDir $DeployDir -Sdl2Path $Sdl2Path -X64:$X64

        if ($GameDir) {
            $deployedGameRoot = Join-Path (Convert-ToFullPath $DeployDir) $GameDir
            if (Test-Path -LiteralPath $deployedGameRoot) {
                Repair-CofLocalizationForXash -DeployRoot $DeployDir -GameDir $GameDir
            }
        }

        Write-Host ""
        Write-Host "Xash3D FWGS runtime deployed to $DeployDir"
    }
}
