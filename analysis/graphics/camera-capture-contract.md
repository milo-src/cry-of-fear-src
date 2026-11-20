# Camera framebuffer capture: scheduling and retained photo contract

Target: original CoF client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Static saved-artifact audit, 2026-11-20. No game, REA session or original game
resources were touched by this audit. This document extends, rather than replaces,
`studio-texture-lifecycle-audit.md` and `studio-texture-loader-contract.md`.

## Three consumers, two capture textures

The camera viewfinder, retained photograph and HUD blur are distinct routes.
None of the two framebuffer-copy helpers invokes another scene render or changes
the camera/refdef. Their source is the framebuffer readable **at their call site**.
The static client evidence alone cannot label that source a clean world-only
frame, a completed frame, a previous frame, or a second camera view.

| Consumer | Scheduling | Destination | Dimensions |
|---|---|---|---|
| cam_vfind studio mesh | every matching draw when cl_cameraeffect!=0 | live104d26e8, ready104d26e5 | texture header width+44,height+48 |
| diffusegay studio mesh | first eligible matching draw after pending TakePhoto | retained104d26f0, ready104d26e6 | texture header width+44,height+48 |
| HUD screen blur10071df0 | eligible HUD redraw after empty hook10072470 | same live104d26e8 | screen globals1018f430/434 |

The live viewfinder and blur can redefine the same texture dimensions during the
frame. They each copy again before using it. The retained photograph has its own
ID and is not overwritten by those live copies. This is a resource/state fact,
not a measured GPU-memory or leak diagnosis.

## TakePhoto: server-message hook to deferred mesh capture

The saved registration1006cf00 (`graphics-client-first/005-pseudocode.c`) hooks
`TakePhoto` to wrapper1006eb10. Bounded assembly in
`analysis/weapons/photo-body-evidence/1006eb10.asm` forwards the three message
arguments plus HUD object1018a0c0 to100719f0. Its full saved C body
`graphics-studio-texture-loader/003-pseudocode.c` does only:

```text
pending104ce4a1 = 1
return 1
```

The function does not parse a payload, copy a framebuffer, draw a flash or write
a photograph file. Multiple messages received before consumption coalesce into
one pending boolean; the code is not a queued list of shots.

The consumer is the texture-name branch `diffusegay` in10065ef0:

```text
if pending104ce4a1:
    CopyRetained10064ac0(texture.width,texture.height)
    pending104ce4a1 = 0
if retainedReady104d26e6:
    bind retainedTexture104d26f0
    use it for this mesh
```

Pending is cleared after the helper without testing GL error/success. Ready is
set unconditionally by the helper after its copy call. This is evidence of the
original control flow, not proof that a failed GL copy creates valid pixels.
Without an eligible draw of that material the pending state is not consumed.
The retained ready byte is not cleared after display, so subsequent matching
meshes reuse the previous photo until another TakePhoto capture overwrites it.
The inner material branch has no additional local-player/viewmodel or weapon-ID
condition: it is reached by name after the enclosing renderer gates.

## Studio route and capture point

The native returned Studio interface selects DrawModel wrapper10053750 and
DrawPlayer wrapper10053730. The recovered object instance is101ba540. Existing
saved bodies/vtable evidence establish this hardware route:

```text
DrawModel10053750 -> orchestrator1008cee0
    -> render-final virtual route1008f0b0
    -> render virtual route1008edd0
    -> IsHardware()!=0 ->1008edf0
    -> gl_renderer && gl_modelrenderer custom branch
       Setup100687d0
       for each bodypart:
           SelectBodypart10068770
           GL_SetRenderMode
           DrawMeshes10065ef0
       Restore10067850
```

The public engine callback order relative to world rendering and HUD redraw is
outside this client-only route. It must not be inferred just from those names.
Within the hardware method, r_drawentities2 and3 draw bones/hulls instead of the
mesh loop; captures therefore do not run through this path in those modes.
The alternate engine StudioDrawPoints path also does not execute the custom
name-based capture branches. The custom10065ef0 has additional entity/global
visibility gates; pending does not override them.

Inside10065ef0, the bodypart's meshes are traversed in stored order. The helper
runs after selection of the material/skin entry and **before emission of that
mesh's triangle command stream**. Therefore earlier draw work can already be in
the source framebuffer. This is not proof that the current camera mesh itself,
all viewmodel meshes, or any particular transparent/world pass is included.
Capture dimensions come from the selected native texture record, not from the
camera model bounds or an invented quality setting.

