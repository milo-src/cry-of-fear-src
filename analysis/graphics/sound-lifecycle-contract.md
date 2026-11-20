# Native sound-object lifetime and HUD shutdown ownership

Target: original client.dll SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Static reverse-engineering only, 2026-11-20. No runtime, port changes, builds,
original-resource edits or shared catalogue edits were performed. This document
tracks owners/data/call relationships rather than proposing implementation.

## Navigation and object roles

| Native location | Proven role | Producer / main consumers |
|---|---|---|
|105440a4|client-local allocated context; byte0 gates sound dispatch|1007f9e0 alloc/initialize,1007fb10 receiver,1007fa40 frees/nulls|
|105440a8|pointer returned by imported irrklang::createIrrKlangDevice; ISoundEngine interface identity supported by decorated import|1007f9e0 assign,10080410 virtual sound creation,1007fa40 reference release|
|105440ac|retained handle returned from engine virtual+8 in mode1|10080410 stores/uses;1007f740 applies current volume|
|105440b0|separate music-like handle; producer not recovered in this bounded pass|1007f740 applies MP3Volume, fade and optional local override|

The context a4, engine a8 and returned sound handle ac are separate objects.
None is a GL manager or texture ID. Factory import supports the interface name
ISoundEngine, **not** a concrete irrKlang implementation class, full vtable layout,
backend destructor address or ownership of every returned sound object.

## Initial creation/recreation:1007f9e0

Existing public route: HUD_Init1001d4a0 calls1006cf00 after three earlier init
helpers.1006cf00 checks engine CheckParm("-nomusic",0), and invokes1007f9e0 only
when that returns0. This disables creation of this entire backend/context route,
not just one proven music channel. It is a demonstrated direct route, not an
exhaustive claim about all callers or the engine's callback frequency.

`graphics-hud-lifetime-producers/000-pseudocode.c` proves:

```text
SoundRelease1007fa40()
p = Allocate100b44cb(0xe0)
if p == null:
    context105440a4 = null
else:
    context105440a4 = Initialize1007f6e0(p)
    if context105440a4 != null:
        context105440a4.byte0 =0
        engine105440a8 = createIrrKlangDevice(0,0x3d,NULL,"1.6.0")
```

This first releases previous state, then allocates224 bytes for the client-local
context, initializes it, disables byte0 and creates the external engine. The
factory arguments above are the exact observed values. Their option-bit names,
actual selected audio driver and binary library version are not inferred from
the literal0x3d or string1.6.0 without the corresponding library/API evidence.

No factory-result success check is visible before return. If allocation returns null, no new factory call occurs. The caller also checks
the initializer result, but its proven identity return makes a second null
result impossible for a nonnull allocated input in this body.1007fa40 does not null
the old engine pointer, so those paths do not by themselves establish a safely
reset engine reference. This is static dataflow, not a runtime failure report.
The recovered caller establishes HUD_Init scheduling but not how many times the
engine invokes that callback during one process lifetime. The local initializer
below does not read old a8/ac, so no such stale-pointer read should be attributed
to construction itself.

Exact references to a8 expose its direct assignment at1007fa24; direct writes to
a4 occur at1007fa04/1007fa2d in this producer and1007fa78 in cleanup. Such lists
are bounded direct-reference evidence, not proof against arbitrary indirect or
bulk writes.

## Local initializer and update dispatcher

Saved1007f6e0 (`graphics-hud-lifetime-owners/000-pseudocode.c`) writes zero to
nine32-bit fields at context offsets8,c,10,14,18,1c,20,24,28. It does not zero the
entire224-byte allocation, establish a vtable, enable byte0, create the external
engine, or access old a8/ac. The producer separately writes byte0=0 after this
call. Bounded assembly1007f9e0 passes allocated EAX to ECX;1007f6e0 executes
MOV EAX,ECX and returns that same pointer. The caller stores EAX intoa4.
Therefore the Ghidra void signature is an ABI recovery artifact, not a missing
constructor return or a distinct factory object. Both assemblies and their
hash metadata are in analysis/graphics/hud-lifetime-assembly.

1007fa90 (`graphics-hud-lifetime-owners/001-pseudocode.c`) is the local dispatch:
if a4 is null it returns; if a4.byte0==0 it calls1007f940; it then calls1007f740
regardless of the byte's value. Bounded1007fa90 assembly loads ESI=a4 and
passes ECX=ESI to both1007f940 and1007f740 (the latter is a tail jump).
The wrapper ignores activation's return value. Its caller/time scheduling is
not yet contained in the saved C corpus.

