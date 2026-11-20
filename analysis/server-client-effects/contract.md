# Server client effects and common engine bridges

Thirteen newly reviewed entries, with original server SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
This is static analysis, not a game test. [capture.py](capture.py) reproduces
bounded objdump ranges and checks every emitted byte against the PE.
[evidence.json](evidence.json) pins the C, assembly, SDK headers and raw names;
[notes.json](notes.json) supplies the Russian central-reference cards.

## Callback binding and ABI

The supporting `100b4aa0` copies 144 DWORDs from its first argument to
`10222f48`, stores its second argument in `10223188`, and returns `RET 8`.
The latter is the borrowed globals pointer. No helper here allocates or owns
the engine, edicts, caller vectors, or message buffers.

The slot indices below are tied to this native copy and the pinned SDK header:

| Slot | Callback | Used by |
|---:|---|---|
| 19 | MakeVectors | 10119320 |
| 31 / 34 | TraceLine / TraceHull | 1011a800 / 1011a7e0 |
| 72 | PEntityOfEntIndex | 10119680 |
| 46 / 47 | MessageBegin / MessageEnd | senders |
| 48 / 50 / 54 | WriteByte / WriteShort / WriteString | senders |
| 75 | RegUserMsg | supporting 100e5fc0 |
| 91 | RandomFloat | 101198a0 |

All thirteen primary functions use caller-cleaned stack arguments (or none).
Tail jumps preserve the caller's return address. Their callback results are
not automatically meaningful return values merely because EAX survives.

**10119320** is exactly `JMP [10222f94]`. It forwards the angles pointer to
MakeVectors without validation or intermediate math. The output basis/global
mutation belongs to the engine callback, not to a newly recovered local body.

**1011a800(start,end,ignoreMode,skip,traceOut)** and
**1011a7e0(start,end,ignoreMode,hull,skip,traceOut)** replace their third stack
argument with the DWORD boolean `(ignoreMode == 1)` before tail-jumping to
TraceLine / TraceHull. This rewrite is absent from the saved Ghidra C. It is
not a generic nonzero test and does not preserve extra bits. Remaining
arguments are untouched; output traces and collision semantics belong to the
engine. There are no pointer, hull or callback availability checks.

**10119680(index)** accepts signed `1 <= index <= globals+90` (maxClients),
calls PEntityOfEntIndex, rejects NULL or `edict.free != 0`, and returns
`edict+7c` (private data) in EAX. It does not check classname, health, a player
vtable, or private-data non-NULL separately. Index zero is excluded.

**1011ab20()** loads `[globals+0]` with `FLD DWORD` and returns time in x87 ST0.
It performs no clock conversion or fallback for an unset globals pointer.

**101198a0(out)** calls RandomFloat three times in order with `(-1,1)`,
`(-1,1)`, `(0,1)`. Each ST0 result is stored as float32 into out XYZ, and EAX
returns out. This is a caller-provided vector result buffer, not three scalar
returns. Supporting `100941f0` passes its own result buffer and returns it.
There is no vector normalization, rejection sampling or local seed handling.
Uniformity, endpoint inclusion and the generator itself are outside this body.

## Fixed-point helper and fade structure

**101166d0(value,scale)** uses float32 `MULSS`, signed32 `CVTTSS2SI`, then
signed clamps to `[0,65535]`, returning the full DWORD in EAX. It is not a
floating clamp before conversion. Ordinary finite representable products
truncate toward zero. Under masked SIMD invalid exceptions, NaN/overflow
produce the integer-indefinite value, which the negative clamp turns into0;
unmasked exception behavior and ambient MXCSR remain external state.

**10119cc0(out,color,duration,hold,alpha,flags)** fills this16-byte structure:

| Offset | Stored value |
|---:|---|
| 0 | float32 representation of U16Clamp(duration * 4096) |
| 4 | float32 representation of U16Clamp(hold * 4096) |
| 8 | raw DWORD flags |
| c,d,e | low byte of CVTTSS2SI(color.X/Y/Z) |
| f | low byte of alpha argument |

RGB is truncated and reduced to a low byte, **not clamped to0..255**. Duration
and hold are integer-valued floats here, not packed uint16 fields. The sender
converts them back. EDX retains out across the known `101166d0` body; Ghidra's
synthetic64-bit result and extracted high half do not describe the real ABI.
All fields are written; invalid pointers/overlapping source/output are not
guarded. These recovered operations are not a promise of general alias safety.

