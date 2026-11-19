// Verified opaque facade windows: virtual room behind the authored aperture.
// No geometry/transparency/emission is added. Environment reflections still use
// the tracer's scene rays and Fresnel BRDF. ORM.A is inverse glass coverage;
// tagged N.RG is local window position, N.B is aspect/4, N.A is 252/255.
#ifndef COF_WINDOW_GLSL
#define COF_WINDOW_GLSL
// Private per-hit flag, never uploaded on whole facade geometry. The pinned
// renderer reserves this bit; it survives the primary -> reflection G-buffer.
#define COF_WINDOW_COATING GEOM_INST_FLAG_RESERVED_5

vec3 cofWindowReflectance(vec3 normal, vec3 direction)
{
    // Artistic dark, reflective glazing. Keep the reflection independent of
    // the room's furniture/albedo, and increase it towards grazing angles.
    return getFresnelSchlick(abs(dot(normal, direction)), vec3(.32,.34,.36));
}

float cofWindowBox(vec3 origin, vec3 direction, vec3 lo, vec3 hi)
{
    vec3 inv=mix(vec3(-1),vec3(1),greaterThanEqual(direction,vec3(0)))/max(abs(direction),vec3(.0001));
    vec3 a=(lo-origin)*inv,b=(hi-origin)*inv;
    vec3 nearT=min(a,b),farT=max(a,b);
    float enter=max(max(nearT.x,nearT.y),nearT.z);
    float leave=min(min(farT.x,farT.y),farT.z);
    return enter>0.0 && leave>=enter ? enter : 1e5;
}

vec3 cofWindowRoom(vec2 local, vec3 direction, float frost)
{
    vec3 origin=vec3(local*2.0-1.0,0);
    // Texture Y points down. Floor/ceiling and side walls create actual
    // perspective boundaries, rather than scrolling a flat room photograph.
    vec3 wall=vec3(direction.x>=0?1:-1,direction.y>=0?1:-1,2.3);
    vec3 distance=(wall-origin)/vec3(
        direction.x>=0?max(direction.x,.0001):min(direction.x,-.0001),
        direction.y>=0?max(direction.y,.0001):min(direction.y,-.0001),max(direction.z,.025));
    float t=min(min(distance.x,distance.y),distance.z);
    vec3 p=origin+direction*t;
    vec3 color=vec3(.16,.145,.125);
    if(distance.x<t+.001)color*=.55;
    if(distance.y<t+.001)color*=direction.y>0?vec3(.42,.34,.26):vec3(.66);
    if(distance.z<t+.001) {
        // Recessed curtain at the back. Folds stay anchored in room space.
        float folds=.88+.12*cos(p.x*24.0);
        color*=folds;
        float picture=step(abs(p.x+.35),.23)*step(abs(p.y+.32),.22);
        color=mix(color,vec3(.047,.053,.057),picture);
    }
    // Simple furniture silhouettes are intersected in the same virtual box.
    float desk=cofWindowBox(origin,direction,vec3(-.78,.42,1.25),vec3(.65,.53,2.15));
    float cabinet=cofWindowBox(origin,direction,vec3(.61,-.15,1.65),vec3(.95,1,2.25));
    if(min(desk,cabinet)<t)color=vec3(.052,.039,.027);
    float reveal=smoothstep(0.0,.12,min(min(local.x,1-local.x),min(local.y,1-local.y)));
    color*=mix(.38,1.0,reveal);
    return mix(color,vec3(.12,.135,.14),frost*.65);
}

float cofWindowMaterial(ShTriangle tr,vec2 uv,vec4 orm,vec3 toEye,vec3 normal,
                        inout vec3 albedo,inout float roughness,inout float metallic)
{
    vec4 data=getTextureSampleLod(tr.normalTexture,uv,0);
    if(abs(data.a-252.0/255.0)>.001)return 0.0;
    float glass=clamp(1.0-orm.a,0.0,1.0);
    if(glass<=0.0)return 0.0;
    vec3 room=vec3(.105,.12,.13);
    if(data.b>.015) {
        vec2 t1=tr.layerTexCoord[0][1]-tr.layerTexCoord[0][0];
        vec2 t2=tr.layerTexCoord[0][2]-tr.layerTexCoord[0][0];
        float det=t1.x*t2.y-t1.y*t2.x;
        if(abs(det)>1e-10) {
            vec3 e1=tr.positions[1]-tr.positions[0],e2=tr.positions[2]-tr.positions[0];
            vec3 u=safeNormalize((e1*t2.y-e2*t1.y)/det);
            vec3 v=safeNormalize((e2*t1.x-e1*t2.x)/det);
            vec3 eye=safeNormalize(toEye);
            vec3 direction=vec3(-dot(eye,u),-dot(eye,v)*data.b*4.0,max(abs(dot(eye,normal)),.025));
            room=cofWindowRoom(clamp(data.rg,0.0,1.0),direction,smoothstep(.1,.3,orm.g));
        }
    }
    // Keep a small amount of the original grime/curtain tone, without baked
    // outdoor highlights overwhelming the new reflection or room perspective.
    vec3 coating=room*.85+clamp(albedo,0.0,.5)*.15;
    albedo=mix(albedo,coating,glass);
    metallic=mix(metallic,.55,glass);
    roughness=mix(roughness,orm.g,glass);
    return glass;
}
#endif