### Activation1007f940

This writes context.byte0=1 **even when a8 is null**. With no backend it returns0
and does not reset the remaining fields. With a backend it returns1 after zeroing:

- dwords+4,+2c,+30,+b8,+bc,+c0,+c8,+cc,+d0,+d4,+d8;
- words+34,+dc;
- bytes+36,+c4.

It does not create/retry the backend, clear ac/b0 or initialize the complete
224-byte context. Because byte0 stays1 after backend-null activation, the
1007fa90 wrapper will not automatically retry activation on its next call.
The update/playback routines independently check a8, so byte0 alone is not
proof that audio is usable.

### Update1007f740: local owner, retained handles and music fields

The body runs only when a8!=null and context.byte0!=0. If context+4 is zero it
caches engine GetLocalPlayer() there (101b26d4, SDK slot51). Each later update
retries that lookup while the cached result remains zero. This body does not
otherwise dereference the player pointer.

For ac!=null, it reads cvar volume and calls handle virtual+20 with the value
clamped0..1. For b0!=null, it first does the same using MP3Volume. The handles
are separate globals; neither is released or nulled here.

| Context offset | Observed consumer/producer in this bounded chain |
|---|---|
|+0 byte|activation writes1; update and playback gate on nonzero|
|+4 dword|activation clears; update lazily stores GetLocalPlayer result|
|+c0 int|activation clears; update converts to volume/255 when+c4!=0|
|+c4 byte|activation clears; update enables final music-volume override|
|+cc float|activation clears; update uses as fade start time|
|+d0 float|activation clears; update uses as fade duration|

Fade uses engine GetClientTime() at101b26e0 (SDK slot54). Exact order:

```text
if b0 != null: b0.virtual20(clamp(MP3Volume,0,1))
if b0 != null and timeRead1 < context.cc + context.d0:
    f = (timeRead2 - context.cc) / context.d0
    if f >= .95:
        b0.virtual18()
        return                 // skips final override
    q = int(MP3Volume * 255 - int(f * 255))
    v = clamp(q,0,255) / 255
    if v <= .05: b0.virtual18()
    else:        b0.virtual20(v)
if context.c4 != 0 and b0 != null:
    b0.virtual20(clamp(context.c0 / 255.0,0,1))
```

These formulas describe ordinary finite inputs; exact x87 rounding and exceptional
float-to-int cases have not been verified with assembly. The separate time reads
must not be silently collapsed into one. Fade subtracts an 8-bit quantized ramp
from current MP3Volume; it is not MP3Volume multiplied by(1-f). There is no shown
positive-duration/elapsed-time guard. When time is already at/past start+duration,
this branch does nothing beyond the initial MP3Volume write. The lower-volume
stop path does not return and can be followed by the final+c4 override; only
f>=.95 returns early. No branch clears b0 or the fade fields.

Virtual+18 is the same stop-like operation used in the existing mode2 sound
path, and+20 is its volume operation. Concrete external ABI names beyond that
observed behavior remain separate from the native slot contract. The producer
of b0 and nonzero writers of+c0/+c4/+cc/+d0 are **not recovered in this pass**;
initialization and consumption are now known, but this does not invent when a
music track starts, how long its fade should last or who owns its final release.

## Dispatch receiver and returned sound handles

The small wrapper1007fb10 first loads **ECX=a4**, tests it, then forwards its
arguments to10080410. This is proven by bounded native assembly
`analysis/graphics/hud-lifetime-assembly/1007fb10.asm`, not inferred from Ghidra's
omitted this parameter.10080410 immediately rejects context byte0==0 or a8==null.
Thus a4 existence and its activation byte are separate gates; a8 is a separate
backend dependency.

10080410's already recovered weapon-event behavior:

- Resource paths containing case-sensitive `weapons/` are rewritten to
  `weapons_new/` followed by bytes after the first slash/backslash.
- Mode1 invokes old ac virtual+18 when ac exists, then creates via a8 virtual+8
  with arguments `(path,1,1,1,0,0)` and stores the returned pointer into ac.
- Mode2 invokes existing ac virtual+18 and returns; this branch does not clear ac.
- Other modes call a8 virtual+8 with `(path,0,1,1,0,0)` and keep the result local.
- Nonnull returned handles receive clamped volume0..1 via virtual+20, playback
  rate1+RandomFloat(-0.1,0.1) via+60, then virtual+10 with argument0.

