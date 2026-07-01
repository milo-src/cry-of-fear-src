[CmdletBinding()]
param(
    [switch]$Strict
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$errors = [System.Collections.Generic.List[string]]::new()
$warnings = [System.Collections.Generic.List[string]]::new()

function Add-CheckError {
    param([Parameter(Mandatory = $true)][string]$Message)
    $errors.Add($Message) | Out-Null
}

function Add-CheckWarning {
    param([Parameter(Mandatory = $true)][string]$Message)
    $warnings.Add($Message) | Out-Null
}

if (Test-Path -LiteralPath (Join-Path $repoRoot ".gitmodules")) {
    Add-CheckError ".gitmodules exists in the repository root."
}

foreach ($relativeRoot in @("external", "src")) {
    $scanRoot = Join-Path $repoRoot $relativeRoot
    if (-not (Test-Path -LiteralPath $scanRoot)) {
        continue
    }

    $nestedGitDirs = Get-ChildItem -Path $scanRoot -Directory -Force -Recurse -Filter ".git" -ErrorAction SilentlyContinue
    foreach ($dir in $nestedGitDirs) {
        Add-CheckError "Nested Git directory found: $($dir.FullName)"
    }
}

$requiredDirs = @(
    "external\xash3d-fwgs",
    "external\hlsdk-portable",
    "external\openvgui",
    "src\cof",
    "scripts"
)

foreach ($dir in $requiredDirs) {
    if (-not (Test-Path -LiteralPath (Join-Path $repoRoot $dir))) {
        Add-CheckError "Required directory is missing: $dir"
    }
}

if (Get-Command "git" -ErrorAction SilentlyContinue) {
    $gitLinks = @(git -C $repoRoot ls-files -s | Where-Object { $_ -match '^160000\s' })
    foreach ($entry in $gitLinks) {
        Add-CheckError "Gitlink/submodule entry is still tracked: $entry"
    }

    $trackedGenerated = @(git -C $repoRoot ls-files -- build deps out install | Where-Object { $_ })
    foreach ($entry in $trackedGenerated) {
        Add-CheckWarning "Generated output appears to be tracked: $entry"
    }

    $trackedLegacyVgui = @(git -C $repoRoot ls-files -- src/cof/vgui_support/vgui-dev/lib | Where-Object {
        ($_ -match '\.(dll|lib|so|dylib)$') -and
        (Test-Path -LiteralPath (Join-Path $repoRoot $_))
    })
    foreach ($entry in $trackedLegacyVgui) {
        Add-CheckWarning "Legacy binary VGUI fallback appears to be tracked: $entry"
    }
}
else {
    Add-CheckWarning "git was not found in PATH; tracked file checks were skipped."
}

if ($warnings.Count -gt 0) {
    Write-Host "Workspace warnings:"
    foreach ($warning in $warnings) {
        Write-Host "  [warn] $warning"
    }
    Write-Host ""
}

if ($errors.Count -gt 0) {
    Write-Host "Workspace errors:"
    foreach ($errorMessage in $errors) {
        Write-Host "  [error] $errorMessage"
    }
    exit 1
}

if ($Strict -and $warnings.Count -gt 0) {
    exit 1
}

Write-Host "Workspace check passed."
