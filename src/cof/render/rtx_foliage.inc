#include "rtx_foliage_mesh.h"
// At most 4096 source triangles per batch, 3 MiB fixed scratch. Oversized
// custom/replacement assets retain their original mesh, never partial output.
static RgPrimitiveVertex cof_leaf_vertices[49152];
static void CofRTFoliageFlush(RgMeshPrimitiveInfo *primitive)
{
    if(cof_rt_menu_scene || !primitive->pTextureName ||
       !(primitive->flags & RG_MESH_PRIMITIVE_ALPHA_TESTED) ||
       gEngfuncs.pfnGetCvarFloat("rt_foliage")<=0 ||
       gEngfuncs.pfnGetCvarFloat("rt_material_masks")<=0)return;
    for(size_t i=0;i<sizeof(cof_pbr_entries)/sizeof(cof_pbr_entries[0]);++i)
    {
        CofPbrEntry *entry=&cof_pbr_entries[i];
        if(!entry->foliage || !entry->ready || !entry->verified || Q_stricmp(primitive->pTextureName,entry->alias))continue;
        unsigned count=CofLeafSubdivide(primitive->pVertices,primitive->vertexCount,
            primitive->pIndices,primitive->indexCount,cof_leaf_vertices,49152);
        if(!count)return;
        static qboolean reported[sizeof(cof_pbr_entries)/sizeof(cof_pbr_entries[0])];
        if(!reported[i]){
            reported[i]=true;
            gEngfuncs.Con_DPrintf("COF_RTX_FOLIAGE %s triangles=%u curved=%u alpha_preserved=1\n",entry->alias,count/12,count/3);
        }
        primitive->pVertices=cof_leaf_vertices;primitive->vertexCount=count;
        primitive->pIndices=NULL;primitive->indexCount=0;
        return;
    }
}