The known game-facing interpretation is looping/stop versus one-shot playback,
as documented in `analysis/weapons/client.md`; the slot offsets and arguments
above remain the direct native evidence. This report does not assign every slot
an external class method name solely from matching numerical layout. There is no
visible reference-drop operation on those returned handles in10080410. Whether
other helpers/library ownership release them is a separate lifetime question;
this observation alone is not a measured leak.

## Engine export shutdown and reference-count release

The original HUD_Shutdown export1007ad10 calls input shutdown1007a870 first, then
1007fa40. That is distinct from the GL manager's CRT atexit callback and does not
prove all process exit handlers have run. `renderer-teardown-contract.md` records
the separate GL lifetime.

The complete1007fa40 body computes an adjusted subobject when a8 is nonzero:

```text
p = a8 +4 + *(int32*)( *(int32*)(a8+4) +4 )
*(int32*)(p+4) -=1
if *(int32*)(p+4) ==0:
    call (*(functionTable**)p)[0](1)   // adjusted receiver p
if a4 != null:
    FreeForwarder100b42a4(a4,0xe0)
    a4 = null
```

The pointer adjustment reads a table-offset field; it is not an ordinary
`vtable[1]` method call. The actual decrement and zero comparison establish a
reference-counted subobject release. This body does not make the decrement
atomic, test <=0, or clear a8/ac. A second shutdown therefore cannot be called
idempotent merely because it clears a4.

The virtual callback's first argument1 is compatible with a deleting-destructor
convention, but its concrete target and complete behavior are **not established**
by this client caller. Avoid manufacturing a concrete backend class/destructor
name from the imported factory alone. The backend's actual vtable is needed to
resolve that external edge.

`graphics-hud-lifetime/001-pseudocode.c` resolves100b42a4: it forwards its pointer
to `thunk_FUN_100f7be4` and returns. It does not read the extra0xe0 passed by this
caller, invoke a local class destructor, iterate children or inspect context
fields. The final allocator/free implementation remains its own boundary;224
bytes is independently proven by the creation allocation, not by this ignored
argument. No GL cleanup is established by this forwarding wrapper.

## Exact next questions, kept bounded

1. Caller scheduling of1007fa90, producer of105440b0 and nonzero writers of
   context+c0/+c4/+cc/+d0. Activation, receiver ABI and update formulas are closed
   for the saved bodies; these are the remaining input/owner edges.
2. External virtual target at adjusted a8 subobject vtable[0] and CRT heap
   internals beyond the resolved100f7be4→FID_conflict__free wrapper. The wrapper
   itself is closed in [hud-shutdown-followup.md](hud-shutdown-followup.md).

Concrete engine class/layout, all sound-handle release paths and runtime leak or
double-release behavior are not established. These are precise evidence limits,
not claims that no owner exists or that the current port should change behavior.

## Direct evidence

Capture paths are under decompiled/client/captures unless absolute elsewhere:

- graphics-hud-lifetime-producers/000-pseudocode.c —1007f9e0 producer.
- hud-entry/000-pseudocode.c and graphics-client-first/005-pseudocode.c —HUD_Init and-nomusic gate.
- graphics-hud-lifetime-owners/000,001-pseudocode.c —initializer and activation/update wrapper.
- graphics-audio-activation/000,001-pseudocode.c —activation and update bodies.
- analysis/graphics/hud-lifetime-assembly/1007fa90.asm —both callees receive ECX=a4.
- analysis/graphics/studio-existing-audit.md and studio-material-contract.md; external/hlsdk-portable/engine/cdll_int.h —engine API base/slots for local player, cvars and time.
- graphics-hud-lifetime/002,003-inspect_native_instruction.json — a8/a4 refs.
- graphics-hud-lifetime-producers/003,004-inspect_native_instruction.json — ac and factory-IAT refs.
- graphics-gl-cleanup-boundary/002-pseudocode.c —1007fa40 release.
- graphics-hud-lifetime/001-pseudocode.c —100b42a4 free forwarding.
- weapons-client-core/007-pseudocode.c and weapons-client-effects/000-pseudocode.c —wrapper/dispatch.
- graphics-gl-lifecycle-followup/003-pseudocode.c —HUD_Shutdown export.
- analysis/graphics/hud-lifetime-assembly/1007fb10.asm and capture.json — receiver ABI and bounds/hash.
- analysis/exports/client-imports.csv — exact createIrrKlangDevice decorated import and IAT RVA13a308.
