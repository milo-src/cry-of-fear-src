# Shipped menu asset evidence

Reproduce with `python tools/inspect_menu_assets.py`. This inspects loose files under the installed `cryoffear` directory; it never executes original game code. Machine-readable hashes, original entity key/value pairs with entity-lump byte spans, model sequence metadata, and image dimensions are in `assets.json`. The installation includes a Russian localization, including image text; these assets are not evidence for the unmodified English release.

## 3D menu map

`maps/c_game_menu1.bsp` contains 127 entities and 37 textures. All 37 textures have embedded mip data; the historical absolute WAD paths in worldspawn are not necessary for this map's textures.

- Player start: `(-3742, -256, -205)`, angles `(0, 0, 0)`.
- `cof_gamemenu` marker: `(-3526, -515, -63)`.
- `trigger_once` model `*57` fires target `multimenu`, which names **two** multi_managers. Both records matter.
- Main `trigger_camera`, targetname `kamera`: origin `(-3655, -265, -78)`, focus target `fokuses` at `(-1934, -110, 109)`, speed `5`, acceleration/deceleration `500`, wait `666`, spawnflags `84`, moveto `stop1s`.
- Camera path: `stop1s (-3621,-197,-62)` → `stop2s (-3648,-264,-77)` → `stop3s (-3599,-369,-57)` → `stop1s`. Last node has spawnflags `1`.
- A second camera `kameayao2` at `(-1994,1976,97)` focuses on `fokusyao (-1734,1842,104)`, wait `40`, speed `30`, spawnflags `116`. No literal target reference to this camera is in the map's multi_managers.
- Four trains represent two solid trains and two additive overlays. Solid `togasso` uses brush `*26`, origin `(-1851,1106,78)`, speed `400`, path `stop1`; solid `2togasso` uses `*64`, origin `(-1667,1107,78)`, speed `400`, path `2stop1`. Additive overlays are `togasso2 *65` and `2togasso2 *66`, render mode `5`, amount `100`.
- Main multimanager: starts camera, fade and music at `0`; toggles first train at `14`, overlay `14.01`; crow1 at `17`, crow2 at `17.7`; second train at `32`, overlay `32.01`; first train and overlay again at `84` and `85`.
- Second multimanager: `blacknwhite` and `toglampor2` at `0`, `togljud_m1` at `14`, `togljud_m2` and `toglampor2` at `32`, `togljud_m1` at `84`.
- `env_fade menufade`: black, opacity `255`, duration `5`, hold `1`, flags `1`.
- `cof_blackandwhite blacknwhite`: iuser1 `190`. Meaning of this field requires original code evidence; do not assume a normalized percentage from this asset alone.
- Rain: `rain_modify` has `800` drips/second and wind/random X/Y all `80`; `rain_settings` mode `1`, distance `1000`.
- Music: `ambient_fmodstream menumusic` message `gamestartup.mp3`, flags `2`; resource is `mp3/gamestartup.mp3`. Looping ambience is `sound/ambience/menu_ambience.wav`; train sounds `train_long_pass1.wav`/`train_long_pass2.wav`.
- Four env_models: buildings at `(-1702,2068,43)` yaw `-45`; two crows at `(-3242,-331,-154)` yaw `-174` and `(-3021,-220,-154)` yaw `-146`; sky sphere at `(-2055,1710,-1060)` yaw `90`, renderfx `137`. Sky `envpos_world`/`envpos_sky` custom behavior requires separate code recovery.
- Crows model has sequence `idle1` index `0`, 101 frames at 30 fps, looping; `action1` index `1`, 101 frames at 20 fps, nonlooping. Map env_models specify on sequence `idle1`, off sequence `action1`; avoid substituting a permanent static crow.

These keyvalues establish scene inputs, not that a stock HLSDK reproduces custom CoF camera flags, rain, sky, postprocessing, dynamic lights or model parenting. Original code is required for those semantics.

## 2D menu

`resource/GameMenu.res` establishes the ordered actions:

| Label token | Command | Visibility |
| --- | --- | --- |
| COF_ResumeGame | ResumeGame | OnlyInGame |
| COF_NewGame | engine beginspgame | all |
| COF_LoadGame | engine map c_loadgame | all |
| COF_3DMenu | engine to3dmenu | all |
| COF_2DMenu | engine returnmenu | OnlyInGame |
| COF_Unlockables | engine unlockablescmd | all |
| COF_JoinCoop | OpenServerBrowser | notsingle |
| COF_CreateCoop | OpenCreateMultiplayerGameDialog | notsingle |
| GameUI_GameMenu_Options | OpenOptionsDialog | all |
| GameUI_GameMenu_Quit | Quit | all |

