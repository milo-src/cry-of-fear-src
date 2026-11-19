# RTX environment development

User-approved implementation roadmap, 2026-11-19. Work on main, no commits.
Preserve BSPs, models, color textures, ordinary renderer and calibrated 3D menu.
Tests use isolated desktop + -nosound. GPU readback is opt-in; review PNGs.

## Implemented increment: static shoreline wetness and material filtering

- `rtx_map_lights.inc`: collect up to 128 unrotated, untargeted func_water
  bounds; spatial wetness fades across 20 map units and 14 units above water.
  World-solid segment samples conservatively block transfer through walls.
- `rtx_wetness.inc`: one 2048² atlas, up to 960 receiver tiles, world-face UVs;
  omit ceilings, emissive/transparent/black faces; no geometry dropped on limit.
- Reserved layer-3 tag `0x00492511`: zero-alpha fallback is invisible to stock
  shaders. Atlas alpha is linear wetness. Custom primary/reflection/indirect
  hit paths apply up to 16% albedo attenuation and a bounded roughness reduction.
- `rt_shore_wetness 0` disables on map reload. Menu excluded.
- Added pinned indirect init/final shader compilation and ABI checks.
- Early face/volume bounds rejection avoids sampling distant dry geometry.
- Native and authored KTX writers now filter perceptual roughness jointly with
  XY slope moments. Base masks remain unchanged; averaged r^4 plus bounded slope
  variance determines coarser roughness. No variance is counted twice. NPOT
  borders are included; automatic material cache namespace is now v4.

## Validation checkpoint

- Waf RTX build, all six pinned shader ABI checks, 14-module runtime audit pass.
- Local `tests/rtx_material_mips/check.py` builds the actual native KTX writer
  through Waf and compares six synthetic fixtures against the Python pack.
  Flat and tilted constant normals, roughness/normal variation, thin NPOT
  textures, preserved base/metallic/AO/alpha and KTX indices pass.
- Park: authored material selection, lamp geometry, 253 wet atlas tiles after
  broad-phase rejection and matching per-vertex UV counts pass. A wet batch
  reports 165 mapped vertices at the upload boundary (`wetness-upload` run).
  Enabled/disabled wetness captures reviewed.
  Shore response is subtle in the current wide view; this is not yet artistic
  approval of every shoreline or proof of motion stability/performance.
- Water fixture: automatic material selection and GPU readback pass; reviewed
  water/reflection frame. No shoreline tiles there (targeted water excluded).
- 3D menu: isolated runtime and GPU captures pass; no wetness atlas is created.
  Night palette, original menu styling, rain and water remain in reviewed frame.
- Ordinary renderer: `normal-c_park-lighting-rtx-material-regression-isolated`
  runtime assertions pass. No visual verification claimed for that test.
- First wetness run failed because layer-3 vertex storage was disabled. Fixed
  backend creation and raised both layer limits to four; subsequent runs pass.
  Failed/aborted pre-fix runs are not evidence of success.

Readbacks/logs are under ignored `analysis/local/`, including `shore-fixed`,
`shore-dry`, `materials-final`, `filtered-materials` and `shoreline-regression`.
Original game maps/assets remain untouched; no commits made.

## Visible relief correction — 2026-11-19

The previous pack changed shading but had no view-dependent depth. A successful
alias/loader check did not establish a convincing material result. This increment
adds bounded parallax occlusion mapping, not displaced geometry:

- Authored and automatic normal sidecars share RG tangent slopes, B height,
  A=254 marker. Legacy A=255 normals remain compatible without parallax.
- Slopes derive from the same height field instead of coarse six-pixel
  differences. Three authored stone profiles have wider roughness variation.
- Primary and reflection hits move albedo/normal/ORM coordinates together;
  indirect hits retain macro shading. Distant and grazing detail fades out.
  Automatic cache v5 avoids reusing old normal sidecars on custom textures.
- Fixed an out-of-bounds reflection derivative array: four material layers
  were enabled but `DerivativeSet.u` still had three entries.
- Waf rebuild, six shader ABI checks and installed 14-module audit pass.
  Local native/Python mip fixtures now also verify height filtering and A=254
  preservation, including NPOT and single-pixel-wide textures.
- Reviewed matching close park captures (`relief-before`, `relief-after`,
  `relief-disabled`) and GPU normal/roughness buffer probes. Both buffers have
  spatial material detail. Probe final shaders were temporary and restored;
  the installed production shader hashes pass the runtime audit.
- Automatic tiled-wall/water capture (`relief-auto`) and selected staircase
  motion frames (`relief-motion`) reviewed. Motion geometry assertions pass;
  sparse frames do not prove absence of all temporal shimmer.
- Menu (`relief-menu`) passes exclusion assertions; reviewed night scene,
  train, water and interface. Non-RTX `relief-normal` passes runtime assertions
  only, with no visual verification claimed.

All tests used isolated desktops and disabled game audio. Captures are in
ignored `analysis/local`. Original maps/albedo/models remain untouched. No
commits. This is a close-surface improvement, not completion of the full graphics
plan: old albedo resolution remains visible, models are unchanged, relief does
not cast geometric microshadows, and GPU pass cost is not yet measured.

## Grazing wall correction — 2026-11-19

User review still rejected the visible flatness. The earlier buffer probes
proved shader inputs, not the requested artistic result.

