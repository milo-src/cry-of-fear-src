"""Apply source-owned lighting adaptations to the disposable engine copy."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def prepare_lighting(target):
    surf = target / 'ref/gl/gl_rsurf.c'
    text = surf.read_text()
    text = text.replace('#include "gl_local.h"', '#include "gl_local.h"\n#include "cof_lightmap.h"')
    anchor = '\t// add all the lightmaps\n\tfor( int map = 0; map < MAXLIGHTMAPS && surf->samples; map++ )'
    if text.count(anchor) != 1:
        raise ValueError('Unexpected static lightmap source')
    text = text.replace(anchor,
        '\t// CoF directional styles are ambient/diffuse/vector data, not additive RGB.\n'
        '\tif( !CofDirectionalLightmap( surf, size, r_blocklights ))\n' + anchor)
    surf.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/cof_lightmap.h', target/'ref/gl/cof_lightmap.h')
