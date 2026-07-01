# Cry of Fear Xash3D Workspace

Official reverse-engineering and recreation workspace maintained by xModea.

This repository exists to rebuild Cry of Fear gameplay code on top of Xash3D
FWGS and a writable copy of HLSDK-portable. The goal is not to ship a pirated
copy of Cry of Fear. The goal is to make a clean, buildable, readable codebase
where engine work, game DLL work, map entity compatibility, inventory logic,
weapons, monsters, and future reverse-engineering tasks can be developed and
tested quickly.

The repository is intentionally arranged so a fresh checkout can build the PC
engine, build the game DLLs, and copy only the needed runtime binaries into a
local test folder.

## Project Status

This is work in progress.

Current focus:

- Xash3D FWGS as the runtime engine.
- `src/cof` as the writable Cry of Fear game-code workspace.
- HLSDK-compatible client and server DLLs.
- Cry of Fear map entity compatibility.
- Cry of Fear style inventory, weapons, movement, triggers, scripted events,
  pickups, monsters, and scene logic.
- Convenient local build and copy scripts for fast testing.

What is not included:

- Official Cry of Fear assets.
- Official Half-Life assets.
- Steam content.
- Any paid or copyrighted game data.

You must provide your own legally owned runtime assets when testing locally.

## Legal And Asset Policy

This repository contains source code and build scripts only.

Do not commit:

- `maps/`, `models/`, `sprites/`, `sound/`, `gfx/`, `media/`, `resource/`, or
  any other copied game asset folder unless the file is explicitly authored for
  this repository and legally safe to distribute.
- Original Cry of Fear assets.
- Original Half-Life assets.
- Generated build output from `build/`, `out/`, `deps/`, or `install/`.

Local testing is expected to happen in a private runtime folder, normally:

```text
C:\Users\xModea\Desktop\cof_xash
```

That folder is not part of Git.

## Repository Layout

```text
.
|-- build_game.bat              Windows shortcut: build openvgui + CoF DLLs
|-- build_xash.bat              Windows shortcut: build Xash3D FWGS runtime
|-- copyfiles.bat               Windows shortcut: copy already built binaries
|-- docs/                       Extra documentation
|-- scripts/                    Build, bootstrap, deploy, and repair helpers
|-- external/
|   |-- xash3d-fwgs/            Pinned Xash3D FWGS engine submodule
|   |-- hlsdk-portable/         Pinned upstream HLSDK-portable reference
|   `-- openvgui/               Open VGUI implementation used by the game build
|-- src/
|   `-- cof/                    Writable Cry of Fear game-code workspace
|       |-- cl_dll/             Client DLL code and HUD/client UI code
|       |-- dlls/               Server/game DLL code
|       |-- game_shared/        Shared client/server helpers
|       |-- android/            Android HLSDK-portable wrapper project
|       |-- CMakeLists.txt      Main CMake project for game DLLs
|       `-- mod_options.txt     Build-time game options
|-- build/                      Generated build trees, ignored by Git
|-- deps/                       Downloaded local dependencies, ignored by Git
`-- out/                        Installed build output, ignored by Git
```

## Important Terms

Engine:

The Xash3D FWGS runtime from `external/xash3d-fwgs`. On Windows this produces
files such as `xash3d.exe`, `xash.dll`, `filesystem_stdio.dll`, `ref_gl.dll`,
`menu.dll`, and `vgui_support.dll`.

Game DLLs:

The Cry of Fear client and server libraries built from `src/cof`.

On Windows:

```text
client.dll
hl.dll
```

For this project both DLLs are copied to:

```text
cof_xash\cryoffear\cl_dlls\
```

Runtime folder:

The local folder used to launch and test the game. The default is:

```text
C:\Users\xModea\Desktop\cof_xash
```

Game directory:

The mod folder inside the runtime. For this project it is:

```text
cryoffear
```

## Do Not Use GitHub ZIP Downloads

Clone with Git. This repository uses submodules.

Correct:

```sh
git clone --recursive <repo-url>
```

If the repository is already cloned:

```sh
git submodule update --init --recursive
```

Wrong:

```text
Download ZIP
```

GitHub ZIP archives do not include submodule content, so the engine, HLSDK
reference, and openvgui may be missing.

## Fast Windows Workflow

This is the main supported development workflow right now.

### Windows Prerequisites

Install:

