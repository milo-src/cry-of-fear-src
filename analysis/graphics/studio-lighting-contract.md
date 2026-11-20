# Native studio lighting: contracts and remaining ABI questions

Target: original CoF client.dll SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Date: 2026-11-20. Main saved function: **100678d0**, currently
`decompiled/client/captures/menu-sky-functions/001-pseudocode.c`.

**The studio path computes model-level lighting plus at most four dynamic light
contributions per bone.** Dynamic attenuation is quadratic in distance, and a
spotlight multiplies it by a linear cone factor. It does not sample the world
receiver's projected flashlight image in this preparation function.
**Consumer10068d70 now closes preparation to normal-based RGB composition**:
shifted Lambert term, additive dynamic lights, and uniform max-channel
normalization. Texture/chrome/blend/fog stages remain separate contracts.

This document records saved native evidence. No renderer changes or game runs
are represented by it. Names below are descriptive; uncertain fields retain
their offsets rather than invented SDK names.

## Data layout visible in 100678d0

The function uses an implicit object in ECX; the `void(void)` decompiler
signature is not a complete ABI. Let `S` denote that object.

| Location | Observed use |
|---|---|
| S+0x30 | Current entity pointer E |
| S+0x34 | Model pointer/name string |
| S+0x44 | Studio header pointer; bone count at header+0x8c |
| S+0x40a8 | Pointer to array of 3x4 bone transforms, stride0x30 |
| E+0x304 | Integer render-effect selector used for special lighting |
| E+0xb48/+0xb4c/+0xb50 | Position used for bounds center and light candidate query |
| E+0x32c/+0x330/+0x334 | Bounds minimum components |
| E+0x338/+0x33c/+0x340 | Bounds maximum components |
| E+0xb54/+0xb58/+0xb5c | Angles used for special attached-light position |
| 104d26f4 / 104d26f8 / 104d26fc | RGB vector A, overridden by brightness effects |
| 104d2700 / 104d2704 / 104d2708 | RGB vector D, overridden by colored-light effects |
| 104d270c | Main lighting direction vector, transformed once per bone |
| 104dff18 + bone*12 | Main direction in each bone's coordinate basis |
| 104ce4b0 | Number of prepared dynamic lights, 0..4 |
| 104de718 + (light*128 + bone)*12 | Per-light/per-bone direction with attenuation encoded in its length |
| 104e0518 + light*12 | Prepared dynamic light RGB |

A is the normal-independent ambient vector and D the main directional RGB,
as now confirmed by10068d70. The array addressing reserves 128 bones per light;
100678d0 itself loops over header bone count without an explicit 128 clamp.
The native format/loader must enforce that limit elsewhere.

If E+0x304 equals **60**, the function exits before lighting sampling, direction
transforms or clearing dynamic-light count. It must not be reconstructed as an
ordinary black/reset branch. The captured hardware mesh path10065ef0 also
skips its normal-lighting/draw body for this effect; see the consumer section.

## Special model branch

The following exact case-sensitive model comparisons set a local special-model
boolean. The state selector is DAT_105458b0; its UI/item semantic is not inferred
solely from these numbers.

| Selector | Matching model |
|---|---|
| 0 | models/nv_goggles.mdl |
| 7 | models/bookmenu.mdl |
| 10 | models/weapons/v_gasmask.mdl OR models/weapons/v_gasmask_simon.mdl |
| 1 | models/items/tv_frame.mdl |
| 5 | models/props/blandat/v_telescope.mdl |
| 6 | Model name equals nonnull string pointer DAT_1018a3f0 |

For all non-early-exit models, helper10065710 is called at:

```text
samplePosition = E.position + (E.boundsMin + E.boundsMax) * 0.5
output = &104d26f4
flagArgument = *(uint32*)(E+0x2ec) & 0x10
```

