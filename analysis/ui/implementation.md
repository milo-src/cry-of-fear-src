# HUD/inventory reconstruction status

2026-11-18. This is an evidence-guided implementation, not recovered original
C++ source or a claim that every original UI feature is complete.

## Implemented

* Original health/stamina TGA frames and clipped empty overlays at native pixel
  positions. `Health` uses the existing SDK message receiver; `HealthCap` and
  `Stamina` decode the original byte/coordinate payloads. Health texture variants
  use `healthbar2` / `healthbar_bar2` / `healthbar_barempty2` (likewise suffix3).
  HUD visibility follows `hud_draw`, hide bits0x0c and `c_nightmare`.
* Normal six-slot inventory: full-screen black background, native800x600 rust
  image and centered748x480 inventory. Icons, hover descriptions, half-white
  hover border and context-menu art come from the installed game assets.
* `Inventory` replaces the temporary `CofInv` protocol. Slots1..6 carry the
  descriptor path and three original mode bytes. The client shares the bounded
  descriptor parser with the server. Image-reset and three-slot presentation
  flags are decoded; current gameplay sends ordinary six-slot mode.
* `+inventory` toggles the menu; `-inventory` releases the key without closing.
  Mouse selection opens the context. A key's Apply action sends original
  `inventoryequip N`, routed on the server to recovered key use only after
  checking `classname == item_key`. It closes the context, retaining the menu.
* Opening the menu releases relative mouse capture and blocks player movement,
  look, attack and impulses. Closing/map-video reset restores mouse capture.
  Prototype banner/text inventory and unrelated Half-Life HUD artwork removed.

Source: `src/cof/client/{inventory_client,status_hud,ui_draw}.cpp`,
`src/cof/shared/item_descriptor.h`, and server `recovered_inventory.cpp`.
The disposable SDK integration remains explicit in `tools/prepare_game.py`.
No source branch or commit was created.

## Port adaptations and remaining questions

| Question | Status |
| --- | --- |
| Ordinary inventory geometry/art and key Apply path | Recovered statically and exercised in our runtime |
| Health/stamina layout and message decoding | Recovered; ordinary health, 40% stamina and HealthCap1 exercised |
| Three-slot image and image-reset flag | Implemented from evidence; no gameplay producer in current server |
| Exhaustion, sprint stamina drain/regeneration | Not recovered; the exploration server leaves stamina at its default100 |
| Ammo/combat HUD, weapon context/quickslots, crosshair conditions | Unresolved implementation; image/function anchors in `hud.md` |
| Combine/drop, archive, objectives and pickup notification | Not implemented; context art is present, unsupported actions play rejection sound |
| Co-op inventory layout and special character modes | Static geometry partly recovered, not integrated |
| Original runtime pixel parity | Not established: original DLLs were never executed |

Rendering uses our Xash client renderer interface37 and TriangleAPI, with the
complete vendored ABI header. All texture binds go through the renderer API.
The native OS cursor, Escape-to-close, console/save/screenshot shortcuts,
release-event forwarding and bounds validation are explicit port adaptations.
`cof_inventory` remains a compatibility toggle; `cof_inv1`..`cof_inv6` remain
unbound developer selectors, not original numeric-use bindings. Slot0 reset
flows, Glock tactical mode and pickup-notification mode require later work.

Use `start-game.bat`, Tab, then mouse over/click an acquired key. Apply works
near a matching locked door. Settings staging performs a one-time migration
from the old forced `hud_draw 0`, preserving later user changes.

## Verification and retained evidence

* Waf build/install succeeded; runtime audit matched all9 allowed x86 modules.
* `pwsh -File tools/smoke.ps1 -Ui`: 10 client checks and29 server checks passed.
  The fixture picks up the real map key, uses the engine `Key_Event` route,
  checks blocked movement, invokes Apply through the mouse handler, observes
  key consumption and completes the real locked-door transition.
* UI rendering also checked at800x600;1280x720 is the normal test resolution.
  Health65, stamina40 and HealthCap1 came through server messages. Screenshots
  were inspected for orientation, clipping, description, popup and background.
* `pwsh -File tools/smoke.ps1 -Inventory -InventorySave`:33 checks passed,
  including restored descriptor strings and client resynchronization.
* Ordinary map smoke passed with observed movement and rendered HUD.
* Tests enumerate loaded modules; no original game DLL was observed.

Raw reports/screenshots are under ignored `analysis/local` and `out/runtime`.
Final reviewed1280x720 context: `out/runtime/c_sdkmap1_0033.png`;
800x600 context: `out/runtime/c_sdkmap1_0030.png`.
Test fixtures live in `tests/cof/client` and `tests/cof/server`; execution is
environment-variable gated and not enabled by the normal launcher.

`hud.md`, `inventory.md` and `assets.md` separate static facts from limitations.
Their capture scripts preserve addresses, source hashes and tool provenance.
Private REA sessions were closed. Six saved REA batches were imported and the
combined25-record bundle checkpointed by `reset_investigation` to ignored
`analysis/evidence/ui-rea.json`; shared investigation state was then cleared.
