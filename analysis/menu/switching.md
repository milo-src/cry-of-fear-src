# Menu lifecycle, camera and server protocol

Static analysis of the user's installed binaries, never execution of original DLLs:

- `client.dll` SHA256 `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
- `hl.dll` SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
- REA 6.9.0 private MCP process, Ghidra 12.1.4, immutable source import. Each capture saves request, full evidence and unchanged-input verification under ignored `analysis/local/menu-switch-*`.
- `tools/capture_menu_switch.py` captures bounded callback disassembly and referenced strings. `--rea` repeats the successful decompilation selections. Ghidra did not create functions for four tiny registered client command callbacks; their original bytes and registration addresses were independently decoded with objdump. These failures remain explicit in `menu-switch-initial`; they are not claimed as successful decompilations.

## 3D / 2D lifecycle

| Original client address | Behavior |
| --- | --- |
| `0x10079a60`, end at `0x1007a4b8` | Input initialization registers controls, initializes other state, then unconditionally issues `map c_game_menu1`, setting transient global `0x10542a68` to 1. The original starts in 3D mode. |
| `0x1006cf00`, registrations `0x1006d637–0x1006d671` | Registers `beginspgame`, `to3dmenu`, `returnmenu`; `returnmenu` is registered twice in this binary. |
| `0x1006e370` | `to3dmenu`: if `GetMaxClients() > 1`, issue `disconnect;maxplayers 1;deathmatch 0` and return. Otherwise issue `map c_game_menu1`, set transient global to 2. |
| `0x1006e340` | `returnmenu`: issue `disconnect;maxplayers 1;deathmatch 0`. This really leaves the server and shows the engine's disconnected 2D GameUI. |
| `0x1006e1f0` | `beginspgame`: `disconnect;maxplayers 1;deathmatch 0;map c_difficulty_settings`. |
| `0x1006e3b0` | `unlockablescmd`: multiplayer guard as above, otherwise `map c_unlockables`. |

Strings: `0x1014e83c` disconnected command, `0x101427f4` main map, `0x1014e7fc` new-game command. `resource/GameMenu.res` provides matching engine command routing (see assets.md). No persistent 2D preference cvar was observed in these paths. A persistent user preference would be a port feature, not recovered original behavior. The transient global has other panel references and should not be described as a persistent menu preference.

Evidence: input init `ev_3ec4c4bd747e85ea77d22656952c9fec265d524ba07fbc8128cb555647c4cff9`; HUD initialization/registration `ev_3ac798e876630dc289bf9ab8ef71f283c2b8ed654cb5dd32df9be8b38b846e4b`; bounded assembly manifest `analysis/local/menu-switch-assembly/manifest.json`.

## Server marker and action routing

`cof_gamemenu` export `0x100aa2f0` jumps to factory `0x100908e0`, allocating 0xdc bytes and installing `CCofGameMenu` vtable `0x101c43c4`.

- Spawn `0x1009d940`: `solid=SOLID_NOT`, `effects=EF_NODRAW`, `movetype=MOVETYPE_NONE`.
- Player initialization at `0x100f2966–0x100f29b1` iterates all `cof_gamemenu` markers. For each it sends `MSG_ONE`, message global `0x102265d8` registered as `GameMenu`, **zero payload bytes**, to that player.
- `ClientCommand` `0x10018d60`, branch `0x1001b9bc`: `gamemenucmd N` requires mapname containing `game_menu`, a marker, and a player. N=1/2 sets marker `pev->iuser1` and schedules its think after 1/2 seconds. White ScreenFade is duration 1, hold 10, alpha 255, flags 1.
- Marker Think `0x100a0aa0`: iuser1=1 sends server `map c_difficulty_settings\n`; iuser1=2 sends `map c_video_stress_test\n`.
- `campaign MAP` stores a pooled string pointer in global `0x10226470`.
- `skillset N`, single-player path: sets cvar `difficulty`; 4 additionally sets nightmare state. Plays `inventory/game_start.wav` at volume 1, attenuation 0.8, pitch 100. White fade duration 5, hold 5, alpha 255, flags 5; schedules `CBasePlayer::GameStart` after 5 seconds.
- `CBasePlayer::GameStart` `0x100dfc10`: client command `map c_intro\n` unless campaign global exists; then `map %s\n` using it and clears the global.
- `subtitleset N` sets `cof_subtitlelanguage=N` and player field `+0x684=N`. This is subtitle selection, **not** VGUI image or engine interface translation.

Evidence: marker spawn `ev_7506d821b02abbf11afc93c579fd9fb8c40ffa2339821ae5779a3a201f63791c`; marker Think `ev_fe5390333c381884d5bcb3f7d6e9ca111207e4f93615cd5a1ade73a9f853e241`; ClientCommand `ev_3ecfa51f6a46e16b7713bb096abf986bf9e19a119410f51f7580ec7d76021f92`; player initialization `ev_0f5ef6671eff4fc20ff3688e2a7c3529ffb8d22651763f9a58093f0408b03bf5`; GameStart `ev_01b139bd8b63628304a3cac3ca7300411a4e31f9b6425e600c3280c9519ab4f5`.

## Difficulty and save/load marker protocol

`cof_difficultysettings` export `0x100aa270` → factory `0x10090820`, vtable `0x101c4064`, Spawn `0x1009d8d0`. `cof_loadgame` export `0x100aa410` → factory `0x10090d60`, vtable `0x101c42a4`, Spawn `0x1009dbc0`. Both Spawn methods set SOLID_NOT, EF_NODRAW and MOVETYPE_NONE. Player initialization in `0x100f1f30` handles their presence:

- Difficulty sends **Unlocks**, variable size, with LONG unlock mask and two BYTE booleans; then calls `0x100f4050(32)`, which sends **VGUIMenu**, fixed size 2, with BYTE 32 and BYTE 0. The player receives hide-HUD bit 8 and loses control. There is no original `Difficulty` message; that name must not be used as an original protocol claim.
- Load-game sends **SaveLoad**, variable size, with BYTE 1 followed by STRING `nothing` (NUL terminated).

Registration evidence: VGUIMenu name `0x101dad50`, size 2, ID global `0x10226580`; Unlocks name `0x101db03c`, size -1, global `0x102266a0`; SaveLoad name `0x101dae50`, size -1, global `0x102265d4`. In each registration sequence the ID assignment comes after the next registration's arguments are pushed; reading the immediately preceding string without tracking the call would misidentify the message.

The port uses these original message formats. Its unlock state is currently a fresh-profile zero mask/booleans; recovered persisted unlock evaluation is not implemented. Evidence: player-init REA record above plus bounded disassembly reproduced by `tools/capture_menu_switch.py` (`difficulty-load-init`, marker Spawn methods, `show-vgui-menu` and registrations).

## Camera: relevant CoF extensions

Original `trigger_camera` export `0x10115df0` → factory `0x10107fb0`, vtable `0x101e4170`. Use `0x10113b60`, FollowTarget `0x1010af30`, Spawn `0x10110b80`, KeyValue `0x1010cbc0`.

The main map's camera has flags 84 = 4 + 16 + 64 and `wait=666`:

- Flag 4 takes player control, as in HLSDK.
- Flag 16 sets player's hide-HUD field bit 8. Exit clears it unless `keepnohud` is nonzero.
- Flag 64 directly assigns pitch/yaw from target-origin minus camera-origin each frame, with pitch sign inverted. Without it the original smooths angular velocity by angle difference ×40×frame time.
- Wait **666 is infinite**, explicitly exempted from return-time expiration.
- Original Use freezes player (flag 0x80), sets damage to zero, changes view to camera. Exit re-enables control and damage.
- `zangle` key is parsed to an integer and overrides roll when nonzero.
- Original camera also supports attached models, view entities, skip-manager, noise/letterbox and several other flags. These are not needed by the main menu camera and are not fully ported here.

Exact map camera/path coordinates and two multimanager schedules are in assets.md / assets.json. Do not replace that scene with an invented camera orbit. The SDK's moving-camera path implementation is retained; the CoF differences above are added in `src/cof/server/camera.cpp`.

Evidence: Use `ev_5a26cbd43b1b243c39ddfb335f42052f66125ac78160d3f427822dff2f7e06ad`; FollowTarget `ev_ad514ca2a90a30ab93093d57a89ea803b274f8fc9697668ceae864a0478613e6`; Spawn `ev_49f9e0875e02f62f641b0951d544942adda8c614e7f71351a5cbb8e273961542`; KeyValue `ev_1b229a093d77c4e6fb852afa3d365575d4ab8e00cac8083c90ab32d4f2025b35`.

## Models and streamed music

`env_model` export `0x100aa780` → factory `0x10091960`, vtable `0x101c00a0`. Recovered methods:

- Spawn `0x1009e640`, Precache `0x10099570`, KeyValue `0x10096bc0`.
- SetSequence `0x1009bed0`: bit 1 clear selects `m_iszSequence_On`, set selects Off. Lookup sequence, fallback 0 if invalid, reset frame/sequence info. Action **1** forces looping. The MDL loop flag is overridden by this action setting.
- Think `0x100a0b90`: advance animation. At a finished non-looping sequence, action **2** toggles on/off and starts the opposite sequence; other actions stop thinking, holding the end frame. Otherwise think at 0.1 seconds (head-tracking flag 8 uses every-frame behavior).
- Use `0x100a8e80`: ShouldToggle against inverse flag 1, toggle flag 1, select sequence, next think 0.1 seconds.
- Spawn flag 4 gives slidebox ±10; flag 2 raises origin Z by 1 then drops to floor. fuser1..4 initialize bone controllers. Default renderfx=92 except models containing `obbsror`; `skogsris` uses 94. Existing renderfx is otherwise preserved.

All four menu models' sequence selection and use actions are covered by the port. Chest-code and head-tracking extensions are not. Original renderer-specific renderfx 92/94/137 effects and the sky-marker transform require renderer recovery; server support alone does not establish their visual fidelity.

Evidence: `analysis/local/menu-switch-envmodel/evidence.json`; SetSequence `ev_84c4d64e053f9b27f5be9cd2d2d0c699d72ba9dac65ab3ce9787309bb9b9fbfb`.

`ambient_fmodstream` export `0x10115c80` → factory `0x101084f0`, Use `0x101148b0`: requires message, resolves player activator or player 1, queues message path, loop flag **2**, fade from native `pev->frags` at **+0x168**. The earlier health label was incorrect: the original serialized field table places health at+0x164 and frags at+0x168 (`analysis/doors/capture.json`, record0x1021add0). Flag **1** removes entity after use. Use type does not toggle playback. Multiplayer also publishes `sv_coop_music`; queues are suppressed while10222f20!=0. That branch is not part of the historical single-player adapter. Current wire/ownership details: `analysis/graphics/music-server-protocol.md`.

Player queue function `0x100ea5c0` stores path at +0x2310, loop byte +0x231c, fade +0x2320, pending flag +0x2314. Client formats resource path as `%s/mp3/%s` (string `0x10150ab4`, ref `0x100801e3`). Main-map entity has message `gamestartup.mp3`, flag 2, default frags/fade0. The fade is serialized as WRITE_COORD, not a raw wire float; playback and server queue are separate contracts.

The port uses the source-built Xash streaming backend: `music "mp3/gamestartup.mp3" "mp3/gamestartup.mp3"`; non-looping tracks use an empty second argument. This is a backend adaptation, not the recovered FMOD implementation. Original fade, resume, cooperative synchronization and music-stop entities remain pending. Asset staging must include the `mp3` directory.

Evidence: music Use `ev_f67f40fb1412836c6aded84c47d19672699f4b9b354dfb54ae9a98085c80410e` plus bounded player-queue disassembly; Xash command behavior is in vendored `engine/client/sound/s_main.c` and `s_stream.c`.

## Port differences and validation boundaries

`menu.cpp` adds strict integer/range validation and safe existing-map basenames for campaign commands, rather than original atoi/raw format arguments. A dedicated hidden entity performs GameStart's delayed command so it does not overwrite the SDK player's Think. Nightmare difficulty selection is stored, but nightmare campaign mechanics are not reconstructed by this UI work. Subtitle cvar archival is a port addition; per-player subtitle delivery remains unrecovered. Camera exit restores prior damage value, rather than assuming DAMAGE_AIM; explicit off also terminates an infinite camera.

Build integration: copy menu.cpp/.h and camera.cpp to the prepared SDK; remove the vendor's trigger-camera section to avoid duplicate class/export; call CofMenuPrecache in world precache, CofMenuPlayerInit in player HUD init, and CofMenuCommand before standard ClientCommand dispatch. Runtime/build testing is recorded by the integrating task separately. This static report alone is not evidence that campaign, all VGUI panels, custom rendering, rain or postprocessing are complete.
