// Immutable source -> separate target, never neighbour reads from an image
// being written. No HUD, history, random-per-frame noise, or scene exposure lift.
#include "rtx_lens_mask.glsl"
float cofLensHash(vec2 p) {
    vec3 p3=fract(vec3(p.xyx)*.1031);
    p3+=dot(p3,p3.yzx+33.33);
    return fract((p3.x+p3.y)*p3.z);
}
vec3 cofLensSample(vec2 p) {
    ivec2 i=ivec2(floor(p)); vec2 f=fract(p);
    return mix(mix(effect_loadFromSource(i),effect_loadFromSource(i+ivec2(1,0)),f.x),
               mix(effect_loadFromSource(i+ivec2(0,1)),effect_loadFromSource(i+ivec2(1,1)),f.x),f.y);
}
#if COF_LOCAL_VISOR_MASK
float cofVisorTexel(ivec2 p) {
    p=clamp(p,ivec2(0),ivec2(127,63)); uint i=uint(p.y*128+p.x);
    return float((cofVisor[i/4u]>>((i%4u)*8u))&255u)/255.0;
}
#endif
float cofLensDirt(vec2 uv) {
#if COF_LOCAL_VISOR_MASK
    vec2 p=uv*vec2(127,63); ivec2 i=ivec2(floor(p)); vec2 f=fract(p);
    float m=mix(mix(cofVisorTexel(i),cofVisorTexel(i+ivec2(1,0)),f.x),
                mix(cofVisorTexel(i+ivec2(0,1)),cofVisorTexel(i+ivec2(1,1)),f.x),f.y);
    return smoothstep(.10,.70,m);
#else
    // Owned deterministic fallback: soft wipe arcs and sparse fine grain.
    vec2 p=uv-vec2(.31,.8);
    float arcs=.5+.5*sin(length(p)*175.0+sin(atan(p.y,p.x)*8.0)*2.0);
    return .12+.35*pow(arcs,6.0)+.16*cofLensHash(floor(uv*vec2(640,360)));
#endif
}
// Elliptical water lens and a tapering trail. Coordinates measured in screen
// heights, so water beads remain round on ultrawide and portrait displays.
void cofLensDrops(vec2 uv,vec2 size,float t,float wet,float dryAge,out vec2 offset,out float film) {
    vec2 p=uv*vec2(size.x/size.y,1); offset=vec2(0); film=0;
    for (int layer=0;layer<2;++layer) {
        float grid=layer==0?9.0:22.0;
        vec2 cell=vec2(floor(p.x*grid),0);
        // Independent column speeds, descending heads with stable lifetimes.
        float seed=cofLensHash(cell+float(layer)*71.0);
        float velocity=(.065+seed*.055)*(layer==0?1.0:.32);
        float clock=t*velocity;
        vec2 q=p*grid+vec2(0,-clock*grid);
        vec2 id=floor(q);
        for(int row=-1;row<=1;++row) {
            vec2 key=id+vec2(0,row);
            float h=cofLensHash(key+float(layer)*37.0);
            float present=smoothstep(h-.08,h+.08,wet*(layer==0?.65:.25))*smoothstep(0.0,.08,wet);
            vec2 c=key+vec2(.22+.56*cofLensHash(key+13.0),.3+.4*h);
            c.y+=clock*grid;
            // Under cover, reject heads that would have entered from the top
            // after precipitation stopped; old beads still travel and dry.
            if(dryAge>0.0) present*=smoothstep(dryAge*velocity-.01,dryAge*velocity,c.y/grid);
            c.x+=.07*sin(t*.7+h*23.0);
            vec2 d=(p-c/grid);
            float radius=(layer==0?.010:.003)*( .7+.7*h);
            vec2 n=d/vec2(radius,radius*(layer==0?1.65:1.0));
            float r2=dot(n,n);
            float body=(1.0-smoothstep(.55,1.0,r2))*present;
            offset+=n*body*radius*1.9;
            film=max(film,body);
            if(layer==0) {
                float trailLength=.025+.07*h;
                float trail= (1.0-smoothstep(radius*.12,radius*.48,abs(d.x))) *
                    smoothstep(-trailLength,-trailLength*.6,d.y)*(1.0-smoothstep(-radius*2.0,0.0,d.y));
                offset.x+=sin(d.x/max(radius,.001)*3.0)*trail*radius*.22*present;
                film=max(film,trail*.35*present);
            }
        }
    }
    offset*=size.y;
}
vec3 cofLensRender(ivec2 pix) {
    vec2 size=vec2(effect_getFramebufSize());
    vec2 uv=(vec2(pix)+.5)/size;
    float wet=clamp(push.custom.amplitude-.0001,0,1);
    float code=-push.custom.multX-1.0;
    float dirt=mod(code,512.0)/255.0;
    float dryAge=floor(code/512.0)/32.0;
    vec2 offset; float film;
    offset=vec2(0); film=0;
    if(wet>.001) cofLensDrops(uv,size,push.custom.speed,wet,dryAge,offset,film);
    vec3 original=effect_loadFromSource(pix);
    vec3 color=film>.001 ? cofLensSample(vec2(pix)+offset) : original;
    // Only highlights reveal oil/dust; no light positions shining through walls.
    // Tiny contiguous kernel avoids separate copies of the lamp silhouette.
    vec3 halo=vec3(0);
    for(int y=-1;y<=1;++y) for(int x=-1;x<=1;++x) {
        vec3 s=effect_loadFromSource(pix+ivec2(x,y)*2);
        float bright=max(s.r,max(s.g,s.b));
        halo+=s*smoothstep(.42,.9,bright)*.035;
    }
    // The bloom pyramid is already filtered and barriered by Bloom::Prepare /
    // Apply. Reuse its broad light footprint for smears; do not read stale mips
    // when bloom is disabled. Compress very bright lamps instead of whitening
    // the entire view. Descriptor layout remains the pinned framebuffer set.
    if(globalUniform.bloomIntensity>0.0) {
        vec3 broad=max(textureLod(framebufBloom_Mip4_Sampler,uv,0).rgb,vec3(0));
        halo+=.4*broad/(vec3(1)+broad);
    }
    float mask=cofLensDirt(uv);
    color+=halo*(dirt*mask*.75+wet*film*.38);
    // Curved meniscus: a restrained dark rim and scene-coloured highlight.
    color*=1.0-.075*film*(1.0-film);
    // A short horizontal oily glint, local to bright light, not a giant flare.
    vec3 streak=vec3(0);
    for(int j=-3;j<=3;++j) {
        if(j==0) continue;
        vec3 s=effect_loadFromSource(ivec2(vec2(pix)+vec2(float(j)*size.y*.004,0)));
        streak+=s*smoothstep(.72,1.0,max(s.r,max(s.g,s.b)))/6.0;
    }
    color+=streak*mask*dirt*.12;
    return mix(original,color,getProgress());
}
