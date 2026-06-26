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

function Set-CofGameInfoKey {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot,

        [Parameter(Mandatory = $true)]
        [string]$Name,

        [Parameter(Mandatory = $true)]
        [string]$Value
    )

    $liblistPath = Join-Path $GameRoot "liblist.gam"

    if (-not (Test-Path -LiteralPath $liblistPath)) {
        return
    }

    $bytes = [System.IO.File]::ReadAllBytes($liblistPath)
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)

    try {
        $text = $strictUtf8.GetString($bytes)
    }
    catch {
        $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
    }

    $line = "$Name `"$Value`""
    $pattern = "(?m)^\s*" + [System.Text.RegularExpressions.Regex]::Escape($Name) + "\s+.*$"

    if ([System.Text.RegularExpressions.Regex]::IsMatch($text, $pattern)) {
        $updated = [System.Text.RegularExpressions.Regex]::Replace($text, $pattern, $line)
    }
    else {
        $ending = if ($text.EndsWith("`r`n") -or $text.EndsWith("`n")) { "" } else { [Environment]::NewLine }
        $updated = $text + $ending + $line + [Environment]::NewLine
    }

    if ($updated -ne $text) {
        $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
        [System.IO.File]::WriteAllText($liblistPath, $updated, $utf8NoBom)
        Write-Host "Set liblist key: $line"
    }
}

function Remove-CofRuntimePath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot,

        [Parameter(Mandatory = $true)]
        [string]$RelativePath
    )

    $GameRoot = Convert-ToFullPath $GameRoot
    $target = Join-Path $GameRoot $RelativePath

    if (-not (Test-Path -LiteralPath $target)) {
        return
    }

    $resolvedGameRoot = (Resolve-Path -LiteralPath $GameRoot).Path.TrimEnd("\", "/")
    $resolvedTarget = (Resolve-Path -LiteralPath $target).Path
    $expectedPrefix = $resolvedGameRoot + [System.IO.Path]::DirectorySeparatorChar

    if (-not $resolvedTarget.StartsWith($expectedPrefix, [System.StringComparison]::OrdinalIgnoreCase)) {
        throw "Refusing to remove runtime path outside game directory: $resolvedTarget"
    }

    Remove-Item -LiteralPath $resolvedTarget -Recurse -Force
    Write-Host "Removed COF menu override: $resolvedTarget"
}

function Write-Utf8NoBomFile {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path,

        [Parameter(Mandatory = $true)]
        [string]$Content
    )

    $directory = Split-Path -Parent $Path
    New-Item -ItemType Directory -Force -Path $directory | Out-Null

    $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
    [System.IO.File]::WriteAllText($Path, $Content, $utf8NoBom)
    Write-Host "Wrote Xash default menu resource: $Path"
}

