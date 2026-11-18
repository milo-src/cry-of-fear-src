# Vulkan UI correction

The reconstruction's own VGUI host uses the engine's `FillRGBA` entry point
for frames, backgrounds, buttons and scrollbars. The RT fork ignores
`glDisable(GL_TEXTURE_2D)` and still samples the last bound font/image with stale
UVs. As a result, these solid rectangles become transparent or patterned.

`tools/prepare_rtx_ui.py` changes only the generated RT `CL_FillRGBA` function:
bind the existing engine white texture, draw the colored rectangle, restore the
previous texture and active unit. No game image, font, logo or map is rewritten.
The original logos' horizontal ghosting is part of their source artwork and is
deliberately retained.

A first attempt tracked texture enable/disable globally. This was incorrect:
the fork's multitexture cleanup can disable another unit, which then made HUD
sprites and debug glyphs solid rectangles. That attempt was removed. The final
fix is scoped to solid fills and preserves the existing textured draw path.

The console also encoded incoming MainUI UTF-8 bytes as separate Unicode
characters. Decode bytes at the host boundary before passing codepoints to
Dialog::Character. Console submit button width now follows the localized label.

## Verification

- `python tools/smoke_rtx.py --ui`: RTX preferences/confirmation, keyboard and
  advanced options, console; UTF-8 input asserts the bytes of `привет`.
- `python tools/smoke_rtx.py --renderer normal --ui`: same checks in OpenGL.
- Both runs capture actual window pixels and require continuous visible window
  edges. Native state assertions alone had missed the original rendering bug.
- `--motion` / `--water-view`: health/stamina textures and debug text checked on
  a loaded map. Pixel checks reject a solid white rectangle across the gap
  between HUD meters; tested against the captured broken frame as a negative
  control (`analysis/local/rtx-ui-regression-before.png`).
- Stair replay retained zero unexpected static triangle mutations (930 frames,
  107068 primitive uploads in this run). This is not a blanket claim about
  temporal denoising on every map.

Local reports/screenshots are under `analysis/local/*settings*` and
`analysis/local/rtx-cof_graphics_test*`; both runtimes were built with Waf and
passed their native module provenance audits.

## Ordinary-launch console output

The user later reported a console containing only `] maps` / `] status` echoes.
This is independent of Vulkan drawing: `Con_Printf` returns immediately when
`host.allow_console` is false. The source-owned console could open while this
engine gate remained closed. Previous UI smoke tests used `-dev 2`, masking it.

After successfully loading the CoF console API, `CofUILoad` now enables both
`host.allow_console` and `host.allow_console_init`. The second value matters:
disconnect restores it. Developer verbosity remains unchanged at zero in normal
launches; this does not enable the old console overlay.

`python tools/smoke_rtx.py --console-output` launches without `-dev` or `-console`.
The native test inspects received console history for an exact echo reply
(ignoring the engine echo command's trailing space), no duplicates, `status`, a
filtered map list, unknown-command output, output after disconnect, and `clear`.
Use `--renderer normal` for the same test in the classic build. Resource colors
and artwork are unchanged.
