# Native producer of surface flags 0x200 / 0x400

Date: 2026-11-20. Original CoF client.dll SHA256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.

**Confirmed: 10059e30 clears and recomputes both target bits on every world-model
surface.** Eligibility requires a nonexcluded surface, all three directional
lightstyles, and the external-material sentinel. Material handles then determine
the individual bits. **gl_bump, gl_specular and gl_highspecular are not producer
predicates**; they gate later rendering paths.

This report uses saved C, structured native analyses and FUNCTION_CATALOG. It
documents original behavior, not an implemented or visually verified port. This
audit agent did not access REA or change renderer/catalog files.

## Exact producer contract: 10059e30

Source: `decompiled/client/captures/graphics-surface-flags/000-pseudocode.c`.
Body range: `10059e30..10059f23`. Diagnostic: `Marking faces...`.

The function obtains entity 0 and reads its world model at entity+0xb94. If
nonnull, it visits model+0xb0 surfaces, beginning at the pointer in model+0xb4,
with stride0x5c. For **each** surface, before any eligibility test:

```c
oldFlags = surface->flags;        // surface+8
flags = oldFlags & ~0x600u;       // native mask 0xfffff9ff
surface->flags = flags;
```

Unrelated bits are preserved. Both target bits are removed even from surfaces
that subsequently fail eligibility; stale bits cannot survive this marking pass.
The remaining native logic, with descriptive field names:

```c
eligible = !(oldFlags & 0x14)
    && FindStyle(surface, 61) != -1
    && FindStyle(surface, 62) != -1
    && FindStyle(surface, 63) != -1
    && texture->materialSentinel == -666;

if (eligible) {
    material = texture->externalMaterial;
    if (material->normal != 0)
        flags |= 0x200;
    if (material->gloss != 0
        || (material->glosshi != 0 && material->normal != 0))
        flags |= 0x400;
    surface->flags = flags;
}
```

This display groups final writes for readability. Native code writes0x200 as
soon as its predicate succeeds, then writes0x400 when its predicate succeeds.
No other side effect occurs between those two writes.

| Field | Native location |
|---|---|
| Flags | surface+8 |
| Texinfo | pointer at surface+0x2c |
| Texture | pointer at texinfo+0x24 |
| External-material sentinel | texture+0x24, compared to -0x29a = -666 |
| External material | pointer at texture+0x2c |
| Normal texture handle | material+0x10 |
| Low gloss texture handle | material+0x18 |
| High gloss texture handle | material+0x1c |
| Lightstyles | four bytes beginning at surface+0x3c |

FindStyle is1005a0e0 (`graphics-lightmap-formulas/004-pseudocode.c`): it examines
at most four style bytes, stops at255 and returns an index or -1. Presence is
tested; a particular order of styles61/62/63 is not required by the marker.

### Result matrix after eligibility succeeds

| Normal | Gloss | Glosshi | Resulting target bits |
|---|---|---|---|
| 0 | 0 | 0 | 0 |
| 0 | 0 | nonzero | 0 |
| 0 | nonzero | any | 0x400 |
| nonzero | 0 | 0 | 0x200 |
| nonzero | nonzero | any | 0x600 |
| nonzero | 0 | nonzero | 0x600 |

If eligibility fails, target bits are always zero. Low-gloss specular does not
require a normal map; high-gloss-only specular does. Merely having normal/gloss
files is insufficient without the eligibility gates.

No atlas<64, sample-pointer, cvar, TMU-count or ARB-support test occurs in this
producer. Those tests must not be invented here because consumers perform their
own checks. No explicit texture-name or animation test occurs either: the marker
requires the sentinel left by material association.

## Caller and lifecycle evidence

`graphics-surface-flags/001-analyze_function.json` proves a direct call at
1005f488 from1005f3a0 (body1005f3a0..1005f56c) into10059e30. Its subsequently saved
body is `graphics-material-lifecycle/000-pseudocode.c`. Marking runs only when
dirty flag `DAT_1018f848 != 0`, in this precise sequence:

```text
10069410 associate materials (includes detail parsing and sorting)
10059e30 clear/recompute surface capability flags
10061eb0 build TBN/vertex records
DAT_1018f848 = 0
1005a110 update lightmaps
```

