# Native shader/pass contracts: material lighting, specular, blur, black

Static investigation, 2026-11-19; trigger/material/profile follow-up 2026-11-20.
Original client SHA-256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
No original code was executed. `shader-coverage.json` retains the literal Cg
and embedded ARB source; this document follows the actual upload and draw paths.
Own captures: `decompiled/client/captures/shader-pass-{core,bindings,inputs,bump}`.
Each `capture.json` retains source hash, selector, provider and Evidence ID.
The JSON companion links these observations and keeps unresolved facts explicit.

Follow-up navigation: `blur-triggers.md` and `blur-server.md` resolve the Blur
message, waterlevel and Damage timer; `surface-flag-producers.md` resolves face
classification and lifecycle; `cg-profile-routing.md` resolves client-side
modern/fp20 selection, program cache and extension-string handling.

## Entry points and pass order

`HUD_DrawNormalTriangles` → `1005ff50` → `1005eeb0` is the ordinary world path.
`1005ff50` requires native frame flag `104cdd64`; `1005eeb0` requires flag
`104cdd60`. The latter traverses visible world and eligible brush entities,
not just one fullscreen shader:

1. `100622c0`: clears per-frame low/high/shared specular surface lists and
   64 lightmap chains; blend off, depth writes on, depth function LEQUAL.
2. World traversal `1005fca0` and initial brush draws `1005f570(...,1)` feed
   surface dispatcher `10061cf0`. It skips flag `0x10`, handles flag `4`
   separately, and uses bump path `10061080` only for surface flag `0x200`
   with `gl_bump != 0`; otherwise `10061b40`.
3. `100626e0`: completes separated lighting/ambient passes. With exactly two
   texture units, diffuse atlas is multiplied through `ZERO,SRC_COLOR`; then
   ambient atlas is added using `ONE,ONE`. All use EQUAL depth and no depth writes.
4. `gl_dynlight != 0` invokes `1005b300` custom dynamic-light pass.
5. `100627e0`: applies base texture and optional detail texture over accumulated
   illumination, blend `DST_COLOR,SRC_COLOR`. Detail uses material field `+0x14`
   only with `gl_detailtex != 0`, and UV scale fields `+0x20/+0x24`.
6. `10062940`: low/high specular passes.
7. Separately classified brush entities run `1005f570(...,0)`, including their
   own dynamic/light/material/specular work. World depth returns to LEQUAL.

`10062940` has two typed direct callers: `1005eeb0` and `1005f570`. It is not
an unreferenced shader asset. The existing menu-sky capture of `1005f570`
independently shows the same ordering for brush entities.

## Shared geometry and material inputs

`10062fe0(unit,mode)` selects client texture-coordinate arrays. Vertex stride
is 28 bytes: position float3 at offset0, material UV float2 at offset12,
lightmap UV float2 at offset20. Mode0 disables that unit's coord array;
mode1 uses material UV; mode2 lightmap UV; mode3 position. Memory pointer is
`104cdf8c + offset`, or VBO offset only when backend state `104cdf94 == 2`.

`10069410` proves material records (lookup helper `100621d0`):

| Field | Native resource |
|---|---|
| `+0x10` | `gfx/bumpmaps/<texture>.tga`, normal map |
| `+0x14` | configured detail texture |
| `+0x18` | `gfx/bumpmaps/<texture>_gloss.tga` |
| `+0x1c` | `gfx/bumpmaps/<texture>_glosshi.tga`, loaded only with normal map |
| `+0x20/+0x24` | detail UV scales |

Surface `+0x38` is lightmap atlas index. Atlas bases are `101cbf70` ambient,
`101cbf74` diffuse, `101cbf78` encoded direction; these roles are corroborated
by their use in separated lightmap generation and diffuse/specular consumers.

