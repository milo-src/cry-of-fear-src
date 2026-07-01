# Cry of Fear Xash3D

This repository is a development workspace for recreating Cry of Fear game code on top of Xash3D FWGS and HLSDK.

The goal is to have a project that is easy to build, easy to test, and easy to modify while rebuilding Cry of Fear style gameplay systems: weapons, inventory, monsters, scripted scenes, triggers, map compatibility, and engine fixes.

This is not an official Cry of Fear release and it does not include game assets.

## Important

Do not commit original game assets.

Keep these out of Git:

- maps
- models
- sounds
- sprites
- textures
- Steam files
- copied Cry of Fear or Half-Life game data
- generated build output

Use your own local game files for testing.

The default local test folder on Windows is:

```text
%USERPROFILE%\Desktop\cof_xash
```

The game directory inside it is:

```text
%USERPROFILE%\Desktop\cof_xash\cryoffear
```

## Repository Layout

```text
build_xash.bat       Build the Xash3D FWGS PC engine
build_game.bat       Build the game DLLs and copy them to the test folder
copyfiles.bat        Copy already built files to the test folder

src/cof              Main Cry of Fear game code
src/cof/dlls         Server/game DLL code: player, weapons, NPCs, entities
src/cof/cl_dll       Client DLL code: HUD, UI, viewmodels, client messages
src/cof/game_shared  Shared client/server code

external/xash3d-fwgs      Vendored Xash3D FWGS engine source
external/hlsdk-portable   Vendored HLSDK-portable source
external/openvgui         Vendored openvgui source

scripts             Build and copy helper scripts
build               Generated build files
out                 Installed build output
deps                Downloaded local dependencies, such as SDL2
```

The `external` folder is part of this repository. It is not a Git submodule.

## Windows Quick Start

Install:

- Git
- Python
- CMake
- Visual Studio 2022 or Visual Studio Build Tools
- `Desktop development with C++`
- Windows 10/11 SDK
- PowerShell

Open a terminal in the repository root.

Build the engine:

```bat
build_xash.bat
```

Build the game:

```bat
build_game.bat
```

Run the game:

```bat
cd /d "%USERPROFILE%\Desktop\cof_xash"
xash3d.exe -game cryoffear
```

Run a specific map:

```bat
xash3d.exe -game cryoffear +map c_start
```

## What The Build Scripts Do

### build_xash.bat

Builds the Xash3D FWGS engine.

It will:

- download SDL2 into `deps` if needed;
- build `external/xash3d-fwgs`;
- install the engine into `out/xash3d`;
- copy the engine runtime into `%USERPROFILE%\Desktop\cof_xash`.

Run this after engine changes or when the test folder is missing engine files.

### build_game.bat

Builds the game code from `src/cof`.

It will:

- build `external/openvgui`;
- build the client DLL;
- build the server DLL;
- install the DLLs into `out/xash3d/cryoffear`;
- copy `client.dll`, `hl.dll`, and `vgui.dll` into the test folder;
- apply small runtime fixes for Xash menu files, fonts, and config.

This is the script you will run most often while working on game code.

### copyfiles.bat

Copies already built files into the test folder.

Default:

```bat
copyfiles.bat
```

Custom target folder:

```bat
copyfiles.bat D:\Games\cof_xash
```

Debug build:

```bat
copyfiles.bat D:\Games\cof_xash Debug
```

Close the game before copying. Windows can keep old DLLs loaded while `xash3d.exe` is running.

## Useful Build Options

Debug build:

```bat
build_game.bat -Configuration Debug
```

Clean rebuild:

```bat
build_game.bat -CleanFirst
```

Compile without copying into the test folder:

```bat
build_game.bat -NoInstall
```

`-NoInstall` is only for checking compilation. Do not use it when you want to test changes in game.

Deploy to another folder:

```bat
build_xash.bat -DeployDir "D:\Games\cof_xash"
build_game.bat -DeployDir "D:\Games\cof_xash"
```

64-bit build:

```bat
build_xash.bat -X64
build_game.bat -X64
```

The engine and game DLLs must use the same architecture. Do not mix a 32-bit engine with 64-bit DLLs.

## Output Folders

Temporary build files:

```text
build/
```

Installed output:

```text
out/xash3d/
```

Default Windows test folder:

```text
%USERPROFILE%\Desktop\cof_xash/
```

Important game DLLs:

```text
out/xash3d/cryoffear/cl_dlls/client.dll
out/xash3d/cryoffear/cl_dlls/hl.dll

%USERPROFILE%\Desktop\cof_xash\cryoffear\cl_dlls\client.dll
%USERPROFILE%\Desktop\cof_xash\cryoffear\cl_dlls\hl.dll
```

## Expected Test Folder

The runtime folder should look roughly like this:

```text
cof_xash
|-- xash3d.exe
|-- xash.dll
|-- filesystem_stdio.dll
|-- ref_gl.dll
|-- menu.dll
|-- vgui.dll
|-- SDL2.dll
`-- cryoffear
    |-- liblist.gam
    |-- config.cfg
    |-- cl_dlls
    |   |-- client.dll
    |   `-- hl.dll
    |-- maps
    |-- models
    |-- sound
    |-- sprites
    |-- gfx
    `-- resource
