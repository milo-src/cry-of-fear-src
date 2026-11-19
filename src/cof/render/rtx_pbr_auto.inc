/* Conservative fallback for arbitrary WAD/BSP textures, including custom maps.
 * Numeric sidecars are cached under rt/mat/cof_auto; source images are read only.
 * Bounded per-renderer storage: if exhausted, retain the ordinary scalar PBR. */
#include <direct.h>
#define COF_AUTO_PBR_LIMIT 512
typedef struct {
    char original[256], alias[128];
    qboolean ready, reported;
} CofAutoPbr;
static CofAutoPbr cof_auto_pbr[COF_AUTO_PBR_LIMIT];

static CofAutoPbr *CofAutoPbrFind(const char *name)
{
    if (!name) return NULL;
    for (int i=0;i<COF_AUTO_PBR_LIMIT;++i)
        if (cof_auto_pbr[i].original[0] && !Q_stricmp(name,cof_auto_pbr[i].original)) return &cof_auto_pbr[i];
    return NULL;
}

static void CofAutoPbrDelete(const char *name)
{
    CofAutoPbr *entry=CofAutoPbrFind(name);
    if (!entry) return;
    if (entry->ready) {
        RgResult result=rgMarkOriginalTextureAsDeleted(rg_instance,entry->alias);
        RG_CHECK(result);
    }
    memset(entry,0,sizeof(*entry));
}

static qboolean CofPbrWriteKtx(const char *alias,const char *suffix,unsigned w,unsigned h,const unsigned char *rgba)
{
    char path[256];
    Q_snprintf(path,sizeof(path),"rt/mat/%s_%s.ktx2",alias,suffix);
    // Windows is little endian, matching KTX2. Every payload has full mips.
    unsigned levels=1;
    for (unsigned x=w,y=h;x>1 || y>1;x=x>1?x/2:1,y=y>1?y/2:1) ++levels;
    unsigned header[13]={37,1,w,h,0,0,1,levels,0,80+levels*24,92,0,0};
    uint64_t zero[2]={0,0}, index[10][3]={{0}};
    unsigned dfd[23]={92,0,2|(88<<16),1|(1<<8)|(1<<16),0,4,0};
    for (unsigned i=0;i<4;++i) {
        dfd[7+i*4]=(i*8)|(7<<16)|((i==3?15:i)<<24);
        dfd[10+i*4]=255;
    }
    if (levels>10) return false;
    size_t sizes[10],offsets[10],total=0;
    for (unsigned i=0,x=w,y=h;i<levels;++i,x=x>1?x/2:1,y=y>1?y/2:1) {
        offsets[i]=total; sizes[i]=(size_t)x*y*4; total+=sizes[i];
    }
    unsigned char *mips=malloc(total);
    if (!mips) return false;
    memcpy(mips,rgba,sizes[0]);
    unsigned x=w,y=h;
    for (unsigned i=1;i<levels;++i) {
        unsigned nx=x>1?x/2:1,ny=y>1?y/2:1;
        for (unsigned v=0;v<ny;++v) for (unsigned u=0;u<nx;++u) for (unsigned c=0;c<4;++c) {
            unsigned sum=0,count=0;
            for (unsigned dy=0;dy<(y>1?2:1);++dy) for (unsigned dx=0;dx<(x>1?2:1);++dx) {
                sum+=mips[offsets[i-1]+((v*2+dy)*x+u*2+dx)*4+c]; ++count;
            }
            mips[offsets[i]+(v*nx+u)*4+c]=(sum+count/2)/count;
        }
        x=nx;y=ny;
    }
    uint64_t cursor=(80+levels*24+92+7)&~7u;
    for (int i=(int)levels-1;i>=0;--i) {
        cursor=(cursor+7)&~(uint64_t)7;
        index[i][0]=cursor;index[i][1]=index[i][2]=sizes[i];cursor+=sizes[i];
    }
    FILE *file=fopen(path,"wb");
    if (!file) {free(mips);return false;}
    const unsigned char magic[12]={0xab,'K','T','X',' ','2','0',0xbb,13,10,26,10};
    qboolean ok=fwrite(magic,1,12,file)==12 && fwrite(header,1,52,file)==52 &&
        fwrite(zero,1,16,file)==16 && fwrite(index,24,levels,file)==levels && fwrite(dfd,1,92,file)==92;
    for (int i=(int)levels-1;ok && i>=0;--i) {
        while ((uint64_t)ftell(file)<index[i][0]) if (fputc(0,file)==EOF) {ok=false;break;}
        if (ok && fwrite(mips+offsets[i],1,sizes[i],file)!=sizes[i]) ok=false;
    }
    if (fclose(file)!=0) ok=false;
    free(mips);
    return ok;
}

