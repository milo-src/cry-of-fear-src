"""Attach source-owned PBR response and calmer water to the optional renderer."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    path = target / 'ref/gl/gl_opengl.c'
    text = path.read_text()
    anchor='static qboolean ArePrimitivesSame('
    if text.count(anchor)!=1:raise ValueError('RTX darkness declaration hook changed')
    text=text.replace(anchor,'#include "rtx_darkness.inc"\n\n'+anchor)
    anchor='\tassert( a_primitive && b_primitive );'
    if text.count(anchor)!=1:raise ValueError('RTX darkness batching hook changed')
    text=text.replace(anchor,anchor+'''
    // A procedural mask is indexed by world face, never by the current PVS.
    if (a_type==RT_BATCH_TYPE_BRUSH && b_type==RT_BATCH_TYPE_BRUSH &&
        CofDarkWorld(a_mesh) && CofDarkWorld(b_mesh) &&
        a_primitive->primitiveIndexInMesh!=b_primitive->primitiveIndexInMesh) return false;
''')
    anchor='\t\t\tRgResult r = rgUploadMeshPrimitive( rg_instance, &rt_batch.mesh, &rt_batch.primitive );'
    if text.count(anchor)!=1:raise ValueError('RTX darkness upload hook changed')
    text=text.replace(anchor,'''            RgFloat2D *cofDarkUV=rt_batch.type==RT_BATCH_TYPE_BRUSH ?
                CofRTDarknessAttach(&rt_batch.mesh,&rt_batch.primitive,&rt_batch.additional) : NULL;
'''+anchor+'''
            if (cofDarkUV) {
                free(cofDarkUV);
                rt_batch.additional.layer2Exists=false;
                rt_batch.additional.layer2.pTexCoord=NULL;
            }
''')
    shutil.copy2(ROOT/'src/cof/render/rtx_darkness.inc',target/'ref/gl/rtx_darkness.inc')
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
    anchor = '\t\tTryBeginBatch_Finalize( curtype, &mesh, &prim );'
    if studio.count(anchor) != 1: raise ValueError('RTX studio material hook changed')
    studio = studio.replace(anchor, '''        RgEditorInfo studioSurface = {0};
        if (!cof_rt_menu_scene && !rt_raster_blend && !hasinvis && !ishologram) {
            studioSurface.pbrInfoExists = true;
            studioSurface.pbrInfo.roughnessDefault = rt_alphatest ? .86f : .72f;
            studioSurface.pbrInfo.metallicDefault = 0;
            prim.pEditorInfo = &studioSurface;
        }
'''+anchor)
    text = text[:begin] + studio + text[end:]
    path.write_text(text)
    context=target/'ref/gl/gl_context.c'
    ctx=context.read_text()
    anchor='\tRT_ParseStaticLightEntities();'
    if ctx.count(anchor)!=1:raise ValueError('RTX darkness map reset hook changed')
    ctx=ctx.replace(anchor,anchor+'\n\textern void CofRTDarknessReset(void);\n\tCofRTDarknessReset();')
    context.write_text(ctx)
    shutil.copy2(ROOT/'src/cof/render/rtx_materials.inc', target/'ref/gl/rtx_materials.inc')
    shutil.copy2(ROOT/'src/cof/render/rtx_surface_types.inc', target/'ref/gl/rtx_surface_types.inc')
    path = target / 'ref/gl/gl_rmain.c'
    text = path.read_text()
    anchor = '\t\tRgDrawFrameTexturesParams texture_params = {'
    if text.count(anchor) != 1: raise ValueError('RTX atmosphere hook changed')
    text = text.replace(anchor, '#include "rtx_atmosphere.inc"\n'+anchor)
    shutil.copy2(ROOT/'src/cof/render/rtx_atmosphere.inc', target/'ref/gl/rtx_atmosphere.inc')
    shutil.copy2(ROOT/'src/cof/render/rtx_fog.inc', target/'ref/gl/rtx_fog.inc')
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
