/* Material response from the game's existing footstep surface table.
 * This is an RT adaptation, not recovered PBR data. Never changes image data.
 * Unknown surfaces stay matte; an acoustic metal tag does not imply bare metal. */
typedef struct { char name[64]; char type; } CofRTSurfaceType;
static CofRTSurfaceType cof_surface_types[4096];
static int cof_surface_count;
static int CofRTSurfaceCompare(const void *a, const void *b)
{
    return Q_stricmp(((const CofRTSurfaceType*)a)->name, ((const CofRTSurfaceType*)b)->name);
}
void CofRTLoadSurfaceTypes(void)
{
    cof_surface_count=0;
    fs_offset_t size=0;
    char *data=(char*)gEngfuncs.fsapi->LoadFileMalloc("sound/materials.txt",&size,false);
    if (!data) return;
    for (char *line=data; line<data+size && cof_surface_count<4096;) {
        char *end=line;
        while (end<data+size && *end!='\n' && *end!='\r') ++end;
        char saved=*end; *end=0;
        char kind[8],name[64];
        if (sscanf(line,"%7s %63s",kind,name)==2 && kind[1]==0 &&
            strchr("CMDVGT SWFZUIOPYHRB",kind[0]) && kind[0]!=' ') {
            CofRTSurfaceType *entry=&cof_surface_types[cof_surface_count++];
            Q_strncpy(entry->name,name,sizeof(entry->name)); entry->type=kind[0];
        }
        *end=saved;
        line=end+1;
    }
    free(data);
    qsort(cof_surface_types,cof_surface_count,sizeof(cof_surface_types[0]),CofRTSurfaceCompare);
    gEngfuncs.Con_DPrintf("COF_RTX_SURFACES loaded=%d\n",cof_surface_count);
}
static char CofRTSurfaceTypeFor(const char *name)
{
    // GoldSrc animation/masking prefixes are not part of the footstep name.
    if ((*name=='+' || *name=='-') && name[1]) name+=2;
    if (*name=='{' || *name=='!' || *name=='~' || *name==' ') ++name;
    CofRTSurfaceType key;
    Q_strncpy(key.name,name,sizeof(key.name));
    const CofRTSurfaceType *found=bsearch(&key,cof_surface_types,cof_surface_count,
        sizeof(cof_surface_types[0]),CofRTSurfaceCompare);
    return found ? found->type : 0;
}
static void CofRTSurfaceResponse(RgEditorInfo *editor,const char *name)
{
    float roughness=.84f;
    switch (CofRTSurfaceTypeFor(name)) {
    case 'C': roughness=.86f; break; // Concrete remains diffuse, with broad highlights.
    case 'M': case 'V': case 'G': roughness=.44f; break;
    case 'T': roughness=.32f; break;
    case 'Y': roughness=.20f; break; // Reflective coating; no invented transparency.
    case 'W': roughness=.68f; break;
    case 'I': case 'S': roughness=.50f; break;
    case 'D': case 'U': case 'O': case 'R': case 'B': roughness=.94f; break;
    case 'H': case 'Z': case 'F': roughness=.96f; break;
    default: break;
    }
    editor->pbrInfoExists=true;
    editor->pbrInfo.roughnessDefault=roughness;
    editor->pbrInfo.metallicDefault=0;
}
