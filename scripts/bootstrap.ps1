[CmdletBinding()]
param()

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot

Initialize-RepoSubmodules

Write-Host ""
Write-Host "Submodules ready:"
Invoke-Checked -FilePath "git" -ArgumentList @("submodule", "status", "--recursive") -WorkingDirectory $repoRoot
