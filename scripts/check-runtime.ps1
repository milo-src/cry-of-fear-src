[CmdletBinding()]
param(
    [string]$GameDir = "cryoffear",

    [string]$DeployDir = "$env:USERPROFILE\Desktop\cof_xash",

    [switch]$Strict
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$deployRoot = Convert-ToFullPath $DeployDir
$gameRoot = Join-Path $deployRoot $GameDir
$errors = [System.Collections.Generic.List[string]]::new()
$warnings = [System.Collections.Generic.List[string]]::new()

function Add-RuntimeError {
    param([Parameter(Mandatory = $true)][string]$Message)
    $errors.Add($Message) | Out-Null
}

function Add-RuntimeWarning {
    param([Parameter(Mandatory = $true)][string]$Message)
    $warnings.Add($Message) | Out-Null
}

function Test-RuntimeFile {
    param(
        [Parameter(Mandatory = $true)]
        [string]$RelativePath,

        [switch]$Required
    )

    $path = Join-Path $deployRoot $RelativePath
    if (Test-Path -LiteralPath $path) {
        return
    }

    if ($Required) {
        Add-RuntimeError "Missing required runtime file: $RelativePath"
    }
    else {
        Add-RuntimeWarning "Missing optional runtime file: $RelativePath"
    }
}

function Test-ConfigLine {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path,

        [Parameter(Mandatory = $true)]
        [string]$Name,

        [Parameter(Mandatory = $true)]
        [string]$ExpectedValue
    )

    if (-not (Test-Path -LiteralPath $Path)) {
        Add-RuntimeWarning "Config file is missing: $Path"
        return
    }

    $pattern = '(?im)^\s*' + [regex]::Escape($Name) + '\s+"?' + [regex]::Escape($ExpectedValue) + '"?\s*$'
    $text = Get-Content -LiteralPath $Path -Raw
    if ($text -notmatch $pattern) {
        Add-RuntimeWarning "Config value is missing or different: $Name $ExpectedValue"
    }
}

Write-Host "Checking runtime: $deployRoot"

foreach ($file in @(
    "xash3d.exe",
    "xash.dll",
    "filesystem_stdio.dll",
    "ref_gl.dll",
    "ref_soft.dll",
    "menu.dll",
    "vgui_support.dll",
    "vgui.dll",
    "SDL2.dll"
)) {
    Test-RuntimeFile -RelativePath $file -Required
}

Test-RuntimeFile -RelativePath (Join-Path $GameDir "cl_dlls\client.dll") -Required

if (Test-Path -LiteralPath $gameRoot) {
    $serverDllRelativePath = Get-CofGameDllRelativePath -GameRoot $gameRoot
}
else {
    Add-RuntimeError "Game directory is missing: $gameRoot"
    $serverDllRelativePath = "dlls\hl.dll"
}

Test-RuntimeFile -RelativePath (Join-Path $GameDir $serverDllRelativePath) -Required

$legacyFiles = @(
    "$GameDir\cl_dlls\GameUI.dll",
    "$GameDir\cl_dlls\menu.dll",
    "$GameDir\resource\GameMenu.res",
    "$GameDir\gfx\conback.lmp"
)

foreach ($legacyFile in $legacyFiles) {
    if (Test-Path -LiteralPath (Join-Path $deployRoot $legacyFile)) {
        Add-RuntimeWarning "Legacy menu/font file is still present: $legacyFile"
    }
}

$liblist = Join-Path $gameRoot "liblist.gam"
if (Test-Path -LiteralPath $liblist) {
    $liblistText = Get-Content -LiteralPath $liblist -Raw
    if ($liblistText -notmatch '(?im)^\s*startmap\s+"?c_start"?\s*$') {
        Add-RuntimeWarning "liblist.gam does not set startmap to c_start."
    }
}
else {
    Add-RuntimeError "Missing liblist.gam in $gameRoot"
}

$configPath = Join-Path $gameRoot "config.cfg"
Test-ConfigLine -Path $configPath -Name "cl_charset" -ExpectedValue "utf-8"
Test-ConfigLine -Path $configPath -Name "con_charset" -ExpectedValue "cp1251"
Test-ConfigLine -Path $configPath -Name "vgui_utf8" -ExpectedValue "1"
Test-ConfigLine -Path $configPath -Name "hud_utf8" -ExpectedValue "1"

if ($warnings.Count -gt 0) {
    Write-Host ""
    Write-Host "Runtime warnings:"
    foreach ($warning in $warnings) {
        Write-Host "  [warn] $warning"
    }
}

if ($errors.Count -gt 0) {
    Write-Host ""
    Write-Host "Runtime errors:"
    foreach ($errorMessage in $errors) {
        Write-Host "  [error] $errorMessage"
    }
    exit 1
}

if ($Strict -and $warnings.Count -gt 0) {
    exit 1
}

Write-Host ""
Write-Host "Runtime check passed."