Its saved body `graphics-studio-lighting/000-pseudocode.c` proves that the output
is nine consecutive floats: A, D and direction. It zeroes all nine first. If the
world has no lightdata (model+0x17c==0), it returns A=(0.5,0.5,0.5), D=0,
direction=0. Otherwise it calls BSP helper10065890 at model+0xa4, tracing from
the sample point to the same X/Y with Z-256 when flagArgument==0, or Z+256 when
nonzero. Thus flag0x10 reverses the light-sampling ray, matching EF_INVLIGHT=16
(ceiling lighting) in `external/hlsdk-portable/common/const.h`. When the helper
returns zero, sky fallback sets each A and D
channel to `0.25*GammaHelper100595f0(sv_skycolor_channel/255)` and direction=(0,0,1).
It performs no explicit world-model null check in this saved body.

Ordinary models then negate direction104d270c using10094730; special models do
not. Both branches transform that direction for every bone. Dynamic-light count
is then set to zero; special models skip dynamic candidate gathering and the
effect31..40 subtraction entirely. Their brightness overrides below still run.

## Brightness and color overrides, in native order

These are writes to sampled lighting, not independent additive lights. Later
rules can override earlier ones.

| Condition | Writes |
|---|---|
| Model models/flash1.mdl or models/flash2.mdl | A=(0.15,0.15,0.15) |
| DAT_10556b48!=0 and selector in {6,7} | A=(0.15,0.15,0.15) |
| Effect100 | A=(brightvalue,brightvalue,brightvalue), from cvar |
| Effect137, ordinary sky model | A=skybrightvalue repeated; D=(skybrightcolourr,g,b) |
| Effect137 and models/props/sky_stars.mdl | A=(0.5+random[-0.1,0.1]) repeated; D=(0.1+separate random[-0.1,0.1]) repeated |
| 100<effect<201, excluding101 and137 | A=((effect-100)/100) repeated |
| Effect101 | A=(0.1,0.1,0.1); D=(0.15,0.1,0.1) |
| Effect167 | A=(0.1,0.1,0.1); D=(0.1,0.1,0.1), overriding the earlier range rule |

Effects99,123,245,165 then have a near-view pulse override. They call10065210
with view position at globals10559638/10559640 and the vector at
E+0x2c0/+0x2c4/+0x2c8. Saved10065210 forms (second-first) and calls10094510;
the latter is now proven by `graphics-studio-draw-routing/008-pseudocode.c` to
return sqrt(x*x+y*y+z*z), converted to float. Thus the scalar is Euclidean
distance.100678d0 consumes its floating return despite10065210's misleading
decompiled void signature.
The code computes `d=clamp(distance-64,0,255)` and only overrides lighting when
`d<96` and DAT_10542ba4 is0,1,2 or3:

```text
q = clamp((int(DAT_1018d1b0 * 10) % 25) / 100.0, 0, 0.25)
if q <= 0: DAT_104ce4a2 toggles between 0 and 1
p = 4*q                         // also written to DAT_1018cb44
inverse = clamp(0.25-p, 0, 0.25)
A = { mode0/2:0.25, mode1:0.5, mode3:0.1 }, repeated
D = (DAT_104ce4a2 == 0 ? p : inverse, 0, 0)
```

This is the observed integer-modulo/flag sequence, not a smooth sinusoid. The
flag can toggle on repeated invocations while the integer remainder stays zero.
Do not silently substitute a different pulse curve. The source gives no semantic
name for DAT_10542ba4 in this function.

For ordinary (nonspecial) models only, if E equals GetViewModel() and bit8 of
DAT_1018a41c is set, D becomes(0.2,0.2,0.2). Callback101b26d8 is now mapped:
Initialize in `graphics-studio-draw-routing/003-pseudocode.c` copies101 dwords to
engine API base101b2608, version7; offset0xd0 is GetViewModel in the repository's
`external/hlsdk-portable/engine/cdll_int.h`. Finally,
after dynamic preparation, effects31..40 subtract `(effect-30)/10` from all A
channels without a local clamp; this affects values0.1 through1.0.

## Up to four lights and per-bone attenuation

