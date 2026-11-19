/* Optional artistic absorption around authored black world faces, RTX only.
 * Procedural alpha masks live in RTGL memory; no map/texture files are changed.
 * Layer 2 affects primary, reflection and indirect albedo, not lightmap layer 1.
 * No negative radiance, camera-dependent selection or changes to mesh topology. */
#include <float.h>
extern qboolean cof_rt_menu_scene;
extern void CofRTTexlightMaterial(RgMeshPrimitiveInfo*, RgEditorInfo*, const char*);
typedef struct {
    const glpoly2_t *poly;
    vec3_t normal, mins, maxs;
} CofDarkSource;
typedef struct {
    qboolean uploaded;
    int tile;
    int u, v, width, height;
    float lo[2], span[2];
} CofDarkMask;
static CofDarkSource *cof_dark_sources;
static CofDarkMask *cof_dark_masks;
static int cof_dark_count, cof_dark_faces, cof_dark_uploaded;
enum { COF_DARK_ATLAS_SIZE=2048, COF_DARK_TILE=66, COF_DARK_COLUMNS=31 };
static char cof_dark_atlas_name[64];
static qboolean cof_dark_atlas_uploaded;
static byte *cof_dark_pixels;
static const CofDarkMask *cof_dark_current;
static RgFloat2D *cof_dark_uv;
static size_t cof_dark_uv_count, cof_dark_uv_capacity;
static qboolean cof_dark_uv_failed;
static void CofDarkBuildMask(CofDarkMask *m, int index);
static qboolean cof_dark_limit_reported;
static float cof_dark_radius, cof_dark_strength;
static unsigned int cof_dark_generation;

static float CofDarkDistance(const CofDarkSource *s, const vec3_t p)
{
    vec3_t delta, projected;
    VectorSubtract(p,s->poly->verts[0],delta);
    float height=DotProduct(delta,s->normal);
    VectorMA(p,-height,s->normal,projected);
    qboolean positive=false, negative=false;
    float closest=FLT_MAX;
    for (int i=0;i<s->poly->numverts;++i) {
        const float *a=s->poly->verts[i], *b=s->poly->verts[(i+1)%s->poly->numverts];
        vec3_t edge, toPoint, cross, nearest;
        VectorSubtract(b,a,edge); VectorSubtract(projected,a,toPoint);
        CrossProduct(edge,toPoint,cross);
        float side=DotProduct(cross,s->normal);
        positive |= side>0.01f; negative |= side<-.01f;
        VectorSubtract(p,a,toPoint);
        float t=bound(0,DotProduct(toPoint,edge)/Q_max(DotProduct(edge,edge),1e-8f),1);
        VectorMA(a,t,edge,nearest); VectorSubtract(p,nearest,delta);
        closest=Q_min(closest,DotProduct(delta,delta));
    }
    return positive && negative ? sqrtf(closest) : fabsf(height);
}

static float CofDarkOpacity(const vec3_t p)
{
    float distance=cof_dark_radius;
    for (int i=0;i<cof_dark_count;++i) {
        const CofDarkSource *s=&cof_dark_sources[i];
        float lower=0;
        for (int a=0;a<3;++a) {
            float d=Q_max(s->mins[a]-p[a],Q_max(p[a]-s->maxs[a],0));
            lower+=d*d;
        }
        if (lower<distance*distance) distance=Q_min(distance,CofDarkDistance(s,p));
    }
    float t=bound(0,distance/cof_dark_radius,1);
    return cof_dark_strength*(1-t*t*(3-2*t));
}

static void CofDarkGeometryCheck(void)
{
    if (!getenv("COF_RTX_LIGHTINGTEST")) return;
    glpoly2_t *poly=calloc(1,sizeof(*poly)+4*sizeof(poly->verts[0]));
    if (!poly) return;
    poly->numverts=4;
    const float corners[4][3]={{-1,-1,0},{1,-1,0},{1,1,0},{-1,1,0}};
    for (int i=0;i<4;++i) VectorCopy(corners[i],poly->verts[i]);
    CofDarkSource s={.poly=poly,.normal={0,0,1}};
    vec3_t above={0,0,3}, edge={4,0,0}, corner={2,2,0}, surface={0,0,0};
    qboolean pass=fabsf(CofDarkDistance(&s,above)-3)<.0001f &&
        fabsf(CofDarkDistance(&s,edge)-3)<.0001f &&
        fabsf(CofDarkDistance(&s,corner)-sqrtf(2))<.0001f &&
        CofDarkDistance(&s,surface)<.0001f;
    s.normal[2]=-1;
    pass=pass && fabsf(CofDarkDistance(&s,above)-3)<.0001f &&
        fabsf(CofDarkDistance(&s,corner)-sqrtf(2))<.0001f;
    gEngfuncs.Con_Printf("COF_RTX_DARKNESS_GEOMETRY pass=%d\n",pass);
    free(poly);
}

