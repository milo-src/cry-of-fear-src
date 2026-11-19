/* Deterministic curved cards. Caller owns bounded scratch memory; no heap use.
 * Original UV/alpha coverage and connectivity are preserved by subdivision. */
#ifndef COF_FOLIAGE_MESH_H
#define COF_FOLIAGE_MESH_H
#include <math.h>

static float CofLeafDot(const float *a,const float *b)
{ return a[0]*b[0]+a[1]*b[1]+a[2]*b[2]; }
static void CofLeafCross(const float *a,const float *b,float *n)
{ n[0]=a[1]*b[2]-a[2]*b[1];n[1]=a[2]*b[0]-a[0]*b[2];n[2]=a[0]*b[1]-a[1]*b[0]; }

static RgPrimitiveVertex CofLeafMid(RgPrimitiveVertex a,RgPrimitiveVertex b)
{
    for(int j=0;j<3;++j){a.position[j]=(a.position[j]+b.position[j])*.5f;a.normal[j]=(a.normal[j]+b.normal[j])*.5f;}
    for(int j=0;j<2;++j)a.texCoord[j]=(a.texCoord[j]+b.texCoord[j])*.5f;
    unsigned color=0;
    for(int j=0;j<4;++j)color|=((((a.color>>(j*8))&255)+((b.color>>(j*8))&255)+1)/2)<<(j*8);
    a.color=color;
    return a;
}

static unsigned CofLeafSubdivide(const RgPrimitiveVertex *vertices,unsigned vertexCount,
    const unsigned *indices,unsigned indexCount,RgPrimitiveVertex *output,unsigned capacity)
{
    unsigned count=indices?indexCount:vertexCount;
    if(!vertices || !output || !count || count%3 || count>capacity/4)return 0;
    for(unsigned i=0;indices && i<count;++i)if(indices[i]>=vertexCount)return 0;
    for(unsigned i=0;i<count;i+=3)
    {
        RgPrimitiveVertex v[6]={vertices[indices?indices[i]:i],vertices[indices?indices[i+1]:i+1],vertices[indices?indices[i+2]:i+2]};
        float t1[2],t2[2],e1[3],e2[3],u[3],w[3],n[3];
        for(int j=0;j<2;++j){t1[j]=v[1].texCoord[j]-v[0].texCoord[j];t2[j]=v[2].texCoord[j]-v[0].texCoord[j];}
        for(int j=0;j<3;++j){e1[j]=v[1].position[j]-v[0].position[j];e2[j]=v[2].position[j]-v[0].position[j];}
        float det=t1[0]*t2[1]-t1[1]*t2[0];
        v[3]=CofLeafMid(v[0],v[1]);v[4]=CofLeafMid(v[1],v[2]);v[5]=CofLeafMid(v[2],v[0]);
        if(fabsf(det)>1e-6f)
        {
            for(int j=0;j<3;++j){u[j]=(e1[j]*t2[1]-e2[j]*t1[1])/det;w[j]=(e2[j]*t1[0]-e1[j]*t2[0])/det;}
            CofLeafCross(u,w,n);float length=sqrtf(CofLeafDot(n,n));
            float scale=fminf(sqrtf(CofLeafDot(u,u)),sqrtf(CofLeafDot(w,w)));
            if(length>1e-6f && isfinite(length) && isfinite(scale))
            {
                // UV orientation, not view direction: the geometry is identical
                // for the camera, shadows, reflections and successive frames.
                for(int j=0;j<3;++j)n[j]/=length;
                float amplitude=fminf(6.0f,scale*.035f);
                float sign=CofLeafDot(n,v[0].normal)<0?-1.0f:1.0f;
                for(int k=0;k<6;++k)
                {
                    float x=v[k].texCoord[0],y=v[k].texCoord[1];
                    if(x<0 || x>1 || y<0 || y>1)continue;
                    float sx=sinf(3.14159265f*x),sy=sinf(3.14159265f*y);
                    float height=amplitude*sx*sy;
                    float dx=amplitude*3.14159265f*cosf(3.14159265f*x)*sy;
                    float dy=amplitude*3.14159265f*sx*cosf(3.14159265f*y);
                    float du[3],dv[3],nn[3];
                    for(int j=0;j<3;++j){v[k].position[j]+=n[j]*height;du[j]=u[j]+n[j]*dx;dv[j]=w[j]+n[j]*dy;}
                    CofLeafCross(du,dv,nn);float len=sqrtf(CofLeafDot(nn,nn));
                    for(int j=0;j<3;++j)v[k].normal[j]=sign*nn[j]/len;
                    for(int j=0;j<4;++j)v[k].tangent[j]=0; // RTGL regenerates from curved geometry/UVs
                }
            }
        }
        const unsigned order[12]={0,3,5,3,1,4,5,4,2,3,4,5};
        for(int j=0;j<12;++j)output[i*4+j]=v[order[j]];
    }
    return count*4;
}
#endif