For ordinary models, helper1005bd90 receives E.position, boundsMin, boundsMax,
an output pointer array and boolean `E == GetViewModel()`. This function
then iterates the returned candidate order, stopping when count104ce4b0==4.
It increments the count once per processed candidate, even if every bone ends up
with zero attenuation. It does not rank/sort or skip all-zero candidates itself.
The newly saved1005bd90 (`graphics-studio-light-selection/001-pseudocode.c`)
proves **pool order, not distance/brightness order**:

1. Walk32 records, stride0x7c, with light base104cc550 (the loop's working
   pointer104cc580 points0x30 into the record).
2. Keep only `now <= light.expiration(+0x1c)` and `radius(+0xc) != 0`. Equality
   at the expiration time is accepted; there is no positivity test for radius.
3. When the caller's special-entity boolean is true and key(+0x24) is -666 or
   -665, append immediately, bypassing all remaining spatial/visibility tests.
4. Otherwise require squared distance from **entity origin** to light origin
   <=radiusSquared. It does not use distance to the bounds or a bone here.
5. For a spotlight, construct its frustum through10084e40 and test the entity's
   world AABB (`origin+boundsMin/Max`) through10084b30; nonzero cull result rejects.
6. Set trace hull2 through event API+0x38, trace entity origin to light origin
   through event API+0x3c with flags8 and ignored index-1. Accept only when trace
   result field+4 is zero and float field+0x10>=1. Repository ABI definitions in
   `external/hlsdk-portable/common/event_api.h`, `common/pmtrace.h` and
   `pm_shared/pm_defs.h` resolve these to EV_SetTraceHull, EV_PlayerTrace,
   `!startsolid && fraction>=1`, and flags8=PM_WORLD_ONLY. No separate allsolid
   test appears. This visibility test traces against the world only.

Accepted pointers append in their existing pool order. No sort, brightness test
or special-key promotion occurs. Therefore the four-light cap can discard later
lights even if they are nearer or stronger; a forced key bypasses culling but
is not promoted ahead of earlier candidates. The decompiler marks1005bd90 void,
but `graphics-studio-draw-routing/010-procedure_assembly.json` proves
`1005bfe0: MOV EAX,EDI` after EDI counts appends. Thus it returns integer count in
EAX; use that proven ABI rather than the void declaration.

Visible light fields:

| Offset | Use |
|---|---|
| +0/+4/+8 | Light origin |
| +0xc | Radius R |
| +0x10/+0x14/+0x18 | RGB components sent through100595f0 |
| +0x24 | Key/id, special attached-light test ==-666 |
| +0x28 | Angles passed to engine AngleVectors-like callback |
| +0x34/+0x38 | Two angular fields combined for studio cone threshold |
| +0x3c | Nonempty texture/path byte marks a spotlight |

For each bone transform M, its translation is at M+0xc/+0x1c/+0x2c. Normally the
effective light origin L is the light origin. When the entity is the callback
entity and light key==-666, L instead becomes:

```text
angles = E.angles with pitch negated
(forward,right) = engineAngleVectors(angles)
L = E.position - 13*forward + 5*right
```

Radius and RGB still come from the original light. For a spotlight, its forward
vector still comes from light+0x28, even if this alternate origin is used.

```text
v = boneTranslation - L                  // points from light toward bone
distanceSquared = dot(v,v)
radial = max(0, 1 - distanceSquared/(R*R))
unit = v / length(v), if length(v)!=0; otherwise retain zero v
prepared = BoneDirectionTransform(unit,M) * radial
```

BoneDirectionTransform is now proven by saved100690f0
(`graphics-studio-lighting/002-pseudocode.c`). For row-major3x4 matrix M:

```text
out.x = M[0]*v.x + M[4]*v.y + M[8]*v.z
out.y = M[1]*v.x + M[5]*v.y + M[9]*v.z
out.z = M[2]*v.x + M[6]*v.y + M[10]*v.z
```

This is rotation-block transpose times v; translation is ignored. It equals an
inverse rotation for orthonormal bone matrices, not a general matrix inverse.
No normalization follows the transform. With zero distance the vector stays zero;
there is no arbitrary replacement direction. There is no radius-zero guard in
100678d0 itself.