- Git
- Python
- CMake
- Visual Studio 2022 or Visual Studio Build Tools
- Visual Studio workload: `Desktop development with C++`
- Windows 10 or Windows 11 SDK
- PowerShell

SDL2:

- `build_xash.bat` automatically calls `scripts\fetch-sdl2.ps1` if the bundled
  local SDL2 dependency is missing.
- You can also set `SDL2_DIR` manually if you already have an SDL2 development
  package:

```powershell
$env:SDL2_DIR = "C:\SDKs\SDL2-2.32.10"
```

### First Setup

From the repository root:

```bat
git submodule update --init --recursive
```

Or:

```powershell
.\scripts\bootstrap.ps1
```

### Build The Engine

```bat
build_xash.bat
```

This does the following:

- Fetches SDL2 if needed.
- Builds Xash3D FWGS for PC.
- Installs engine output into `out\xash3d`.
- Copies runtime files into `%USERPROFILE%\Desktop\cof_xash`.

The deploy folder receives only runtime files that are needed for testing.

### Build The Game

```bat
build_game.bat
```

This does the following:

- Builds `external\openvgui`.
- Builds the writable game code from `src\cof`.
- Installs the game DLLs into `out\xash3d\cryoffear`.
- Copies `client.dll`, `hl.dll`, and `vgui.dll` into
  `%USERPROFILE%\Desktop\cof_xash`.
- Applies local runtime repair steps needed for Xash testing, including menu
  resources, font settings, UTF-8 related cvars, and `startmap "c_start"`.

### Copy Already Built Files

If the game is already built and you only want to replace files in the test
folder:

```bat
copyfiles.bat
```

Optional target folder:

```bat
copyfiles.bat D:\Games\cof_xash
```

Optional target folder and configuration:

```bat
copyfiles.bat D:\Games\cof_xash Debug
```

`copyfiles.bat` verifies hashes after copying. If the game is still running,
close it before copying. Windows can keep old DLLs loaded while `xash3d.exe`
is open.

### Build Without Installing

For compile-only checks:

```bat
build_game.bat -NoInstall
```

`-NoInstall` builds but does not install or copy DLLs into the runtime folder.
Use this when you only want to check whether code compiles.

For actual testing, do not use `-NoInstall`; or run `copyfiles.bat` after it.

### Clean Rebuild

```bat
build_game.bat -CleanFirst
```

For a deeper clean, delete generated folders and rebuild:

```powershell
Remove-Item -Recurse -Force build\cof, build\openvgui -ErrorAction SilentlyContinue
.\build_game.bat
```

Do not delete source folders under `src/` or `external/`.

### Run The Game On Windows

Expected runtime shape:

```text
C:\Users\xModea\Desktop\cof_xash\
|-- xash3d.exe
|-- xash.dll
|-- filesystem_stdio.dll
|-- ref_gl.dll
|-- menu.dll
|-- vgui.dll
|-- SDL2.dll
`-- cryoffear\
    |-- liblist.gam
    |-- config.cfg
    |-- cl_dlls\
    |   |-- client.dll
    |   `-- hl.dll
    `-- maps/models/sound/sprites/etc from your local legal game install
```

Run:

```bat
cd /d "%USERPROFILE%\Desktop\cof_xash"
xash3d.exe -game cryoffear
```

To start a specific map:

```bat
xash3d.exe -game cryoffear +map c_start
```

## Advanced Windows PowerShell Commands

The batch files are only wrappers. The real build logic lives in `scripts/`.

Build engine:

```powershell
.\scripts\build-xash3d.ps1 -GameDir cryoffear -DeployDir "$env:USERPROFILE\Desktop\cof_xash"
```

Build game:

```powershell
.\scripts\build-game.ps1 -GameDir cryoffear -DeployDir "$env:USERPROFILE\Desktop\cof_xash"
```

Build openvgui only:

```powershell
.\scripts\build-openvgui.ps1
```

Build the upstream HLSDK reference only:

```powershell
.\scripts\build-hlsdk.ps1 -Install
```

Useful options:

```text
-Configuration Debug|Release|RelWithDebInfo|MinSizeRel
-CleanFirst
-NoInstall
-DeployDir "C:\path\to\runtime"
-GameDir cryoffear
-Jobs 8
-X64
```

Important: Xash3D and game DLLs must use the same architecture. Do not mix a
32-bit engine with 64-bit game libraries or the reverse.

## Linux Build

Linux support comes from Xash3D FWGS and HLSDK-portable. The Windows helper
scripts are the most tested path in this repository, but Linux can be built
manually.

### Linux Prerequisites

Ubuntu/Debian, 32-bit compatible build on 64-bit x86:

```sh
sudo dpkg --add-architecture i386
sudo apt update
sudo apt install git python3 python-is-python3 cmake build-essential gcc-multilib g++-multilib \
  libsdl2-dev:i386 libfreetype-dev:i386 libopus-dev:i386 libbz2-dev:i386 \
  libvorbis-dev:i386 libopusfile-dev:i386 libogg-dev:i386
