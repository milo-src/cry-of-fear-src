"""Stable world-space light inputs for the temporal Vulkan renderer."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target):
    path = target/'ref/gl/gl_rlight.c'
    text = path.read_text()
    def replace(old, new):
        nonlocal text
        if text.count(old) != 1:
            raise ValueError('RTX light hook changed: '+old[:100])
        text = text.replace(old, new)
    replace('#include "ref_params.h"', '#include "ref_params.h"\n#include "rtx_light_identity.h"')
    replace('    float             spot_outer_cone_rad;', '    float             spot_outer_cone_rad;\n    float             fill_radius;')
    replace('        dst->is_spot     = is_spot;', '        dst->is_spot     = is_spot;\n        dst->fill_radius = 0;')
    # Baked-light fallback uses broad sources, real map lights retain their radius.
    start = text.index('void RT_UploadAllLights')
    end = text.index('    for( qboolean is_e_light', start)
    section = text[start:end]
    if section.count('METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) )') != 2:
        raise ValueError('RTX static light radius hooks changed')
    section = section.replace('METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) )',
        '(src->fill_radius > 0 ? src->fill_radius : METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ))')
    text = text[:start] + section + text[end:]
    start = text.index('void RT_ParseStaticLightEntities()')
    end = text.index('static qboolean IsPlayerFlashlight', start)
    text = text[:start] + '#include "rtx_map_lights.inc"\n\n' + text[end:]
    shutil.copy2(ROOT/'src/cof/render/rtx_map_lights.inc',target/'ref/gl/rtx_map_lights.inc')
    start = text.index('    static uint32_t rt_dlight_gen[')
    end = text.index('\nvoid RT_UploadAllLights', start)
    text = text[:start]+'''    static CofRTLightIdentity cof_dlight_ids[MAX_DLIGHTS];
    static CofRTLightIdentity cof_elight_ids[MAX_ELIGHTS];
'''+text[end:]
    # Off-screen sunlight still illuminates visible surfaces via reflection/GI.
    replace('if( g_lights.sun_exists && RI.isSkyVisible )', 'if( g_lights.sun_exists )')
    start = text.index('            if( !l || l->dark )', text.index('void RT_UploadAllLights'))
    end = text.index('            if( IsPlayerFlashlight( l ) )', start)
    text = text[:start]+'''            CofRTLightIdentity *identity = is_e_light ? &cof_elight_ids[i] : &cof_dlight_ids[i];
            int active = l && !l->dark && l->die >= gp_cl->time && l->radius > 0;
            uint64_t unique_id = CofRTLightId(identity, is_e_light ? 2 : 1, i,
                                              l ? l->key : 0, active, gp_cl->time);
            if (!active) continue;

'''+text[end:]
    start = text.index('                uint32_t* p_gen =')
    end = text.index('                RgSphericalLightUploadInfo info =', start)
    # Camera-relative offsets move emitters through walls and change shadows.
    text = text[:start]+text[end:]
    replace('.position  = RT_VEC3( light_pos ),', '.position  = RT_VEC3( l->origin ),')
    path.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_light_identity.h',target/'ref/gl/rtx_light_identity.h')
    # Keep an opt-in runtime regression check at the actual geometry boundary.
    path = target/'ref/gl/gl_opengl.c'
    text = path.read_text()
    text = text.replace('static void FlushBatch( void )', '#include "rtx_geometry_tests.inc"\n\nstatic void FlushBatch( void )')
    text = text.replace('RgResult r = rgUploadMeshPrimitive( rg_instance, &rt_batch.mesh, &rt_batch.primitive );',
        'CofRTCheckGeometry(&rt_batch.mesh, &rt_batch.primitive);\n\t\t\tRgResult r = rgUploadMeshPrimitive( rg_instance, &rt_batch.mesh, &rt_batch.primitive );')
    anchor = 'TryBeginBatch_Finalize( RT_BATCH_TYPE_NONE, NULL, NULL );\n\trt_2dstate_changed = true;'
    if text.count(anchor) != 1:raise ValueError('RTX frame-end geometry hook changed')
    text = text.replace(anchor,anchor+'\n\tCofRTCheckGeometryFrame();')
    path.write_text(text)
    shutil.copy2(ROOT/'tests/cof/render/rtx_geometry_tests.inc',target/'ref/gl/rtx_geometry_tests.inc')
    # Camera-dependent BSP traversal reorders triangles in texture batches.
    # RTGL1 matches their previous-frame vertices by mesh/primitive/index, so a
    # static wall then appears to move and its lighting history is reprojected
    # onto unrelated triangles. Keep batching (the backend has a 4096 geometry
    # limit), but make the world and transparent brush order deterministic.
    path = target/'ref/gl/gl_rsurf.c'
    text = path.read_text()
    anchor = 'int side = (dot >= 0.0f) ? 0 : 1;'
    if text.count(anchor) != 1:raise ValueError('RTX BSP traversal hook changed')
    text = text.replace(anchor, 'int side = 0; // CoF RT: stable triangle order across camera movement')
    anchor = '&& !gl_nosort.value )'
    if text.count(anchor) != 1:raise ValueError('RTX brush sorting hook changed')
    text = text.replace(anchor, '&& !gl_nosort.value && !XASH_RAYTRACING )')
    path.write_text(text)
