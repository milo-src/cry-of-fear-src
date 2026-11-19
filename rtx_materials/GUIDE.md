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
* **Authored:** the first pack has 18 materials / 36 PNG masks, covering paving,
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
  B=A=255. RTGL uses XY as slopes, not conventional normalized XYZ normals.
* Keep the source dimensions and UV orientation. Large painted shadows are
  **not** height: the generator subtracts broad shading before deriving slopes.
  Filters wrap periodically for tiled surfaces. Avoid strong relief and mirror
  roughness on rough stone. Optional damp variation belongs only on deliberately
  selected surfaces, not every room or every dark pixel.

The generator combines fine grain with medium-scale relief so normal-map mip
filtering does not erase all detail at ordinary viewing distances. Automatic
masks use contrast-normalized medium-scale detail and a bounded slope; their
cache namespace is `cof_auto/v2_...`. Neither path increases scene exposure.

Commit profiles, manifest, PNGs and code together. KTX2 outputs and automatic
masks belong in the ignored build/runtime folders. No automatic commit is made.

## Verification

The runtime audit checks sidecar checksums and rejects unexpected files in the
owned authored namespace. `tools/smoke_rtx.py --material-check authored|auto|disabled`
checks selection and loader failures. Its default isolated desktop tests are
silent and do not verify the final pixels. Test menu exclusion with
`--menu-scene` and geometry preservation with `--lighting --lamp-check` on a
park map. Never use interactive tests without the user's permission.
