#version 120
uniform sampler2D diffuseMap;
uniform sampler2D projectionMap;
uniform sampler2D normalMap;
uniform vec3 lightOrigin;
uniform vec3 lightForward;
uniform vec3 lightRight;
uniform vec3 lightUp;
uniform vec2 projectionScale;
uniform float lightRadius;
uniform float alphaCutoff;
uniform vec3 surfaceNormal;
uniform vec3 surfaceTangent;
uniform vec3 surfaceBitangent;
uniform bool hasNormalMap;
varying vec3 receiverPosition;
varying vec2 diffuseUV;
void main()
{
    vec3 delta = receiverPosition - lightOrigin;
    float depth = dot(delta, lightForward);
    // Project in homogeneous light space; never wrap the cookie or light behind it.
    if (depth <= 0.0 || depth >= lightRadius) discard;
    // Native BSP traversal selects the face side visible from the light.
    if (dot(surfaceNormal, -delta) <= 0.0) discard;
    // Native 1005c460 biases with scale(.5,-.5,1): the T axis is inverted.
    vec2 uv = vec2(dot(delta, lightRight), -dot(delta, lightUp));
    uv = vec2(0.5) + uv * projectionScale / depth;
    if (uv.x <= 0.0 || uv.x >= 1.0 || uv.y <= 0.0 || uv.y >= 1.0) discard;
    vec4 diffuse = texture2D(diffuseMap, diffuseUV);
    if (diffuse.a <= alphaCutoff) discard;
    vec3 mask = texture2D(projectionMap, uv).rgb;
    float distanceFraction = depth / lightRadius;
    float attenuation = 1.0 - distanceFraction * distanceFraction;
    // Native combiner mode7 DOT3_RGBA has RGB_SCALE=1; no invented overbright.
    // Native 10061eb0 independently normalizes texinfo S/T; there is no
    // Gram-Schmidt or handedness flip. 10063150 normalizes the LIGHT after
    // transforming into this basis (normalization cube), not the sampled map.
    vec3 tangentLight = normalize(vec3(dot(surfaceTangent, -delta),
        dot(surfaceBitangent, -delta), dot(surfaceNormal, -delta)));
    vec3 materialNormal = hasNormalMap ? texture2D(normalMap, diffuseUV).rgb * 2.0 - 1.0 : vec3(0.0, 0.0, 1.0);
    float incidence = clamp(dot(materialNormal, tangentLight), 0.0, 1.0);
    // The native projected combiner never consumes the light's stored RGB.
    // Its downstream diffuse pass (100627e0 DST_COLOR,SRC_COLOR) multiplies
    // the accumulated illumination by 2*albedo. Xash already drew its base,
    // so reproduce the corresponding additive term here.
    gl_FragColor = vec4(2.0 * diffuse.rgb * mask * attenuation * incidence, 1.0);
}
