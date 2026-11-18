"""Stage vendored Xash sources and source-owned CoF MainUI without editing external/."""
from pathlib import Path
import json
import shutil

ROOT = Path(__file__).resolve().parents[1]


def prepare():
    original = ROOT / 'external/xash3d-fwgs'
    target = ROOT / 'build/engine-source'
    target.mkdir(parents=True, exist_ok=True)
    manifest = target / '.vendor-files.json'
    files = {p.relative_to(original).as_posix(): p for p in original.rglob('*')
             if p.is_file() and not any(part == '__pycache__' or part.startswith('waf3-')
                                       for part in p.relative_to(original).parts)
             and not p.name.startswith('.lock-waf')}
    previous = json.loads(manifest.read_text()) if manifest.exists() else []
    for relative in set(previous) - files.keys():
        stale = (target / relative).resolve()
        if not stale.is_relative_to(target.resolve()):
            raise ValueError('Invalid engine source manifest path')
        stale.unlink(missing_ok=True)
    for relative, source in files.items():
        destination = target / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        if not destination.exists() or source.read_bytes() != destination.read_bytes():
            shutil.copy2(source, destination)
    manifest.write_text(json.dumps(sorted(files)) + '\n')
    shutil.copy2(ROOT / 'src/cof/menu/Main.cpp', target / '3rdparty/mainui/menus/Main.cpp')
    menu = original / '3rdparty/mainui/BaseMenu.cpp'
    text = menu.read_text()
    anchor = 'void UI_UpdateMenu( float flTime )\n{'
    if anchor not in text:
        raise ValueError('Unexpected MainUI update function')
    text = text.replace(anchor, 'extern void CofMenuTestFrame();\n' + anchor + '\n\tCofMenuTestFrame();')
    (target / '3rdparty/mainui/BaseMenu.cpp').write_text(text)
    # MainUI passes Unicode codepoints. Its ANSI GetGlyphOutline alias truncates
    # Cyrillic to low-byte Latin glyphs; use the explicit wide Windows API.
    font = original / '3rdparty/mainui/font/WinAPIFont.cpp'
    text = font.read_text()
    if text.count('::GetGlyphOutline(') != 2:
        raise ValueError('Unexpected MainUI Windows glyph renderer')
    text = text.replace('::GetGlyphOutline(', '::GetGlyphOutlineW(')
    # CoF's original VGUI2 uses positive pixel cell height and AA quality 4.
    # Keep MainUI's historical +6/proof metrics for its other dialogs.
    text = text.replace('m_iTall = tall + 6;',
                        'm_iTall = tall + ((flags & FONT_VGUI_EXACT) ? 0 : 6);')
    text = text.replace('PROOF_QUALITY, DEFAULT_PITCH',
                        '(flags & FONT_VGUI_EXACT) ? ANTIALIASED_QUALITY : PROOF_QUALITY, DEFAULT_PITCH')
    text = text.replace('bytesNeeded = ::GetGlyphOutlineW( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, 0, NULL, &mat2 );',
        'bytesNeeded = (m_iFlags & FONT_VGUI_EXACT) ? (ch <= 255 ? ::GetGlyphOutlineA( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, 0, NULL, &mat2 ) : 0) : ::GetGlyphOutlineW( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, 0, NULL, &mat2 );')
    text = text.replace('::GetGlyphOutlineW( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, bytesNeeded, lpbuf, &mat2 );',
        'if (m_iFlags & FONT_VGUI_EXACT) ::GetGlyphOutlineA( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, bytesNeeded, lpbuf, &mat2 );\n\t\telse ::GetGlyphOutlineW( m_hDC, ch, GGO_GRAY8_BITMAP, &glyphMetrics, bytesNeeded, lpbuf, &mat2 );')
    (target / '3rdparty/mainui/font/WinAPIFont.cpp').write_text(text)
    header = original / '3rdparty/mainui/font/FontRenderer.h'
    text = header.read_text().replace('FONT_STRIKEOUT = 1 << 2',
        'FONT_STRIKEOUT = 1 << 2,\n\tFONT_VGUI_EXACT = 1 << 3 // source-owned CoF menu metrics')
    (target / '3rdparty/mainui/font/FontRenderer.h').write_text(text)
    return target


if __name__ == '__main__':
    print(prepare())
