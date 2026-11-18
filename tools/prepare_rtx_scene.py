"""Source-owned CoF scene adapters for RTGL; never rewrite game assets."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    shutil.copy2(ROOT/'src/cof/render/rtx_sky.h',target/'ref/gl/rtx_sky.h')
    path = target / 'ref/gl/gl_studio.c'
    text = path.read_text().replace('#include "gl_local.h"','#include "gl_local.h"\n#include "rtx_sky.h"')
    anchor = 'if( !bbox && R_CullModel( e, studio_mins, studio_maxs ))'
    if text.count(anchor) != 1: raise ValueError('RT sky bounds hook changed')
    text = text.replace(anchor,'if( !bbox && !CofRTIsSky(e) && R_CullModel( e, studio_mins, studio_maxs ))')
    shutil.copy2(ROOT/'src/cof/render/rtx_player_pose.inc',target/'ref/gl/rtx_player_pose.inc')
    anchor = 'static int R_StudioDrawPlayer( int flags, entity_state_t *pplayer )'
    if text.count(anchor) != 1: raise ValueError('RT player pose declaration hook changed')
    text = text.replace(anchor, '#include "rtx_player_pose.inc"\n\n'+anchor)
    anchor = '\tm_pPlayerInfo = pfnPlayerInfo( m_nPlayerIndex );\n\tR_StudioSetupBones( RI.currententity );'
    if text.count(anchor) != 1: raise ValueError('RT player pose hook changed')
    text = text.replace(anchor, anchor+'\n\tCofRTPlayerPose();')
    path.write_text(text)
    path = target / 'ref/gl/gl_opengl.c'
    text = path.read_text().replace('#include "gl_local.h"','#include "gl_local.h"\n#include "rtx_sky.h"')
    begin = text.index('else if( curtype == RT_BATCH_TYPE_STUDIO )')
    end = text.index('else if( curtype == RT_BATCH_TYPE_BRUSH )',begin)
    section = text[begin:end]
    anchor = '\t\tTryBeginBatch_Finalize( curtype, &mesh, &prim );'
    if section.count(anchor) != 1: raise ValueError('RT studio sky hook changed')
    section = section.replace(anchor, '''        if (CofRTIsSky(RI.currententity)) {
            CofRTSkyTransform(&mesh);
            prim.flags = RG_MESH_PRIMITIVE_SKY;
            float brightness = bound(0, gEngfuncs.pfnGetCvarFloat("skybrightvalue"), 1);
            prim.color = rgUtilPackColorFloat4D(brightness,brightness,brightness,1);
            prim.emissive = 0;
            static qboolean reportedSky;
            if (!reportedSky) {
                reportedSky = true;
                gEngfuncs.Con_DPrintf("COF_RTX_SKY_MODEL %s speed=%.1f\\n",RI.currentmodel->name,cof_rt_sky_speed);
            }
        }
'''+anchor)
    text = text[:begin]+section+text[end:]
    begin = text.index('else if( curtype == RT_BATCH_TYPE_RASTER )')
    end = text.index('else if( curtype == RT_BATCH_TYPE_STUDIO )',begin)
    section = text[begin:end]
    anchor = '\t\tTryBeginBatch_Finalize( curtype, &mesh, &prim );'
    if section.count(anchor) != 1: raise ValueError('RT weather material hook changed')
    section = section.replace(anchor, '''        // RTGL selects additive blending via emissive > FLT_EPSILON, but
        // also adds emissive * emissionMaxScreenColor after exposure.
        // Keep the native unlit additive pass without that extra light.
        // Xash names sprite frames #HUD/sprites/name(frame:00).spr.
        if (prim.pTextureName && (strstr(prim.pTextureName,"/snowflake(") ||
            strstr(prim.pTextureName,"/hi_rain(") || strstr(prim.pTextureName,"/waterring(") ||
            strstr(prim.pTextureName,"/wsplash_x("))) prim.emissive = .00001f;
'''+anchor)
    text = text[:begin]+section+text[end:]
    # Keep authored shading of moving cinematic set pieces. RTGL reserves
    # layer 1 for its raster lightmap mode, so the RT material uses layer 2.
    anchor = '.allowTexCoordLayer2        = false,'
    if text.count(anchor) != 1: raise ValueError('RT cinematic buffer hook changed')
    text = text.replace(anchor, '.allowTexCoordLayer2        = true,')
    for anchor, replacement in (
        ('.primaryRaysMaxAlbedoLayers          = 2,', '.primaryRaysMaxAlbedoLayers          = 3,'),
        ('.indirectIlluminationMaxAlbedoLayers = 1,', '.indirectIlluminationMaxAlbedoLayers = 3,'),
    ):
        if text.count(anchor) != 1: raise ValueError('RT cinematic layer limit changed')
        text = text.replace(anchor, replacement)
    anchor = '\t\tCofRTBrushMaterial(&prim, &additional);'
    if text.count(anchor) != 1: raise ValueError('RT cinematic brush hook changed')
    text = text.replace(anchor, anchor + '''
        // Preserve authored additive overlays without RTGL's screen glow.
        if (cof_rt_menu_scene && rt_raster_blend && rt_raster_additive)
            prim.emissive = .00001f;
        const msurface_t *cofSurface = rt_state.curBrushSurface >= 0 &&
            rt_state.curBrushSurface < RI.currentmodel->nummodelsurfaces ?
            &RI.currentmodel->surfaces[RI.currentmodel->firstmodelsurface + rt_state.curBrushSurface] : NULL;
        if (cof_rt_menu_scene && !immovable && !rt_raster_blend &&
            cofSurface && cofSurface->samples && !(cofSurface->flags & SURF_DRAWTILED) &&
            !rt_state.curBrushSurfaceIsWater && !rt_state.curBrushSurfaceIsSky &&
            rt_state.curLightmapTextureName && rt_state.curLightmapTextureName[0]) {
            additional.layer2Exists = true;
            additional.layer2 = additional.layer1;
        }
''')
    anchor = '\t\trgUtilImScratchSetToPrimitive( rg_instance, &rt_batch.primitive );'
    if text.count(anchor) != 1: raise ValueError('RT cinematic UV hook changed')
    text = text.replace(anchor, anchor + '''
        if (rt_batch.type == RT_BATCH_TYPE_BRUSH && rt_batch.additional.layer2Exists) {
            // Scratch owns these UVs until upload returns; do not retain them.
            rt_batch.additional.layer2.pTexCoord = rt_batch.additional.layer1.pTexCoord;
            if (!rt_batch.additional.layer2.pTexCoord)
                rt_batch.additional.layer2Exists = false;
        }
''')
    anchor = '\t\t// layer1 is lightmap'
    if text.count(anchor) != 1: raise ValueError('RT cinematic batch hook changed')
    text = text.replace(anchor, '''        if (a->layer2Exists != b->layer2Exists ||
            (a->layer2Exists && a->layer2.pTextureName != b->layer2.pTextureName))
            return false;
'''+anchor)
    text += '\nvoid CofRTFlushClientTriangles(void) { TryBeginBatch_Finalize(RT_BATCH_TYPE_NONE,NULL,NULL); }\n'
    path.write_text(text)
    path = target / 'ref/gl/gl_rsurf.c'
    text = path.read_text()
    anchor = 'void R_DrawBrushModel( cl_entity_t *e )\n{'
    if text.count(anchor) != 1: raise ValueError('RT water brush hook changed')
    text = text.replace(anchor, '#include "rtx_water.inc"\n\n'+anchor)
    anchor = '\tif( RT_IsBrushIgnored() )'
    if text.count(anchor) != 1: raise ValueError('RT water visibility hook changed')
    text = text.replace(anchor, '\tif (CofRTWaterVolume(e)) return;\n\n'+anchor)
    path.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_water.inc',target/'ref/gl/rtx_water.inc')
    path = target / 'ref/gl/gl_rmain.c'
    text = path.read_text()
    text = text.replace('#include "gl_local.h"','#include "gl_local.h"\n#include "rtx_sky.h"')
    text = text.replace('.skyColorMultiplier          = RT_CVAR_TO_FLOAT( rt_sky ),',
        '.skyColorMultiplier          = RT_CVAR_TO_FLOAT( rt_sky ) * cof_rt_sky_energy,')
    anchor = '\t\tRgDrawFrameSkyParams skyParams = {'
    if text.count(anchor) != 1: raise ValueError('RT scene color hook changed')
    text = text.replace(anchor, '''        // CoF BlackWhite is a scene effect; keep it out of HUD/menu artwork.
        // RTGL saturation is a tone-mapping adaptation, not the original Cg formula.
        float cofGray = bound(0, gEngfuncs.pfnGetCvarFloat("cof_blackwhite")/255.f, 1);
        for (int c=0;c<3;++c) tnmp_params.saturation.data[c] =
            tnmp_params.saturation.data[c]*(1-cofGray)-cofGray;
'''+anchor)
    anchor = '\t\tgEngfuncs.pfnDrawTransparentTriangles ();'
    if text.count(anchor) != 1: raise ValueError('RT client triangles hook changed')
    text = text.replace(anchor,
        '\t\t// Client TriangleAPI has world-space vertices, without a brush/studio owner.\n'
        '\t\tqboolean cofOldRaster = rt_state.curIsRasterized;\n'
        '\t\trt_state.curIsRasterized = true;\n'+anchor+
        '\n\t\textern void CofRTFlushClientTriangles(void);\n'
        '\t\tCofRTFlushClientTriangles(); // finish before restoring the classification\n'
        '\t\trt_state.curIsRasterized = cofOldRaster;')
    path.write_text(text)
