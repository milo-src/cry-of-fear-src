"""Install native attached-light parameters into disposable engine sources."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]

def prepare(target, raytracing=False):
    target=Path(target).resolve()
    if not target.is_relative_to((ROOT/'build').resolve()):
        raise ValueError('Attached light patch requires disposable build tree')
    header=target/'common/q_client.h'
    text=header.read_text()
    fields='''
    /* Internal engine/renderer extension; public SDK prefix stays unchanged. */
    int cof_kind;
    float cof_fov[2], cof_rgb[3];
    vec3_t cof_forward, cof_right, cof_up;
'''
    anchor='} dlight_t;'
    if text.count(anchor)!=1:raise ValueError('dlight layout changed')
    text=text.replace(anchor,fields+anchor)
    old=40 if raytracing else 64
    anchor=f'STATIC_CHECK_SIZEOF( dlight_t, {old}, {old} );'
    if text.count(anchor)!=1:raise ValueError('dlight size check changed')
    text=text.replace(anchor,f'STATIC_CHECK_SIZEOF( dlight_t, {old+60}, {old+60} );')
    header.write_text(text)
    tent=target/'engine/client/cl_tent.c';text=tent.read_text()
    start=text.index('static void CL_UpdateFlashlight( cl_entity_t *ent )')
    end=text.index('\nstatic void R_EntityDimlight',start)
    text=text[:start]+'#include "cof_attached_lights.inc"\n'+text[end:]
    tent.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/cof_attached_lights.inc',tent.parent/'cof_attached_lights.inc')
    if raytracing:
        light=target/'ref/gl/gl_rlight.c';text=light.read_text()
        anchor='            if( IsPlayerFlashlight( l ) )'
        if text.count(anchor)!=1:raise ValueError('RTX attached-light upload hook changed')
        text=text.replace(anchor,'''            if( l->cof_kind )
            {
                /* Native world receiver ignores stored light RGB and uses the
                 * colored cookie. RTGL1 spot API has no cookie: retain centre
                 * hue and relative peak as an explicit photometric adapter. */
                const float maskColors[2][3]={{86,99,105},{162,158,137}};
                const float* color=maskColors[l->cof_kind==1?0:1];
                const float peak=max(color[0],max(color[1],color[2]));
                RgSpotLightUploadInfo info = {
                    .uniqueID = unique_id,
                    .isExportable = false,
                    .color = rgUtilPackColorByte4D((uint8_t)(255*color[0]/peak),
                              (uint8_t)(255*color[1]/peak),(uint8_t)(255*color[2]/peak),255),
                    .intensity = RT_CVAR_TO_FLOAT(rt_flsh)*peak/162.f,
                    .position = RT_VEC3(l->origin),
                    .direction = RT_VEC3(l->cof_forward),
                    .radius = METRIC_TO_QUAKEUNIT(RT_CVAR_TO_FLOAT(rt_flsh_radius)),
                    .angleOuter = DEG2RAD(l->cof_fov[0]*.5f),
                    .angleInner = DEG2RAD(l->cof_fov[0]*.175f),
                };
                RG_CHECK(rgUploadSpotLight(rg_instance,&info));
                /* Keep the phone as the local self-light exclusion source in
                 * a dual-hand pair; later tactical uploads must not replace it. */
                if(l->cof_kind==1 || rt_state.flashlight_uniqueid==RT_ID_LIGHTNONE)
                    rt_state.flashlight_uniqueid=info.uniqueID;
                if(getenv("COF_PROJECTEDTEST")) {
                    static int reported;
                    if(!(reported&(1<<l->cof_kind))) {
                        gEngfuncs.Con_Printf("COF_PROJECTED_RT kind=%d fov=%g intensity=%g\\n",l->cof_kind,l->cof_fov[0],info.intensity);
                        reported|=1<<l->cof_kind;
                    }
                }
                continue;
            }
'''+anchor)
        light.write_text(text)
