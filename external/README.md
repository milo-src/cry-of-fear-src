# Vendored build sources

- `hlsdk-portable`: FWGS portable Half-Life SDK; the game build copies these
  sources to `build/game-source` and applies the explicit prototype adaptations.
- `xash3d-fwgs`: FWGS Xash3D engine, including its bundled third-party sources.

Both are ordinary repository directories, not Git submodules. The initial
snapshots come from this repository's commit `2971dbb`; that history is not a
build prerequisite. Upstream licenses and notices are preserved in each tree.
Legacy prebuilt VGUI DLLs are excluded and are not deployed by the build.

Use the root `build.bat` for a Waf build. Generated files remain in ignored
`build` and `out`; official SDL2 downloads are cached in ignored `deps`.
