# Key inventory: recovered subset and runtime validation

This is an evidence-guided SDK port, **not recovered original C++**, an ABI match,
or a complete CoF inventory. The implemented scope is ordinary single-player
`item_key` pickup, six slots, `inventoryuse`, and `inter_door` unlocking.

## Evidence identity

- Original `cryoffear/cl_dlls/hl.dll`, PE32, preferred base `0x10000000`.
- SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
- REA export projection:
  `ev_8ce3c329fae8f9d48bd2f0effd44547f409623b269a2db308299cd1d6edcfaf4`.
- `capture.json` records bounded disassembly hashes, original save metadata,
  vtable prefix, and all 13 retained Ghidra query identities. Full REA bundles
  are local ignored artifacts in `analysis/local/ghidra-key-batch` and
  `analysis/local/ghidra-inventory-batch`.
- `assets.json` records descriptor/BSP/model hashes and entity byte spans:
  137 descriptions, 236 maps, 93 `item_key` instances, 80 key-class descriptions.

Reproduce with:

```powershell
python tools/capture_inventory.py 'D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll'
python tools/inspect_key_assets.py
python tools/rea_ghidra.py 'D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll' ram:0x1004ded0 ram:0x1004e160 ram:0x100dad40 ram:0x100e4410 --output analysis/local/ghidra-keys-new
```

Original DLLs were read statically, never executed or loaded into the prototype.
Ghidra types and `FUN_...` names are inferred. Assembly and the original entvars
save table resolve fields that differ from HLSDK offsets.

## Recovered behavior

| Original address | Evidence and implemented behavior |
|---|---|
| `0x1004e340` → `0x1004db90` | `item_key` factory; original `CKeyitemModel` vtable at `0x101b1644`. |
| `0x1004dbf0` | Descriptor tokens: named section, braces, `data` value. Spawn reads `3dmdl` when the map supplies no model. |
| `0x1004de60` | `customsound` keyvalue stored in `pev->noise`; it is **not** used by the recovered pickup path. |
| `0x1004e160` | Model precache/set; `SOLID_BBOX`, `MOVETYPE_TOSS`, sequence bounds via `0x100180e0`; `renderfx=99` (original entvars +`0x160`, not health). Flag 1 removes the key unless `difficulty==4`. Flag 2 initializes an interaction counter to 3. |
| `0x1004e030` | Impulse-use plus across-transition capabilities for ordinary keys. Original capability delegation to an attached object is not ported. |
| `0x1004ded0` | Null/cooldown gate; player check; `target` fires with the key as activator/caller **before** pickup/fullness check. Flag-2 prompts decrement 3→2→1 without advancing cooldown. Successful inventory insertion removes the world entity; ordinary handled calls set `m_useTime=time+1`. |
| `0x100e2f80` | Non-weapon entity forwards descriptor path from `pev->message` to inventory insertion. |
| `0x100dad40` | First empty ordinary slot 1..6; full inventory fails and leaves the item. Insertion stores descriptor string and sends update; normal pickup sound is `weapons/item_get.wav`. |
| `0x1001a9d5` | Client command is `inventoryuse <slot>`, dispatched to `0x100e4410`. |
| `0x100e4410` | Reads descriptor `map_name`, traces 80 units from eye in view direction; tests use capability. Fallback enumerates entities within 64 units of player origin without a visibility test. Matches `inter_door.lockedby` exactly. |
| `0x100e4687`, `0x100e4b4a` | Remove selected slot before calling door Unlock, unless door spawnflag 1 retains the key. No automatic traversal: Unlock imposes its existing one-second cooldown; subsequent door use starts the transition. |
| `0x100dd990` | Slot removal (original clears additional weapon arrays too, not present in this key-only subset). |
| `0x100e4360` | Original slot update contains slot byte, zero byte, descriptor string and three mode bytes. This establishes protocol evidence, but the prototype currently uses its own `CofInv` message. |

The original key save table at `0x10212610` stores `m_useTime`, FIELD_TIME,
original offset `0x100`. The port preserves that name and adds a saved prompt
counter. Port player inventory paths use a seven-element FIELD_STRING array
(index zero unused). **Original CoF save files remain incompatible.**

## Verified real-map chain

`c_sdkmap1.bsp` SHA256
`eeb4e5719b61749f7c1854e61ab16a2a69d24f4abfbe5da604a1a1f7efd8300c`:

1. Entity 18, `item_key`, targetname `appung`, message
   `inventoryitems/sewerkey.txt`, origin `-149 308 12`.
2. Description `map_name=sewerkey`, model `models/items/nyckel4.mdl`.
3. Entity 16, `inter_door`, brush `*3`, `lockedby=sewerkey`, target exit entity 23.

The integration test positions a noclip observer, then uses **client `+use`**
to pick up the actual map key and client `inventoryuse 1` to unlock the actual
brush door. It verifies slot consumption, cooldown, scheduled door transition
and exit coordinates. Test positioning is instrumentation; this is not a
recording of walking the whole map. Door traversal itself is exercised through
the entity Use entrypoint already covered by door tests.

Save variant saves after pickup, clears the live slot, loads the save, checks
descriptor-string restoration and the locked door, then completes the same
unlock/traversal. It also requires the client to receive the restored slot.
This validates the local key/door save round trip, **not campaign transitions**.

```powershell
python tools/build_all.py
./tools/smoke.ps1 -Inventory
./tools/smoke.ps1 -Inventory -InventorySave
./tools/smoke.ps1 -Doors
./tools/smoke.ps1
```

Reports, logs and screenshots are under ignored `analysis/local` and
`out/runtime`. Smoke tests observe loaded module paths throughout execution;
`tools/audit_runtime.py` matches all nine native modules against own Waf builds
or official SDL. Original game module paths are rejected.

Final local run on 2026-11-18: full `build_all.py` Waf build/install/audit passed;
33 inventory/save checks passed; door regression passed; ordinary movement was
103.44 units and all runs exited 0. The inventory/save report is
`analysis/local/smoke-c_sdkmap1-inventory-save.json`; its screenshot is
`out/runtime/c_sdkmap1_0012.png`. Combined REA evidence was exported to ignored
`analysis/evidence/inventory-rea.json` before resetting the investigation.

## Port adaptations and remaining work

- Waf builds server/client from vendored HLSDK with explicit generated-tree
  patches. All game assets, now including `inventoryitems`, are independently
  staged; installed originals are not modified.
- Temporary Tab panel, 1..6 slot controls, ASCII `map_name` labels and `CofInv`
  messages are new UI. The original VGUI, thumbnails, CP1251 display names,
  equip/drop/combine/check operations and mode flags remain to be reconstructed.
  `runtime/inventory.cfg` supplies these prototype bindings after personal config.
- Parser rejects malformed/incomplete files, overlong values, duplicate sections
  and traversal paths. Missing descriptors/models remove invalid entities with
  a diagnostic instead of reproducing the original unsafe/repeating path.
- `inventoryuse` adds slot bounds, alive/frozen checks. The original can emit
  repeated failure sounds while scanning; this subset emits one final failure
  sound. Successful use does not automatically close the temporary panel.
- The inventory uses six ordinary slots. The original three-slot mode selected
  by player byte +`0x1e9c`, weapon arrays, multiplayer and mode-specific behavior
  are not implemented. Pickup sound suppression via original global
  `DAT_10226480` is not reconstructed.
- Flag-2 story prompts have temporary English text. The nightmare pickup's
  original player field +`0x1ef4=5`, special removal callback at `0x1004e120`,
  and render effect 99's original visual meaning remain unresolved.
- `func_valve` and locked `func_button` branches are visible in UseItem evidence
  but not part of this implementation. Save/load of original formats, death
  behavior, inventory transfer across campaign maps and bonus-door inventory
  predicates remain separate work.
- Asset scan found a missing `inventoryitems/cassette_tape.txt` referenced by
  entity 230 in `c_hallo_iambulletproof`; the similarly named existing file is
  **not silently substituted**.
- Existing prototype logs still report unrelated unsupported entities and
  missing Half-Life resources. Passing these tests does not establish complete
  CoF gameplay or original behavior equivalence.

Next reverse-engineering boundary: original inventory message registration and
client handler, followed by item selection/drop/combine and their persistence.

## Продолжение разбора: pass14

Частичный100dad40 теперь расширен полным локальным контрактом в [player inventory](../server-player-inventory/contract.md): свободный3/6 GUI slot ищется до dedup, второй argument не читается, успех может не делать записи, sound/Syringe идут после обеих ветвей. Там же player chains100daf10/100e2410 и GiveAmmo100e04d0 с точным return/wire. Старые evidence paths сохранены; никакой игровой реализации этим продолжением не заявляется.