`resource/BackgroundLayout.txt` declares a 1024×768 canvas and twelve 256×256 `resource/background/1024_{row}_{column}_loaded.tga` tiles at x `0,256,512,768` and y `0,256,512`, all `scaled`. The reconstructed contact image was visually inspected: a dark blurred station scene. This is distinct from `gfx/vgui/backgroundtoall.TGA`, an 800×600 rust texture used by other panels.

`resource/trackerscheme.res` InGameDesktop: menu color `(200,200,200,255)`, armed white, depressed `(192,186,80,255)`, item visibility rate `0.03`, item height `28`, menu inset `32`. MenuLarge font is Tahoma 18, weight 1000 then fallback weight 800, antialiased. These resource values do not by themselves establish all hardcoded GameUI layout rules.

`resource/gameui_english.txt` contains Russian labels and is **UTF-16LE with BOM**, despite the filename. `COF_3DMenu` reads `3D-меню / Кампании`; `COF_2DMenu` reads `2D-меню / Мультиплеер`.

Additional REA/Ghidra capture: `analysis/local/menu-assets/gameui-layout/`, seven native pseudocode queries on original `cl_dlls/GameUI.dll`, SHA-256 `9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198`. Capture verification records all queries successful, input unchanged, no target execution.

- `0x1003d1d7` places the game menu at `(inset, screenHeight - menuHeight - 64)`. This is pixel positioning, not the client overlay's XRES/YRES scaling.
- `0x1003db27` reads `InGameDesktop/GameMenuInset` into object offset `0xbc`.
- `0x1003f300` applies `InGameDesktop/MenuItemHeight` and `MenuItemVisibilityRate`.
- `0x1003f510` loads `MenuLarge`, all three menu colors, clears border/background, and sets zero text inset. It references `sound/UI/buttonrollover.wav`, `buttonclick.wav`, `buttonclickrelease.wav`.
- `0x1003fa90` filters `OnlyInGame`, `notmulti`, `notsingle`, `OnlyInCareerGame`, `NotInCareerGame`, `notsteam`. `notsingle` is hidden only while in an active singleplayer game; it remains visible disconnected. Career/Steam-specific resource flags do not occur in this install's GameMenu.res.
- `0x1005e0ab` and `0x100606d5` are VGUI panel-position and height wrappers used to substantiate the layout interpretation.

Reproduction command: `python tools/rea_ghidra.py "D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/GameUI.dll" ram:0x1003d1d7 ram:0x1003db27 ram:0x1003f300 ram:0x1003f5b0 ram:0x1003fa90 ram:0x1005e0ab ram:0x100606d5 --output analysis/local/menu-assets/gameui-layout-new`. The interior selector `0x1003f5b0` resolves to function entry `0x1003f510`.

## Source port

`src/cof/menu/Main.cpp` implements this 2D menu in the source-built MainUI host. `tools/prepare_engine.py` copies the vendored engine to `build/engine-source`, replaces Main.cpp there, and installs a test-frame callback and a dedicated `FONT_VGUI_EXACT` font path. Generic MainUI Unicode lookup uses `GetGlyphOutlineW`; the CoF menu instead follows the recovered VGUI2 ASCII-outline/non-ASCII-DIB split. `external/` remains unchanged.

The root order/visibility, menu font/colors, text alignment and installed background are recovered from the original. Root item reveal timing is reconstructed; complete original dialog behavior remains outside this adapter. Options, server browser and host dialog use MainUI's source implementations; this does **not** claim the original GameUI VGUI dialog internals are restored. Load routes to `c_loadgame`, where the reconstructed client owns its save menu.

The source engine and MainUI build with Waf. An isolated 1280×720 non-developer 2D startup test exited with code 0 and produced `out/runtime/_0009.png`, visually checked for Russian glyphs, original background/order and corrected native font metrics. The previous `_0004.png` used MainUI’s +6 height adjustment and was visibly oversized; it is not a fidelity reference. The test uses `COF_MENU2DTEST=1` and explicit `+menu_main` (also emitted by `run_game.py --2d`); it captures after four seconds and quits after five. The ordinary build has no automatic test behavior without an explicit test environment variable. The menu-DLL roundtrip fixture uses `COF_MENUTEST` and persists through disconnect/reconnect; the full task's runtime report records its results separately.

## Native button and font correction

Additional immutable GameUI REA bundles are `analysis/local/menu-assets/gameui-buttons` and `gameui-font-position`; all verification checks passed and source hash remained unchanged. `0x1003f4c0` constructs the GameMenuItem, `0x1005928e` stores activation type, `0x1005bcb0` stores alignment, and `0x1005b5b0` stores text insets. `0x100599da`/`0x10059a47`/`0x10059ab4` store normal/armed/depressed color pairs. Label geometry `0x1005b618` case 3 gives x=0 and y=(panelHeight-textImageHeight)/2. The proportional getter `0x10003180` reads byte +0x69; base panel initialization at `0x1005de7c` initializes it to zero.

