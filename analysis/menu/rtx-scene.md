# CoF menu: native scene contracts and RTX adaptation

Scope: restore the authored `c_game_menu1` scene in the source-built Vulkan
backend, comparing it with the reconstructed ordinary renderer. Neither
comparison executes the original engine. Static reference is original
`client.dll`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
REA 6.9.0 / Ghidra 12.1.4 immutable MCP captures are in ignored
`analysis/local/menu-sky-*`; all sessions retain close/verification records.

## Missing scene inputs

The prior RTX image was not merely brighter: it omitted the custom water
surface and client precipitation, treated the sky sphere as an ordinary remote
studio model, and supplied a generic daylight sky contribution. Correcting
only exposure cannot recover those missing inputs.

### Sky transform

Native `skymark_sky` handler `10063fb0` reads three coordinates, followed by
flags and optional ambient/direct lighting bytes. `skymark_w` at `10064040`
reads world-marker coordinates and a fourth coordinate used as sky speed.
`10063780`, `1005f570` and studio draw `1008cee0` use:

```
translation = eye - skyMarker
if speed != 0:
    translation -= (eye - worldMarker) / speed
```

The studio/brush sky categories include renderfx 70, 137 and 184. Native draws
use separate depth ranges. For renderfx 137, `100678d0` reads `skybrightvalue`
and `skybrightcolourr/g/b`; `sky_stars.mdl` has an additional flicker branch.
The registration default for `skybrightvalue` is `0.1`, not the installed
user config's `0.35`.

The source RT backend reads immutable `envpos_sky` / `envpos_world` BSP fields
at map load, applies the recovered translation to studio sky meshes, and
submits them with the RT sky flag. Network PVS and ordinary model-frustum
culling must not discard the remote miniature sky entity. The menu speed is
80. Reading `envpos_world.health` as the speed matches the map/message contract;
the complete native server broadcast path was not reconstructed in this pass.

This is a backend transport adaptation, not an implementation of all original
sky messages or all brush-sky behavior. Optional ambient/direct overrides,
separate sky color terms and star flicker are not yet fully mapped to RTGL.

### Water and weather

Native `10086d10` selects water by `curstate.skin == CONTENTS_WATER` and draws
the horizontal top of the networked world bounds. It does not require a
`!water` texture. The menu's brush is textured black, explaining why the old
RT material-name path could not find it. See
[`client-renderer.md`](../graphics/client-renderer.md) for the original Cg pass.

`rtx_water.inc` submits the same top plane as a dynamic RT dielectric surface
and suppresses the opaque volume brush. `cg_water` is registered in both builds
so the RT path no longer reads an absent cvar as zero. Reflection, absorption,
color and density are RT material choices; they are not claimed to reproduce
the original screen-space Cg formula. Original water textures are unchanged.

Weather simulation/drawing and evidence are documented in
[`weather.md`](../graphics/weather.md). The menu's nonzero weather mode is
preserved, including its snow sprite; it is not forcibly replaced by rain.

### Lighting and color

RT sky energy now follows authored `_diffuse_light` (or `_light` fallback)
instead of applying the upstream daylight constant to every map. This is a
photometric adaptation. The menu's `1 1 1 1` environment is consequently dark.
Its `BlackWhite=190` message also reaches scene tone mapping, while HUD/menu
artwork remains outside that effect. RT saturation is an approximation to the
original shader's desaturation, not an identical shader equation.

## Train timing and comparison

The map starts the first solid train at 14 s and its additive shell at 14.01 s;
the second pair starts at 32/32.01 s. The first pair is toggled again at 84/85 s.
No production train timing was changed: the source SDK already moved the four
entities correctly. A stationary early screenshot is not proof of a stalled
train. The scene probe checks server movement, paired displacement and actual
rendered bridge differences at 18 versus 24 s.

Reproduce matching ordinary/RTX captures with:

```
python tools/smoke_rtx.py --renderer normal --menu-scene
python tools/smoke_rtx.py --menu-cycle
```

Both use the authored camera and capture at 10, 18, 24 and 36 game seconds;
the longer probe also captures at 87/94 s and checks the train retrigger.
Particle randomness and capture latency prevent pixel-identical frames.
RTX is expected to add real water reflections and indirect illumination;
the baseline comparison checks scene contents, night atmosphere and timing.
Logs, images and loaded-module manifests are stored in `analysis/local`.

