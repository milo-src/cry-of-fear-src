# Native optional OpenGL capability contract

Target: original client.dll SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Static audit 2026-11-20 using saved captures; no REA calls, game execution, build,
installation, original-resource modification or commit by this subagent.

The GL manager101be5f8 resolves71 mandatory exports first, then marks status+214
as2 before calling these optional probes. A failed optional probe does not clear
that successful base status. Thus10053c70 (status==2) is **not** a test that bump,
ARB programs, VBOs or any other particular optional feature works. The bootstrap
and owner ABI are documented in `renderer-bootstrap-contract.md`.

## Probe order and stored fields

All offsets are from manager101be5f8. Flags/counts are32-bit values, not inferred
C++ bool layout. Empty/false capability does not imply pointer slots were cleared.

| Order / function | Probe text (literal) | Result flag | Queried capacity/default |
|---|---|---|---|
|0 /100554c0|Context diagnostics only|none|logs renderer/vendor/version and framebuffer bits|
|1 /10054f90|GL_ARB_multitexture|+164=101be75c|+168=101be760: MAX_TEXTURE_UNITS_ARB84e2; default1|
|2 /10054de0|ARB_texture_env_combine AND ARB_texture_env_dot3|+180=101be778|none|
|3 /10054e20|GL_ARB_fragment_program|+1a0=101be798|+1a4=101be79c MAX_TEXTURE_IMAGE_UNITS_ARB8872; +1a8=101be7a0 MAX_TEXTURE_COORDS_ARB8871; defaults0|
|4 /10055100|GL_ARB_texture_cube_map|+1d4=101be7cc|none|
|5 /100552d0|GL_NV_register_combiners|+184=101be77c|+188=101be780 MAX_GENERAL_COMBINERS_NV854d; default0|
|6 /10055140|GL_EXT_texture3D|+1dc=101be7d4|none|
|7 /10054c90|GL_ARB_vertex_buffer_object|+1e0=101be7d8|none|
|8 /10055440|GL_NV_texture_rectangle OR GL_ARB_texture_rectangle OR GL_EXT_texture_rectangle|+1f8=101be7f0|+1fc=101be7f4 MAX_RECTANGLE_TEXTURE_SIZE84f8; default0|

Rectangle probes short-circuit in precisely NV, ARB, EXT order. They do not
remember which alias matched. Diffuse bump probe literals deliberately omit
`GL_`; the proven suffix-boundary-only search below allows those matches.
It tests combine first and dot3 only if combine succeeds. It does not additionally
require multitexture, a minimum number of units, cube maps or 3D textures here.
Cube-map and rectangle support are extension-probe-only flags, with no new entry
points loaded. Rectangle reports support even if the queried capacity is0.

Every probe sets its result false before completion (diffuse bump writes0 on its
false exit and1 on its true exit). Multitexture initializes the count to1; ARB
program counts, combiner count and rectangle size initialize to0. Advertised
extensions trigger capacity queries **before** optional pointer validation.
A failed pointer therefore leaves its already-queried count intact with flag0.
There is no minimum-count acceptance criterion in these probe helpers.

## Optional entry points: exact names and offsets

All20 assignments use global101be758, proven as wglGetProcAddress by the mandatory
loader map. The machine-readable `gl-optional-dispatch-map.json` includes every
assignment, resulting global address, originating procedure, C hash and Evidence
ID. All9 source C hashes were verified against capture.json.

| Feature | Manager offset -> API literal |
|---|---|
|Multitexture|+16c glActiveTextureARB; +170 glClientActiveTextureARB; +174 glMultiTexCoord1fARB; +178 glMultiTexCoord2fARB; +17c glMultiTexCoord3fvARB|
|ARB fragment program|+1ac glGenProgramsARB; +1b0 glBindProgramARB; +1b4 glProgramStringARB; +1b8 glGetProgramivARB|
|NV combiners|+18c glCombinerParameteriNV; +190 glCombinerParameterfvNV; +194 glCombinerInputNV; +198 glCombinerOutputNV; +19c glFinalCombinerInputNV|
|EXT3D texture|+1d8 glTexImage3DEXT|
|ARB VBO|+1e4 glBindBufferARB; +1e8 glGenBuffersARB; +1ec glBufferDataARB; +1f0 glDeleteBuffersARB; +1f4 glGetBufferParameterivARB|

For these five pointer-bearing features, true requires the extension probe and
**all** listed pointer results nonzero. A null first pointer does not stop the
remaining resolutions: each slot is written, each null is logged, and the final
flag is the AND of success. Checks compare against zero only; the code does not
reject other particular integer pointer values. An advertised extension alone
is insufficient to set these flags.

There is no transactional rollback, pointer-table clear on absence, alternate
core function-name attempt, GetProcAddress(opengl32) fallback, GL_VERSION-based
promotion, GL error test, or trial draw/program compilation in these probes.
They load the exact suffixed names shown. A partial load can leave nonnull
pointers while its feature flag is0. If re-entered after a prior successful load,
an absent extension can leave old pointer values while the flag is reset; the
body does not establish that re-entry actually occurs after context change.

## Generic extension probe boundary