export PKG_CONFIG_PATH=/usr/lib/i386-linux-gnu/pkgconfig
```

Ubuntu/Debian, native 64-bit build:

```sh
sudo apt update
sudo apt install git python3 python-is-python3 cmake build-essential libsdl2-dev libfreetype6-dev \
  libopus-dev libbz2-dev libvorbis-dev libopusfile-dev libogg-dev
```

Fedora, 32-bit compatible build:

```sh
sudo dnf install git python3 python-unversioned-command cmake gcc gcc-c++ glibc-devel.i686 \
  SDL2-devel.i686 freetype-devel.i686 opus-devel.i686 bzip2-devel.i686 \
  libvorbis-devel.i686 opusfile-devel.i686 libogg-devel.i686
```

Fedora, native 64-bit build:

```sh
sudo dnf install git python3 python-unversioned-command cmake gcc gcc-c++ SDL2-devel freetype-devel \
  opus-devel bzip2-devel libvorbis-devel opusfile-devel libogg-devel
```

### Linux Engine Build

From repository root:

```sh
git submodule update --init --recursive

cd external/xash3d-fwgs
./waf configure -T release --gamedir=cryoffear --disable-werror
./waf build -j"$(nproc)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

For 64-bit engine builds, add `-8`:

```sh
./waf configure -T release -8 --gamedir=cryoffear --disable-werror
```

### Linux openvgui Build

```sh
cmake -S external/openvgui -B build/openvgui-linux -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-linux --parallel "$(nproc)"
```

### Linux Game DLL Build

32-bit compatible build:

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

64-bit build:

```sh
cmake -S src/cof -B build/cof-linux64 \
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
  -DOPENVGUI_BUILD_DIR="$PWD/build/openvgui-linux"

cmake --build build/cof-linux64 --parallel "$(nproc)" --target install
```

### Linux Runtime

Prepare a runtime folder manually:

```sh
mkdir -p "$HOME/cof_xash"
cp -a out/xash3d/. "$HOME/cof_xash/"
```

Then copy your legally owned `cryoffear` assets into:

```text
$HOME/cof_xash/cryoffear
```

Run:

```sh
cd "$HOME/cof_xash"
./xash3d -game cryoffear +map c_start
```

File names and library names can vary by platform. If Xash cannot load the
game library, check `liblist.gam`, `src/cof/mod_options.txt`, and the installed
library names under `out/xash3d/cryoffear`.

## macOS Build

macOS is a manual path. It is useful for future portability work, but Windows is
the main tested development flow for this repository at the moment.

### macOS Prerequisites

Install Xcode command line tools:

```sh
xcode-select --install
```

Install Homebrew dependencies:

```sh
brew install git python cmake sdl2 freetype opus libogg libvorbis opusfile bzip2
```

### macOS Engine Build

