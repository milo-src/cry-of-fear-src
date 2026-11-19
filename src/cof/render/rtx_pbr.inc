/* Optional authored numeric masks. The original upload is retained separately
 * for cinematic menus and unmodified render paths. Never replace albedo. */
typedef struct {
    const char *original, *alias;
    unsigned width, height, hash;
    qboolean ready, reported, verified;
} CofPbrEntry;
#include "rtx_pbr_catalog.inc"
#include "rtx_pbr_auto.inc"

static CofPbrEntry *CofRTPbrFind(const char *name)
{
    if (!name) return NULL;
    for (size_t i=0;i<sizeof(cof_pbr_entries)/sizeof(cof_pbr_entries[0]);++i)
        if (!Q_stricmp(name,cof_pbr_entries[i].original)) return &cof_pbr_entries[i];
    return NULL;
}

void CofRTPbrSource(const char *source,const char *key,const unsigned char *data,size_t size)
{
    CofPbrEntry *entry=CofRTPbrFind(key);
    if (!entry) return;
    entry->verified=false;
    unsigned char *owned=NULL;
    if (!data) {
        fs_offset_t length=0;
        owned=gEngfuncs.fsapi->LoadFileMalloc(source,&length,false);
        data=owned;size=length>0 ? (size_t)length : 0;
    }
    // Validate the raw mip before the engine applies texgamma/resampling.
    // This is identity evidence only; the renderer still uses its own albedo.
    if (data && size>=40) {
        unsigned info[6];memcpy(info,data+16,sizeof(info));
        unsigned w=info[0],h=info[1],base=info[2],last=info[5];
        size_t palette=(size_t)last+(w/8)*(h/8)+2;
        if (w==entry->width && h==entry->height && base>=40 &&
            (size_t)base+(size_t)w*h<=size && palette+768<=size &&
            data[palette-2]==0 && data[palette-1]==1) {
            unsigned hash=2166136261u;
            for (size_t i=0;i<(size_t)w*h;++i) {
                unsigned color=data[base+i];
                for (unsigned c=0;c<3;++c) hash=(hash^data[palette+color*3+c])*16777619u;
                hash=(hash^255u)*16777619u;
            }
            entry->verified=hash==entry->hash;
        }
    }
    free(owned);
}

static void CofRTPbrDelete(const char *name)
{
    CofAutoPbrDelete(name);
    CofPbrEntry *entry=CofRTPbrFind(name);
    if (!entry) return;
    if (entry->ready) {
        RgResult result=rgMarkOriginalTextureAsDeleted(rg_instance,entry->alias);
        RG_CHECK(result);
    }
    entry->ready=false;
    entry->reported=false;
    entry->verified=false;
}

static void CofRTPbrRegister(const RgOriginalTextureInfo *original)
{
    if (gEngfuncs.pfnGetCvarFloat("rt_material_masks")<=0) return;
    CofPbrEntry *entry=CofRTPbrFind(original->pTextureName);
    if (!entry) {CofAutoPbrRegister(original);return;}
    if (!entry->verified) {
        CofRTPbrDelete(original->pTextureName);
        gEngfuncs.Con_DPrintf("COF_RTX_PBR_SKIP %s source_identity_mismatch\n",entry->original);
        CofAutoPbrRegister(original);
        return;
    }
    RgOriginalTextureInfo alias=*original;
    alias.pTextureName=entry->alias;
    RgResult result=rgProvideOriginalTexture(rg_instance,&alias);
    RG_CHECK(result);
    entry->ready=(result==RG_RESULT_SUCCESS || result==RG_RESULT_SUCCESS_FOUND_TEXTURE);
    gEngfuncs.Con_DPrintf("COF_RTX_PBR_REGISTER %s ready=%d identity=%u\n",entry->alias,entry->ready,entry->hash);
}

static void CofRTPbrApply(RgMeshPrimitiveInfo *primitive, const RgEditorInfo *editor)
{
    if (cof_rt_menu_scene || gEngfuncs.pfnGetCvarFloat("rt_material_masks")<=0 ||
        primitive->emissive>0 || editor->attachedLightExists ||
        (primitive->flags&(RG_MESH_PRIMITIVE_WATER|RG_MESH_PRIMITIVE_SKY|
          RG_MESH_PRIMITIVE_SKY_VISIBILITY|RG_MESH_PRIMITIVE_TRANSLUCENT|RG_MESH_PRIMITIVE_ALPHA_TESTED))) return;
    CofPbrEntry *entry=CofRTPbrFind(primitive->pTextureName);
    if (!entry || !entry->ready) {
        CofAutoPbr *automatic=CofAutoPbrFind(primitive->pTextureName);
        if (!automatic || !automatic->ready) return;
        primitive->pTextureName=automatic->alias;
        if (!automatic->reported) {
            automatic->reported=true;
            gEngfuncs.Con_DPrintf("COF_RTX_PBR_AUTO_USE %s menu=0\n",automatic->original);
        }
        return;
    }
    primitive->pTextureName=entry->alias;
    if (!entry->reported) {
        entry->reported=true;
        gEngfuncs.Con_DPrintf("COF_RTX_PBR_USE %s menu=0\n",entry->alias);
    }
}
