# CoF VGUI: original binary evidence

Target: installed `cryoffear/cl_dlls/client.dll`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Addresses use preferred PE base `0x10000000`. REA 6.9.0 / Ghidra 12.1.4,
private MCP process. The original DLL was **not executed**. This is static
recovery of the installed build, not a claim of runtime equivalence.

## Separate interface layers

The client's VGUI1 panels and the engine's GameUI menu are different systems.
`resource/GameMenu.res` defines the engine 2D menu: ResumeGame, `engine beginspgame`,
`engine map c_loadgame`, `engine to3dmenu`, `engine returnmenu`,
`engine unlockablescmd`, OpenServerBrowser, OpenCreateMultiplayerGameDialog,
OpenOptionsDialog, Quit. Resume and returnmenu have OnlyInGame=1. The resource
also labels join/create with notsingle=1. Client CGameMenu is the textured menu
drawn over the menu BSP. It does not implement engine Options itself: it sends
`optionshack` server commands. A port of these APIs to Xash must retain this
distinction and cannot claim that generic Xash option dialogs are recovered CoF
VGUI layouts merely because commands work.

## Evidence captures

Raw Evidence bundles, hash verification, pseudocode and tool requests are in:

- `analysis/local/vgui-menu-first`: constructor 1002c390, action router
  1002d8d0, GameMenu message 1002e000, solve 1002eeb0, SaveLoad action router
  100314a0, Difficulty constructor 1003f850.
- `analysis/local/vgui-menu-second`: normal image position reset 1002ea30,
  Difficulty wrapper10040580 and setVisible10040590, SaveLoad wrapper100327c0
  and metadata refresh10031df0.
- `analysis/local/vgui-menu-static`: RTTI/vtables and scoped assembly generated
  by `tools/capture_vgui_menu.py`. The script verifies the pinned hash and does
  not execute the target.

## CGameMenu drawing and interaction

Constructor1002c390 creates a full-screen panel. All image coordinates use
native pixels, without proportional resolution scaling. Let `(W,H)` be screen
size and `(w,h)` the dimensions of `gfx/vgui/menu/newgame.tga`. All ten hitboxes
have `(x,width,height)=(W/2-w/2,w,h)`.

| Top-to-bottom row | Image basename | y | Action ID | Dispatch |
|---|---|---|---|---|---|
| 0 | newgame | H-11h | 1 | Show CDifficulty, clear custom-campaign selection |
| 1 | loadgame | H-10h | 2 | Show CSaveLoad in load mode; freeze1024 |
| 2 | customc | H-9h | 3 | Hide main buttons; show campaign scroll list |
| 3 | jserver | H-8h | 4 | Server command `optionshack 0` |
| 4 | hserver | H-7h | 9 | Server command `optionshack 1` |
| 5 | language | H-6h | 6 | Show CLanguage |
| 6 | unlockables | H-5h | 7 | Show CUnlockables |
| 7 | extras | H-4h | 8 | Show CVGUIExtraMenu |
| 8 | options | H-3h | 5 | Server command `optionshack 2` |
| 9 | quit | H-2h | 10 | Hide menu, client command `quit` |

`gfx/vgui/menu_logo.tga` is centered horizontally at y=H/2-3*logoHeight.
`menu_logo_ts.tga` is anchored 15px from the right and bottom edges.
The per-frame solve1002eeb0 randomizes main-logo VGUI transparency 0..50.
On entry to a hovered button it changes to `<basename>_mo.tga`, plays
`ui/3d_rollover.wav` volume0.5 and stores the base image position. While hovered
the **image**, not hitbox, jitters horizontally by random integer[-3,+3]. On
exit it restores the normal image and the complete fixed image layout through
1002ea30. Clicks changing local panels use `ui/3d_click.wav` volume0.5.

GameMenu user-message handler1002e000 is registered as `GameMenu` by1002eba0.
It resets ten hover flags and normal image assets, shows CGameMenu, updates
cursor state through100aaad0, and sends `freeze 1024`.

