# Native flashlight follow-up (2026-11-19)

Scope: original client.dll SHA-256 `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`; static evidence only. The original game was not launched. Start with `decompiled/FUNCTION_CATALOG.txt` mechanic `lighting`; this document resolves additional viewmodel and renderer contracts. Native light records are 0x7c bytes, pool32, allocator `0x1005c0f0`; offsets below describe the old x86 DLL, never a portable ABI.

## View lights: concrete inputs

All three helpers receive `(origin.xyz, angles.xyz, time, frameTime)` as established by callsite `0x100af790` (`decompiled/client/captures/graphics-client-fog-waterlevel/000-pseudocode.c`); Ghidra merges adjacent floats into `undefined8`, and loses later arguments in tactical helper. Do not reproduce that decompiler prototype.

| Native entry | HUD state bit | key | Radius | Stored RGB (see consumption below) | Projection FOV x/y | Texture |
|---|---:|---:|---:|---|---|---|
| 0x100aea10 phone | 1 | -1 | 700 | .46,.46,.51 | 50 + smoothed near-wall term | gfx/flashlight.tga |
| 0x100ae540 hand torch | 8 | -8 | 700 | 1.4,1.4,1.4 | 50 + smoothed near-wall term | gfx/flashlight2.tga |
| 0x100aee70 tactical | 4 | -66 | 700 | .5,.5,.5 | 70 fixed | gfx/flashlight2.tga |
| 0x100aea10 reduced | 2, without4 | -2 | 700 | cvars default .23,.23,.26 | 50 + smoothed near-wall term | gfx/flashlight.tga |

Every helper expires its light at `time+.01`. Each checks common HUD/camera state gates (`10072710`, `10542bc0`, `10542bbc`, `105436d8`, `10542bb8`); exact names for every global remain unresolved. Phone and tactical also require local player; tactical requires viewmodel/model. `cl_lowflashlight == 1` selects gfx/low counterpart; `==0` selects normal counterpart. Do not silently change to a generic warm cone for every item.

* Phone origin comes from viewmodel attachment1 (native `+0xb6c`), with ref_params viewangles, **not** generic player eye origin. Reduced bit2 replaces origin with localplayer `+0x2c0` and overrides pitch/roll with cvars50/90, preserving yaw. Both bits set use that replacement for both created records.
* Torch callsite obtains origin from trace attachment0 (`+0xb60`) to attachment1 (`+0xb6c`); direction is attachment1-attachment0, converted to angles with inverted pitch. Helper then traces150 units in those angles for wall expansion.
* Tactical origin comes from trace saved camera origin `DAT_10559638` to attachment1; direction is attachment2 (`+0xb78`) minus attachment1, converted to angles with inverted pitch. It calculates a near-wall smoothing value but **does not apply it** to its final70 FOV.
* Phone/torch target expansion is `(1-trace.fraction)*30` when trace fraction<1, otherwise0. Persistent smoothing moves toward target by `min(abs(target-current)*10*frameTime, abs(target-current))`. Reduced mode uses cvar60 in place of30. Trace hull2, flags0, ignore-1.

## Color masks and attenuation

The shipped masks are colored, not normalized white. `gfx/flashlight.tga`512x512 centerRGB(86,99,105), left-quarter center(40,49,52), top-center(2,2,2), bottom-center black. SHA-256 `85de7a7e3f7f9330d86693c3830ec1ea5a71d77e46c75a172eeeed19f4c881a5`.
`gfx/flashlight2.tga`512x512 centerRGB(162,158,137), left-quarter center(145,142,119), top/bottom-center black. SHA-256 `e84c5890e6ac8bcb098bb842b34917520a57bc55e03bb58aa444c3b2b2e6ab59`.
The low phone path is absent from the inspected installed directory; native source selecting it does not establish that it exists or renders successfully.

`0x1005ab50` creates 256 RGB attenuation texels. Ends0/255 are forced0; interior byte truncates `255*(1-i*i/65536)`. GL_TEXTURE_1D, wrapS CLAMP_TO_EDGE, **min NEAREST, mag LINEAR** (decoded float enum9728/9729). Do not confuse this spotlight texture with spherical 3D attenuation at1005a8c0 or the fallback separateXY/Z textures. `1005c4f0/1005c5a0/1005c6b0` generate point-light coordinates `(position-lightOrigin)/(2*radius)+.5` in Z/XY/XYZ respectively.

Reduced cvar defaults were decoded directly from originalPE VA strings, consistent with registration10060690:1014cc34=`60`,1014cc50=`50`,1014cc6c=`90`,1014cc88=`0.23`,1014ccc0=`0.26`.

## Receiving renderer and projected coordinates

World entry `1005b300` and brush entry `1005ada0` set depth functionEQUAL, loop32live nonzero-radius lights, select projection when path atlight+0x3c is nonempty, build frustum10084e40 and setup1005ce60. World gathers BSP through1005c200 plus eligible brush entities; brush lighting uses local-space origin/direction. Faces are visibility/frontside-tested, not only lightmap-luxel-updated.

