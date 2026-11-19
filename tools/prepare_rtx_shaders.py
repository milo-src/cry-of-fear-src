"""Compile source-owned shader adaptation; verify ABI against the pinned runtime."""
from pathlib import Path
import hashlib
import json
import shutil
import struct
import urllib.request

ROOT=Path(__file__).resolve().parents[1]

def prepare():
    cache=ROOT/'deps/rtx/rtgl-source'
    pins=json.loads((ROOT/'src/cof/render/shader-dependencies.json').read_text())
    target=ROOT/'build/rtx-shader-source'
    for relative,expected in pins['files'].items():
        p=cache/relative
        if not p.exists():
            url='https://raw.githubusercontent.com/boofiboi/RayTracedGL1/'+pins['commit']+'/'+relative
            data=urllib.request.urlopen(url,timeout=60).read()
            if hashlib.sha256(data).hexdigest()!=expected:
                raise RuntimeError('Downloaded shader dependency checksum mismatch: '+relative)
            p.parent.mkdir(parents=True,exist_ok=True)
            p.write_bytes(data)
        if hashlib.sha256(p.read_bytes()).hexdigest()!=expected:
            raise RuntimeError('Cached shader dependency checksum mismatch: '+relative)
        if relative.startswith(('Source/Shaders/','Source/Generated/')):
            dest=target/relative.removeprefix('Source/')
            dest.parent.mkdir(parents=True,exist_ok=True)
            shutil.copy2(p,dest)
    shutil.copy2(cache/'LICENSE',target/'LICENSE')
    lens=target/'Shaders/EfWaves.comp'
    text=lens.read_text().replace('#version 460','#version 460\n#extension GL_GOOGLE_include_directive : require',1)
    text=text.replace('void main()', '#include "rtx_lens.glsl"\n\nvoid main()',1)
    anchor='    float tx = getMult(pix, push.custom.speed, push.custom.multX);'
    if text.count(anchor)!=1:raise ValueError('Lens shader entry hook changed')
    text=text.replace(anchor,'''    if (push.custom.multX < 0.0) {
        effect_storeToTarget(cofLensRender(pix),pix);
        return;
    }
'''+anchor)
    lens.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_lens.glsl',lens.parent/'rtx_lens.glsl')
    from import_lens_mask import prepare_include
    prepare_include(lens.parent/'rtx_lens_mask.glsl')
    shader=target/'Shaders/CmPrepareFinal.comp'
    text=shader.read_text()
    text=text.replace('#version 460', '#version 460\n#extension GL_GOOGLE_include_directive : require', 1)
    # A visible diffuser can be white after tonemapping while its unboosted
    # emission falls below the generic HDR bloom threshold. Preserve that
    # visible-emission contribution for optical glare, without changing any
    # lighting ray or adding a duplicate sampled light. max avoids counting
    # the same emission twice when the original bloom input is already bright.
    anchor='''    return bloom * smoothstep( 0,
                               globalUniform.bloomThreshold,
                               getLuminance( bloom ) );'''
    if text.count(anchor)!=1:raise ValueError('Visible emitter bloom hook changed')
    text=text.replace(anchor,'''    vec3 thresholded=bloom * smoothstep(0, globalUniform.bloomThreshold, getLuminance(bloom));
    vec3 visibleEmission=max(screenEmis,vec3(0))*globalUniform.emissionMaxScreenColor*.125;
    if(any(isnan(visibleEmission)) || any(isinf(visibleEmission))) visibleEmission=vec3(0);
    return max(thresholded,visibleEmission);''')
    anchor='void main()'
    if text.count(anchor)!=1:raise ValueError('Final shader entry changed')
    text=text.replace(anchor,'#include "rtx_fog.glsl"\n\n'+anchor)
    anchor='hdr             = hdr * volumetric.a + volumetric.rgb;'
    if text.count(anchor)!=1:raise ValueError('Final shader volume composition changed')
    text=text.replace(anchor,'if (!cofAuthoredFog()) '+anchor)
    anchor='    if( globalUniform.debugShowFlags != 0 )'
    if text.count(anchor)!=1:raise ValueError('Final shader fog insertion changed')
    text=text.replace(anchor,'''    if (cofAuthoredFog()) {
        float visibility=cofFogVisibility(pix);
        color=mix(globalUniform.volumeAmbient.rgb,color,visibility);
        bloom*=visibility;
    }

'''+anchor)
    shader.write_text(text)
    volume=target/'Shaders/RtVolumetric.rgen'
    text=volume.read_text()
    text=text.replace('#version 460', '#version 460\n#extension GL_GOOGLE_include_directive : require', 1)
    # This image is indexed by camera-frustum cells, not stable world cells.
    # Mixing last frame's radiance at the same index drags light through walls
    # when the camera moves. CmScatterAccum already reprojects the actual
    # volume; use that bounded filter instead of this second 20-frame history.
    start=text.index('        vec3 radiance_Prev = imageLoad( g_illuminationVolume, cell ).rgb;')
    end=text.index('        uint seed =',start)
    text=text[:start]+text[end:]
    anchor='        radiance = mix( radiance_Prev, radiance, 0.05 );'
    if text.count(anchor)!=1:raise ValueError('Volume history hook changed')
    text=text.replace(anchor,'        // CoF: current-frame light only; no stale frustum-cell history.')
    start=text.index('        vec3 tolight = vec3( 0, 1, 0 );')
    end=text.index('\n    }\n    else',start)
    text=text[:start]+'''        // Two independent light reservoirs per froxel. Evaluate each phase
        // separately: averaging directions first erases crossing light shafts.
        for (uint sampleIndex=0; sampleIndex<2; ++sampleIndex) {
            uint sampleSeed=seed ^ (sampleIndex*0x9e3779b9u);
            vec3 propagation=vec3(0,1,0);
            vec3 incoming=processDirectIllumination(sampleSeed,s,0,propagation)*4*M_PI;
            radiance+=incoming*0.5;
            lighting+=globalUniform.volumeLightMult*incoming*0.5*
                phaseFunction_Schlick(-propagation,toviewer,globalUniform.volumeAsymmetry);
        }
'''+text[end:]
    volume.write_text(text)
    common=target/'Shaders/RaygenCommon.h'
    text=common.read_text()
    anchor='void shade(const Surface surf, const LightSample light, float oneOverPdf, out vec3 diffuse, out vec3 specular)\n{'
    if text.count(anchor)!=1:raise ValueError('Volume scattering hook changed')
    text=text.replace(anchor,anchor+'''
#if LIGHT_SAMPLE_METHOD == LIGHT_SAMPLE_METHOD_VOLUME
    // A volume has no surface normal or Lambertian hemisphere. Normalize by
    // 4*pi here to match RtVolumetric's radiance conversion; phase comes later.
    diffuse=light.dw*light.color*oneOverPdf/(4*M_PI);
    specular=vec3(0);
    return;
#endif
''')
    anchor='    const vec3 start = surf.position + surf.toViewerDir * RAY_ORIGIN_LEAK_BIAS;'
    if text.count(anchor)!=1:raise ValueError('Volume shadow origin hook changed')
    text=text.replace(anchor,'''#if LIGHT_SAMPLE_METHOD == LIGHT_SAMPLE_METHOD_VOLUME
    const vec3 start=surf.position;
#else
'''+anchor+'\n#endif')
    anchor='    const LightSample light = sampleLight(lightSources[reservoir.selected], surf.position, pointRnd);'
    if text.count(anchor)!=1:raise ValueError('Volume light direction hook changed')
    text=text.replace(anchor,anchor+'''
#if LIGHT_SAMPLE_METHOD == LIGHT_SAMPLE_METHOD_VOLUME
    out_lightdirection=safeNormalize(surf.position-light.position);
#endif
''')
    common.write_text(text)
    # Preserve the normal-map footprint: the stock shader's 5x derivative
    # multiplier destroys the medium/fine material response at gameplay distance.
    hit=target/'Shaders/HitInfo.inl'
    # Layer 3 carries wetness. Reflection cone derivatives must have the same
    # capacity as the four-layer triangle data; the upstream array has only 3.
    raycone=target/'Shaders/RayCone.h'
    cone=raycone.read_text()
    if cone.count('float u[3];')!=1:raise ValueError('Ray-cone layer capacity hook changed')
    raycone.write_text(cone.replace('float u[3];','float u[4];'))
    text=hit.read_text()
    anchor='const float suppressDetails = 5.0;'
    if text.count(anchor)!=1:raise ValueError('Normal footprint hook changed')
    hit.write_text(text.replace(anchor,'const float suppressDetails = 1.0;'))
    # Reserved zero-alpha layer-3 tag carries a linear wetness mask in alpha.
    # Stock shaders ignore the overlay; our primary/reflection/GI paths agree.
    text=hit.read_text()
    anchor='        if( layerColorTextures[ i ] != MATERIAL_NO_TEXTURE )'
    wet_albedo="""        if (i == 3 && layerColors[3] == 0x00492511u && layerColorTextures[3] != MATERIAL_NO_TEXTURE) {
#if defined(HITINFO_INL_PRIM)
            float wet=getTextureSampleGrad(layerColorTextures[3],texCoords[3],dPdx[3],dPdy[3]).a;
#elif defined(HITINFO_INL_RFL)
            float wet=getTextureSampleDerivSet(layerColorTextures[3],texCoords[3],derivSet,3).a;
#else
            float wet=getTextureSampleLod(layerColorTextures[3],texCoords[3],lod).a;
#endif
            dst *= 1.0 - 0.23 * clamp(wet,0.0,1.0);
            continue;
        }
"""
    if text.count(anchor)!=1:raise ValueError('Wet albedo hook changed')
    text=text.replace(anchor,wet_albedo+anchor)
    anchor='    h.roughness = max( h.roughness, max( globalUniform.minRoughness, 0.03 ) );'
    wet_response="""    if ((tr.geometryInstanceFlags & GEOM_INST_FLAG_EXISTS_LAYER3) != 0 &&
        tr.layerColors[3] == 0x00492511u && tr.layerColorTextures[3] != MATERIAL_NO_TEXTURE) {
#if defined(HITINFO_INL_PRIM)
        float wet=getTextureSampleGrad(tr.layerColorTextures[3],texCoords[3],dTdx[3],dTdy[3]).a;
#elif defined(HITINFO_INL_RFL)
        float wet=getTextureSampleDerivSet(tr.layerColorTextures[3],texCoords[3],derivSet,3).a;
#else
        float wet=getTextureSampleLod(tr.layerColorTextures[3],texCoords[3],lod).a;
#endif
        // A patchy dielectric film, not metal: retain the material F0 and the
        // existing normals. Porous/partly sheltered areas keep broad highlights.
        float film=smoothstep(0.12,0.92,clamp(wet,0.0,1.0));
        h.roughness=mix(h.roughness,min(h.roughness,0.13),film);
    }
"""
    if text.count(anchor)!=1:raise ValueError('Wet roughness hook changed')
    hit.write_text(text.replace(anchor,wet_response+anchor))
    text=hit.read_text()
    anchor='#if defined( HITINFO_INL_PRIM )\n// "Ray Traced Reflections'
    if text.count(anchor)!=1:raise ValueError('Relief helper hook changed')
    text=text.replace(anchor,'#include "rtx_relief.glsl"\n\n'+anchor)
    if text.count('const vec2 texCoords[] = {')!=2:raise ValueError('Relief UV layouts changed')
    text=text.replace('const vec2 texCoords[] = {','vec2 texCoords[] = {')
    anchor='    h.albedo = processAlbedoGrad( tr.geometryInstanceFlags,'
    if text.count(anchor)!=1:raise ValueError('Primary relief hook changed')
    text=text.replace(anchor,'    texCoords[0]=cofReliefUV(tr,texCoords[0],dTdx[0],dTdy[0],h.normal,rayOrigin-h.hitPosition);\n\n'+anchor)
    anchor='    h.albedo = processAlbedoRayConeDeriv( tr.geometryInstanceFlags,'
    if text.count(anchor)!=1:raise ValueError('Reflection relief hook changed')
    text=text.replace(anchor,'    texCoords[0]=cofReliefUV(tr,texCoords[0],vec2(derivSet.u[0],0),vec2(0,derivSet.u[0]),h.normal,rayOrigin-h.hitPosition);\n\n'+anchor)
    hit.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_relief.glsl',hit.parent/'rtx_relief.glsl')
    text=hit.read_text()
    text=text.replace('#include "rtx_relief.glsl"','#include "rtx_relief.glsl"\n#include "rtx_surface_detail.glsl"')
    text=text.replace('#include "rtx_surface_detail.glsl"','#include "rtx_surface_detail.glsl"\n#include "rtx_vehicle_glass.glsl"')
    text=text.replace('#include "rtx_vehicle_glass.glsl"','#include "rtx_vehicle_glass.glsl"\n#include "rtx_window.glsl"')
    anchor='    if( tr.occlusionRougnessMetallicTexture != MATERIAL_NO_TEXTURE )'
    if text.count(anchor)!=1:raise ValueError('Vehicle glass ORM hook changed')
    text=text.replace(anchor,'    float cofGlassCoverage=0.0;\n    bool cofWindowMirror=false;\n'+anchor)
    text=text.replace('const vec3 orm =','const vec4 orm =')
    for sample in (
        'getTextureSampleGrad( tr.occlusionRougnessMetallicTexture, texCoords[ 0 ], dTdx[ 0 ], dTdy[ 0 ] )',
        'getTextureSampleDerivSet( tr.occlusionRougnessMetallicTexture, texCoords[ 0 ], derivSet, 0 )',
        'getTextureSampleLod( tr.occlusionRougnessMetallicTexture, texCoords[ 0 ], lod )',
    ):
        if text.count(sample+'.xyz')!=1:raise ValueError('Vehicle glass channel hook changed')
        text=text.replace(sample+'.xyz',sample)
    anchor='        h.metallic  = orm[ 2 ];'
    if text.count(anchor)!=1:raise ValueError('Vehicle glass material hook changed')
    text=text.replace(anchor,anchor+'''
        if(orm.a<.999 && tr.normalTexture!=MATERIAL_NO_TEXTURE) {
            float marker=getTextureSampleLod(tr.normalTexture,texCoords[0],0).a;
            cofGlassCoverage=cofVehicleGlass(orm,marker,h.albedo,h.roughness,h.metallic);
            cofGlassCoverage=max(cofGlassCoverage,cofWindowMaterial(tr,texCoords[0],orm,
                rayOrigin-h.hitPosition,h.normal,h.albedo,h.roughness,h.metallic));
            // Only clear, fully covered authored panes enter the sharp pass.
            // Partial mask edges, frosted panes and native transparent media
            // retain their existing material path.
            cofWindowMirror=abs(marker-252.0/255.0)<.001 &&
                cofGlassCoverage>.98 && orm.g<.1 &&
                (tr.geometryInstanceFlags & (GEOM_INST_FLAG_REFRACT |
                 GEOM_INST_FLAG_GLASS_IF_SMOOTH | GEOM_INST_FLAG_PORTAL |
                 GEOM_INST_FLAG_MEDIA_TYPE_WATER | GEOM_INST_FLAG_MEDIA_TYPE_ACID))==0;
        }
''')
    anchor='        vec2 nrm ='
    if text.count(anchor)!=1:raise ValueError('Surface detail normal sample hook changed')
    text=text.replace(anchor,'        vec4 cofNormalSample =')
    anchor='''            .xy;
        nrm.xy = nrm.xy * 2.0 - vec2( 1.0 );'''
    if text.count(anchor)!=1:raise ValueError('Surface detail normal decode hook changed')
    text=text.replace(anchor,'''            ;
        vec2 nrm = (cofNormalSample.xy * 2.0 - vec2(1.0))*(1.0-cofGlassCoverage);
        // Window RG encodes room coordinates rather than a normal vector.
        if(abs(cofNormalSample.a-252.0/255.0)<.001) {
            nrm=vec2(0);
            // Retain procedural plaster/stone grain outside the apertures.
            if(cofGlassCoverage<.001)cofNormalSample.a=254.0/255.0;
        }
    #if defined(HITINFO_INL_PRIM)
        cofSurfaceDetail(tr,texCoords[0],dTdx[0],dTdy[0],cofNormalSample.a,h.metallic,h.roughness,nrm);
    #elif defined(HITINFO_INL_RFL)
        cofSurfaceDetail(tr,texCoords[0],vec2(derivSet.u[0],0),vec2(0,derivSet.u[0]),cofNormalSample.a,h.metallic,h.roughness,nrm);
    #endif''')
    anchor='    h.geometryInstanceFlags = tr.geometryInstanceFlags;'
    if text.count(anchor)!=1:raise ValueError('Window reflection flags hook changed')
    text=text.replace(anchor,anchor+'''
    if(cofWindowMirror)
        h.geometryInstanceFlags |= COF_WINDOW_COATING | GEOM_INST_FLAG_REFLECT;
''')
    # Leaves are thin, two-sided surfaces. Smooth studio normals otherwise stay
    # directed away from the camera on their back side and look pitch black.
    anchor='    h.instCustomIndex = instCustomIndex;'
    if text.count(anchor)!=1:raise ValueError('Foliage normal orientation hook changed')
    text=text.replace(anchor,'''    if(tr.normalTexture!=MATERIAL_NO_TEXTURE &&
       abs(getTextureSampleLod(tr.normalTexture,texCoords[0],0).a-251.0/255.0)<.001 &&
       dot(h.normal,rayOrigin-h.hitPosition)<0.0) h.normal=-h.normal;

'''+anchor)
    hit.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_surface_detail.glsl',hit.parent/'rtx_surface_detail.glsl')
    shutil.copy2(ROOT/'src/cof/render/rtx_vehicle_glass.glsl',hit.parent/'rtx_vehicle_glass.glsl')
    shutil.copy2(ROOT/'src/cof/render/rtx_window.glsl',hit.parent/'rtx_window.glsl')
    primary=target/'Shaders/RaygenPrimary.inl'
    text=primary.read_text()
    anchor='        vec3  rayOrigin = h.hitPosition;'
    if text.count(anchor)!=1:raise ValueError('Window reflection split hook changed')
    text=text.replace(anchor,'''        const bool cofWindowCoating=(h.geometryInstanceFlags & COF_WINDOW_COATING)!=0;
        const vec3 cofWindowF=cofWindowReflectance(normal,rayDir);
        if(cofWindowCoating && !wasSplit)
        {
            // Use the renderer's water/glass checkerboard reconstruction:
            // one lane shades the virtual room, the other traces the scene.
            // No emission, extra buffers or rays through the solid BSP wall.
            wasSplit=true;
            throughput*=2.0;
            if(isPixOdd)
            {
                throughput*=vec3(1.0)-cofWindowF;
                h.metallic=0.0;
                h.roughness=.65;
                h.geometryInstanceFlags &= ~(COF_WINDOW_COATING | GEOM_INST_FLAG_REFLECT);
                if(i==0)
                {
                    // Keep primary visibility and motion intact: currentPayload
                    // only has its instance ID restored until the first trace.
                    imageStore(framebufMetallicRoughness,pix,vec4(h.metallic,h.roughness,0,0));
                    imageStore(framebufThroughput,pix,vec4(throughput,1.0));
                    return;
                }
                hitInfoWasOverwritten=true;
                break;
            }
        }

'''+anchor)
    anchor='''                throughput *= getFresnelSchlick( max( 0, dot( normal, rayDir ) ),
                                                 getSpecularColor( h.albedo, h.metallic ) );'''
    if text.count(anchor)!=1:raise ValueError('Window reflection throughput hook changed')
    text=text.replace(anchor,'''                throughput *= cofWindowCoating ? cofWindowF :
                    getFresnelSchlick(max(0,dot(normal,rayDir)),getSpecularColor(h.albedo,h.metallic));''')
    primary.write_text(text)
    direct=target/'Shaders/RtRaygenDirect.rgen'
    text=direct.read_text().replace('#version 460','#version 460\n#extension GL_GOOGLE_include_directive : require',1)
    text=text.replace('#define MATERIAL_MAX_ALBEDO_LAYERS 0','#define MATERIAL_MAX_ALBEDO_LAYERS 4')
    text=text.replace('#include "RaygenCommon.h"','#include "RaygenCommon.h"\n#include "rtx_relief_shadow.glsl"')
    anchor='    // demodulate for denoising'
    if text.count(anchor)!=1:raise ValueError('Direct relief shadow hook changed')
    text=text.replace(anchor,'''    if (isReservoirValid(r)) {
        LightSample chosen=sampleLight(lightSources[r.selected],surf.position,getLightPointRnd(seed));
        float visible=cofReliefLightVisibility(pix,surf,chosen.position);
        diffuse*=visible; specular*=visible;
    }

'''+anchor)
    direct.write_text(text)
    shutil.copy2(ROOT/'src/cof/render/rtx_relief_shadow.glsl',hit.parent/'rtx_relief_shadow.glsl')
    # Authored water should absorb light, not emit a constant colored fog.
    # Keep the original menu's near-black transmission approximation unchanged.
    media=target/'Shaders/Media.h'
    text=media.read_text()
    anchor='return inscattering;'
    if text.count(anchor)!=1:raise ValueError('Water scattering hook changed')
    media.write_text(text.replace(anchor,"return (perMatWaterColor.r > 0.001) ? vec3(0.0) : inscattering;"))
    for name in ('RtRaygenPrimary.rgen','RtRaygenReflRefr.rgen','RtRaygenIndirectInit.rgen','RtRaygenIndirectFinal.rgen'):
        entry=target/'Shaders'/name
        entry.write_text(entry.read_text().replace('#version 460','#version 460\n#extension GL_GOOGLE_include_directive : require',1))
    shutil.copy2(ROOT/'src/cof/render/rtx_fog.glsl',shader.parent/'rtx_fog.glsl')
    shutil.copy2(ROOT/'src/cof/render/shaders.wscript',shader.parent/'wscript')
    shutil.copy2(ROOT/'external/xash-rt/waf',shader.parent/'waf')
    return shader.parent

