# Recovered options and console — 2026-11-18

## Evidence and implementation boundary

The original separates client VGUI1 HUD panels from GameUI/VGUI2 settings and
console. Static REA/Ghidra observations are in `options.md`, `console.md` and
`resources.md`, with native addresses and retained evidence IDs. The combined
81-record checkpoint is `analysis/local/ui-rea-checkpoint.json` (ignored local
evidence). Original binaries were inspected, never executed or redistributed.

`src/cof/vgui` is a source-owned implementation of the recovered panel/control
contracts, not a recovered copy of Valve's complete VGUI2 source or binary ABI.
It uses the compiled source menu host for drawing, fonts and platform input.
Dialog layout, focus, widgets, resources, settings drafts and console behavior
belong to this layer. `external/` is unchanged. Waf builds the layer into our
`menu.dll`; `tools/prepare_vgui.py` patches only `build/engine-source`.

## Implemented routes

- Every `UI_Options_Menu` / `menu_options` route opens the six-page CoF dialog,
  replacing Xash's Configuration page. Game resources supply page geometry;
  native code supplies tab order, 512x406 frame and footer button positions.
- Options keep draft cvars and bindings until Apply/OK. Cancel discards drafts.
  Keyboard uses original action/default binding lists, group headings and three
  columns. Advanced controls come from the 22 entries in original `user.scr`.
- Engine `toggleconsole` opens the source-owned console; log output and `clear`
  cross a separate versioned `GetCofUIAPI` bridge. Command execution uses the
  normal engine command buffer, not an OS shell. Prefix completion enumerates
  commands followed by cvars. UTF-8-safe input, history, scrolling, drag/resize
  and text-input activation work independently of original GameUI/VGUI DLLs.
- TrackerScheme colors and border aliases/edge offsets, Default Tahoma16 and
  original localization are used. Shared `platform/resource` assets are staged
  only when the game has no override. No binary extensions are allowed.
- The Xash version overlay is suppressed while GameUI is visible.

## Validation

`python tools/build_engine.py` builds and deploys through Waf.
`pwsh -NoProfile -File tools/smoke_vgui.ps1 [-Width 800 -Height 600]` performs
actual menu mouse/key dispatch and Windows SDL-window text messages. It checks
all six pages, draft/cancel/apply, binding capture/apply, console command output,
history, engine completion, dragging and returning to settings. It records
screenshots and loaded modules, restores config.cfg after testing, and rejects
original game modules. Final runs passed at 1280x720 and 800x600 with exit0 and
zero failed assertions. Captures were visually reviewed; missing platform
translations and duplicate keyboard rendering were corrected during validation.

The standalone Waf parser tests and original-resource inventory cover 51 files,
Unicode decoding, malformed input, ordered duplicate keys and scheme aliases.
`python tools/audit_runtime.py` confirms nine own-build/official-SDL x86 modules.
Local logs and screenshots are under `analysis/local/vgui-*` and `out/runtime`.
The existing `tools/smoke_menu.ps1` 3D -> 2D -> 3D roundtrip also passed with
client panel input checks, own modules and exit0 after UI integration.

## Remaining work, explicitly not claimed restored

This is not pixel-identical, complete VGUI2. The widget layer still needs exact
native propertysheet/tab metrics, scrollbar and checkbox details, text/history
selection/copy, debug-output color distinction, native condump behavior, and
binding-conflict/default-confirmation semantics. Resources and native contracts
are distinguished from source-host adaptations in the per-feature reports.

Unsupported audio EAX/A3D/hisound, original microphone gain/boost/test and most
Advanced renderer/gameplay settings remain visibly disabled. In particular,
native gl_gamma/gl_brightness rendering consumers are not restored: assigning
a cvar would falsely imply that the original feature works. Available Advanced
consumers are name, cg_water and gl_posteffects. Existing renderer limitations
are documented separately in `analysis/graphics`.

Other inherited host dialogs (for example server browser and quit confirmation)
have not all been migrated by this change. Existing 3D/client HUD panels retain
their previous source implementation. This change restores settings/console and
provides their common source UI layer; it does not claim that every game screen
has been fully reverse engineered.