`10063150(surface,eye)` sets unit0's texture matrix to tangent-space
`(dot(T,eye-position), dot(B,eye-position), dot(N,eye-position))`.
`100632e0` is the low-quality reflected-direction variant:
`(dot(T,position-eye), dot(B,position-eye), dot(N,eye-position))`.
Basis comes from a per-face 40-byte table `104cdf90`: normal at+4, T at+16,
B at+28. Constructor `10061eb0` copies and separately normalizes texinfo
`vecs[0].xyz` into T and `vecs[1].xyz` into B. It copies the face plane normal
into N and negates N only when face flag `2` (PLANEBACK) is set. There is no
extra Y flip, cross-product construction or Gram-Schmidt orthogonalization.
Helpers were also captured: `100947c0` divides each component by length only
when the length is nonzero; `10094730` XORs each float sign bit. Their behavior
is verified from native bodies, not inferred solely from call-site names.
Vertex positions, base UV and lightmap UV are copied from the original polygon
records unchanged. The constructor skips surface flags `0x14` and empty polys.
Surface polygon ushort+14 selects the table entry. These matrices
are essential; copying the ARB program alone would feed it world position
instead of its intended eye/reflection vector.

## Low-quality specular: four native capability paths

`10060e50` selects and logs a mode:

1. NV register combiners: `gl_nocombs == 0`, combiners present, more than one
   general combiner, at least4 texture units and `gl_twopassspecular == 0`.
2. NV two-pass combiner route when the above one-pass condition fails but
   framebuffer alpha capability `101be800` is present.
3. ARB fragment program when ARB capability `101be798`, both tracked capacities
   `101be79c/101be7a0 > 3`, no prior compile failure `104ce014`, and
   `gl_noshaders == 0`. Loads 660-byte source `1018f858` into `1018f850`.
4. Fixed-function fallback when framebuffer alpha exists; otherwise disables
   specular and emits the native error.

`10061290(mode)` is the actual draw function. Mode3 and mode1 share inputs:

| Texture unit | Target | Input | Coordinate |
|---|---|---|---|
| 0 | CUBE | native normalization cubemap `104cddc0` | position through reflected tangent matrix `100632e0` |
| 1 | 2D | encoded direction atlas `101cbf78 + surfaceAtlas` | lightmap UV |
| 2 | 2D | diffuse atlas `101cbf74 + surfaceAtlas` | lightmap UV |
| 3 | 2D | material `_gloss` (`+0x18`) | material UV |

Mode3 enables `GL_FRAGMENT_PROGRAM_ARB`, binds `1018f850`, and adds its result
with `ONE,ONE`. The shared outer dispatcher uses GL_EQUAL and no depth writes.
Its formula (including decode 2*x-1 and exponent4) is in `shader-coverage.md`.

Mode1 instead configures NV combiner stages for decoded cubemap/direction dot,
its square, texture color products and final multiplication; the fourth-power
result is equivalent in structure to the ARB path. Full enum/state call sequence
is retained in `shader-pass-bindings/001-pseudocode.c` rather than guessed from
the program's name.

Mode2 first writes alpha only with `SRC_ALPHA,ZERO`, then writes RGB only with
`DST_ALPHA,ONE`, combining `_gloss` and diffuse. Mode4 adds a further alpha
squaring pass using `ZERO,DST_ALPHA`, then the same color addition. This is why
the alpha-buffer requirement matters. These alternate paths cannot be replaced
by a single untuned generic PBR highlight and called original parity.

## High-quality specular

`10062940` exits if `gl_specular == 0`. If no low-quality backend is available,
it sets `gl_specular=0`. With `gl_highspecular != 0`, it requires ARB capability
and both capacities >=4, then lazily loads 858-byte source `1018faf0` into
`1018f854`. Unsupported hardware or compilation failure sets `gl_highspecular=0`.
Shared chain `104cde78` merges into the high list when highspec is enabled,
otherwise into the low list. Existing low/high-only lists are `104cde70/74`.
Queue builder `10060d80` places a surface in high-only if material+0x18
(`_gloss`) is absent, in shared if both gloss maps exist, and in low-only
otherwise. Callers only queue surfaces with flag `0x400`; that flag's complete
producer/assignment is not resolved by this pass.