Lightmap update is outside the dirty branch; it is called on eligible preparation
passes even when marking does not rerun. The reset setter is now captured as
10060b10 (`graphics-material-reset/000-pseudocode.c`); the requested selector
10060b2b was an interior address, not its entry. It calls helpers 100586a0,
10059110, 1005c3d0 and 100640a0, sets dirty1018f848=1 and frame counter104cdd44=0,
then sets104cdd68=1 when GLmanager is valid and marker101be7f8 is nonzero.

The existing `hud-entry/002-pseudocode.c` and new typed caller references prove
this chain:

```text
HUD_VidInit (1001d560)
  ->1006d9e0
    ->10060b10 at call site1006dd4a
      ->dirty1018f848=1 at10060b29

V_CalcRefdef (100b3340)
  ->1005fe90 at call site100b33f9
    ->1005f3a0 at call site1005feae
      ->dirty read at1005f47a
      ->material association / marking / TBN build when dirty
      ->dirty1018f848=0 at1005f492
```

1005fe90 (`graphics-material-reset/002-pseudocode.c`) increments104cdd44,
clears104cdd70, sets104cdd64=1 and calls preparation. Its parameterless decompiler
signature loses the forwarded preparation argument; the caller relation is
proven, but that signature must not be used to reconstruct the ABI.

`graphics-material-reset/004-inspect_native_instruction.json` lists exactly
three observed references to dirty1018f848: the read and clear in preparation,
and the set in reset. This establishes the observed static lifecycle. It does
not rule out undetected aliasing or engine behavior. The full intermediate body
1006d9e0 is not saved, so its internal branch conditions are not established.
Call the proven boundary **HUD video initialization**, not an invented new-map
callback. Marking is deferred until the next eligible preparation pass after
reset; it is not unconditionally performed every frame.

Outer gates are gl_renderer!=0, a valid GLmanager, hacked-OpenGL marker101be7f8,
world lightdata at model+0x17c, nonzero capabilities101be75c/101be778/101be7cc,
and more than one TMU. A nonzero param[0x39] returns before marking. The exact
semantic name of that parameter is not assigned here. No-stencil state forces
gl_clipplanes=1. Failed capability setup disables gl_renderer. Successful setup
also creates missing default texture resources and marks104cdd60=1. These are
caller gates, distinct from the producer's per-surface predicates.

The producer directly visits world-model surface storage. Whether every brush
model shares that storage under every native load path is not established by
this function alone. It does not separately iterate loaded entity models.

## Consumers and why their predicates differ

Paths in this section are relative to `decompiled/client/captures/`.

| Address / capture | Proven behavior |
|---|---|
| 10061cf0, shader-pass-inputs/003-pseudocode.c | Rejects flag0x10, handles flag4 separately; static bump10061080 requires0x200 AND gl_bump!=0 |
| 10061080, shader-pass-bump/000-pseudocode.c | Reads material+0x10 without a null/zero guard; binds normal/separated atlases and chooses TMU path |
| 1005a110, graphics-lighting-entry/006-pseudocode.c | Lightmap rebuild after dirty check; skips flags0x14 and atlas>=64; target bits control separated lightmap use |
| 10061b40, shader-pass-routing/001-pseudocode.c | Direct flat/base/detail path tests0x400 and queues10060d80; early deferred paths enqueue base instead |
| 100627e0, shader-pass-inputs/005-pseudocode.c | Deferred base/detail pass tests0x400 and queues specular after drawing |
| 10060d80, shader-pass-routing/000-pseudocode.c | High-only chain if gloss absent; shared if both gloss/glosshi present; otherwise low-only |
| 10062940, shader-pass-core/001-pseudocode.c | Applies gl_specular/backend/gl_highspecular execution gates; unsupported cvars may be disabled without rewriting surface bits |

The producer proves the validity assumption previously missing from10060d80:
when a correctly marked surface has no low-gloss handle, reaching the specular
queue implies both glosshi and normal handles exist. This holds immediately
after marking; later material-handle mutation needs a separate lifecycle audit.

1005a110 first-atlas choice:

```text
style61 absent                          ->10059d20 ordinary lightmap
style61 present, (!0x200 || !gl_bump):
    style62 absent or style63 absent    ->10059880 ambient-only
    both present                        ->10059660 directional, flat normal
style61 present, 0x200 and gl_bump        ->10059990 separated layer
```

Two additional atlas loops require flags&0x600 plus the0x14/atlas<64 checks. They
do not test gl_bump in their surface predicates. Both bump and specular can need
separated lighting data. Some10059990 arguments are lost by saved pseudocode;
the exact style parameter at those calls is not invented here.

