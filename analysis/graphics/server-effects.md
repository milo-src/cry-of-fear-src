# Original server graphics contracts

Target: installed `cryoffear/cl_dlls/hl.dll`, SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Static REA 6.9.0/Ghidra 12.1.4 immutable imports only; no original DLL execution.
Full responses and unchanged-input manifests are in ignored
`analysis/local/graphics-server-{core,weather,lights,light-protocol,assembly}`.
`python tools/capture_graphics_server.py --output analysis/local/NEW --rea`
reproduces the selected decompilations and bounded disassembly. Native addresses below
belong to this hash, not the source-built port.

## Implemented contracts

| Entity/message | Original addresses | Confirmed behavior |
| --- | --- | --- |
| `cof_blackandwhite` / `BlackWhite` | export `100aa120`, Spawn `1009d5c0`, Use `100a5af0`; registration `100e662d`, resend `100f77b7` | Hidden stationary point. Use requires a nonnull activator; clamps `iuser1` to 0..255, ignores Use type, stores each player's value and sends one BYTE to each player. Original init resends nonzero stored value. Menu uses 190. |
| `env_dynlight` | export `100aa6d0`, Spawn `1009e3b0`, Precache `100993e0`, Use `100a8310` | Precache/set `sprites/null.spr`; SOLID_NOT/MOVETYPE_NONE, zero bounds, renderfx **71**; spawnflag1 sets EF_NODRAW. `renderamt *= 0.125`. USE_ON clears NODRAW, OFF sets it, TOGGLE flips it; SET does nothing. Ordinary entity network state carries color, angles, scale and rendermode; no custom light message here. |
| `envpos_sky`, `envpos_world` | exports `100aa830/100aa840`, Spawn `1009e860/1009e890` | Only SOLID_NOT/MOVETYPE_NONE/EF_NODRAW. Preserve map origin, health, body, skin and flags. No sky-rendering message or consumer is established by these methods. |
| `env_fog` / `SetFog` | Spawn `1009e590`, Precache `10099460`, KV `10096a40`, Use `100a8a80`, Send `1009b650` | Fixed **9 bytes**: BYTE R,G,B; SHORT signed fade seconds; SHORT start distance; SHORT end distance. Not a float-density message. |
| `rain_settings`, `rain_modify` / `RainData` | Spawn `1009f080/1009f040`, KV `100982b0/10098110`, Use `100a99a0`; player loop `100f6ca0`, send `100f81cc` | Fixed **16 bytes**: SHORT drips; COORD distance, windX, windY, randX, randY; SHORT mode; COORD rain_settings origin.z. GoldSrc COORD is signed 16-bit scaled by 8. |

`BlackWhite` registration is size1/global `102265dc`; `SetFog` registration
`100e60d9` is size9/global `102264b0`; `RainData` registration `100e6313` is
size16/global `10226548`. These identifiers corroborate the sender calls.

### Fog lifecycle

`startdist/enddist` parse integer; `fadein/fadeout` also parse integer then store
as float; `holdtime` parses float. Spawn hides the entity, makes an unnamed fog
active (flag1), and changes zero start/end to1. Active Spawn schedules TurnOn.
Use applies ShouldToggle against flag1. TurnOn `100a1980` sets flag1 and, for
nonzero fadein, flag0x8000, sends positive fade and schedules completion.
FadeInDone `10094790` clears0x8000, sends the same color/distances with duration0,
then optionally schedules TurnOff after holdtime. TurnOff `100a17d0` clears flag1,
sends negative fadeout and schedules FadeOutDone `10094810`; completion clears
0x8000 and sends an all-zero message. Zero fade durations complete immediately.
Precache of active fog schedules Resume `1009aad0` after .1sec, which schedules
FadeInDone after another .1sec.

The original generic think scheduler (`100c4850/100c48b0`) participates in its
parent/movewith system. The port uses ordinary SDK nextthink and Activate for
initial activation. Exact restore/fade timing across all original scheduler
states is not claimed.

### Rain lifecycle

Settings keys: `m_flDistance` float and `m_iMode` integer. Modify keys:
`m_iDripsPerSecond` integer; `m_flWindX`, `m_flWindY`, `m_flRandX`, `m_flRandY`,
`m_flTime` float. Both are hidden stationary points. An unnamed modify sets
spawnflag1 (static); Use on a static modifier returns. Dynamic Use accepts only
`gpGlobals->deathmatch == 0`, resolves player1 and either applies immediately or
sets ideal values, end time and next update at time+1.

Player loop advances a fade once per second. Remaining steps are
`int(endTime - time + 1)`; drips use integer division, other values float division.
At completion ideals become current. Sending finds the first rain_settings,
then the first static rain_modify, which overwrites current values and cancels
the fade. No settings clears current/ideal/timers in the original and sends no
message. Menu fixture: 800drips, distance1000, wind/random80, mode1, height190.

### Water class

Original `func_water` export `1008f5a0` and `func_door` export `1008f580` both
jump to factory `1008ce10` and vtable `101bf290`. The vendored SDK already has
`LINK_ENTITY_TO_CLASS(func_water,CBaseDoor)` in `dlls/doors.cpp`. Its nonzero-skin
Spawn preserves skin, calls SET_MODEL for brush geometry/bounds, sets SOLID_NOT,
MOVETYPE_PUSH and silent behavior. A duplicate alias was not added.
The original video stress actions `100a1c70` and `100a1c40` set `cg_water=1` and
`gl_dynlight=1`, respectively, then wait5sec before reporting the effect.

