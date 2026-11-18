# CoF client chat: message storage versus actual VGUI presentation

Read-only native recovery from installed
`D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll`.
SHA-256: `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
No original DLL was executed. Private REA/Ghidra captures are under
`analysis/local/chat-client-*`; immutable input verification is recorded
in each capture's `verification.json`. Existing HUD constructor/Think
evidence in `analysis/local/hud-geometry` supplies the actual label owner.

## Native anchors

| Address | Role |
|---|---|
| `1008a790` | CHudSayText Init, hook/cvar registration |
| `1008aa60` | SayText engine message trampoline |
| `1008a830` | SayText message reader |
| `1008a870` | SayTextPrint, queue, name metadata, sound |
| `1008a420` | Draw/expiry and actual VGUI SetText updates |
| `1008a5a0` | Engine-width wrapping |
| `1008a9e0` | Scroll group upward, console history |
| `1008a7f0` | Reset buffers |
| `1008aa50` | VidInit, returns 1 |
| `1004b800` | Retained team-name color lookup |
| `100362b0` | CHUDControl constructor, chat label creation |
| `10037a20..10037b2b` | Bounded constructor loop for five chat labels |
| `100366ad..10036724` | Font scheme selection; pager goes to field `+e90` |
| `1003c65e..1003cb29` | Level-name visibility gate in CHUDControl Think |

## Wire format and queue

`SayText` payload is `BYTE clientIndex`, followed by a NUL-terminated string.
There are no extra localization tokens or formatting arguments in this
handler. Its read buffer size is supplied by the engine; it passes
`messageSize-1` to SayTextPrint.

The queue allocates six 256-byte rows (`10545128`), five visible plus a
cleared spare. Parallel arrays store name-color pointers (`10545728`) and
name-prefix lengths (`10545740`). The first free row is used; a full queue
scrolls before placing the new message into row four.

For text beginning with byte 2 and clientIndex > 0, the client calls
GetPlayerInfo and searches the supplied message for the player's name.
The saved prefix length includes bytes preceding the name. This is retained
SDK bookkeeping; it does not produce colored names in the final VGUI path.

Native copy code chooses `max(bufferSize-1,255)` as its strncpy count.
This historical unsafe expression is evidence, not a requirement to copy
an out-of-bounds behavior into the reconstruction. A source-owned port must
bound writes to its actual 256-byte rows and terminate safely.

## Timing, history, sound

Init registers `hud_saytext=1`, `hud_saytext_time=5`, both flags 0, and marks
the element for intermission drawing. A message inserted at row zero sets
the scroll deadline to current HUD time plus hud_saytext_time. Messages
appended below existing text do not restart that oldest-message deadline.
Draw clamps the deadline to at most `now+duration`, handling time resets.
At expiry it scrolls the oldest message group, then schedules another
duration. If empty, it clears HUD_ACTIVE. There is no opacity fade in
CHudSayText's native presentation.

ScrollTextUp prints the outgoing row through engine ConsolePrint, shifts
rows/color metadata, and clears the final row. When the new first row starts
with a space (wrap continuation marker), it changes that marker to byte 2
and recursively scrolls that row too. Thus a wrapped message expires as a
group and moves into console history when removed, rather than immediately
duplicating every received message there.

If the viewport disallows text, SayTextPrint sends the incoming string
straight to ConsolePrint and returns without queueing or playing a sound.
Draw also checks that viewport gate and hud_saytext.

`AllowedToPrintText` at `100a5290` returns false when viewport field
`+13d0` points to a current menu, global `105593b0` is zero, and that menu's
field `+c4` is 2, 3, 5 or 6. Those numeric IDs are confirmed; their specific
menu names are outside this bounded chat trace. This is not an unconditional
hide whenever any menu exists. Capture: `chat-client-gates-font/000`.

The message sound is **`player/police/police_pager.wav`**, volume 1, from
`1008a99e`; it is not SDK `misc/talk.wav`.

## Wrapping retained from SDK

Wrapping still measures through engine DrawConsoleStringLen at
`101b267c`. It is not measured with the actual pager bitmap font. Width
limit is `ScreenWidth-40`; the accumulation starts at x10. The scanner
remembers spaces as word breaks, skips `/(...)` mode tokens, measures
single-byte strings, and breaks at the previous byte when no word boundary
exists. Remaining text is moved into a free queue row, prefixed by a space
unless it already starts with one, and recursively wrapped. Full queues
scroll while locating room. This is a byte-oriented legacy path, not a
Unicode grapheme layout algorithm.

The old bottom Y_START calculation is still performed after receipt:
`H-(H>=480 ? 60 : 45)-6*engineLineHeight`. Native Draw does not use it to
render chat, so reproducing this SDK placement is visually incorrect.

## Actual CoF history: five pager labels

The original Draw has removed its calls to DrawConsoleString. Instead,
when `gViewPort` and its `CHUDControl` pointer at `+142c` exist, it updates
the five label pointers at CHUDControl `+3b4..+3c4` through SetText
(virtual slot `+200`). For every row it passes **row+1 unconditionally**,
stripping the initial control/continuation byte. This also means an
unmarked plain string loses its first byte in the original; do not silently
assume this is the Source-engine multi-argument chat format.

Constructor loop `10037a20..10037b2b` creates `vgui::Label` objects:

- x defaults to 5 when owner field `+85c` is zero.
- y defaults to `ScreenHeight/2` when field `+860` is zero.
- Each row i uses `(x, y+i*32, ScreenWidth, 32)`.
- Alignment is west (3), vertically centered within the 32-pixel label.
- Foreground is `(255,255,255,0)` in **VGUI1 inverse-alpha** convention:
  opaque white. Background `(0,0,0,255)` is transparent.
- Font is owner's `+e90`, selected from the scheme named **`pager`**.
  String `1014198c` is passed through lookup `1009d3a0` then font retrieval
  `1009d350`; the assignment occurs at `100366fe`.

The latter methods were independently checked: scheme lookup compares
names case-insensitively, and font retrieval returns the scheme record's
pointer at `+20`. They are not a similarly named unrelated text helper.

The parent HUD Think then shows these labels only when engine GetLevelName
returns a string containing **`cof_`** (`1014688c`). If no level name or
no substring match, it hides all five. Receiving/queueing and the popup
sound are separate from this visibility gate. A `c_sdkmap1` screenshot
therefore does not show original-style chat history; use a matching coop
map name or explicitly document a test-only override.

The engine-name-color loop still calls DrawSetTextColor for name metadata,
but it never assigns those colors to these VGUI labels. Applying team
colors to the visible CoF history would invent behavior. For reference,
lookup `1004b800` uses team 1 `(0.6,0.8,1)`, 2 `(1,0.25,0.25)`,
4 `(0.6,1,0.6)`, teams 0/3 `(1,0.7,0)`, default `(0.8,0.8,0.8)`.

## Original pager assets

All six installed resolution variants 640/800/1024/1152/1280/1600 are
byte-identical. Therefore using the 640 pager atlas does not approximate a
different high-resolution asset.

| Asset | Dimensions/bytes | SHA-256 |
|---|---|---|
| `gfx/vgui/fonts/640_pager.tga` | 2560x16, 29810 bytes | `83e8a0b0cad982b1897b88dcc027dbefbbdf4e5aa2816b2d5de6d00d3a3edb8e` |
| `gfx/vgui/fonts/640_pager.chw` | 768 bytes | `7ec447bf7f614abbed0e7bdbffa5f80fd4db67cf71387501e997c7c57031de06` |

The atlas has 256 cells, width 10 and height 16. CHW has three bytes per
character, signed left bearing / unsigned ink width / signed trailing
bearing. Example advances: A7, a6, g6, W9, M9, space5, period3. The
existing credits-font drawer can be generalized by selecting this atlas,
cell width10 and height16; its credits dimensions (cell19, height22) are
not interchangeable. Asset inventory is retained in
`analysis/local/chat-client-index/font-assets.json`.

## Input boundary and remaining scope

The original client export inventory `analysis/exports/client.csv`
(evidence `ev_32aa6f0a8ab1f5251bafc0a8f15b1c9cf3e96ed5b06e38665f112f58ff030eeb`)
contains no `ChatInputPosition` export. Input placement belongs to the
engine investigation; the history labels above do not establish the input
line's geometry or editor behavior. No source files, vendored files,
commits, or runtime processes were changed in this scope.
