// Height-field visibility for the selected direct-light sample. This attenuates
// direct diffuse/specular only; it never darkens emission or invents ambient AO.
float cofReliefLightVisibility(ivec2 pix, Surface surf, vec3 lightPosition)
{
    if(globalUniform.normalMapStrength<=0.0)return 1.0;
    // Refracted/reflected pixels use a different ray footprint. Keep those on
    // their ordinary visibility path rather than applying camera differentials.
    if(texelFetch(framebufThroughput_Sampler,pix,0).a!=0.0)return 1.0;
    int inst,custom,geom,prim;vec2 bary;
    unpackVisibilityBuffer(texelFetch(framebufVisibilityBuffer_Sampler,pix,0),inst,custom,geom,prim,bary);
    ShTriangle tr=getTriangle(inst,custom,geom,prim);
    if(tr.normalTexture==MATERIAL_NO_TEXTURE)return 1.0;
    vec3 bc=vec3(1.0-bary.x-bary.y,bary);
    vec2 uv=tr.layerTexCoord[0]*bc;
    vec3 eye=globalUniform.cameraPosition.xyz;
    vec2 screen=getPixelUVWithJitter(getRegularPixFromCheckerboardPix(pix));
    vec2 dx=tr.layerTexCoord[0]*intersectRayTriangle(tr.positions,eye,getRayDirAX(screen))-uv;
    vec2 dy=tr.layerTexCoord[0]*intersectRayTriangle(tr.positions,eye,getRayDirAY(screen))-uv;
    vec2 size=vec2(textureSize(getTexture(tr.normalTexture),0));
    vec2 px=dx*size,py=dy*size;
    float xx=dot(px,px),yy=dot(py,py),xy=dot(px,py);
    float footprint=sqrt(max(0.0,.5*(xx+yy-sqrt((xx-yy)*(xx-yy)+4.0*xy*xy))));
    float fade=1.0-smoothstep(1.5,5.0,footprint);
    if(fade<=0.0)return 1.0;
    float lod=max(0.0,log2(max(footprint,1.0)));
    if(abs(getTextureSampleLod(tr.normalTexture,uv,lod).a-254.0/255.0)>.001)return 1.0;
    vec3 e1=tr.positions[1]-tr.positions[0],e2=tr.positions[2]-tr.positions[0];
    vec3 n=safeNormalize(cross(e1,e2));
    if(dot(n,surf.toViewerDir)<0.0)n=-n;
    uv=cofReliefUV(tr,uv,dx,dy,n,eye-surf.position);
    vec2 t1=tr.layerTexCoord[0][1]-tr.layerTexCoord[0][0];
    vec2 t2=tr.layerTexCoord[0][2]-tr.layerTexCoord[0][0];
    float det=t1.x*t2.y-t1.y*t2.x;
    if(abs(det)<1e-10)return 1.0;
    vec3 u=(e1*t2.y-e2*t1.y)/det,v=(e2*t1.x-e1*t2.x)/det;
    float a=dot(u,u),b=dot(u,v),c=dot(v,v),gram=a*c-b*b;
    if(gram<1e-12)return 1.0;
    vec3 l=safeNormalize(lightPosition-surf.position);
    float facing=dot(n,l);
    if(facing<=.025)return 1.0;
    fade*=smoothstep(.015,.06,abs(dot(n,surf.toViewerDir)));
    float range=min(length(u),length(v))*.024*fade;
    vec2 direction=vec2(dot(l,u)*c-dot(l,v)*b,dot(l,v)*a-dot(l,u)*b)/gram;
    vec2 delta=direction*range/max(facing,.04);
    float height=getTextureSampleLod(tr.normalTexture,uv,lod).b;
    float rise=min(1.0-height,.12/max(length(delta),1e-6));
    float blocked=0.0;
    for(int i=1;i<=16;++i){
        float z=rise*float(i)/16.0;
        float obstacle=getTextureSampleLod(tr.normalTexture,uv+delta*z,lod).b;
        blocked=max(blocked,smoothstep(.015,.065,obstacle-height-z));
    }
    return 1.0-blocked*fade;
}