For spotlights (path byte+0x3c nonzero):

```text
angleArgument = (light.angleX + light.angleY) * 0.3 * pi/180
threshold = cos(angleArgument)
dotForward = dot(lightForward, unit)       // world-space vectors
if dotForward < threshold:
    prepared = (0,0,0)
else:
    prepared *= (dotForward-threshold)/(1-threshold)
```

Cosine is now confirmed by the native chain:100f8160 assembly in
`graphics-studio-draw-routing/009-procedure_assembly.json` proves double input
and output in XMM0; its fallback10119a6f is captured in
`graphics-studio-mesh-materials/005-pseudocode.c` and
`007-procedure_assembly.json`, including explicit FCOS. The decompiled pointer
return is wrong. The wrapper's fast path uses an SSE table/polynomial; the
documented mathematical operation is cosine, without a claim of bit-identical
replacement by an arbitrary modern libm. The caller has no explicit
clamp above1 or denominator==0 guard. Studio cone shape uses a single angular
threshold combining both fields, rather than two rectangular projected UV tests.
No projected mask texture read, ray occlusion or per-bone trace appears in this
preparation body. Other stages may add restrictions; they must be inspected.

Each selected light's RGB is stored independently of the bone attenuation:

```text
preparedColor[c] = 0.5 * GammaHelper100595f0(light.color[c])
```

Do not multiply RGB by radius attenuation here as well as encoding it in the
prepared direction: the recovered consumer applies that attenuation exactly
once through its dot product. Helper100595f0 has a direct gamma==1 branch
`contrast*x+brightness`; its nonunit path is now proven
`contrast*pow(x,gamma)+brightness`, with gamma passed directly. See
`lightmap-gamma-contract.md` for the captured SSE/x87 ABI, rounding difference
and math-domain limits.

## What remains to establish

1. GammaHelper100595f0 and spotlight cosine now have proven formulas and ABI.
   Bitwise CRT precision, exceptional-input policy and floating-point control
   effects are narrower remaining limits; see `lightmap-gamma-contract.md`.
2. Full model/entity semantic typing and upper bone-count enforcement; do not
   infer all private fields from the few now-mapped engine callbacks.
3. Attachment-update lifetime and complete model/effect semantics. Material
   and chrome stages are recorded in `studio-material-contract.md` and
   `studio-chrome-contract.md`; they are not yet integrated into the port.

### Excluded consumer candidate: 10068c80

`graphics-studio-lighting/003-pseudocode.c` proves this is a texture-header
selector, not a light compositor. If studiohdr+0xb4 and+0xb8 are nonzero, it sets
S+0x40b0 to the current header. Otherwise it replaces the model's `.mdl` suffix
with `T.mdl`, loads the external texture model through
callbacks105457bc/105457c0 and stores its extra-data header at S+0x40b0. Failure
sets that pointer to zero and reports Mod_ForName/Mod_Extradata errors. This
explains the call in model drawing but contributes no lighting formula.

The four-light cap, attenuation, override ordering and final RGB consumer are
now recovered. This does not claim bit-identical whole-model rendering or
complete texture/chrome/blend/fog parity.

## Final normal lighting: 10068d70

Source: `graphics-studio-normal-lighting/000-pseudocode.c`. Inputs are output RGB
pointer, bone index, material flags, normal x/y/z, plus studio context in ECX.
It consumes exactly the A/D, per-bone main direction, dynamic vectors and colors
prepared above. `graphics-studio-mesh-materials/000-pseudocode.c` (10065ef0)
calls it per normal using normal-bone bytes and writes12-byte RGB records.
The hardware normal-lighting loop is gated on a texture header and effect!=60,
explaining why the preparation's effect60 early return cannot be replaced by a
normal lighting reset. Other rendering branches for that effect are separate.

