# Native weather and the source-built renderer boundary

Static target: installed `cryoffear/cl_dlls/client.dll`, preferred base
`0x10000000`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
REA 6.9.0 / Ghidra 12.1.4 queries ran through `tools/rea_ghidra.py` in
immutable private MCP sessions. Original game binaries were not executed.
Full requests, results, verification and close records are retained under
ignored `analysis/local/menu-weather-native`, `menu-weather-impacts`, and
`menu-sky-discovery`.

## Recovered behavior

The existing `RainData` handler supplies a 16-byte message: SHORT rate,
five COORD values (distance, wind X/Y, random X/Y), SHORT mode, COORD height.
`10085980` updates a bounded 4000-drop pool. Mode zero falls at 900 units/s;
nonzero mode falls at 200 units/s. The menu map selects mode **1**, which
`10092850` renders with `sprites/snowflake.spr`, not `hi_rain.spr`.

Emission uses time credit, horizontal random positions within the configured
distance, authored wind plus random wind, and the configured absolute height.
The native point-hull trace ends at `height - 4096`; its horizontal displacement
uses `(height + 4096) / fallSpeed`. These two expressions are intentionally
different in the recovered code. Water hits use the water entity's upper
network bound. Drops below their collision floor are removed. Spawn heights
are backdated by a random amount in `[0, int(dt * fallSpeed)]`.

The native assembly at `10085f7c` confirms alpha bounds **0.12–0.20**;
the decompiler's untyped immediates must not be read as integers.
Rain is a triangle with horizontal half-width 8, vertical half-length 46 and
wind slant `wind / 900 * 46`. Snow is a camera-facing 6-by-6 quad, fading in
over the first 80 units below spawn height. Rendering is additive.

Impacts are limited to 500 horizontal units from the viewer and a second
4000-entry pool. `100862b0` creates water rings with a ripple-enable gate;
`10085740` creates ground splashes when `r_weather >= 2`. Life is 0.7–1.0 s,
initial alpha 0.6–0.9. `10092390` renders `waterring.spr` with radius
`age * 25` and remaining-life fade, or `wsplash_x.spr` with half-size 5,
alpha 0.4 and a frame advanced per draw. The source implementation maps the
ripple gate to `cl_ripples`; its exact native pointer-to-cvar binding remains
less directly evidenced than the ground-splash gate.

## Reconstruction and backend adaptations

`src/cof/client/weather.cpp` implements that simulation and TriangleAPI drawing
for both builds. It resets the pools on HUD/map/renderer reset, preserves
received weather settings across video initialization, and discards a stalled
frame over 0.5 s instead of emitting a burst. The reconstructed camera uses
the final refdef eye, whereas native spawning reads the local player's render
origin. This is an explicit adaptation for the source-built menu camera.

RTX previously discarded client transparent triangles because they had no
brush/studio owner. The backend now classifies this callback as rasterized
world geometry, flushes its batch before restoring the classification, and
preserves depth testing. The four weather sprite families use an additive
unlit material; their frame names include `(frame:00)` before `.spr`.
They are not GI emitters. Sprite data is never rewritten.
RTGL requires a positive emissive value to select additive raster blending.
The adapter uses `0.00001` (above float epsilon), not `1`: its raster pass is
already exposure-compensated, while larger emission also adds an unwanted
screen-glow term and makes the original low-alpha flakes too bright.

## Evidence IDs

| Entry | REA evidence |
| --- | --- |
| `100858a0` expiry | `ev_fd539ba4759b58633485ba4b8a4a1b2c10e74378e22f9e8fee6815388df14298` |
| `10085980` update | `ev_de24f63e9f75015df09e7fce56e54b43965dc67c2c3d97ca02c6a04a28126231` |
| `10092850` drop draw | `ev_0e898440ecdf65dd6c5f95763edcde64f9b82cd47153f6e2e524cb5749fb914f` |
| `10092390` impact draw | `ev_9ee11b0bac66b681bc42101a8c8a3a846c67ee079f57e7e6185adf8d4ffda089` |
| `100862b0` ring spawn | `ev_1f91e90f9b1547fd6f3be4c8708a2f6dce44b97f803fabac7a443b9b79795c34` |
| `10085740` splash spawn | `ev_fe61d6e286c27a1f5c8b4f8908a111f32c034bd709071b265d48fa0f77129838` |
