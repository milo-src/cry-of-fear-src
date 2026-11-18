# Original VGUI resources, schemes and localization

This scope reads installed resource files only; original DLLs were not run.
`tools/inspect_vgui_assets.py` inventories 51 KeyValues/localization files,
three schemes, nine option-layout resources, six localization files and 56
shared art/font files. `resources.json` retains hashes, original property
strings, source line numbers, duplicate order and font variants. The generated
`resource-controls.md` lists every option control, including hidden controls.
The inspected art contact sheet is ignored at
`analysis/local/vgui-assets/resources.png`.

## Scheme selection is a native-code question

Three different schemes exist. These are not interchangeable:

| Resource | SHA-256 | Distinction |
|---|---|---|
| `cryoffear/resource/trackerscheme.res` | `b20ab05dbe99df111e1a76392c54829c285de5f40b1c501f9e1245c9e4c4aa24` | Gray/translucent CoF GameUI values |
| `cryoffear/resource/clientscheme.res` | `6a90c78621c5b2cf2c80cfc09e6870c27b8c7e4327f8f3ef75580b434306bd82` | Different green theme, conspicuous green border colors |
| `platform/resource/TrackerScheme.res` | `889ad216f435c24a25b405e3103d950bbcbc3246747b8d05a239cb496551c0de` | Platform fallback candidate with different fonts/colors |

None of these files contains an explicit `#base` declaration. Symbolic color
and border aliases are present *within* each scheme. Native scheme loading,
game search-path precedence, and per-control scheme choice must establish any
cross-file fallback. The parser does not invent inheritance.

## Gray CoF tracker scheme values

The table resolves symbolic references within the game tracker scheme:

| Role | RGBA |
|---|---|
| Default `FgColor` / `ControlText` | 90 90 90 200 |
| Default `BgColor`, panel/control background | 40 40 40 128 |
| Text-entry foreground `WindowFgColor` / `BaseText` | 90 90 90 220 |
| Text-entry background `WindowBG` | 40 40 40 150 |
| Disabled foreground layer 1 | 236 236 236 155 |
| Disabled foreground layer 2 | 148 148 148 155 |
| Active title text | 255 255 255 255 |
| Inactive title text | 125 125 125 255 |
| Active/inactive title background | 206 206 206 0 |
| Selected text | 90 90 90 255 |
| Selection background | 224 156 48 160 |
| Unfocused selection background | 164 164 164 255 |
| List / scrollbar dark background | 40 40 40 200 |
| Border bright / dark | 236 236 236 255 / 112 112 112 255 |
| Default-button selection border | 0 0 0 255 |
| Slider tick / track | 206 206 206 255 / 56 56 56 255 |
| Checkbox check | 90 90 90 220 |

The generic `ButtonArmedFgColor`, `ButtonArmedBgColor`,
`ButtonDepressedFgColor`, and `ButtonDepressedBgColor` entries are **commented
out**. The native fallback was then recovered from `GameUI.dll` function
`100597f0` through REA/Ghidra, saved in
`analysis/local/ui-button-scheme/000-pseudocode.c` (Evidence
`ev_3a6f9b70898822f3b967c991aefccf1f655ec982a391a76dd14a8cfc288f21d4`,
GameUI SHA-256 `9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198`):
normal `ButtonFgColor` and
`ButtonBgColor` fall back to the inherited panel foreground/background;
armed and depressed foreground/background each fall back to those **same
normal colors**. Therefore these generic buttons do not gain a brighter color
merely from hovering. Borders/insets/focus differentiate the states. The
function also loads `ButtonBorder`, `ButtonDepressedBorder`, and
`ButtonKeyFocusBorder`; `ButtonFocusBorder` color defaults to opaque black.
The immutable GameUI snapshot hash was verified unchanged, and its private
REA session closed after exporting complete evidence.
The white/yellow `InGameDesktop` action colors belong to the main game menu;
they are not evidence for ordinary dialog button states.

Nested `BaseSettings/Menu` explicitly uses normal text `DimBaseText`, armed
text `BrightBaseText`, armed background `SelectionBG`, and text inset 6.
`MenuButton` (combobox arrow) explicitly uses normal arrow `DimBaseText`,
background `WindowBG`, armed arrow `BorderBright`, armed background
`DimBaseText`. Sliders and scrollbar handles use `ControlBG` over
`ControlDarkBG`.

## Borders and fonts

`ButtonBorder`, `FrameBorder`, `TabBorder`, `MenuBorder` alias `RaisedBorder`.
`BaseBorder`, `ComboBoxBorder`, `BrowserBorder` alias `InsetBorder`. The raised
border uses bright top/left and dark bottom/right; inset reverses those sides.
Their declared inset is `0 0 1 1`. Exact edge offsets are retained in the JSON,
including asymmetrical corners. `ButtonDepressedBorder` declares inset
`2 1 1 1`; `ButtonKeyFocusBorder` adds a black outer line and bright/dark inner
lines. These offsets should be consumed as data rather than replaced with a
generic modern rounded rectangle.

