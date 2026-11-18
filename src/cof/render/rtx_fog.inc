/* The client owns SetFog, including scripted activation and fade timing.
 * Do not activate dormant env_fog entities by reading the BSP alone. */
{
    float start=gEngfuncs.pfnGetCvarFloat("cof_fog_start");
    float end=gEngfuncs.pfnGetCvarFloat("cof_fog_end");
    qboolean active=!cof_rt_menu_scene && ENGINE_GET_PARM(PARM_CONNSTATE)==ca_active &&
        ENGINE_GET_PARM(PARM_WATER_LEVEL)<2 &&
        gEngfuncs.pfnGetCvarFloat("cof_fog_enable")!=0 &&
        isfinite(start) && isfinite(end) && start>0 && end>start;
    if (active) {
        // Paired ABI with rtx_fog.glsl. These fields are otherwise unused by
        // simple-depth fog. The custom final pass uses the original linear
        // curve instead of the tracer's unrelated exponential approximation.
        volumetric_params.enable=true;
        volumetric_params.useSimpleDepthBased=true;
        volumetric_params.assymetry=-1;
        volumetric_params.scaterring=start;
        volumetric_params.lightMultiplier=end;
        volumetric_params.maxHistoryLength=0;
        volumetric_params.useIlluminationVolume=false;
        volumetric_params.ambientColor=(RgFloat3D){{
            bound(0,gEngfuncs.pfnGetCvarFloat("cof_fog_r"),255)/255.f,
            bound(0,gEngfuncs.pfnGetCvarFloat("cof_fog_g"),255)/255.f,
            bound(0,gEngfuncs.pfnGetCvarFloat("cof_fog_b"),255)/255.f}};
    }
    static int previous=-1;
    if (previous!=(int)active) {
        previous=(int)active;
        gEngfuncs.Con_Printf("COF_RTX_AUTHORED_FOG active=%d start=%.2f end=%.2f menu=%d\n",active,start,end,cof_rt_menu_scene);
    }
}
