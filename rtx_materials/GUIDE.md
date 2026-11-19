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
* **Authored:** the pack has 19 materials / 38 PNG masks, covering paving,
  masonry, concrete, asphalt, gravel, earth, painted and rusted metal. Matching
  raw texture content selects these more carefully tuned masks. A different
  custom texture with the same name receives the automatic treatment instead.

Both paths preserve the renderer's original color pixels, geometry, light
intensity, exposure and darkness settings. Water, sky, translucent surfaces,
cutout foliage, animated frames, emissive surfaces and UI keep their specialized
render paths. Models currently retain the existing studio material adapter;
this pack targets world/brush surfaces. It does not promise physically accurate
material identification from a single color image.

## Build and use

Run `python tools/build_rtx.py` from the repository root. Waf compiles the
committed PNGs to linear RGBA8 KTX2 with mipmaps and installs them only in
`out/runtime-rtx/rt/mat/cof_pbr/`. Python needs Pillow. The regular build does
not need the source WADs or numpy to compile these masks.

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
* Keep the source dimensions and UV orientation. Large painted shadows are
  **not** height: the generator subtracts broad shading before deriving slopes.
  Filters wrap periodically for tiled surfaces. Avoid strong relief and mirror
  roughness on rough stone. Optional damp variation belongs only on deliberately
  selected surfaces, not every room or every dark pixel.

The generator combines fine grain with medium-scale relief so normal-map mip
filtering does not erase all detail at ordinary viewing distances. Automatic
masks use contrast-normalized medium-scale detail and a bounded slope; their
cache namespace is `cof_auto/v6_...`. Neither path increases scene exposure.

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

## Verification

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
