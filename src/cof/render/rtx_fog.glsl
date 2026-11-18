// Authored GoldSrc GL_LINEAR fog, applied to the finished world image before
// the raster HUD. The host adapter reserves SIMPLE + asymmetry=-1 for this
// path: volumeScattering=start, volumeLightMult=end, volumeAmbient=RGB/255.
// Keeping this in display space also fogs emissive surfaces without having
// exposure/bloom turn a black distance mask into a glowing haze.
bool cofAuthoredFog()
{
    return globalUniform.volumeEnableType == VOLUME_ENABLE_SIMPLE &&
           globalUniform.volumeAsymmetry == -1.0 &&
           globalUniform.volumeLightMult > globalUniform.volumeScattering;
}
float cofFogVisibility(ivec2 pix)
{
    float z = texelFetch(framebufDepthNdc_Sampler, pix, 0).x;
    vec4 eye = globalUniform.invProjection * vec4(0, 0, z, 1);
    float depth = abs(eye.z) / max(abs(eye.w), 1e-8);
    return clamp((globalUniform.volumeLightMult - depth) /
                 (globalUniform.volumeLightMult - globalUniform.volumeScattering), 0.0, 1.0);
}
