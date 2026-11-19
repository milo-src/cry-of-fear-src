# RTX material masks

This folder contains original numeric material adaptations for the optional RTX
renderer. It contains no replacement color textures, maps, models or game audio.
The ordinary renderer and cinematic 3D menu retain their existing materials.

## Two levels of material support

* **Automatic:** opaque BSP/WAD surfaces receive conservative, locally derived
  roughness and tangent-space microrelief. This has no map-name allowlist, so
  custom maps work without a material pack. The existing `sound/materials.txt`
  supplies surface classes where available; unknown surfaces stay matte and
  nonmetallic. Color/brightness alone cannot identify a physical substance.
* **Authored:** the world pack has 25 materials / 50 PNG masks, covering paving,
  masonry, concrete, asphalt, gravel, earth, painted and rusted metal. Matching
  raw texture content selects these more carefully tuned masks. A different
  custom texture with the same name receives the automatic treatment instead.

Both paths preserve the renderer's original color pixels, geometry, light
intensity, exposure and darkness settings. Water, sky, translucent surfaces,
cutout foliage, animated frames, emissive surfaces and UI keep their specialized
render paths. The vehicle extension adds 15 studio skins / 30 PNG masks;
other models retain the existing studio adapter. It does not promise physically accurate
material identification from a single color image.

## Build and use

### RTX vehicles

The `aud`, `vari`, `polisbil` and `foretag` families (including shipped color
variants) have content-verified atlas masks for glass, painted panels, rubber
and wheels. Windows use a dark, nearly mirror-smooth reflective coating. The
RTX shader replaces the painted cabin's diffuse response only inside the glass
mask, leaving window pillars and seals intact. This uses the existing metallic
BRDF as an artistic coated-tint approximation, not a physical transparent cabin.
Primary, reflected and indirect hits share that material. Door seams and handles
receive shallow normal/parallax relief. No new interior, silhouette or collision
geometry is reconstructed.

Passenger-car mirror faces use a separate traced metallic material, selected
by fingerprints of their exact studio drawing commands. This avoids turning
shared window UVs or mirror housings into mirrors. Van mirrors retain their
existing material because their glass and housing share drawing commands.
The fire engine is outside this passenger-car/van pack. Unsupported or modified
skins retain the stock studio response. Menus and the ordinary renderer never
select these aliases or mirror overrides.

Generate with `python rtx_materials/author_vehicles.py --game-dir out/runtime/cryoffear`.
Only numeric PNGs and manifest fingerprints are exported. Original MDLs,
palettes and color textures are read-only. The 30 vehicle PNGs occupy about
20 MiB; building them does not require the original resources. Normal alpha
253 marks shallow vehicle relief and excludes porous world grain; world masks
retain alpha 254. Vehicle ORM.A stores inverse glass coverage (0=glass,
255=body); it is metadata, not opacity. ORM.R stays 255: the renderer's default
ORM swizzle forces R to one but preserves A. Glass uses flat shading normals, roughness
0.055 and a dark neutral reflection tint. It does not borrow relief from the
painted cabin. Glass stays opaque because the models lack full interiors.
`rt_material_masks 0` plus map reload disables vehicle masks and mirror overrides.

Verification: `python -m unittest discover -s rtx_materials`, native mip tests,
and `tools/smoke_rtx.py --lighting --map c_park --vehicle-check enabled --readback ...`.
The vehicle check observes masks and mirrors at the geometry-upload boundary;
readbacks require separate visual review. Use `--vehicle-check disabled
--cvar rt_material_masks 0` for fallback checks. Automated runs retain `-nosound`
and the isolated desktop.

### Waf build

Run `python tools/build_rtx.py` from the repository root. Waf compiles the
committed PNGs to linear RGBA8 KTX2 with mipmaps and installs them only in
`out/runtime-rtx/rt/mat/cof_pbr/`. Python needs Pillow and numpy. The regular build
does not need the source WADs to compile these masks.

Runtime-generated masks go to `out/runtime-rtx/rt/mat/cof_auto/`, which is
disposable and not committed. Their names include content, dimensions and
material class. Automatic mask resolution is at most 256 px on either axis;
the renderer retains the original albedo resolution. The active automatic
catalog is bounded to 512 textures to limit extra GPU descriptors. Overflow,
allocation/write failure or unsupported textures retain scalar PBR response;
geometry is never dropped to make room for cosmetic masks.

`rt_material_masks 0` followed by reloading the map disables both mask paths;
`rt_material_masks 1` restores them. This setting does not change light levels.

## Authoring for a mod

No extra files are necessary for automatic support. For deliberate artistic
control, add a lowercase texture key and profile to `profiles.json`, then run:

```text
python rtx_materials/author.py --wad-dir "path/to/mod" --only my_stone
python tools/build_rtx.py
```

