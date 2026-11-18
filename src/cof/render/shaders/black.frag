#version 120
// Literal algebra of black_fp.cg; this is NOT weighted grayscale conversion.
uniform sampler2D DecalTex; // original TEXUNIT0
varying vec2 SceneUV;
void main()
{
    vec3 scene = texture2D(DecalTex, SceneUV).rgb;
    float expanded = 2.0 * ((scene.r + scene.g + scene.b) / 0.5 - 0.5);
    gl_FragColor = vec4(vec3(0.2 - expanded), 1.0);
}