### Rejected bright train / green river comparison

The initial scene restoration still overlit the train and introduced a green
floor in the river. A passing movement test did not establish visual parity.
Controlled captures with baked fill disabled retained the bright body; disabling
texture emission also retained it. Disabling all RT lights darkened the body.
The ordinary moving brush keeps its compiled lightmap; the RT path discarded
that shading and relit it beneath the bridge spots.

For maps containing the `cof_gamemenu` marker, opaque moving brush scenery now
retains its lightmap as a material modulation. It stays in the ray-traced scene
for shadows/reflections. This is a **hybrid cinematic adaptation**, not recovered
native path tracing or a physically pure albedo. World brushes, additive shells,
unlightmapped faces and playable maps are excluded. RTGL's reserved layer 1 is
skipped by RT lighting, so modulation uses layer 2 with the same UVs. Layer-2
buffer allocation and primary/indirect layer limits must be enabled together.
An intermediate test omitted allocation and crashed; the final initialization
fix was verified by a complete 98-second scene cycle.

There was also double brightness on the additive window shells and precipitation.
RTGL `RasterizedDataCollector.cpp` chooses additive blending when `emissive` is
greater than float epsilon. `RsWorld.frag` already compensates exposure for the
unlit raster color; `CmPrepareFinal.comp` then adds screen emission separately.
Using `emissive=1` therefore added a large glow rather than merely selecting
additive blending. The adapter uses `0.00001` for native weather and cinematic
additive brushes: additive blending remains enabled with negligible extra glow.
The authored render amount and sprite pixels remain unchanged.

RTGL `Media.h` also adds a constant unlit water term:
`(1 - transmittance) * waterColor * 0.15`. The initial green transmission color
thus glowed even with all lighting disabled. Cinematic volumes now use neutral
deep absorption (`0.0001` per channel); reflections still come from the scene.
This is a menu material adaptation. Playable water transmission is unchanged;
RTGL's coupled transmission/inscattering model remains a limitation there.

The corrected 24-second frame is
`analysis/local/rtx-c_game_menu1-cycle-corrected-2.png`. In fixed regions excluding
UI, the train body median fell from 74.3 to 9.0 (ordinary 0.0), window 95th
percentile from 218 to 87 (ordinary 85.7), and river green excess from 4.38 to
0.04 on an 8-bit scale. This preserves RT reflection differences rather than
claiming pixel identity. `check_menu_night_materials` rejects the reported bad
capture and accepts the corrected capture; scene probes additionally verify
both train pairs and their authored retrigger.

Final validation (2026-11-18): Waf RTX build and 14-module audit passed;
`--menu-scene --label final`, `--ui --label scene-final`, and
`--map c_park2 --lighting --label scene-final` passed. The preceding
`--menu-cycle --label corrected` passed the 98-second cycle. Seven scene assets
(BSP, sky model, weather sprites and water noise) have identical SHA256 hashes
in the installed original and both runtimes. No original game DLL was loaded.
An additional staircase replay was aborted because another window occluded the
capture; it is not counted as a successful motion/temporal-lighting test.

## Native evidence IDs

| Entry | REA evidence |
| --- | --- |
| `10063fb0` sky message | `ev_340a2d6d0daede1afbcec11479a3fe63b5eb0478907783819788c75757cf1b46` |
| `10064040` world message | `ev_e58f2073818c0dd964f265857aa1600a0772347f8a93826e7cbf94c58732bd33` |
| `10063780` sky renderer | `ev_c2835d9b0c36dc6159bb51a79368dbea3bce4fce0258eb373376fc0395fa3056` |
| `1005f570` brush renderer | `ev_79eeb94b776dabc7dc50fe5b8d0f66a8e9ac10fba4b773e6e5373e6f268a303c` |
| `1008cee0` studio renderer | `ev_c9e792441705ddfac382db41eff536b7062cf7b0a5920a9cb64c7460b6da39d4` |
| `100678d0` studio lighting | `ev_87edf833c5752a9053c69cc22ab1fd048f6340d27f446083817c83936c28e064` |