**10119d40(fade,recipient)** returns without sending for NULL recipient or
zero result from virtual slot+d4. Otherwise it sends destination1 to
`recipient.pev->pContainingEntity` with runtime message ID `[10226720]`:

```text
SHORT trunc(fade.float0), SHORT trunc(fade.float4), SHORT fade.DWORD8,
BYTE fade.c, BYTE fade.d, BYTE fade.e, BYTE fade.f
```

MessageEnd is a tail jump. Payload is10bytes, matching native registration
`ScreenFade,10`. DWORD flags are narrowed by WriteShort; caller-supplied fade
objects need not have been built by10119cc0. This helper does not reset or
schedule server state and does not implement client blending.

**10119c00(recipient,color,duration,hold,alpha,flags)** constructs the local
16-byte object using10119cc0, then calls10119d40. Construction happens even
when the recipient will be rejected. No heap allocation occurs.

## ScreenShake: exact eligibility and payload

**10119de0(origin,amplitude,frequency,duration,radius)** first encodes duration
with4096 and frequency with256 through101166d0. It enumerates signed client
indices1..maxClients, re-reading maxClients on the loop back edge and through
10119680. Non-NULL private data must have `pev.flags & 0x200` (FL_ONGROUND).
Airborne recipients are skipped; no health predicate is called here.

For ordinary radius>0, it computes Euclidean distance from origin to the
player's `pev.origin`, using float32 differences/products/additions, a double
sqrt, then float32 conversion. Only strict `distance < radius` passes;
the boundary is excluded. There is **no distance attenuation**: every eligible
recipient gets the same amplitude. Radius<=0 skips the spatial filter, so
origin is not dereferenced by this filter. No LOS or visibility test occurs.

Native floating edge paths are retained: first `COMISS 0,radius / JAE` skips
the filter for ordered radius<=0; unordered radius enters it. The later
`COMISS radius,distance / JBE` rejects equality, smaller radius and unordered
results. A negative squared sum calls the separate CRT sqrt helper1016be90;
that exceptional implementation is not claimed recovered here.

Ordered zero amplitude (including -0) skips sending. Native
`UCOMISS; LAHF; TEST AH,44h; JNP` allows nonzero **and unordered** amplitude
through; under masked invalid conversion, NaN can therefore produce a packet
with encoded amplitude0. Negative nonzero amplitude also sends encoded0.
The packet uses destination1, runtime ID `[1022671c]`, recipient edict, then:

```text
SHORT U16Clamp(amplitude * 4096),
SHORT U16Clamp(duration * 4096),
SHORT U16Clamp(frequency * 256)
```

This6-byte payload matches native registration `ScreenShake,6`. Each recipient
has its own Begin/End, no shared broadcast message. **10119f60** forwards its
four arguments with radius=0; it still applies the on-ground and amplitude
gates. Thus its working name `ScreenShakeAll` does not imply all players are
unconditionally included.

## ProFont custom text message

**10119810(recipient,text,style,broadcastByte)** sends the native `ProFont`
message, not TextMsg. A nonzero low byte of broadcast selects destination2,
NULL origin and NULL recipient, without checking recipient virtuals. Otherwise
NULL recipient or zero virtual+d4 skips the send; a valid recipient uses
destination8 (MSG_ONE_UNRELIABLE), unlike the reliable fade/shake destination1.
The body is `BYTE style; STRING text`, followed by tail-jump MessageEnd.
There is no local null-string, length or numeric-ID guard. For an ordinary
N-byte string the payload is N+2 bytes; the existing engine192-byte variable
payload boundary means N<=190 fits this body alone, not that the sender clips.

The native registration stores the return from `RegUserMsg("ProFont",-1)`
in10226568. A saved client initialization references hook1006e930, but that
body is absent from the current client C corpus. The receiver's interpretation
of style, text encoding, layout and lifetime remains a concrete capture task.

## Evidence boundaries

The primary local bodies, registration calls/raw strings, globals binding and
callback-slot arithmetic are byte-verified. Engine message packing/error paths
have separate evidence in [engine-wire-contract](../graphics/engine-wire-contract.md)
and [buffer contract](../graphics/engine-message-buffer-contract.md).
Virtual+d4 is an eligibility predicate; shared default1000db70 returns0, but
all player/derived overrides are not proven by these senders. Client fade,
shake and ProFont handlers, PRNG implementation, engine trace implementation,
runtime FP settings and actual gameplay ordering remain open. No original
resource, runtime DLL or game implementation was changed.
