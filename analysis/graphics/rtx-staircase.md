# RTX staircase lighting discontinuity

Observed on 2026-11-18 in `cof_graphics_test` (the c_apartment3 water/staircase fixture).
The user supplied five screenshots of wall lighting changing during the ascent.

## Cause and correction

Xash-RT groups successive brush surfaces sharing a texture into one primitive.
`R_RecursiveWorldNode` visited the camera-facing BSP child first, so crossing a
partition changed vertex/index order inside those batches. `ArePrimitivesSame`
does not distinguish face indices. Consequently an unchanged world primitive ID
could contain different triangles on successive frames. RTGL1's
`GeomInfoManager::FillWithPrevFrameData` matches previous geometry by ID/count,
then reuses previous vertex offsets: this invalidates temporal correspondence.

The source-owned preparation in `tools/prepare_rtx_lighting.py` gives the RT world
a fixed BSP traversal and removes camera-distance sorting for RT brush models.
Texture batching is retained because the pinned tracer supports at most 4096
geometry entries. Conventional OpenGL preparation is unchanged. This fix does
not clear denoiser history every frame or suppress lighting to hide the symptom.

Separately, dynamic light IDs no longer change whenever their expiry is extended,
dynamic emitters retain world-space positions, and sunlight is submitted without
requiring it to be on screen. These are independent corrections; the inspected
staircase frame contained static lights, so dynamic lights were not its trigger.

## Evidence and regression

- REA observation `ev_1f75cbf80af519b5f1bf02bf6c68330ac33934df3a74c1348cc9e027c500fe9d`
  sampled camera position approximately `(420.06,77.09,48.06)` and 32 static lights
  in the live user-launched runtime. The observation detached without cleanup error.
- The replay follows x=440, y=100 to -20 and traces the player hull against the
  BSP staircase; player origin rises from approximately z=20 to 61. Camera pitch
  11/yaw345 reproduces the supplied staircase orientation. Flashlight is disabled.
- The upload-boundary test hashes actual world vertex positions and indices per
  primitive ID. Before the ordering fix it found **181 unexpected changes**.
  After the fix it found **zero**, with over 130000 primitive uploads observed.
  The baseline diagnostic frame counter also counted two render-state callbacks;
  it was corrected to count only frame-end callbacks. Hash comparisons were
  independent of that counter, so the change counts remain comparable.
- `python tools/smoke_rtx.py --motion` checks real ascent, stable geometry,
  successful exit, and loaded Vulkan/RTGL1/own game DLLs. It captures six frames,
  including stationary frames after movement. Logs/images/reports are local under
  `analysis/local`; `rtx-stairs-before.log` retains the failing baseline.

Zero geometry mutations establishes stable temporal inputs for this route. It is
not a claim that all NRD/DLSS noise or all other maps' lighting is now artifact-free.
