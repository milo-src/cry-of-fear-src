# CoF shipped shader assets and reconstructed water pass

Scope: static inspection of the installed `cryoffear/cgshaders`, graphics TGA
assets, configuration, and the native client shader call sites. No original
DLL was executed. `tools/inspect_graphics_assets.py` reproduces the asset
inventory in `assets.json`, including SHA-256, dimensions and uniforms. Its
preview is ignored under `analysis/local/graphics-assets/light-textures.png`.

## Evidence

All six shipped Cg files were read, including the two fp20 alternatives.
The inventory contains their complete hashes and 1,232 candidate graphics
textures. `textures/noise.tga` is the grayscale water noise/caustic pattern;
the flashlight/spotlight TGAs are projected light images, not shader programs.
Installed configuration values are user settings, not evidence of defaults.

Native REA evidence supplied by the independent client-glue scope:

| Client address | Recovered role | Local evidence |
| --- | --- | --- |
| `10086890` | Power-of-two captures, Cg program loading, noise texture | `analysis/local/graphics-client-first/000-pseudocode.c` |
| `10086d10` | Complete water multipass and uniform binding | `analysis/local/graphics-client-first/002-pseudocode.c` |
| `10093d10` | Water called during `HUD_DrawTransparentTriangles` | `analysis/local/graphics-client-first/004-pseudocode.c` |
| `100866e0` | Black fullscreen fill, preserved depth, depth writes disabled | `analysis/local/graphics-client-second/002-pseudocode.c` plus assembly inspection by client scope |
| `100875d0` | Original scene fullscreen restore | `analysis/local/graphics-client-second/003-pseudocode.c` |
| `10088140` | RGB capture textures, linear filtering, repeat wrap | `analysis/local/graphics-client-second/010-pseudocode.c` |
| `10087860` | Hides entity water geometry when Cg water is enabled | client native scope |

The native layout was checked against `entity_state_t`: entity offset `0x2e8`
is **curstate.skin**, not solid. The pass scans entity indices 0 through 1023
for `skin == CONTENTS_WATER (-3)`. `curstate.mins/maxs` are used directly as
world-space bounds; the original does not add entity origin or rotate them.

## Exact shader formulas

The source-owned `src/cof/render/shaders/water.{vert,frag}` ports the modern
Cg path to GLSL 1.20. In the following equations, `uv` is the screen coordinate
scaled by `(viewportWidth / captureWidth, viewportHeight / captureHeight)`:

```
offset = sample(noiseCapture, uv).rg
sampleUV = uv + (0, .05) * offset.r + (0, .05) * offset.g
mask = sample(maskCapture, uv).r
output = vec4(sample(sceneCapture, sampleUV).rgb, 1) * mask
```

The output is then blended with `SRC_ALPHA, ONE_MINUS_SRC_ALPHA`, including
the mask multiplication of RGB *and* alpha. Offset samples are not converted
from unsigned values to signed normals. No Fresnel, reflected camera, blur,
or physically based material appears in this path.

Sampler 0 is the rendered noise capture; sampler 2 is the original scene;
sampler 3 is the white water mask. The original initializes an identity LUT
at sampler 1, but the modern fragment shader never reads it. `flScreen=.965`
affects the vertex output used only by the legacy fp20 path. The GLSL port
retains this varying/uniform interface, which the compiler can optimize out.

The fp20 alternative uses `noise.gb`, an identity LUT lookup, and NVIDIA
`offsettex2D` on the vertically offset coordinate. It is inventoried but not
implemented: the recovered modern path works without the obsolete Cg runtime.

The black shader is also ported literally and compiled for validation:

```
s = scene.r + scene.g + scene.b
output.rgb = .2 - (2 * (s / .5) - 1) = 1.2 - 4*s
output.a = 1
```

This formula is **not** a conventional grayscale transform. Asset presence
does not establish when it runs; it is not connected to the `BlackWhite`
message without proof of that connection. The native black-shader binding
helper's activation remains unresolved by this scope.

## Native water sequence and integration

The pass executes immediately after the reconstructed client's transparent
triangle callback, before Xash's later particles, viewmodel and water pass.
`tools/prepare_engine.py` copies the source-owned renderer into disposable
`build/engine-source/ref/gl`, generates the C shader strings from the GLSL
files, and adds lifecycle/callback hooks. Vendored `external/` is unchanged.
Waf's renderer C source glob compiles the extra file.