## Captured but not implemented here

- `env_dlight` is distinct from `env_dynlight`. Send `10098540` uses MSG_ALL
  message-global `102264b4`: BYTE instance id, BYTE enabled; when enabled,
  COORD xyz and BYTE renderamt,R,G,B. Exact message-name registration and
  instance-id allocation remain to be tied down before adding this class.
- `env_elight` Send `10098610` uses MSG_PVS SVC_TEMPENTITY **TE_ELIGHT(28)**:
  SHORT attachment/body*4096+entity index, COORD xyz/radius, BYTE RGB/life,
  COORD decay. Use `100a89d0` resolves the attachment target and shares the
  dlight lifetime logic. Generic parent/attachment handling is not ported.
- Flashlight helpers `10040110/10040190` toggle player field+1ea8, play
  `items/flashlight1.wav` (CHAN_WEAPON, volume1, attenuation.8,pitch100), and
  clear/set bit8 at player+5d0. These helpers alone do not establish the native
  flashlight projector, texture, orientation or renderer path.
- Generic KV `1000dba0` accepts `movewith`, storing a pooled name at entity+18.
  Menu dynamic lights reference moving trains/rotators. Merely spawning their
  lights does not reproduce these attachments; the generic movement system is
  still required. No fixed-light substitution is claimed as equivalent.
- Sky-marker drawing and sky_sphere renderfx137 consumers need engine/client
  evidence. Server marker recovery does not establish sky rendering.

## Port integration and explicit differences

Original BlackWhite KeyValue vtable slot13 is generic `1000dba0`, which does
not handle `iuser1` itself. The original generic entvars descriptor at
`1021b040` contains DWORDs `10,101e543c,248,1`: FIELD_INTEGER, string `iuser1`,
entvars offset0x248, count1. Real maps (including menu190 and c_aresaka255) use
this exact key. Portable SDK's generic table omits it. Runtime fixture found
the resulting zero value; the port now bridges this key in BlackWhite::KeyValue
using atoi/fHandled. The fixture key is unchanged. Capture tool emits the raw
descriptor/vtable evidence as `blackwhite-keyvalue.json`.

`src/cof/server/recovered_graphics.cpp/h` implements the confirmed core classes.
World precache registers messages. Player init sends current blackwhite/rain
and active fog; PlayerFrame advances rain. Player fields are saved as integers,
float arrays and FIELD_TIME timers by the source-preparation integration.
The port explicitly sends zero blackwhite and zero rain on initialization when
absent, preventing stale state across maps. It also resends active fog to a
late initializing source client. Those are compatibility bridges, not observed
extra original sends. Runtime renderer fidelity is a separate client task.

## Evidence keys

| Capture/query | REA evidence id |
| --- | --- |
| core/001 BlackWhite Use | `ev_286aefb0f0c922ab1b08de38c0b31337e1405029e94e4bf5abe5b0e1daf89914` |
| core/002 dynlight Spawn | `ev_49c179820c81e0ef24ede0b4866274771ac81f8f71eec7dcce0ff900bc8a690e` |
| core/004 dynlight Use | `ev_b8af0981ffa9d30719889c4e92924cb7314e84f2e7e3ff21deca09b180a5aa52` |
| core/009 fog KV | `ev_575591ab4956e2be7ec128d94461c804ff761120b741f6b984eb2da048d8e5d7` |
| core/011 fog TurnOn | `ev_abf63c2c1206c31fd34c93532be22ccc0effa546ef2f6b5fedef00b99e5a9157` |
| weather/000 fog Send | `ev_04baa2ebbd080d885d314b47e446f2a7d5032c73b1fcedece634e653b20e5fa6` |
| weather/006 rain Use | `ev_2164bcea67bbacfcd66073a9175ddf4a5b527c2cc8bf75a7a993094ff1b9bbc1` |
| weather/009 player rain loop | `ev_0489cca9fff8f625b54cd2d082ab29cbabd1fe8b0951e6ed2d5facbb1eaf104b` |
| light-protocol/000 dlight Send | `ev_c916627b2d45cfd69e34e1a3476210fbd1cae56c386bb260ee18947f42d6d3d3` |

## Isolated runtime fixture

`tools/prepare_graphics_fixture.py` copies original `c_apartment3.bsp` byte for
byte to ignored `out/runtime/cryoffear/maps/cof_graphics_test.bsp` and creates
only that fixture's external entity lump. Original BSP SHA256:
`1150b9570d9c6a61640f5c6109d77dbd457575c23921dcc1557284c32c4a1a43`.
Water brush *153 spans (404,90,-40)..(726,332,-31); *155 is also retained.
Camera/player origin (565,210,50), view (55,90,0), is verified EMPTY in original
world standing-player hull1. Original world, lighting and static brush detail
remain; original actors and triggers are excluded in this isolated fixture.

`tests/cof/server/graphics_runtime_tests.inc` invokes actual entity Use methods,
checks water network state, dynlight renderfx/radius encoding, fog toggles and
blackwhite raw values. The client companion checks received cvars and captures
baseline/fog/blackwhite/dynlight stages. `tools/smoke_graphics.ps1` checks stages,
four fresh images, exit status and loaded source-built modules. The fixture
preparer was run successfully; game launch/build is left to the parent agent.
Passing protocol assertions does not establish visual equivalence; captures
must be inspected separately. No original or normal staged map entity lump is
overwritten.
