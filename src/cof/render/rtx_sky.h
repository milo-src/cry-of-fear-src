#pragma once
// CoF 10063780/1008cee0: eye - skyMarker - (eye-worldMarker)/speed.
// RT uses a sky mesh transform instead of glTranslate + a separate depth range.
extern float cof_rt_sky_origin[3], cof_rt_world_origin[3], cof_rt_sky_speed;
extern float cof_rt_sky_energy;
extern qboolean cof_rt_has_sky;
extern qboolean cof_rt_menu_scene;
static qboolean CofRTIsSky(const cl_entity_t *entity) {
    if (!entity || !cof_rt_has_sky) return false;
    int effect = entity->curstate.renderfx;
    return effect == 70 || effect == 137 || effect == 184;
}
static void CofRTSkyTransform(RgMeshInfo *mesh) {
    for (int i=0;i<3;++i)
        mesh->transform.matrix[i][3] += RI.rvp.vieworigin[i]-cof_rt_sky_origin[i]-
            (cof_rt_sky_speed != 0 ? (RI.rvp.vieworigin[i]-cof_rt_world_origin[i])/cof_rt_sky_speed : 0);
}
