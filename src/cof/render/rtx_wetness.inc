/* RTX-only shoreline and exposed outdoor film. World-space masks share one atlas, preserving
 * brush batching. Layer 3 is a numeric/appearance overlay, not source albedo.
 * RGBA tag 0x00492511 identifies this contract in our hit shaders. Its zero
 * alpha makes it a no-op in stock shaders if this optional extension is absent. */
extern float CofRTShoreWetness(const vec3_t point);
extern qboolean CofRTShoreMayReach(const vec3_t lo,const vec3_t hi);
typedef struct { int u,v,tile,w,h,x,y; float lo[2],span[2]; } CofWetFace;
enum { COF_WET_SIZE=2048 };
static CofWetFace *cof_wet_faces;
static int cof_wet_count,cof_wet_used;
static qboolean cof_wet_ready,cof_wet_failed,cof_wet_reported;
static unsigned cof_wet_generation;
static char cof_wet_name[64];
static const CofWetFace *cof_wet_current;
static RgFloat2D *cof_wet_uv;
static size_t cof_wet_uv_count,cof_wet_uv_capacity;

/* Walk the render BSP front-to-back. Unlike fixed-distance point sampling this
 * cannot step through a thin roof. Only an actual sky leaf admits rainfall;
 * unsealed void, water and solid all fail closed. No camera/map-name heuristic. */
static int CofWetTraceSky(const mnode_t *node,const vec3_t a,const vec3_t b,int depth)
{
    if (!node || depth>128) return CONTENTS_SOLID;
    if (node->contents<0) return node->contents;
    const float da=DotProduct(a,node->plane->normal)-node->plane->dist;
    const float db=DotProduct(b,node->plane->normal)-node->plane->dist;
    if (da>=0 && db>=0) return CofWetTraceSky(node_child(node,0,WORLDMODEL),a,b,depth+1);
    if (da<0 && db<0) return CofWetTraceSky(node_child(node,1,WORLDMODEL),a,b,depth+1);
    const int side=da<0;const float t=bound(0,da/(da-db),1);
    vec3_t mid;for(int j=0;j<3;++j)mid[j]=a[j]+t*(b[j]-a[j]);
    int first=CofWetTraceSky(node_child(node,side,WORLDMODEL),a,mid,depth+1);
    return first==CONTENTS_EMPTY ? CofWetTraceSky(node_child(node,!side,WORLDMODEL),mid,b,depth+1) : first;
}
static void CofWetPoint(const msurface_t *f,const CofWetFace *m,int drop,const vec3_t n,float u,float v,vec3_t p)
{
    p[m->u]=m->lo[0]+m->span[0]*u;p[m->v]=m->lo[1]+m->span[1]*v;
    const float *pn=f->plane->normal;
    p[drop]=(f->plane->dist-pn[m->u]*p[m->u]-pn[m->v]*p[m->v])/pn[drop];
    VectorMA(p,.5f,n,p);
}
static float CofWetNoise(float x,float y)
{
    const int ix=(int)floorf(x),iy=(int)floorf(y);
    float u=x-ix,v=y-iy;u=u*u*(3-2*u);v=v*v*(3-2*v);
    float h[4];
    for(int i=0;i<4;++i) {
        unsigned k=(unsigned)(ix+(i&1))*1597334677u^(unsigned)(iy+(i>>1))*3812015801u;
        k^=k>>16;k*=2246822519u;k^=k>>13;
        h[i]=(k&65535)/65535.f;
    }
    return (h[0]+u*(h[1]-h[0]))*(1-v)+(h[2]+u*(h[3]-h[2]))*v;
}

