# Native ComboBox and ScrollBar controls

Static recovery from installed `cryoffear/cl_dlls/GameUI.dll`, SHA-256
`9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198`.
The original binary was not executed. REA/Ghidra queried immutable copies;
each capture exports complete evidence and verifies the original hash.
Resource colors below resolve within the installed game TrackerScheme,
whose inventory and hash are in `resources.md` / `resources.json`.

## Glyphs, not ordinary text or guessed triangles

| Control | Character supplied by native constructor | Font |
|---|---|---|
| ComboBox drop button | `u`, U+0075 | Marlett |
| Vertical scrollbar up | `t`, U+0074 | Marlett |
| Vertical scrollbar down | `u`, U+0075 | Marlett |
| Horizontal scrollbar left | `w`, U+0077 | Marlett |
| Horizontal scrollbar right | `4`, U+0034 | Marlett |

ComboBox constructor `1007b234` (call at `1007b330`) passes the string at
`100eb370`, bytes `75 00`, to drop-button constructor `1007b010`.
Scrollbar constructor `10079630` passes the strings at `100eb0f0`,
`100eb0f4`, `100eb0f8`, `100eb0fc` to button constructor `1007a060`.
This path does not load `icon_down.tga` or draw the Latin letter `v`.
The game scheme declares Marlett, tall 14, weight 0, symbol 1. Its native
font metrics must be used; substituting Tahoma text changes the glyph.

## ComboBox drop button appearance

REA capture `analysis/local/ui-scroll-arrows/000-pseudocode.c`, native
ApplyScheme `1007b055`, calls generic Button ApplyScheme and then overrides:

- Font: scheme `Marlett`, proportional flag inherited from the panel.
- Text alignment 3 (west), text inset `(3, 0)`.
- Normal border: `ScrollBarButtonBorder`.
- Normal foreground: `MenuButton/ButtonArrowColor` = `DimBaseText` =
  RGBA `90 90 90 200`.
- Armed and depressed foreground: `MenuButton/ArmedArrowColor` =
  `BorderBright` = `236 236 236 255`.
- Background in **all three** states: `MenuButton/ButtonBgColor` =
  `WindowBG` = `40 40 40 150`.

The resource also contains `MenuButton/ArmedBgColor`, but this native
method does not read it. Using that value for hover would contradict the
binary. Generic Button's depressed border remains inherited.
ComboBox ApplyScheme `1007bbf2` delegates TextEntry scheme processing and
sets its outer border to `ComboBoxBorder` (InsetBorder).

PerformLayout `1007b905` puts the arrow at `(W-H+4, 2, H-2, H-2)` for
the ComboBox's current width/height. Bounds are `(x,y,width,height)`.
The unusual right-edge offset is literal native behavior, not a typo.
The fourth argument is missing from Ghidra's incorrectly inferred
`CSliderCtrl::SetRange` prototype; bounded assembly confirms all four
pushes to the actual panel SetBounds helper `1005e17f`.

## Scrollbar buttons and thumb appearance

REA `ui-scroll-arrows/001-pseudocode.c`, ApplyScheme `1007a0f0`:

- Marlett, alignment 4 (center).
- `ScrollBarButtonBorder`, and `ScrollBarButtonDepressedBorder` on press.
- Normal foreground `DimBaseText`; normal background is current inherited
  panel background.
- Armed/depressed foreground and background are the inherited panel
  foreground/background. This is different from ComboBox's bright arrow.
- Vertical constructor gives up text inset `(1, 1)`, down `(1, -1)`;
  horizontal buttons both use `(1, 0)`.

ScrollbarSlider ApplyScheme `100a87d4` (`ui-scroll-arrows/002-pseudocode.c`):
foreground `ScrollBarSlider/ScrollBarSliderFgColor` = `ControlBG` =
`40 40 40 128`; background `ScrollBarSlider/ScrollBarSliderBgColor` =
`ControlDarkBG` = `40 40 40 200`; thumb border is `ButtonBorder`.
Scrollbar parent ApplyScheme `100798c8` looks up `ScrollBar/BgColor`.
Do not confuse this with the separately declared `ScrollBarSlider/BgColor`.

