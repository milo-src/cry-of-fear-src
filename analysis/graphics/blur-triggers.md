# Native screen blur: trigger and lifetime contract

Static investigation, 2026-11-20. Original client.dll SHA256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
No game execution or renderer changes. This completes the trigger interpretation
for the draw contract in `shader-pass-contracts.md`; it is not an integration claim.

## Search keys and object identity

`HUD_Redraw` at `1001d4f0` loads ECX=`1018a0c0` and calls `10072740`.
That HUD method calls the blur renderer `10071df0` with the same object.
The assembly capture establishes the object base rather than guessing from a
similar-looking global name.

| Address / field | Meaning | Producer |
|---|---|---|
| HUD+`31b0` = `1018d270` | Persistent server-controlled Blur value | `1006e510` → `1006fa20`: one READ_BYTE, stored as a 32-bit value |
| HUD+`328` = `1018a3e8` | Damage blur expiry in client time | `1006bf10`: trailing Damage byte nonzero → GetClientTime()+0.15 |
| `1054506c` | Integer ref_params.waterlevel, not a frame counter | `100af790`: copies ref_params+0x54 / word index0x15 |
| `104cdd94` | Pointer to gl_screenblur cvar | `10060690` registration |
| `104cd534` | Pointer to gl_blurtest cvar | `10060690` registration |

The SDK `external/hlsdk-portable/common/ref_params.h` corroborates the 32-bit
waterlevel layout. Ghidra's float-pointer spelling in `100af790` does not turn
that field into a floating-point counter: the consumer uses signed integer CMP/JG.

## Exact draw predicate

For ordinary valid cvar/time values:

```text
gl_screenblur != 0
AND (gl_blurtest != 0 OR serverBlur != 0 OR waterlevel > 2
     OR clientTime < damageBlurUntil)
AND frameDelta != 0
AND framebuffer capture texture is valid
```

`frameDelta` is an on/off gate here, not a multiplier of blur strength.
The renderer uses the captured current frame and layered expanding quads;
it does not accumulate previous frames. Step/opacity defaults and GL state
are described in `shader-pass-contracts.md`.

These conditions combine with OR. Clearing serverBlur cannot cancel an active
damage timer, full submersion, or gl_blurtest. Disabling gl_screenblur suppresses
drawing without clearing those sources.

## Damage trigger

`1006bf10` parses BYTE, BYTE, LONG damage bits, three READ_COORD values, then
one additional BYTE. A nonzero trailing byte assigns `clientTime + 0.15` to
HUD+328. It does not add 0.15 to the old deadline. Repeated qualifying messages
restart the short window from their receive time; a zero trailing byte leaves
the existing deadline alone. The timer assignment does not require either of
the first two damage bytes to be positive. Those bytes independently gate the
direction-indicator helper `1006ba00`.

The renderer uses a strict comparison: at time equal to the deadline, this
source no longer enables blur. The expired value need not be explicitly zeroed.

## Server Blur protocol

HUD initializer `1006cf00` hooks string at `1014e944` to `1006e510`.
The string is `Blur`; the wrapper passes HUDbase to `1006fa20`, which calls
BEGIN_READ and READ_BYTE and writes HUD+31b0. Valid byte0 disables this source;
any valid nonzero byte enables it. No fade, duration or intensity is read.

The server entity, change detection, initial synchronization and shared dream
state are traced separately in `blur-server.md`. In particular, this is distinct
from the 150ms Damage deadline even though both feed the same final draw gate.

## Initialization and reset boundary

`1006cf00` initializes HUD+328 to zero and HUD+31b0 to zero (word indices0xca
and0xc6c). Initial image bytes at `1018d270` are also zero.

`ResetHUD` wrapper `1006e9a0` calls `100714b0`; `InitHUD` wrapper `1006e740`
calls `1006fe00`. Neither recovered method body directly clears these two
fields. Both dispatch virtual callbacks to registered HUD elements. Therefore
this evidence does **not** prove that every indirect reset callback leaves the
fields unchanged. Do not invent an unconditional ResetHUD clear from the message
name alone. Server synchronization and client initialization are separate paths.

Waterlevel is refreshed in the normal refdef calculation. Exact transition
behavior through spectator, disconnected and alternate-camera routes remains
outside this bounded investigation.

## Why the first xref search missed the producer

The exact-address query at `1018d270` reports only the renderer READ at10071e4c.
The actual producer writes `[object+31b0]` through a parameter. The exact-address
query at `1018a3e8` reports the absolute Damage WRITE at1006bf7e but omits the
renderer read through `[ESI+328]`. Empty write/read results for an absolute
address are not proof that a field is immutable or unused.

## Evidence and remaining work

Full REA records, provider details, parameters and Evidence IDs are retained in:

- `decompiled/client/captures/graphics-blur-triggers/capture.json`: exact data
  references and full blur renderer dossier.
- `decompiled/client/captures/graphics-blur-message/capture.json`: timer write,
  Damage dossier, HUD_Redraw assembly and initial flag bytes.
- `decompiled/client/captures/graphics-blur-material-routing/capture.json`:
  Blur/reset wrappers and literal message string.
- `decompiled/client/captures/graphics-blur-material-state/capture.json`:
  actual Blur/reset methods.
- `decompiled/client/captures/graphics-client-first/005-pseudocode.c`:
  HUD initialization and message registration.
- `decompiled/client/captures/graphics-client-fog-waterlevel/000-pseudocode.c`:
  waterlevel producer.

All capture input hashes remained unchanged. Runtime/pixel parity has not been
tested here. Integration needs all three native sources and their separate
lifetimes; a blanket movement-speed blur is not the recovered behavior.