`graphics-lighting-entry/000-pseudocode.c` maps DAT_104cd53c to gl_lambert.
`graphics-studio-math-abi/006-read_bytes.json` reads its default string at10142318
as `2`, so the default shifted term is `(min(dot,1)+1)/2` before its positive
test. This cvar default is separate from the hard lower bound1.
Repository `external/hlsdk-portable/engine/studio.h` maps material bit1 to
STUDIO_NF_FLATSHADE. For finite inputs, the recovered equation is:

```text
if flags & STUDIO_NF_FLATSHADE:
    color = A + 0.8*D
else:
    lambert = max(1, gl_lambert)
    baseDot = min(dot(mainDirectionForBone, normal), 1)
    shifted = (baseDot + lambert - 1) / lambert
    color = A + D
    if shifted > 0:
        color -= shifted*D
    color = max(color, 0)                 // componentwise, BEFORE dynamic lights
    for light in preparedDynamicLights:
        facing = -dot(preparedVector[light][bone], normal)
        if facing > 0:
            color += facing * preparedColor[light]

peak = max(color.r, color.g, color.b)
if peak > 1:
    color /= peak                        // same divisor for all three channels
write output RGB
```

Important boundaries directly visible in the consumer:

- The flatshade branch skips all dynamic lights and the normal-branch negative
  clamp. It still receives final peak normalization.
- Only the upper bound of the main dot is clamped before shifted Lambert;
  a negative shifted term is ignored. gl_lambert values below1 use1, not an
  alternate negative/zero divisor.
- Dynamic dot uses the negative sign because prepared vectors point from light
  to bone. Their lengths already contain radial/cone attenuation, so the dot
  applies attenuation exactly once. Dynamic facing is not separately clamped
  to1. The consumer does not renormalize those vectors or input normals.
- Max-channel normalization preserves RGB proportions; it is not independent
  component saturation. There is no new gamma operation or final multiply by2
  inside10068d70.
- There is no second negative clamp after adding dynamic colors. Normally colors
  are nonnegative, but unusual gamma/brightness inputs must not be silently
  assigned different native behavior.

The vector accumulation helper10094770 is now confirmed in
`graphics-studio-math-abi/000-pseudocode.c` as `out=a+scale*b`, including in-place
use.10094880 in the same capture's002 file is plain vec3 scaling. The composition
and attenuation formulas above are checked against both bodies.

### Side effects after RGB output

The function is not purely a color evaluator. If DAT_105458bc!=0, bit1 of
DAT_1018d1dc is clear, and DAT_10545860!=0, it saves current entity, temporarily
substitutes DAT_10545860, calls studio virtual method+0x1c and callback10545830,
then copies12 words at entity+0xb60..0xb8c to the engine entity found by index
when index>0. If DAT_105458bc remains nonzero, it copies the first two triplets
to globals10550318 and10550330 and clears DAT_105458bc. It restores the original
current-entity pointer before returning.

The copied studio API identifies10545830 as StudioClientEvents; the candidate
vtables map slot+0x1c to1008bd20, whose complete body/lifetime contract is not
captured here. The layout matches attachment vectors. These operations occur
after output RGB is written; do not
mix them into the light formula or omit them from a complete CPU reconstruction
without explicitly moving them to an equivalent lifecycle stage.

## BSP light sampler: 10065890

Source: `graphics-studio-light-selection/003-pseudocode.c`. Arguments are node,
segment start/end, and nine-float output. The wrapper clears output before the
initial call; recursive calls do not independently clear it.

### Traversal and luxel selection

Negative node contents returns0. Compute signed distances of segment endpoints
to node plane (pointer node+0x24). If both are on the same side, recurse into
that child (node+0x28/+0x2c). Otherwise intersect the segment with the plane,
recurse on the near segment first, then examine this node's surfaces, then
recurse on the far segment if none qualifies. The first successful sample wins.