The scheme border definitions, including corner offsets, are retained in
`resources.json`. `ScrollBarButtonBorder` declares inset `1 0 0 0`, bright
left/top and dark right/bottom. Its depressed counterpart declares
`2 2 0 0`, dark left/top and bright right/bottom.

Scrollbar PerformLayout `10079999` uses these exact child bounds:

| Orientation | Slider track | First button | Second button |
|---|---|---|---|
| Vertical | `(0,W,W,H-2W+1)` | `(0,0,W-1,W)` | `(0,H-W,W-1,W)` |
| Horizontal | `(H,-1,W-2H+1,H+1)` | `(0,0,H,H)` | `(W-H,0,H,H)` |

The track's border is reset to null by PerformLayout; its own paint method
draws the thumb using the separately held `ButtonBorder`. Evidence is
`ui-scroll-geometry/001-pseudocode.c` and bounded assembly because the
same incorrect SetBounds prototype drops height arguments here too.

Slider `100a83e2` calculates its thumb in floats. Let `total=max-min`,
`fraction=(value-min)/(total-pageSize)`. For a vertical track,
`length=trackHeight-1`, `thickness=trackWidth`; for a horizontal track,
`length=trackWidth`, `thickness=trackHeight-1`. When pageSize is positive:

```
thumbLength = max(thickness, length * pageSize / max(total, 1))
beginFloat = (length - thumbLength) * fraction
begin = trunc(beginFloat)
end = trunc(beginFloat + thumbLength)
if end > length:
    begin = trunc(length - thumbLength)
    end = trunc(length)
```

Paint `100a8860` draws a thumb only when `total>0 && pageSize<total`.
For vertical scrolling its fill and border endpoints are
`(0,begin,trackWidth-1,end)`. Horizontal fill endpoints are
`(begin,0,end,trackHeight)` and border endpoints
`(begin-1,1,end,trackHeight)`. Float calculations were checked against
bounded x87 assembly because Ghidra leaves `__ftol()` inputs implicit.
Evidence: `analysis/local/ui-scroll-thumb/001-pseudocode.c`,
`002-pseudocode.c`, and `thumb-calculation.asm`.

Scrollbar Think `10079d8b` tracks held arrow buttons, with a 400 ms initial
delay and 50 ms repeat interval. It resets the next-repeat time when neither
arrow is held. A functional reconstruction needs thumb dragging and track
paging in addition to arrow actions.

Mouse-press handler `100a8ab2` converts the pointer to local coordinates.
Pressing before the thumb subtracts rangeWindow/pageSize; pressing at or
after its end adds pageSize. Pressing within `[begin,end)` sets the dragging
flag, captures the mouse, and stores the original thumb endpoints and
pointer position. Release `100a8cf8` clears dragging and releases capture.
These are directly recovered behaviors, not inferred modern scrollbar
conventions. See `ui-scroll-owner-input/002-pseudocode.c` and
`003-pseudocode.c`. The inverse thumb-to-value helper `100a8540` is also
captured there; its floating-point rounding needs assembly care if used for
pixel-identical dragging.

## Advanced options owner

The native multiplayer Advanced dialog constructor `1004c640` creates
`CPanelListPanel`, loads `user.scr`, and loads
`Resource/MultiplayerAdvancedPage.res`. The resource puts its PanelListPanel
at `(10,80)`, size `485x232`; the title art is `(50,5)`, `400x70`,
`resource/menu_advoptions`. It does not declare separate up/down text buttons.
This is distinct from `OptionsSubAdvanced.res`, which only declares two
hidden content-lock controls.