The authoring command needs numpy and Pillow. It reads WAD3 files without
modifying them and exports only masks. `--only` keeps the other pack entries;
without it, the command regenerates every profile. Ambiguous same-name WAD
textures are rejected. The manifest records dimensions, source WAD filename,
SHA-256 and the runtime identity checksum. Runtime validation reads the raw
mip before texture gamma/resampling; it never ships a copy of the color image.

Masks can then be hand-edited without re-running the authoring command:

* `<name>_orm.png`: RGBA8. R=255 (unused), G=perceptual roughness,
  B=metallic, A=255. Dirt/paint are dielectric even when covering metal.
* `<name>_n.png`: RGBA8. R/G encode bounded tangent slopes around 128;
  B encodes height and A=254 marks the height-enabled contract. Legacy A=255
  remains valid and disables parallax. RTGL uses XY as slopes, not conventional
  normalized XYZ normals. This alpha is metadata, never surface opacity.
* Keep the source UV orientation and aspect ratio. Optional `mask_scale: 2|4|8|16`
  authors higher-resolution numeric sidecars; manifest `mask_width/height`
  describe these independently of the original identity dimensions (maximum
  2048 per axis). This never enlarges or replaces the color texture.
  Large painted shadows are
  **not** height: the generator subtracts broad shading before deriving slopes.
  Filters wrap periodically for tiled surfaces. Avoid strong relief and mirror
  roughness on rough stone. Optional damp variation belongs only on deliberately
  selected surfaces, not every room or every dark pixel.

The generator combines fine grain with medium-scale relief so normal-map mip
filtering does not erase all detail at ordinary viewing distances. Automatic
masks use contrast-normalized medium-scale detail and a bounded slope; their
cache namespace is `cof_auto/v7_...`. Inferred macro height is intentionally
shallow to avoid inflating painted stains/window frames; procedural grain
supplies the independent fine detail. Neither path increases scene exposure.

Height-enabled masks use bounded parallax occlusion mapping on primary and
reflection hits. It shifts albedo, normal and ORM lookup coordinates together,
with 16–64 height samples, minor-axis footprint filtering and a near-tangent
fade. Indirect lighting retains the macro surface. This gives close surfaces
view-dependent relief, but does not add geometry, silhouettes, collision or
geometric microshadows. A separate 16-sample height-field visibility check
attenuates the selected direct light's diffuse and specular contribution at
primary opaque hits. It leaves indirect lighting, emission and refracted hits
alone. Height inferred from color is an artistic approximation;
hand-authored height fields are preferable when the source contains painted
decals or shadows that cannot be separated automatically.

The content-verified `c_hogmur2b` profile has a dedicated height layout for its
slab joint and upper moulding. Its grime changes roughness rather than becoming
raised veins. `height_layout: cof_hogmur2b` is specific to that source image;
do not copy it onto arbitrary custom textures. Other surfaces use the generic
fallback or their own authored masks.

`c_obbsowa` additionally has a content-verified three-course masonry layout.
Its 1792x1280 numeric masks model recessed mortar and bevels; stains remain color
detail, not large bumps. This layout is source-specific, not a generic brick
detector for mod textures.

Owned height-enabled materials also receive procedural close-range detail in
`rtx_surface_detail.glsl`. Three analytic height gradients add surface grain
and correlated roughness variation independently of the source image resolution.
The pattern is anchored in UV space; no frame/time randomness is used. Smooth,
wet and metallic responses suppress the porous grain. Each octave fades before
it becomes subpixel, with remaining slope variance moved into roughness. This
is an artistic fallback for unknown materials, not reconstructed geometry or
new high-resolution albedo. Primary and reflected surfaces share the function;
indirect lighting uses the macro material. Menu resources do not opt in.

Shader includes are explicit Waf task inputs. A prior task-generator `dep_nodes`
attribute was ignored by rule tasks, allowing changed `.glsl/.inl` files to leave
old SPIR-V installed. The compiler now receives only the entry point while Waf
tracks every include. Successful runtime loading alone does not prove that a
source change was compiled; check build dependencies and final GPU frames.

Numeric mipmaps preserve unresolved normal-slope variation as additional
roughness. Both authored and automatic masks use the same bounded response;
base-level PNG data, metallic, opacity and AO are preserved. This avoids losing
all surface variation when distant normals average out. Non-power-of-two masks
include their border rows and columns. It is a filtering approximation, not a
physical reconstruction of the source texture.

Static shoreline wetness is RTX-only (`rt_shore_wetness 0` disables it after a
map reload). A generated world-face atlas gradually lowers roughness and darkens
surfaces near untargeted, unrotated `func_water` volumes. It uses a 20-unit lateral
reach and 14-unit height fade, with conservative world-solid obstruction checks.
It does not require map names or changes to game assets. Irregular water bounds,
moving water and rain accumulation are not handled yet. The cinematic menu is
excluded. Allocation/atlas limits retain the ordinary dry surface and geometry.