The campaign subpanel allocates256 text entries, each at (25,row*32,650,32).
Its cancel action11 restores main controls. Custom selection IDs50..79 route
to Difficulty with a record pointer; this bounds30 dispatchable campaign IDs
even though the UI allocation is256. Records are193bytes. The parser reads
`maps/*.custom`, with `firstmap`, `author`, `description`. Further parser
validation is separate from the confirmed button/router behavior.

## Difficulty panel

Constructor1003f850 centers `gfx/vgui/640_difficulty.tga` at
`(W/2-320,H/2-240)`. Relative hitboxes are:

| Action | x | y | width | height |
|---|---:|---:|---:|---:|
| Easy1 | 120 | 90 | 400 | 75 |
| Medium2 | 120 | 165 | 400 | 75 |
| Difficult3 | 120 | 240 | 400 | 75 |
| Nightmare4 | 120 | 315 | 400 | 75 |
| Cancel5 | 95 | 409 | 450 | 47 |

The original checkbox uses checked/unchecked.tga, text "Enable developer
commentary", reads `dev_commentary` and sits centered at y=H/2+250.
setVisible10040590 shows that checkbox only when unlock flags1018a3f8 have
bit0x400000. Nightmare is enabled only for bit0x20; otherwise its button is
hidden and `640_difficultylocked.tga` replaces the background. Those flags
are progression state, not arbitrary defaults to enable all game modes.

## Save/load panel

Action router100314a0 implements five slots, IDs2..6 and cancelID1. A first
click records now+0.5s in a per-slot timestamp; a second click before that time
executes the operation. Load mode is member+0x178=1. Loading tests
`SAVE/saveinfoN.cof` exists, hides the panel, sends `unfreeze 1024`, then
`cofload N`. Saving sends `unfreezesave 1024 N`, schedules a3.25s capture and
writes `saveinfoN.cof` through10032340. Metadata refresh10031df0 clears five
labels and refreshes each via10031e90.

Cancel depends on the current world: c_loadgame sends `closegame`; menu worlds
return to CGameMenu; difficulty/server/unlockables worlds map c_game_menu1 when
10542a68!=0 or disconnect otherwise; normal game unfreezes with `unfreeze666`.
This metadata format is not an Xash savefile. Mapping a port's own saves into
the recovered five-slot panel is an adaptation and requires separate validation.

## Complete custom-panel scope

RTTI contains31 game-specific panel types in the contiguous CoF interface
implementation, as opposed to SDK widgets and supporting ActionSignal classes.
The inventory below records **identified scope**, not completed reconstruction.
Constructor references and virtual functions are derived deterministically
from complete-object-locator/type-descriptor chains in the pinned binary.
Unlisted game features are not proven absent. Additional inherited SDK screens
include scoreboard, server browser, spectator, subtitles, team/class menus,
command menus and options helpers; engine GameUI dialogs reside elsewhere.

The generated per-panel address ledger follows below after scoped decompilation.