PanelListPanel constructor `10046f72` creates a true vertical `ScrollBar`
named `CPanelListPanelVScroll`, with initial width 20. The Advanced owner
uses the ordinary arrow order (the constructor's reversed-buttons flag
is false). Evidence: `analysis/local/ui-scroll-thumb/000-pseudocode.c`.

The **final** width is 18, not the constructor's initial 20.
PanelListPanel PerformLayout `100474ad` sets scrollbar position
`(W-20, topInset)` and size `(18, H-2-topInset)`; topInset is its field
`+0x90`, initialized to zero. For the installed resource this gives
dialog-relative scrollbar bounds **`(475,80,18,230)`**. It enables/shows
the scrollbar, clears its border, and configures:

```
range minimum = 0
range maximum = totalRowsHeight - panelHeight + 24
range window = 24
button step = 24
```

Thus effective maximum scrolling offset is `totalRowsHeight-panelHeight`.
These are pixel offsets, not row indices; the native window setting is
literally 24, not the viewport's 232-pixel height. Each row keeps its current
height and is laid out at `(8,cumulativeRowHeight,W-36,rowHeight)` in the
embedded content panel. The embedded panel itself is positioned at
`(0,-scrollValue)` and sized `(W-20,totalRowsHeight)`. In dialog coordinates
the rows start at x18 and have width449. The resource viewport clips them.
Evidence: `analysis/local/ui-scroll-owner-input/000-pseudocode.c` and
`owner-bounds.asm`; four-argument SetBounds again requires the assembly
check. A fixed 8-of-22 row selector is a port adaptation, not this recovered
pixel-scrolling behavior.

## Reconstruction and validation

`src/cof/vgui/ui.cpp` now uses Marlett for combo/scrollbar arrows, the recovered
scheme colors and borders, and draggable scrollbar thumbs. `options.cpp` uses
the recovered Advanced scrollbar bounds, pixel offsets and 24px step. Rows are
clipped for painting and hit testing. Native row heights/label field widths
still follow the earlier reconstruction; this is not a claim of complete VGUI
pixel identity or completion of the advanced rendering features.

The source engine integration synchronizes the pointer before mouse-button
hit testing and dispatches the physical grave key before client panels, chat,
cinematic and text-entry handlers. Its associated SDL text event is consumed,
including Russian `ё`. This global-console policy is the user's requested
behavior, not a newly established claim about original GameUI.

`tools/smoke_ui_pointer.ps1` sends window mouse/key events through Windows/SDL,
checks the actual resulting dialog bounds and scrollbar value, and audits
loaded modules. At 1280x720 it passed options/console dragging, Advanced thumb
dragging, console key repeat/text suppression, return to settings, and console
opening over 3D menu, save panel, gameplay, inventory and chat. Report:
`analysis/local/pointer-1280x720.json` and adjacent log; screenshots are recorded
there. The harness uses fresh-log timestamps to avoid replaying a previous run.

The Waf build and runtime module audit pass. No original game DLL is a runtime
dependency. General options Apply/Cancel, bindings, console history/completion,
scroll wheel and visual captures are exercised by `tools/smoke_vgui.ps1`.

### Requested front-end transition

Opening settings or console on a front-end map now returns to the 2D root
first, then opens the requested dialog. Closing it leaves that root visible.
Bridge API v3 includes a read-only menu-map query (game_menu family,
c_loadgame, c_difficulty_settings); ordinary gameplay/pause maps are preserved.
The existing `returnmenu` command queues teardown and the 2D root, so a deferred
continuation appends the dialog-open command after both. This ordering avoids
disconnect hiding a dialog opened prematurely.

`tools/smoke_ui_pointer.ps1 -TransitionsOnly` verifies both routes and both
close paths, reloads 3D between them, then verifies that settings/console and
inventory/chat console access keep an ordinary gameplay map loaded. It uses
Windows key events without moving the user's pointer. Results are saved in
`analysis/local/menu-transitions-1280x720.json` and its log.
