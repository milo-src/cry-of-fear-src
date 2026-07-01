[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [string]$GameDir = "cryoffear",

    [string]$DeployDir = "$env:USERPROFILE\Desktop\cof_xash"
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$DeployDir = [System.IO.Path]::GetFullPath($DeployDir)
$deployGameDir = Join-Path $DeployDir $GameDir

$runningXash = Get-Process -Name "xash3d" -ErrorAction SilentlyContinue
if ($runningXash) {
    Write-Warning "xash3d.exe is running. Close the game before copying DLLs, otherwise Windows may keep old DLLs loaded or block replacement."
}

$serverDllRelativePath = Get-CofGameDllRelativePath -GameRoot $deployGameDir
$serverDllDestination = Join-Path $deployGameDir $serverDllRelativePath

Write-Host "Target: $DeployDir"
Write-Host "Config: $Configuration"
Write-Host "Server DLL path from liblist.gam: $GameDir\$serverDllRelativePath"
Write-Host ""

Copy-CheckedFile `
    -Source "build\cof\cl_dll\$Configuration\client.dll" `
    -Destination (Join-Path $deployGameDir "cl_dlls\client.dll") `
    -BaseDir $repoRoot `
    -Required

Copy-CheckedFile `
    -Source "build\cof\dlls\$Configuration\hl.dll" `
    -Destination $serverDllDestination `
    -BaseDir $repoRoot `
    -Required

Copy-CheckedFile `
    -Source "build\openvgui\$Configuration\vgui.dll" `
    -Destination (Join-Path $DeployDir "vgui.dll") `
    -BaseDir $repoRoot `
    -Required

Write-Host ""
Write-Host "Copying Xash3D runtime if it was built..."

$runtimeFiles = @(
    "xash3d.exe",
    "xash.dll",
    "filesystem_stdio.dll",
    "ref_gl.dll",
    "ref_soft.dll",
    "menu.dll",
    "vgui_support.dll"
)

foreach ($file in $runtimeFiles) {
    Copy-CheckedFile `
        -Source (Join-Path "out\xash3d" $file) `
        -Destination (Join-Path $DeployDir $file) `
        -BaseDir $repoRoot
}

$sdl2Source = Join-Path $repoRoot "out\xash3d\SDL2.dll"
if (-not (Test-Path -LiteralPath $sdl2Source)) {
    $sdl2Source = Join-Path $repoRoot "deps\sdl2\SDL2-2.32.10\lib\x86\SDL2.dll"
}

Copy-CheckedFile `
    -Source $sdl2Source `
    -Destination (Join-Path $DeployDir "SDL2.dll")

Write-Host ""
Write-Host "Copy finished and hashes match."
