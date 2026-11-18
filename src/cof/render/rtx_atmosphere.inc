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
}