The VGUI2 static font evidence is recorded by the font-analysis task under `analysis/local/menu-switch-vgui-font` and `menu-switch-vgui-font-detail`: `0x10027400` uses positive cell height, weight unchanged, `ANTIALIASED_QUALITY` (4) for antialias, no MainUI +6 adjustment. `0x100277b0` uses GetGlyphOutlineA for codepoints up to255; larger codepoints use ExtTextOutW into a top-down DIB. RGB coverage is retained and alpha uses 0.34/0.55/0.11 luminance, not a white RGB replacement. This route is now confined to the CoF menu font via the dedicated flag; generic MainUI dialogs retain their metrics. Original language-dependent font shrinking remains a separate concern: this installation stores Russian labels under the English token file, which does not establish an active Russian engine language.

The custom root action renderer avoids stock MainUI text clipping and draws at native font height with no border/background/drop shadow. Hover clears when the cursor leaves, depressed text is RGB192/186/80, release-inside activates, and the original buttonrollover/buttonclick/buttonclickrelease WAV files are used. Original root reveal timing is implemented as described below; exact popup/dialog keyboard behavior is not yet reconstructed.

## 3D menu overlays

`gfx/vgui/menu/` has 34 TGA files, normal/hover pairs. Main action artwork is 280×38; extras/advertising artwork is 600×92. `_mo` art renders red text; base art white text with a gray streak background. This is observed in the shipped pixels, not recreated typography.

- Main action pairs: newgame, loadgame, customc, unlockables, jserver, hserver, language, extras, options, quit, cancel.
- Extra pairs: aomdc, clothes, donate, facebook, soundtrack1, soundtrack2.
- Logo: `gfx/vgui/menu_logo.tga`, 512×66.
- Team logo: `gfx/vgui/menu_logo_ts.tga`, 120×102.
- Pointer: `gfx/vgui/mouse.tga`, 16×16.
- Difficulty art: `640_difficulty.tga` and `640_difficultylocked.tga`, 640×480. Four visible choices and a return-to-menu button; the locked variant replaces Nightmare text with a locked label.

Precise overlay positions, open/close transitions and mouse handling come from client DLL evidence, not texture dimensions.

## Load-game book

`maps/c_loadgame.bsp` has five entities and one embedded texture: worldspawn; player `(0,0,48)`; light; game_player_equip; cof_loadgame `(-16,0,128)`. No book model entity is present in this map, so its placement is code-driven.

`models/bookmenu.mdl` has eight sequences, all 31 frames at 30 fps, no loop flag: `book_start`, `p1p2idle`, `p1p2top3p4`, `p3p4idle`, `p3p4top5p6`, `p5p6idle`, `p5p6top3p4`, `p3p4top1p2`. It embeds eight 512×512 textures. Model metadata is insufficient to assert original save-slot behavior.

## Local previews

Generated under ignored `analysis/local/menu-assets/`: `buttons.png`, `panels.png`, `background-2d.png`, and exact entity lumps `c_game_menu1.ent` / `c_loadgame.ent`. All three image previews were visually inspected. Assets are read directly from the user's game installation and are not copied into tracked source.

## Shared hitboxes and reveal timing correction

`gameui-menu-geometry` and `gameui-hitboxes` under the ignored local evidence directory capture the original native width/reveal paths. `Menu::PerformLayout` at `0x10095f2e` calls `0x10096249` to compute its width, then `0x10096579` to size rows. Width calculation iterates all items, including hidden items, requests content size through virtual +0x228 and takes the maximum content width plus **8 pixels**. The item sizing loop applies the same width to every row (subtracting border insets; GameMenu clears its border). The former per-label +12 approximation has been removed.

`GameMenu::OnCommand` at `0x1003f980` recognizes `Open`, then sets the pending-reveal flag through `0x1003f9e0`. On the next Think, `0x1003f830` records start time and computes truncated `(now-start)/visibilityRate`; the x87 division is visible at `0x1003f8be..0x1003f8cd` (Ghidra omits this floating expression from pseudo-code). For each child, paint is enabled exactly when `childIndex >= childCount-revealedCount`. Rows reveal from bottom to top in 0.03-second steps, including timing gaps for hidden items. The scrollbar is constructed before the ten menu items, so the ten item thresholds are 10..1 intervals. This alters painting only; visibility filtering and hitboxes remain independent. The port resets on Show and disables MainUI's unrelated whole-window fade.
