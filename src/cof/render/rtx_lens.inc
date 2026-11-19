/* Gameplay lens pass: the existing waves push constants carry a tagged mode.
 * Positive xMultiplier retains the upstream underwater effect unchanged.
 * The ping-pong pass runs after bloom/upscaling, BEFORE raster HUD and menus. */
if (cameramedia == RG_MEDIA_TYPE_VACUUM) {
    float visible = cof_rt_menu_scene ? 0 : gEngfuncs.pfnGetCvarFloat("cof_lens_visible");
    float wet = bound(0, gEngfuncs.pfnGetCvarFloat("cof_lens_wetness"), 1);
    float dirt = bound(0, gEngfuncs.pfnGetCvarFloat("rt_lens_dirt"), 2);
    float flares = bound(0, gEngfuncs.pfnGetCvarFloat("rt_lens_flares"), 2);
    waves_effect.isActive = visible > 0 && (wet > .001f || dirt > 0 || flares > 0 ||
        gEngfuncs.pfnGetCvarFloat("rt_bloom") > 0);
    waves_effect.transitionDurationIn = 0;
    waves_effect.transitionDurationOut = 0;
    waves_effect.amplitude = .0001f + wet;
    waves_effect.speed = gEngfuncs.pfnGetCvarFloat("cof_lens_time");
    // Exact float integer (<2^24): dirt bits 0-8, dry age bits 9-19,
    // flare strength in quarter steps in bits 20-23. No ABI expansion.
    int dirtCode = (int)(dirt*255.0f+.5f);
    int dryCode = (int)(bound(0,gEngfuncs.pfnGetCvarFloat("cof_lens_drytime"),63)*32.0f+.5f);
    int flareCode = (int)(flares*4.0f+.5f);
    waves_effect.xMultiplier = -1.0f - (float)(dirtCode+512*dryCode+1048576*flareCode);
    if (getenv("COF_SMOKETEST") || getenv("COF_RTX_LENSTEST")) {
        static int lastOptics=-1;
        int state=(waves_effect.isActive?16:0)+flareCode;
        if(lastOptics!=state) {
            lastOptics=state;
            gEngfuncs.Con_Printf("COF_RTX_OPTICS active=%d flares=%.2f packed=%.0f menu=%d wide_streaks=0\n",
                waves_effect.isActive,flareCode*.25f,-waves_effect.xMultiplier-1.0f,cof_rt_menu_scene);
        }
    }
    // Separate menu presentation: independent of level weather and gameplay
    // wetness. Amplitude >= 2 tags the menu glass without changing the ABI.
    if (cof_rt_menu_scene) {
        waves_effect.isActive=gEngfuncs.pfnGetCvarFloat("cof_menu_glass_visible")>0 &&
            gEngfuncs.pfnGetCvarFloat("rt_menu_glass")>0 &&
            gEngfuncs.pfnGetCvarFloat("cof_menu_rain_film")==0;
        waves_effect.amplitude=3.0f;
        waves_effect.speed=gEngfuncs.pfnGetCvarFloat("cof_menu_glass_time");
        waves_effect.xMultiplier=-256.0f;
    }
}
