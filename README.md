# Cry of Fear reconstruction

Binary-led reconstruction of the installed Cry of Fear game. Work stays on `main`.
The previous speculative game scaffold has been removed from the working tree. Its
files are archived locally at `D:/github/cry-of-fear-src-before-rea-2026-11-18`;
the original Git history is preserved. No commits or remote changes were made.

The source-built **map exploration prototype now launches**, using Xash3D and
HLSDK-portable. It does not use original Cry of Fear DLLs. This is not yet a
playable reconstruction of the campaign: CoF-specific enemies, inventory,
interactive doors, scripts and audio systems remain to be recovered.
The target is functionally equivalent, testable source. Original comments,
variable names, and project organization cannot be promised from compiled code.
The user's account of the original source loss is project context, not a claim
independently established by this investigation.

## Build and launch (Windows, Waf)

Run `build.bat` to build the engine, client and server with **Waf**, then stage
assets from the installed game. Run `launch.bat` to open `c_sdkmap1` in a window.
The prepared runtime is in `out/runtime`. Work remains on `main`.

Requirements: Python 3.10+, Visual Studio
2022 C++ Build Tools (x86/x64), and a local Cry of Fear installation. The engine
builder downloads a hash-pinned official SDL2 development package on first use.
All game/engine modules are compiled locally; SDL2 and Windows/driver libraries
remain third-party runtime dependencies. The old `src/cof` is not reused.

HLSDK and Xash3D sources, including the bundled engine dependencies, live in
`external/hlsdk-portable` and `external/xash3d-fwgs`. They are ordinary repository
files: no submodule checkout or old Git history is needed to build. SDK adaptations
are applied to a disposable copy in `build/game-source`. Build products (`build`,
`out`) and downloaded SDL2 packages (`deps`) stay ignored.

```powershell
# Whole runtime (engine and game both use Waf):
.\build.bat
# Another asset location, if needed:
.\build.bat --game 'E:\SteamLibrary\steamapps\common\Cry of Fear\cryoffear'
# Game-only incremental build:
.\waf.bat configure
.\waf.bat build -j8
.\waf.bat install
# Launch:
.\launch.bat
# Optional other installed map; CoF-specific scripts may not work:
.\launch.bat --map c_start
```

Controls: WASD/mouse, Space jump, Ctrl crouch, E use, F flashlight, N noclip,
Esc menu, F5 screenshot. Noclip is an exploration aid for unrecovered doors and
scripted blockers. The test map's 28-second intro trigger is bypassed by a
separate local `.ent` patch; the original installed BSP stays unchanged.
Assets are copied independently, with no game EXE/DLL/PDB copied. Rebuilding
preserves the runtime's existing `config.cfg`; `--reset-settings` restores defaults.

Validation: `tools/smoke.ps1` loads the map, checks a rendered frame and actual
player movement, records loaded DLL paths, takes a screenshot and exits. Run
`python tools/audit_runtime.py` to verify every staged executable/DLL against
the Waf outputs and official SDL2 manifest. See `analysis/RUNTIME.md` for results.

## Evidence and current results

- `analysis/modules.json`: verified DLL hashes, PE sections, dependency names.
- `analysis/exports/`: 846 server exports, 593 client exports, one GameUI export;
  preserved addresses and MSVC names, plus demangled signatures where available.
- `analysis/abi/`: three bounded disassemblies and the 50-entry server callback
  table, captured without executing game code.
- `src/server_abi_reconstruction.cpp`: partial semantic reconstruction of
  `GetEntityAPI`, `GetEntityAPI2`, and `GiveFnptrsToDll`. External storage and
  callback implementations are unresolved in this semantic model. The runnable
  prototype currently supplies its behavior through the open SDK; this file is
  retained as reverse-engineering evidence and is not the runtime implementation.
- `src/prototype_client.cpp`, `tools/prepare_game.py`, `runtime/`: explicit new
  prototype adaptations, kept distinct from recovered original behavior.
- `analysis/STATUS.md`: findings, limitations, and ordered recovery work.

REA evidence bundles remain under ignored `analysis/evidence/` because they
contain machine-local paths and large raw observations. Keep them locally for
continuation. Original game binaries and assets are not copied into Git.

## Reproduce the initial analysis

Use REA `inspect_native_exports` and `inspect_pe_imports` for the three DLLs
in the installed game's `cryoffear/cl_dlls`, then export the evidence bundle.

```powershell
python tools/index_evidence.py analysis/evidence/initial-rea.json
python tools/capture_abi.py 'D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll'
```

The indexer verifies the original SHA-256 before generating tables. The ABI
capture is deliberately pinned to the analyzed server build and refuses others.
It needs GNU objdump on PATH. Neither script loads or launches the game DLLs.
