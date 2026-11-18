# Menu reconstruction status

This work targets the installed CoF build identified by the hashes in
`vgui.md`, `switching.md`, and `assets.json`. Original native modules were
read statically, never executed or loaded into the reconstructed game.

## Investigation checklist

| Question | Evidence / result | Implementation status |
|---|---|---|
| Which custom VGUI panels exist? | Complete 31-panel RTTI/vtable/constructor/action ledger in `vgui.md`; bounded REA captures | Analysis covers all 31; this is not a claim that all 31 run |
| What is the 3D main menu? | Original `c_game_menu1` BSP, `cof_gamemenu` marker, `GameMenu` message, CGameMenu constructor/actions | Original scene and ten-button overlay run in own client/server |
| How do modes switch? | `to3dmenu`, `returnmenu`, `beginspgame` callbacks | Engine menu registers commands before client load; disconnect/reconnect works |
| What makes the camera different? | Original camera Use/FollowTarget/KeyValue | Infinite wait 666, direct look flag64, hidden HUD flag16, path camera, control freeze |
| Which scene entities are needed? | Entity-lump inventory and original server methods | Menu env_model sequences and zero-fade ambient_fmodstream adapted; custom sky/rain/postprocessing remain |
| How do local main-menu panels work? | Original actions, image rectangles, hover and click sounds | Difficulty, language, extras, unlockables, campaign list, five-slot save/load presentation |
| How does disconnected 2D menu draw? | GameMenu.res, TrackerScheme, GameUI.dll and VGUI2 font methods | Recovered native font metrics, colors, alignment, common max-content+8 hitboxes, release activation, sounds and bottom-to-top 0.03-second reveal; hosted by source MainUI |
| How do original saved games/progression work? | SaveLoad metadata/action routes identified | Five port-owned Xash slots; original `.cof` compatibility and unlock persistence not recovered |

## Source ownership and build

- Client code: `src/cof/client/game_menu.cpp`, `secondary_menus.cpp`,
  `save_load_menu.cpp`, `ui_font.cpp`, `ui_draw.cpp`.
- Server code: `src/cof/server/menu.cpp`, `camera.cpp`.
- Disconnected frontend: `src/cof/menu/Main.cpp`.
- Waf uses generated SDK/engine copies under ignored `build/`. Vendored
  trees remain intact; `prepare_game.py` and `prepare_engine.py` make explicit
  source adaptations. Engine Unicode glyph lookup is corrected in the copy.
- REA checkpoint: `analysis/evidence/menu-rea.json`, 214 evidence records
  consolidated from 22 focused captures. Native targets were closed and the
  connected investigation registry was checkpointed and reset.
- Asset staging allows resources, campaign descriptors, bitmap-font widths,
  and MP3 music. Original DLL/EXE files remain excluded.
- `start-game.bat` defaults to the 3D menu. `--map c_sdkmap1` starts the
  exploration test map; `--2d` requests the disconnected frontend.

## Validation and limits

`tools/smoke_menu.ps1` runs actual engine input through client key events,
opens/cancels difficulty, language, extras, unlockables, campaign, and load
panels, checks movement suppression, then disconnects to 2D and reloads 3D.
It collects loaded module paths, screenshots, and a log. Tests ran at
1280x720 and 800x600 with zero input/state failures and clean exit. The final
1280x720 run also covers the corrected 2D font, shared button width and reveal
behavior. A separate HUD/inventory regression run on c_sdkmap1 passed. The
runtime provenance audit passed for all nine staged native modules.

The bitmap credits font required RLE decoding and a memory-only texture name
to prevent the engine from rereading its original zero-alpha file. Ordinary
non-developer c_loadgame captures now show the panel art and readable labels
together; pixel equality and a JPEG preview confirmed the PNG viewer's black
display was not a game rendering failure. State-test success and these visual
checks do not establish complete visual equivalence to the original game.

Options, server browser, host dialog and quit confirmation currently use
source MainUI backends. Their original GoldSrc VGUI internals are not yet
reconstructed. Remaining gameplay VGUI panels have evidence, not complete
running implementations. Scene rain, CoF renderer effects and sky transforms,
music fades/resume, book animation, original save metadata, progression,
commentary, costume selection and multiplayer behavior remain incomplete.