Node firstsurface/nodesurfacecount are unsigned16 fields+0x30/+0x32. Surfaces
come from the world surface array with stride0x5c. Reject flags&0x24. At the
intersection, calculate texinfo S/T affine dot products, convert each to int,
then subtract signed texturemins (surface+0x14/+0x16). Require nonnegative
coordinates within signed extents (+0x18/+0x1a), and nonnull samples+0x54.
There is no polygon-edge test beyond these bounds in the saved body.

```text
width  = (extentS >> 4) + 1
height = (extentT >> 4) + 1
luxel  = (T >> 4) * width + (S >> 4)
rgbAddress = samples + 3*luxel
nextStyleAddress = rgbAddress + width*height*3
```

This is one discrete luxel, not bilinear interpolation. Float-to-int conversion
precedes texturemin subtraction and the four-bit shift. It does not sample a
rendered atlas texture or use dynamic lightstyles' runtime scale tables here.

### Style interpretation and tangent basis

Examine up to4 style bytes at surface+0x3c, stopping at255. At each style advance
the sample pointer by one complete RGB style plane. Recognized styles:

| Style | Saved sample role |
|---|---|
| 0 | Ordinary RGB O |
| 61 (`=`) | Ambient RGB B; marks separated-light path present |
| 62 (`>`) | Directional RGB C |
| 63 (`?`) | Encoded tangent-space direction Q |

Each recognized sample is read through100690a0, now proven by
`graphics-studio-draw-routing/007-pseudocode.c` to decode each byte as float/255.
Other style numbers are skipped,
not added to illumination. Repeated recognized styles overwrite the earlier
local value, rather than accumulate it.

For style63, form T=normalize(texinfo.S.xyz), U=normalize(texinfo.T.xyz), and
N=surface plane normal, negated when flags&2. Decode components `q=2*Q-1` and set:

```text
directionWorld = q.x*T + q.y*U + q.z*N
```

The basis uses two independently normalized texture axes. There is no
Gram-Schmidt, cross-product reconstruction, handedness flip or final vector
normalization in this function. This agrees with the previously recovered world
TBN builder. The studio caller later negates this direction for ordinary models
and transforms it into each bone's basis.

### RGB equations

If style61 was absent, the function returns success with:

```text
A[c] = 0.5 * GammaHelper100595f0(O[c])
```

It does not write D/direction in that branch, so they remain wrapper-initialized
zero for the normal call path. O initially equals zero; a valid samples pointer
can therefore produce a successful dark result even without style0, bypassing
the wrapper's sky fallback.

If style61 was present, use its decoded B, style62 C and style63 q.z:

```text
reference[c] = 2 * (B[c] + C[c]*q.z)
gain[c] = reference[c] != 0 ? Gamma(reference[c])/reference[c] : 0
A[c] = B[c]*gain[c]
D[c] = C[c]*gain[c]
direction = directionWorld
```

No q.z clamp is visible here. Gain is separate per color channel; do not apply
one scalar gain to all channels or add another half factor to separated A/D.
The function returns1 after writing this data.

The separated path is gated only by the presence of style61, **not** an explicit
complete61/62/63 check. C initially zeroes, but decoded direction locals are
written only in the style63 branch, and q.z's stack slot previously holds a
plane-distance calculation. Thus the complete triplet is an input assumption
for the clean equation above. A robust missing-direction fallback is not proven
by this body; do not fabricate one or copy decompiler uninitialized-local output
into an implementation. The material marker10059e30 separately requires all
three styles, but this sampler does not consult its0x200/0x400 bits.

## Evidence

Main capture evidence:
`ev_87edf833c5752a9053c69cc22ab1fd048f6340d27f446083817c83936c28e064`.
Raw SHA256 of `menu-sky-functions/001-pseudocode.c`:
`fec6b7de9cf32b53a969da6384178b4600933be4c2ca3e4d0a408f8e134c97f5`.

Related existing captures: `graphics-lightmap-formulas/000-pseudocode.c`
(100595f0), `shader-pass-vector-helpers/001-pseudocode.c` (10094730).
New helpers are captured in `graphics-studio-lighting/capture.json`; its
`004-analyze_function.json` includes the full100678d0 native dossier and callers.
