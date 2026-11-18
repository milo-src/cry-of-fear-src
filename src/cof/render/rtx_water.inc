/* Native CoF 10086d10 selects CONTENTS_WATER entities and uses the networked
 * world bounds, even when their BSP texture is "black" rather than !water.
 * Replace that volume with the same top plane, represented as RT dielectric
 * geometry instead of the original framebuffer/Cg composition. */
extern qboolean cof_rt_menu_scene;
static qboolean CofRTWaterVolume(cl_entity_t *entity)
{
    if (entity->curstate.skin != CONTENTS_WATER ||
        gEngfuncs.pfnGetCvarFloat("cg_water") == 0) return false;
    const float *lo = entity->curstate.mins, *hi = entity->curstate.maxs;
    if (hi[0] <= lo[0] || hi[1] <= lo[1]) return false;
    RgPrimitiveVertex vertices[4] = {0};
    static const uint32_t indices[] = {0,1,2,0,2,3};
    for (int i=0;i<4;++i) {
        vertices[i].position[0] = i==1 || i==2 ? hi[0] : lo[0];
        vertices[i].position[1] = i>=2 ? hi[1] : lo[1];
        vertices[i].position[2] = hi[2];
        vertices[i].normal[2] = 1;
        vertices[i].texCoord[0] = vertices[i].position[0]/128.f;
        vertices[i].texCoord[1] = vertices[i].position[1]/128.f;
        vertices[i].color = rgUtilPackColorByte4D(255,255,255,255);
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
        .flags = RG_MESH_PRIMITIVE_WATER,
        .pVertices = vertices, .vertexCount = 4,
        .pIndices = indices, .indexCount = 6,
        .color = 0xffffffffu,
        .pEditorInfo = &material,
    };
    RG_CHECK(rgUploadMeshPrimitive(rg_instance, &mesh, &primitive));
    static qboolean reported;
    if (!reported) {
        reported = true;
        gEngfuncs.Con_DPrintf("COF_RTX_WATER_VOLUME entity=%d top=%.1f\n",entity->index,hi[2]);
    }
    entity->visframe = tr.realframecount;
    return true;
}
