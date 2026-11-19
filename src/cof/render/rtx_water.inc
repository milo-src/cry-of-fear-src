/* Native CoF 10086d10 selects CONTENTS_WATER entities and uses the networked
 * world bounds, even when their BSP texture is "black" rather than !water.
 * Replace that volume with the same top plane, represented as RT dielectric
 * geometry instead of the original framebuffer/Cg composition. */
extern qboolean cof_rt_menu_scene;
qboolean CofRTIsWaterVolume(const cl_entity_t *entity)
{
    return entity && entity->model && entity->model->type == mod_brush &&
        entity->curstate.skin == CONTENTS_WATER &&
        gEngfuncs.pfnGetCvarFloat("cg_water") != 0 &&
        entity->curstate.maxs[0] > entity->curstate.mins[0] &&
        entity->curstate.maxs[1] > entity->curstate.mins[1];
}

static qboolean CofRTWaterVolume(cl_entity_t *entity)
{
    if (!CofRTIsWaterVolume(entity)) return false;
    const float *lo = entity->curstate.mins, *hi = entity->curstate.maxs;
    if (hi[0] <= lo[0] || hi[1] <= lo[1]) return false;
    // Fixed topology and world-anchored phases keep temporal correspondence
    // stable while a broad swell bends reflections. RTGL adds the fine ripples.
    // The cinematic river retains its calibrated original four-vertex surface.
    enum { GRID=12, MAX_VERTICES=(GRID+1)*(GRID+1), MAX_INDICES=GRID*GRID*6 };
    RgPrimitiveVertex vertices[MAX_VERTICES] = {0};
    uint32_t indices[MAX_INDICES];
    const int cells=cof_rt_menu_scene ? 1 : GRID;
    const int stride=cells+1;
    int indexCount=0;
    const double time=gp_cl->time;
    for (int y=0;y<=cells;++y) for (int x=0;x<=cells;++x) {
        RgPrimitiveVertex* v=&vertices[y*stride+x];
        v->position[0]=lo[0]+(hi[0]-lo[0])*x/cells;
        v->position[1]=lo[1]+(hi[1]-lo[1])*y/cells;
        v->position[2]=hi[2];
        v->normal[2]=1;
        if (!cof_rt_menu_scene) {
            const double a=v->position[0]*.012+v->position[1]*.007-time*.65;
            const double b=v->position[0]*-.006+v->position[1]*.015-time*.41;
            v->normal[0]=.055f*cos(a)-.025f*cos(b);
            v->normal[1]=.032f*cos(a)+.048f*cos(b);
            const float inverse=1.f/sqrtf(v->normal[0]*v->normal[0]+v->normal[1]*v->normal[1]+1);
            for (int axis=0;axis<3;++axis) v->normal[axis]*=inverse;
        }
        v->texCoord[0]=v->position[0]/128.f;
        v->texCoord[1]=v->position[1]/128.f;
        v->color=0xffffffffu;
        if (x<cells && y<cells) {
            const uint32_t i=y*stride+x;
            indices[indexCount++]=i; indices[indexCount++]=i+1; indices[indexCount++]=i+stride+1;
            indices[indexCount++]=i; indices[indexCount++]=i+stride+1; indices[indexCount++]=i+stride;
        }
    }
    RgMeshInfo mesh = {
        .uniqueObjectID = entity->index,
        .pMeshName = entity->model->name,
        .transform = RG_TRANSFORM_IDENTITY,
        .isExportable = false,
    };
    RgEditorInfo material = {
        .waterReflectivityExists = true,
        .waterReflectivity = 1.f,
        .waterColorExists = true,
        .waterColor = {{.12f,.20f,.18f}},
        .waterDensityExists = true,
        .waterDensity = 1.4f,
    };
    // The native cinematic water has no authored green tint. RTGL couples
    // transmission to an unlit in-scattering term; bright transmission makes
    // the night river glow even with all lights disabled. For menu scenery,
    // neutral deep absorption leaves the reflected scene as the light source.
    // This does not alter the transmission of playable underwater volumes.
    if (cof_rt_menu_scene) material.waterColor = (RgFloat3D){{.0001f,.0001f,.0001f}};
    RgMeshPrimitiveInfo primitive = {
        .pPrimitiveNameInMesh = "cof_water_surface",
        .primitiveIndexInMesh = 0,
        .flags = RG_MESH_PRIMITIVE_WATER | (cof_rt_menu_scene ? 0 : RG_MESH_PRIMITIVE_DONT_GENERATE_NORMALS),
        .pVertices = vertices, .vertexCount = stride*stride,
        .pIndices = indices, .indexCount = indexCount,
        .color = 0xffffffffu,
        .pEditorInfo = &material,
    };
    RG_CHECK(rgUploadMeshPrimitive(rg_instance, &mesh, &primitive));
    static int reported[32], reportedCount;
    qboolean seen=false;
    for (int i=0;i<reportedCount;++i) if (reported[i]==entity->index) seen=true;
    if (!seen && reportedCount<32) {
        reported[reportedCount++]=entity->index;
        gEngfuncs.Con_DPrintf("COF_RTX_WATER_VOLUME entity=%d top=%.1f cells=%d alpha=%d model=%s\n",
            entity->index,hi[2],cells,entity->curstate.renderamt,entity->model->name);
    }
    entity->visframe = tr.realframecount;
    return true;
}
