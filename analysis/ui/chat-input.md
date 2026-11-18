# Original engine chat input

Static investigation of installed `D:/Steam/steamapps/common/Cry of Fear/hw.dll`,
preferred image base `0x01d00000`, SHA256
`9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`.
The original DLL was never executed. Both private REA/Ghidra sessions closed,
all ten queries succeeded, and both verification records report unchanged input.
This document concerns the engine input line, not received SayText messages.

## Mode and editing contract

| Native anchor | Confirmed behavior |
|---|---|
| `01d4a93b`, `01d4a94d` | Register `messagemode` / `messagemode2` callbacks below. |
| `01d4a5c2` | Return if `01d0fd1e()` is nonzero. Set destination global `023ca258=1`. With exactly two command arguments, copy argument 1 into command buffer `01ebf2c0`, at most 31 bytes plus NUL; otherwise copy `say`. Opening does not clear the text buffer. |
| `01d4a61b` | Same gate and destination, command becomes `say_team`. |
| `01d0fd1e` | Returns `023c9f18` only when interface pointer `01eda258` exists, otherwise zero. This is an existing UI-state gate; its full producer lifecycle was not recovered in this task. |
| `01d8a88a..01d8a8d3` | Only key-down reaches the editor. Active shift global selects the engine shift-table mapping. Destination 1 routes to `01d89a63`; ordinary gameplay bindings are bypassed by that destination. |
| `01d89a63` | Enter `13` and keypad Enter `169` submit; Escape `27` cancels; engine Backspace code `127` removes the last byte. Printable accepted range is `32..126`. Other keys do nothing. Max length is 120 bytes, tracked at `023ca25c`; text starts at `027f8c40`. |
| `01d89a1f` | Before submission, replace each semicolon with a comma in the text buffer. |

Submission appends four fragments through command-buffer function `01d440eb`:
`command`, ` "`, `text`, `"\n`. It runs even for an empty text buffer. Then
destination becomes zero, length and text are cleared, and command resets to
`say`. Escape clears destination/length/text but does not reset the command.
There is no insertion cursor, selection, history, paste, arrow navigation,
Unicode input, or completion in this native handler. The shift-table path is
key based, not a UTF-8 text-input callback. An absolute-reference scan found no
other references to the chat buffer or length outside this editor and renderer.

The native quoting does not escape embedded double quotes. A port may choose
safe command serialization and UTF-8 handling, but these are adapter decisions,
not recovered original features. The 120-byte limit and semicolon substitution
are separate from any server-side SayText validation.

## Placement and appearance

`01d4acd1` is the notify/chat draw routine. It initializes y to zero, draws any
unexpired notify lines, and increments y by EngineFont height for each. When
destination is 1, it initializes x to **8 physical pixels**, invokes the optional
client position callback, then draws:

1. Literal command (`say`, `say_team`, or supplied argument).
2. A 3-pixel gap, literal `:`, another 3-pixel gap.
3. The trailing text slice starting at `max(0, length - screenWidth / 10)`.

There is no input box, border, background fill, mouse focus panel, or resource
layout in this path. The slicing is a byte-count heuristic rather than measured
pixel fitting. Labels are command literals, not localized `Say` / `Team` labels.
`01d5de11` draws a string and returns its right edge, so both 3-pixel gaps are
independent of character-space width.

The optional `HUD_ChatInputPosition` lookup at `01d22b5d` stores a function pointer
at `02fb9c80`. Wrapper `01d22bd1` simply does nothing if that pointer is null.
**The installed original client.dll does not export HUD_ChatInputPosition**:
both the retained export inventory and a fresh PE export dump confirm absence.
Thus this artifact has top placement after notify lines, not an assumed HUD
bottom placement. Client SHA256 is
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.

The draw loop requests a cursor character at x = text right edge + 1, alternating
code 10/11 with `(int(realtime * 4) & 1) + 10`; float 4 is at `01eb15a0`.
However, the character renderer `01d0ee3c` gates glyph emission through
`01e717da`, the CRT character-class test using mask `0x157` (printable classes).
These control characters can therefore be filtered. The recovered call does
not prove a visibly blinking cursor; a modern caret would be an adapter choice.

