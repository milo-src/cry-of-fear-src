# CoF source layout

Edit the CoF code here. `build/game-source` is a generated SDK copy and is
recreated by `tools/prepare_game.py` whenever the root Waf entry point runs.

- `server/`: code for `hl.dll`: entities, doors, inventory state, pickup/use,
  persistence and server interfaces. `recovered_inventory.h` belongs here
  because its API uses server entities and players; it is not a shared protocol.
- `client/`: code for `client.dll`: inventory presentation, client commands,
  HUD and prototype frame instrumentation.
- `reference/`: incomplete semantic reconstructions retained for analysis.
  These files are deliberately excluded from both DLL builds.

Server integration fixtures live at repository `tests/cof/server/`.

The existing HLSDK and Xash3D sources remain in `external/hlsdk-portable/` and
`external/xash3d-fwgs/`. Runtime configuration belongs in `runtime/`; build,
staging and analysis scripts belong in `tools/`; evidence belongs in `analysis/`.

There is no shared game implementation yet. When client/server protocol types or
other common code are extracted, place them in `src/cof/shared/` and explicitly
wire them into both build targets. Do not put server-only headers there.

`tools/prepare_game.py` lists the CoF source files for each target and copies
them into SDK `dlls/` or `cl_dll/`; add new build files to the corresponding list.
This preserves the SDK's Waf configuration and includes without duplicating
ownership of source files. Server test `.inc` files are copied alongside their
host translation units, and their execution remains environment-variable gated.
