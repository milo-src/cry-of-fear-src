# RTX emitters and optical effects

## Current gameplay presentation

Only the wide horizontal lamp streak gather is removed. The light-reactive
wipe mask, optical-axis reflections, rain refraction and existing menu glass
remain active. `rt_lens_flares` defaults to 1 and controls lens reflections and
raised wipe detail; 0 disables that component. `rt_lens_dirt` independently
controls the illuminated smear mask. These screen-space effects supplement
the traced emitters; they are not ray tracing themselves.

The verified `hattlykta.mdl` luminous `tex_fullbright` diffuser is now opaque
emissive tracing geometry, rather than an additive raster overlay. It is
visible to primary, reflection and indirect rays. Its original sampled
spotlight remains in use; no duplicate attached light is added. This fixture
profile applies on any map using that model, not arbitrary additive sprites.
Original models, textures and BSP files are unchanged.

Wipe illumination and gameplay volumetric scattering are restored to their
previous strengths (including the `.72` scattering multiplier). The separate
rain density response, exposure and direct-light power are unchanged.

Visible emitters now retain a calibrated emission contribution in the bloom
input even when generic HDR thresholding would suppress it. This uses the
resolved screen-emission buffer, with a maximum rather than addition to avoid
counting an already bright bloom source twice. It changes optical glare only;
sampled lights and traced illumination are unchanged.

Gameplay adds a soft, isotropic halo from bloom levels 3 and 4 with the coarse
level-6 tail removed. Its core and shoulder follow the visible surface, not a
world-position sprite. It respects `rt_bloom` and `rt_bloom_intensity`, works
with dirt and rain disabled, and does not restore horizontal streaks. The
existing wipe mask and rain refraction remain separate. The halo is an optical
post-process, not a second light source or a new ray-tracing pass.

RTGL clamps the per-primitive emissive channel to 0..1. The diffuser uses 1;
increasing that input beyond 1 would not increase its radiance. The existing
HDR emission boost remains in place.

`--lamp-check` asserts emission, non-translucent diffuser geometry and absence
of a duplicate attached light at the upload boundary. The optics diagnostic
records `wide_streaks=0` independently of the remaining optical intensity.
Runtime assertions alone do not establish visual quality; compare GPU
readbacks at a fixed pose to inspect the mask and lighting.

Native 1920x1080 readbacks `emitter-halo-balanced` (alley) and
`emitter-halo-clean-park` (dirt and lens reflections disabled) verify the
localized diffuser glow. Both isolated, silent runs passed the traced-diffuser
upload checks, including `attached=0`. No original assets are needed for the
new halo beyond the game's existing visible emission.

The following sections record the earlier optical experiment and its evidence;
only its horizontal streak implementation is superseded by the above.

The installed **Crysis 3 Remastered** was inspected read-only. This is not
evidence about the original 2013 executable, nor a complete CryEngine port.
Original maps, colour textures, light entities and the non-RTX renderer are
unchanged. The new code executes in the RTX gameplay lens pass before the HUD.

## Observed shipped resources

`Engine/Engine.pak`, SHA256
`4b719419968915f1d0bb95bea8ea715acf63b7a6caed62b3089b68c7d8e02460`:

- `Shaders/HWScripts/CryFX/LensOptics.cfx`: Gaussian streak profile,
  optical ghosts, glow falloff, lens-mask finite differences and specular
  detail illumination. Techniques use screen blending; their HDR contribution
  is compressed before composition.
- `LightFlares.cfx`: projected light positions, aspect correction and bounded
  corona response.
- `Sunshafts.cfx`: depth-mask radial sampling. This investigation did not port
  that pass; CoF's existing world volumetrics remain separate.

`C3/Libs.pak`, SHA256
`1675a4444e3597c59baf756145e8bd778c86ac7a33fb0237d2cbad89908f1dea`:

- `Crysis3.xml / jailbreak.lamp_post_flare`: enabled occlusion, 0.2-second
  flare fading, eight deterministic ghosts, visor-scratch camera orbs, a wide
  horizontal ghost and a main glow. Its iris shafts are disabled.
- Searchlight presets enable iris shafts separately: not every lamp uses
  the same optical presentation. Coloured flare layers are authored choices.

REA's archive inspection rejected the archive's compressed data. A bounded
local member reader recovered only selected entries, verifying length and CRC.
Member hashes, extracted evidence and preset findings are retained locally in
ignored `analysis/local/crysis3-optics/` and `crysis3-optics-presets/`. The REA
session export contains no successful query records; the local provenance
manifests are the evidence for the recovered files. No proprietary shader
source or extracted preset was added to repository source.

## Previous optical experiment

`rt_lens_flares` defaults to 1; 0 disables, 2 increases intensity. It is
independent of `rt_lens_dirt` and `rt_rain_lens`.

- Overlapping filtered HDR-bloom samples form a Gaussian horizontal streak.
- Four optical-axis scales generate soft internal-reflection ghosts, with
  bounded coordinates and edge fading.
- Mask gradients vary the illumination of wipe detail as bright image regions
  move. The existing local visor mask or owned procedural fallback is used.
- Exponential compression and screen composition bound the contribution.
  There is no fixed green tint or scene-wide exposure increase.
- Bloom-disabled, underwater, hidden-gameplay and menu paths do not receive
  these additions. The menu retains its separate rain presentation.

These are newly written GLSL adaptations of observed mechanisms. Image-based
highlight selection differs from CryEngine's per-light optical elements: a
bright reflection can generate a ghost, offscreen lights cannot contribute,
and the original per-source temporal occlusion fade is not reproduced.
The layer inherits the scene's light colour rather than forcing white output.
The pass adds filtered texture reads; unchanged frame rate is not asserted.

## Previous experiment validation

Waf stages and shader ABI verification check the RTX build. Isolated-desktop
smoke tests use `-nosound`. GPU readbacks permit visual comparison; smoke
assertions alone do not prove appearance. A first readback exposed detached
lamp copies in a sparse streak gather, so the final gather uses a broader
bloom level with overlapping samples. Native 1920×1080 readbacks show visible
soft highlight spreading without repeated lamp silhouettes; an independent
disabled-effect run preserves the baseline. The rain/stop/snow/disabled-rain
sequence passed. Final intensity tuning changes only the optical contribution,
not the previously checked drop shapes or lifecycle.

Menu isolation was checked in source, but the additional runtime menu test did
not pass: the first attempt lost its Windows module-query subprocess and also
reported missing imported rain upload; the repeat failed at Vulkan memory
allocation before rendering (`vkAllocateMemory`, result -2, rasterizer staging
buffer). These attempts are not evidence of successful menu runtime validation.
The new gameplay optics are explicitly excluded from the menu path.

Follow-up startup diagnosis found severely exhausted Windows commit headroom
and a failed CoF process still holding memory. The blue-noise resource matched
the pinned archive; the loader reports any KTX load failure as a missing file,
so that message alone does not establish a missing asset. After the failed
process exited, the installed runtime passed the isolated menu-optics sequence,
including imported rain upload, frame advancement, perspective hit testing and
settling. See `analysis/local/rtx-c_game_menu1-crash-recovery-isolated.json`.
The ordinary RTX launcher now rejects an already-running exact-path instance
and severe commit-budget exhaustion before creating another game process.
