# Native gamma and lightmap color pipeline

Target: original CoF client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Date: 2026-11-20. This contract uses saved native captures; no game execution or
original-resource mutation was performed.

**100595f0 is a shared scalar color-transfer helper.** World lightmap baking,
studio sampled lighting, sky fallback and studio dynamic-light colors call it
with different pre/post factors. Treating all of them as one texture gamma
operation loses native brightness and scale behavior.

The scalar transfer, direct gamma exponent, cvar/cache lifecycle, three atlas
layers and GL upload contract are proven from saved native code and assembly.
For ordinary positive inputs the transfer is `G(x)=contrast*pow(x,gamma)+brightness`.
The gamma==1 branch and nonunit branch differ in floating-point rounding.

## Scalar helper and cache fields

`decompiled/client/captures/graphics-lightmap-formulas/000-pseudocode.c` contains
100595f0. Cached parameters are:

| Address | Meaning | Current cvar pointer |
|---|---|---|
| 101cc084 | gamma g | 104cd528, gl_gamma |
| 101cc088 | brightness b | 104cd52c, gl_brightness |
| 101cc08c | contrast c | 104cd530, gl_contrast |

The cvar names are proven by10060690 in
`graphics-lighting-entry/000-pseudocode.c`. gl_gamma and gl_contrast share the
default-string address1013c8c4; gl_brightness uses1013c8d8. All register with flag1.
Bytes in graphics-studio-texture-lifecycle/010-read_bytes.json and 011-read_bytes.json prove defaults gamma=1, contrast=1, brightness=0. The initial image bytes101cc080..101cc093 are all zero (009-read_bytes.json), so the cached parameters initially differ from the registered defaults until refresh.

When g==1 exactly:

```text
G(x) = c*x + b
```

Assembly in `graphics-studio-texture-replacements/011-procedure_assembly.json`
resolves the other path's previously lost arguments:

```text
XMM0.lowDouble = double(input float x)
XMM1.lowDouble = double(cached gamma float g)
call100ff550
XMM0 *= double(cached contrast float c)
XMM0 += double(cached brightness float b)
resultFloat = float(XMM0)
return resultFloat through x87 ST0
```

Thus gamma is passed directly, **not inverted or offset**.100ff550 accepts two
doubles in XMM0/XMM1 and returns a double in XMM0; its fallback at10100086 calls
1010e844 with both doubles on the stack, then bridges x87 ST0 back to XMM0.
The fallback1010e844 and continuation1010e84d prove power, not reciprocal gamma:
`graphics-studio-texture-final/004-procedure_assembly.json` contains FYL2X at
1010e89a followed by exp2 helper10122e20. That helper's assembly005 implements
`2^t` by FRNDINT splitting t, F2XM1 on the fractional part, adding1 and FSCALE
with the integer part. Combined with the two argument loads this is
`2^(g*log2(x)) = x^g` for ordinary positive inputs.

```text
G(x) = c * pow(x,g) + b
```

The optimized100ff550 implementation uses SSE tables and falls back to this x87
path depending on inputs/control state. The native fallback also contains
negative-base/integer-exponent, zero, NaN and infinity handling; the broad formula
is not a claim of bit-identical platform-libm behavior or a complete CRT error
policy specification. In particular the finite-color contract must not invent a
pre-pow max(x,0) clamp: no such clamp exists in100595f0.

The g==1 branch instead executes x87 FLD/FMUL/FADD and returns ST0 without the
nonunit branch's explicit float spill. This precision/rounding distinction
matters if bitwise parity is required. Neither branch clamps x or its result.
Distinguish the scalar helper from later RGB normalization and byte quantization.

## Refresh lifecycle and cvar limits

1005a110 (`graphics-lighting-entry/006-pseudocode.c`) obtains the world model,
requires a valid GLmanager, and calls1005a000. Only when that dirty helper returns
nonzero does it refresh the parameters and regenerate lightmaps:

```text
if gl_contrast > 2: set gl_contrast=2
if gl_brightness > 0.3: set gl_brightness=0.3
c = gl_contrast
b = gl_brightness
g = gl_gamma
if g < 0: cached g=1
cachedBump = (gl_bump != 0)
copy current level name to101cbf80
clear RGB atlas buffer101cc098, length0x300000
rebuild and upload lightmaps
```

Only upper bounds for contrast/brightness are visible. Negative contrast and
brightness are not clamped here. Gamma's negative repair changes the cached
value, not the gl_gamma cvar. g==0 is not repaired by this code. 1005a000 (`graphics-studio-texture-lifecycle/000-pseudocode.c`) returns dirty if:

- initialized101cbf7c is zero; this also clears104cc464 and104cc465;
- cached gamma, brightness or contrast differs from the corresponding live float;
- cached bump bool differs from whether gl_bump is nonzero;
- case-insensitive current level name differs from cached101cbf80.

Otherwise it returns0. These are exact float comparisons, not tolerances.
Consequently a negative live gamma causes repeated rebuilds: the repaired cached1
continues to differ from the live negative value. No sample/style/material hash
is checked by this helper. The typed references in graphics-studio-texture-final/003-inspect_native_instruction.json
show one direct read1005a000 and one direct write1005a17c (sets1); no direct reset
is evidenced. Identical map-name comparison alone does not prove same-map reload
invalidation. Indirect memory resets remain outside that reference result.

The saved corpus search found these three parameter writes in1005a110; static
initial values are now captured above; complete native reference enumeration remains a separate proof obligation. The scalar helper reads the cached values, not live cvars on every
call. Native preparation1005f3a0 calls1005a110 after the conditional material /
surface-flag / TBN rebuild, including preparation passes when material dirty is
zero (see surface-flag-producers.md).

## Four world-lightmap builders

All paths below are relative to `decompiled/client/captures/`. Each builder
requires nonnull surface samples+0x54 and the count returned by10059fe0 <0x145
(325). Positive counts run the per-luxel loop; atlas insertion1005a4f0 follows.
10059fe0 (`graphics-studio-texture-lifecycle/001-pseudocode.c`) proves count:
`((signedShort(extentS)>>4)+1)*((signedShort(extentT)>>4)+1)`.
This is one sample per16 texture units plus the shared endpoint, not texture
pixel width multiplied by height.

Let O be the ordinary RGB sample, B style61 ambient RGB, C style62 directional
RGB, and Z the raw style63 blue byte. Color samples O/B/C are decoded byte/255.

| Function | Capture | Per-channel float sent to quantizer |
|---|---|---|
| 10059d20 | graphics-lighting-core/003-pseudocode.c | 0.5*G(O) |
| 10059880 | graphics-lightmap-formulas/002-pseudocode.c | G(B), no half factor |
| 10059660 | graphics-lightmap-formulas/001-pseudocode.c | 0.5*G(2*(B+C*(Z/127-1))) |
| 10059990, applyGamma!=0 | graphics-lighting-core/004-pseudocode.c | selectedStyleRGB * channelGain |

For10059990:

```text
reference[c] = 2 * (B[c] + C[c]*(Z/127 - 1))
channelGain[c] = reference[c] != 0 ? G(reference[c])/reference[c] : 0
output[c] = selectedStyleRGB[c] * channelGain[c]
```

The requested style is a function argument. With applyGamma==0,10059990 copies
the three selected raw bytes unchanged, bypassing both G and RGB quantizer.
With applyGamma!=0, gain is separate per channel, not one scalar brightness.
The reference has no visible negative clamp or Z clamp. Z=255 produces
`255/127-1`, slightly greater than1; do not replace127 with127.5 for convenience.

10059d20 reads the first samples plane directly.10059880 finds style61 through
1005a0e0;10059660 and the transformed10059990 branch find61/62/63. These builders
do not individually guard missing-style indices; their callers/material markers
provide eligibility. The missing-data fallback contracts must not be invented
inside these helpers.

### Which builder is selected

1005a110 excludes surface flags0x14 and atlas index>=64. It then chooses:

```text
no style61                             -> ordinary10059d20
style61 present, (!flag0x200 || !bump):
    no style62 or no style63            -> ambient-only10059880
    both present                       -> flat directional10059660
style61 present, flag0x200 and bump     -> separated10059990
```

Assembly `graphics-studio-texture-final/000-procedure_assembly.json` resolves
all formerly omitted arguments:

| Layer | Builder arguments for separated surfaces | Upload texture-base global |
|---|---|---|
| Initial mixed/ambient layer | 10059990(surface,61,1), call1005a36f | 101cbf70, upload1005a3d2 |
| Directional color layer | 10059990(surface,62,1), call1005a415 | 101cbf74, upload1005a442 |
| Direction vector layer | 10059990(surface,63,0), call1005a483 | 101cbf78, upload1005a4a3 |

The initial layer can instead use the ordinary/flat/ambient-only builders selected
above. Further layers process only surfaces with flags&0x600, excluding0x14 and
atlas>=64; they are conditional on at least one such surface. Their selection
does not additionally test live gl_bump. Direction RGB is copied raw and never
sent through gamma or the RGB quantizer. See shader-pass-contracts.md for the
corresponding recovered draw sampler bindings.

## RGB quantization: 10059f30

Source: `graphics-lightmap-formulas/003-pseudocode.c`; vector scale helper10094880
is independently proven by `graphics-studio-math-abi/002-pseudocode.c`.

