// Close-range material detail, evaluated in surface UV space (never screen/time).
// Only CoF numeric sidecars opt in; the menu and stock materials keep their path.
#ifndef COF_SURFACE_DETAIL_GLSL
#define COF_SURFACE_DETAIL_GLSL
float cofDetailHash(vec2 p)
{
    uvec2 v=uvec2(ivec2(p));
    uint h=v.x*1597334677u ^ v.y*3812015801u;
    h=(h^(h>>16))*2246822519u;
    h=(h^(h>>13))*3266489917u;
    return float(h^(h>>16))*(1.0/4294967295.0);
}

// Value and analytical gradient of a C2-continuous height field. No finite
// differences, texture allocations, per-frame randomness or camera-space grain.
vec3 cofDetailNoise(vec2 p)
{
    vec2 cell=floor(p), f=fract(p);
    vec2 s=f*f*f*(f*(f*6.0-15.0)+10.0);
    vec2 d=30.0*f*f*(f*(f-2.0)+1.0);
    float a=cofDetailHash(cell), b=cofDetailHash(cell+vec2(1,0));
    float c=cofDetailHash(cell+vec2(0,1)), e=cofDetailHash(cell+vec2(1,1));
    return vec3(mix(mix(a,b,s.x),mix(c,e,s.x),s.y),
                d.x*mix(b-a,e-c,s.y),d.y*mix(c-a,e-b,s.x));
}

void cofSurfaceDetail(ShTriangle tr, vec2 uv, vec2 dx, vec2 dy,
                      float marker, float metallic, inout float roughness, inout vec2 slope)
{
    if(abs(marker-254.0/255.0)>.001 || globalUniform.normalMapStrength<=0.0 ||
       tr.layerColorTextures[0]==MATERIAL_NO_TEXTURE)return;
    // Use original texel density, not the resolution of the authored sidecar.
    vec2 size=vec2(textureSize(getTexture(tr.layerColorTextures[0]),0));
    vec2 p=uv*size;
    float footprint=max(length(dx*size),length(dy*size));
    // Smooth/wet surfaces retain their coating. Rough dielectric surfaces get
    // mineral grain; metal receives a much smaller irregularity.
    float porous=smoothstep(.34,.78,roughness)*(1.0-.8*metallic);
    float strength=mix(.025,.32,porous);
    vec2 grain=vec2(0);
    float variation=0.0;
    float unresolved=0.0;
    for(int octave=0;octave<3;++octave) {
        float frequency=octave==0 ? .35 : octave==1 ? .91 : 2.17;
        float amplitude=octave==0 ? 1.0 : octave==1 ? .55 : .28;
        float resolved=1.0-smoothstep(.20,.65,footprint*frequency);
        if(resolved>0.0) {
            vec3 n=cofDetailNoise(p*frequency+vec2(17.3,41.7)*float(octave));
            grain+=n.yz*amplitude*resolved;
            variation+=(n.x-.5)*amplitude*resolved;
        }
        unresolved+=amplitude*amplitude*(1.0-resolved);
    }
    slope-=grain*strength;
    // The subpixel bump variance broadens the lobe instead of sparkling or
    // disappearing as the player walks away. Perceptual roughness -> alpha^2.
    float r=clamp(roughness+variation*.20*porous,.06,.99);
    roughness=clamp(pow(min(1.0,pow(r,4.0)+.08*strength*strength*unresolved),.25),
                    max(globalUniform.minRoughness,.06),.99);
}
#endif