function Install-XashDefaultMenuResources {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $resourceDir = Join-Path $GameRoot "resource"

    $gameuiEnglish = @'
"lang"
{
"Language" "English"
"Tokens"
{
"GameUI_Console" "Console"
"GameUI_GameMenu_ResumeGame" "Resume Game"
"GameUI_GameMenu_Disconnect" "Disconnect"
"GameUI_NewGame" "New Game"
"GameUI_GameMenu_NewGame" "New Game"
"GameUI_LoadGame" "Load Game"
"GameUI_GameMenu_LoadGame" "Load Game"
"GameUI_SaveGame" "Save Game"
"GameUI_GameMenu_SaveGame" "Save Game"
"GameUI_Multiplayer" "Multiplayer"
"GameUI_GameMenu_Multiplayer" "Multiplayer"
"GameUI_GameMenu_FindServers" "Find Servers"
"GameUI_GameMenu_Customize" "Customize"
"GameUI_GameMenu_CreateServer" "Create Server"
"GameUI_Options" "Options"
"GameUI_GameMenu_Options" "Options"
"GameUI_ChangeGame" "Change Game"
"GameUI_GameMenu_ChangeGame" "Change Game"
"GameUI_GameMenu_Quit" "Quit"
"GameUI_Quit" "Quit"
"GameUI_QuitConfirmationText" "Are you sure you want to quit?"
"GameUI_TrainingRoom" "Hazard Course"
"GameUI_Play" "Play"
"GameUI_Easy" "Easy"
"GameUI_Medium" "Medium"
"GameUI_Hard" "Hard"
"GameUI_Cancel" "Cancel"
"GameUI_OK" "OK"
"GameUI_Apply" "Apply"
"GameUI_Close" "Close"
"GameUI_Load" "Load"
"GameUI_Save" "Save"
"GameUI_Audio" "Audio"
"GameUI_Video" "Video"
"GameUI_Keyboard" "Keyboard"
"GameUI_Mouse" "Mouse"
"GameUI_Voice" "Voice"
"GameUI_Server" "Server"
"GameUI_Game" "Game"
"GameUI_Advanced" "Advanced"
"GameUI_PlayerName" "Player name"
"GameUI_HighModels" "High quality models"
"GameUI_EnableVoice" "Enable voice in this game"
"GameUI_PlayerModel" "Player model"
"GameUI_SpraypaintImage" "Spraypaint image"
"GameUI_UseDefaults" "Use defaults"
"GameUI_SetNewKey" "Edit key"
"GameUI_ClearKey" "Clear key"
"GameUI_Action" "Action"
"GameUI_KeyButton" "Key/Button"
"GameUI_Alternate" "Alternate"
"GameUI_ReverseMouse" "Reverse mouse"
"GameUI_ReverseMouseLabel" "Reverse vertical mouse axis"
"GameUI_MouseLook" "Mouse look"
"GameUI_MouseLookLabel" "Use mouse for looking"
"GameUI_MouseFilter" "Mouse filter"
"GameUI_MouseFilterLabel" "Smooth mouse movement"
"GameUI_MouseSensitivity" "Mouse sensitivity"
"GameUI_Joystick" "Joystick"
"GameUI_JoystickLabel" "Enable joystick"
"GameUI_SoundEffectVolume" "Game volume"
"GameUI_HEVSuitVolume" "HEV suit volume"
"GameUI_MP3Volume" "MP3 volume"
"GameUI_SoundQuality" "Sound quality"
"GameUI_High" "High"
"GameUI_Low" "Low"
"GameUI_Renderer" "Renderer"
"GameUI_Software" "Software"
"GameUI_OpenGL" "OpenGL"
"GameUI_D3D" "D3D"
"GameUI_Brightness" "Brightness"
"GameUI_Gamma" "Gamma"
"GameUI_Resolution" "Resolution"
"GameUI_DisplayMode" "Display mode"
"GameUI_Windowed" "Run in a window"
"GameUI_Enable" "Enable"
"GameUI_Disable" "Disable"
"GameUI_PasswordPrompt" "Enter password"
"GameUI_Password" "Password"
"GameUI_Map" "Map"
"GameUI_ServerName" "Server name"
"GameUI_MaxPlayers" "Max players:"
"GameUI_Loading" "Loading..."
"GameUI_Disconnected" "Disconnected"
"GameUI_ConnectionFailed" "Could not connect to server."
"GameUI_CreateServer" "Create Server"
"GameUI_Start" "Start"
"GameUI_Submit" "Submit"
"GameUI_Time" "Time"
"GameUI_SavedGame" "Saved game"
"GameUI_ElapsedTime" "Elapsed time"
"GameUI_SaveGame_NewSavedGame" "New saved game"
"GameUI_SaveGame_New" "New"
"GameUI_SaveGame_Current" "Current"
"GameUI_RandomMap" "< Random map >"
"GameUI_QuickSave" "[quick]"
"GameUI_AutoSave" "[auto]"
"GameUI_Type" "Type"
"StringsList_188" "Return to game."
"StringsList_189" "Start a new game."
"StringsList_190" "Learn how to play %s"
"StringsList_191" "Load a previously saved game."
"StringsList_192" "Load a saved game, save the current game."
"StringsList_193" "Change game settings, configure controls"
"StringsList_198" "Search for %s servers, configure character"
"StringsList_234" "Starting a Hazard Course will exit\nany current game, OK to exit?"
"StringsList_235" "Quit %s without\nsaving current game?"
"StringsList_240" "Starting a new game will exit\nany current game, OK to exit?"
"StringsList_400" "Find more about Valve's product lineup"
"StringsList_530" "Select a custom game"
}
}
'@

    $valveEnglish = @'
"lang"
{
"Language" "English"
"Tokens"
{
"Valve_Orange" "Orange"
"Valve_Blue" "Blue"
"Valve_Red" "Red"
"Valve_Yellow" "Yellow"
"Valve_Green" "Green"
"Valve_Purple" "Purple"
"Valve_Light" "Light"
"Valve_Dark" "Dark"
}
}
'@

    Write-Utf8NoBomFile -Path (Join-Path $resourceDir "gameui_english.txt") -Content $gameuiEnglish
    Write-Utf8NoBomFile -Path (Join-Path $resourceDir "valve_english.txt") -Content $valveEnglish
}

function Install-XashDefaultConsoleFonts {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $repoRoot = Get-RepoRoot
    $sourceDir = Join-Path $repoRoot "external\xash3d-fwgs\3rdparty\extras\xash-extras"
    $fontFiles = @(
        "font0_cp1251.fnt",
        "font1_cp1251.fnt",
        "font2_cp1251.fnt",
        "font0_cp1252.fnt",
        "font1_cp1252.fnt",
        "font2_cp1252.fnt",
        "creditsfont_cp1251.fnt"
    )

    foreach ($fontFile in $fontFiles) {
        $source = Join-Path $sourceDir $fontFile
        if (Test-Path -LiteralPath $source) {
            Copy-RequiredFile -Source $source -Destination (Join-Path $GameRoot $fontFile)
        }
    }
}

