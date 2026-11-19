        /* Launcher-selected presets; reapplied after loading archived GL settings.
         * This is a new CoF reconstruction feature, not an original game setting. */
        {
            if (!gEngfuncs.pfnGetCvarPointer("rt_lens_flares"))
                gEngfuncs.Cvar_Get("rt_lens_flares", "0", FCVAR_ARCHIVE,
                    "Legacy setting; gameplay streaks/ghosts replaced by traced emitters");
            if (!gEngfuncs.pfnGetCvarPointer("rt_lens_dirt"))
                gEngfuncs.Cvar_Get("rt_lens_dirt", "1", FCVAR_ARCHIVE,
                    "RTX light-reactive lens smears, 0-2; independent of rain droplets");
            if (!gEngfuncs.pfnGetCvarPointer("rt_outdoor_wetness"))
                gEngfuncs.Cvar_Get("rt_outdoor_wetness", "1", FCVAR_ARCHIVE,
                    "RTX damp outdoor surfaces exposed to BSP sky, 0-1; reload map");
            if (!gEngfuncs.pfnGetCvarPointer("rt_light_shafts"))
                gEngfuncs.Cvar_Get("rt_light_shafts", "1.4", FCVAR_ARCHIVE,
                    "RTX local fog scattering strength, 0-2; menu unchanged");
            if (!gEngfuncs.pfnGetCvarPointer("rt_shore_wetness"))
                gEngfuncs.Cvar_Get("rt_shore_wetness", "1", FCVAR_ARCHIVE,
                    "RTX static water contact film on world surfaces; reload map");
            if (!gEngfuncs.pfnGetCvarPointer("rt_material_masks"))
                gEngfuncs.Cvar_Get("rt_material_masks", "1", FCVAR_ARCHIVE,
                    "Authored RTX roughness/normal masks on verified gameplay textures; reload map");
            // Register before config/command-line execution, without overriding
            // the user's values when the selected quality profile is reapplied.
            if (!gEngfuncs.pfnGetCvarPointer("rt_darkness_strength"))
                gEngfuncs.Cvar_Get("rt_darkness_strength", "0.94", FCVAR_ARCHIVE,
                    "Artistic absorption near black world faces, 0 disables; reload map");
            if (!gEngfuncs.pfnGetCvarPointer("rt_darkness_radius"))
                gEngfuncs.Cvar_Get("rt_darkness_radius", "192", FCVAR_ARCHIVE,
                    "Black-face absorption falloff in map units, 16-512; reload map");
            const char *selected = getenv("COF_RTX_PROFILE");
            int profile = selected ? atoi(selected) : 1;
            if(profile < 0 || profile > 2) profile = 1;
            int method = RT_CVAR_TO_BOOL(_rt_dlss_available) ? 2 :
                RT_CVAR_TO_BOOL(_rt_fsr3_available) ? 1 : 0;
            const char *upscaler = getenv("COF_RTX_UPSCALER");
            int requested = upscaler ? atoi(upscaler) : -1;
            if(requested >= 0 && requested <= 2) method = requested;
            // An explicit unsupported choice stays off, never silently switches vendor.
            if((method == 2 && !RT_CVAR_TO_BOOL(_rt_dlss_available)) ||
               (method == 1 && !RT_CVAR_TO_BOOL(_rt_fsr3_available))) method = 0;
            const char *qualitySetting = getenv("COF_RTX_UPSCALE_QUALITY");
            int quality = qualitySetting ? atoi(qualitySetting) : 4 - profile;
            if(quality < 1 || quality > 5) quality = 4 - profile;
            gEngfuncs.Cvar_SetValue("rt_upscale_method", method);
            gEngfuncs.Cvar_SetValue("rt_upscale_quality", method ? quality : 0);
            gEngfuncs.Cvar_SetValue("rt_renderscale", 0);
            gEngfuncs.Cvar_SetValue("rt_framegen", 0);
            gEngfuncs.Cvar_SetValue("rt_shadowrays", profile + 1);
            gEngfuncs.Cvar_SetValue("rt_indir2bounces", profile > 0);
            // Gameplay uses RELAX; the cinematic menu keeps its REBLUR filter.
            gEngfuncs.Cvar_SetValue("rt_denoiser", 1);
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
            // Hand-held beam: readable centre, feathered edge and slight parallax.
            gEngfuncs.Cvar_SetValue("rt_flsh_angle", 26);
            gEngfuncs.Cvar_SetValue("rt_flsh_radius", .025f);
            gEngfuncs.Cvar_SetValue("rt_flsh_r", -.12f);
            gEngfuncs.Cvar_SetValue("rt_flsh_u", -.12f);
            // Preserve the calibrated menu exposure. Gameplay overrides this
            // range in rtx_atmosphere.inc to prevent revealing dark areas.
            gEngfuncs.Cvar_SetValue("rt_tnmp_ev100_min", .5f);
            gEngfuncs.Cvar_SetValue("rt_tnmp_ev100_max", 7.7f);
            gEngfuncs.Cvar_SetValue("rt_tnmp_saturation_r", .15f);
            gEngfuncs.Cvar_SetValue("rt_tnmp_saturation_g", .15f);
            gEngfuncs.Cvar_SetValue("rt_tnmp_saturation_b", .15f);
            gEngfuncs.Cvar_SetValue("rt_texture_nearest", 0);
            gEngfuncs.Cvar_SetValue("rt_bloom", 1);
            gEngfuncs.Cvar_SetValue("rt_bloom_intensity", .10f);
            gEngfuncs.Cvar_SetValue("rt_bloom_threshold", 4);
            gEngfuncs.Cvar_SetValue("rt_bloom_emis_mult", 3);
            gEngfuncs.Cvar_SetValue("rt_ef_chraber", 0);
            gEngfuncs.Con_Printf("COF_RTX profile=%d upscaler=%d framegen=0\n", profile, method);
        }