- Reproduced the alley at `-642 692 39 5 15 0` in `c_park`. Read-only BSP ray
  intersections identify the left slab wall as `c_hogmur2B`.
- Replaced the max-axis height footprint with the minor axis of its UV ellipse;
  nearby oblique surfaces no longer lose height solely from anisotropic stretch.
  Height sampling uses 16–64 bounded steps and a narrower tangent fade.
- Height scale and generated tangent slopes are consistent at the new strength;
  automatic sidecar cache is v6. The separate `c_hogmur2b` numeric profile models
  its joint/moulding, with grime assigned to roughness rather than raised veins.
  Profile matching remains source-content checked, not map-name checked.
- Added a pinned seventh shader, `RtRaygenDirect.rgen`, with 16-sample local
  height-field visibility for the selected light. Both diffuse and specular
  are attenuated; emission/indirect/refraction are excluded. This is a shading
  approximation, not displaced geometry or geometric shadow rays.
- Staged Waf build and seven shader ABI checks pass. Native/Python mip tests
  and final authored pack checksum comparison pass. Reviewed `grazing-before`,
  `grazing-after`, `grazing-no-relief-shadow`, and `slab-final` GPU readbacks.
  The A/B light-visibility effect is visible, but stochastic noise means raw
  pixel difference is not a performance or physical-accuracy metric.
- Staircase motion assertions pass; selected `relief-shadow-motion` frames
  reviewed, not continuous video. `relief-shadow-menu` exclusion checks pass
  and menu frame reviewed. Non-RTX `relief-shadow-normal` runtime checks pass
  without a visual claim. No original resources were modified.
- Tests used a separate `out/runtime-rtx-material-review` while the user's
  `out/runtime-rtx` process remained running. `smoke_rtx.py --runtime-dir` now
  supports this without changing the isolated desktop/audio requirements.

The silhouette remains the original flat BSP. These improvements do not meet
an expectation of actual protruding stone geometry; displacement/topology and
better authored material reconstruction remain separate work. GPU pass cost
and arbitrary-map artistic quality are not yet established. Do not describe
this checkpoint as completion of the full visual upgrade.

## Shader dependency and surface-detail correction — 2026-11-19

The following finding supersedes assumptions that earlier successful incremental
builds necessarily installed the latest include changes: `dep_nodes` was set on
the rule task generator, not its compiled task. The primary SPIR-V still had an
older timestamp while HitInfo and owned GLSL had changed. Includes are now
explicit task inputs, with only the entry point passed to glslang. A regression
probe changed an include, observed all seven outputs rebuild, restored it, and
verified that subsequent unchanged builds do no work. All seven descriptor and
uniform ABI checks pass after actual recompilation.

Close-range owned materials now have UV-anchored, three-scale analytic grain
and correlated roughness variation. Octaves fade by pixel footprint; unresolved
variance broadens the specular lobe. Wet/smooth/metallic surfaces suppress the
porous response. This is shared by primary/reflection paths, not UI or the
cinematic menu. It adds no ambient illumination or changes to source albedo.

The verified `c_obbsowa` texture now has 4x-resolution numeric height/slope/ORM
masks for its staggered joints and bevels (896x640, source remains 224x160).
The authoring/build pipeline separates mask dimensions from original content
identity. Mortar-height, metadata, source identity and mip-contract checks pass.
Automatic cache v7 reduces guessed macro relief: after the shaders really
recompiled, painted window frames/stains were excessively inflated. Independent
grain supplies fine detail without interpreting every stain as a large bump.

Readback comparisons: `block-before` versus `detail-final` at
`c_park -480 850 39 -5 20 0`, plus `detail-before` and the alley-wide captures.
`detail-normals` confirms the grain reaches the GPU normal buffer. A first coarse
grain experiment looked dented and was reduced to finer scales. These are actual
readbacks, not mockups. The visible improvement is strongest on joints/bevels;
low-resolution painted color detail and flat BSP silhouettes remain limitations.
No claim of a complete graphical remake or measured GPU pass cost is made.

Final validation: the v7 alley capture was reviewed, the auto-material moving
fixture passed with six readbacks (frames 0/3 reviewed), and the cinematic-menu
test passed with four readbacks (frame 2 reviewed). The ordinary-renderer park
smoke passed runtime assertions only, not visual QA. All runs used isolated
desktops and `-nosound`. The exact staged binaries/shaders/masks were installed
to `out/runtime-rtx` with checksums and rollback, then the installed runtime
audit passed. No original map/color/model/audio files were modified.

## Remaining work

1. Improve close-range and moving-camera shoreline validation; address exact volume boundaries and irregular or
   moving water. Current bounds are a conservative first-stage approximation,
   not a complete water topology implementation. No weather wetness yet.
2. Material scale and model material profiles;
   foliage alpha/shadow stability. Avoid guessing metal from brightness.
3. Water continuity, depth/absorption, bank damping, event-driven ripples.
4. Multilight volumetric backend with proper buffers, reprojection, occlusion
   and measured GPU cost (not just an additional cvar or brighter fog).
5. Weather exposure, accumulation/drying, restrained screen droplets.
6. Reflection visibility outside camera frustum, temporal stability, GPU timings.

Each increment needs identical-pose comparisons, menu exclusion, toggles,
runtime resource-limit checks and a non-RTX regression. Preserve authored dark
areas; never compensate defects by globally raising exposure or ambient light.
