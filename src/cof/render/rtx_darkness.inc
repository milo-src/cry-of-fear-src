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
    char name[64];
    qboolean attempted, uploaded;
    int u, v, width, height;
    float lo[2], span[2];
} CofDarkMask;
static CofDarkSource *cof_dark_sources;
static CofDarkMask *cof_dark_masks;
static int cof_dark_count, cof_dark_faces, cof_dark_uploaded;
static size_t cof_dark_bytes;
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
    for (int i=0;i<cof_dark_faces;++i)
        if (cof_dark_masks[i].uploaded)
            rgMarkOriginalTextureAsDeleted(rg_instance,cof_dark_masks[i].name);
    free(cof_dark_sources); free(cof_dark_masks);
    cof_dark_sources=NULL; cof_dark_masks=NULL;
    cof_dark_count=cof_dark_faces=cof_dark_uploaded=0; cof_dark_bytes=0;
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
}

static qboolean CofDarkWorld(const RgMeshInfo *mesh)
{
    return !cof_rt_menu_scene && cof_dark_count>0 && WORLDMODEL &&
        mesh->pMeshName==WORLDMODEL->name;
}

static void CofDarkBuildMask(CofDarkMask *m, int index)
{
    m->attempted=true;
    const msurface_t *f=&WORLDMODEL->surfaces[WORLDMODEL->firstmodelsurface+index];
    if (!f->polys || f->polys->numverts<3 || !f->plane ||
        !f->texinfo || !f->texinfo->texture || !Q_stricmp(f->texinfo->texture->name,"black")) return;
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
    size_t size=(size_t)m->width*m->height*4;
    if (cof_dark_bytes+size>16*1024*1024 || cof_dark_uploaded>=1024) {
        if (!cof_dark_limit_reported) {
            gEngfuncs.Con_Printf("COF_RTX_DARKNESS_LIMIT masks=%d bytes=%u\n",cof_dark_uploaded,(unsigned int)cof_dark_bytes);
            cof_dark_limit_reported=true;
        }
        return;
    }
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
    Q_snprintf(m->name,sizeof(m->name),"#cof_darkness/%u/%d",cof_dark_generation,index);
    RgOriginalTextureInfo info={.pTextureName=m->name,.pPixels=pixels,.size={m->width,m->height},
        .filter=RG_SAMPLER_FILTER_LINEAR,.addressModeU=RG_SAMPLER_ADDRESS_MODE_CLAMP,
        .addressModeV=RG_SAMPLER_ADDRESS_MODE_CLAMP};
    RgResult result=rgProvideOriginalTexture(rg_instance,&info);
    if (result!=RG_RESULT_SUCCESS) { RG_CHECK(result); return; }
    m->uploaded=true; cof_dark_bytes+=size; ++cof_dark_uploaded;
    if (cof_dark_uploaded<=3)
        gEngfuncs.Con_Printf("COF_RTX_DARKNESS_MASK face=%d peak=%d layer=2\n",index,peak);
}

static RgFloat2D *CofRTDarknessAttach(const RgMeshInfo *mesh, RgMeshPrimitiveInfo *prim, RgEditorInfo *editor)
{
    if (!CofDarkWorld(mesh) || prim->primitiveIndexInMesh>=(uint32_t)cof_dark_faces ||
        !prim->vertexCount || !prim->pVertices || prim->emissive>0 || editor->attachedLightExists ||
        editor->layer2Exists || (prim->flags&(RG_MESH_PRIMITIVE_WATER|RG_MESH_PRIMITIVE_SKY|
        RG_MESH_PRIMITIVE_SKY_VISIBILITY|RG_MESH_PRIMITIVE_TRANSLUCENT|RG_MESH_PRIMITIVE_ALPHA_TESTED))) return NULL;
    CofDarkMask *m=&cof_dark_masks[prim->primitiveIndexInMesh];
    if (!m->attempted) CofDarkBuildMask(m,prim->primitiveIndexInMesh);
    if (!m->uploaded) return NULL;
    RgFloat2D *uv=malloc((size_t)prim->vertexCount*sizeof(*uv));
    if (!uv) return NULL;
    for (uint32_t i=0;i<prim->vertexCount;++i) {
        const float *p=prim->pVertices[i].position;
        uv[i].data[0]=(.5f+(m->width-1)*(p[m->u]-m->lo[0])/m->span[0])/m->width;
        uv[i].data[1]=(.5f+(m->height-1)*(p[m->v]-m->lo[1])/m->span[1])/m->height;
    }
    editor->layer2Exists=true;
    editor->layer2=(RgEditorTextureLayerInfo){.pTexCoord=uv,.pTextureName=m->name,
        .blend=RG_TEXTURE_LAYER_BLEND_TYPE_ALPHA,.color=rgUtilPackColorByte4D(255,255,255,255)};
    return uv;
}
