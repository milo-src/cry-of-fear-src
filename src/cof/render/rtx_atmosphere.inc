/* Restrained scene grading for playable maps. The menu keeps its calibrated
 * native cinematic look; no change to exposure or the rasterized UI layer. */
if (!cof_rt_menu_scene) {
    // A faint cool aerial perspective separates silhouettes without a grey veil.
    volumetric_params.ambientColor.data[0] *= .28f;
    volumetric_params.ambientColor.data[1] *= .34f;
    volumetric_params.ambientColor.data[2] *= .42f;
    volumetric_params.scaterring *= .72f;
    // Keep local light shafts but do not introduce a sky light on indoor maps.
    volumetric_params.fallbackSourceColor=(RgFloat3D){{0,0,0}};
    // Weather comes from the original RainData message plus a client roof trace.
    // Smoothed exposure avoids fog popping at doors and does not affect menus.
    float rain=bound(0,gEngfuncs.pfnGetCvarFloat("cof_rain_exposure"),1);
    volumetric_params.scaterring *= 1.f+.45f*rain;
    volumetric_params.assymetry = bound(-.8f,volumetric_params.assymetry,.65f);
    volumetric_params.volumetricFar *= 1.f-.15f*rain;
    // Bound temporal reuse. The old illumination grid caused bright trails.
    volumetric_params.useIlluminationVolume=false;
    volumetric_params.maxHistoryLength=bound(0,volumetric_params.maxHistoryLength,4);
}
