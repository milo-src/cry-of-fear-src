/* Gameplay preserves darkness rather than inventing ambient illumination.
 * The cinematic menu and the rasterized UI retain their separate grading. */
if (!cof_rt_menu_scene) {
    // Fixed baseline: looking into darkness must not raise the exposure.
    // EV 2 is the bridge's baseline, not a recovered GoldSrc camera constant.
    // Keep a nonzero range: RTGL's histogram divides by its width. Its
    // disableEyeAdaptation flag freezes history rather than selecting an EV.
    tnmp_params.ev100Min=2.0f;
    tnmp_params.ev100Max=2.001f;
    // Fog scatters actual light only; it does not glow in unlit rooms.
    volumetric_params.ambientColor=(RgFloat3D){{0,0,0}};
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
{
    static int previousPolicy=-1;
    if (previousPolicy!=(int)cof_rt_menu_scene) {
        previousPolicy=(int)cof_rt_menu_scene;
        gEngfuncs.Con_DPrintf("COF_RTX_EXPOSURE menu=%d min=%.3f max=%.3f fog_ambient=%.3f\n",
            previousPolicy,tnmp_params.ev100Min,tnmp_params.ev100Max,
            volumetric_params.ambientColor.data[0]);
    }
}
