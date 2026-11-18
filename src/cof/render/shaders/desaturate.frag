#version 120
// Native register-combiner pass 1005d7a0, not cgshaders/black_fp.cg.
uniform sampler2D DecalTex;
uniform float Desaturation;
varying vec2 SceneUV;
void main()
{
    vec3 scene = texture2D(DecalTex, SceneUV).rgb;
    float gray = dot(scene, vec3(0.32, 0.59, 0.09));
    gl_FragColor = vec4(vec3(gray), Desaturation);
}
