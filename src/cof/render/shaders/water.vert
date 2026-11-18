#version 120
// Reconstructed from shipped cgshaders/water_vp.cg. See analysis/graphics/shaders.md.
uniform mat4 ModelViewProj;
uniform float flScreen;
varying vec2 OffsetUV;
varying vec2 SceneUV;
varying vec2 LegacySceneUV;
varying vec2 MaskUV;
void main()
{
    OffsetUV = gl_MultiTexCoord0.xy;
    SceneUV = gl_MultiTexCoord0.xy;
    LegacySceneUV = gl_MultiTexCoord0.xy + vec2(0.0, flScreen);
    MaskUV = gl_MultiTexCoord0.xy;
    gl_Position = ModelViewProj * gl_Vertex;
}
