/* Gameplay lens pass: the existing waves push constants carry a tagged mode.
 * Positive xMultiplier retains the upstream underwater effect unchanged.
 * The ping-pong pass runs after bloom/upscaling, BEFORE raster HUD and menus. */
if (cameramedia == RG_MEDIA_TYPE_VACUUM) {
    float visible = cof_rt_menu_scene ? 0 : gEngfuncs.pfnGetCvarFloat("cof_lens_visible");
    float wet = bound(0, gEngfuncs.pfnGetCvarFloat("cof_lens_wetness"), 1);
    float dirt = bound(0, gEngfuncs.pfnGetCvarFloat("rt_lens_dirt"), 2);
    waves_effect.isActive = visible > 0 && (wet > .001f || dirt > 0);
    waves_effect.transitionDurationIn = 0;
    waves_effect.transitionDurationOut = 0;
    waves_effect.amplitude = .0001f + wet;
    waves_effect.speed = gEngfuncs.pfnGetCvarFloat("cof_lens_time");
    // Integer-valued float (<2^20, exact): low 9 bits = dirt/255,
    // remaining bits = time since last rain in 1/32 seconds. No ABI expansion.
    int dirtCode = (int)(dirt*255.0f+.5f);
    int dryCode = (int)(bound(0,gEngfuncs.pfnGetCvarFloat("cof_lens_drytime"),63)*32.0f+.5f);
    waves_effect.xMultiplier = -1.0f - (float)(dirtCode+512*dryCode);
}