function Install-CofDefaultMenuBackground {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $backgroundDir = Join-Path (Join-Path $GameRoot "resource") "background"
    $layoutPath = Join-Path (Join-Path $GameRoot "resource") "BackgroundLayout.txt"
    $rows = @(1, 2, 3)
    $columns = @("a", "b", "c", "d")
    $lines = [System.Collections.Generic.List[string]]::new()

    $lines.Add("resolution 1024 768")

    foreach ($row in $rows) {
        for ($columnIndex = 0; $columnIndex -lt $columns.Count; $columnIndex++) {
            $column = $columns[$columnIndex]
            $fileName = "1024_${row}_${column}_loaded.tga"
            $filePath = Join-Path $backgroundDir $fileName

            if (-not (Test-Path -LiteralPath $filePath)) {
                Write-Host "Skipping COF menu background layout; missing $filePath"
                return
            }

            $x = $columnIndex * 256
            $y = ($row - 1) * 256
            $lines.Add("resource/background/$fileName 0 $x $y")
        }
    }

    Write-Utf8NoBomFile -Path $layoutPath -Content (($lines -join [Environment]::NewLine) + [Environment]::NewLine)
}

function Write-SolidTga24 {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path,

        [int]$Width = 640,

        [int]$Height = 480,

        [byte]$Red = 32,

        [byte]$Green = 32,

        [byte]$Blue = 32
    )

    $directory = Split-Path -Parent $Path
    New-Item -ItemType Directory -Force -Path $directory | Out-Null

    $pixelCount = $Width * $Height
    $pixelDataLength = $pixelCount * 3
    $bytes = [byte[]]::new(18 + $pixelDataLength)

    # Uncompressed true-color TGA, top-left origin.
    $bytes[2] = 2
    $bytes[12] = [byte]($Width -band 0xFF)
    $bytes[13] = [byte](($Width -shr 8) -band 0xFF)
    $bytes[14] = [byte]($Height -band 0xFF)
    $bytes[15] = [byte](($Height -shr 8) -band 0xFF)
    $bytes[16] = 24
    $bytes[17] = 0x20

    for ($i = 18; $i -lt $bytes.Length; $i += 3) {
        $bytes[$i] = $Blue
        $bytes[$i + 1] = $Green
        $bytes[$i + 2] = $Red
    }

    [System.IO.File]::WriteAllBytes($Path, $bytes)
    Write-Host "Wrote Xash default console background: $Path"
}

function Install-XashDefaultConsoleBackground {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $shellDir = Join-Path (Join-Path $GameRoot "gfx") "shell"
    Write-SolidTga24 -Path (Join-Path $shellDir "conback.tga") -Width 640 -Height 480 -Red 32 -Green 32 -Blue 32
    Write-SolidTga24 -Path (Join-Path $shellDir "loading.tga") -Width 640 -Height 480 -Red 32 -Green 32 -Blue 32
}

function Disable-CofLegacyMenuResources {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot
    )

    $paths = @(
        "cl_dlls\GameUI.dll",
        "cl_dlls\menu.dll",
        "resource\GameMenu.res",
        "resource\BackgroundLayout.txt",
        "resource\HD_BackgroundLayout.txt",
        "resource\BackgroundLoadingLayout.txt",
        "resource\HD_BackgroundLoadingLayout.txt",
        "gfx\conback.lmp"
    )

    foreach ($path in $paths) {
        Remove-CofRuntimePath -GameRoot $GameRoot -RelativePath $path
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

    Disable-CofLegacyMenuResources -GameRoot $gameRoot
    Install-XashDefaultMenuResources -GameRoot $gameRoot
    Install-XashDefaultConsoleFonts -GameRoot $gameRoot
    Install-CofDefaultMenuBackground -GameRoot $gameRoot
    Install-XashDefaultConsoleBackground -GameRoot $gameRoot

    $configPath = Join-Path $gameRoot "config.cfg"
    Set-CofConfigCvar -ConfigPath $configPath -Name "cl_charset" -Value "utf-8"
    Set-CofConfigCvar -ConfigPath $configPath -Name "con_charset" -Value "cp1251"
    Set-CofConfigCvar -ConfigPath $configPath -Name "con_oldfont" -Value "0"
    Set-CofConfigCvar -ConfigPath $configPath -Name "con_fontnum" -Value "-1"
    Set-CofConfigCvar -ConfigPath $configPath -Name "con_fontscale" -Value "1.0"
    Set-CofConfigCvar -ConfigPath $configPath -Name "con_fontrender" -Value "2"
    Set-CofConfigCvar -ConfigPath $configPath -Name "vgui_utf8" -Value "1"
    Set-CofConfigCvar -ConfigPath $configPath -Name "hud_utf8" -Value "1"
    Set-CofConfigCvar -ConfigPath $configPath -Name "ui_language" -Value "english"
    Set-CofGameInfoKey -GameRoot $gameRoot -Name "startmap" -Value "c_start"
    Clear-CofFontCache -DeployRoot $DeployRoot -GameDir $GameDir
}
