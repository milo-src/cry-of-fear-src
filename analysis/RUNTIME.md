# Source-built runtime milestone — 2026-11-18

The first Windows x86 map exploration prototype starts without loading original
Cry of Fear DLLs. Build entry point: `build.bat`. Launch entry point: `launch.bat`.
The engine and game are built by Waf. No CMake step is part of the build.

This page records the initial launch milestone. A subsequent door recovery pass
adds ordinary single-player transitions and controllers; see `doors/README.md`.
The unsupported-class counts below describe the initial baseline, before that pass.

## Evidence

- `analysis/local/smoke-c_sdkmap1.json`: exit code 0, rendered-frame marker,
  103.77 units of observed player movement, full loaded-module paths.
- `analysis/local/smoke-c_sdkmap1.log`: startup, map sign-on, client frame,
  movement and orderly shutdown. Includes unresolved asset/entity warnings.
- `out/runtime/c_sdkmap1_0001.png`: actual rendered corridor after movement.
- `out/runtime/runtime-audit.json`: all 9 staged EXE/DLL files match locally
  built engine/game outputs or the hash-pinned official SDL2 runtime; all x86.
- `out/runtime/engine-build-manifest.json`: engine and SDL provenance/hashes.
- `out/runtime/assets-manifest.json`: asset staging policy and test BSP hash.
- `analysis/map-startup.json`: static map/spawn/resource analysis.

The smoke test observed our server at `out/runtime/cryoffear/dlls/hl.dll` and
client at `out/runtime/cryoffear/cl_dlls/client.dll`, plus our Xash engine and
renderer. No module path came from the installed Cry of Fear directory. The
staged-native-module audit also rules out renamed/copied original DLLs by
matching the complete allowlist against actual build outputs.

## What this does and does not implement

Xash3D renders the original BSP and assets. HLSDK supplies baseline player
movement, collision, flashlight and supported Half-Life entities. The explicit
prototype overlay identifies this as reconstruction work. The three initial
ABI semantic reconstructions remain evidence; they are not represented as a
recovered gameplay implementation in this runtime.

SDK and engine sources are vendored in `external/hlsdk-portable` and
`external/xash3d-fwgs`, initially restored from commit 2971dbb. Builds use these
repository files directly and do not need that commit or any Git history.
The prior speculative `src/cof` tree is not reused.
Their licenses and source notices remain in those trees. SDL2 2.32.10 is the
official separate runtime dependency, not a DLL taken from Cry of Fear.

Adaptations are reproducible in `tools/prepare_game.py`: skip unrelated HL
inventory and gib precaches, disable HL weapon prediction and proprietary VGUI,
guard absent HUD sprite indexes, and enable the SDK flashlight. `stage_assets.py`
copies `delta.lst` and palettes, corrects the HUD sprite-list declared count in
the runtime copy, and installs a game-specific `.rc` so command-line `+map`
actually executes. Initial startup failures from the absent `delta.lst` and
missing startup `.rc` were fixed and the smoke test rerun successfully.

The `c_sdkmap1.ent` patch removes precisely the trigger_once targeting multiintro
to bypass its 28-second camera sequence for exploration. The installed BSP is
never modified. Other CoF class behavior is not invented: 23 class types on this
map are not supplied by the baseline SDK. This includes inter_door, env_model,
CoF item/weapons, ladder controllers and scripted managers. Use N noclip to
explore beyond unsupported doors. Missing legacy HL effects/sounds and optional
VGUI entry points are logged but did not prevent the tested map from loading.
The original CoF campaign, weapons, enemies, save compatibility and audio logic
are **not** recovered or validated by this launch milestone.

## Repeat

```powershell
.\build.bat
pwsh -NoProfile -ExecutionPolicy Bypass -File tools/smoke.ps1
python tools/audit_runtime.py
.\launch.bat
```

Build and runtime output stay ignored; there are no commits, pushes, or branch
changes in this milestone. Only `main` is used.
