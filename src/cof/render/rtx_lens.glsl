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
    // The source is a low-contrast scatter mask (median about .22), not an
    // opacity mask. Preserve wipe marks instead of crushing most of it to zero.
    return smoothstep(.09,.40,m);
#else
    // Owned deterministic fallback: soft wipe arcs and sparse fine grain.
    vec2 p=uv-vec2(.31,.8);
    float arcs=.5+.5*sin(length(p)*175.0+sin(atan(p.y,p.x)*8.0)*2.0);
    return .12+.35*pow(arcs,6.0)+.16*cofLensHash(floor(uv*vec2(640,360)));
#endif
}
// Local highlight selection for rain and subtle wipe detail only. Gameplay
// streaks and optical-axis ghosts are deliberately absent: fixture geometry
// participates in the ray-traced scene instead of being imitated on screen.
float cofOpticsEdge(vec2 uv) {
    vec2 edge=min(uv,vec2(1)-uv);
    return smoothstep(0.0,.035,min(edge.x,edge.y));
}
vec3 cofOpticsSource(vec2 uv) {
    if(any(lessThan(uv,vec2(0))) || any(greaterThan(uv,vec2(1))))return vec3(0);
    // Upsampling ADDS the coarser levels into each finer bloom level. Isolate
    // local highlight contrast before gathering: otherwise every tap gathers
    // the same wide halo again and turns the lamp into a grey screen veil.
    vec3 fine=textureLod(framebufBloom_Mip3_Sampler,uv,0).rgb;
    vec3 wide=textureLod(framebufBloom_Mip5_Sampler,uv,0).rgb;
    vec3 c=max(fine-wide,vec3(0));
    float peak=max(c.r,max(c.g,c.b));
    // Bloom has already isolated highlights; its coarse levels distribute a
    // small lamp's energy over many pixels. Do not apply an LDR-size threshold
    // again here or small luminous diffusers disappear from the optical layer.
    return c*smoothstep(.004,.04,peak)*cofOpticsEdge(uv);
}
// Elliptical water lens and a tapering trail. Coordinates measured in screen
// heights, so water beads remain round on ultrawide and portrait displays.
void cofLensDrops(vec2 uv,vec2 size,float t,float wet,float dryAge,bool menuGlass,out vec2 offset,out float film) {
    vec2 p=uv*vec2(size.x/size.y,1); offset=vec2(0); film=0;
    for (int layer=0;layer<2;++layer) {
        float grid=layer==0?(menuGlass?6.0:9.0):22.0;
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
            float present=smoothstep(h-.08,h+.08,wet*(layer==0?(menuGlass?.28:.65):.25))*smoothstep(0.0,.08,wet);
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
                float trailX=d.x;
                if(menuGlass) trailX-=radius*.28*(sin(d.y*90.0+h*19.0)-sin(h*19.0));
                float trail= (1.0-smoothstep(radius*.12,radius*.48,abs(trailX))) *
                    smoothstep(-trailLength,-trailLength*.6,d.y)*(1.0-smoothstep(-radius*2.0,0.0,d.y));
                offset.x+=sin(d.x/max(radius,.001)*3.0)*trail*radius*.22*present;
                film=max(film,trail*.35*present);
            }
        }
    }
    offset*=size.y;
}
// Menu-only condensation. Stable irregular centres and two scales avoid a
// scrolling noise sheet; large moving drops above provide the draining layer.
void cofMenuBeads(vec2 uv,vec2 size,out vec2 bend,out float body,out float glint) {
    vec2 p=uv*vec2(size.x/size.y,1);
    bend=vec2(0);body=0;glint=0;
    float edge=smoothstep(.12,.48,abs(uv.x-.5));
    for(int layer=0;layer<2;++layer) {
        float grid=layer==0?38.0:73.0;
        vec2 cell=floor(p*grid);
        float seed=cofLensHash(cell+float(layer)*83.0);
        vec2 centre=vec2(.28+.44*cofLensHash(cell+12.0),.28+.44*cofLensHash(cell+43.0));
        vec2 n=(fract(p*grid)-centre)/vec2(.13+.12*seed,.18+.12*seed);
        float r=length(n);
        float present=step(seed,.14+edge*.50);
        float bead=(1.0-smoothstep(.65,1.0,r))*present;
        bend+=n*bead*(layer==0?1.6:.65)*size.y/720.0;
        body=max(body,bead);
        float rim=exp(-pow((r-.8)*10,2))*present;
        glint+=rim*max(0.0,dot(n,vec2(-.45,-.8)));
    }
}
vec3 cofLensRender(ivec2 pix) {
    vec2 size=vec2(effect_getFramebufSize());
    vec2 uv=(vec2(pix)+.5)/size;
    bool menuGlass=push.custom.amplitude>=2.0;
    float wet=clamp(push.custom.amplitude-(menuGlass?2.0:.0001),0,1);
    float code=-push.custom.multX-1.0;
    float dirt=mod(code,512.0)/255.0;
    float dryAge=mod(floor(code/512.0),2048.0)/32.0;
    vec2 offset; float film;
    offset=vec2(0); film=0;
    if(wet>.001) cofLensDrops(uv,size,push.custom.speed,wet,dryAge,menuGlass,offset,film);
    float beads=0, beadGlint=0;
    if(menuGlass) {
        vec2 bend;
        cofMenuBeads(uv,size,bend,beads,beadGlint);
        offset+=bend;
    }
    vec3 original=effect_loadFromSource(pix);
    vec3 color=max(film,beads)>.001 ? cofLensSample(vec2(pix)+offset) : original;
    if(!menuGlass && globalUniform.bloomIntensity>0.0) {
        // Compact radiance bloom, not an optical streak or a light-position
        // sprite. The traced HDR image supplies its shape, colour and occlusion.
        // Remove the coarse accumulated tail so nearby lamps do not fog the view.
        vec3 core=cofOpticsSource(uv);
        vec3 glow=vec3(1)-exp(-core*globalUniform.bloomIntensity*12.0);
        color+=glow*(vec3(1)-clamp(color,0,1));
    }
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
        vec3 nearGlow=max(textureLod(framebufBloom_Mip4_Sampler,uv,0).rgb,vec3(0));
        vec3 broad=max(textureLod(framebufBloom_Mip6_Sampler,uv,0).rgb,vec3(0));
        // Integrated, filtered source energy: no lamp-shaped duplicates from
        // sparse full-resolution taps, and no off-screen/occluded light proxy.
        // Preserve the separate menu glass treatment. Gameplay dirt should
        // reveal wipe detail near highlights, never add another broad fog bank.
        vec3 scatter=menuGlass ? nearGlow*1.5+broad*5.0 : cofOpticsSource(uv)*.5;
        halo+=vec3(1)-exp(-scatter);
    }
    float mask=cofLensDirt(uv);
    vec3 dirtGlow=halo*(dirt*mask*(menuGlass?.65:.22)+wet*film*.38);
    color+=menuGlass ? dirtGlow : (vec3(1)-exp(-dirtGlow))*(vec3(1)-clamp(color,0,1));
    // Curved meniscus: a restrained dark rim and scene-coloured highlight.
    color*=1.0-.075*film*(1.0-film);
    if(menuGlass) {
        // A faint reflected rim makes wet glass legible against the dark menu;
        // this is screen optics, never additional illumination in the level.
        float sceneLight=dot(original,vec3(.2126,.7152,.0722));
        float movingRim=4.0*film*(1.0-film)*smoothstep(.4,.6,film)*clamp(.35-offset.y*.12,0.0,1.0);
        color+=vec3(.78,.87,1.0)*(beadGlint+movingRim)*(.025+.16*sqrt(max(sceneLight,0.0)));
        float edge=smoothstep(.25,.7,length((uv-.5)*vec2(1.25,1)));
        color*=1.0-.12*edge;
    }
    return mix(original,color,getProgress());
}