`cam_vfind` independently requires cl_cameraeffect (pointer105433f8) nonzero.
Its helper10064c10 sets liveReady; consumer binds liveTexture, sets its local
restore flag and clears liveReady. Retained-photo consumption is not gated by
that live-viewfinder cvar in the inner branch.

## Capture mechanics and GL state ownership

10064c10 and10064ac0 have separate lazy IDs/ready bytes but identical copy logic.
On first use they reserve the next global texture name1018fe8c, allocate a
zero-filled256x256 RGB level0, set min/mag LINEAR, restore the old binding and
free the temporary CPU buffer. No glGenTextures appears in those helpers.

Every call then saves current GL_TEXTURE_BINDING_2D into shared104d26ec, binds
its destination and invokes dispatch101be670 with this signature:

```text
CopyTexImage2D(GL_TEXTURE_2D,0,GL_RGB,
              screenWidth/2-requestedWidth/2,
              screenHeight/2-requestedHeight/2,
              requestedWidth,requestedHeight,0)
```

All divisions above are integer operations. A zero dimension skips its
subtraction but is still passed as the copy dimension. There is no dimension
clamp or viewport-origin addition. This copy redefines level0 at the requested
size, so the initial256x256 allocation does not limit subsequent captures.
The helpers do not perform CPU readback, FBO allocation, mipmap generation,
read-buffer selection, view transformation or a second scene render.

**GL dispatch identity is now proven.** Manager bootstrap100556f0 calls
10053c80 using the same saved object pointer. HUD VidInit's call site1006dcc7
passes ECX101be5f8 (`analysis/graphics/studio-flow-assembly/hud-manager-call.asm`),
and100556f0 assembly preserves that pointer in EDI before restoring it to ECX
for10053c80. Its saved body (`graphics-studio-flow-abi/000-pseudocode.c`) does:

```text
this->slot_78 = GetProcAddress(this->module_210,"glCopyTexImage2D")
manager101be5f8 +78 = dispatch101be670
```

The capture call is therefore the named GL entry, no longer merely an inferred
signature. Manager constructor10053b20/entry10001080 independently establishes
this static manager instance. Capturing through this dispatch copies existing
pixels; it does not itself create another scene view.
The exact original read buffer/front-back selection and viewport origin at
camera/HUD sites remain unproven. Neither helper chooses them locally.

### Screen dimensions are engine SCREENINFO fields

Screen width1018f430 and height1018f434 are now traced to engine GetScreenInfo,
not an assumed raw viewport query. HUD_VidInit1001d560 bounded assembly in
`analysis/graphics/studio-flow-assembly/1001d560.asm` loads ECX1018a0c0 and calls
1006d9e0. That body (`graphics-studio-flow-routing/004-pseudocode.c`) sets
`*(this+0x536c)=0x214` and calls engine dispatch101b2638 with `this+0x536c`.

```text
HUD object1018a0c0 +536c = SCREENINFO1018f42c
SCREENINFO+0 = iSize =214h
SCREENINFO+4 = iWidth  =1018f430
SCREENINFO+8 = iHeight =1018f434
```

Initialize's captured engine API base101b2608 plus slot12*4 equals101b2638.
`external/hlsdk-portable/engine/cdll_int.h` identifies slot12 as GetScreenInfo
and proves the SCREENINFO layout/532-byte size. Thus video initialization fills
the dimension fields used by the centered capture. The call's return value is
not tested in1006d9e0. The fields describe screen size; they do not by themselves
prove GL viewport origin, a subview rectangle, front/back read selection or that
an engine-driven resolution change triggers the callback at a particular time.

Neither helper restores the binding after copying. In10065ef0 the live branch
sets local_5 and post-mesh code rebinds shared104d26ec when local_5 is nonzero.
That flag is initialized before the mesh loop, not freshly for every mesh. The
retained branch does not independently set it. Both helpers overwrite the same
saved-binding global, so this is not an independent GL push/pop stack per
capture, and an outer previously-set live flag can still affect later meshes.

## HUD blur scheduling versus camera capture

