# Original GameUI options and source-owned reconstruction

Captured 2026-11-18. This is static evidence from the installed GameUI DLL,
plus a source-owned replacement. Decompiled pseudocode is not original source.
No original DLL was executed or loaded into the reconstructed game.

## Target and reproducibility

Target: `D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/GameUI.dll`,
x86 PE preferred base `0x10000000`, SHA256
`9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198`.

`tools/capture_options_ui.py` pins this hash, captures the selected resource
files with individual hashes, bounded strings and code references, and generates
initial REA requests. It also saves bounded constructor disassembly where the
decompiler omits floating-point stack arguments. Its complete inventory is
`analysis/local/ui-options-index-complete/inventory.json` (12 files, 334 strings).

Native queries use the private REA/Ghidra helper `tools/rea_ghidra.py`. Complete
responses, normalized pseudocode, evidence bundles, close results and unchanged
input checks are retained in these ignored directories:

| Directory suffix under `analysis/local/ui-options-` | Procedure addresses |
|---|---|
| first | 1004fa6a,1004fe94,1005063f,10051093,100534e6,10053f3f,10056dcb,10057db1,1008c4cb,1008cc89,10045454 |
| second | 1004c640,10044ef0,1008c690,1008cc00,1008cdf7,1004fc8a,100571f6,10056de8,10045ae0,10044970,10045fe0 |
| actions | 1004ccfb,1004c9f1,100506cf,1005072e,10053565,100535d2,1005717d,100580ec,10051141,100451d3,1004529b,1008ccb7,1004fd94,1003e372,1003e493 |
| final | 10039404,1004d126,100572a9,10051efa,10045090,1008ca0c,10051ded |
| layout | 1008ca31,1003946c,1004ca0a,100511a0,100579f0 |
| keyboard | 10051154,100513cd |

All sessions closed successfully with `input_unchanged=true`,
`queries_succeeded=true`, `target_executed=false`.

## Native window, pages and commit behavior

`1004fa60` creates a **512x406** Options dialog and these six pages in order:
Keyboard, Mouse, Audio, Video, Voice, Advanced. It does not add the available
Multiplayer page. Advanced is the generated `1004c640` page, not the separate
content-lock `OptionsSubAdvanced.res` page.

Resource existence alone does not establish use. `DialogOptionsIngame.res`
(824x736) and `OptionsSubVideoo.res` are not loaded by the recovered constructors.
Active page resource names are `Resource/OptionsSubKeyboard.res`, Mouse, Audio,
Video, Voice, and `Resource/MultiplayerAdvancedPage.res`.

`1008cb68` handles OK by applying and closing, Cancel by closing, and Apply by
applying and disabling the Apply button. `1008cc52` applies all property pages
and posts ApplyChanges. Slider change (`1004529b`) posts ControlModified without
writing the cvar; slider Apply (`10045090`) performs the write if modified.
This justifies a draft state that survives tab changes and is discarded on Cancel.

PropertyDialog layout `1008ca31` lays out its sheet in the client area minus
32px, then creates 72x24 footer buttons spaced80px right-to-left. The frame
client-area implementation at `10068b96` uses5px side/bottom borders. Thus on
the512x406 window the native OK/Cancel/Apply rectangles are respectively
`(267,373,72,24)`, `(347,373,72,24)`, `(427,373,72,24)`.
Exact property-sheet font/border and tab-width calculations remain untraced.
The replacement uses measured localized tab text+16px and page offset(8,54).

## Native controls and cvars

| Page | Control behavior |
|---|---|
| Mouse | ReverseMouse changes the sign of `m_pitch`; MouseFilter→`m_filter`; Joystick→`joystick`; Auto-Aim→`sv_aim` (hidden by the resource). MouseLook/JoystickLook use `in_mlook`/`in_jlook` button state and `mlook`/`jlook` commands. Sensitivity slider→`sensitivity`, range1..20, with out-of-slider numeric values allowed. |
| Audio | EAX→`s_eax`; A3D→`s_a3d`; SFX→`volume`0..2; Suit→`suitvolume`0..2 (hidden); MP3→`mp3volume`0..1. High/Low sound-quality rows emit `hisound 1`/`hisound 0`. |
| Video | Brightness→`gl_brightness`0..0.3; Gamma→`gl_gamma`0..2. Native IVideoMode enumerates resolutions, windowed/fullscreen and aspect. `100579f0` calls only exact16:9 or16:10 widescreen. Other ratios go in Normal. |
| Voice | Receive volume→`voice_scale`0..1. Native voice enable→`voice_modenable`. IVoiceTweak supplies microphone gain, boost, loopback test and meters; Apply `100580ec` sends gain/100 to setting0 and boost to setting2. |

