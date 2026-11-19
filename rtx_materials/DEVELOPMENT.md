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
