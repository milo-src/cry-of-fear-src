# Original inventory interface: static recovery

Target: installed `cryoffear/cl_dlls/client.dll`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Preferred addresses below use PE image base `0x10000000`.
REA 6.9.0 with Ghidra 12.1.4, private process; original DLL never executed.
This describes the installed build, including its localized assets, not a verified pristine English build.

## Evidence inventory

Raw captures and canonical REA bundles are under ignored `analysis/local/`:

| Capture | Procedure | Meaning |
|---|---|---|
| inventory-ui-first/000 | 10041140 | CRECBInventory constructor |
| inventory-ui-first/002 | 100439d0 | Action-mode selection dispatch |
| inventory-ui-first/003 | 10044a30 | Normal/co-op layout |
| inventory-ui-first/004 | 10044670 | Slot click/context menu |
| inventory-ui-message/000 | 1006ff40 | Inventory user-message parser |
| inventory-ui-message/002 | 10043130 | Mouse ActionSignal dispatch |
| inventory-ui-input/000 | 10044ef0 | Visibility/reset/objective text |
| inventory-ui-input/001 | 100451f0 | Solve/hover/check-picture display |
| inventory-ui-input/002 | 100449f0 | Set selected action mode |
| inventory-ui-input/004 | 10043990 | Reset displayed inventory images |
| inventory-ui-input/005 | 10043ea0 | Reset quick-selection icons |
| inventory-ui-keys/000 | 10044040 | Inventory keyboard input filtering |
| inventory-ui-static/*.asm | bounded GNU objdump | Constructor stack arguments and server equip branch |

The first and message batches contain one unsuccessful selector each (addresses
100791b5 and 10079160 were not recognized as procedures). Their successful
queries remain valid independent Evidence records; their overall verification
correctly reports `queries_succeeded: false`. Input batch completed fully.
The keys batch also contains two unrecognized callback selectors,100790c0 and
100791d0. Their actual registration and instructions are retained in bounded
assembly, without claiming Ghidra recovered those functions.
All batches exported evidence, closed their private binary session, and verified
the source hash unchanged. No unchanged failed query was repeated.

## Geometry and drawing

The constructor creates a full-screen VGUI panel. Its inventory image is centered
at `(screenWidth / 2 - 374, screenHeight / 2 - 240)` and has native dimensions
748 x 480. Inventory controls are children of that image, with the following
local coordinates. There is no proportional screen scaling in these routines.

| Element | Position/size |
|---|---|
| Six slot hitboxes | x 36,138,240; y 73,232; 99 x 99 |
| Six item images | x 31,133,235; y 68,227; native image size |
| Three quickslot hitboxes | x 403,505,607; y 73; 99 x 99 |
| Three quickslot images | x 398,500,602; y 68 |
| Check/description picture | 31,348; native image size |
| Right action buttons | x373; y226,276,325; 363 x 47 |
| Objective text label | 404,354; 301 x 97 |

Images are loaded from `gfx/vgui/640_inventory.tga`,
`gfx/vgui/640_inventory_three.tga` (three-slot mode), or
`gfx/vgui/640_inventory_p.tga` when the level name contains `cof_`.
The screen also has `gfx/vgui/backgroundtoall.tga`, centered by its native size.
For the installed800x600 asset this is `(screenWidth/2-400,screenHeight/2-300)`.
Constructor1004126a calls image getSize, then1004127d..100412ac subtracts
half its width/height from half screen width/height; there is no scaling.
Its ImagePanel (+d8) is explicitly made visible in constructor10041300 and
both branches of layout10044a30. In assembly `push1` at10044a50 precedes the
branch and is consumed by either10044a5a or10044c67; Ghidra omits the argument
in the former branch's pseudocode. Do not mistake that omission for hide.
Image tint is VGUI `Color(255,255,255,1)`. The normal main panel background is
`Color(0,0,0,255)` and the full-screen child is `Color(0,0,0,0)`;
VGUI transparency uses the inverse of conventional alpha. Do not treat the
literal 255 as opaque when adapting to engine triangle drawing.
The full-screen black child (+148) is constructed first and parented to the
inventory. No explicit hide of it occurs in the captured constructor,
setVisible, solve, message, or layout routines; layout10044e86 resets it to
opaque black. Native rendering order is black full-screen backing, centered
rust image, centered inventory art and controls. World-through transparency
would be an adaptation.

The `cof_` layout moves slot row y to 91/213 (icons86/208), quickslots y90
(icons85), check image y329, right buttons y243/285/327 with heights42;
it hides the ordinary mode's extra button. Single-player reconstruction should
not infer these map-name conditions as player-count conditions.

Hovering a nonempty slot loads descriptor `check_picture` into the left image.
Leaving that slot clears it. This is mouse hover, separate from popup selection.
The right text box is an objective, loaded via global objective identifiers and
HUD message storage. It replaces `@` with newline and uses scheme font named
`inventory`; it hides when identifiers are absent. It is not item description.

## Messages

`Inventory` is registered at 1006d4f8 with handler1006e760, which calls1006ff40.
The exact field order is:

1. byte slot (1..6 for ordinary items; 0 also exists in reset flows)
2. byte resetImages
3. zero-terminated descriptor path string (client copies up to128 bytes)
4. byte threeSlotMode
5. byte suppressPickupNotification
6. byte glockTacState

The descriptor is stored in the indexed slot. Nonzero resetImages clears ten
image widgets and selection state, not necessarily every descriptor string.
Nonzero threeSlotMode hides slot buttons4..6 and selects the three-slot image.
Nonempty slot resolves `inventory_picture`; empty slot removes the image.
Pickup notification derives `nice_name`, expires after four seconds, and is
suppressed by byte5. Final flag replaces Glock/Glock-tactical descriptor paths
in all six slots and three quickslots. Those weapon changes are outside the
key-only reconstruction scope.

## Mouse actions

Clicking nonempty slot1..6 selects it, plays `inventory/inventory_toggle.wav`,
and opens a context image immediately to the right. Descriptor path containing
`weapon_` selects `inventory_weapons.tga`; otherwise `inventory_items.tga`.
The image origin is `(slotX+99-5,slotY-5)` and its action hitboxes begin at
`(slotX+99,slotY)`. First three rows are 126 x 42:

| ActionSignal | Behavior |
|---|---|
| 50 | send `inventoryequip SLOT`, close context |
| 51 | start combine selection, show pulsing red99x99 border |
| 52 | send `inventorydrop SLOT`, close context |
| 53 | start dual-wield selection (weapon context only) |
| 54..56 | quickselset1..3 SLOT (weapon context only) |

Weapon quickslot buttons are42x42. Selecting the second combine item reads
`combined_result` and sends `inventorycombine FIRST SECOND RESULT`.
Selecting the same item or an invalid descriptor plays `inventory_no.wav`.
Dual wield sends `inventorydualwield FIRST SECOND` when descriptor classname is
nonempty. Gameplay acceptance still belongs to the server.

Original server `inventoryequip` at100e40e0 explicitly checks descriptor
`classname` against `item_key` (string101ae8cc). At100e4231 it passes the slot
to100e4410, the same routine used by `inventoryuse`. Thus a key-only
`inventoryequip` alias to recovered use behavior is supported by static
evidence. It is not a blanket alias for every nonweapon: other classes need
their own investigation. The weapon path separately checks prefix `weapon_`.

The right fixed action buttons select action modes. Subsequent selection is
dispatched by100439d0: mode1 equip,2 combine,3 use,4 drop,5/6/8 quickslots,
7 dual wield. The pulsing selection border changes alpha by15 per solve call.
Opening or closing resets popup, combine/dual selection, current action and
hover state. Clicking outside the context action buttons hides the popup.

Six ordinary slot buttons have no persistent selected white outline. Their
ColorButton constructor sets armed-border color to white with VGUI alpha128
and unarmed-border color to black with alpha255. Original ColorButton vtable
at10140050 points to paint1001e960 and paintBackground1001e9e0; the latter reads
field138 when armed and13c otherwise and draws the outline. This agrees with
the vendored SDK ColorButton layout. Red pulsing selection is reserved for
combine/dual-wield. ActionSignal50 hides only the context popup and its seven
controls. It does not close the whole inventory. The ordinary server door-use
branch similarly has no explicit close UI call.

## Keyboard

The `+inventory` registered callback is100790c0; `-inventory` is100791d0.
The former toggles the panel and plays open/close sounds after game-state
gates. The latter only calls the generic KeyUp helper. This is a toggle UI.
The inventory-specific key handler10044040 permits binding `toggleconsole`,
closes on `+inventory`, and consumes all other key events. Direct numeric
item use would be an adaptation, not a behavior shown by this handler.

Reproduce the assembly capture with
`python tools/capture_inventory_ui.py "D:/Steam/steamapps/common/Cry of Fear/cryoffear"`.
The helper verifies both original hashes and records bounded range digests and
GNU objdump identity; it never executes target code.

## Limits

These are static facts and recovered structure, not original runtime screenshots
or proof of rendering parity. Asset alpha/orientation, font metrics, native
image sizes, mouse capture, and recreated input behavior need validation in
the independently built runtime. Weapon handling, original objective messages,
co-op behavior, and further UI panels remain separate work.
