        /* Launcher-selected presets; reapplied after loading archived GL settings.
         * This is a new CoF reconstruction feature, not an original game setting. */
        {
            const char *selected = getenv("COF_RTX_PROFILE");
            int profile = selected ? atoi(selected) : 1;
            if(profile < 0 || profile > 2) profile = 1;
            int method = RT_CVAR_TO_BOOL(_rt_dlss_available) ? 2 :
                RT_CVAR_TO_BOOL(_rt_fsr3_available) ? 1 : 0;
            gEngfuncs.Cvar_SetValue("rt_upscale_method", method);
            gEngfuncs.Cvar_SetValue("rt_upscale_quality", method ? 4 - profile : 0);
            gEngfuncs.Cvar_SetValue("rt_renderscale", 0);
            gEngfuncs.Cvar_SetValue("rt_framegen", 0);
            gEngfuncs.Cvar_SetValue("rt_shadowrays", profile + 1);
            gEngfuncs.Cvar_SetValue("rt_indir2bounces", profile > 0);
            gEngfuncs.Cvar_SetValue("rt_denoiser", 0);
            gEngfuncs.Cvar_SetValue("rt_antifirefly", 1);
            // Calm ripples keep reflected architecture readable in flooded rooms.
            gEngfuncs.Cvar_SetValue("rt_normalmap_stren_water", .60f);
            gEngfuncs.Cvar_SetValue("rt_reflrefr_depth", profile == 0 ? 4 : 6);
            gEngfuncs.Cvar_SetValue("rt_me_water_r", 163);
            gEngfuncs.Cvar_SetValue("rt_me_water_g", 198);
            gEngfuncs.Cvar_SetValue("rt_me_water_b", 190);
            gEngfuncs.Cvar_SetValue("rt_me_water_density", .75f);
            // Thin atmospheric haze; avoid the un-reprojected illumination grid.
            gEngfuncs.Cvar_SetValue("rt_volume_type", profile == 0 ? 0 : 1);
            gEngfuncs.Cvar_SetValue("rt_volume_scatter", .25f);
            gEngfuncs.Cvar_SetValue("rt_volume_ambient", .30f);
            gEngfuncs.Cvar_SetValue("rt_volume_lassymetry", .45f);
            gEngfuncs.Cvar_SetValue("rt_volume_illumgrid", 0);
            gEngfuncs.Cvar_SetValue("rt_volume_history", 4);
            gEngfuncs.Cvar_SetValue("rt_volume_far", 900);
            gEngfuncs.Cvar_SetValue("rt_light_radius", .045f);
            gEngfuncs.Cvar_SetValue("rt_light_s", 1100);
            gEngfuncs.Cvar_SetValue("rt_bloom", 1);
            gEngfuncs.Cvar_SetValue("rt_bloom_intensity", .10f);
            gEngfuncs.Cvar_SetValue("rt_bloom_threshold", 4);
            gEngfuncs.Cvar_SetValue("rt_bloom_emis_mult", 3);
            gEngfuncs.Cvar_SetValue("rt_ef_chraber", 0);
            gEngfuncs.Con_Printf("COF_RTX profile=%d upscaler=%d framegen=0\n", profile, method);
        }