Dynamic receiver1005c080, saved in
`analysis/graphics/flashlight-native-followup.json`, independently selects the
normal handle or flat-normal fallback without testing0x200. Do not impose the
static capability marker on projected lights.

## Material association and excluded earlier candidates

10069410 (`graphics-lighting-core/002-pseudocode.c`) associates eligible world
textures with external material records. It excludes texture+0x20!=0, empty
names and names beginning +/-. Newly created records load normal at+0x10, gloss
at+0x18, and glosshi at+0x1c only when normal exists (otherwise zero). It sets
texture+0x2c to the record and texture+0x24 to -666. These writes explain the
producer's sentinel gate; they are not surface-flag writes.

Two initially suspected helpers are resolved and excluded as direct producers:

- 1006a420, `graphics-blur-material-state/004-pseudocode.c`: parses map
  `_detail.txt`; four tokens, names<=16/32 characters, integer UV scales,
  stride0x38, maximum512. Its0x200 is a record-count limit.
- 1006a6f0, `graphics-blur-material-routing/002-pseudocode.c`: insertion-sorts
  world texture pointers using100693d0. Native text identifies detail texture id
  as the key. Saved comparator100693d0 in
  `graphics-material-lifecycle/002-pseudocode.c` returns key(second)<key(first),
  signed int. A texture's key is material+0x14 when sentinel==-666 and material
  pointer is nonnull; otherwise zero. Thus insertion sorting is ascending and
  stable: equal keys do not shift. No surface flags are modified.

100622c0 (`shader-pass-inputs/006-pseudocode.c`) clears specular/lightmap/texture
chain heads, not flags. 10060de0/10060d80 overwrite surface+0x28 links, not
surface+8. 10061eb0 builds face tangent records. Keep these separate from the
producer in a reconstruction.

## Remaining bounded questions

1. Read the full intermediate1006d9e0 body if exact conditional timing within
   HUD_VidInit is needed. Video-init reset and the next eligible preparation
   lifecycle are proven; the engine's reasons for invoking HUD_VidInit are not.
2. Confirm brush submodel storage sharing and any paths bypassing the world
   surface table; no separate brush marking loop is present in10059e30.
3. Check downstream behavior for invalid atlases/samples; producer itself only
   checks styles and material availability.

Core assignment predicates and reset mask are resolved. These remaining
questions are not missing flag-assignment logic.

## Evidence integrity and catalog notes

Producer C evidence:
`ev_bc213d411af2dc2b8b14ebbacfa2eeb31e50731090a7758cfcccc5f03ee2684d`.
Caller analysis:
`ev_bc1299843875337915c4a1d54c5e22d51d84e53ab0b38faa6e5d834ae7b1debe`.

Raw SHA256 hashes:

```text
graphics-surface-flags/000-pseudocode.c
2c702d9bb706649298e2829c1c63fa065c6cb41c9ed55fe31b071d71bf5c4a53
graphics-surface-flags/001-analyze_function.json
214232266500f56cfa10b7e818a1eb5918d728afd504c71d27076fd93b88c271
graphics-lighting-core/002-pseudocode.c
ddb429ecdbcd7016c8ffc58c8a9d60a46f8fc9a5b0c0adcc51491eebfe44e188
graphics-blur-material-state/004-pseudocode.c
6bfe4273fae21347afae39a3e0a0a40cd91132825a5df7caaa3330abf81f2df7
graphics-blur-material-routing/002-pseudocode.c
f72cacf5641909121d38d957e80705742e9c4cf21c0a0531dd71974396472913
graphics-material-lifecycle/000-pseudocode.c
407925ace93e0982f83375a3d3e976c218b122fb9ac2f8ce3d42acb62b4ed5ee
graphics-material-lifecycle/002-pseudocode.c
046bb4324c3b1a8507484c1655864a5c71fececdf58120019798fe329f86e39a
graphics-material-reset/000-pseudocode.c
bf9d50023c30c831428d4052a5f7c2c520c3f714ed0af5adde3aaaaa15381c74
graphics-material-reset/002-pseudocode.c
3064bcfb0e74b50d7fefda747cb0e4d1a9457b115f2c16883caa41bd3d94ae6a
```

Companion `analysis/graphics/surface-flag-catalog-notes.json` has isolated notes
for the producer, caller and resolved helpers. This audit does not modify the
catalog.
