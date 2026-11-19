"""Attach source-owned PBR response and calmer water to the optional renderer."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    path = target / 'ref/gl/gl_opengl.c'
    text = path.read_text()
    anchor='static qboolean ArePrimitivesSame('
    if text.count(anchor)!=1:raise ValueError('RTX darkness declaration hook changed')
    text=text.replace(anchor,'#include "rtx_darkness.inc"\n#include "rtx_wetness.inc"\n\n'+anchor)
    anchor='\t\t\trt_perf.c_uploads++;'
    if text.count(anchor)!=1:raise ValueError('RTX darkness atlas upload hook changed')
    text=text.replace(anchor,anchor+'\n            CofRTDarknessFlush(&rt_batch.primitive,&rt_batch.additional);\n            CofRTWetnessFlush(&rt_batch.primitive,&rt_batch.additional);')
    anchor='\trgUtilImScratchClear( rg_instance );'
    if text.count(anchor)!=1:raise ValueError('RTX darkness atlas clear hook changed')
    text=text.replace(anchor,anchor+'\n    cof_dark_uv_count=0; cof_dark_uv_failed=false; cof_wet_uv_count=0; cof_wet_failed=false;')
    anchor='static void TryBeginBatch( RgUtilImScratchTopology glbegin_topology );'
    if text.count(anchor)!=1:raise ValueError('RTX darkness vertex declaration hook changed')
    text=text.replace(anchor, 'void CofRTDarknessVertex(float x, float y, float z);\nvoid CofRTWetnessVertex(float x,float y,float z);\n'+anchor)
    for vertex, coords in (
        ('rgUtilImScratchVertex( rg_instance, x, y, z );', 'x,y,z'),
        ('rgUtilImScratchVertex( rg_instance, v[ 0 ], v[ 1 ], v[ 2 ] );', 'v[0],v[1],v[2]'),
        ('rgUtilImScratchVertex( rg_instance, x, y, 0.0f );', 'x,y,0'),
    ):
        if text.count(vertex)!=1:raise ValueError('RTX darkness vertex hook changed')
        text=text.replace(vertex,'CofRTDarknessVertex('+coords+'); CofRTWetnessVertex('+coords+');\n\t'+vertex)
    shutil.copy2(ROOT/'src/cof/render/rtx_darkness.inc',target/'ref/gl/rtx_darkness.inc')
    shutil.copy2(ROOT/'src/cof/render/rtx_wetness.inc',target/'ref/gl/rtx_wetness.inc')
    anchor = 'static void TryBeginBatch( RgUtilImScratchTopology glbegin_topology )\n{'
    if text.count(anchor) != 1: raise ValueError('RTX material declaration hook changed')
    text = text.replace(anchor, '#include "rtx_materials.inc"\n#include "rtx_pbr.inc"\n\n' + anchor + '\n    cof_dark_current=NULL; cof_wet_current=NULL;')
    anchor = '\t\tprim.pEditorInfo = &additional;'
    if text.count(anchor) != 1: raise ValueError('RTX brush material hook changed')
    text = text.replace(anchor, anchor + '\n\t\tCofRTBrushMaterial(&prim, &additional);\n\t\tCofRTPbrApply(&prim,&additional);\n\t\tCofRTDarknessBegin(&mesh,&prim,&additional);\n        CofRTWetnessBegin(&mesh,&prim,&additional);')
    anchor='void pglDeleteTextures( const char* texturename )\n{'
    if text.count(anchor)!=1:raise ValueError('RTX PBR deletion hook changed')
    text=text.replace(anchor,'static void CofRTPbrDelete(const char *name);\n'+anchor+'\n    CofRTPbrDelete(texturename);')
    anchor='RgResult r = rgProvideOriginalTexture( rg_instance, &info );'
    if text.count(anchor)!=1:raise ValueError('RTX PBR original upload hook changed')
    text=text.replace(anchor,anchor+'\n                if (r==RG_RESULT_SUCCESS || r==RG_RESULT_SUCCESS_FOUND_TEXTURE) CofRTPbrRegister(&info);')
    shutil.copy2(ROOT/'src/cof/render/rtx_pbr.inc',target/'ref/gl/rtx_pbr.inc')
    shutil.copy2(ROOT/'src/cof/render/rtx_pbr_auto.inc',target/'ref/gl/rtx_pbr_auto.inc')
    shutil.copy2(ROOT/'build/rtx-materials/rtx_pbr_catalog.inc',target/'ref/gl/rtx_pbr_catalog.inc')
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
    image_path=target/'ref/gl/gl_image.c'
    image_text=image_path.read_text()
    for function,next_function,call in (
        ('int GL_LoadTexture( ', 'int GL_LoadTextureArray(', 'CofRTPbrSource(name,tex->name,buf,size);'),
        ('int GL_LoadTextureFromBuffer(', 'int GL_CreateTexture(', 'CofRTPbrSource(name,tex->name,NULL,0);'),
    ):
        start=image_text.index(function);end=image_text.index(next_function,start)
        part=image_text[start:end]
        anchor='\tGL_ProcessImage( tex, pic );'
        if part.count(anchor)!=1:raise ValueError('RTX raw material identity hook changed')
        part=part.replace(anchor,'\textern void CofRTPbrSource(const char*,const char*,const unsigned char*,size_t);\n\t'+call+'\n'+anchor)
        image_text=image_text[:start]+part+image_text[end:]
    image_path.write_text(image_text)
    surfaces=target/'ref/gl/gl_rsurf.c'
    surf=surfaces.read_text()
    anchor='\t\trgUtilImScratchPushVertices( rg_instance, p->numverts,'
    if surf.count(anchor)!=1:raise ValueError('RTX darkness bulk vertex hook changed')
    surf=surf.replace(anchor,'''        extern void CofRTDarknessVertex(float x, float y, float z);
        extern void CofRTWetnessVertex(float,float,float);
        for (int i=0;i<p->numverts;++i) {
            CofRTDarknessVertex(p->verts[i][0],p->verts[i][1],p->verts[i][2]);
            CofRTWetnessVertex(p->verts[i][0],p->verts[i][1],p->verts[i][2]);
        }
'''+anchor)
    surfaces.write_text(surf)
    context=target/'ref/gl/gl_context.c'
    ctx=context.read_text()
    anchor='\tRT_ParseStaticLightEntities();'
    if ctx.count(anchor)!=1:raise ValueError('RTX darkness map reset hook changed')
    ctx=ctx.replace(anchor,anchor+'\n\textern void CofRTDarknessReset(void);\n\tCofRTDarknessReset();\n    extern void CofRTWetnessReset(void); CofRTWetnessReset();')
    context.write_text(ctx)
    shutil.copy2(ROOT/'src/cof/render/rtx_materials.inc', target/'ref/gl/rtx_materials.inc')
    shutil.copy2(ROOT/'src/cof/render/rtx_surface_types.inc', target/'ref/gl/rtx_surface_types.inc')
    path = target / 'ref/gl/gl_rmain.c'
    text = path.read_text()
    anchor = '\t\tRgDrawFrameTexturesParams texture_params = {'
    if text.count(anchor) != 1: raise ValueError('RTX atmosphere hook changed')
    text = text.replace(anchor, '#include "rtx_atmosphere.inc"\n'+anchor)
    anchor = '\t\tRgPostEffectTeleport teleport_effect = {'
    if text.count(anchor) != 1: raise ValueError('RTX lens effect hook changed')
    text = text.replace(anchor, '#include "rtx_lens.inc"\n'+anchor)
    shutil.copy2(ROOT/'src/cof/render/rtx_lens.inc', target/'ref/gl/rtx_lens.inc')
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