```

The asset folders must come from your local game install. They are not part of this repository.

## Main Code Areas

Server/game DLL:

```text
src/cof/dlls/cof_inventory.cpp        Server-side inventory logic
src/cof/dlls/cof_pickups.cpp          Pickup entities
src/cof/dlls/cof_monsters.cpp         Cry of Fear monster compatibility
src/cof/dlls/cof_brush_triggers.cpp   Brush triggers
src/cof/dlls/cof_script_points.cpp    Script/helper point entities
src/cof/dlls/cof_scene_actions.cpp    Scene actions
src/cof/dlls/cof_scene_models.cpp     Scene model helpers
src/cof/dlls/cof_player_events.cpp    Player event helpers
src/cof/dlls/cof_ladder_manager.cpp   Ladder movement logic
src/cof/dlls/cof_ladder_use.cpp       Ladder use entity
src/cof/dlls/mobile.cpp               Mobile phone weapon
src/cof/dlls/switchblade.cpp          Switchblade weapon
src/cof/dlls/mobile_switchblade.cpp   Mobile phone + switchblade weapon
```

Client DLL:

```text
src/cof/cl_dll/cof_ui.cpp                  Basic custom UI drawing
src/cof/cl_dll/cof_inventory_client.cpp    Client-side inventory UI/state
src/cof/cl_dll/view.cpp                    Camera and viewmodel effects
src/cof/cl_dll/hud.cpp                     HUD and client messages
```

## Linux

Linux is not the main development path yet, but the project can be built manually.

Install basic dependencies on Ubuntu/Debian:

```sh
sudo apt update
sudo apt install git python3 python-is-python3 cmake build-essential libsdl2-dev libfreetype6-dev
```

Build the engine:

```sh
cd external/xash3d-fwgs
./waf configure -T release --gamedir=cryoffear --disable-werror
./waf build -j"$(nproc)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

Build openvgui:

```sh
cmake -S external/openvgui -B build/openvgui-linux -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-linux --parallel "$(nproc)"
```

Build the game:

```sh
cmake -S src/cof -B build/cof-linux \
  -DCMAKE_BUILD_TYPE=Release \
  -DGAMEDIR=cryoffear \
  -DCMAKE_INSTALL_PREFIX="$PWD/out/xash3d" \
  -DSERVER_INSTALL_DIR=cl_dlls \
  -DCLIENT_INSTALL_DIR=cl_dlls \
  -DUSE_VGUI=ON \
  -DUSE_NOVGUI_MOTD=ON \
  -DUSE_NOVGUI_SCOREBOARD=ON \
  -DOPENVGUI_ROOT="$PWD/external/openvgui" \
  -DOPENVGUI_BUILD_DIR="$PWD/build/openvgui-linux"

cmake --build build/cof-linux --parallel "$(nproc)" --target install
```

Run:

```sh
mkdir -p "$HOME/cof_xash"
cp -a out/xash3d/. "$HOME/cof_xash/"
cd "$HOME/cof_xash"
./xash3d -game cryoffear +map c_start
```

## macOS

macOS support is experimental.

Install dependencies:

```sh
xcode-select --install
brew install git python cmake sdl2 freetype
```

Build the engine:

```sh
cd external/xash3d-fwgs
./waf configure -T release -8 --gamedir=cryoffear --disable-werror
./waf build -j"$(sysctl -n hw.logicalcpu)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

Build openvgui:

```sh
cmake -S external/openvgui -B build/openvgui-macos -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-macos --parallel "$(sysctl -n hw.logicalcpu)"
```

Build the game:

```sh
cmake -S src/cof -B build/cof-macos \
  -DCMAKE_BUILD_TYPE=Release \
  -D64BIT=ON \
  -DGAMEDIR=cryoffear \
  -DCMAKE_INSTALL_PREFIX="$PWD/out/xash3d" \
  -DSERVER_INSTALL_DIR=cl_dlls \
  -DCLIENT_INSTALL_DIR=cl_dlls \
  -DUSE_VGUI=ON \
  -DUSE_NOVGUI_MOTD=ON \
  -DUSE_NOVGUI_SCOREBOARD=ON \
  -DOPENVGUI_ROOT="$PWD/external/openvgui" \
  -DOPENVGUI_BUILD_DIR="$PWD/build/openvgui-macos"

cmake --build build/cof-macos --parallel "$(sysctl -n hw.logicalcpu)" --target install
```

## Android

Android support is experimental and comes from the HLSDK-portable Android project.

Build:

```sh
cd src/cof/android
./gradlew assembleRelease
```

On Windows:

```bat
cd src\cof\android
gradlew.bat assembleRelease
```

Before a real Android package is used, check that package names, app labels, and the game directory point to `cryoffear` and not the original HLSDK defaults.

## Troubleshooting

### Changes do not appear in game

Most likely the DLLs were not copied or the game was still running.

Close the game and run:

```bat
build_game.bat
copyfiles.bat
```

### The game DLL does not load

Check that the engine and game DLLs use the same architecture.

Also check that `liblist.gam` points to the expected server DLL path:

```text
gamedll "cl_dlls\hl.dll"
```

### SDL2 is missing on Windows

Run:

```powershell
.\scripts\fetch-sdl2.ps1
```

or set `SDL2_DIR` manually.

### Fonts or menu files look broken

Run:

```bat
build_game.bat
```

The build script reapplies the local Xash runtime fixes.

## Development Rules

- Keep game assets out of Git.
- Keep generated folders out of Git.
- Put Cry of Fear game logic in `src/cof`.
- Keep files readable and split large systems when it makes the code easier to work with.
- Keep client and server inventory state in sync.
- Run `build_game.bat` after game-code changes.
- Run `build_xash.bat` after engine changes.

## Commit Message Examples

Use short English commit messages.

Examples:

```text
fix(cof): repair c_start scene trigger flow
feat(cof): add switchblade weapon behavior
refactor(cof): split inventory client definitions
fix(cof): keep inventory state across level changes
```

## Short Version

For normal Windows work:

```bat
build_xash.bat
build_game.bat
```

Then run:

```bat
cd /d "%USERPROFILE%\Desktop\cof_xash"
xash3d.exe -game cryoffear +map c_start
```

If only `src/cof` changed, usually this is enough:

```bat
build_game.bat
```
