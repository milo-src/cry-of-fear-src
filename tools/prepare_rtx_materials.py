"""Attach source-owned PBR response and calmer water to the optional renderer."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    path = target / 'ref/gl/gl_opengl.c'
    text = path.read_text()
    anchor = 'static void TryBeginBatch( RgUtilImScratchTopology glbegin_topology )\n{'
    if text.count(anchor) != 1: raise ValueError('RTX material declaration hook changed')
    text = text.replace(anchor, '#include "rtx_materials.inc"\n\n' + anchor)
    anchor = '\t\tprim.pEditorInfo = &additional;'
    if text.count(anchor) != 1: raise ValueError('RTX brush material hook changed')
    text = text.replace(anchor, anchor + '\n\t\tCofRTBrushMaterial(&prim, &additional);')
    # Studio additive glow meshes must not enter the opaque shadow geometry.
    begin = text.index('else if( curtype == RT_BATCH_TYPE_STUDIO )')
    end = text.index('else if( curtype == RT_BATCH_TYPE_BRUSH )', begin)
    studio = text[begin:end]
    for anchor in ('( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |',
                   'ishologram ? alpha : 255',
                   'ishologram ? RT_CVAR_TO_FLOAT( rt_emis_hologram ) : 0.0f'):
        if studio.count(anchor) != 1: raise ValueError('RTX studio blend hook changed: '+anchor)
    studio = studio.replace('( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |',
        '( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |\n'
        '\t\t\t\t( rt_raster_blend && !hasinvis ? RG_MESH_PRIMITIVE_TRANSLUCENT : 0 ) |')
    studio = studio.replace('ishologram ? alpha : 255', 'ishologram || rt_raster_blend ? alpha : 255')
    studio = studio.replace('ishologram ? RT_CVAR_TO_FLOAT( rt_emis_hologram ) : 0.0f',
        'rt_raster_blend && rt_raster_additive ? .35f : ishologram ? RT_CVAR_TO_FLOAT( rt_emis_hologram ) : 0.0f')
    text = text[:begin] + studio + text[end:]
    path.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_materials.inc', target/'ref/gl/rtx_materials.inc')
    path = target / 'ref/gl/gl_rmain.c'
    text = path.read_text()
    for old, new in (
        ('.waterWaveSpeed          = METRIC_TO_QUAKEUNIT( 0.4f )',
         '.waterWaveSpeed          = METRIC_TO_QUAKEUNIT( 0.12f )'),
        ('.waterWaveTextureDerivativesMultiplier = 5,',
         '.waterWaveTextureDerivativesMultiplier = 3,'),
        ('.waterTextureAreaScale   = METRIC_TO_QUAKEUNIT( 1.0f )',
         '.waterTextureAreaScale   = METRIC_TO_QUAKEUNIT( 0.75f )'),
    ):
        if text.count(old) != 1: raise ValueError('RTX water hook changed: ' + old)
        text = text.replace(old, new)
    path.write_text(text)
