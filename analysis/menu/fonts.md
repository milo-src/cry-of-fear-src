# Original VGUI2 font pipeline

Static target: installed `D:/Steam/steamapps/common/Cry of Fear/vgui2.dll`, SHA256 `42107e58ad018020de5b5b7253f512c7265d6e12ab3f68c45b00cd475011472b`. No original executable or DLL was run. Addresses use preferred image base 0x10000000.

## Scheme size and selection

The installed MenuLarge resource supplies Tahoma, tall 18, weight 1000, antialias 1, followed by another entry with weight 800. The GameUI `0x1003f510` request passes the panel's proportional flag to GetFont; the panel-layout investigation records how that flag is initialized. Resource height alone does not determine the selected glyph height.

VGUI2's scheme parser `0x10012d64` reads tall at `0x10013050`, optionally scales tall/blur/scanlines through `0x100135cf`, clamps tall to 128, and applies language adjustment `0x10013af3` unless the symbol-font flag 8 is set. The scale helper multiplies the input by screen height / proportional-base height, truncating to integer. Nonproportional selection bypasses that multiplication. This is not point-to-pixel conversion or Windows DPI conversion.

Language adjustment leaves ordinary English heights unchanged. For engine language `russian` and input above 12, it returns `max(12, int(input * 0.9))`; the double 0.9 is stored at `0x1003cbf8`. Thus an unscaled MenuLarge request is 18 for English and 16 for Russian. Russian text stored in `gameui_english.txt` does not prove that the engine reports Russian language. Several East Asian languages instead enforce a minimum 13. Do not infer active language solely from visible localization bytes.

The scheme parser's decompilation failed because the native decompiler process died; its bounded assembly was retained instead, and the failing query was not repeated. Scale, language adjustment, font manager, font creation and glyph rasterization all decompiled successfully.

## GDI creation and metrics

`0x10026af0` forwards face, height, weight, blur, scanlines and flags unchanged to `0x10027400`. That creator stores height directly and calls:

```c
CreateFontA(height, 0, 0, 0, weight,
            flags & 1, flags & 2, flags & 4,
            (flags >> 2) & 2, 0, 0,
            antialias ? 4 : 3, 0, face);
```

The height is **positive**, with no `+6`, negation, point conversion or weight clamp. Weight 1000 reaches GDI as 1000; the chosen physical font face remains GDI's responsibility. MenuLarge's antialias flag 0x10 selects ANTIALIASED_QUALITY (4). There is no CreateFontW import in this artifact; the face name is ANSI, while individual Unicode glyphs use a wide text path.

The context uses MM_TEXT and TA_LEFT | TA_TOP | TA_UPDATECP. GetTextMetricsA provides cell height, ascent and maximum width. Stored height is `tmHeight + dropShadow`, where dropShadow is flag 0x80 converted to 0/1. MenuLarge does not request this flag. GetCharABCWidthsW is tried first for the cached ASCII metrics, with the ANSI function as fallback. Blur and shadow modify ABC bounds; ordinary MenuLarge has neither.

Antialiased glyphs <=255 use GetGlyphOutlineA(GGO_GRAY8_BITMAP). Vertical placement is `tmAscent - glyphOriginY`, not an independently chosen text baseline. Non-ASCII glyphs and non-AA fonts take the DIB text path described below.

## Unicode DIB rasterization

`0x100277b0` uses a top-down 32-bit DIB, white text on black background, OPAQUE mode. It moves the GDI current position to `(-abcA, 0)` (underlined fonts use zero X) before drawing. On Unicode-capable Windows it calls ExtTextOutW for one UTF-16 character. An older-platform branch converts to the ANSI code page and uses ExtTextOutA. After drawing it restores TRANSPARENT mode.

For each DIB pixel, bytes 0, 1 and 2 are normalized by 1/255 and copied into output channels 0, 1 and 2 after multiplication by 255 and truncation. Output alpha is the truncated value of:

```text
255 * (0.34 * byte0/255 + 0.55 * byte1/255 + 0.11 * byte2/255)
```

The constants are floats at `0x1003d640` through `0x1003d650`. Glyphs are monochrome gray under this quality setting, but the code still uses all three components. It does not replace RGB with solid white. Tab characters explicitly zero the channels. For the antialiased outline path, native coverage is normalized from the 0..64 range. Blur, scanline and shadow postprocessing exist; none is requested by MenuLarge.

## Port implications and evidence

The vendored MainUI font backend initially added 6 to every requested height, selected PROOF_QUALITY, and called GetGlyphOutline for all characters. Its later text-height scaling can shrink a 24-pixel raster to 18; that still does not reproduce the original 18-pixel GDI raster. A faithful menu-font adapter must isolate the original height/quality/glyph path, retain metrics-based positioning, and select proportional/language behavior from evidence. Do not alter every console/dialog font based solely on the main menu request.

Retained captures:

- `analysis/local/menu-switch-vgui-font/001-pseudocode.c`: creator `0x10027400`, Evidence `ev_a39ca0b4bd0d7507e82df4bb1814d0154b0df140e35d5cdfd22bb5dd7bea5130`.
- `analysis/local/menu-switch-vgui-font-detail/000-pseudocode.c`: manager `0x10026af0`, Evidence `ev_ae61162cff93d6a281da9f58a1138f86a00e9467ce274be729ba2cef6e370557`.
- Same capture, `001-pseudocode.c`: glyph `0x100277b0`, Evidence `ev_b4b22cd03d5fc25fbd41c7593bbc44e35357bd6118aa3edf78d9137b1b45d90f`.
- Same capture, `002-pseudocode.c`: language `0x10013af3`, Evidence `ev_06401ae90cb737d5834093b2f53a4e832e8e0b5ca33426b9dcf65346781cead3`.
- Same capture, `003-pseudocode.c`: scale `0x100135cf`, Evidence `ev_87f2a354a47ff5db1bc0cc41513e17da6ff0cb5571b34adc76e1901d1851c7e3`.

`tools/capture_menu_switch.py` now includes bounded VGUI2 scheme/creation/glyph assembly and optional successful REA queries. Latest assembly capture: `analysis/local/menu-switch-font-assembly`. The reconstruction's visual/runtime verification belongs to the integrating task; static font evidence alone does not establish pixel equivalence on a different Windows/font installation.