void CofRTWetnessReset(void)
{
    if (cof_wet_ready) rgMarkOriginalTextureAsDeleted(rg_instance,cof_wet_name);
    free(cof_wet_faces);free(cof_wet_uv);
    cof_wet_faces=NULL;cof_wet_uv=NULL;cof_wet_current=NULL;
    cof_wet_count=cof_wet_used=0;cof_wet_uv_count=cof_wet_uv_capacity=0;
    cof_wet_ready=cof_wet_failed=cof_wet_reported=false;
    ++cof_wet_generation;
    const float outdoor=bound(0,gEngfuncs.pfnGetCvarFloat("rt_outdoor_wetness"),1);
    const qboolean shore=gEngfuncs.pfnGetCvarFloat("rt_shore_wetness")>0;
    if (cof_rt_menu_scene || !WORLDMODEL || (!shore && outdoor<=0)) return;
    int exposedFaces=0,dropped=0;
    // Variable-size shelves retain one batched atlas without the old 960-face
    // limit. Most BSP subdivisions need much less than a fixed 66x66 tile.
    int packX=2,packY=2,rowHeight=0;
    cof_wet_count=WORLDMODEL->nummodelsurfaces;
    cof_wet_faces=calloc(cof_wet_count,sizeof(*cof_wet_faces));
    byte *atlas=calloc(COF_WET_SIZE*COF_WET_SIZE,4);
    if (!cof_wet_faces || !atlas) {free(atlas);free(cof_wet_faces);cof_wet_faces=NULL;cof_wet_count=0;return;}
    for (int i=0;i<cof_wet_count;++i) {
        const msurface_t *f=&WORLDMODEL->surfaces[WORLDMODEL->firstmodelsurface+i];
        if (!f->plane || !f->polys || f->polys->numverts<3 || !f->texinfo || !f->texinfo->texture ||
            (f->flags&(SURF_DRAWSKY|SURF_DRAWTURB|SURF_TRANSPARENT|SURF_DRAWTILED))) continue;
        const char *name=f->texinfo->texture->name;
        if (!*name || strchr("!{*+-~",name[0]) || !Q_stricmp(name,"black")) continue;
        RgMeshPrimitiveInfo emitter={0};RgEditorInfo material={0};
        CofRTTexlightMaterial(&emitter,&material,name);
        if (emitter.emissive>0 || material.attachedLightExists) continue;
        vec3_t n;VectorCopy(f->plane->normal,n);
        if (f->flags&SURF_PLANEBACK) VectorNegate(n,n);
        if (n[2]<-.2f) continue; // no artificial wet underside/ceiling
        int drop=0;for(int a=1;a<3;++a) if(fabsf(n[a])>fabsf(n[drop])) drop=a;
        CofWetFace *m=&cof_wet_faces[i];m->u=(drop+1)%3;m->v=(drop+2)%3;
        vec3_t lo,hi;VectorCopy(f->polys->verts[0],lo);VectorCopy(lo,hi);
        for(const glpoly2_t *p=f->polys;p;p=p->next) for(int j=0;j<p->numverts;++j)
            for(int a=0;a<3;++a) {lo[a]=Q_min(lo[a],p->verts[j][a]);hi[a]=Q_max(hi[a],p->verts[j][a]);}
        const qboolean nearWater=shore && CofRTShoreMayReach(lo,hi);
        if(!nearWater && outdoor<=0)continue;
        m->lo[0]=lo[m->u];m->lo[1]=lo[m->v];
        m->span[0]=Q_max(hi[m->u]-lo[m->u],1);m->span[1]=Q_max(hi[m->v]-lo[m->v],1);
        m->w=bound(4,(int)ceilf(m->span[0]/6)+1,64);m->h=bound(4,(int)ceilf(m->span[1]/6)+1,64);
        float exposure[25]={0};qboolean exposed=false;
        if(outdoor>0) for(int y=0;y<5;++y)for(int x=0;x<5;++x) {
            vec3_t p,end;CofWetPoint(f,m,drop,n,x*.25f,y*.25f,p);
            VectorCopy(p,end);end[2]+=65536.f;
            exposure[y*5+x]=CofWetTraceSky(WORLDMODEL->nodes,p,end,0)==CONTENTS_SKY ? 1.f : 0.f;
            if(exposure[y*5+x]>0)exposed=true;
        }
        if(!nearWater && !exposed)continue;
        float retention=n[2]>.5f ? 1.f : .80f;
        // Porous earth/wood darkens when wet, but does not become polished glass.
        if(Q_stristr(name,"jord") || Q_stristr(name,"dirt") || Q_stristr(name,"grass") ||
           Q_stristr(name,"wood") || Q_stristr(name,"bark")) retention*=.70f;
        byte pixels[64*64*4];int peak=0;
        for(int y=0;y<m->h;++y) for(int x=0;x<m->w;++x) {
            const float u=(float)x/(m->w-1),v=(float)y/(m->h-1);
            vec3_t p;CofWetPoint(f,m,drop,n,u,v,p);
            const int ex=Q_min((int)(u*4),3),ey=Q_min((int)(v*4),3);
            const float eu=u*4-ex,ev=v*4-ey;
            const float e0=exposure[ey*5+ex]*(1-eu)+exposure[ey*5+ex+1]*eu;
            const float e1=exposure[(ey+1)*5+ex]*(1-eu)+exposure[(ey+1)*5+ex+1]*eu;
            float sky=e0*(1-ev)+e1*ev;
            // Erode the sparse exposure mask at roofs instead of spreading film indoors.
            sky=bound(0,(sky-.75f)*4,1);
            float wet=Q_max(nearWater ? CofRTShoreWetness(p) : 0,outdoor*sky*retention);
            float patch=.72f+.28f*CofWetNoise(p[m->u]/70.f,p[m->v]/70.f);
            int alpha=(int)(255*bound(0,wet*patch,1));peak=Q_max(peak,alpha);
            int k=4*(y*m->w+x);pixels[k]=pixels[k+1]=pixels[k+2]=235;pixels[k+3]=(byte)alpha;
        }
        if (!peak) continue;
        if(packX+m->w+2>COF_WET_SIZE) {packX=2;packY+=rowHeight;rowHeight=0;}
        if(packY+m->h+2>COF_WET_SIZE) {++dropped;continue;}
        if(exposed)++exposedFaces;
        m->tile=++cof_wet_used;
        const int tx=packX,ty=packY;m->x=tx;m->y=ty;
        packX+=m->w+2;rowHeight=Q_max(rowHeight,m->h+2);
        for(int y=0;y<m->h+2;++y) for(int x=0;x<m->w+2;++x)
            memcpy(atlas+4*((ty+y)*COF_WET_SIZE+tx+x),pixels+4*(bound(0,y-1,m->h-1)*m->w+bound(0,x-1,m->w-1)),4);
    }
    if (cof_wet_used) {
        Q_snprintf(cof_wet_name,sizeof(cof_wet_name),"#cof_wetness/%u/atlas",cof_wet_generation);
        RgOriginalTextureInfo info={.pTextureName=cof_wet_name,.pPixels=atlas,.size={COF_WET_SIZE,COF_WET_SIZE},
            .filter=RG_SAMPLER_FILTER_LINEAR,.addressModeU=RG_SAMPLER_ADDRESS_MODE_CLAMP,.addressModeV=RG_SAMPLER_ADDRESS_MODE_CLAMP};
        RgResult r=rgProvideOriginalTexture(rg_instance,&info);cof_wet_ready=r==RG_RESULT_SUCCESS;RG_CHECK(r);
    }
    free(atlas);
    gEngfuncs.Con_Printf("COF_RTX_WETNESS masks=%d ready=%d menu=0 outdoor=%d strength=%.2f dropped=%d\n",cof_wet_used,cof_wet_ready,exposedFaces,outdoor,dropped);
}
static void CofRTWetnessBegin(const RgMeshInfo *mesh,const RgMeshPrimitiveInfo *prim,RgEditorInfo *editor)
{
    cof_wet_current=NULL;
    if (!cof_wet_ready || cof_rt_menu_scene || mesh->pMeshName!=WORLDMODEL->name ||
        prim->primitiveIndexInMesh>=(unsigned)cof_wet_count || editor->layer3Exists ||
        prim->emissive>0 || editor->attachedLightExists ||
        (prim->flags&(RG_MESH_PRIMITIVE_WATER|RG_MESH_PRIMITIVE_SKY|RG_MESH_PRIMITIVE_SKY_VISIBILITY|
            RG_MESH_PRIMITIVE_TRANSLUCENT|RG_MESH_PRIMITIVE_ALPHA_TESTED))) return;
    const CofWetFace *m=&cof_wet_faces[prim->primitiveIndexInMesh];
    cof_wet_current=m->tile?m:NULL;
    editor->layer3Exists=true;
    editor->layer3=(RgEditorTextureLayerInfo){.pTextureName=cof_wet_name,.blend=RG_TEXTURE_LAYER_BLEND_TYPE_ALPHA,
        .color=0x00492511u};
}
void CofRTWetnessVertex(float x,float y,float z)
{
    if (!cof_wet_ready || rt_batch.type!=RT_BATCH_TYPE_BRUSH || !rt_batch.additional.layer3Exists ||
        rt_batch.additional.layer3.pTextureName!=cof_wet_name || cof_wet_failed) return;
    float u=.5f/COF_WET_SIZE,v=u;const CofWetFace *m=cof_wet_current;
    if(m) {const float p[3]={x,y,z};
        u=(m->x+1.5f+(m->w-1)*bound(0,(p[m->u]-m->lo[0])/m->span[0],1))/COF_WET_SIZE;
        v=(m->y+1.5f+(m->h-1)*bound(0,(p[m->v]-m->lo[1])/m->span[1],1))/COF_WET_SIZE;
    }
    if(cof_wet_uv_count==cof_wet_uv_capacity) {
        size_t capacity=cof_wet_uv_capacity?cof_wet_uv_capacity*2:1024;
        RgFloat2D *grown=realloc(cof_wet_uv,capacity*sizeof(*grown));
        if(!grown){cof_wet_failed=true;return;}cof_wet_uv=grown;cof_wet_uv_capacity=capacity;
    }
    cof_wet_uv[cof_wet_uv_count++]=(RgFloat2D){{u,v}};
}
static void CofRTWetnessFlush(RgMeshPrimitiveInfo *prim,RgEditorInfo *editor)
{
    if(!editor->layer3Exists || editor->layer3.pTextureName!=cof_wet_name)return;
    if(!cof_wet_failed && cof_wet_uv_count==prim->vertexCount) {
        editor->layer3.pTexCoord=cof_wet_uv;
        if(!cof_wet_reported) {
            unsigned covered=0;
            for(size_t i=0;i<cof_wet_uv_count;++i)
                if(cof_wet_uv[i].data[0]>1.f/COF_WET_SIZE || cof_wet_uv[i].data[1]>1.f/COF_WET_SIZE)++covered;
            if(covered) {
                cof_wet_reported=true;
                gEngfuncs.Con_Printf("COF_RTX_WETNESS_UPLOAD vertices=%u mapped=%u\n",prim->vertexCount,covered);
            }
        }
    }
    else {editor->layer3Exists=false;gEngfuncs.Con_Printf("COF_RTX_WETNESS_UV FAIL\n");}
}