For finite inputs:

```text
rgb *= 255
peak = max(rgb.r, rgb.g, rgb.b)
if peak > 255:
    rgb *= 255/peak
rgb = max(rgb,0)                   // componentwise AFTER peak normalization
outByte[c] = truncTowardZero(rgb[c])
```

The three channels share the normalization factor. This preserves ratios of
positive components and differs from independently clamping each to255. Final
positive values truncate; they are not rounded to nearest. No alpha channel is
written. NaN/infinity/math-domain behavior is outside the finite-input formula
and must follow the original math/convert ABI if exact parity is required.

## Studio consumers and a significant decode difference

The detailed studio pipeline is in studio-lighting-contract.md. Its use of G:

| Studio operation | G application |
|---|---|
| Ordinary BSP luxel10065890 | A=0.5*G(O); D/direction remain cleared |
| Separated BSP luxel10065890 | reference=2*(B+C*q.z), gain=G(reference)/reference or0; A=B*gain,D=C*gain |
| Sky fallback10065710 | A=D=0.25*G(sv_skycolor/255) |
| Dynamic light100678d0 | preparedColor=0.5*G(light RGB), separately from vector attenuation |

**Studio direction uses q.z=2*(Z/255)-1, while world lightmap builders use
Z/127-1.** Both are explicitly present in saved code. Their endpoints and middle
values differ; the reconstruction must not silently unify these paths.

Studio RGB remains floating point until its normal-lighting consumer10068d70,
which can peak-normalize the final combined color. It does not call10059f30 or
apply G again there. The ordinary half, ambient-only full, separated gain and sky
quarter factors therefore belong at their native call sites.

## Scratch, atlas placement and GL upload

`graphics-studio-texture-lifecycle/002-pseudocode.c` contains1005a4f0.
It copies RGB scratch104cc098 into atlas bytes101cc098. Surface fields are
light_s+0x1c, light_t+0x20, lightmapAtlas+0x38, signed extents+0x18/+0x1a.
For width W=(extentS>>4)+1 and height H=(extentT>>4)+1:

```text
for y in [0,H):
  for x in [0,W):
    dst = 3 * (atlas*128*128 + (light_t+y)*128 + light_s+x)
    atlasRGB[dst:dst+3] = scratchRGB[3*(y*W+x):3*(y*W+x)+3]
```

There is no padding replication, filtering or gamma in the copy. The insertion
helper does not check atlas index, placement bounds or sample count itself.
Caller1005a110 excludes atlas>=64; the condition has no explicit lower-bound
check. Builders additionally reject null samples/count>=325. Valid model
extents/packing are prerequisites rather than enforced here.

1005a110 zeroes the3MiB CPU atlas once before the initial fill, then reuses that
same storage for subsequent separated layers without another full clear.
It tracks maxAtlas101cc094 from eligible surfaces, beginning at-1.
1005a570 (`graphics-studio-texture-lifecycle/003-pseudocode.c`) uploads every atlas
0..maxAtlas inclusive, including unused intervening slabs:

```text
bind GL_TEXTURE_2D, textureBaseArgument + atlas
TexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, float(9728)) // NEAREST
TexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, float(9729)) // LINEAR
TexImage2D(GL_TEXTURE_2D, level0, internalComponents3,128,128,border0,
           GL_RGB, GL_UNSIGNED_BYTE, atlasRGB + atlas*0xc000)
```

The decompiled parameter words0x46180000/0x46180400 are float representations
of9728/9729, not integer GL filter enum arguments. No mipmaps, gamma/sRGB internal
format, wrap change or texture allocation appears in this upload helper.
maxAtlas==-1 results in no uploads; count boundary is maxAtlas+1. The3MiB CPU
allocation corresponds to64 RGB128x128 slabs, not a single2048x2048 image.
The layer table above identifies the exact caller-supplied texture bases and separated style/applyGamma arguments.

## Remaining limits

The gamma/color formulas and atlas layer routing above no longer have unresolved
helper arguments. Remaining limits are narrower:

- Bitwise reproduction of the optimized CRT power implementation, control-word
  behavior and exception/errno policy is not established by its ordinary positive
  mathematical formula. Preserve native domain behavior if these edge cases matter.
- Only direct native references to initialized101cbf7c are captured; same-name map
  reload through an indirect/global reset is not established. No such reset is
  invented in this contract.
- Static color-atlas evidence does not assert visual parity of the complete
  renderer or sRGB framebuffer/display handling. No game execution occurred here.

All used evidence is saved in the repository; no REA calls were issued by this
subagent. The unrelated failed query002 in graphics-studio-texture-final is not
used as evidence.