| Panel | Vtable | Constructor | Action handler | Custom virtuals  Message / route |
|---|---|---|---|---|---|
| CAmmoInventory | 1013fe48 | 1001d5e0 | 1001e420 | 1001ea70, 1001eba0  AmmoInv 1001e6a0 |
| CBookMenu | 10140570 | 1001ecb0 | 1001f060 | 1001f240  Not identified |
| CClothesMenu | 10140828 | 1001f2b0 | 1001f9d0 | Inherited  VGUIMenu/local route; no own hook identified |
| CCoopStats | 10140d4c | 10020e20 | None in ActionSignal RTTI | Inherited  CoopStats 100235b0; BeatCoop unresolved |
| CCredits | 101419e0 | 10026550 | None in ActionSignal RTTI | 100294c0  Credits 10026e70 |
| CCutsceneSkip | 1014282c | 1002a4d0 | None in ActionSignal RTTI | Inherited  SkipScene 10071880 (global side effect) |
| CDocuments | 10142a70 | 1002a8d0 | 1002afb0 | 1002b140  Not identified |
| CVGUIExtraMenu | 10142d3c | 1002b1f0 | 1002bcf0 | 1002be30, 1002be60  Local main action8 |
| CGameMenu | 10143200 | 1002c390 | 1002d8d0 | 1002ecf0, 1002eeb0  GameMenu 1002e000; VGUIMenu37 |
| CLanguage | 10143a64 | 1002f8c0 | 1002fdc0 | Inherited  VGUIMenu36 |
| CPadlock | 10143d90 | 100304c0 | 100308b0 | Inherited  Padlock 10030960 |
| CSaveLoad | 10144048 | 100309e0 | 100314a0 | 100327d0  SaveLoad 10031c10 |
| CScope | 101444e4 | 100327e0 | None in ActionSignal RTTI | Inherited  Scope 10032bf0 |
| CTelephone | 10144738 | 10032ce0 | 100335f0 | 10033b50, 10033aa0  Telephone 100338a0 |
| CTVFrame | 10144a64 | 10033c00 | None in ActionSignal RTTI | Inherited  TVFrame 10033c70 |
| CUnlockables | 10144c6c | 10033cc0 | 10035950 | 10035b60, 10035e10  VGUIMenu188; Unlocks 10071a00 (state) |
| CHUDControl | 101452cc | 100362b0 | None in ActionSignal RTTI | 1003bf20, 1003bf00, 1003bc10  Multiple HUD hooks; not mapped exhaustively |
| CAnimalStatue | 10146900 | 1003d300 | 1003d850 | Inherited  Statue 1003d9e0 |
| CVGUIBillboard | 10146c1c | 1003dbd0 | None in ActionSignal RTTI | 1003e350, 1003e340, 1003e210  Board 1003e0b0 |
| CBossBar | 10146ea8 | 1003e360 | None in ActionSignal RTTI | 1003e7f0  BossBar 1003e610 |
| CComputer | 10147168 | 1003e870 | 1003eef0 | 1003f3a0, 1003f4b0  Computer 1003f070 |
| CDifficulty | 10147538 | 1003f850 | 10040280 | 10040590  VGUIMenu32 |
| CGameOver | 10147850 | 10040620 | 10040b40 | 10040e60, 10040f10  VGUIMenu35; CustomDoc 10040de0 |
| CRECBInventory | 10147bcc | 10041140 | 10043130 | 10044ef0, 100451f0, 1000e320, 1000e270, 1000df90, 1000dd50, 1000e2d0, 1000e290  VGUIMenu close222; QSlotClear100441a0/QSlotUpdate100443c0/InventChck10044160 |
| CKeypad | 10148000 | 10045710 | 10046230 | 10046ac0  Keypad 10046680 |
| CNoteDocument | 101483c4 | 10046ad0 | 100470b0 | 10049030, 10049020, 10048f10, 1000e270, 1000df90, 1000dd50, 1000e2d0, 1000e290  NoteDoc 10047550 |
| CPhone | 101486bc | 10049040 | 10049950 | 10049dd0  Phone 10049c90 |
| CPuzzleBar | 10148a14 | 10049de0 | 1004a1b0 | 1004a360  Puzzlebar 1004a2e0 |
| CSave | 10148cd0 | 1004a370 | 1004a5e0 | Inherited  Save 1004a6b0 |
| CUserDocument | 10148f34 | 1004a730 | 1004aa80 | 1004af80, 1004af70, 1004adf0, 1000e270, 1000df90, 1000dd50, 1000e2d0, 1000e290  UserDoc 1004ac60 |
| CYesno | 101492c4 | 1004af90 | 1004b210 | Inherited  YesNo 1004b460 |

All constructors and listed ActionSignal forwarding methods were recovered in
`vgui-menu-panels` (57 successful queries); concrete action handlers and custom
virtuals are in `vgui-menu-actions` (64 successful queries). Unreviewed layout
details remain available in those captures; they are not all implemented.

## Secondary menus and port implementation

`secondary_menus.cpp` reconstructs the following confirmed behavior:

