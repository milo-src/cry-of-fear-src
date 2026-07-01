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

function Get-CofGameDllRelativePath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $liblist = Join-Path $GameRoot "liblist.gam"
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

        [string]$BaseDir = "",

        [switch]$Required
    )

    if ($BaseDir -and -not [System.IO.Path]::IsPathRooted($Source)) {
        $Source = Join-Path $BaseDir $Source
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

        [string]$GameDir = "cryoffear",

        [string]$VguiDll = ""
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

    if ($VguiDll -and (Test-Path -LiteralPath $VguiDll)) {
        Copy-RequiredFile `
            -Source $VguiDll `
            -Destination (Join-Path $DeployRoot "vgui.dll")
    }
    else {
        Write-Warning "vgui.dll was not copied. Build openvgui and pass its runtime DLL through -VguiDll."
    }
}

