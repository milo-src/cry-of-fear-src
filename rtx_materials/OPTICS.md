# RTX optical highlights: evidence and adaptation

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

## Implemented in CoF

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

## Validation

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
