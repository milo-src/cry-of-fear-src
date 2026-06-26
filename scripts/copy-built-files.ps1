[CmdletBinding()]
param(
    [ValidateSet("Debug", "Release", "RelWithDebInfo", "MinSizeRel")]
    [string]$Configuration = "Release",

    [string]$GameDir = "cryoffear",

    [string]$DeployDir = "$env:USERPROFILE\Desktop\cof_xash"
)

$ErrorActionPreference = "Stop"

$repoRoot = Split-Path -Parent $PSScriptRoot
$DeployDir = [System.IO.Path]::GetFullPath($DeployDir)
$deployGameDir = Join-Path $DeployDir $GameDir

function Get-GameDllRelativePath {
    $liblist = Join-Path $deployGameDir "liblist.gam"
    if (Test-Path -LiteralPath $liblist) {
        foreach ($line in Get-Content -LiteralPath $liblist) {
            if ($line -match '^\s*gamedll\s+"?([^"]+)"?') {
                return ($matches[1] -replace '/', '\')
            }
        }
    }

    return "dlls\hl.dll"
}

function Copy-CheckedFile {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Source,

        [Parameter(Mandatory = $true)]
        [string]$Destination,

        [switch]$Required
    )

    if (-not [System.IO.Path]::IsPathRooted($Source)) {
        $Source = Join-Path $repoRoot $Source
    }

    if (-not (Test-Path -LiteralPath $Source)) {
        if ($Required) {
            throw "Missing required file: $Source"
        }

        Write-Host "Skipped missing optional file: $Source"
        return
    }

    $destinationDir = Split-Path -Parent $Destination
    New-Item -ItemType Directory -Force -Path $destinationDir | Out-Null

    Copy-Item -LiteralPath $Source -Destination $Destination -Force

    $sourceHash = (Get-FileHash -Algorithm SHA256 -LiteralPath $Source).Hash
    $destinationHash = (Get-FileHash -Algorithm SHA256 -LiteralPath $Destination).Hash

    if ($sourceHash -ne $destinationHash) {
        throw "Hash mismatch after copy: $Source -> $Destination"
    }

    $item = Get-Item -LiteralPath $Destination
    $shortHash = $destinationHash.Substring(0, 16)
    Write-Host ("Copied: {0} -> {1} [{2} bytes, sha256:{3}, {4}]" -f `
        $Source, $Destination, $item.Length, $shortHash, $item.LastWriteTime)
}

$runningXash = Get-Process -Name "xash3d" -ErrorAction SilentlyContinue
if ($runningXash) {
    Write-Warning "xash3d.exe is running. Close the game before copying DLLs, otherwise Windows may keep old DLLs loaded or block replacement."
}

$serverDllRelativePath = Get-GameDllRelativePath
$serverDllDestination = Join-Path $deployGameDir $serverDllRelativePath

Write-Host "Target: $DeployDir"
Write-Host "Config: $Configuration"
Write-Host "Server DLL path from liblist.gam: $GameDir\$serverDllRelativePath"
Write-Host ""

Copy-CheckedFile `
    -Source "build\cof\cl_dll\$Configuration\client.dll" `
    -Destination (Join-Path $deployGameDir "cl_dlls\client.dll") `
    -Required

Copy-CheckedFile `
    -Source "build\cof\dlls\$Configuration\hl.dll" `
    -Destination $serverDllDestination `
    -Required

Copy-CheckedFile `
    -Source "build\openvgui\$Configuration\vgui.dll" `
    -Destination (Join-Path $DeployDir "vgui.dll") `
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
        -Destination (Join-Path $DeployDir $file)
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
