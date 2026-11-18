# Cry of Fear HUD: static reconstruction evidence

Target: installed `cryoffear/cl_dlls/client.dll`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Preferred image base `0x10000000`; all addresses below are preferred VAs.
This is static evidence, not an observation of the original game running.

REA/Ghidra 12.1.4 batches and full Evidence bundles are retained under
`analysis/local/hud-entry` and `analysis/local/hud-geometry`. Both verified
unchanged input and no target execution. Ghidra identifies constructor
`FUN_100362b0`, panel update/solve `FUN_1003bf20`, visibility
`FUN_10038a10`, and TGA loader `FUN_10008640`. The large constructor and solve
pseudocode lose some virtual-call arguments, so those arguments below were
checked against bounded instruction evidence. `tools/capture_hud.py` reproduces
that evidence in `analysis/local/hud-capture`, including hashes and commands.

## Health and stamina geometry

The active HUD uses VGUI TGA images. The older `cof_health_*` and `cof_scare_*`
sprites in `sprites/hud.txt` do **not** establish the active bar layout.

| Component | Image | Size | Top-left |
| --- | --- | --- | --- |
| Health frame | `gfx/vgui/640_healthbar.tga` | 32 x 160 | `(32, screenHeight - 160)` |
| Health fill | `gfx/vgui/640_healthbar_bar.tga` | 11 x 118 | frame + `(11, 5)` |
| Health empty overlay | `gfx/vgui/640_healthbar_barempty.tga` | 11 x 118 | frame + `(11, 5)` |
| Stamina frame | `gfx/vgui/640_staminabar.tga` | 32 x 160 | `(64, screenHeight - 160)` |
| Stamina fill | `gfx/vgui/640_staminabar_bar.tga` | 11 x 118 | frame + `(11, 5)` |
| Stamina empty overlay | `gfx/vgui/640_staminabar_barempty.tga` | 11 x 118 | frame + `(11, 5)` |

Constructor instructions `0x10036d04..0x10036f76` establish parentage and
coordinates. Frame x is its own width (health) or twice its width (stamina);
y is screen height minus its height. No screen-width scaling occurs in this
path. Loader `0x10008640` passes the exact path to COM_LoadFile and constructs
`vgui::BitmapTGA(InputStream, true)`; it does not substitute a resolution or resize.
Texture color is retained with white `(255,255,255)` image tint (VGUI transparency
argument 1 in the constructor).

Fill is drawn complete; the empty image is clipped from its top to height
`int((100 - value) * 1.18)`. Consequently remaining fill is visible at the bottom.
Instructions `0x1003d255..0x1003d2de` set overlay sizes; double at `0x101468b8`
is exactly 1.18. Health value is `max(0, *(int*)0x1018d648)`, forced to zero when
byte `0x10542bb2` is set. The latter flag's producer/semantic name remains
unresolved. Stamina is panel integer offset `0x1000`. Do not stretch a reduced
fill texture: the original uses clipping through the empty image panel's size.

## Messages and visibility

`Stamina` registration at `0x10038900` installs handler `0x1003a360`:

1. BEGIN_READ.
2. READ_BYTE → panel offset `0x1000`.
3. READ_COORD → duration. Reader `0x10080910` uses READ_SHORT `0x10080a10`
   multiplied by 0.125, confirmed from constant `0x1013ee58`.
4. If duration > 0, panel offset `0xfe4` = client time + duration.

Panel offset `0xfe8` is a red `(255,0,0)` overlay, parented to the stamina fill.
During the duration its VGUI transparency is set to 128; afterwards transparency
increments by 15 per solve call and clamps at 255. See `0x1003cb7f..0x1003cc59`.
VGUI transparency has the inverse direction of normal RGBA alpha.

`HealthCap` registration at `0x10038940` installs `0x10039a70`. It reads one byte
and switches all three health textures: 0 uses the unsuffixed set, 1 uses suffix
`2`, 2 uses suffix `3`. Other values leave the texture set unchanged. These
texture sets have identical dimensions; this handler does not change health's
percentage divisor or geometry.

Visibility `0x10038a10` hides health/stamina (and other HUD panels) on exact map
path `maps/c_nightmare.bsp`, when `hud_draw` is zero, or when hide flags at
`0x1018d1dc` intersect `0x0c`. `hud_draw` is registered at `0x1006d748`, stored
at global HUD object `0x1018a0c0 + 0x3134 = 0x1018d1f4`.
The main solve also hides stamina when integer `0x10542bb8` is nonzero; this
mode flag's producer is not yet recovered. Do not assign a guessed name.

## Other HUD assets and limits

`gfx/vgui/crosshair.tga` (32 x 32 RGBA) loads at `0x100365cc` and its ImagePanel
is centered using `(screenWidth / 2 - imageWidth / 2,
screenHeight / 2 - imageHeight / 2)` at `0x10036be9..0x10036c31`.
Its conditional display is separate from the health/stamina visibility path.

Ammo UI literals identify `gfx/vgui/ammo/ammo_inventory.tga`, weapon
`glock_slot`, `m16_slot`, `p345_slot`, `shotgun_slot`, `tmp_slot`, and corresponding
`*_check.tga` images. Those references are in `0x1001d789..0x1001ec57`.
Their interaction/weapon-specific values are **not yet recovered by this pass**.
This evidence supports faithful health/stamina rendering and message decoding;
it does not establish complete combat HUD, boss bars, phone UI, co-op indicators,
or original runtime pixel equivalence.
