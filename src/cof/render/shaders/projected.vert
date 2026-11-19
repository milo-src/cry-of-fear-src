#version 120
varying vec3 receiverPosition;
varying vec2 diffuseUV;
void main()
{
    gl_Position = ftransform();
    receiverPosition = gl_Vertex.xyz;
    diffuseUV = gl_MultiTexCoord0.xy;
}
