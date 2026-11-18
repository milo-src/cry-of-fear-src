# Lighting: recovered contracts and current port boundary

Target is the installed client.dll, SHA-256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
All DLL observations below are static REA/Ghidra captures. No original DLL was
loaded into the reconstructed runtime. Private capture bundles are under
`analysis/local/graphics-lighting-*`, `graphics-lightmap-formulas`, and
`graphics-glproxy`; `maps.json` is reproducible with `tools/inspect_graphics_maps.py`.

## Directional BSP lightmaps

197 of 236 shipped BSPs have styles 61/62/63. These encode ambient RGB,
diffuse RGB, and a direction vector; adding all three as ordinary GoldSrc
lightstyles adds the vector bytes to illumination and is incorrect.

Native 0x1005a110 selects the lightmap paths. The flat-normal fallback
0x10059660 computes, in normalized RGB:

```
z = direction.blue / 127 - 1
rgb = ambient + diffuse * z
rgb = Gamma(2 * rgb) / 2
```

0x10059880 handles ambient-only faces as `Gamma(ambient)`.
0x10059f30 scales by 255, normalizes all channels together if the maximum
exceeds 255, clamps negatives, and truncates to bytes. Default gamma/contrast/
brightness from 0x10060690 are 1/1/0. This is the scope implemented in
`src/cof/render/cof_lightmap.h`, inserted by `tools/prepare_graphics.py` into
the disposable Xash renderer before its ordinary lightstyle loop. Ordinary
maps retain their existing path. Xash display gamma/overbright remains a
source-engine adaptation; this is not a claim of final pixel equivalence.

The Waf-built C test `tests/cof/render/lightmap_test.c` exercises the actual
header: ordinary-style fallback, ambient-only, neutral/positive/negative Z,
negative RGB clipping, common peak normalization, reordered styles, no samples.

## Bump and gloss discovery, not yet ported

0x10069410 associates world textures with `gfx/bumpmaps/<texture>.tga`,
`<texture>_gloss.tga`, and `<texture>_glosshi.tga`. High gloss requires a
normal map. 0x10059990 builds the separated lighting atlases used by bump
rendering. The current implementation uses the recovered flat-normal fallback;
per-pixel normals, high-specular passes and their render-state sequencing remain
unimplemented. Merely staging the images does not activate these passes.

## Dynamic/projected lights: native evidence, renderer pending

Client 0x10060000 consumes renderfx 71 entities. Radius is network renderamt
shifted left three, RGB is rendercolor divided by 128, lifetime is time+0.01.
Nonzero scale supplies both spotlight FOVs; rendermode selects
`gfx/spotlight%d.tga`. Server creation and use transitions are implemented in
`graphics.cpp`, but the native custom-light renderer is not yet ported.
The pre-existing source-engine flashlight is still a prototype.

0x1005c0f0 allocates 32 custom lights, keyed by entity or expired slot.
0x1005a8c0 builds a 32-cubed attenuation texture: interior intensity is
`255*(1-min(distance/16,1)^2)` and every outer face is zero. 0x1005a630 and
0x1005a750 build the alternative 1D/2D quadratic attenuation textures.
0x1005ab50 builds spotlight attenuation with `255*(1-i*i/65536)` for interior
samples, zero endpoints, linear filtering and edge clamping.

0x100ae540 configures flashlight2 with radius 700, RGB 1.4 and
`gfx/flashlight2.tga`. FOV is 50 plus a smoothed near-wall term; a 150-unit
trace gives target `(1-fraction)*30`, approached at `abs(delta)*10*dt`.
0x100aea10 configures the phone branch with RGB (.46,.46,.51) and
`gfx/flashlight.tga`, with additional reduced-light state branches.
These are evidence for the next renderer pass, not settings silently substituted
into the current approximate flashlight.

## Original OpenGL proxy

Shipped opengl32.dll (SHA-256
`26732d7a9aeb8079f2d0c0920f7e433521a2fcc570017c7dafd45bdd30cdbeab`)
adds `PARANOIA_HACKS_V1` to GL extensions (0x10001ed8), wraps selected texture
entrypoints (0x1000145f), and remaps selected glDepthRange calls to (0,.8)
(0x100011c3). SwapBuffers and TexImage2D wrappers observed here forward calls.
The port uses direct source-renderer integration and does not ship this proxy.

## REA references

| Observation | Evidence ID |
|---|---|
| Flat-normal fallback 10059660 | ev_c7846929311ccb91f01ee9934b58928facef89c45df3d6edcccc8372cc45efc3 |
| Ambient-only 10059880 | ev_9e51b0616b90d87e4bd2f6ec16f1f99b4f68fda8012bc4dbaf6eef203b6edba0 |
| Quantization 10059f30 | ev_ec3cfe8e832266e4b8b5fc22fbcdc23d317b8cf1a9aec833ddc9219bfd7a2366 |
| Renderfx 71 consumer 10060000 | ev_e17b42abed63a83bb91d5395fb18d3927294e5157a85fe73f0b4a74d3b63acee |
| Texture association 10069410 | ev_59d852587fc7085cae8f059bf2d34fdc1467b698faa0d0d86228dbbd80be3ab6 |
| 3D attenuation 1005a8c0 | ev_24a2740feb44f4e87cefd7577182017b7c9daefd3cdc76c74233bda921870596 |
