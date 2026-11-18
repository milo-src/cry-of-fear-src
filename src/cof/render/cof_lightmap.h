/* Source-owned decode of CoF/Paranoia directional BSP lighting.
 * Native client 10059660/10059880/10059f30, analysis/graphics/lighting.md.
 * This implements the original flat-normal fallback, not per-pixel bump.
 */
#ifndef COF_LIGHTMAP_H
#define COF_LIGHTMAP_H

static qboolean CofDirectionalLightmap( const msurface_t *surf, int count, uint *output )
{
    int ambient = -1, diffuse = -1, direction = -1;
    if( !surf->samples ) return false;
    for( int j = 0; j < MAXLIGHTMAPS && surf->styles[j] != 255; ++j )
    {
        if( surf->styles[j] == 61 ) ambient = j;
        if( surf->styles[j] == 62 ) diffuse = j;
        if( surf->styles[j] == 63 ) direction = j;
    }
    if( ambient < 0 ) return false;
    for( int i = 0; i < count; ++i )
    {
        const color24 *a = &surf->samples[ambient * count + i];
        float rgb[3] = { a->r, a->g, a->b };
        if( diffuse >= 0 && direction >= 0 )
        {
            const color24 *d = &surf->samples[diffuse * count + i];
            const float z = surf->samples[direction * count + i].b / 127.0f - 1.0f;
            rgb[0] += d->r * z;
            rgb[1] += d->g * z;
            rgb[2] += d->b * z;
        }
        /* Native default gl_gamma=1, contrast=1, brightness=0. Native
         * quantizes with common RGB peak normalization before upload. The
         * source engine retains its display gamma/overbright stage afterward.
         */
        const float peak = Q_max( rgb[0], Q_max( rgb[1], rgb[2] ));
        const float scale = peak > 255.0f ? 255.0f / peak : 1.0f;
        for( int k = 0; k < 3; ++k )
            output[i * 3 + k] = (uint)(Q_max( 0.0f, rgb[k] * scale )) * 256;
    }
    return true;
}

#endif
