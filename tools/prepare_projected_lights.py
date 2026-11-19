"""Install the source-owned CoF projected receiver into the disposable GL renderer.

Requires prepare_flashlight's dlight_t fields. Never modifies external sources.
Shaders are embedded at build time, so deployment cannot accidentally use stale GLSL.
"""
import json
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def replace_once(text, old, new):
    if text.count(old) != 1:
        raise ValueError(f'Projected-light integration anchor mismatch: {old[:100]!r}')
    return text.replace(old, new)


def prepare_projected_lights(target):
    target = Path(target).resolve()
    if not target.is_relative_to((ROOT / 'build').resolve()):
        raise ValueError('Only disposable build source trees may be patched')
    destination = target / 'ref/gl'
    for name in ('gl_cof_projected.c', 'gl_cof_projected.h'):
        shutil.copy2(ROOT / 'src/cof/render' / name, destination / name)
    shader_header = ''
    for stage in ('vert', 'frag'):
        source = (ROOT / 'src/cof/render/shaders' / f'projected.{stage}').read_text()
        shader_header += f'static const char cof_projected_{stage}[] =\n'
        shader_header += '\n'.join(json.dumps(line + '\n') for line in source.splitlines()) + ';\n'
    (destination / 'cof_projected_shaders.h').write_text(shader_header)
    surf = destination / 'gl_rsurf.c'
    text = surf.read_text()
    text = replace_once(text, '#include "gl_local.h"', '#include "gl_local.h"\n#include "gl_cof_projected.h"')
    text = replace_once(text, '\tif( gl_polyoffset_bmodels.value )\n\t\tGL_PopPolygonOffset();\n\n\tR_DrawTriangleOutlines();',
        '\tCofProjectedDrawModel( clmodel, false, R_TextureAnimation );\n'
        '\tif( gl_polyoffset_bmodels.value )\n\t\tGL_PopPolygonOffset();\n\n\tR_DrawTriangleOutlines();')
    text = replace_once(text, '\t\tdlight_t *dl = &gp_dlights[lnum];\n\n\t\t// transform light origin to local bmodel space',
        '\t\tdlight_t *dl = &gp_dlights[lnum];\n'
        '\t\tif( dl->cof_kind ) continue; // Per-fragment projection owns this light.\n\n'
        '\t\t// transform light origin to local bmodel space')
    text = replace_once(text, '\t\tR_DrawTriangleOutlines();\n\n\t\tif( skychain )',
        '\t\tCofProjectedDrawModel( WORLDMODEL, true, R_TextureAnimation );\n'
        '\t\tR_DrawTriangleOutlines();\n\n\t\tif( skychain )')
    surf.write_text(text)
    opengl = destination / 'gl_opengl.c'
    text = opengl.read_text()
    text = replace_once(text, '#include "gl_local.h"', '#include "gl_local.h"\n#include "gl_cof_projected.h"')
    text = replace_once(text, '\tR_ShutdownImages();',
        '\tCofProjectedShutdown();\n\tR_ShutdownImages();')
    opengl.write_text(text)
    context = destination / 'gl_context.c'
    text = context.read_text()
    text = replace_once(text, '#include "gl_local.h"', '#include "gl_local.h"\n#include "gl_cof_projected.h"')
    text = replace_once(text, 'static void R_NewMap( void )\n{',
        'static void R_NewMap( void )\n{\n\tCofProjectedNewMap();')
    context.write_text(text)
    studio = destination / 'gl_studio.c'
    text = studio.read_text()
    anchor = '\tif( ptexture->flags & STUDIO_NF_NORMALMAP )'
    text = replace_once(text, anchor, '''    // CoF phone skins use a name convention, not STUDIO_NF_FULLBRIGHT.
    // Change only the in-memory material; never rewrite the original MDL.
    if( !Q_stricmp(mod->name,"models/weapons/mobile/v_mobile.mdl") &&
        Q_stristr(ptexture->name,"fullbright") ) {
        ptexture->flags |= STUDIO_NF_FULLBRIGHT;
        if(getenv("COF_PHONE_LIGHTTEST"))
            gEngfuncs.Con_Printf("COF_PHONE_FULLBRIGHT texture=%s flags=%d\\n",ptexture->name,ptexture->flags);
    }
'''+anchor)
    studio.write_text(text)
    # The old model-origin sampler treats every dlight as a sphere. A projected
    # receiver must not flood all studio models (especially the held phone).
    # Studio triangle projection is a separately documented remaining pass.
    light = target / 'ref/common/ref_light.c'
    text = light.read_text()
    text = replace_once(text, '\t\tconst dlight_t *dl = &gp_dlights[lnum];\n\n\t\tif( dl->die < time',
        '\t\tconst dlight_t *dl = &gp_dlights[lnum];\n'
        '\t\tif( dl->cof_kind ) continue; // Do not approximate a projection by a sphere.\n\n'
        '\t\tif( dl->die < time')
    light.write_text(text)
