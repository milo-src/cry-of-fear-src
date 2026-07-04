[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release")]
    [string]$Configuration = "Debug",

    [string[]]$Abi = @("arm"),

    [int]$MinSdk = 23,

    [string]$NdkVersion = "29.0.14206865",

    [int]$Jobs = [Environment]::ProcessorCount,

    [string]$AndroidSdkRoot = "",

    [string]$AndroidNdkRoot = "",

    [string]$ProjectDir = "",

    [string]$OutputApk = "",

    [switch]$CleanNative,

    [switch]$PrepareOnly,

    [switch]$SkipGameLibraries
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$engineRoot = Join-Path $repoRoot "external\xash3d-fwgs"
$templateProjectDir = Join-Path $engineRoot "android"
$cofSourceDir = Join-Path $repoRoot "src\cof"
$generatedRoot = Join-Path $repoRoot "build\android"
$cofNativeBuildRoot = Join-Path $generatedRoot "cof-libs"

if (-not $ProjectDir) {
    $ProjectDir = Join-Path $generatedRoot "xash3d-cof"
}

if (-not $OutputApk) {
    $OutputApk = Join-Path $repoRoot "out\android\xash3d-cof.apk"
}

$abis = Resolve-CofAndroidAbis -Abi $Abi

if (-not (Test-Path -LiteralPath (Join-Path $templateProjectDir "gradlew.bat"))) {
    throw "Xash3D Android project is missing: $templateProjectDir"
}

if (-not (Test-Path -LiteralPath (Join-Path $cofSourceDir "wscript"))) {
    throw "CoF waf project is missing: $cofSourceDir"
}

Write-Host "Preparing Xash3D CoF Android project..."
Write-Host "ABIs: $($abis -join ', ')"

Initialize-CofAndroidProject `
    -TemplateDir $templateProjectDir `
    -ProjectDir $ProjectDir `
    -GeneratedRoot $generatedRoot `
    -RepoRoot $repoRoot `
    -EngineRoot $engineRoot `
    -Abis $abis `
    -NdkVersion $NdkVersion

if ($PrepareOnly) {
    Write-Host ""
    Write-Host "Prepared generated Android project:"
    Write-Host $ProjectDir
    return
}

$sdkRoot = Resolve-AndroidSdkRoot -AndroidSdkRoot $AndroidSdkRoot
$ndkRoot = Resolve-AndroidNdkRoot -AndroidNdkRoot $AndroidNdkRoot -AndroidSdkRoot $sdkRoot -NdkVersion $NdkVersion

if (-not $SkipGameLibraries) {
    foreach ($abi in $abis) {
        Write-Host ""
        Write-Host "Building CoF game libraries for $abi..."

        $abiBuildDir = Invoke-CofAndroidWafBuild `
            -SourceDir $cofSourceDir `
            -BuildDir $cofNativeBuildRoot `
            -Abi $abi `
            -AndroidNdkRoot $ndkRoot `
            -Configuration $Configuration `
            -MinSdk $MinSdk `
            -Jobs $Jobs `
            -CleanFirst:$CleanNative

        Copy-CofAndroidGameLibraries -AbiBuildDir $abiBuildDir -ProjectDir $ProjectDir -Abi $abi
    }
}
else {
    Write-Warning "Skipping CoF game library build. Existing app/src/main/jniLibs content will be used."
}

Write-Host ""
Write-Host "Building APK..."
Invoke-CofAndroidGradleBuild -ProjectDir $ProjectDir -Configuration $Configuration -AndroidSdkRoot $sdkRoot
Copy-CofAndroidApk -ProjectDir $ProjectDir -Configuration $Configuration -OutputApk $OutputApk

Write-Host ""
Write-Host "Xash3D CoF APK created:"
Write-Host $OutputApk
