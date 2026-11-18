# Installed Cry of Fear UI assets

Inspected loose files in `D:/Steam/steamapps/common/Cry of Fear/cryoffear` without executing the original DLLs. Reproduce with `python tools/inspect_ui_assets.py`. `assets.json` contains SHA-256, dimensions, alpha extents, descriptor values and per-character font byte triplets. Contact sheets are generated in ignored `analysis/local/ui-assets/` and were visually inspected.

This installation contains Russian localization: major inventory headings, action text and item descriptions are baked into the actual TGA images. These observations describe these installed bytes, not a pristine English release. CP1251 is a plausible display interpretation of descriptor bytes and is labelled accordingly.

## Inventory

| Asset under `gfx/vgui/` | Size | Observed content |
| --- | --- | --- |
| `640_inventory.tga` | 748 × 480 | Six inventory slots, three quick slots, archive icon, description and objective panels; headings baked into art |
| `640_inventory_three.tga` | 748 × 480 | Three inventory slots, three quick slots and archive |
| `640_inventory_p.tga` | 748 × 480 | Six uniform slots, quick slots, fixed Russian objective in art |
| `640_inventory_p_c.tga` | 748 × 480 | Six uniform slots, quick slots, no fixed objective |
| `inventory_items.tga` | 126 × 126 | Three 126 × 42 action rows: apply, combine, drop |
| `inventory_weapons.tga` | 126 × 210 | Four 126 × 42 action rows: equip, combine, drop, dual wield; final row three 42 × 42 quick-slot buttons |
| `mouse.tga` | 16 × 16 | Pointer |

The main panel image SHA-256 is `41ca688daa9c40fc6563a768b9d9bc3ff0be232b3648dfc2df5d5e7d965586e9`.

Pixel inspection gives these **image-space border positions**, not independently verified engine widget coordinates: regular slots at x=36,138,240 and y=73,231; quick slots at x=403,505,607,y=73; each 99 × 99. Description at (36,353), objective at (403,353), each 303 × 99. Use disassembled constructor/layout code to establish screen scaling, widget offsets and centering.

Descriptors explicitly identify `inventory_picture`, `quick_picture`, `check_picture`, `nice_name`, `map_name`, `classname`, `droppable`, and combination fields. Sewer-key descriptor maps inventory/quick images to `gfx/vgui/items/sewerkey/640_sewerkey_slot.tga` (99 × 99) and inspection to `640_sewerkey_check.tga` (303 × 99). The latter already contains the title and localized descriptive text; it is not just a large model thumbnail. Glock/mobile/syringe examples have the same dimensions and baked descriptions. Do not duplicate those descriptions with a second text overlay.

Manifest contains 137 descriptors and 539 candidate assets, of which 41 descriptor-referenced loose files are missing. For example several weapon folders contain the check image but lack the specified slot image. This does not establish absence from archives or fallback selection in original code; do not silently substitute unrelated art. Sewer-key images are present.

## HUD

* `640_healthbar.tga`, `640_healthbar2.tga`, `640_healthbar3.tga`: 32 × 160 frame and red cross, with differing visible upper segments.
* Corresponding `_bar` and `_barempty` images: 11 × 118. The ordinary health fill is a white-to-red distressed gradient.
* `640_staminabar.tga`: 32 × 160 frame and running-person icon. Fill and empty images are 11 × 118, fill white-to-blue.
* Independent sprite assets also exist: `cof_health_empty/full.spr`, `cof_scare_empty/full.spr`, separate icons and magazine icons. Their presence does not prove the active renderer uses them instead of VGUI TGAs. These are IDSP v2 sprites; manifest stores texture modes and first-frame dimensions.
* `cof_ammohud.spr` is 256 × 128. `sprites/hud.txt` defines `number_0` through `number_9` at (24*n,0), width 20, height 24. Its initial declared record count differs from the actual list (already corrected by staging elsewhere).
* Existing inventory WAVs: open, close, toggle, click, no, plus server_click/game_start. Filename alone does not prove the original event binding; use binary evidence.

## Fonts

`gfx/vgui/fonts/font info.txt` explicitly lists inventory Arial 14 for all six supported widths (640,800,1024,1152,1280,1600). Each `*_inventory.tga` is 3072 × 20 and the corresponding `.chw` is 768 bytes, 256 byte triplets. Example byte triplets: space [0,5,1], A [0,9,0], I [1,1,1], W [0,11,1]. The glyph RGB data is present while the **entire TGA alpha channel is zero**. Contact-sheet generation deliberately displays RGB only for this font; a conventional alpha-blend would hide the glyphs. Triplets resemble ABC metrics but their exact interpretation must be confirmed from the original font reader, rather than inferred as an ABI.

The shipped `charmap.txt` describes Cyrillic offsets in the triplet byte stream: 576–768; uppercase 576–671, lowercase 672–768; Ё at504, ё552, я288. This includes a localized remapping for the backtick position, so Unicode-to-byte conversion should not assume an unmodified CP1251 atlas. Exact runtime font selection, alpha handling and spacing remain DLL questions.
