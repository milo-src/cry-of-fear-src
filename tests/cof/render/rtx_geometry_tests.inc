/* Observe the actual tracer upload, including vertex order used for history. */
static unsigned cofGeometryFrame, cofGeometryChanges, cofGeometrySamples;
static void CofRTCheckGeometry(const RgMeshInfo *mesh, const RgMeshPrimitiveInfo *prim)
{
    static uint64_t hashes[65536];
    static unsigned seen[65536];
    if (!getenv("COF_RTX_MOTIONTEST") || mesh->uniqueObjectID != 0 ||
        prim->primitiveIndexInMesh >= 65536 || (prim->flags & RG_MESH_PRIMITIVE_WATER)) return;
    uint64_t hash = 14695981039346656037ull;
    for (unsigned i=0; i<prim->vertexCount; ++i) {
        const unsigned char *p = (const unsigned char*)prim->pVertices[i].position;
        for (unsigned j=0; j<12; ++j) hash = (hash ^ p[j]) * 1099511628211ull;
    }
    for (unsigned i=0; i<prim->indexCount; ++i) hash = (hash ^ prim->pIndices[i]) * 1099511628211ull;
    unsigned key = prim->primitiveIndexInMesh;
    if (seen[key] && hashes[key] != hash) {
        ++cofGeometryChanges;
        if (cofGeometryChanges <= 8)
            gEngfuncs.Con_Printf("COF_RTX_GEOMETRY_UNSTABLE frame=%u key=%u vertices=%u\n",cofGeometryFrame,key,prim->vertexCount);
    }
    hashes[key] = hash; seen[key] = 1; ++cofGeometrySamples;
}
static void CofRTCheckGeometryFrame(void)
{
    if (!getenv("COF_RTX_MOTIONTEST")) return;
    ++cofGeometryFrame;
    if (cofGeometryFrame % 30 == 0)
        gEngfuncs.Con_Printf("COF_RTX_GEOMETRY frames=%u samples=%u changed=%u\n",cofGeometryFrame,cofGeometrySamples,cofGeometryChanges);
}
