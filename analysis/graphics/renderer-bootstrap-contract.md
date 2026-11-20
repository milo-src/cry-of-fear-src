# Native renderer bootstrap, video reset and dispatch

Static client.dll audit, 2026-11-20. Original SHA256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
No game execution, installation or resource changes. Addresses below are native
32-bit addresses and offsets, not structures to paste into the port.

## Object and mode gate

The GL manager object is **101be5f8**. Bounded assembly in
`studio-flow-assembly/10001080.asm` passes it to constructor10053b20; the
constructor sets module+210 and status+214 to zero. Ghidra did not recognize
the small initialization wrapper10001080 as a procedure; its failed query is
retained in `graphics-studio-flow-init/capture.json`. The assembly remains
independent evidence, and no synthetic decompiled C was created for that wrapper.
The wrapper also registers a callback10139320 through100b4a40; that callback's
cleanup behavior and full CRT initialization ordering are outside this audit.

**10053c70 simply returns this.status==2.** It is not a sky-culling algorithm.
The studio sky-effect branch calls this general GL-ready gate before examining
101be7f8; the spatial/visibility semantics belong to its caller. Likewise the
TGA loader uses this gate. Its ECX101be5f8 is visible in the previous full loader
assembly `graphics-studio-texture-loader/008-procedure_assembly.json`.

10053bb0 is another small method: it zeros two12-byte arrays at+30 and+3c,
except index2 becomes2 in the first array and10 in the second. These are exact
default bytes; this body does not load a GL library or clear texture IDs. Their
complete semantic use is not inferred from this initializer alone.

## GL initialization100556f0

Video initialization1006d9e0 passes ECX101be5f8 into100556f0 at1006dcc7.
`studio-flow-assembly/hud-manager-call.asm` preserves this register setup.
100556f0 keeps the object in EDI, then restores ECX=EDI before10053c80, as
shown by `studio-flow-assembly/100556f0.asm`.

Observed state transitions:

| Condition | Result |
|---|---|
| status!=0 on entry | Log already loaded and return; no re-probe |
| command-line `-noglfx` | Return with status0; no library load |
| software renderer after mode handling | Set status1, return |
| LoadLibraryA("opengl32.dll") fails | Set status1, return |
| dispatch load fails or glGetString(GL_RENDERER)==NULL | FreeLibrary, module0, status1 |
| dispatch load succeeds and renderer string exists | Set status2; query optional capabilities |

The engine IsHardware callback is10545850. The original distinguishes its
values0/1/2 as software/OpenGL/Direct3D in its user-facing messages; manager
status2 is a separate enum meaning successful GL initialization. Do not equate
the two numeric domains. Unsupported-mode handling may display a dialog and
attempt to update Steam LaunchOptions via10055620. We analyzed this code only;
no dialog, registry change or target execution occurred.

A failure stored as status1 prevents retry on another call in the same state.
Changing contexts or retrying loads would require another reset/teardown path;
that behavior is not supplied by this routine. Conversely `-noglfx` leaves0.
The successful branch calls extension/capability helpers100554c0,10054f90,
10054de0,10054e20,10055100,100552d0,10055140,10054c90,10055440. Their complete
contracts remain separate work; this pass establishes routing and state only.

## Dispatch loader10053c80

This routine resolves **71 named functions** with GetProcAddress from module+210
and stores them at manager offsets+48..+160. It logs individual failures and
returns their combined non-null result. Missing functions do not produce a
transactional rollback of the pointer table inside this routine. Initialization
handles overall failure as described above; status gates remain important.

`native-gl-dispatch-map.json` enumerates every assignment, native global address,
source Evidence ID and DLL hash. All71 GetProcAddress calls are accounted for.
This is a map of assignments, not evidence that any live machine supports them.

In particular:

```text
GetProcAddress(manager.module, "glCopyTexImage2D")
    -> manager+0x78
    -> 0x101be670
```

This closes the previously signature-only identity of the camera/photo copy.
Other useful entries include glGetIntegerv101be6b8, glGetTexImage101be6c0,
glTexImage2D101be734, glTexParameterf101be73c and glViewport101be754.
The JSON table is the canonical full mapping. Windows GetProcAddress import
at IAT1013a194 is independently listed in `analysis/exports/client-imports.csv`.

## HUD video reset1006d9e0 and SCREENINFO

HUD_VidInit1001d560 passes ECX1018a0c0 to1006d9e0, then calls10098930 and
returns1. Saved assembly `studio-flow-assembly/1001d560.asm` confirms the object
which Ghidra omits from the callee's declaration. HUD_Reset1001d520 also calls
1006d9e0. These are two confirmed direct entry routes, not a claim that every
engine map/context event invokes them in a particular order.

The video routine clears the custom sleeve/fingers/glove paths and active flags,
resets HUD state and invokes GL manager initialization, shader/video helpers,
studio bindings and general renderer reset10060b10. It then obtains screen info:

```text
*(HUD+0x536c) = 0x214
engine.GetScreenInfo(HUD+0x536c)       // engine table slot12, address101b2638
```

Thus SCREENINFO base=1018a0c0+536c=**1018f42c**, width at**1018f430**,
height at**1018f434**. SDK SCREENINFO contains size,width,height,flags,charHeight
and256 short char widths, matching size0x214. The SDK ABI is retained in
`external/hlsdk-portable/engine/cdll_int.h`; the workspace build copy is under
`deps/external/hlsdk-portable/engine/cdll_int.h`.

This explains why exact references to width/height found no direct writer:
the engine populates a structure passed by pointer. It does not establish
glViewport origin, framebuffer size equivalence in every mode or read-buffer
selection. Those remain limitations of camera pixel reconstruction.

The rest of1006d9e0 selects320/640 HUD sprite variants from width, loads/reloads
sprite handles, initializes HUD elements via virtual calls and resets timers.
The detailed element-specific methods are not all resolved by this audit.

## Texture IDs and lightmap reservation

1005a0b0 reserves three contiguous groups of64 IDs:

```text
base0 = nextID
base1 = nextID + 64
base2 = nextID + 128
nextID += 192
```

Outputs101cbf70/74/78 feed the lightmap layers previously documented. This
function itself performs no GL allocation, upload or deletion.

Exact references captured for the eight studio replacement handles show direct
writes only in their corresponding lazy initialization helpers. The counter
1018fe8c has many other allocation writers; the complete list is retained in
`graphics-studio-flow-entry/004-inspect_native_instruction.json`. This bounded
search does not prove absence of indirect/indexed/bulk reset or context loss.
The video routine's direct body clears paths and flags but does not directly
zero those handles. Do not turn HUD_Reset into an invented cache-destruction rule.

## Evidence and remaining work

New captures under `decompiled/client/captures`:

- graphics-studio-flow-entry: allocator/handle writes and renderer reset caller.
- graphics-studio-flow-routing: gate10053c70, defaults10053bb0, video1006d9e0,
  lightmap reservation1005a0b0.
- graphics-studio-flow-abi: full dispatch loader and direct owner references.
- graphics-studio-flow-init: GL initialization, constructor, HUD_Reset; failed
  small-wrapper query retained separately.

Next questions: optional extension helpers, GL manager teardown and context
recreation, complete studio vtable initialization, and external engine frame
ordering. Recovered static contracts still require port integration and visual
comparison before claiming original rendering equivalence.