All feature tests above call10053bf0, also used by the bootstrap for
`PARANOIA_HACKS_V1`. Saved body graphics-gl-lifecycle-followup/000 establishes:

```text
extensions = glGetString(GL_EXTENSIONS /*1f03*/)
p = Search100d3cf0(extensions,needle)
while p != null:
    end = p + strlen(needle)
    if isspace(*end) || *end ==0: return1
    p = Search100d3cf0(end,needle)
return0
```

It checks a trailing whitespace/NUL boundary **only**, never the preceding
character. Thus missing GL_ in the bump probe literals is consistent with a
suffix match inside GL_ARB_texture_env_combine/dot3; it is not evidence that
those helpers request different extensions. A longer prefix before a matched
needle is likewise not rejected. Failed trailing boundary resumes at the end of
the candidate, not at candidate+1. The helper does not explicitly check null
GetString/needle pointers or call glGetStringi/version fallback.

Search100d3cf0 is now saved in graphics-gl-cleanup-boundary/000-pseudocode.c.
It is a case-sensitive byte substring search with CPU dispatch via10559ed8:
selector0 uses scalar/word scanning, selector1 vector equality masks, selector>1
PCMPISTRI and boundary scalar comparisons. Exact byte comparisons, absence of
case folding, pointer-to-match/null behavior and the empty-needle return-haystack
contract are directly visible. This resolves the capability probe's case rule;
it is distinct from the case-insensitive Cg/water helper1008a280.

The decompiler's vector typing and some flags/control-flow expressions are not
verified as a standalone portable SIMD implementation. Page-boundary mechanics,
CPU dispatch choice and bit-exact fault behavior are outside the proven string
semantic contract. The original body is retained for those future questions.

All observed capability needles are nonempty. For an empty needle, the search
returns the current haystack pointer; the wrapper end pointer does not advance.
Consequently a nonempty haystack beginning with a non-whitespace byte would loop
in10053bf0, while whitespace/NUL at that position would accept it. No observed
capability call uses that degenerate input. The wrapper must not be advertised
as a robust general-purpose extension tokenizer.

## Diagnostics and base framebuffer limits

100554c0 reads manager glGetString+0xb0 for RENDERER1f01, VENDOR1f00 and
VERSION1f02, then glGetIntegerv+0xc0 into temporary local outputs. It logs:

- RGBA color bits0d52..0d55;
- RGBA accumulation bits0d58..0d5b;
- depth bits0d56;
- stencil bits0d57.

It has no feature flag writes, version parsing or capability-dependent branch.
There is no glGetError or null-string check inside this diagnostic helper.
The successful bootstrap separately queries0d55 into **both** manager+208 and
+20c, and0d33 (MAX_TEXTURE_SIZE) into+204. Saved code must not relabel the second
0d55 query as depth/stencil merely because a nearby field would seem suitable.
The diagnostic depth query is a separate local value and does not prove that
+20c stores depth. Parent bootstrap evidence governs those latter assignments.

## Downstream interpretation and Cg separation

These optional probes do not set gl_nocombs, gl_noshaders, gl_specular,
gl_highspecular or cg_water. They report native driver-facing availability; draw
selection and fallback are separate callers.

The already recovered specular selector10060e50 requires more than the flags:
NV one-pass needs >1 combiners and>=4 texture units plus its cvar conditions;
ARB needs its flag and both fragment capacities>3; fixed-function/two-pass paths
also depend on framebuffer alpha. High-specular10062940 similarly requires ARB
and capacities>=4. `shader-pass-contracts.md` records those concrete draw paths.
These numeric thresholds belong downstream, not in the capability loaders.

Cg context/profile routing is independent: `cg-profile-routing.md` proves water
filename selection depends on returned fragment profile==1803h; the separate
GL_NV_texture_shader test changes LUT format. None of the optional manager
helpers here chooses fp20 shader files, compiles Cg, enables RTX or measures the
runtime graphics capabilities of the user's machine.

## Evidence and current limits

- `decompiled/client/captures/graphics-gl-capabilities/000..008-pseudocode.c`
  in the order above; capture.json preserves source binary hash, C hashes and IDs.
- `decompiled/client/captures/graphics-gl-lifecycle-followup/000-pseudocode.c` for generic extension probe10053bf0.
- `decompiled/client/captures/graphics-gl-cleanup-boundary/000-pseudocode.c` for case-sensitive search100d3cf0.
- `decompiled/client/captures/graphics-studio-flow-init/000-pseudocode.c`
  for probe call order, status2 and additional base limits.
- `analysis/graphics/native-gl-dispatch-map.json` for mandatory wgl resolver and
  GetString/GetIntegerv names; `gl-optional-dispatch-map.json` for20 optional slots.
- `deps/sdl2/SDL2-2.32.10/include/SDL_opengl.h` and SDL_opengl_glext.h confirm
  enum spellings/numbers without inferring original source structure layout.

All requested optional probes and their generic search callee are now captured. Remaining broader limits:
context teardown/recreation, whether each downstream renderer path checks the
appropriate flag before indirect call, and real driver behavior. Static support
flags are not runtime success, pixel parity or GPU-resource lifetime verification.
