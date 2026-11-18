# Original console: native evidence and source adapter

Static-only analysis of installed CoF artifacts, REA 6.9.0 private MCP/Ghidra
12.1.4 immutable import. Original DLLs were not loaded into the game or executed.

| Artifact | SHA256 |
| --- | --- |
| `cryoffear/cl_dlls/GameUI.dll` | `9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198` |
| `hw.dll` | `9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875` |

Full evidence: ignored `analysis/local/ui-console-{core,behavior,history,engine,assembly,transport}`.
Capture/reproduction: `python tools/capture_ui_console.py --output analysis/local/NEW --rea`.
The history capture has one explicitly retained failure: Ghidra did not identify
the 8-byte `10045ad0` thunk as a procedure. Its bytes decode to
`mov eax,[ecx]; jmp [eax+300h]` and are saved separately as bounded assembly.
All other selected history queries succeeded; inputs remained unchanged. The
reproduction tool uses assembly for this thunk instead of repeating the failure.

## Original interface and lifecycle

GameConsole003 registration `100309f9`, factory `10030a12`, singleton `100f9af0`,
vtable `100c7454`. Virtual slots:

| Slot | Address | Purpose |
| --- | --- | --- |
| 1 | `100307af` | Activate, guarded by initialized/loading-dialog state; brings the console forward and focuses input. |
| 2 | `10030698` | Initialize: allocate dialog, attach root parent, set initial bounds, register `condump`. |
| 3 | `10030801` | Hide. |
| 4 | `10030825` | Clear history display. |
| 5 | `10030917` | IsConsoleVisible; false before initialization. |
| 6 | `10030849` | Printf: bounded 4096-byte vsnprintf buffer, force final NUL, normal-color append. |
| 7 | `100308b0` | DPrintf: same formatting, debug-color append. |
| 8 | `100309ac` | SetParent. |

Initialize sets `(x,y)=(40,40)`, width `min(screenWidth-80,560)`, height
`min(screenHeight-80,400)`. These are direct pixels, not a half-screen console
overlay. Dialog constructor `1004912d` creates frame `GameConsole`, localized
title `#GameUI_Console`, button `ConsoleSubmit`/`#GameUI_Submit`/command `submit`,
popup `CompletionList`, custom TextEntry `ConsoleEntry`, custom RichText
`ConsoleHistory`. Constructor minsize is100x100; frame is initially hidden.
History forwards focus to input (`1004aa40`). Entry loses focus to anything
other than its completion popup -> posts `CloseCompletionList` (`1004a930`).

## Exact child layout and colors

Layout `10049ffc`, relative to frame width W/height H:

| Control | x | y | width | height |
| --- | --- | --- | --- | --- |
| History | 8 | 36 | W-16 | H-76 |
| Entry | 8 | H-32 | W-88 | 24 |
| Submit | W-72 | H-32 | 64 | 24 |

History and Entry both get `DepressedButtonBorder`. Popup placement `1004a174`
uses absolute frame position + entry position + (0,32), i.e. below the window
at `(frameX+8,frameY+H)`. Popup's own menu sizes its items.

ApplyScheme `1004a212` stores normal print color from dialog GetFgColor and
debug print color from `BrightControlText`. Frame scheme `100692ce` uses
TitleBarFgColor/BgColor and disabled variants, title font `Default`, title
button symbols `Marlett`.

The installed game `resource/trackerscheme.res` differs from platform defaults:
ControlText=(90,90,90,200), BrightControlText=(90,90,90,220),
BaseText=(90,90,90,220), ControlBG=(40,40,40,128),
WindowBG=(40,40,40,150), ControlDarkBG=(40,40,40,200),
SelectionBG=(224,156,48,160), TitleText=(255,255,255,255),
TitleBG=(206,206,206,0). Resource values are inherited through scheme lookup;
do not substitute the unrelated main-menu InGameDesktop colors.

Font confirmation: ConsoleEntry vtable `100cc8e8`, ApplyScheme slot79 ->
TextEntry `1007d68d`; ConsoleHistory vtable `100ccbec`, same slot -> RichText
`100748b8`. **Both request Default with panel proportional flag**, not EngineFont
or Lucida Console. Installed game Default is Tahoma16, weight0. TextEntry uses
WindowFgColor/WindowBgColor, TextCursorColor, SelectionFgColor/SelectionBgColor;
RichText uses corresponding window/selection colors. The source console uses
the shared Default font accordingly. Capture `ui-console-fonts` succeeded with
unchanged original input.

## Commands, history and completion

Submit `10049d70` reads at most256 bytes including NUL from the entry and calls
engine function table +0x50 (ClientCmd). It echoes `] ` + command + newline,
clears entry, restores input focus, scrolls history to the bottom, splits at
the first space into command/arguments, adds command history, hides completion.
No OS shell is involved. Enter is the entry's enabled default action.

History insertion `1004a34d`: keep at most100 entries, remove case-insensitive
duplicates comparing both command and argument strings, trim trailing spaces
from arguments, append newest at the end. Blank-command behavior in original
contains unsafe indexing; source adapter deliberately skips blank history.