Slider ranges above are confirmed by constructor assembly as well as call-site
context. Numeric values omitted from decompiler output were not guessed.

Native video Apply `100572a9` formats `_setvideomode width height 32` and
`_setrenderer renderer windowed/fullscreen`, then invokes the engine restart
entry when the mode or brightness/gamma changed. The replacement adapts this to
source engine `GetModeString`, `vid_mode`, `fullscreen`, and `vid_setmode N`.
Original postprocessing gamma is not assumed equivalent to source texture gamma.

## Keyboard

`100513cd` reads the engine filesystem `gfx/shell/kb_act.lst`. It ignores label
strings beginning with `=`, turns `blank` records into SectionedListPanel groups,
and creates three columns for each group: Action(width226), Key(width128),
AltKey(width128). The group's first column label is the group label, while the
other two use `#GameUI_KeyButton` and `#GameUI_Alternate`. Actual actions contain
Action/Binding/Key/AltKey fields. These are native facts, not inferred solely from
the separator lines in the text file.

`10051ded` snapshots all256 current key bindings. `10051efa` unbinds removed
bindings and binds the Key/AltKey columns, then executes `userconfig.cfg`.
`100511a0` opens a confirmation dialog for Defaults with tokens
`#GameUI_KeyboardSettings` and `#GameUI_KeyboardSettingsText`; DefaultsOK calls
`100520ed`. ChangeKey activates key capture; ClearKey dispatches Delete.

Our replacement keeps a256-key draft, renders the recovered group/column model,
captures keyboard/mouse buttons before generic host dispatch, and commits changed
bindings through `KEY_SetBinding`. It shows the first two bindings for a row and
preserves other existing bindings. Clear removes all bindings of that action.
Row height20px, scrolling, focus paint, and capture prompt are source adaptations;
complete original SectionedListPanel styling is not yet reconstructed.

`gfx/shell/kb_def.lst` was absent from the installed loose-file inventory.
The Defaults button is disabled when the engine filesystem also cannot load it.
When available, the current implementation changes the draft directly; the
native confirmation dialog remains a gap. No factory bindings are fabricated.

## Script-generated Advanced page

`1004c640` reads `user.scr`, loads current cvars, generates controls with
`1004ccfb`, then loads `MultiplayerAdvancedPage.res`. The script uses anonymous
type/default blocks, not ordinary KeyValues. The source has a bounded tokenizer
for that grammar; resource layout/localization use the shared KeyValues parser.

Native generated types: BOOL→CheckButton; NUMBER/STRING→TextEntry;
LIST→ComboBox with5 visible dropdown entries. Rows are28px high. `1003946c`
places child controls at y4,height(rowHeight-8). Nonboolean rows divide at
width/2+20: label atx0 and control at that split. Boolean controls span the row.
The resource places the list at(10,80,485,232) and the banner image
`resource/menu_advoptions` at(50,5,400,70).

`1004ca0a` gathers/formats/sanitizes control values; `1004d126` applies them and
writes `user.scr`. The installed script contains these22 cvars:

`name`, `cl_coop_language`, `gl_brightness`, `gl_contrast`, `gl_screenblur`,
`gl_bump`, `gl_specular`, `gl_highspecular`, `cg_water`, `r_weather`,
`cl_ripples`, `cl_subtitles`, `cl_cheapweaponsmoke`, `cl_smokeparticlelimit`,
`cl_noiseeffect`, `cl_noiseamount`, `cl_vignette`, `cl_propdistance`,
`cl_nodoubletapdodge`, `cl_bloodeffects`, `gl_posteffects`, `cl_cameraeffect`.