`100611a0` uses:

| Unit | Input | Coordinate |
|---|---|---|
| 0 | normal map material+0x10 | program samples with texcoord3 material UV |
| 1 | direction atlas `101cbf78 + atlas` | texcoord1 lightmap UV |
| 2 | diffuse atlas `101cbf74 + atlas` | program also samples texcoord1 |
| 3 | high-gloss material+0x1c | texcoord3 material UV |

Unit0's coordinate array is position transformed by `10063150`, furnishing
`tex_camdir` for the half-vector; it is **not** used as normal-map UV. Unit2
coordinate array is disabled because the program reuses texcoord1. The shader
normalizes eye direction and eye+light half-vector; encoded normal and light
are decoded but not explicitly normalized. Exponent is16. Draw is additive,
GL_EQUAL, no depth writes. After both lists the dispatcher restores unit0
texture matrix identity, MODELVIEW, blend off and depth writes on; the world
caller later restores LEQUAL.

The upload verifier `100621f0` checks GL_PROGRAM_ERROR_POSITION_ARB (`-1`) and
GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB (`1`). Its decompiler reports a void return
despite caller AL checks and a terminal error path; do not infer a C++ signature
or error-buffer safety from that recovered prototype.

## Diffuse bump pass and separated directional atlas math

`10061080` binds direction atlas to unit0 and the material normal map to unit1.
The independently captured `10062c10` texture-stage helper establishes mode1
REPLACE, mode7 DOT3_RGBA(previous,texture), mode4 MODULATE, mode6 ADD, mode5
MODULATE with RGB scale2. Thus for >=4 units the stage tuple `(1,7,4,6)` means:

```
stage0 = encodedDirection
stage1 = clamp(dot(2*encodedDirection-1, 2*encodedNormal-1), 0, 1)
stage2 = stage1 * diffuseAtlas
stage3 = clamp(stage2 + ambientAtlas, 0, 1)
```

Units0/2/3 use lightmap UV, unit1 material UV. The surface is then queued by
base material (`10060de0`) for the subsequent base/detail multiplication pass.
With3 units ambient is deferred; with2 units both diffuse and ambient are
completed by `100626e0`. This is the actual original fixed-function normal-map
lighting, without a standalone Cg fragment shader. Detail multiplies the base
texture by detail×2; the final blend `DST_COLOR,SRC_COLOR` contributes a further
factor2 against accumulated illumination. Clamp points remain per GL stage.

Texture-stage helper evidence is shared with the flashlight investigation:
`analysis/local/graphics-flashlight-combine/000-pseudocode.c` (`10062c10`),
to be retained by that scope with its own immutable capture manifest.

`10059990(surface,style,applyGamma)` copies the selected style bytes unchanged
when `applyGamma == 0`. Otherwise it locates styles61/62/63 and computes each
channel using the flat-normal reference:

```
reference = 2 * (ambient + diffuse * (direction.z / 127 - 1))
gain = reference != 0 ? Gamma(reference) / reference : 0
atlasChannel = selectedStyleChannel * gain
```

Channels are normalized together/clamped by `10059f30` before byte storage.
This differs from baking a final flat-normal lightmap and reusing that as the
diffuse atlas. Per-style atlas selection and tangent normal response are part
of the native material contract.

## Screen blur — a real fixed-function effect, not a missing Cg file

`10072740` updates frame delta, calls `10072470`, then `10071df0(delta)` before
subsequent HUD drawing. `10071df0` requires:

- `gl_screenblur != 0`;
- `gl_blurtest != 0`, or native flag `1018d270`, or native counter `1054506c > 2`,
  or client time before object+0x328;
- nonzero frame delta and valid capture texture.

Semantic names and setters for the three native gameplay conditions are still
unresolved; do not enable blur during all movement merely because it exists.