Commit profiles, manifest, PNGs and code together. KTX2 outputs and automatic
masks belong in the ignored build/runtime folders. No automatic commit is made.

### High-resolution committed pack

All 50 PNG masks in `rtx_materials/masks/` now contain separately generated
periodic microstructure. Six wall materials use 1536–2048 px on their long edge;
the remaining materials use 1024–1152 px. Aspect ratios stay unchanged: the slab wall
`c_hogmur2b` is 1792x1536, while `c_concrete1` is 2048x2048. The plaster/window panels `c_obbsobwin1/2` have 2048x2048 masks with
separate plaster, frame and recessed glass responses. The source color
textures and content fingerprints retain their original dimensions and bytes.

Stone/concrete receive shallow pores and mineral grain, earth a coarser grain,
rust small pits and stronger roughness variation, and paint a gentler coating.
Seeds derive from texture names, so authoring is reproducible. Grain radii and
source-detail filters use original texel units; increasing output resolution does
not shrink the original joints or reinterpret broad painted shadows as relief.
Height and normal slopes share one field, with correlated roughness. These are
authored material approximations, not recovered high-resolution color detail.

The PNG sources occupy about 78 MiB. Linear uncompressed runtime masks plus mips
are larger; only matched materials are selected. Numpy box reductions keep the
2K mip build bounded without Python objects per texel and preserve the existing
normal-variance/roughness contract, including non-power-of-two tile edges.

Regressions: `python -m unittest discover -s rtx_materials` and
`python tests/rtx_material_mips/check.py`. Keep `author.py`, `profiles.json`,
`manifest.json`, `masks/`, `build.py`, and `wscript` together in Git. The automatic
custom-map fallback remains available; these source-specific layouts are never
applied to a different image just because its texture name matches.

## Verification

Gameplay RTX now applies a static damp-weather finish to world surfaces that
see BSP sky. `rt_outdoor_wetness` (0–1, default 1, reload map) controls it;
`rt_shore_wetness` independently controls the water-contact film. Turn both off
to disable the film entirely. Ground receives stronger film than vertical
surfaces; recognized earth/wood stays rougher. Metalness is unchanged. Masks
are generated in memory from the BSP, including custom maps, without editing
the map or original color textures. This is a static appearance setting, not
yet a rain accumulation/drying simulation. Moving roofs/props are not part of
the static exposure test.

`rt_light_shafts` (0–2, default 1.4) scales gameplay scattering, with two
shadow-tested light samples per volume cell. It does not raise exposure,
ambient light or lamp power. Authored scripted distance fog retains priority;
the 3D menu retains its separate atmosphere and material policy.

The runtime audit checks sidecar checksums and rejects unexpected files in the
owned authored namespace. `tools/smoke_rtx.py --material-check authored|auto|disabled`
checks selection and loader failures. Its default isolated desktop tests are
silent and do not verify the final pixels. Test menu exclusion with
`--menu-scene` and geometry preservation with `--lighting --lamp-check` on a
park map. Never use interactive tests without the user's permission.

Automatic masks preserve the existing scalar material presets, including
intentional metallic values, rather than resetting them to an acoustic fallback.
The automatic fallback also recognizes `tile` / `kakel` names when the acoustic
material table omits a wall. It keeps dark grooves rough and gives ceramic a
broader highlight, without classifying paint as metal. Unrecognized textures
retain conservative parameters; explicit authored masks are preferable to
inferring physical properties from a color image.

For background GPU image review (no desktop screenshots or input):

```text
python tools/build_readback.py
python tools/smoke_rtx.py --water-view --readback --material-check auto
python tools/smoke_rtx.py --menu-scene --readback
```

The opt-in layer copies the presented swapchain image to host memory. It lives
only in the build directory, is enabled only for that child, and is not registered
with Windows. Elevated test hosts use a restricted medium-integrity child token
because Vulkan ignores layer environment paths in elevated applications. The
isolated desktop and `-nosound` remain mandatory. Capture errors fail the test;
there is no fallback to the user's desktop. Reports say `readback_captured_for_review`:
nonblank image validation is not an artistic/visual pass. Review the PNGs separately.
The default smoke path and the ordinary game launcher do not load this layer.

The RTX light adapter also has a measured fixture profile for `hattlykta.mdl`.
Its authored spot at local height 108 intersects the opaque hood. Matching
downward spots are sampled at the lower diffuser aperture (height 96.5,
radius 3.125 map units), preserving their power, color, cone and lightstyle.
This removes the artificial black disk beneath the lantern without disabling
geometry shadows or adding ambient light. Matching uses model, position and
direction, not map names; other fixtures and the cinematic menu are unchanged.

RTX rain refraction and light-reactive visor smears are described in
[LENS.md](LENS.md), including controls, optional local Crysis mask import,
fallback behavior and isolated-desktop verification.
