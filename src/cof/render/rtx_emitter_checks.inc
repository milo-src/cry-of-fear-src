/* Opt-in evidence at the actual ray-tracing geometry upload boundary. */
static void CofRTCheckTracedEmitter(const RgMeshInfo *mesh, const RgMeshPrimitiveInfo *prim)
{
    if (getenv("COF_RTX_LIGHTINGTEST") && mesh->pMeshName &&
        Q_stristr(mesh->pMeshName,"models/Props/Fordon/") && prim->pEditorInfo && prim->vertexCount) {
        static unsigned vehicles;
        qboolean mirror=!prim->pTextureName && prim->pEditorInfo->pbrInfo.metallicDefault==1.0f &&
            prim->pEditorInfo->pbrInfo.roughnessDefault==.075f;
        qboolean mask=prim->pTextureName && !Q_strncmp(prim->pTextureName,"cof_pbr/vehicle_",16);
        unsigned bit=mirror?1:mask?2:0;
        if (bit && !(vehicles&bit)) {
            vehicles|=bit;
            gEngfuncs.Con_Printf("COF_RTX_VEHICLE_UPLOAD mirror=%d masks=%d traced=%d vertices=%u menu=%d\n",
                mirror,mask,!(prim->flags&RG_MESH_PRIMITIVE_TRANSLUCENT),prim->vertexCount,cof_rt_menu_scene);
        }
    }
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