static qboolean CofAutoPbrRegister(const RgOriginalTextureInfo *original)
{
    const char *key=original->pTextureName;
    if (!key || Q_strncmp(key,"#maps/",6) || strlen(key)>=256 ||
        !original->size.width || !original->size.height ||
        original->size.width>4096 || original->size.height>4096) return false;
    char name[256]; Q_strncpy(name,key+6,sizeof(name));
    size_t length=strlen(name);
    if (length>4 && !Q_stricmp(name+length-4,".mip")) name[length-4]=0;
    // No derived normal/roughness on void, sky, liquids, foliage cutouts,
    // animation frames or baked emissive surfaces. Those retain their adapters.
    if (!Q_stricmp(name,"black") || !Q_strnicmp(name,"sky",3) ||
        strchr("!{*+-~",name[0]) || !name[0]) return false;
    const unsigned char *pixels=original->pPixels;
    const size_t count=(size_t)original->size.width*original->size.height;
    uint64_t hash=14695981039346656037ull;
    for (size_t i=0;i<count*4;++i) {
        if ((i&3)==3 && pixels[i]!=255) return false;
        hash=(hash^pixels[i])*1099511628211ull;
    }
    // Same pixels under two distinct texture names must own separate aliases:
    // deleting one engine texture must not invalidate the other's material.
    for (const unsigned char *s=(const unsigned char*)key;*s;++s)
        hash=(hash^*s)*1099511628211ull;
    CofAutoPbr *entry=CofAutoPbrFind(key);
    if (entry) CofAutoPbrDelete(key);
    if (!entry) for (int i=0;i<COF_AUTO_PBR_LIMIT;++i) if (!cof_auto_pbr[i].original[0]) {entry=&cof_auto_pbr[i];break;}
    if (!entry) return false;
    if (!cof_surface_count) CofRTLoadSurfaceTypes();
    char type=CofRTSurfaceTypeFor(name);
    RgEditorInfo surface={0}; CofRTSurfaceResponse(&surface,name);
    float roughness=surface.pbrInfo.roughnessDefault;
    // Unknown materials are matte dielectrics. Acoustic metal labels often
    // represent paint, so never infer metallic from color/name or brightness.
    float relief=type=='M'||type=='G'||type=='V'||type=='Y' ? .07f : type=='W' ? .18f : .15f;
    unsigned w=original->size.width,h=original->size.height;
    while (w>256 || h>256) {w=w>1?w/2:1;h=h>1?h/2:1;}
    float *luma=malloc((size_t)w*h*sizeof(float)),*detail=malloc((size_t)w*h*sizeof(float));
    unsigned char *orm=malloc((size_t)w*h*4),*normal=malloc((size_t)w*h*4);
    if (!luma || !detail || !orm || !normal) {free(luma);free(detail);free(orm);free(normal);return false;}
    for (unsigned y=0;y<h;++y) for (unsigned x=0;x<w;++x) {
        size_t src=((size_t)y*original->size.height/h*original->size.width+(size_t)x*original->size.width/w)*4;
        luma[y*w+x]=(pixels[src]*.2126f+pixels[src+1]*.7152f+pixels[src+2]*.0722f)/255.f;
    }
    float variance=0;
    for (unsigned y=0;y<h;++y) for (unsigned x=0;x<w;++x) {
        float avg=0,local=0;
        for (int dy=-3;dy<=3;++dy) for (int dx=-3;dx<=3;++dx)
            avg+=luma[(((int)y+dy*3+12*(int)h)%h)*w+((int)x+dx*3+12*(int)w)%w];
        for (int dy=-1;dy<=1;++dy) for (int dx=-1;dx<=1;++dx)
            local+=luma[(((int)y+dy+3*(int)h)%h)*w+((int)x+dx+3*(int)w)%w];
        detail[y*w+x]=local/9-avg/49;
        variance+=detail[y*w+x]*detail[y*w+x];
    }
    // Contrast-normalized medium-scale detail survives the tracer's wider
    // normal mip footprint. A floor avoids amplifying flat/noisy textures.
    const float contrast=fmaxf(.06f,3*sqrtf(variance/(w*h)));
    for (unsigned i=0;i<w*h;++i) detail[i]=bound(-1,detail[i]/contrast,1);
    for (unsigned y=0;y<h;++y) for (unsigned x=0;x<w;++x) {
        unsigned i=y*w+x;
        float dx=detail[y*w+(x+3)%w]-detail[y*w+(x+3*w-3)%w];
        float dy=detail[((y+3)%h)*w+x]-detail[((y+3*h-3)%h)*w+x];
        orm[i*4]=orm[i*4+3]=255;orm[i*4+2]=0;
        orm[i*4+1]=(unsigned char)(255*bound(.25f,roughness-detail[i]*.12f,.99f));
        normal[i*4]=(unsigned char)(255*(.5f-bound(-.30f,dx*relief,.30f)*.5f)+.5f);
        normal[i*4+1]=(unsigned char)(255*(.5f-bound(-.30f,dy*relief,.30f)*.5f)+.5f);
        normal[i*4+2]=normal[i*4+3]=255;
    }
    Q_snprintf(entry->alias,sizeof(entry->alias),"cof_auto/v2_%016llx_%ux%u_%u",(unsigned long long)hash,w,h,(unsigned char)type);
    _mkdir("rt/mat");_mkdir("rt/mat/cof_auto");
    qboolean ok=CofPbrWriteKtx(entry->alias,"orm",w,h,orm) && CofPbrWriteKtx(entry->alias,"n",w,h,normal);
    free(luma);free(detail);free(orm);free(normal);
    if (!ok) {memset(entry,0,sizeof(*entry));return false;}
    RgOriginalTextureInfo alias=*original;alias.pTextureName=entry->alias;
    RgResult result=rgProvideOriginalTexture(rg_instance,&alias);
    RG_CHECK(result);
    entry->ready=result==RG_RESULT_SUCCESS || result==RG_RESULT_SUCCESS_FOUND_TEXTURE;
    Q_strncpy(entry->original,key,sizeof(entry->original));
    gEngfuncs.Con_DPrintf("COF_RTX_PBR_AUTO_REGISTER %s type=%c ready=%d\n",key,type?type:'?',entry->ready);
    return entry->ready;
}
