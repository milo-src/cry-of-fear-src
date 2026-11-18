# Original client renderer: native glue

Static target: installed `cryoffear/cl_dlls/client.dll`, preferred base
`0x10000000`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
REA6.9.0/Ghidra12.1.4 private processes; no original DLL execution.
`tools/capture_graphics_client.py` pins the build and captures bounded string
references. Full captures are under ignored `analysis/local/graphics-client-*`.
This document describes native glue; shipped shader formulas are documented
separately by the graphics asset pass.

## Entry points and ordering

`HUD_DrawNormalTriangles`10093cf0, if global10556b48 is zero, calls custom
renderer1005ff50 then water-entity suppression10087860. In the other branch
it calls1008c7e0 instead. This global's semantic name is not established here.

`HUD_DrawTransparentTriangles`10093d10 first calls10093bc0 and10092320.
If10556b48 is zero, it calls1005fff0, updates frame delta clamped to[0,.5],
10080c90(delta,0),10094070,1006aed0, optional weather functions when r_weather
is nonzero, then10055de0. Finally, when cg_water is nonzero, it calls
10086cb0(binding save),10086d10(water pass),10086c40(binding restore).
The final water pass therefore runs after the client's transparent/weather
work. It is not a replacement for world lightmap rendering.

There is no reflected-camera scene render inside10086d10. Its input is the
already rendered color framebuffer plus the existing scene depth buffer.
Pbuffer functions occur nearby100879xx..10087dxx, but adjacency is not proof
that the active water pass uses them: no call to those functions occurs in
this recovered water path.

## Water geometry and pass sequence

10087860 and10086d10 enumerate GetEntityByIndex(0..1023). Selection is
`entity->curstate.skin == -3` (CONTENTS_WATER). The short at entity+2e8 is
**skin, not solid**: entity_state size154hex, curstate offset2b0hex, skin
offset38hex. Bounds at32c/330/334 and338/33c/340 are curstate.mins/maxs.
They are used directly, without adding entity origin in this implementation.

When cg_water truncates to integer zero,10087860 clears manager enabled
byte+9. Otherwise, when enabled, matching entities receive effects128,
renderamt0 and rendermode5 in baseline, prevstate and curstate. This suppresses
their ordinary rendering before the custom screen pass. Preserving this
behavior in Xash requires arranging suppression before its water draw,
without hiding water when the custom renderer is unavailable.

10086d10, with manager enabled byte+9, performs:

1. Save unit0 GL_TEXTURE_BINDING_2D, disable blending, enable texture2D,
   capture W×H scene into manager texture+20hex (index8).
2.100866e0 clears color by drawing an opaque black orthographic quad. It
   disables depth testing and depth writes for that quad, then restores
   depth testing/culling/texturing and matrices. It leaves depth writes off.
   It does **not** clear scene depth.
3. Disable culling/depth writes; bind `textures/noise.tga`. For each matching
   water entity, draw a horizontal quad at maxs.z+1. UV origin is
   `(clientTime/cl_waterspeed_x, clientTime/cl_waterspeed_y)`; UV extent is
   `(maxs.xy-mins.xy)/128`. The quad is depth-tested against the scene.
4. Reenable culling/depth writes; copy this color into texture+18hex(index6),
   then black-fill color again through100866e0.
5. Disable texturing/culling; draw white horizontal water quads at maxs.z.
   Depth testing remains enabled and depth writes remain off after helper.
   Capture into texture+14hex(index5). Black-fill color again.
6. Bind saved scene texture+20hex;100875d0 redraws it fullscreen with identity
   modelview and orthographic projection, depth testing disabled while drawing.
7. Enable vertex/fragment Cg profiles, bind water programs. Bind samplers:
   unit0=texture+18hex(noise geometry capture), unit1=texture+24hex(LUT),
   unit2=texture+20hex(scene), unit3=texture+14hex(white water mask).
8. Enable SRC_ALPHA/ONE_MINUS_SRC_ALPHA blending; fullscreen orthographic quad,
   depth test/culling disabled. Set ModelViewProj to Cg state matrix7,
   transform0; TexOffset vector `(0,.05,0,.05)`; flScreen=.965.
   Quad UV extent is `(W/pow2W,H/pow2H)`, not always1,1.
9. Restore matrices, disable texture2D on units1..3, select0, disable Cg
   profiles, reenable depth test/culling, disable blending, restore unit0
   binding. The outer helper restores unit1/2 bindings and leaves unit0 active.

The stage terminology noise/scene/mask describes observed use; original
source identifiers are unavailable. All offscreen captures use
glCopyTexSubImage2D from the same framebuffer, not FBO reflection views.

## Shader and texture setup