- Extras1002b1f0 is an800x600 centered parent. Six600x92 images are placed at
  x100/y0,92,184,276,368,460. The280x38 Cancel is at260,562. Solve1002be60
  switches each image to `_mo` and plays rollover at volume1.0 without jitter.
  Action1002bcf0 invokes the six fixed URLs through SteamFriends' overlay;
  this port uses the source-built menu module's `cof_openextra1..6` whitelist
  and OS browser instead. No links are opened during automated testing.
- Language1002f8c0 uses the centered640x480 language_settings.tga. Seven
 158x117 hitboxes start at x83,241,399 and y64,181,298, with only the first
  column in the third row. Their row-major action IDs are1,7,5,2,3,4,6.
  Action1002fdc0 sends `subtitleset N`, closes the panel and returns to the
  menu. It chooses story subtitle language; it does not translate VGUI art.
- Unlockables10033cc0 uses centered800x600 unlockables_menu.tga and21
 90x90 cells at x85+90*column,y139+90*row, seven columns/three rows. Cancel
  is304,503,192,54 (assembly10033ed4 confirms height54). Text label is
 126,428,549,47. Lock overlays are90x90 unlockables_locked.tga. Visibility
 10035b60 tests masks `[1f,20,400000,80000000,1000000,800000,40,80000,
 100000,200000,80,100,200,400,800,1000,2000,4000,8000,10000,20000]` in hex.
  Hover10035e10 chooses a description or a common locked string. The port
  preserves the installed CP1251 description bytes. Action10035950 only
  activates cell1(costume selector) or cell4(map c_doc_city); remaining
  cells are informational. Unlock persistence and costume selection are not
  implemented; flags come from Unlocks messages and default to0.