`10064c10(width,height)` lazily reserves a texture ID, initially allocates RGB
256×256 black with linear min/mag filters, then calls `glCopyTexImage2D` for the
requested centered framebuffer rectangle. The blur caller requests the full
viewport, so capture is RGB at actual viewport dimensions, not a 256×256 blur.
It saves previous unit binding into `104d26ec`; this helper itself leaves the
capture bound. Binding/matrix restoration follows the enclosing HUD machinery.

Native registered defaults read from matching client bytes:
`gl_screenblur=1`, `gl_blurstepsx=32`, `gl_blurstepsy=24`, `gl_opacity=0.5`,
`gl_blurtest=0` (`10060690`, strings `1014cbfc/1014cc10/1014cc24`).

At viewport W,H, initial quad size is round(W/640*32), round(H/480*24).
Steps are max(1,round(cvarX*W/640)), max(1,round(cvarY*H/480)). It draws
floor(W/stepX)+1 centered quads; before each draw both extents increase by the
corresponding step. Every quad samples the same captured frame with flipped
vertical UV, uses white modulation, alpha `gl_opacity`, and
`SRC_ALPHA,ONE_MINUS_SRC_ALPHA`. This is a layered radial zoom/smear, not a
Gaussian kernel or temporal motion history. It disables automatic texture
coordinate generation S/T (`GL_TEXTURE_GEN_S/T`, `0xc60/0xc61`) before drawing.

## Black Cg activation boundary

Water initializer `10086890` loads `black_fp.cg`/`fp20_black_fp.cg` into manager
offset+0x30, `black_vp.cg` into+0x34, and ModelViewProj parameter into+0x38.
`100877d0` enables profiles, binds those two programs and sets that matrix.

REA/Ghidra `analyze_function(100877d0)` reports **zero callers and zero incoming
references** in this exact client image. Its entire142-byte body and outbound
Cg calls are retained in `shader-pass-bindings/008-analyze_function.json`.
A separate bounded E8/E9 scan also found no direct-call/jump candidates.
This establishes a dormant/unreached helper in the recovered static graph,
not proof that no conceivable computed jump reaches it. No native active
black postprocess can be responsibly invented from its existence.

`BlackWhite` remains independently established as `.32/.59/.09` weighted
desaturation with messageByte/255 blending in `1005d7a0`. It must not be wired
to the algebraically different black Cg program.

## What remains before claiming complete restoration

These native contracts are **reverse-engineering results, not newly installed
rendering passes**. Exact remaining native questions:

1. Full indirect HUD-reset effects and alternate-view waterlevel transitions.
   The three blur sources are resolved: server Blur at `1018d270`, integer
   waterlevel at `1054506c` (not a counter), Damage deadline at HUD+0x328.
   The shared server map/dream state is recovered; save/restore field binding
   and every initial-zeroing route remain unconfirmed.
2. Runtime integration and parity of the recovered `10059e30` surface producer:
   clears 0x600, requires styles61/62/63 and material tag -666; normal enables
   0x200, gloss OR (glosshi AND normal) enables 0x400. Lifecycle and consumer
   predicates are in `surface-flag-producers.md`.
3. External Cg/driver capability choice and identity-LUT legacy sampling
   equivalence. The client selection is resolved: fragment profile0x1803
   selects fp20; other profiles select modern. Only modern water is implemented
   in the normal port.
4. Potential computed reachability of black helper `100877d0`: no incoming
   typed references/direct calls exist, so no active trigger is established.
5. Original texture gamma/normal decode and all NV/fixed-function fallback
   rounding/clamping equivalence at pixel level. Stage calls and ARB formulas
   are recovered; static code cannot demonstrate original GPU output.

Integration still required for separated bump atlases, tangent data, material
texture associations, diffuse/specular draw chains and native blur triggers.
Studio lighting is outside these world/brush shader contracts. Its native
interface, BSP sampling, per-bone light preparation and material draw path are
tracked in `studio-existing-audit.md`, `studio-lighting-contract.md` and
`studio-material-contract.md`. Projected handheld lights also have a separate
contract. No all-graphics or
pixel-parity completion claim follows from these static captures.
