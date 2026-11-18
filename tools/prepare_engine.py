"""Stage vendored Xash sources and source-owned CoF MainUI without editing external/."""
from pathlib import Path
import json
import shutil
from prepare_graphics import prepare_lighting
from prepare_vgui import prepare_vgui

ROOT = Path(__file__).resolve().parents[1]


def prepare(raytracing=False):
    original = ROOT / ('external/xash-rt' if raytracing else 'external/xash3d-fwgs')
    target = ROOT / ('build/engine-rtx-source' if raytracing else 'build/engine-source')
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
    if raytracing:
        # Reuse already-vendored dependency sources; keep fork build scripts.
        dependencies = ROOT / 'external/xash3d-fwgs/3rdparty'
        for source in dependencies.rglob('*'):
            if not source.is_file(): continue
            destination = target / '3rdparty' / source.relative_to(dependencies)
            if not destination.exists() or source.is_relative_to(dependencies / 'mainui'):
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(source, destination)
    menu_original = ROOT / 'external/xash3d-fwgs'
    shutil.copy2(ROOT / 'src/cof/menu/Main.cpp', target / '3rdparty/mainui/menus/Main.cpp')
    menu = menu_original / '3rdparty/mainui/BaseMenu.cpp'
    text = menu.read_text()
    anchor = 'void UI_UpdateMenu( float flTime )\n{'
    if anchor not in text:
        raise ValueError('Unexpected MainUI update function')
    text = text.replace(anchor, 'extern void CofMenuTestFrame();\n' + anchor + '\n\tCofMenuTestFrame();')
    (target / '3rdparty/mainui/BaseMenu.cpp').write_text(text)
    # MainUI passes Unicode codepoints. Its ANSI GetGlyphOutline alias truncates
    # Cyrillic to low-byte Latin glyphs; use the explicit wide Windows API.
    font = menu_original / '3rdparty/mainui/font/WinAPIFont.cpp'
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
    header = menu_original / '3rdparty/mainui/font/FontRenderer.h'
    text = header.read_text().replace('FONT_STRIKEOUT = 1 << 2',
        'FONT_STRIKEOUT = 1 << 2,\n\tFONT_VGUI_EXACT = 1 << 3 // source-owned CoF menu metrics')
    (target / '3rdparty/mainui/font/FontRenderer.h').write_text(text)
    if raytracing:
        # Path tracing supplies its own water, lighting and tonemapping.
        from prepare_rtx_input import prepare as prepare_rtx_input
        prepare_rtx_input(target)
        filesystem = target / 'engine/common/filesystem_engine.c'
        text = filesystem.read_text()
        start = text.index('#if XASH_RAYTRACING\n\t// use parent folder')
        end = text.index('\n\tFS_DetermineReadOnlyRootDirectory', start)
        filesystem.write_text(text[:start] + '\tCOM_StripDirectorySlash( rootdir );\n' + text[end:])
        render = target / 'ref/gl/gl_opengl.c'
        text = render.read_text()
        text = text.replace('\t\tRgInstanceCreateInfo info = {',
            '\t\tgEngfuncs.Cvar_SetValue("rt_framegen", 0); // no frame generation in CoF profiles\n\t\tRgInstanceCreateInfo info = {')
        text = text.replace('\t\tgEngfuncs.Con_Printf( "Ray tracing upscaling:',
            '\t\tCofRTProfile();\n\t\tgEngfuncs.Con_Printf( "Ray tracing upscaling:')
        anchor = '\t\tCofRTProfile();'
        profile = (ROOT / 'src/cof/render/rtx_profile.inc').read_text()
        text = text.replace(anchor, profile)
        render.write_text(text)
        from prepare_rtx_lighting import prepare as prepare_rtx_lighting
        prepare_rtx_lighting(target)
        from prepare_rtx_ui import prepare as prepare_rtx_ui
        prepare_rtx_ui(target)
        from prepare_rtx_materials import prepare as prepare_rtx_materials
        prepare_rtx_materials(target)
        from prepare_rtx_scene import prepare as prepare_rtx_scene
        prepare_rtx_scene(target)
        prepare_vgui(target)
        return target
    # Shader ports and renderer glue are owned by this repository. The pinned
    # engine remains untouched; Waf's ref/gl source glob picks up this C file.
    render = ROOT / 'src/cof/render'
    for name in ('gl_cof.c', 'gl_cof.h'):
        shutil.copy2(render / name, target / 'ref/gl' / name)
    shader_header = ['/* Generated from src/cof/render/shaders; do not edit. */']
    for name in ('water.vert', 'water.frag', 'black.vert', 'black.frag', 'desaturate.frag'):
        shader_header.append('static const char cof_' + name.replace('.', '_') + '[] =')
        shader_header.extend(json.dumps(line + '\n') for line in
                             (render / 'shaders' / name).read_text().splitlines())
        shader_header.append(';')
    (target / 'ref/gl/cof_shader_sources.h').write_text('\n'.join(shader_header) + '\n')
    for name, hooks in {
        'gl_opengl.c': [('\tR_InitImages();', '\tR_InitImages();\n\tCofRenderInit();'),
                        ('\tR_ShutdownImages();', '\tCofRenderShutdown();\n\tR_ShutdownImages();')],
        'gl_rmain.c': [('\t\tgEngfuncs.pfnDrawTransparentTriangles ();',
                         '\t\tgEngfuncs.pfnDrawTransparentTriangles ();\n\t\tCofRenderWater();'),
                        ('\tR_DrawWorld();', '\tCofRenderFog();\n\tR_DrawWorld();'),
                        ('\tR_DrawWaterSurfaces();', '\tR_DrawWaterSurfaces();\n\tCofRenderPostProcess();')],
    }.items():
        text = (original / 'ref/gl' / name).read_text()
        text = text.replace('#include "gl_local.h"', '#include "gl_local.h"\n#include "gl_cof.h"')
        for anchor, replacement in hooks:
            if text.count(anchor) != 1:
                raise ValueError(f'Unexpected CoF renderer hook in {name}: {anchor}')
            text = text.replace(anchor, replacement)
        (target / 'ref/gl' / name).write_text(text)
    prepare_lighting(target)
    prepare_vgui(target)
    return target


if __name__ == '__main__':
    print(prepare())