def interface(path):
    """SPIR-V descriptor types/layouts, independent of compiler-assigned IDs."""
    data=path.read_bytes()
    words=struct.unpack('<%dI'%(len(data)//4),data)
    if words[0]!=0x07230203:raise ValueError('Invalid SPIR-V')
    types={};decor={};members={};variables={};constants={}
    i=5
    while i<len(words):
        count=words[i]>>16;op=words[i]&65535;v=words[i+1:i+count]
        if not count:raise ValueError('Invalid SPIR-V instruction')
        if 19<=op<=33 or op==5341:types[v[0]]=(op,v[1:]) # OpTypeAccelerationStructureKHR
        elif op==43:constants[v[1]]=v[2:]
        elif op==59:variables[v[1]]=(v[0],v[2])
        elif op==71:decor.setdefault(v[0],[]).append(v[1:])
        elif op==72:members.setdefault(v[0],[]).append(v[1:])
        i+=count
    def signature(t):
        op,v=types[t]
        if op in (23,24,27,29):args=(signature(v[0]),*v[1:])
        elif op==25:args=(signature(v[0]),*v[1:])
        elif op==28:args=(signature(v[0]),constants[v[1]])
        elif op==30:args=tuple(signature(x) for x in v)
        elif op==32:args=(v[0],signature(v[1]))
        else:args=v
        return op,args,tuple(sorted(decor.get(t,[]))),tuple(sorted(members.get(t,[])))
    result={}
    for var,(t,storage) in variables.items():
        d=dict((x[0],x[1:]) for x in decor.get(var,[]))
        if 33 in d and 34 in d:result[(d[34][0],d[33][0])]=signature(t)
        elif storage==9:result[('push_constant',0)]=signature(t)
    return result

def verify(original,compiled):
    old,new=interface(original),interface(compiled)
    if not new or any(key not in old or old[key]!=value for key,value in new.items()):
        raise RuntimeError('CoF shader descriptor/uniform ABI differs from pinned RTGL shader')
    print('PASS: '+compiled.name+' descriptor and uniform ABI matches pinned RTGL')