1. Copy the current viewport RGB into the scene capture.
2. Fill the framebuffer black with a quad. Preserve the scene depth buffer.
3. With depth testing and no depth writes, render the noise texture over each
   water AABB's top at `maxZ + 1`. UVs use world rectangle extents divided by
   128 and offsets `time/cl_waterspeed_x`, `time/cl_waterspeed_y`.
4. Capture this rendered noise; fill black again without clearing depth.
5. Draw white top quads at `maxZ`, with depth testing and no depth writes.
6. Capture the mask, fill black, then restore the original scene texture.
7. Run the water fragment program over the viewport using the bindings and
   alpha blend above.

Original registered defaults are `cg_water=1`, `cl_waterspeed_x=32`,
`cl_waterspeed_y=20`, all archived. The renderer publishes read-only
`cof_water_ready=1` only after shader, noise asset and captures are available.
The client suppresses stock water entities only when both `cg_water` and
readiness are true. Unsupported GLSL contexts, missing assets and allocation
failures leave stock water enabled. `cof_render_status` prints shader/resource
status; the first water-bearing frame logs `COF_WATER` with dimensions/count.

The capture dimensions are powers of two, matching the original. Captures
use RGB, `GL_LINEAR`, and `GL_REPEAT`. OpenGL state is saved and restored
without changing Xash's cached binding state. The original shaders need a
compatibility context; GLES/core contexts explicitly retain stock water.

## Explicit port boundaries and remaining validation

- This implementation uses OpenGL texture allocation and GLSL compilation
  instead of raw original texture IDs and NVIDIA Cg. No original DLL is loaded.
- Capture padding is initialized to zero instead of copying outside the
  drawable; an invalid zero water-speed divisor is treated as no scroll.
- The native water pass does not toggle fog/alpha test itself; this port
  preserves their incoming state. Earlier native wrapper setup is unresolved.
- The engine texture loader supplies `textures/noise.tga`; its decoding/gamma
  must be assessed separately if pixel comparison exposes a mismatch.
- The entity hide bridge uses `HUD_AddEntity` rejection instead of mutating
  baseline/previous/current render state like the original.
- Frames with no nondegenerate water AABB skip all water captures and GL
  state changes: the native pass would otherwise be an identity operation.
  This preserves readiness across map changes and initializes resources when
  water first appears. The engine noise-texture handle is revalidated by
  asset name before reuse.
- The legacy fp20 shader, a proven black-shader activation, underwater side
  faces/reflection effects, and bump-mapped/projected lighting are not claimed
  by this water implementation. Lighting has its own independent evidence.
- Waf configure/build and deployment passed on 2026-11-18. The first compile
  exposed the engine header's missing `GL_VIEWPORT` token; the port now uses
  its explicit OpenGL enum value. The subsequent isolated c_apartment3 water
  fixture passed at 1280x720 and 800x600; captured frames show water displacement
  and logs confirm shader execution. See implementation.md for validation limits.

The client fog bridge publishes `cof_fog_enable/r/g/b/start/end` each frame,
with RGB in 0..255. `CofRenderFog` applies these through Xash `TriFogParams`
and `TriFog` before `R_DrawWorld`; a HUD triangle callback is too late for
world geometry. The native `ref_params.waterlevel < 2` gate is preserved;
internal underwater fog retains priority. Client message
parsing/interpolation and its native evidence belong to the client scope.

Further native evidence (`1005d7a0`, supplied by the client scope) establishes
that the actual `BlackWhite` effect is a separate register-combiner pass:
grayscale weights `.32,.59,.09`, blended with alpha equal to the raw message
byte divided by 255. It does not invoke `black_fp.cg`. The replacement has
no Cg dependency: `shaders/desaturate.frag` implements the native dot product
and framebuffer alpha blend. The native caller is at the start of
`HUD_Redraw` (`10072740`, call at `1007275e`), before HUD painting. The port
runs at the end of the world frame, after `R_DrawWaterSurfaces`, before HUD
drawing. `gl_posteffects=1` gates it; nonzero `cof_blackwhite/255` overrides
`gl_grayscale=0`. Zero message value leaves the grayscale cvar as fallback.
The shader alpha is clamped to 0..1, matching the native GL color clamp.
The first applied pass logs `COF_DESATURATION`. The second Waf build with
this pass also succeeded and was deployed. Runtime BlackWhite190 produced
alpha .745098, a visibly desaturated world and coloured HUD; zero restored
world colour. Full original-runtime pixel equivalence has not been established.
