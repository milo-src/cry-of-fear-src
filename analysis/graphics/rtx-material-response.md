# Optional RTX material and atmosphere pass

This is new artistic renderer tuning, not a claim to have recovered original
CoF RTX shaders. Classic OpenGL remains the default; the default RTX quality
selection remains Balanced. Original game assets are unchanged.

`src/cof/render/rtx_materials.inc` supplies material parameters at brush upload.
An explicit allowlist gives known ceramic tiles a rough dielectric response,
metal strips/pipes/fences a metallic response, and rust a rougher, less metallic
response. Untagged textures retain backend defaults. Window textures containing
frames are not blindly converted to glass. The allowlist currently covers 33
known textures; it does not classify all game materials. Native diagnostic
`COF_RTX_MATERIAL` lines confirm which names matched on the apartment fixture.

Water keeps the tracer's physical Fresnel/refraction and depth absorption.
Wave speed changes from 0.4 to 0.12 m/s, strength to 0.60, texture scale to
0.75 m, derivative multiplier to 3. Sewage retains a murky green-grey volume;
other water uses the shared cool transmittance preset. No replacement water
texture is generated or installed.

Balanced/Quality use thin volumetric haze (scatter 0.25, ambient 0.30), four
history frames and the illumination grid disabled. Performance keeps volumes
disabled. Static light scale is 1100, radius 0.045 m; bloom intensity is 0.10
with emissive multiplier 3, chromatic aberration disabled. These are moderate
defaults intended to retain the dark setting rather than create new emitters.

`tools/prepare_rtx_materials.py` installs these source hooks into the disposable
Waf build tree. Tests use the existing isolated apartment water fixture:
`python tools/smoke_rtx.py --water-view` captures a low view of the water;
`--motion` checks the previously failing staircase route. The low camera pose is
test code only; it does not edit BSP contents or player settings.