Game tracker fonts (literal definitions, before native proportional/language
selection):

| Name | Typeface | Tall | Weight / flags |
|---|---|---|---|
| Default / DefaultUnderline | Tahoma | 16 | 0; underline only in latter |
| DefaultSmall | Tahoma | 13 | 0 |
| DefaultVerySmall | Tahoma | 12 | 0 |
| MenuLarge | Tahoma | 18 | 1000 then 800 fallback; antialias 1 |
| Marlett | Marlett | 14 | 0, symbol 1 |
| EngineFont | Verdana | 12 / 13 / 14 / 20 / 24 | weight 0, drop shadow 1 |

EngineFont variants select yres ranges `480..599`, `600..767`, `768..1023`,
`1024..1199`, `1200..6000`; two further fallbacks are Verdana12 weight600 and
Verdana11 weight800, with shadows. Platform EngineFont uses weight600 for
all its ranges. A console's chosen font requires native evidence; the name
EngineFont does not establish that selection. Default does not declare
antialias, shadow, or bold. The earlier main-menu native font investigation
proved positive Windows cell height without MainUI's +6 adjustment; do not
reuse the bold MenuLarge font for all dialogs.

## Layout and localization observations

The shipped page files are `OptionsSubKeyboard`, `Mouse`, `Audio`, `Video`,
`Voice`, `Multiplayer`, `Advanced`, plus an extra `OptionsSubVideoo.res`.
Resource presence does not prove that the extra Videoo page is used. The
Advanced page's two content-lock controls are both hidden (`visible=0`).
The Audio page hides the Suit Slider. The Video resource disables the aspect
ratio selector. Native constructors can change these states.

`DialogOptionsIngame.res` declares an 824x736 Frame, a BuildModeDialog, and
an unresolved `#GameUI_InfoText`. It is not sufficient evidence for the actual
options window size. No `*console*.res` file was found in the installed tree;
console geometry/control creation is therefore delegated to native recovery.

This installation's English-named GameUI and VGUI files contain Russian
strings. Preserve the installed data rather than translating labels anew:

| Token | Installed text |
|---|---|
| GameUI_Options | Настройки |
| GameUI_Keyboard | Клавиатура |
| GameUI_Mouse | Мышь |
| GameUI_Audio | Звук |
| GameUI_Video | Графика |
| GameUI_Voice | Голос |
| GameUI_Multiplayer | Мультиплеер |
| GameUI_Advanced | Замок |
| GameUI_Console | Консоль |
| GameUI_Submit | Подтвердить |
| GameUI_OK / PropertyDialog_OK | OK |
| GameUI_Cancel / PropertyDialog_Cancel | Отмена |
| GameUI_Apply / PropertyDialog_Apply | Применить |
| GameUI_Close | Закрыть |

Case-insensitive lookup resolves resource `#GameUI_LOW/HIGH` to
`GameUI_Low/High`. `#GameUI_InfoText` and `#GameUI_DetailTextures` were not
found in the six inspected locale files. Localized strings can contain
literal `\n` sequences; the resource parser preserves unknown escapes for the
localization/rendering layer rather than silently altering their meaning.

The platform resource directory supplies shared close/check/radio/dropdown/
resize icons that are absent from the game resource directory. Their presence
does not prove which native controls use bitmaps rather than Marlett glyphs.
Dimensions and hashes are recorded; no generated replacement art was used.

## Source-owned parser and verification

`src/cof/vgui/resource.h/.cpp` is an engine-independent C++11 implementation.
`ParseKeyValues` keeps ordered duplicate keys, sections, conditions and source
lines. `DecodeResource` supports UTF-8 BOM and UTF-16 LE/BE including surrogate
pairs. `ResourceBody` unwraps a single named root. `KeyValue::Find` and scheme
lookups are case-insensitive; string values retain symbolic coordinates and
localization tokens. `Scheme` resolves Colors/BaseSettings and border aliases
with a bounded cycle guard; font variant selection belongs to the host UI.
The optional fallback scheme must be supplied explicitly by the caller.

Standalone tests build through Waf (`tests/cof/vgui/wscript`), exercise malformed
input, Unicode, duplicate keys, alias cycles, nested settings and explicit
fallbacks, then parse the same 51 original files as the Python inventory.
Both passes succeeded. No game runtime or original DLL was launched for this
scope. Generic button color fallback is established by the separate static
native evidence above. Remaining native state rules and final dialog visual
verification are separate work, not claims of this asset inventory.