- Campaign listing1002e6c0 searches gameDirectory/maps/*.custom through
  FindFirstFileA/FindNextFileA. The recovered viewport is700x525 centered at
  (-350,-262), rows650x32 at x25. The port uses a bounded parser and scrolls
  sixteen full rows, avoiding partial clipping and the original nonsensical
  negative slider-height parameter. This scrollbar/input behavior is an
  explicit adaptation. A selected campaign sends its validated firstmap to
  Difficulty; only the original first30 action IDs are accepted.

The SaveLoad constructor100309e0 centers640x480 save_load.tga. Five455x29
rows at x93,y154/190/226/262/296 and Cancel260,398,119,43 are recovered.
`save_load_menu.cpp` uses that layout and original half-second double-click
window, backed by the port's `save/cof_slotN.sav` and filesystem timestamps.
It does not load original engine saves or substitute them for source-built
runtime state. Original `.cof` metadata and original save format remain
separate unrecovered compatibility work.

`ui_font.cpp` uses the installed640_credits bitmap font: a4864x22 strip of
256 nineteen-pixel glyph cells and a768-byte `.chw` file with signedA,
unsignedB,signedC advances. The inspected1024 asset has the same dimensions. Original alpha is all zero and glyph
coverage is stored in RGB. `ui_draw.cpp` adapts only that exact font path,
checks the32-bit TGA header/dimensions, decodes type10 RLE (or type2 raw)
packets with strict bounds, and turns RGB coverage into
texture alpha in an in-memory copy, and leaves original assets untouched.
This is renderer format adaptation, not recovered original VGUI rendering
code. Literal UI additions for port save metadata/empty campaign state remain
English; original unlock descriptions and supplied art retain localization.

The credits font selection is confirmed by CGameMenu constructor1002c6b3
and CUnlockables constructor10033def passing string10140cd0 (`credits`) to
font lookup1009d3a0. CSaveLoad does not select a font explicitly in its
constructor; using credits for the port's own save metadata is an adaptation.
Save mode is available through CofSaveMenuOpen, using the same five slots
and original double-click interval; it writes source-built Xash saves.

Additional captures: `vgui-menu-panels` (57 constructor/handler queries),
`vgui-menu-actions` (64 action/solve/parser queries), `vgui-menu-messages`
(26 successful handler queries; BeatCoop10023590 was not a recognized
procedure and is not claimed recovered), and `vgui-menu-protocol` (four
real handler bodies behind wrappers). All preserve target hashes.

Unlocks wrapper1006ebf0 forwards to10071a00, which consumes one READ_LONG
into HUD member+0x338; the original server's two trailing bytes are ignored
by this client handler. VGUIMenu100aa170 reads BYTE menuID and BYTE context
(global105593c4), then routes through100aa7f0. ID4 additionally consumes a
string copied to a64-byte buffer. Special routes200 and222 hide viewport
menus;222 additionally checks inventory visibility and plays its close sound.

VGUIMenu dispatcher100aa7f0 confirms32=Difficulty,35=GameOver,
36=Language,37=GameMenu. The wrapper100aa170 special-cases188=Unlockables.
Mapping uses viewport members1440/1474/1478/1468/1490, cross-checked against
panel message handlers and CGameMenu local actions. Unknown IDs are not
silently treated as an unrelated panel. Capture: `vgui-menu-routing`.

Font verification compiled the exact source decoder block into a standalone
harness and compared its complete decoded alpha plane with Pillow's red
plane for the original file. They match pixel-for-pixel, range0..255. A local
preview checks upright glyph orientation, A/B/C spacing and blank spaces.
The atlas stores a replacement glyph in the space cell; the port advances
space without drawing. Runtime rendering still needs separate verification.
Reproducible static inventory now uses `vgui-menu-static-final`, including
correct SaveLoad constructor range, font lookup assembly and message readers.

CHUDControl registrations in `message-hooks.json` include Stamina, CoFLogo,
ShowHint, CameraZoom, HealthCap, Chapter, ControlHint, Timer, Lobby, MPModel,
HoldBreath, DevDonator, Introdn, LookingAt, TimerPlus and SimonMode. Their
registration addresses are captured, but their message bodies are not yet
reviewed in this menu-specific pass.

## Reviewed message payloads

B=unsigned BYTE, S=signed SHORT, L=LONG, Z=NUL-terminated string. The layout
below is what the client consumes, and does not require absent trailing
server fields to be invented. Optional fields follow the stated condition.

| Message | Payload | Observed behavior |
|---|---|---|
| Unlocks | L | Store unlock bitmask; server tail ignored by handler |
| VGUIMenu | B id, B context; Z for id4 | Route panel; context retained globally |
| GameMenu | No fields consumed | Reset main buttons, show menu, freeze1024 |
| SaveLoad | B mode; Z only if mode0 | Mode0 save metadata label, mode1 load; show/freeze |
| Padlock | B visible | Show/hide padlock |
| Telephone | B mode; Z if mode0/1 | Mode0 lowers receiver/hides, mode1 opens; other modes separate |
| Statue | B mode; Z if mode nonzero | Hide if0; otherwise load named puzzle image |
| Board | Z | Billboard image/message path; further behavior in handler |
| BossBar | B mode, Z image1, Z image2, S value, S maximum | Clamp value below0; mode1 show,0 hide |
| Computer | B loggedOn, B error1, B error2, B suppressSuccessSound, Z clue | Login art/errors/clue and sound updates |
| CustomDoc | Z | GameOver panel member+0xdc text/path |
| Keypad | B style, B state, B show | Style0/1/2 selects distinct background; show only if requested |
| Phone | B show | Opens on nonzero, does not implement hide for zero |
| Puzzlebar | B visible | Show/hide puzzle bar |
| Save | B visible | Show/hide recorder save prompt |
| UserDoc | B type, B number | Type1 userN/type2 passN art; opens VGUIMenu34 |
| YesNo | Z image, S context | Loads image then opens; context retained for actions |

NoteDoc ends by opening VGUIMenu31. UserDoc opens34. VGUIMenu166 closes
YesNo when visible; it is not an unrelated panel open request. More complex
Credits/CoopStats/NoteDoc schemas remain in raw captures for branch-specific
review. SkipScene10071880 consumes no payload and adjusts host_framerate
under game-state/map conditions; it should not be mislabeled a visibility byte.
