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
    shader=target/'Shaders/CmPrepareFinal.comp'
    text=shader.read_text()
    text=text.replace('#version 460', '#version 460\n#extension GL_GOOGLE_include_directive : require', 1)
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
    volume.write_text(text)
    # Preserve the normal-map footprint: the stock shader's 5x derivative
    # multiplier destroys the medium/fine material response at gameplay distance.
    hit=target/'Shaders/HitInfo.inl'
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
            dst *= 1.0 - 0.16 * clamp(wet,0.0,1.0);
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
        h.roughness=mix(h.roughness,min(h.roughness,0.24),clamp(wet,0.0,1.0)*0.85);
    }
"""
    if text.count(anchor)!=1:raise ValueError('Wet roughness hook changed')
    hit.write_text(text.replace(anchor,wet_response+anchor))
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
    return result

def verify(original,compiled):
    old,new=interface(original),interface(compiled)
    if not new or any(key not in old or old[key]!=value for key,value in new.items()):
        raise RuntimeError('CoF shader descriptor/uniform ABI differs from pinned RTGL shader')
    print('PASS: '+compiled.name+' descriptor and uniform ABI matches pinned RTGL')