void CofRTDarknessReset(void)
{
    if (cof_dark_atlas_uploaded)
        rgMarkOriginalTextureAsDeleted(rg_instance,cof_dark_atlas_name);
    cof_dark_atlas_uploaded=false; cof_dark_current=NULL;
    free(cof_dark_uv); cof_dark_uv=NULL;
    cof_dark_uv_count=cof_dark_uv_capacity=0; cof_dark_uv_failed=false;
    free(cof_dark_sources); free(cof_dark_masks);
    cof_dark_sources=NULL; cof_dark_masks=NULL;
    cof_dark_count=cof_dark_faces=cof_dark_uploaded=0;
    cof_dark_limit_reported=false;
    ++cof_dark_generation;
    // This engine's Cvar_Get resets existing values: register at renderer init,
    // then read here so a map reload does not overwrite the selected strength.
    float strength=gEngfuncs.pfnGetCvarFloat("rt_darkness_strength");
    float radius=gEngfuncs.pfnGetCvarFloat("rt_darkness_radius");
    cof_dark_strength=isfinite(strength)?bound(0,strength,1):.94f;
    cof_dark_radius=isfinite(radius)?bound(16,radius,512):192;
    if (!cof_rt_menu_scene && cof_dark_strength>0 && WORLDMODEL) {
        cof_dark_sources=calloc(WORLDMODEL->nummodelsurfaces,sizeof(*cof_dark_sources));
        cof_dark_masks=calloc(WORLDMODEL->nummodelsurfaces,sizeof(*cof_dark_masks));
        if (!cof_dark_sources || !cof_dark_masks) {
            free(cof_dark_sources); free(cof_dark_masks);
            cof_dark_sources=NULL; cof_dark_masks=NULL;
        } else {
            cof_dark_faces=WORLDMODEL->nummodelsurfaces;
            for (int i=0;i<cof_dark_faces;++i) {
                const msurface_t *f=&WORLDMODEL->surfaces[WORLDMODEL->firstmodelsurface+i];
                if (!f->texinfo || !f->texinfo->texture ||
                    Q_stricmp(f->texinfo->texture->name,"black") || !f->polys || f->polys->numverts<3 ||
                    (f->flags&(SURF_DRAWSKY|SURF_DRAWTURB|SURF_TRANSPARENT))) continue;
                // Respect custom maps that explicitly make this texture emit.
                RgMeshPrimitiveInfo emitter={0}; RgEditorInfo material={0};
                CofRTTexlightMaterial(&emitter,&material,"black");
                if (emitter.emissive>0 || material.attachedLightExists) continue;
                CofDarkSource *s=&cof_dark_sources[cof_dark_count++];
                s->poly=f->polys; VectorCopy(f->plane->normal,s->normal);
                VectorCopy(s->poly->verts[0],s->mins); VectorCopy(s->mins,s->maxs);
                for (int v=1;v<s->poly->numverts;++v) for (int a=0;a<3;++a) {
                    s->mins[a]=Q_min(s->mins[a],s->poly->verts[v][a]);
                    s->maxs[a]=Q_max(s->maxs[a],s->poly->verts[v][a]);
                }
            }
        }
    }
    gEngfuncs.Con_Printf("COF_RTX_DARKNESS menu=%d sources=%d radius=%.1f strength=%.2f\n",
        cof_rt_menu_scene,cof_dark_count,cof_dark_radius,cof_dark_strength);
    CofDarkGeometryCheck();
    // One atlas for the whole map preserves material batching and reserves the
    // backend geometry budget for props. Slot zero stays fully transparent.
    if (cof_dark_count) {
        cof_dark_pixels=calloc(COF_DARK_ATLAS_SIZE*COF_DARK_ATLAS_SIZE,4);
        if (cof_dark_pixels) {
            for (int i=0;i<cof_dark_faces;++i) CofDarkBuildMask(&cof_dark_masks[i],i);
            if (cof_dark_uploaded) {
                Q_snprintf(cof_dark_atlas_name,sizeof(cof_dark_atlas_name),"#cof_darkness/%u/atlas",cof_dark_generation);
                RgOriginalTextureInfo info={.pTextureName=cof_dark_atlas_name,.pPixels=cof_dark_pixels,
                    .size={COF_DARK_ATLAS_SIZE,COF_DARK_ATLAS_SIZE},.filter=RG_SAMPLER_FILTER_LINEAR,
                    .addressModeU=RG_SAMPLER_ADDRESS_MODE_CLAMP,.addressModeV=RG_SAMPLER_ADDRESS_MODE_CLAMP};
                RgResult result=rgProvideOriginalTexture(rg_instance,&info);
                cof_dark_atlas_uploaded=result==RG_RESULT_SUCCESS;
                RG_CHECK(result);
                gEngfuncs.Con_Printf("COF_RTX_DARKNESS_ATLAS masks=%d textures=1 uploaded=%d\n",
                    cof_dark_uploaded,cof_dark_atlas_uploaded);
            }
            free(cof_dark_pixels); cof_dark_pixels=NULL;
        }
    }
}