Exported HUD_Redraw1001d4f0 (`hud-entry/001-pseudocode.c`) calls10072740 and
returns1. At its beginning10072740 calls BlackWhite1005d7a0. Later it updates HUD
current time and double frame delta, calls10072470, then calls10071df0(delta)
before later HUD-element drawing. Specifically HUD+30f0 stores current float
time, +30f4 the old float time, and +30f8 the double subtraction of those float
values. The negative-delta clamp occurs **after**10072470 and10071df0. A zero
delta suppresses the blur capture, but a negative nonzero delta still reaches
its copy/draw path; blur does not multiply its opacity/steps by delta.
Saved10072470 (`graphics-studio-flow-routing/002-pseudocode.c`) is empty:
`return;`. It contributes no scene scheduling, GL state change or capture in this
binary. Its call position must not be used to invent an additional render pass.

10071df0 is a screenblur consumer, not the TakePhoto reader. It requires
`gl_screenblur!=0` and at least one of gl_blurtest, server Blur flag1018d270,
waterlevel1054506c>2, or client time less than HUD+328 damage deadline. With
nonzero delta it copies full screen dimensions through10064c10 and checks live
**texture ID!=0**, not the ready byte. It does not clear liveReady after use.

It disables texgen S/T, samples that one capture with vertically flipped UV,
and draws expanding centered quads using white color, alpha gl_opacity and
SRC_ALPHA/ONE_MINUS_SRC_ALPHA. There is no temporal frame-history accumulation
or another view render. Detailed step/count equations remain in
`shader-pass-contracts.md`; this document isolates their scheduling and shared
capture state. Its ordinary HUD location does not establish the engine's
external ordering relative to all model/world draws.

## Direct callers and remaining boundaries

Typed native references in graphics-studio-flow-routing/006 and007 establish:

-10064c10: direct call10066b77 within10065ef0, and10071e88 within10071df0.
-10064ac0: direct call10066bd2 within10065ef0.

Thus all direct capture callers returned by this provider are accounted for by
the two material branches and HUD blur. This does not exclude an unrecorded
computed/indirect invocation. The former10072470 scheduling question is resolved
by its empty body.

The remaining questions are specifically outside those resolved bodies:

1. Read-buffer/front-back and viewport-origin setup in the enclosing original
   render/HUD route. The dispatch name and SCREENINFO producer are now proven.
2. Original engine-side render loop if claiming external ordering of world,
   viewmodel, HUD and swap. No additional scene render exists in either copy
   helper or the empty immediate pre-blur hook.

These gaps concern GL ownership and the engine boundary, not the TakePhoto
queue/consume contract or direct caller scheduling established above.

## Evidence index

All capture paths below are relative to decompiled/client/captures:

- graphics-client-first/005-pseudocode.c — message registration1006cf00.
- graphics-studio-texture-loader/003-pseudocode.c —100719f0 pending writer.
- graphics-studio-texture-replacements/008-pseudocode.c and009 — live/retained copy.
- graphics-studio-mesh-materials/000-pseudocode.c — material selection and capture point10065ef0.
- graphics-studio-draw-routing/001,002,004,005,006-pseudocode.c — studio draw route.
- menu-sky-render/002-pseudocode.c — orchestrator1008cee0.
- hud-entry/001-pseudocode.c — HUD_Redraw.
- graphics-client-blackwhite/001-pseudocode.c —10072740 call ordering.
- shader-pass-bindings/005-pseudocode.c —10071df0.
- graphics-studio-texture-lifecycle/020..022-inspect_native_instruction.json — ready/pending direct refs.
- graphics-studio-texture-loader/009..013-inspect_native_instruction.json — screen/dispatch refs.
- graphics-studio-flow-abi/000-pseudocode.c —10053c80 named GL dispatch loads.
- graphics-studio-flow-init/000,001-pseudocode.c and analysis/graphics/studio-flow-assembly/hud-manager-call.asm,100556f0.asm,10001080.asm — same manager initialization chain.
- graphics-studio-flow-routing/002-pseudocode.c — empty10072470 hook.
- graphics-studio-flow-routing/004-pseudocode.c and analysis/graphics/studio-flow-assembly/1001d560.asm — SCREENINFO producer.
- graphics-studio-draw-routing/003-pseudocode.c and external/hlsdk-portable/engine/cdll_int.h — engine table base/slot and SCREENINFO ABI.
- graphics-studio-flow-routing/006,007-inspect_native_instruction.json — direct capture callers.
- analysis/weapons/photo-body-evidence — bounded original message/copy assembly.

The reference catalogue and existing graphics reports were used for navigation;
conclusions above are attached to actual saved bodies/assembly, not function names.