The captured installed script includes user-specific values; these are evidence
of that file, not a claim about original factory defaults. Original list labels
and values are retained. The replacement shows eight rows with paging/wheel
controls, preserves drafts across pages, validates finite NUMBER entries and
declared ranges, and persists engine settings with `host_writeconfig`.
It does not rewrite `user.scr` or execute a potentially overriding userconfig.

## Implementation boundaries and capability gating

Implementation: `src/cof/vgui/options.cpp`, backed by source-owned `ui.cpp` and
`resource.cpp`. It loads original text/image assets but no original GameUI or
VGUI binary. Source engine `host_writeconfig` is registered in
`external/xash3d-fwgs/engine/common/host.c`; a bare `writeconfig` is not the API.

Controls for absent cvars are disabled. EAX/A3D and native hisound have no source
backend registrations. Source `room_hires` is DSP quality, not a substitute for
native hisound. Source music volume is `MP3Volume` (case-insensitive lookup).
Native brightness/gamma remain disabled even if a config happens to define
their names, because their actual rendering consumers are not restored.

Among the22 Advanced entries, current verified source consumers exist for
`name`, `cg_water` and `gl_posteffects`; only these are enabled, additionally
requiring a live cvar. The remaining rows retain their resource/script geometry
and labels but are disabled. A cvar's existence alone does not prove its feature
works. Future implementations can extend this explicit capability gate.

Voice receive and enable map to source `voice_scale`/`voice_enable`; native
microphone gain, boost and test remain disabled because the source menu API
does not expose the original IVoiceTweak interface. No fabricated voice meter
is drawn. Shader/audio/voice feature restoration is separate from UI restoration.

Other gaps: original tab metrics, full native section scrolling/resizing,
default-key confirmation, original command-binding conflict semantics, exact
voice meter behavior, all advanced rendering/gameplay features, and automatic
matching of propertysheet border/font metrics. This is not a claim of complete
pixel identity or complete original Options functionality.

## Evidence anchors

| Native observation | REA evidence ID |
|---|---|
| Six-page dialog constructor | ev_e092135e78b6715c45986dd1d874f2e086ef4f677ea6f6314bc6e23992e87b01 |
| OK/Cancel/Apply dispatch | ev_2c6bc21809d7175c5613fb1cd4d146e98e630c4f04cdb93aef0f6d02e0c5ccdd |
| Footer layout | ev_0daeb003f3ef17dca9148433361fe4b100eda8fcefd59e066f8f2b71b6ce44ff |
| Keyboard groups/columns/parser | ev_b83850b3e12efdf4cedf69ddfc0265c5db4f7aea9c71499b35db4a8dd22fceb3 |
| Keyboard Apply | ev_fb295608fe8e74debe24085be0904c5f34c2d93e57f8e87c70721467be50694c |
| Mouse constructor | ev_222cbcdc5d092c45cb4e5570c39959107d7f2942ade2d3eefce083e336196071 |
| Audio constructor | ev_abdbf86ee8e7fdde8fc4c8e80c415e365714ed61b48add8632b342d5d3c9097f |
| Video Apply | ev_311dc4fa59cee3978d04e179dd860af4e357ef16837c1f14d49484d06edce812 |
| Voice Apply | ev_c97978c575a95e2eb22722f25bff1199683b9d139673e0054f7c0cc35da2cad9 |
| Advanced constructor | ev_272d5c4a61071cd217c5d97f984582c77efbb58b6d915dace1c01890e4dacddd |
| Advanced generated controls | ev_94c2f63c4454f05b11f86e93f610619c86a54ff63327e436398903c3f4a5200b |
| Advanced Apply/write script | ev_6fbf66326734f52f5a2f2aff5d59fa976211d92a569a847a75e87bfc908d4c59 |

GameUI references to TrackerScheme at1003e372/1003e493 belong to confirmation
dialog SetScheme calls in1003dd0f. They do not establish the initial scheme file
loader/search precedence. That remains a separate engine/VGUI investigation;
commented ButtonArmed/Depressed entries in a resource are not active colors.
