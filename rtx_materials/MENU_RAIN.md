# RTX menu rain: shipped-asset investigation and adaptation

The menu's wet glass is a different path from gameplay `WaterDroplets` and
`RainDrops`. Static inspection of the installed **Crysis 3 Remastered** frontend
on 2026-11-19 found a rain-only prerecorded loop. This does not establish an
exact match to the original 2013 executable; that installation was not found
in the inspected Steam library or game directory.

## Evidence

Selected ZIP entries were extracted read-only with length and CRC validation.
REA's archive inventory rejected this CryEngine archive layout, so focused
local ZIP/Deflate, SWF-tag and AVM1 parsers were used. No Crysis process was run.
Offsets below refer to the decompressed `Libs/UI/BackgroundObject.gfx` SWF.

- Shipped `Libs/UI/ActionScript/Menus_Startmenu.as`, lines 1979–2000, loads
  `BackgroundObject.gfx` and calls its `showVideos(true)` method.
- Sprite 4's action at `0xbdf` creates/attaches a NetStream; at `0xd89` it sets
  looping, and at `0xdb7` assigns `/videos/FrontEnd_Background_Rain.usm`.
- PlaceObject3 at `0xef6` places that sprite above the background with blend
  mode **8 (add)**. Initialization sets rain alpha to zero, then tweens to full
  alpha over two seconds after a two-second delay (`0x7d1`–`0x816`).
- The background and rain use different virtual depths: 32000 and 7000.
  `Menus_Startmenu.as` lines 207–227 rotates their containers with the mouse.
- The USM rain entry decodes to 1250 RGB frames, 1280×720, 25 fps, 50 seconds.
  This decoded frame count is reliable; FFmpeg's bitrate-derived USM duration
  estimate is not. Explicit MPEG-1 decoding is required for this entry.

Source SHA-256 identities:

```text
BackgroundObject.gfx:
e27fe45b1c94e3e6ab0f1b9d68e9430ad1cb234e19fea4111993b4b6302e3290
Menus_Startmenu.as:
a9365bf06e505bf4342a04e1f827210cd9f813009f1a2693c338d30308950caf
FrontEnd_Background_Rain.usm:
43519d41f37a84c3ed92bd069659139699dc19ba51603b20a87e882ce6cf98ca
```

The detailed local findings and focused disassembly are retained in
`analysis/local/crysis3-menu/`. They are analysis outputs, not runtime assets.

## CoF implementation

`tools/import_menu_rain.py` reads only the rain video, downsamples to 960×540,
and preserves all 1250 frames and their RGB colors. Its CRN1 cache contains
delta runs and a complete keyframe every 125 frames. The current local cache
is about 74 MiB. Nothing is copied from the Crysis background or logos.

```text
python tools/import_menu_rain.py --game-dir D:/Steam/steamapps/common/Crysis3Remastered
python tools/build_rtx.py
```

Imported pixels and source provenance stay in ignored `build/rtx-menu-rain/`.
The build stages `cryoffear/rtx_menu/rain.crn` as an optional optical sidecar,
records its SHA-256 separately from materials, and audits the installed copy.
No proprietary artwork is added to tracked source; the runtime requires no
Crysis installation, video codec, or audio decoder.

`menu_rain_video.inc` checks container dimensions, frame count, offsets and
every decoded run. It holds one compressed film and one RGBA frame, replacing
one named GPU texture at 25 fps. The pinned RTGL backend ignores updates to
existing material names, so the previous owned texture is deleted before each
upload; RTGL defers destruction of in-flight images. On the user's request,
decoded pixels are converted to neutral luminance and composited at 42%
strength to keep the glass subdued against CoF's dark backdrop.
Looping and frame selection use menu game
time, so pausing does not advance the film. The film is released on VidInit.
The additive layer precedes CoF buttons/logos, preserves aspect ratio, and
has a small separate parallax offset. Camera motion is smoothed and limited
to ±1.2° yaw / ±0.8° pitch to suit CoF's existing scene. Button drawing and
hit regions share the same offsets. This is an adaptation, not an exact
reproduction of Crysis's Flash projection or arbitrary-scene refraction.

`rt_menu_glass 0` disables wet glass; `rt_menu_parallax 0` disables menu motion.
Both default to 1. All behavior is gated on RTX and the existing menu scene.
Gameplay optics, maps, original textures and the ordinary renderer are not
replaced. Without the optional local film, a procedural wet-glass fallback
is used; that fallback is explicitly not the recovered Crysis animation.

## Verification

```text
python tools/smoke_rtx.py --runtime-dir out/runtime-rtx-material-review --menu-optics --readback --label menu-rain-film
```

The test supplies normalized pointer targets internally; it never moves the
OS pointer. It checks both parallax directions, a displaced button's real
dispatch, return to center, imported-film upload and advancing frame indices.
GPU readbacks show the rain layer over CoF's own scene with clean foreground
buttons. All game tests use the isolated desktop and `-nosound`.