`10084e40` side planes use90-FOV*.5. Far plane is perpendicular to forward atdepth=radius. `1005c820` sets attenuation texgenS=`dot(P-origin,forward)/radius`, **not Euclidean distance**. `1005cb50` sets object-linearXYZQ and texturematrix bias1005c460, symmetric perspective frustum atnear1/farRadius and lookAt10055aa0(origin,origin+forward*256,up0,0,±1). Its field-of-view arguments are multiplied bypi/360; the tangent/helper return requires assembly-aware reading because decompiler fails to reflect its FPUresult. Roll is not fed to this lookAt path. Exact verticalpitch±90 is nudged to±89.99 by world caller.

Setup1005ce60 loads mask1006a1f0(path,1,1); loader clamps both texture axes withGL_CLAMP (notCLAMP_TO_EDGE). At least4TMUs uses additiveONE,ONE, disables depthwrites, normalized cube unit0, baseUV normalstageunit1, maskunit2, depthattenuationunit3. Restricted2TMU path initially writesalpha only withONE,ZERO and queuesfaces;1005bc30 later writesRGB only withDST_ALPHA,ONE and both attenuation/mask. No native framebuffer-alpha support emits warning and skips spotlights. Exact combiner interpretation follows below.

## Final combiner result: two easy mistakes

**Stored RGB is not consumed by the recovered projected world/brush pass.** Entries at100ae540/100aea10/100aee70 writeRGB atlight+0x10/+0x14/+0x18, but1005ce60/1005bc30 do not read those fields. Texture environment modes decoded by10062c10 are1=REPLACE,7=DOT3_RGBA(PREVIOUS,TEXTURE) withRGB_SCALE1,4=MODULATE. Thus the4TMU chain is normalizedcube -> DOT3 with normal -> colored mask -> depth attenuation. Replacing this with mask*storedRGB would double tint and wrongly dim the phone. This is a bounded conclusion about these actual receiver paths, not a claim that no code anywhere reads those fields (pointlights do).

1005c080 binds a per-material normal texture or defaultnormal to unit1 and calls10063150. That texturematrix transforms vertexP to tangent-space(lightOrigin-P); cube normalization feeds theDOT3. Flat-normal fallback therefore must include `max(dot(orientedSurfaceNormal,normalize(lightOrigin-P)),0)`. It is not correct to omit normal incidence entirely.

The projection bias1005c460 isTranslate(.5,.5,0),Scale(.5,-.5,1), so **V uses negative up**. For usual pitch, `U=.5+dot(delta,right)/(2*tan(FOVx/2)*depth)` and `V=.5-dot(delta,up)/(2*tan(FOVy/2)*depth)`.1005c040 flips worldup when its signed trunc(pitch/90) modulo4 is1or2; ordinary pitch uses+Z.

Shader-inventory captures prove world1005eeb0 ordering: base lighting ->100626e0 ->1005b300 dynamic lights ->100627e0 base/detail modulation ->10062940 specular.100627e0 usesBlendFunc(DST_COLOR,SRC_COLOR), so final base modulation is**2*baseRGB*accumulatedLight**. An additive adaptation onto an already finishedXash frame needs**2*baseRGB*maskRGB*NdotL*attenuation**. The2 comes from later base blending, not spotlightstageRGB_SCALE. Detail textures add their own mode5 two-times modulation when used. Evidence: decompiled/client/captures/shader-pass-inputs/005-pseudocode.c and shader-pass-bindings/004-pseudocode.c.

## Existing port discrepancy

Before this fix, disposable normal engine `CL_UpdateFlashlight` used one EF_DIMLIGHT type: warmRGB255/238/205, variable trace-dependent radius>=360, eye origin and a procedural cone. `R_AddDynamicLights` accumulated that cone into coarse BSP lightmap samples; `R_MarkLights` selected whole faces. This demonstrably differs from native colored projected textures and typed weapon inputs. The screenshot's polygon-shaped edges are consistent with this approximation, but identifying its individual failing face from a still image alone is an inference, not runtime proof.

## Additional state path

`0x10065260` handles player-extra flags separately from local HUD bits: flag1 creates radius60 point light RGB.46,.46,.51 at trace32 endpoint; flag8 creates radius60 point lightRGB.7,.65,.65 at trace4096 endpoint; flag0x20 creates projected radius700/FOV50RGB.7,.65,.65 with flashlight2 and expirytime+.1. Local firstperson uses saved camera origin; remote uses entity attachment3. These are separate network bit domains, not aliases for the HUD bits above.

## Evidence and limits

Static captures reused: graphics-lighting-entry003/004/005; graphics-client-fog-waterlevel000; graphics-lighting-core000/001; graphics-lighting-projection001/002. New REA bundles: analysis/local/graphics-flashlight-followup, graphics-flashlight-refs, graphics-flashlight-pass. Evidence IDs and hashes are in companionJSON. No original-renderer execution, comparison frame, or audio validation is claimed. Texture upload filtering for masks and full model/shadow parity must be kept distinct from spotlight field recovery.
