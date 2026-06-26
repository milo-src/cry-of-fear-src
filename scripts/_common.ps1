Set-StrictMode -Version 2.0

function Get-RepoRoot {
    return (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
}

function Convert-ToFullPath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    return [System.IO.Path]::GetFullPath($Path)
}

function Test-RunningOnWindows {
    if ($PSVersionTable.PSEdition -eq "Desktop") {
        return $true
    }

    return [System.Runtime.InteropServices.RuntimeInformation]::IsOSPlatform(
        [System.Runtime.InteropServices.OSPlatform]::Windows
    )
}

function Invoke-Checked {
    param(
        [Parameter(Mandatory = $true)]
        [string]$FilePath,

        [string[]]$ArgumentList = @(),

        [string]$WorkingDirectory = ""
    )

    Write-Host ">> $FilePath $($ArgumentList -join ' ')"

    if ($WorkingDirectory) {
        Push-Location $WorkingDirectory
    }

    try {
        & $FilePath @ArgumentList

        if ($LASTEXITCODE -ne 0) {
            throw "Command failed with exit code ${LASTEXITCODE}: $FilePath $($ArgumentList -join ' ')"
        }
    }
    finally {
        if ($WorkingDirectory) {
            Pop-Location
        }
    }
}

function Initialize-RepoSubmodules {
    param(
        [string[]]$Paths = @()
    )

    $repoRoot = Get-RepoRoot
    $args = @("submodule", "update", "--init", "--recursive")
    $args += $Paths

    Invoke-Checked -FilePath "git" -ArgumentList $args -WorkingDirectory $repoRoot
}

function Find-LocalSdl2 {
    $repoRoot = Get-RepoRoot
    $depsDir = Join-Path $repoRoot "deps"

    if (-not (Test-Path $depsDir)) {
        return ""
    }

    $candidate = Get-ChildItem -Path $depsDir -Directory -Recurse -Filter "SDL2-*" -ErrorAction SilentlyContinue |
        Where-Object {
            (Test-Path (Join-Path $_.FullName "include\SDL.h")) -and
            ((Test-Path (Join-Path $_.FullName "lib\x86\SDL2.lib")) -or
             (Test-Path (Join-Path $_.FullName "lib\x64\SDL2.lib")))
        } |
        Select-Object -First 1

    if ($candidate) {
        return $candidate.FullName
    }

    return ""
}

function Copy-RequiredFile {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Source,

        [Parameter(Mandatory = $true)]
        [string]$Destination
    )

    if (-not (Test-Path -LiteralPath $Source)) {
        throw "Required runtime file is missing: $Source"
    }

    $destinationDir = Split-Path -Parent $Destination
    New-Item -ItemType Directory -Force -Path $destinationDir | Out-Null
    Copy-Item -LiteralPath $Source -Destination $Destination -Force
    Write-Host "Copied $Source -> $Destination"
}

function Copy-XashRuntime {
    param(
        [Parameter(Mandatory = $true)]
        [string]$SourceDir,

        [Parameter(Mandatory = $true)]
        [string]$DeployDir,

        [string]$Sdl2Path = "",

        [switch]$X64
    )

    $SourceDir = Convert-ToFullPath $SourceDir
    $DeployDir = Convert-ToFullPath $DeployDir

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
        Copy-RequiredFile -Source (Join-Path $SourceDir $file) -Destination (Join-Path $DeployDir $file)
    }

    if ($Sdl2Path) {
        if ($X64) {
            $sdlDll = Join-Path $Sdl2Path "lib\x64\SDL2.dll"
        }
        else {
            $sdlDll = Join-Path $Sdl2Path "lib\x86\SDL2.dll"
        }

        if (-not (Test-Path -LiteralPath $sdlDll)) {
            $sdlDll = Get-ChildItem -Path $Sdl2Path -Filter "SDL2.dll" -Recurse -File -ErrorAction SilentlyContinue |
                Select-Object -ExpandProperty FullName -First 1
        }

        Copy-RequiredFile -Source $sdlDll -Destination (Join-Path $DeployDir "SDL2.dll")
    }
}

function Copy-CofGameRuntime {
    param(
        [Parameter(Mandatory = $true)]
        [string]$SourceRoot,

        [Parameter(Mandatory = $true)]
        [string]$DeployRoot,

        [string]$GameDir = "cryoffear"
    )

    $SourceRoot = Convert-ToFullPath $SourceRoot
    $DeployRoot = Convert-ToFullPath $DeployRoot

    $sourceGameDir = Join-Path $SourceRoot $GameDir
    $targetClientDir = Join-Path (Join-Path $DeployRoot $GameDir) "cl_dlls"

    Copy-RequiredFile `
        -Source (Join-Path $sourceGameDir "cl_dlls\client.dll") `
        -Destination (Join-Path $targetClientDir "client.dll")

    $serverDll = Join-Path $sourceGameDir "cl_dlls\hl.dll"
    if (-not (Test-Path -LiteralPath $serverDll)) {
        $serverDll = Join-Path $sourceGameDir "dlls\hl.dll"
    }

    Copy-RequiredFile `
        -Source $serverDll `
        -Destination (Join-Path $targetClientDir "hl.dll")
}