```sh
git submodule update --init --recursive

cd external/xash3d-fwgs
./waf configure -T release --gamedir=cryoffear --disable-werror
./waf build -j"$(sysctl -n hw.logicalcpu)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

If you intentionally build a 64-bit engine, keep the game build 64-bit too.
For Xash3D FWGS that usually means adding `-8` during engine configure:

```sh
./waf configure -T release -8 --gamedir=cryoffear --disable-werror
```

### macOS openvgui Build

```sh
cmake -S external/openvgui -B build/openvgui-macos -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-macos --parallel "$(sysctl -n hw.logicalcpu)"
```

### macOS Game Build

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

Keep engine and game library architecture matched. Modern macOS is normally
64-bit only, so use `-D64BIT=ON` for the game side.

## Android Build

Android support is experimental in this workspace.

The `src/cof/android` folder is inherited from HLSDK-portable. It builds an
Android mod wrapper that launches an installed Xash3D FWGS Android engine app.
It is not the same thing as the Windows `cof_xash` runtime folder.

### Android Prerequisites

Install:

- Android Studio or Android command line tools
- JDK compatible with Android Gradle Plugin 8.2.x
- Android SDK Platform 34
- Android NDK `26.1.10909125`
- CMake `3.22.1`
- Ninja
- Git

### Android Game Library Build

From repository root:

```sh
git submodule update --init --recursive
cd src/cof/android
./gradlew assembleRelease
```

On Windows:

```bat
cd src\cof\android
gradlew.bat assembleRelease
```

Output is normally under:

```text
src/cof/android/app/build/outputs/apk/
```

### Android Project Values To Change Before A Real CoF Package

The inherited Android template still uses HLSDK defaults in some places.
Before a proper Android package is considered ready, check:

```text
src/cof/android/settings.gradle
src/cof/android/app/build.gradle
src/cof/android/app/src/main/AndroidManifest.xml
src/cof/android/app/src/main/java/su/xash/hlsdk/MainActivity.java
```

Important values:

- `rootProject.name`
- `namespace`
- `applicationId`
- Android app label
- `su.xash.engine.gamedir`
- `.putExtra("gamedir", "...")`
- package name used to locate the installed Xash3D engine app

For this project the game directory should be `cryoffear`, not `valve`, when
the Android path is made production-ready.

### Android Runtime Notes

You need a compatible Xash3D FWGS Android engine installed on the device.
The game assets must be placed where that engine expects the `cryoffear`
directory. Do not bundle copyrighted assets into the APK.

## iOS And Other Targets

Xash3D FWGS and HLSDK-portable have upstream support paths for more targets
such as iOS, Nintendo Switch, and PS Vita. This repository does not currently
provide first-class project scripts for those targets.

For future ports:

- Build the engine for the target using upstream Xash3D FWGS instructions.
- Build `src/cof` using the matching target toolchain.
- Keep the game library naming compatible with Xash3D FWGS.
- Keep engine and game libraries on the same architecture.
- Do not include copyrighted assets in distributable packages.

## Source Code Map

Most Cry of Fear specific code lives in these files:

```text
src/cof/dlls/cof_inventory.cpp          Server-side inventory state and items
src/cof/dlls/cof_pickups.cpp            CoF pickup entities
src/cof/dlls/cof_monsters.cpp           CoF monster compatibility
src/cof/dlls/cof_brush_triggers.cpp     CoF brush triggers and trigger helpers
src/cof/dlls/cof_script_points.cpp      Point/script helper entities
src/cof/dlls/cof_player_events.cpp      Player-facing scripted events
src/cof/dlls/cof_scene_models.cpp       Cutscene/model helper entities
src/cof/dlls/cof_text_audio.cpp         Text, subtitle, audio helpers
src/cof/dlls/cof_world_effects.cpp      World visual/effect compatibility
src/cof/dlls/cof_ladders.cpp            CoF ladder helpers
src/cof/dlls/cof_static_props.cpp       Static prop compatibility
src/cof/dlls/cof_utils.h                Shared CoF helper functions
src/cof/dlls/mobile.cpp                 Mobile phone weapon
src/cof/dlls/switchblade.cpp            Switchblade weapon
src/cof/dlls/mobile_switchblade.cpp     Combined mobile + switchblade weapon
src/cof/cl_dll/cof_ui.cpp               Custom client-side CoF UI
src/cof/cl_dll/cof_inventory_client.cpp Client-side inventory UI/state
```

Keep new Cry of Fear logic in focused `cof_*.cpp` files whenever possible.
Avoid turning `cof_entities.cpp` back into a giant mixed file.

## Build Output Map

Windows engine output:

```text
out/xash3d/xash3d.exe
out/xash3d/xash.dll
out/xash3d/filesystem_stdio.dll
out/xash3d/ref_gl.dll
out/xash3d/ref_soft.dll
out/xash3d/menu.dll
out/xash3d/vgui_support.dll
```

Windows game output before deploy:

```text
build/cof/cl_dll/Release/client.dll
build/cof/dlls/Release/hl.dll
build/openvgui/Release/vgui.dll
```

Windows deploy output:

```text
%USERPROFILE%/Desktop/cof_xash/cryoffear/cl_dlls/client.dll
%USERPROFILE%/Desktop/cof_xash/cryoffear/cl_dlls/hl.dll
%USERPROFILE%/Desktop/cof_xash/vgui.dll
```

## Common Tasks

Build everything needed for local Windows testing:

```bat
build_xash.bat
build_game.bat
```

Rebuild only game DLLs:

```bat
build_game.bat
```

Copy already built DLLs and runtime files:

```bat
copyfiles.bat
```

Compile without touching the runtime folder:

```bat
build_game.bat -NoInstall
```

Build Debug:

```bat
build_game.bat -Configuration Debug
copyfiles.bat "%USERPROFILE%\Desktop\cof_xash" Debug
```

Build using fewer CPU threads:

```bat
build_game.bat -Jobs 4
```

Deploy to another runtime:

```bat
build_xash.bat -DeployDir "D:\Games\cof_xash"
build_game.bat -DeployDir "D:\Games\cof_xash"
```

## Verification

Before saying a change is done, prefer running at least:

```bat
build_game.bat -NoInstall
```

For runtime testing:

```bat
build_game.bat
copyfiles.bat
```

Useful repository checks:

```powershell
git status --short
git diff --check
```

After entity compatibility work, check that maps do not reference unknown
classnames. This repository has used local scripts for that during development;
the important expectation is:

```text
unknown BSP classnames: 0
```

## Troubleshooting

### Build Cannot Find Submodule Files

Run:

```sh
git submodule update --init --recursive
```

Do not use GitHub ZIP archives.

### Windows Cannot Replace DLLs

Close the game first. If `xash3d.exe` is running, Windows may keep old DLLs
loaded or block replacement.

Then run:

```bat
copyfiles.bat
```

### Changes Compile But Do Not Show In Game

Most common causes:

- `build_game.bat -NoInstall` was used, so files were not copied.
- The game was still running while copying.
- The runtime folder is not `%USERPROFILE%\Desktop\cof_xash`.
- `liblist.gam` points to a different server DLL path.
- You are testing a different `cryoffear` folder than the one being copied to.

Use:

```bat
copyfiles.bat
```

and check the printed SHA-256 hashes.

### Engine Starts But Game DLL Does Not Load

Check architecture:

- 32-bit engine needs 32-bit game libraries.
- 64-bit engine needs 64-bit game libraries.

Check `liblist.gam`:

```text
gamedll "cl_dlls\hl.dll"
```

This project uses `cl_dlls` for both `client.dll` and `hl.dll` because the CoF
runtime layout expects it.

### Missing SDL2 On Windows

Run:

```powershell
.\scripts\fetch-sdl2.ps1
```

or set:

```powershell
$env:SDL2_DIR = "C:\Path\To\SDL2"
```

### Broken Fonts Or Menu Resources

The deploy helpers call runtime repair code for Xash:

- removes old incompatible menu overrides where needed;
- installs default Xash menu language resources;
- installs Xash console fonts;
- writes safe console/loading backgrounds;
- sets UTF-8 related config cvars;
- sets `startmap "c_start"`.

If the runtime folder was edited manually, rebuild or rerun:

```bat
build_game.bat
copyfiles.bat
```

### Android APK Builds But Launches The Wrong Gamedir

Check:

```text
src/cof/android/app/src/main/AndroidManifest.xml
src/cof/android/app/src/main/java/su/xash/hlsdk/MainActivity.java
```

The inherited template can still say `valve`. For CoF it must be changed to
`cryoffear` when Android packaging is actively worked on.

## Development Rules

- Keep upstream submodules clean.
- Put Cry of Fear recreation work in `src/cof`.
- Keep generated files out of Git.
- Keep assets out of Git.
- Prefer small focused files over huge mixed files.
- Prefer clear names over clever names.
- Keep server/client state synchronized when touching inventory, weapons, UI,
  or scripted events.
- Do not hide important behavior in build scripts without documenting it here.
- When a map bug is fixed, describe the entity or classname involved in the
  commit message or notes.

## Current Maintainer Notes

This repository is maintained by xModea as the main workspace for rebuilding
Cry of Fear behavior on Xash3D. The long-term direction is a readable codebase
that is easy to modify, easy to build, and practical for future reverse
engineering.

The most important rule: keep the project usable. If a change makes the game
harder to build, harder to test, or harder to understand, it should be
rewritten until the next person can work with it without digging through a
maze.