Manager initializer10086890 resolves glActiveTextureARB and
glMultiTexCoord2fARB, checks rendering API mode through10545850==1, and
disables effects when cg_water truncates to integer zero. Its pow2 target
width/height start at2 and double until each covers the screen dimension.
It allocates three screen-sized RGB textures and one256×256 LUT texture
through10088140, which uses repeat wrapping and linear min/mag filtering.

The LUT is generated as interleaved bytes x,y for each pixel. With
GL_NV_texture_shader it uses internal0x8709 and format0x86f5; otherwise
both formats are GL_LUMINANCE. That historical fallback must not be silently
treated as a modern two-channel texture without checking the selected shader.

Loaded programs: water_vp.cg, water_fp.cg, black_vp.cg, black_fp.cg. If
fragment profile10086560 equals1803hex, fragment paths instead become
fp20_water_fp.cg and fp20_black_fp.cg. Named parameters are water vertex
ModelViewProj/flScreen, water fragment TexOffset, black vertex ModelViewProj.

Shader loader100863f0 caches program records by name, ensures context exists,
formats `<game directory>/cgshaders/<filename>`, and compiles Cg source1010hex
with entry `main`. Type1 selects fragment profile, type2 vertex profile.
Records contain name, type+20hex, compiled handle+24hex and linked-list fields
+28/+2c; cgGLLoadProgram uploads the handle.

## Controls and related lighting inventory

10079a60 registers archived cg_water=1, cl_waterspeed_x=32,
cl_waterspeed_y=20, cl_ripples=1. Reset100714b0 explicitly disables r_weather,
cg_water,gl_bump,gl_dynlight on maps/video_stress_test.bsp.

Renderer registration10060690 registers gl_renderer=1, gl_bump=1,
gl_detailtex=1,gl_specular=1,gl_highspecular=1,gl_dynlight=1,
gl_dynlight_ent=1,gl_noshaders=0,gl_nocombs=0,gl_twopassspecular=0,
gl_twopassdyn=0,gl_modelrenderer=1,gl_lambert=2,gl_brushents=1.
Post controls include gl_gamma=1,gl_brightness=0,gl_contrast=1,
gl_screenblur=1,gl_blurstepsx=32,gl_blurstepsy=24,gl_opacity=.5.
Reduced flashlight defaults: radius60,xangle50,zangle90,RGB(.23,.23,.26).

Scoped lighting candidates, not analyzed function boundaries in this pass:
lightmap update string reference1005a149, spotlight loader100600f3,
flashlight image references100656bd,100ae70e,100aec68,100af0dd;
bump texture lookups10069538/10069565/1006959b. Parent owns lighting analysis.

## Evidence and limitations

First capture has9 successful queries (two selectors resolve same initializer)
and one unresolved selector1006501a. That failed selector was not repeated;
bounded assembly around fallback water texture reference is retained instead.
Second capture has11 successful queries. Both closed cleanly and verified
unchanged target hashes. Core records:

| Procedure | REA Evidence ID |
|---|---|
|10086890 water initialization|ev_0867c31d2d302f37f38bf0068234f5bc4ac52762746996bb02804b34331f6351|
|10086d10 water composition|ev_b7153812e3c1d3584e59d8fa10aed9baa2aa84b8a5e6d2694230dc1b43561e4f|
|10087860 water suppression|ev_dd1f4d0d19518570048cebc5c71753978c73e87ca956f6d4ca04c4353cd55bb1|
|10093d10 transparent callback|ev_f0797cecdca9ff8050817f09107aff53be966bfa9fe3310b7df7eb8ad5de08a6|
|100866e0 black fill helper|ev_c31b18069bc9cc657a894a6d8ced47b0e7a01e337126352fae431a5e9acbace3|
|100875d0 scene restore|ev_28c2a83e2dd03c1e93099f4d8b4fe3186669c3fe0b32bed3b4c98121bca94dce|
|100863f0 shader cache/loader|ev_da9422e7bd2076e54d4c196f39a07f7273878e14c57c258f6fb91ce4a3b2455d|
|10088140 texture allocation|ev_fcbe6f6a74777e953f43797a9e6451426d2b8cae7e62169e56e3c3b49a504d5e|

No runtime equivalence is asserted. Original OpenGL state mutations contain
legacy assumptions and are not a safe modern engine integration contract.
In a source-owned Xash renderer, preserve the captured pass order and shader
math while using engine state tracking and restoring every modified state.
## BlackWhite is a separate framebuffer postprocess