### Font and color

`01d0eda5` obtains the default scheme and requests `GetFont("EngineFont", true)`,
storing its handle at `01edb3d4`. Getter `01d0ee28` feeds that font into string
draw `01d5de11 -> 01d0eff8` and character draw `01d5ddf4 -> 01d0ee3c`.
String rendering uses the VGUI surface font/text-color/text-position API and
wide-character print path after conversion. This does not change the ASCII-only
input editor contract.

The installed game `resource/TrackerScheme.res:262` defines EngineFont:

| Screen height range | Typeface | Positive GDI cell height | Weight | Shadow |
|---|---|---:|---:|---:|
| 480..599 | Verdana | 12 | 0 | 1 |
| 600..767 | Verdana | 13 | 0 | 1 |
| 768..1023 | Verdana | 14 | 0 | 1 |
| 1024..1199 | Verdana | 20 | 0 | 1 |
| 1200..6000 | Verdana | 24 | 0 | 1 |

Fallbacks are Verdana12 weight600 and Verdana11 weight800 with shadow. Platform
TrackerScheme has different weights; resource search precedence still matters.
No antialias flag is declared. Although GetFont requests proportional=true,
VGUI2 scheme parser `10012eec..10012f39` parses and filters yres ranges and
`1001308f..100130da` bypasses proportional size multiplication whenever either
yres bound is nonzero. Therefore these range-specific sizes are not multiplied
again by screenHeight/480. Language adjustment and GDI metrics still apply,
as documented in [fonts.md](../menu/fonts.md); measured text height includes
the shadow pixel. For example the English 720p selection requests tall 13,
not 19.5. Exact active default-scheme search precedence was not runtime observed.

`01d4acd1` begins with `01d5dd55 -> 01d5ddae`, which parses three integers from
`con_color` (cvar at `01eb15d8`) and updates packed text color via `01d0f26f`,
alpha 255. The binary default is **255 255 255**. The installed original
`cryoffear/config.cfg:97` overrides it to **255 180 30**. Do not confuse this
user/config override with the native default. No hardcoded green team-input
color or receive-chat player color is selected here.

Resource files contain generic `Chat` border and `ChatBgColor` definitions, but
this engine input draw path does not instantiate a VGUI Chat panel or use them.

## Evidence and port boundary

Retained ignored evidence directories:

- `analysis/local/chat-input-modes`: three full REA queries, Evidence export,
  immutable verification and close record.
- `analysis/local/chat-input-render`: seven full REA queries, Evidence export,
  immutable verification and close record.
- `analysis/local/chat-input-assembly`: bounded assembly for registration,
  mode, editor, dispatch, position callback, font and color; original client PE
  export dump; target hashes in manifest.
- Existing `analysis/local/menu-switch-font-assembly/vgui2.dll-font-scheme.asm`
  supplies the yres/proportional branch, with its original manifest.

Representative REA Evidence IDs:

- Modes: `ev_72cfdd6e1a49a70e69595b8a3946dec13183cb461b21c6d70422cec1c94e6872`.
- Editor: `ev_ff69d15443e264e0cd980c0b45cd4673931b6af9dbee7e4266d488acb71c05f9`.
- Notify draw: `ev_eed7743e49e47fac546c0e5e5b51dcd95b1c728d1b6d4f3b9d5a9f7afb0cff2b`.
- EngineFont: `ev_ecdcd20bafcdb9372cc52bbb42c63d76d1b5168b44a543006ca6c95d423930c2`.
- Glyph filter: `ev_61d9bd2be4826b025ab15ca3ff16999f697a907952d99e5cbb1c68acfd99ed4c`.

Xash's existing `Con_DrawNotify` and `Field_DrawInputLine` are comparison source,
not evidence for original behavior. Their field editing, font selection and
label spacing differ. A source-owned engine adapter can keep destination and
command dispatch integration, implement the confirmed editing contract, and
draw via the recovered EngineFont path without loading any original DLL.
This task changed documentation only; no core source, vendor files, builds,
runtime launches, or commits were performed.
