# cry-of-fear-src

Reverse-engineering workspace for future Cry of Fear work on top of Xash3D FWGS.

## Layout

- `external/xash3d-fwgs` - pinned Xash3D FWGS engine submodule.
- `external/hlsdk-portable` - pinned portable Half-Life SDK reference submodule.
- `src/cof` - writable HLSDK-based Cry of Fear game code.
- `scripts/` - PowerShell build helpers.
- `build_xash.bat` - quick Windows PC engine build.
- `build_game.bat` - quick Windows game/client/server build.
- `build/`, `deps/`, and `out/` - generated locally and ignored by Git.

## Quick Start

```bat
build_xash.bat
build_game.bat
```

`build_xash.bat` installs the engine into `out\xash3d` and deploys the needed runtime files to `C:\Users\xModea\Desktop\cof_xash`.

`build_game.bat` builds `src\cof` and deploys:

- `C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\client.dll`
- `C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\hl.dll`

Game assets are not part of this repository. Copy legally owned Half-Life/Cry of Fear assets into a local runtime directory only when needed.
