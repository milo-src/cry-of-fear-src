# Building

This repository pins the upstream engine and SDK as Git submodules:

- `external/xash3d-fwgs` -> https://github.com/FWGS/xash3d-fwgs
- `external/hlsdk-portable` -> https://github.com/FWGS/hlsdk-portable

Generated files stay outside the submodules:

- `build/` contains build trees.
- `deps/` contains downloaded local build dependencies.
- `out/xash3d/` contains installed runtime files.

## Prerequisites on Windows

Install:

- Git
- Python
- CMake
- Visual Studio with "Desktop development with C++"
- SDL2 development package for Visual Studio

Fetch the SDL2 development package:

```powershell
.\scripts\fetch-sdl2.ps1
```

Or set `SDL2_DIR` to an existing unpacked SDL2 development package directory before building the engine:

```powershell
$env:SDL2_DIR = "C:\SDKs\SDL2-2.30.12"
```

## First setup

```powershell
.\scripts\bootstrap.ps1
```

## Build everything

```powershell
.\scripts\build-all.ps1
```

This builds and installs Xash3D FWGS into `out/xash3d`, then builds HLSDK and installs `hl.dll` and `client.dll` into `out/xash3d/valve`.

## Quick Windows batch files

From the repository root:

```bat
build_xash.bat
build_game.bat
```

`build_xash.bat` builds the PC Xash3D FWGS engine, installs it into `out\xash3d`, then deploys only runtime files to `C:\Users\xModea\Desktop\cof_xash`.

`build_game.bat` builds the writable `src\cof` game code and copies `client.dll` plus `hl.dll` into `C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls`.

## Build parts separately

```powershell
.\scripts\build-xash3d.ps1 -Sdl2Path "C:\SDKs\SDL2-2.30.12"
.\scripts\build-hlsdk.ps1 -Install
.\scripts\build-game.ps1
```

Useful options:

- `-X64` builds 64-bit engine or SDK.
- `-Jobs 8` limits parallel build jobs.
- `-Configuration Debug` builds Debug HLSDK.
- `-GameDir cryoffear` installs game libraries into `out/xash3d/cryoffear`.

## Notes for future Cry of Fear work

Keep upstream code in `external/` clean. Put recovered or rewritten Cry of Fear code in `src/cof`, then wire it into a fuller mod build once the target layout is known.

Do not commit Half-Life or Cry of Fear game assets. Runtime assets should be copied locally into `out/xash3d/<gamedir>` when needed.
