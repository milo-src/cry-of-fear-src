/* CoF RT material response. Original images, BSPs and UI art remain untouched.
 * Explicit names avoid turning painted walls, window frames or wood into metal.
 * These are artistic RT adaptations, not recovered original shader constants. */
extern void CofRTTexlightMaterial(RgMeshPrimitiveInfo*, RgEditorInfo*, const char*);
static void CofRTBrushMaterial(RgMeshPrimitiveInfo *primitive, RgEditorInfo *editor)
{
    static struct { const char *name; float roughness, metallic; qboolean reported; } materials[] = {
        {"r_toalettkakel", .30f, 0}, {"c_koksgolv", .35f, 0},
        {"c_koksgolv3", .35f, 0}, {"c2_koksgolv2", .35f, 0},
        {"c2_koksgolv4", .35f, 0}, {"c2_kakelblue", .28f, 0},
        {"c2_toakakel1", .30f, 0}, {"c2_tileflr2", .36f, 0},
        {"c2_tileflr4", .36f, 0}, {"c2_walltile1", .30f, 0},
        {"c2_walltile3", .30f, 0}, {"c2_walltile4", .30f, 0},
        {"c2_hogvagg1", .34f, 0}, {"c2_hogvagg2", .34f, 0},
        {"c2_hogvagg2b", .34f, 0}, {"c2_hoggolv1", .40f, 0},
        {"c2_hoggolv1b", .40f, 0}, {"c2_hogtrappaf1", .44f, 0},
        {"c_blurmetal", .26f, .85f}, {"c_blurmetalbig", .26f, .85f},
        {"c_drkmetal", .35f, .75f}, {"c_drkrstmetal", .55f, .35f},
        {"c_metalistsick1", .32f, .70f}, {"c_metallist", .30f, .80f},
        {"c_rstpipe", .53f, .35f}, {"c_stupror", .38f, .65f},
        {"c_toaror", .28f, .80f}, {"c2_drkmetal", .38f, .70f},
        {"c2_rstmetal", .55f, .35f}, {"c2_kokmetalo", .30f, .80f},
        {"c2_hissf", .40f, .65f}, {"{c2_hissgaller", .40f, .70f},
        {"{c2_hogblafence", .45f, .45f},
    };
    char name[256];
    const char *texture = primitive->pTextureName;
    if (!texture) return;
    if (!Q_strncmp(texture, "#maps/", 6)) texture += 6;
    if (!Q_strncmp(texture, "*rippletex_", 11)) texture += 11;
    Q_strncpy(name, texture, sizeof(name));
    size_t length = strlen(name);
    if (length > 4 && !Q_stricmp(name + length - 4, ".mip")) name[length - 4] = 0;
    if (primitive->flags & RG_MESH_PRIMITIVE_WATER) {
        // Dielectric Fresnel remains physical: reflections strengthen at grazing
        // angles while depth absorption reveals shallow submerged geometry.
        editor->waterReflectivityExists = true;
        editor->waterReflectivity = 1.0f;
        if (!Q_stricmp(name, "!sewage")) {
            editor->waterColorExists = true;
            editor->waterColor = (RgFloat3D){.60f, .70f, .61f};
            editor->waterDensityExists = true;
            editor->waterDensity = .85f;
        }
        return;
    }
    CofRTTexlightMaterial(primitive,editor,name);
    for (size_t i = 0; i < sizeof(materials)/sizeof(materials[0]); ++i) {
        if (Q_stricmp(name, materials[i].name)) continue;
        editor->pbrInfoExists = true;
        editor->pbrInfo.roughnessDefault = materials[i].roughness;
        editor->pbrInfo.metallicDefault = materials[i].metallic;
        if (!materials[i].reported) {
            materials[i].reported = true;
            gEngfuncs.Con_DPrintf("COF_RTX_MATERIAL %s roughness=%.2f metallic=%.2f\n",
                name, materials[i].roughness, materials[i].metallic);
        }
        return;
    }
}