static qboolean CofDarkWorld(const RgMeshInfo *mesh)
{
    return !cof_rt_menu_scene && cof_dark_count>0 && WORLDMODEL &&
        mesh->pMeshName==WORLDMODEL->name;
}

static void CofDarkBuildMask(CofDarkMask *m, int index)
{
    const msurface_t *f=&WORLDMODEL->surfaces[WORLDMODEL->firstmodelsurface+index];
    if (!f->polys || f->polys->numverts<3 || !f->plane ||
        !f->texinfo || !f->texinfo->texture || !Q_stricmp(f->texinfo->texture->name,"black") ||
        (f->flags&(SURF_DRAWSKY|SURF_DRAWTURB|SURF_TRANSPARENT))) return;
    RgMeshPrimitiveInfo emitter={0}; RgEditorInfo material={0};
    CofRTTexlightMaterial(&emitter,&material,f->texinfo->texture->name);
    if (emitter.emissive>0 || material.attachedLightExists) return;
    const float *n=f->plane->normal;
    int drop=0;
    if (fabsf(n[1])>fabsf(n[drop])) drop=1;
    if (fabsf(n[2])>fabsf(n[drop])) drop=2;
    if (fabsf(n[drop])<.001f) return;
    m->u=(drop+1)%3; m->v=(drop+2)%3;
    vec3_t mins,maxs;
    VectorCopy(f->polys->verts[0],mins); VectorCopy(mins,maxs);
    for (const glpoly2_t *p=f->polys;p;p=p->next)
        for (int v=0;v<p->numverts;++v) for (int a=0;a<3;++a) {
            mins[a]=Q_min(mins[a],p->verts[v][a]); maxs[a]=Q_max(maxs[a],p->verts[v][a]);
        }
    qboolean nearby=false;
    for (int i=0;i<cof_dark_count && !nearby;++i) {
        float lower=0;
        for (int a=0;a<3;++a) {
            float d=Q_max(mins[a]-cof_dark_sources[i].maxs[a],Q_max(cof_dark_sources[i].mins[a]-maxs[a],0));
            lower+=d*d;
        }
        nearby=lower<cof_dark_radius*cof_dark_radius;
    }
    if (!nearby) return;
    m->lo[0]=mins[m->u]; m->lo[1]=mins[m->v];
    m->span[0]=Q_max(maxs[m->u]-mins[m->u],1); m->span[1]=Q_max(maxs[m->v]-mins[m->v],1);
    m->width=bound(4,(int)ceilf(m->span[0]/12)+1,64);
    m->height=bound(4,(int)ceilf(m->span[1]/12)+1,64);
    byte pixels[64*64*4]={0}; int peak=0;
    for (int y=0;y<m->height;++y) for (int x=0;x<m->width;++x) {
        vec3_t p;
        p[m->u]=m->lo[0]+m->span[0]*x/(m->width-1);
        p[m->v]=m->lo[1]+m->span[1]*y/(m->height-1);
        p[drop]=(f->plane->dist-n[m->u]*p[m->u]-n[m->v]*p[m->v])/n[drop];
        int opacity=(int)(255*CofDarkOpacity(p)+.5f);
        pixels[4*(y*m->width+x)+3]=(byte)opacity; peak=Q_max(peak,opacity);
    }
    if (!peak) return;
    if (cof_dark_uploaded+1>=COF_DARK_COLUMNS*COF_DARK_COLUMNS) {
        if (!cof_dark_limit_reported)
            gEngfuncs.Con_Printf("COF_RTX_DARKNESS_LIMIT masks=%d atlas_full=1\n",cof_dark_uploaded);
        cof_dark_limit_reported=true;
        return; // Omit the effect, never the receiver geometry.
    }
    m->tile=++cof_dark_uploaded; m->uploaded=true;
    int tx=(m->tile%COF_DARK_COLUMNS)*COF_DARK_TILE;
    int ty=(m->tile/COF_DARK_COLUMNS)*COF_DARK_TILE;
    // Duplicate edge texels into a one-pixel gutter for linear filtering.
    for (int y=0;y<m->height+2;++y) for (int x=0;x<m->width+2;++x)
        memcpy(cof_dark_pixels+4*((ty+y)*COF_DARK_ATLAS_SIZE+tx+x),
            pixels+4*(bound(0,y-1,m->height-1)*m->width+bound(0,x-1,m->width-1)),4);
    if (cof_dark_uploaded<=3)
        gEngfuncs.Con_Printf("COF_RTX_DARKNESS_MASK face=%d peak=%d layer=2\n",index,peak);
}

