// Numeric normal sidecar contract: RG=tangent slopes, B=height, A=254/255.
// Bounded parallax on generated gameplay materials only. This changes shading
// coordinates, not collision, silhouettes, ray-hit depth or shadow geometry.
#ifndef COF_RELIEF_GLSL
#define COF_RELIEF_GLSL
vec2 cofReliefUV(ShTriangle tr, vec2 uv, vec2 dx, vec2 dy, vec3 normal, vec3 toEye)
{
    if(tr.normalTexture==MATERIAL_NO_TEXTURE || globalUniform.normalMapStrength<=0.0)return uv;
    vec2 size=vec2(textureSize(getTexture(tr.normalTexture),0));
    // Use the minor footprint axis: the long axis grows at grazing angles
    // even for a nearby wall. Isotropic max-axis LOD erased that wall relief.
    vec2 px=dx*size, py=dy*size;
    float xx=dot(px,px), yy=dot(py,py), xy=dot(px,py);
    float footprint=sqrt(max(0.0,.5*(xx+yy-sqrt((xx-yy)*(xx-yy)+4.0*xy*xy))));
    float fade=1.0-smoothstep(1.5,5.0,footprint);
    if(fade<=0.0)return uv;
    float lod=max(0.0,log2(max(footprint,1.0)));
    vec4 sample0=getTextureSampleLod(tr.normalTexture,uv,lod);
    bool vehicle=abs(sample0.a-253.0/255.0)<.001;
    if(!vehicle && abs(sample0.a-254.0/255.0)>.001)return uv;
    // Flat coated glass must not shift its mask across the atlas into the
    // painted cabin or pillars when viewed at a shallow angle.
    if(vehicle && tr.occlusionRougnessMetallicTexture!=MATERIAL_NO_TEXTURE &&
       getTextureSampleLod(tr.occlusionRougnessMetallicTexture,uv,lod).a<.05)return uv;
    vec2 t1=tr.layerTexCoord[0][1]-tr.layerTexCoord[0][0];
    vec2 t2=tr.layerTexCoord[0][2]-tr.layerTexCoord[0][0];
    float det=t1.x*t2.y-t1.y*t2.x;
    if(abs(det)<1e-10)return uv;
    vec3 e1=tr.positions[1]-tr.positions[0],e2=tr.positions[2]-tr.positions[0];
    vec3 u=(e1*t2.y-e2*t1.y)/det, v=(e2*t1.x-e1*t2.x)/det;
    float a=dot(u,u),b=dot(u,v),c=dot(v,v),gram=a*c-b*b;
    if(gram<1e-12)return uv;
    vec3 eye=normalize(toEye);
    float facing=abs(dot(normal,eye));
    fade*=smoothstep(.015,.06,facing);
    float heightRange=min(length(u),length(v))*(vehicle?.008:.024)*fade;
    vec2 direction=vec2(dot(eye,u)*c-dot(eye,v)*b,dot(eye,v)*a-dot(eye,u)*b)/gram;
    vec2 delta=direction*heightRange/max(facing,.04);
    delta*=min(1.0,.12/max(length(delta),1e-6));
    int steps=int(clamp(length(delta*size)*1.5,16.0,64.0));
    vec2 p=uv+delta*.5,stepUV=delta/float(steps);
    float depth=0.0,stepDepth=1.0/float(steps);
    float surface=1.0-getTextureSampleLod(tr.normalTexture,p,lod).b;
    float before=surface;
    for(int i=0;i<64;++i) {
        if(i>=steps || depth>=surface)break;
        before=surface-depth;
        p-=stepUV;depth+=stepDepth;
        surface=1.0-getTextureSampleLod(tr.normalTexture,p,lod).b;
    }
    float after=depth-surface;
    return p+stepUV*clamp(after/max(before+after,1e-5),0.0,1.0);
}
#endif
