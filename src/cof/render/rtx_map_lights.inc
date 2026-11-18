/* Map-driven RT lighting. Read BSP entities, never rewrite game resources. */
typedef struct { char key[64], value[256]; } CofRTKey;
typedef struct { CofRTKey pairs[128]; int count; } CofRTEntity;
typedef struct { char name[64]; RgColor4DPacked32 color; float power; } CofRTTexlight;
static CofRTTexlight cof_texlights[256];
static int cof_texlight_count;
float cof_rt_sky_origin[3], cof_rt_world_origin[3], cof_rt_sky_speed;
float cof_rt_sky_energy = 0;
qboolean cof_rt_has_sky;
qboolean cof_rt_menu_scene;
static int cof_rt_volume_light=-1;

static char *CofRTReadEntity(char *text, CofRTEntity *entity)
{
    string key, value;
    entity->count = 0;
    text = COM_ParseFile(text, key, sizeof(key));
    if (!text || Q_strcmp(key, "{")) return NULL;
    while ((text = COM_ParseFile(text, key, sizeof(key))) != NULL) {
        if (!Q_strcmp(key, "}")) return text;
        text = COM_ParseFile(text, value, sizeof(value));
        if (!text) return NULL;
        if (entity->count < 128) {
            CofRTKey *pair = &entity->pairs[entity->count++];
            Q_strncpy(pair->key, key, sizeof(pair->key));
            Q_strncpy(pair->value, value, sizeof(pair->value));
        }
    }
    return NULL;
}
static const char *CofRTValue(const CofRTEntity *entity, const char *key)
{
    for (int i=entity->count-1;i>=0;--i)
        if (!Q_stricmp(entity->pairs[i].key,key)) return entity->pairs[i].value;
    return NULL;
}
static float CofRTNumber(const CofRTEntity *entity, const char *key, float fallback)
{
    const char *value=CofRTValue(entity,key);
    float number;
    return value && sscanf(value,"%f",&number)==1 && isfinite(number) ? number : fallback;
}
static qboolean CofRTVector(const char *value, vec3_t out)
{
    return value && sscanf(value,"%f %f %f",&out[0],&out[1],&out[2])==3 &&
        isfinite(out[0]) && isfinite(out[1]) && isfinite(out[2]);
}
static qboolean CofRTColor(const char *value, RgColor4DPacked32 *color, float *power)
{
    float r=255,g=255,b=255,brightness=200;
    int n=value ? sscanf(value,"%f %f %f %f",&r,&g,&b,&brightness) : 4;
    if (n!=1 && n!=3 && n!=4) return false;
    if (n==1) { brightness=r; r=g=b=255; }
    if (n==3) brightness=255;
    if (!isfinite(r)||!isfinite(g)||!isfinite(b)||!isfinite(brightness)) return false;
    r=Q_max(0,r);g=Q_max(0,g);b=Q_max(0,b);
    // Preserve HDR values instead of clipping old one-component lights at 255.
    float peak=Q_max(255,Q_max(r,Q_max(g,b)));
    *color=rgUtilPackColorFloat4D(r/peak,g/peak,b/peak,1);
    *power=bound(0,brightness*peak/(255.0f*255.0f),128);
    return true;
}
static qboolean CofRTTarget(const char *name, vec3_t origin)
{
    if (!name || !*name) return false;
    CofRTEntity entity;
    char *text=WORLDMODEL->entities;
    while ((text=CofRTReadEntity(text,&entity))!=NULL) {
        const char *target=CofRTValue(&entity,"targetname");
        if (target && !Q_stricmp(name,target) && CofRTVector(CofRTValue(&entity,"origin"),origin)) return true;
    }
    return false;
}
static void CofRTDirection(const CofRTEntity *entity, const vec3_t origin, vec3_t direction)
{
    vec3_t target,angles={0,0,0};
    if (CofRTTarget(CofRTValue(entity,"target"),target)) {
        VectorSubtract(target,origin,direction);
        if (DotProduct(direction,direction)>.0001f) { VectorNormalize(direction); return; }
    }
    if (!CofRTVector(CofRTValue(entity,"angles"),angles)) {
        float yaw=CofRTNumber(entity,"angle",0);
        if (yaw==-1) angles[0]=-90;
        else if (yaw==-2) angles[0]=90;
        else angles[1]=yaw;
    }
    // GoldSrc light pitch is positive up, unlike AngleVectors pitch. It
    // overrides the pitch in "angles", even when the editor wrote 0 0 0.
    if (CofRTValue(entity,"pitch")) angles[0]=-CofRTNumber(entity,"pitch",0);
    AngleVectors(angles,direction,NULL,NULL);
}
void CofRTTexlightMaterial(RgMeshPrimitiveInfo *primitive, RgEditorInfo *editor, const char *name)
{
    for (int i=0;i<cof_texlight_count;++i) {
        if (Q_stricmp(name,cof_texlights[i].name)) continue;
        const float power=cof_texlights[i].power;
        primitive->emissive=Q_max(primitive->emissive,power*1.5f);
        editor->attachedLightExists=power>0;
        editor->attachedLightEvenOnDynamic=true;
        editor->attachedLight.color=cof_texlights[i].color;
        editor->attachedLight.intensity=RT_CVAR_TO_FLOAT(rt_light_s)*power*.35f;
        return;
    }
}
// Preserve the separately calibrated cinematic menu only. Turning baked
// gameplay lightmap samples into new emitters lights areas the author left
// dark and double-counts indirect light already calculated by the path tracer.
// Positions and IDs are independent of camera/PVS and rebuilt only on map load.
static int CofRTBakedFill(void)
{
    if (!cof_rt_menu_scene) return 0;
    cvar_t *setting=gEngfuncs.Cvar_Get("rt_baked_fill","1",FCVAR_ARCHIVE,
        "Baked ambient approximation, 0-2; takes effect on map reload");
    const float strength=isfinite(setting->value) ? bound(0,setting->value,2) : 1;
    if (strength==0) return 0;
    const int sourceCount=g_lights.static_lights_count;
    int added=0;
    for (int i=0;i<WORLDMODEL->nummodelsurfaces && added<256;++i) {
        msurface_t *surf=&WORLDMODEL->surfaces[WORLDMODEL->firstmodelsurface+i];
        if (!surf->samples || !surf->info || !surf->polys ||
            (surf->flags & (SURF_DRAWSKY|SURF_DRAWTURB|SURF_TRANSPARENT))) continue;
        vec3_t normal,position={0,0,0};
        VectorScale(surf->plane->normal,(surf->flags&SURF_PLANEBACK)?-1:1,normal);
        if (normal[2]<.65f || surf->polys->numverts<3) continue;
        const glpoly2_t *poly=surf->polys;
        for (int v=0;v<poly->numverts;++v) VectorAdd(position,poly->verts[v],position);
        VectorScale(position,1.0f/poly->numverts,position);
        const float fillRadius=cof_rt_menu_scene ? 16 : 32;
        VectorMA(position,cof_rt_menu_scene ? 48 : 80,normal,position);
        mleaf_t *leaf=gEngfuncs.Mod_PointInLeaf(position,WORLDMODEL->nodes,WORLDMODEL);
        if (!leaf || leaf->contents!=CONTENTS_EMPTY) continue;
        qboolean tooClose=false;
        // Keep the broad emitter out of nearby solid walls as well as the floor.
        for (int axis=0;axis<3;++axis) for (int sign=-1;sign<=1;sign+=2) {
            vec3_t probe; VectorCopy(position,probe); probe[axis]+=sign*fillRadius;
            leaf=gEngfuncs.Mod_PointInLeaf(probe,WORLDMODEL->nodes,WORLDMODEL);
            if (!leaf || leaf->contents!=CONTENTS_EMPTY) tooClose=true;
        }
        for (int j=0;j<g_lights.static_lights_count;++j) {
            vec3_t delta; VectorSubtract(position,g_lights.static_lights[j].abs_position,delta);
            float spacing=j<sourceCount ? 320 : 192;
            if (DotProduct(delta,delta)<spacing*spacing) { tooClose=true; break; }
        }
        if (tooClose || g_lights.static_lights_count>=RT_MAX_STATIC_LIGHTS) continue;
        int step=gEngfuncs.Mod_SampleSizeForFace(surf);
        if (step<=0) continue;
        int size=(surf->info->lightextents[0]/step+1)*(surf->info->lightextents[1]/step+1);
        if (size<=0) continue;
        const color24 *samples=NULL;
        for (int m=0;m<MAXLIGHTMAPS && surf->styles[m]!=255;++m)
            if (surf->styles[m]==0) { samples=surf->samples+m*size; break; }
        if (!samples) continue;
        vec3_t rgb={0,0,0};
        for (int s=0;s<size;++s) { rgb[0]+=samples[s].r; rgb[1]+=samples[s].g; rgb[2]+=samples[s].b; }
        VectorScale(rgb,1.0f/size,rgb);
        float peak=Q_max(rgb[0],Q_max(rgb[1],rgb[2]));
        if (peak<2) continue;
        RgColor4DPacked32 color=rgUtilPackColorFloat4D(rgb[0]/peak,rgb[1]/peak,rgb[2]/peak,1);
        AddStaticLight(position,normal,color,strength*Q_min(peak/255.0f,.35f),0,false,0,0);
        g_lights.static_lights[g_lights.static_lights_count-1].fill_radius=fillRadius;
        ++added;
    }
    return added;
}
void RT_ParseStaticLightEntities(void)
{
    extern void CofRTLoadSurfaceTypes(void);
    CofRTLoadSurfaceTypes();
    g_lights.static_lights_count=0;
    g_lights.potential_sun_count=0;
    g_lights.sun_exists=false;
    cof_texlight_count=0;
    cof_rt_has_sky=false;
    cof_rt_menu_scene=false;
    cof_rt_sky_speed=0;
    // A visible sky is not evidence of an authored environment light.
    cof_rt_sky_energy=0;
    VectorClear(cof_rt_sky_origin);
    VectorClear(cof_rt_world_origin);
    if (!WORLDMODEL || !WORLDMODEL->entities) return;
    CofRTEntity entity;
    char *text=WORLDMODEL->entities;
    int spots=0, points=0;
    while ((text=CofRTReadEntity(text,&entity))!=NULL) {
        const char *classname=CofRTValue(&entity,"classname");
        if (!classname) continue;
        if (!Q_stricmp(classname,"cof_gamemenu")) cof_rt_menu_scene=true;
        // Same authored fields transported by skymark_sky/skymark_w in CoF.
        // The RT backend can read immutable BSP data directly at map load.
        if (!Q_stricmp(classname,"envpos_sky")) {
            cof_rt_has_sky=CofRTVector(CofRTValue(&entity,"origin"),cof_rt_sky_origin);
            continue;
        }
        if (!Q_stricmp(classname,"envpos_world")) {
            CofRTVector(CofRTValue(&entity,"origin"),cof_rt_world_origin);
            cof_rt_sky_speed=CofRTNumber(&entity,"health",0);
            continue;
        }
        if (!Q_stricmp(classname,"info_texlights")) {
            for (int i=0;i<entity.count;++i) {
                const CofRTKey *pair=&entity.pairs[i];
                if (!Q_stricmp(pair->key,"origin") || !Q_stricmp(pair->key,"classname") ||
                    !Q_stricmp(pair->key,"targetname") || pair->key[0]=='_') continue;
                int index=0;
                for (;index<cof_texlight_count;++index)
                    if (!Q_stricmp(cof_texlights[index].name,pair->key)) break;
                if (index>=256) continue;
                CofRTTexlight *light=&cof_texlights[index];
                if (!CofRTColor(pair->value,&light->color,&light->power)) continue;
                Q_strncpy(light->name,pair->key,sizeof(light->name));
                if (index==cof_texlight_count) ++cof_texlight_count;
            }
            continue;
        }
        qboolean spot=!Q_stricmp(classname,"light_spot");
        qboolean sun=!Q_stricmp(classname,"light_environment");
        if (!spot && !sun && Q_stricmp(classname,"light")) continue;
        sun=sun || CofRTNumber(&entity,"_sky",0)!=0;
        vec3_t origin={0,0,0},direction;
        if (!CofRTVector(CofRTValue(&entity,"origin"),origin) && !sun) continue;
        RgColor4DPacked32 color;
        float power;
        if (!CofRTColor(CofRTValue(&entity,"_light"),&color,&power)) continue;
        CofRTDirection(&entity,origin,direction);
        if (sun) {
            // RT adaptation: use authored diffuse sky energy, instead of the
            // upstream constant daylight on every map, including night scenes.
            RgColor4DPacked32 diffuseColor=color;
            float diffusePower=power;
            const char *diffuse=CofRTValue(&entity,"_diffuse_light");
            if (diffuse) CofRTColor(diffuse,&diffuseColor,&diffusePower);
            cof_rt_sky_energy=diffusePower *
                Q_max(diffuseColor & 255,Q_max((diffuseColor>>8)&255,(diffuseColor>>16)&255))/255.f;
            if (g_lights.potential_sun_count<RT_MAX_POTENTIAL_SUN_LIGHTS) {
                float pitch=RAD2DEG(asin(bound(-1,direction[2],1)));
                float yaw=RAD2DEG(atan2(direction[1],direction[0]));
                AddPotentialSun(pitch,yaw,color,power);
            }
        } else {
            float inner=bound(1,CofRTNumber(&entity,"_cone",10),89);
            float outer=bound(inner,CofRTNumber(&entity,"_cone2",inner),89);
            float rawStyle=CofRTNumber(&entity,"style",0);
            int style=rawStyle>=0 && rawStyle<MAX_LIGHTSTYLES ? (int)rawStyle : 0;
            AddStaticLight(origin,direction,color,power,style,spot,inner,outer);
            if (spot) ++spots; else ++points;
        }
    }
    FilterTheSunFromPotential(WORLDMODEL->name);
    if (!cof_rt_menu_scene)
        for (int i=0;i<g_lights.static_lights_count;++i) {
            rt_static_light_t* light=&g_lights.static_lights[i];
            // Finite lamp emitters give a soft penumbra and a readable highlight
            // in glossy tiles. No extra energy and no camera-relative offsets.
            light->fill_radius=METRIC_TO_QUAKEUNIT(bound(.025f,
                RT_CVAR_TO_FLOAT(rt_light_radius)*(.85f+.3f*sqrtf(Q_max(0,light->intensity))),.065f));
        }
    // RTGL supports one volumetric source. Pick a fixed authored spotlight at
    // map load, never the nearest light each frame (which makes fog flash).
    cof_rt_volume_light=-1;
    float bestPower=0;
    if (!cof_rt_menu_scene && !g_lights.sun_exists)
        for (int i=0;i<g_lights.static_lights_count;++i) {
            const rt_static_light_t* light=&g_lights.static_lights[i];
            if (light->is_spot && light->intensity>bestPower) {
                bestPower=light->intensity; cof_rt_volume_light=i;
            }
        }
    int fills=CofRTBakedFill();
    gEngfuncs.Con_Printf("COF_RTX_LIGHTING_POLICY menu=%d synthetic_night=0 sky_energy=%.4f baked_fill=%d\n",
        cof_rt_menu_scene,cof_rt_sky_energy,fills);
    gEngfuncs.Con_DPrintf("COF_RTX_ATMOSPHERE menu=%d volumetric_spot=%d sun=%d\n",
        cof_rt_menu_scene,cof_rt_volume_light,g_lights.sun_exists);
    gEngfuncs.Con_Printf("COF_RTX_MAP_LIGHTS %s points=%d spots=%d sun=%d texlights=%d baked_fill=%d\n",
        WORLDMODEL->name,points,spots,g_lights.sun_exists,cof_texlight_count,fills);
}