static void CofRTDarknessBegin(const RgMeshInfo *mesh, const RgMeshPrimitiveInfo *prim, RgEditorInfo *editor)
{
    if (!cof_dark_atlas_uploaded || !CofDarkWorld(mesh) ||
        prim->primitiveIndexInMesh>=(uint32_t)cof_dark_faces || prim->emissive>0 ||
        editor->attachedLightExists || editor->layer2Exists ||
        (prim->flags&(RG_MESH_PRIMITIVE_WATER|RG_MESH_PRIMITIVE_SKY|
        RG_MESH_PRIMITIVE_SKY_VISIBILITY|RG_MESH_PRIMITIVE_TRANSLUCENT|RG_MESH_PRIMITIVE_ALPHA_TESTED))) return;
    const CofDarkMask *m=&cof_dark_masks[prim->primitiveIndexInMesh];
    cof_dark_current=m->uploaded ? m : NULL;
    // Unaffected faces use the transparent slot in the SAME material, so they
    // can share a batch with affected faces. UVs are recorded per vertex.
    editor->layer2Exists=true;
    editor->layer2=(RgEditorTextureLayerInfo){.pTextureName=cof_dark_atlas_name,
        .blend=RG_TEXTURE_LAYER_BLEND_TYPE_ALPHA,.color=rgUtilPackColorByte4D(255,255,255,255)};
}

void CofRTDarknessVertex(float x, float y, float z)
{
    if (!cof_dark_atlas_uploaded || rt_batch.type!=RT_BATCH_TYPE_BRUSH ||
        !rt_batch.additional.layer2Exists ||
        rt_batch.additional.layer2.pTextureName!=cof_dark_atlas_name || cof_dark_uv_failed) return;
    float u=.5f/COF_DARK_ATLAS_SIZE, v=u;
    const CofDarkMask *m=cof_dark_current;
    if (m) {
        const float p[3]={x,y,z};
        u=((m->tile%COF_DARK_COLUMNS)*COF_DARK_TILE+1.5f+
            (m->width-1)*bound(0,(p[m->u]-m->lo[0])/m->span[0],1))/COF_DARK_ATLAS_SIZE;
        v=((m->tile/COF_DARK_COLUMNS)*COF_DARK_TILE+1.5f+
            (m->height-1)*bound(0,(p[m->v]-m->lo[1])/m->span[1],1))/COF_DARK_ATLAS_SIZE;
    }
    // Bulk world uploads supply only layers 0 and 1 to the scratch API.
    // Track both vertex paths and supply layer 2 for the combined batch.
    if (cof_dark_uv_count==cof_dark_uv_capacity) {
        size_t capacity=cof_dark_uv_capacity ? cof_dark_uv_capacity*2 : 1024;
        RgFloat2D *grown=realloc(cof_dark_uv,capacity*sizeof(*grown));
        if (!grown) { cof_dark_uv_failed=true; return; }
        cof_dark_uv=grown; cof_dark_uv_capacity=capacity;
    }
    cof_dark_uv[cof_dark_uv_count++]=(RgFloat2D){{u,v}};
}

static void CofRTDarknessFlush(RgMeshPrimitiveInfo *prim, RgEditorInfo *editor)
{
    if (!editor->layer2Exists || editor->layer2.pTextureName!=cof_dark_atlas_name) return;
    if (!cof_dark_uv_failed && cof_dark_uv_count==prim->vertexCount)
        editor->layer2.pTexCoord=cof_dark_uv;
    else {
        // Geometry always takes priority if the optional mask cannot be sent.
        editor->layer2Exists=false;
        gEngfuncs.Con_Printf("COF_RTX_DARKNESS_UV FAIL count=%u vertices=%u\n",
            (unsigned)cof_dark_uv_count,prim->vertexCount);
    }
}
