# Studio chrome coordinates and scalar/vector helpers

Static original client.dll analysis, 2026-11-20. Binary SHA256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
No game execution or renderer changes. The native chrome effect generates
texture coordinates; it does not capture reflections of the scene.

## Chrome helper 10065050

Evidence: `decompiled/client/captures/graphics-studio-normal-lighting/001-pseudocode.c`.
The mesh caller `graphics-studio-mesh-materials/000-pseudocode.c` requests this
helper when the selected texture has flag2, and uses the resulting integer
coordinates divided by texture width/height. Ordinary mesh UVs are a separate
branch; see `studio-material-contract.md`.

Inputs: output pointer to two integers, bone index, three normal components;
renderer object S is implicit ECX. Matrices come from S+0x40a8. The cache stamp
at `104d24b8 + bone*4` is compared with `**(int**)(S+0x4098)`, the model counter
pointer acquired by StudioGetModelCounters in1008bb70. This is not a comparison
with the frame timestamp.

For a cache miss, with bone transform M:

```text
v = normalize(M.translation - currentEntity.origin)
a = normalize(cross(v, viewRight))
b = normalize(cross(v, a))
cachedA = transpose(M.rotation) * a    // 104e0b48 + bone*12
cachedB = transpose(M.rotation) * b    // 104e0548 + bone*12
stamp[bone] = currentModelCounter
```

Here currentEntity.origin is exactly entity+0xb48/+0xb4c/+0xb50. It must not
silently be replaced with camera origin when reproducing this body. ViewRight
is S+0x4074:1008cee0 passes this address as the third output of GetViewInfo;
the studio API signature identifies that output as rightv. `100690f0` ignores
matrix translation and multiplies by the transpose of its3x3 part. That is an
inverse rotation only for an orthonormal basis.

```text
s = int((dot(cachedB, normal) + 1) * 32)
t = int((dot(cachedA, normal) + 1) * 32)
```

Conversion truncates toward zero. There is no explicit clamp or zero-length
replacement basis here. Existing normalize helper100947c0 leaves a zero vector
unchanged; cross and normalization therefore preserve degeneracy. The helper
does not prove a sphere/cube-map texture source or physically correct reflection.

## Helpers and ABI traps

| Address | Proven operation | Saved capture |
|---|---|---|
| 10094770 | out = A + scale*B, componentwise | graphics-studio-math-abi/000-pseudocode.c |
| 10091130 | out = cross(A,B) | graphics-studio-math-abi/001-pseudocode.c |
| 10094880 | out = scale*A | graphics-studio-math-abi/002-pseudocode.c |
| 100690f0 | out = transpose(M.rotation)*v | graphics-studio-lighting/002-pseudocode.c |
| 10094510 | float-rounded vector length, returned in x87 ST0 | graphics-studio-draw-routing/008-pseudocode.c |
| 10065210 | length(B-A); decompiler incorrectly prints void | graphics-studio-lighting/001-pseudocode.c |
| 100947c0 | normalize in place iff length!=0, return original length | shader-pass-vector-helpers/000-pseudocode.c |

Paths in the table are relative to `decompiled/client/captures`.

`100f8160` is a cosine helper with double input/output in XMM0. Its assembly
(`graphics-studio-draw-routing/009-procedure_assembly.json`) contains SIMD
range reduction and polynomial/table evaluation, with a fallback that transfers
XMM0 to the stack, calls10119a6f, then transfers the x87 result back to XMM0.
The fallback body/assembly in `graphics-studio-mesh-materials/005-pseudocode.c`
and `007-procedure_assembly.json` explicitly uses FCOS. The apparent returned
table pointer in Ghidra's100f8160 C, and integer return type of10119a6f, are
decompiler ABI artifacts, not the numerical return value. These captures
establish cosine semantics; they do not establish bit-identical rounding of
every SIMD/error-path case in a new implementation.

## Defaults and object identity

`graphics-studio-math-abi/005-read_bytes.json` decodes the registered default
string at1014cc24 as `0.5` for cof_fullbrighttextures;006 decodes10142318 as `2`
for gl_lambert. Their cvar registration is in
`graphics-lighting-entry/000-pseudocode.c`. A default is not evidence of a
running user's cvar value.

The DrawModel wrapper sets ECX=101ba540 before1008cee0. Reading its original
image bytes yields zero, not a vtable pointer (`003-read_bytes.json`). The
two static candidate tables1014b134 and101515ec have the same relevant render
slots, but their assignment during constructor execution has not been captured.
Do not treat the zero-filled image or a guessed table assignment as runtime
inspection. See `studio-existing-audit.md` for the verified interface routing.
