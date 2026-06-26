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

function Convert-TextFileToUtf8 {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    if (-not (Test-Path -LiteralPath $Path)) {
        throw "Cannot find localization file: $Path"
    }

    $bytes = [System.IO.File]::ReadAllBytes($Path)

    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    $writeFile = $true

    if ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFF -and $bytes[1] -eq 0xFE) {
        $text = [System.Text.Encoding]::Unicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFE -and $bytes[1] -eq 0xFF) {
        $text = [System.Text.Encoding]::BigEndianUnicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 3 -and $bytes[0] -eq 0xEF -and $bytes[1] -eq 0xBB -and $bytes[2] -eq 0xBF) {
        $text = [System.Text.Encoding]::UTF8.GetString($bytes, 3, $bytes.Length - 3)
    }
    else {
        try {
            $null = $strictUtf8.GetString($bytes)
            $writeFile = $false
        }
        catch {
            $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
        }
    }

    if ($writeFile) {
        $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
        [System.IO.File]::WriteAllBytes($Path, $utf8NoBom.GetBytes($text))
        Write-Host "Converted localization to UTF-8: $Path"
    }
}

function Set-CofConfigCvar {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ConfigPath,

        [Parameter(Mandatory = $true)]
        [string]$Name,

        [Parameter(Mandatory = $true)]
        [string]$Value
    )

    $line = "$Name `"$Value`""
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    $utf8NoBom = [System.Text.UTF8Encoding]::new($false)

    if (-not (Test-Path -LiteralPath $ConfigPath)) {
        [System.IO.File]::WriteAllText($ConfigPath, $line + [Environment]::NewLine, $utf8NoBom)
        Write-Host "Created config cvar: $line"
        return
    }

    $bytes = [System.IO.File]::ReadAllBytes($ConfigPath)
    if ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFF -and $bytes[1] -eq 0xFE) {
        $text = [System.Text.Encoding]::Unicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFE -and $bytes[1] -eq 0xFF) {
        $text = [System.Text.Encoding]::BigEndianUnicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 3 -and $bytes[0] -eq 0xEF -and $bytes[1] -eq 0xBB -and $bytes[2] -eq 0xBF) {
        $text = [System.Text.Encoding]::UTF8.GetString($bytes, 3, $bytes.Length - 3)
    }
    else {
        try {
            $text = $strictUtf8.GetString($bytes)
        }
        catch {
            $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
        }
    }

    $pattern = "(?m)^\s*" + [System.Text.RegularExpressions.Regex]::Escape($Name) + "\s+.*$"

    if ([System.Text.RegularExpressions.Regex]::IsMatch($text, $pattern)) {
        $updated = [System.Text.RegularExpressions.Regex]::Replace($text, $pattern, $line)
    }
    else {
        $ending = if ($text.EndsWith("`r`n") -or $text.EndsWith("`n")) { "" } else { [Environment]::NewLine }
        $updated = $text + $ending + $line + [Environment]::NewLine
    }

    if ($updated -ne $text) {
        [System.IO.File]::WriteAllText($ConfigPath, $updated, $utf8NoBom)
        Write-Host "Set config cvar: $line"
    }
}

function Clear-CofFontCache {
    param(
        [Parameter(Mandatory = $true)]
        [string]$DeployRoot,

        [string]$GameDir = "cryoffear"
    )

    $gameRoot = Join-Path (Convert-ToFullPath $DeployRoot) $GameDir
    $fontCache = Join-Path $gameRoot ".fontcache"

    if (-not (Test-Path -LiteralPath $fontCache)) {
        return
    }

    $resolvedGameRoot = (Resolve-Path -LiteralPath $gameRoot).Path.TrimEnd("\", "/")
    $resolvedFontCache = (Resolve-Path -LiteralPath $fontCache).Path
    $expectedPrefix = $resolvedGameRoot + [System.IO.Path]::DirectorySeparatorChar

    if (-not $resolvedFontCache.StartsWith($expectedPrefix, [System.StringComparison]::OrdinalIgnoreCase)) {
        throw "Refusing to remove font cache outside game directory: $resolvedFontCache"
    }

    Remove-Item -LiteralPath $resolvedFontCache -Recurse -Force
    Write-Host "Cleared font cache: $resolvedFontCache"
}

function Repair-CofLocalizationForXash {
    param(
        [Parameter(Mandatory = $true)]
        [string]$DeployRoot,

        [string]$GameDir = "cryoffear"
    )

    $gameRoot = Join-Path (Convert-ToFullPath $DeployRoot) $GameDir
    $resourceDir = Join-Path $gameRoot "resource"
    $localizationFiles = @(
        "gameui_english.txt",
        "valve_english.txt"
    )

    foreach ($file in $localizationFiles) {
        $path = Join-Path $resourceDir $file
        if (Test-Path -LiteralPath $path) {
            Convert-TextFileToUtf8 -Path $path
        }
    }

    $configPath = Join-Path $gameRoot "config.cfg"
    Set-CofConfigCvar -ConfigPath $configPath -Name "cl_charset" -Value "utf-8"
    Set-CofConfigCvar -ConfigPath $configPath -Name "vgui_utf8" -Value "1"
    Set-CofConfigCvar -ConfigPath $configPath -Name "hud_utf8" -Value "1"
    Clear-CofFontCache -DeployRoot $DeployRoot -GameDir $GameDir
}