Completion rebuild `100494f8`:

- Empty input produces command history, oldest to newest.
- Nonempty prefix containing a space produces no command/cvar matches.
- Otherwise iterate engine commands via table+198h/+19ch/+1a0h, then cvars via
  +194h and next pointers. Compare prefixes case-insensitively; no sorting.
- Cvar item stores name and current string value for display; command item
  stores its name. Cycling inserts the name, while history inserts full text.

OnTextChanged `10049997` shows up to7 popup rows; row7 is literal `...` even
when there are exactly7 matches. No matches hides popup. A trailing space
can accept the first match. Typed tilde/backtick clears input and closes the
console, returning input ownership to game/loading UI.

Cycle `10049787` uses persistent next-index, wraps both directions and appends
a space to inserted command/history. Key handler `10049ee7` maps Tab to forward,
Shift+Tab to reverse, Down to forward, Up to reverse. It only intercepts them
when the input owns keyboard focus. VGUI keycodes are67(Tab),88(Up),90(Down),
79/80(shift); the adapter translates source-engine key codes.

## Engine transport

### Map argument completion in the source adapter

The source console additionally completes `map ` and `changelevel ` arguments.
The engine bridge enumerates `maps/*.bsp` through the mounted filesystem,
including archives, and filters names case-insensitively by the typed prefix.
This is an adapter extension to the command/cvar-only behavior documented above.
Selecting a suggestion inserts the whole command and map name without executing
it. Tab/Shift+Tab and arrow keys cycle the results, with a seven-row scrolling
viewport; the popup opens upwards when there is insufficient screen space below.
The local `--console-output` runtime check covers filtering, empty results,
keyboard cycling, click selection and upward placement in both renderers.

`hw.dll` loader `01d010e6` (selector `01d01245`) requests GameConsole003 and
stores it at `01eda254`. `toggleconsole` is registered to `01d4a538`:
IsVisible `01d0f8e9` calls interface slot5 and chooses show/hide through engine
GUI controller `01d0f910/01d0f97e`. Clear helper `01d0f99c` calls slot4.
Normal output `01d0f9ba` calls slot6 with format `%s`; debug output `01d0fa2b`
calls slot7. When the interface is unavailable the engine buffers text instead.
These are normal engine output callbacks, not a text file polled by GameUI.

`condump` callback `100309df` -> `1004a5d6` scans `condump000.txt` through
`condump999.txt` for the first unused file, obtains RichText contents in Unicode
chunks, converts to narrow output and inserts CR before LF. It reports success
or failure through the same console history. Source adapter currently leaves
the engine's existing condump command in place; this exact Unicode dump path
is recorded rather than claimed restored.

## Source adapter and limits

`src/cof/vgui/console.cpp` owns the console dialog, input,100-entry history,
completion cycling/popup, command submission and log rendering. The parent
framework supplies frame dragging/resizing, controls, text/font rendering and
input delivery. `engine_bridge.h` is a separate source-owned ABI:
engine calls toggle_console/console_print and supplies command/cvar completion;
Submit uses source engine ClientCmd. No original VGUI/GameUI DLL is required.

Explicit adapter choices: log storage capped at4096 lines and4096 bytes per
unbroken line, cached width wrapping,16px history line spacing,20px popup rows,
bounded completion count4096, drawn scrollbar with track click/drag and
wheel/PageUp/PageDown. RichText text selection/copy and the native RichText
condump implementation are not reproduced in this file. Debug-color distinction
is not transported by the current one-argument engine print bridge. Frame min
size and clipping behavior follow the new shared framework. Runtime validation
belongs to the parent build/smoke; static evidence alone does not prove pixels.

## Selected evidence identifiers

| Query | REA evidence |
| --- | --- |
| Dialog constructor | `ev_41f60412ceb309c8e820364e698668809af413754cefa3761befb169f6f22ff0` |
| Initialize/bounds | `ev_a4cfbbb20ff51d32eea3083bc320fd6bef12ea81fbe4310578c72f2567b67917` |
| Layout | `ev_a566e1769f951aefcf2946d3cddf329495882b6763ca1a45d44b8332284a97a1` |
| Submit | `ev_97a6874b90268a7c1061d845d18a30dba737e83b155d59a60ddf750545df1932` |
| Completion rebuild | `ev_f5690cbd0c98df90d2577f6cccad0ca03f08f0a58b4a1595559b292cb9915d1c` |
| TextChanged/popup | `ev_f1bf0b017c75101f3b1b565cd0630a3f9a0380500169e60464e1fa69963b2c52` |
| History insertion | `ev_271aa9327a40e81bdf03cea1f12ca6df0c9f71dbf5755c7f46ddcc7c6c704f88` |
| Cycling | `ev_351b3cab29b29b4a2cd3cd6c6b070b8c40c136c3021f3b2c250a86aa6513a2d3` |
| Engine factory loading | `ev_acd56b53ca778c5d8188dcec37358c81379c8bc43482e3c5707fe51ca3fe3c58` |
