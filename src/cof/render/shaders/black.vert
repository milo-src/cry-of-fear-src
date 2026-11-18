#version 120
uniform mat4 ModelViewProj;
varying vec2 SceneUV;
void main()
{
    SceneUV = gl_MultiTexCoord0.xy;
    gl_Position = ModelViewProj * gl_Vertex;
}
