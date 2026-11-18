# Independent static review: interaction doors

Reviewed the bounded disassembly in `analysis/local/doors-range.asm` and read PE data directly without loading or executing the original DLL. Source SHA256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Addresses below are preferred-image virtual addresses (image base `0x10000000`).

## Corrections that matter for a port

- `0x10049280` (disable-controller Use) writes **disabled = (frags == 0.0f)**, not `frags != 0`. At `0x10049345`, `ucomiss` compares against the verified float zero at `0x101a1370`; `lahf; test ah,0x44; jnp` selects `push 1` for ordered equality. Both ordered inequality and unordered comparison select `push 0`. This matches ordinary C++ `==`, including NaN behavior. The setter at `0x10048030` writes the supplied byte directly to `this+0x180`.
- Original entvars offsets differ from the vendored SDK. Original serialized metadata confirms `frags=0x168`, while the SDK places it at `0x164`. Do not transplant numeric offsets into SDK objects. The original table has `light_level=0x124` and `sequence=0x12c`; the extra four bytes begin between them. Their purpose is not established here.
- StartSequence sets entvars flags bit `0x80`; EndSequence clears `0x200`, then `0x80`. The matching SDK meanings are `FL_NOTARGET` and `FL_ONGROUND`. `FL_FROZEN` is `0x1000` and is not the flag set by these instructions. Movement/input suppression also touches original player private fields and an unresolved helper.
- EndSequence fires `m_sProperTarget` with **the door as both activator and caller**, use type `3` (`USE_TOGGLE`), value `0`. Substituting the player changes relay behavior.
- Owner release occurs after that callback (`FireTargets` at `0x100484ab`, owner clear at `0x100484fc`). Releasing it earlier permits reentrant use that the original busy check would reject.

## Original entvars metadata evidence

These are direct records, each 16 bytes, in the original DLL's serialized field-description table; field names are original strings.

| Record address | Field | Original offset | SDK offset |
|---|---|---:|---:|
| `0x1021ad30` | sequence | `0x12c` | `0x128` |
| `0x1021adc0` | health | `0x164` | `0x160` |
| `0x1021add0` | frags | `0x168` | `0x164` |
| `0x1021ae80` | owner | `0x19c` | `0x198` |
| `0x1021aea0` | spawnflags | `0x1a4` | `0x1a0` |
| `0x1021aeb0` | flags | `0x1a8` | `0x1a4` |
| `0x1021af40` | target | `0x1cc` | `0x1c8` |
| `0x1021af50` | targetname | `0x1d0` | `0x1cc` |
| `0x1021af60` | netname | `0x1d4` | `0x1d0` |
| `0x1021af70` | message | `0x1d8` | `0x1d4` |
| `0x1021afc0` | noise | `0x1ec` | `0x1e8` |
| `0x1021afd0` | noise1 | `0x1f0` | `0x1ec` |
| `0x1021afe0` | noise2 | `0x1f4` | `0x1f0` |
| `0x1021aff0` | noise3 | `0x1f8` | `0x1f4` |

The `frags` record contains type `0` (float), name pointer `0x101e52cc`, offset `0x168`, size `1`, flags `0`. `pContainingEntity=0x20c` is independently supported by repeated edict access and engine-call arguments in the disassembly.

## Confirmed door state and control flow

The 12 records at `0x10212480` name `m_sMusic` (+18c), `m_sLockedBy` (+190), `m_sLockedMsg` (+194), `m_sUnlockedMsg` (+198), `m_sProperTarget` (+19c), `m_sUseUnlock` (+1a0), `m_fNextUse` (+1a4), `m_iMusicFadeOut` (+1a8), `m_iMusicFadeIn` (+1ac), `m_bSilentRoom` (+188), `m_bDisabled` (+180), `m_iNewLevelDoorSound` (+184). Hex offsets are relative to the original C++ object. Both fade fields have float type despite their names; the sound field is a string handle despite its name.

`Use` at `0x10048f70` rejects null/nonplayer activators, failed master checks, disabled state and `m_fNextUse > time`. It then handles, in order: the special targetname `unlockablesdoor`; one-shot `m_sUseUnlock`; an existing owner/busy player; the new-level door sound assignment; locked message/noise2; otherwise assigning the activator as owner and starting the sequence. Handled interactions update next-use to time plus the verified constant `1.0f` (`0x101a1390`). Early rejected interactions do not.

The `m_sUseUnlock` branch looks up the named entity. Only when its classname is `inter_door` does it clear the one-shot string and finish the current interaction. It invokes the other door's unlock helper only if that other door is locked. A missing or different-class entity falls through to normal use, retaining the string. This distinction matters for maps with late-spawned entities.

The lock predicate at `0x10048540` is exactly `m_sLockedBy != 0`. The helper at `0x10048e40` requires a nonnull supplied entity, plays noise3 if present, emits the unlocked message if present, clears both locked-by and locked-message handles, and sets next-use to time plus one.

The exit-change Use at `0x10048ef0` requires a player activator and a nonnull player conversion. It requires its own nonempty `target` and `message`, looks up an entity by its `message`, and assigns that entity's `target` to its own `target`. It does not teleport or change level itself, and it does not check the destination classname.

EndSequence ordinarily looks up a destination by the door's target, places the player at destination origin with Z adjusted by `-player.mins.z + 1`, copies destination angles to body and view, sets fixangle, zeros velocity/basevelocity, clears on-ground state, plays noise1, fades back in, restores player state, fires the proper target, handles music, and releases the owner. Error exits for failed player conversion and missing destination return before ordinary cleanup, so a safer port cleanup is a deliberate divergence.

## What this review does not establish

- Original player-private fields (+4cd/+4ce/+4cf, +5ec, +618, +1ea4, +1ec8, +2294, +2310, +2500) do not have confirmed type/name semantics here. A compiled SDK approximation does not restore their behavior.
- `unlockablesdoor` depends on helper `0x100dd000` with arguments 1, 2, 4, 8 and 16. These must not be silently replaced with unconditional success and called restored.
- EndSequence has four `closegame*` branches and an `endingcheck` branch that selects a target using original player fields. The common teleport path alone does not restore these campaign endings.
- StartSequence calls a 1024-unit nearby-entity routine (`0x100489f0`) that restores some entity positions. Its full class and predicate semantics are not established here.
- Music, screen fading and player-state helper semantics need their own investigation. Spawnflag 2 reaches a music call argument; its source-level name is still an inference. Spawnflag 4 directly initializes disabled state.
- The original message helper receives channel/type `5`; using SDK `ClientPrint(..., HUD_PRINTCENTER, ...)` is a UI adaptation. That numeric argument alone does not prove that the original helper has SDK ClientPrint semantics.
- This is static review of one binary version, not differential runtime validation against the original game, and not a claim of complete door/campaign reconstruction.
