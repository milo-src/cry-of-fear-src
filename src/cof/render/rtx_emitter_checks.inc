/* Opt-in evidence at the actual ray-tracing geometry upload boundary. */
static void CofRTCheckTracedEmitter(const RgMeshInfo *mesh, const RgMeshPrimitiveInfo *prim)
{
    if (!getenv("COF_RTX_LIGHTINGTEST") || !mesh->pMeshName ||
        !strstr(mesh->pMeshName,"hattlykta.mdl") || !prim->pTextureName ||
        !strstr(prim->pTextureName,"tex_fullbright")) return;
    static qboolean reported;
    if (reported) return;
    reported=true;
    gEngfuncs.Con_Printf("COF_RTX_TRACED_DIFFUSER traced=%d emission=%.2f attached=%d vertices=%u\n",
        !(prim->flags & RG_MESH_PRIMITIVE_TRANSLUCENT),prim->emissive,
        prim->pEditorInfo && prim->pEditorInfo->attachedLightExists,prim->vertexCount);
}
