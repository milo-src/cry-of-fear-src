[CmdletBinding()]
param(
    [string]$Version = "2.32.10",

    [string]$Destination = ""
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot

if (-not $Destination) {
    $Destination = Join-Path $repoRoot "deps\sdl2"
}

$Destination = Convert-ToFullPath $Destination
$archiveName = "SDL2-devel-$Version-VC.zip"
$archivePath = Join-Path $Destination $archiveName
$url = "https://github.com/libsdl-org/SDL/releases/download/release-$Version/$archiveName"

New-Item -ItemType Directory -Force -Path $Destination | Out-Null

if (-not (Test-Path $archivePath)) {
    Write-Host "Downloading $url"
    Invoke-WebRequest -Uri $url -OutFile $archivePath
}
else {
    Write-Host "Using cached $archivePath"
}

Write-Host "Extracting $archiveName"
Expand-Archive -Path $archivePath -DestinationPath $Destination -Force

$sdl2Dir = Get-ChildItem -Path $Destination -Directory -Filter "SDL2-$Version" -Recurse |
    Select-Object -First 1

if (-not $sdl2Dir) {
    throw "SDL2-$Version was not found after extracting $archivePath."
}

Write-Host ""
Write-Host "SDL2 ready: $($sdl2Dir.FullName)"
Write-Host "For this shell you can set:"
Write-Host "`$env:SDL2_DIR = `"$($sdl2Dir.FullName)`""