Message wrapper1006e4f0 calls1006f9f0: one unsigned byte is stored at
HUD+2a8c/global1018cb4c. Its consumer1005e230 returns the desaturation alpha.
The default is `gl_grayscale` (registered0); a nonzero message overrides it
with byte/255. Zero releases this override. Other native HUD states can
override this value (.6 for one HUD flag path, .25 for global105458b0==1),
apply time fades, or force zero. Those HUD conditions are not reconstructed
by the protocol-only client implementation.

1005d7a0 runs at the very beginning of HUD_Redraw10072740, before HUD art.
It gates on renderer availability and `gl_posteffects` (registered1), and
only executes when 0<alpha<=1. It captures the framebuffer and draws it with
SRC_ALPHA/ONE_MINUS_SRC_ALPHA. The NV register-combiner branch computes gray
with RGB weights (.32,.59,.09), then blends that gray over the captured scene
using the alpha above. The alternate texture-combiner branch is retained in
the capture but has not been reproduced separately. This is distinct from
the Cg black shader pair. 100877d0 binds that pair but has no observed direct
call or absolute function-pointer reference in the bounded scan.

Modern equivalent for the recovered NV path:
`mix(scene.rgb, vec3(dot(scene.rgb, vec3(.32,.59,.09))), alpha)`.
Apply after world/water and before HUD, so inventory/menu art remains colored.

## SetFog and RainData

SetFog10071760 requires9 bytes: RGB unsigned bytes, signed16 duration,
signed16 start, signed16 end. RGB is stored as float0..255. Positive duration
sets target=end and currentEnd=30000; negative duration sets both to end;
zero sets currentEnd directly. HUD_Redraw10072740 updates:

```
currentEnd -= (frameDelta / duration) * (30000 - targetEnd)
currentEnd = min(currentEnd, 30000)
currentEnd = max(currentEnd, targetEnd)
```

10093bc0 sets GL_LINEAR fog and10092320 uses TriangleAPI Fog. Enable condition
is start>0 && end>0 && global1055956c<2. The last global is waterlevel:
100af790 stores ref_params offset54hex (word index15hex) at100b0e7f.
Native zero duration does not erase
the previous target, which is irrelevant until a new nonzero duration arrives.

RainData10071440 requires16 bytes: SHORT drips, COORD distance, COORD windX,
COORD windY, COORD randomX, COORD randomY, SHORT mode, COORD originZ. Each
COORD is a signed16 value divided by8. Message state is recovered; particle
simulation, collision, splash generation, and weather rendering are not yet
reconstructed in this pass.

## Source-owned bridge

`src/cof/client/graphics.cpp` validates exact message lengths, retains decoded
state, and publishes raw `cof_blackwhite`0..255 plus `cof_fog_enable/r/g/b/start/end`.
These are nonarchived adaptation cvars. Fog interpolation uses client time;
negative deltas after a clock reset do not reverse the fade. Init registers
messages; Reset clears map/HUD state; VidInit preserves server state and only
republishes it. RainData is exposed through CofGraphicsRain without claiming
to render precipitation. The AddEntity filter suppresses ordinary skin==-3
water only while cg_water is enabled and the renderer reports cof_water_ready1;
it never permanently mutates the entity's effects or render mode.

Follow-up captures `graphics-client-blackwhite`, `-messages`, `-colour`, and
`-fog-colour` closed cleanly with unchanged target hash. Blackwhite capture
has5 successes and one unresolved selector1001cbcd (not retried unchanged).

| Procedure | REA Evidence ID |
|---|---|
|1006f9f0 BlackWhite byte|ev_41ff3967134160edd2553970255190ef4e7e7789eddbc5cc1bfbbf98e940ac72|
|1005e230 desaturation alpha|ev_efb38c3276444deafac2bc9fef04af2a6bfb024278bca4755e96b850d167079e|
|1005d7a0 framebuffer gray pass|ev_6be5642b2ae3623f7d37ec083a8f2eb49e00f1015b72b6feaa58119d67bae51f|
|10072740 HUD order/fog interpolation|ev_5931047cd0472d35e20c9d7026889b116753e7620ad3c50e6cb64d6fc48a7e24|
|10071760 SetFog|ev_5c2e6431a08fc13e8d89f80e404f12edc15ada93f9bca1d55a3c14e61af4f575|
|10071440 RainData|ev_b953e4ab7c0f5fcddb32e092cabc62e46480d8e7b8d5ea841cd198067edb4696|
|10093bc0 GL fog setup|ev_42833e4087e435fac9ab4397590922048450fd667eb21e77d94be4f785c39b35|
|10092320 TriangleAPI fog|ev_480a4f59dafa980a1d8e9c571e0ee5a863ed45526022d29279a9ac2765b3695e|
|100af790 ref_params waterlevel store|ev_3bea2cfc18f38a1a7cbd3a1173a610eb90edb70dd7aa6160097bcd82f2b68a64|
