# Graphics reconstruction ledger

Target: installed Cry of Fear client/server and resources, same build hashes as
the menu investigation. Original native modules are inspected statically only.
Runtime implementation uses source-built Xash/HLSDK through Waf on main.

| Question | Evidence needed | Current status |
|---|---|---|
| Water and Cg shader math | Shipped Cg plus native sampler binding, mask construction, pass order and cvars | Modern water shader and mask/noise/scene passes ported to GLSL; actual water scene captured at 1280x720 and 800x600. Legacy fp20 path not ported |
| Black-and-white screen effect | BlackWhite server message, real client handler and blend path | Actual framebuffer desaturation ported, separate from black Cg. Entity iuser1 key, one-byte message, renderer and reset verified |
| Dynamic and projected light | Native entity fields, light allocation, attenuation, cookie mapping | Server renderfx 71 implemented and Use ON/OFF tested. Client light/cookie/attenuation contracts recovered; native renderer remains pending |
| Static directional light/bump/specular | BSP styles 61/62/63, native lightmap decode and surface shader | 197 of 236 BSPs use directional styles. Recovered flat-normal fallback implemented/tested; per-pixel bump/specular pending |
| Fog | Server entity keys, message payload, client interpolation and GL setup | Nine-byte SetFog, signed fades, waterlevel gate and world rendering implemented; protocol and visual scene checked |
| Rain and sky | Entity state transfer and client renderer | Rain server state/fades and wire decoding implemented. Rain particles, splashes and 3D-sky consumer remain unresolved/unimplemented |
| Verification | Own build, actual runtime frames, focused image/state tests, native-module provenance | Waf engine/client/server PASS; graphics fixture PASS at two resolutions; 19 actual protocol checks PASS; directional C test PASS; nine-module audit PASS |

Reports distinguish native observations from source-engine adaptations. Asset
inventory alone does not establish execution or complete visual equivalence.

Evidence checkpoint: `analysis/evidence/graphics-2026-11-18.json`, 107 records,
saved with REA reset after all static sessions were closed. Original native
targets were never executed and capture verification records retain hashes.

Reproduce the isolated runtime checks with `pwsh -File tools/smoke_graphics.ps1`
(optionally `-Width 800 -Height 600`). This copies the original c_apartment3 BSP
unchanged into ignored runtime output and supplies an independent entity patch.
It does not change installed game maps. Logs/screenshots/module lists are in
`analysis/local/graphics-<resolution>.json`. The fixture asserts dynamic-light
server state only, not its still-unimplemented custom visual pass.

Reproduce the decoder check with:
`python external/hlsdk-portable/waf --top=tests/cof/render --out=build/graphics-tests configure build --check-c-compiler=gcc`,
then run `build/graphics-tests/lightmap_test.exe`. The game itself is Waf/MSVC x86.

Visual observations: the water scene has animated displacement, the fog stage
adds the specified blue-grey distance tint, and BlackWhite190 reduces scene
colour while leaving HUD artwork coloured. Reset returns the scene colour.
These checks establish functioning passes, not pixel-identical equivalence to
an original-game runtime. Remaining work: bump/gloss lighting passes, custom
dynamic/projected lights and shadows, rain/splashes, and the sky renderer.

Regression checks: ordinary c_sdkmap1 starts, renders and moves the player;
HUD/inventory assertions pass; 1280x720 menu smoke passes 3D -> 2D -> 3D and
panel input with own DLLs. The inventory fixture's final camera can face a
black area, so that frame alone is not a world-render validation; the separate
ordinary-map and water-scene captures supply that observation.
