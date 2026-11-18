#version 120
// Modern Cg path only. Identity and LegacySceneUV are unused by water_fp.cg.
uniform sampler2D OffsetTex; // original TEXUNIT0
uniform sampler2D DecalTex;  // original TEXUNIT2
uniform sampler2D MaskTex;   // original TEXUNIT3
uniform vec4 TexOffset;
varying vec2 OffsetUV;
varying vec2 SceneUV;
varying vec2 MaskUV;
void main()
{
    vec2 offset = texture2D(OffsetTex, OffsetUV).rg;
    vec2 sampleUV = SceneUV + TexOffset.xy * offset.r + TexOffset.zw * offset.g;
    vec3 scene = texture2D(DecalTex, sampleUV).rgb;
    float mask = texture2D(MaskTex, MaskUV).r;
    gl_FragColor = vec4(scene, 1.0) * mask;
}
