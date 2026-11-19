# RTX rain lens and light-reactive smears

`rt_rain_lens 1` enables wet-glass refraction during actual rain. The client
reads RainData, traces towards precipitation five times per second, rejects
snow and underwater views, and stops incoming beads under cover. Existing
water drains and fades over several seconds. Animation uses game time and
freezes on pause. There is no map-name whitelist.

`rt_lens_dirt 1` enables subtle smears around visible bright sources, including
in dry weather. Range 0–2; 0 disables it independently of rain. Both controls
default to 1. The effect does not change lights, exposure, materials or maps.

Dry-light scatter combines the filtered fourth and sixth bloom levels. The
sixth level reveals broad wipe marks outside the lamp silhouette, while a
bounded exponential response avoids unbounded additive glare. The imported
mask's low-contrast range is expanded before composition. No projected light
position is used, so an occluded source cannot produce a synthetic flare.

The RTX studio adapter separately preserves authored FULLBRIGHT meshes as
visible emitters. The verified `hattlykta.mdl` additive `tex_fullbright` diffuser
uses emission 1.0 instead of the generic additive-effect value 0.35. Its hood,
pole, BSP light power, aperture and shadow geometry are unchanged. This adapter
is excluded from the cinematic menu, sky models and first-person weapons.

The effect runs only in RTX gameplay, after upscaling and bloom and before
HUD/menu composition. Inventory/menu visibility suppresses it; the cinematic
3D menu retains its existing rendering. Underwater views use the backend's
original wave pass. The ordinary OpenGL renderer has no lens pass.

## Local Crysis 3 Remastered mask

The optional importer reads `C3/Textures.pak`, specifically
`Textures/lights/lens_flares/visor_scratch.dds.0`. It checks the entry length and
CRC, converts the mask to a 128×64 scalar field, and records source/pixel SHA256.
The installation is read-only. Imported pixels exist only in ignored build
outputs, not in repository source files. The local compiled shader embeds the
mask; it does not require Crysis to be running or installed on the runtime path.

```text
python tools/import_lens_mask.py --game-dir D:/Steam/steamapps/common/Crysis3Remastered
python tools/build_rtx.py
```

Without `build/rtx-lens/source.json`, shader preparation uses an owned procedural
wipe/grain mask. An invalid local cache fails the build instead of silently
substituting something else. The actual drop shapes, motion, runnels, refraction
and highlight response are implemented in our GLSL, not extracted Crysis code.

## Implementation and validation

`EfWaves.comp` uses a negative xMultiplier as a tagged lens mode. Its original
positive underwater mode and push-constant layout remain intact. The float
transports an exact integer with 9 low bits for dirt strength and remaining
bits for dry age at 32 ticks/second. All sampling reads the immutable ping-pong
source and writes the opposite image. Wet areas bilinearly refract the scene;
dry pixels retain their original scene sample. Existing bloom mips contribute
only when bloom is enabled. There is no scene-history accumulation or UI glare.

This is an optical screen effect, not a fluid solver: droplets do not merge or
respond to camera acceleration. Original level weather determines when it
rains; this feature does not force rain onto every outdoor map.

```text
python tools/smoke_rtx.py --runtime-dir out/runtime-rtx-material-review --map c_park --lighting --pose "-642 692 39 -15 30 0" --lens --readback --label lens-final
```

The opt-in driver sends real rain, stop, snow and disabled-effect states on an
isolated desktop with `-nosound`. Seven readbacks permit review of dry, wet,
moving and drying states. Runtime assertions verify accumulation/decay, snow
rejection and the disable control; nonblank readbacks alone are not visual QA.
Shader verification also compares descriptor, uniform and push-constant ABI
against the pinned backend. No original resource or map is rewritten.
