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
    Set-CofConfigBind -ConfigPath $configPath -Key "ENTER" -Command "+use"
    Set-CofConfigBind -ConfigPath $configPath -Key "KP_ENTER" -Command "+use"
    Set-CofGameInfoKey -GameRoot $gameRoot -Name "startmap" -Value "c_start"
    Clear-CofFontCache -DeployRoot $DeployRoot -GameDir $GameDir
}

