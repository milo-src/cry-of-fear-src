/*
gl_rlight.c - dynamic and static lights
Copyright (C) 2010 Uncle Mike

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#include "gl_local.h"
#include "pm_local.h"
#include "xash3d_mathlib.h"
#include "ref_params.h"

#if XASH_RAYTRACING

typedef struct rt_sun_light_t
{
    RgColor4DPacked32 pcolor;
    float             intensity;
    float             pitch;
    float             angle;
} rt_sun_light_t;

typedef struct rt_static_light_t
{
    vec3_t            abs_position;
    vec3_t            dir;
    RgColor4DPacked32 pcolor;
    float             intensity;
    uint32_t          index;
    int               light_style;
    qboolean          is_spot;
    float             spot_inner_cone_rad;
    float             spot_outer_cone_rad;
} rt_static_light_t;

#define RT_MAX_STATIC_LIGHTS        2048
#define RT_MAX_POTENTIAL_SUN_LIGHTS 16

struct
{
    // Need to save on the map start to add them in each frame
    rt_static_light_t static_lights[ RT_MAX_STATIC_LIGHTS ];
    int               static_lights_count;

    rt_sun_light_t potential_sun[ RT_MAX_POTENTIAL_SUN_LIGHTS ];
    uint32_t       potential_sun_count;

    rt_sun_light_t sun;
    qboolean       sun_exists;
} g_lights;


static void AddStaticLight( const vec3_t      abs_position,
                            const vec3_t      dir,
                            RgColor4DPacked32 pcolor,
                            float             intensity,
                            int               light_style,
                            qboolean          is_spot,
                            float             spot_cone,
                            float             spot_cone2 )
{
    if( g_lights.static_lights_count >= RT_MAX_STATIC_LIGHTS )
    {
        return;
    }

    uint32_t index = g_lights.static_lights_count;
    rt_static_light_t* dst = &g_lights.static_lights[ index ];
    {
        VectorCopy( abs_position, dst->abs_position );
        VectorCopy( dir, dst->dir );
        dst->pcolor      = pcolor;
        dst->intensity   = intensity;
        dst->index       = index;
        dst->light_style = light_style;
        dst->is_spot     = is_spot;

        dst->spot_inner_cone_rad = DEG2RAD( Q_min( spot_cone, spot_cone2 ) );
        dst->spot_outer_cone_rad = DEG2RAD( Q_max( spot_cone, spot_cone2 ) );
    }

    g_lights.static_lights_count++;
}


static void AddPotentialSun( float pitch, float angle, RgColor4DPacked32 pcolor, float intensity )
{
    uint32_t index = g_lights.potential_sun_count;
    assert( index < RT_MAX_POTENTIAL_SUN_LIGHTS );

    rt_sun_light_t* dst = &g_lights.potential_sun[ index ];
    {
        dst->pcolor    = pcolor;
        dst->intensity = intensity;
        dst->pitch     = pitch;
        dst->angle     = angle;
    }

    g_lights.potential_sun_count++;
}


static void FilterTheSunFromPotential( const char* mapname )
{
    g_lights.sun_exists = false;

    // for now, just get the first one
    if( g_lights.potential_sun_count > 0 )
    {
        g_lights.sun_exists = true;
        memcpy( &g_lights.sun, &g_lights.potential_sun[ 0 ], sizeof( rt_sun_light_t ) );
    }
}


void RT_ParseStaticLightEntities()
{
    g_lights.static_lights_count = 0;
    g_lights.potential_sun_count = 0;
    g_lights.sun_exists          = 0;

    const model_t* const world   = WORLDMODEL;
    assert( world );

    enum
    {
        LT_CLASS_UNKNOWN,
        LT_CLASS_POINT,
        LT_CLASS_SPOT,
        LT_CLASS_SUN_POTENTIAL,
    } classname = LT_CLASS_UNKNOWN;

    struct
    {
        vec3_t            origin;
        vec3_t            allangles;
        RgColor4DPacked32 pcolor;
        float             intensity;
        float             pitch;
        float             angle;
        int               style;
        float             cone;
        float             cone2;
    } light = { 0 };

    enum
    {
        LT_HAS_CLASS     = 1,
        LT_HAS_ORIGIN    = 2,
        LT_HAS_COLOR     = 4,
        LT_HAS_PITCH     = 8,
        LT_HAS_ANGLE     = 16,
        LT_HAS_SKY       = 32,
        LT_HAS_STYLE     = 64,
        LT_HAS_ALLANGLES = 128,
        LT_HAS_CONE      = 256,
        LT_HAS_CONE2     = 512,
    };


    uint32_t has = 0;
    char*    pos = world->entities;

    for( ;; )
    {
        string key, value;

        pos = COM_ParseFile( pos, key, sizeof( key ) );
        if( pos == NULL )
        {
            break;
        }

        if( key[ 0 ] == '{' )
        {
            classname = LT_CLASS_UNKNOWN;
            has       = 0;
            continue;
        }

        if( key[ 0 ] == '}' )
        {
            if( !( has & LT_HAS_CLASS ) )
            {
                continue;
            }

            if( ( classname == LT_CLASS_POINT || classname == LT_CLASS_SPOT ) &&
                !( has & LT_HAS_SKY ) )
            {
                qboolean has_info = !!( has & LT_HAS_ORIGIN ) && !!( has & LT_HAS_COLOR );

                vec3_t direction = { 0 };

                if( classname == LT_CLASS_SPOT )
                {
                    if( has & LT_HAS_ALLANGLES )
                    {
                        AngleVectors( light.allangles, direction, NULL, NULL );
                    }
                    else if( ( has & LT_HAS_PITCH ) || ( has & LT_HAS_ANGLE ) )
                    {
                        vec3_t angles = {
                            ( has & LT_HAS_PITCH ) ? -light.pitch : 0,
                            ( has & LT_HAS_ANGLE ) ? light.angle : 0,
                            0,
                        };
                        AngleVectors( angles, direction, NULL, NULL );
                    }
                    else
                    {
                        has_info = false;
                    }

                    if( !( has & LT_HAS_CONE ) )
                    {
                        has_info = false;
                    }
                }

                if( has_info )
                {
                    AddStaticLight( light.origin,
                                    direction,
                                    light.pcolor,
                                    light.intensity,
                                    has & LT_HAS_STYLE ? light.style : 0,
                                    classname == LT_CLASS_SPOT,
                                    has & LT_HAS_CONE ? light.cone : 0,
                                    has & LT_HAS_CONE2 ? light.cone2 : 90 );
                }
            }
            else if( classname == LT_CLASS_SUN_POTENTIAL || ( has & LT_HAS_SKY ) )
            {
                qboolean has_info = !!( has & LT_HAS_COLOR );

                float pitch = 0;
                float angle = 0;

                if( has & LT_HAS_PITCH )
                {
                    pitch = light.pitch;
                }

                if( has & LT_HAS_ANGLE )
                {
                    angle = light.angle;
                }

                if( has_info )
                {
                    AddPotentialSun( pitch, angle, light.pcolor, light.intensity );
                }
            }

            continue;
        }

        pos = COM_ParseFile( pos, value, sizeof( value ) );
        if( pos == NULL )
        {
            break;
        }

        if( Q_strcmp( key, "origin" ) == 0 )
        {
            vec3_t    tmp_origin;
            const int components =
                sscanf( value, "%f %f %f", &tmp_origin[ 0 ], &tmp_origin[ 1 ], &tmp_origin[ 2 ] );
            if( components == 3 )
            {
                VectorCopy( tmp_origin, light.origin );
                has |= LT_HAS_ORIGIN;
            }
        }
        else if( Q_strcmp( key, "angles" ) == 0 )
        {
            vec3_t    tmp_allangles;
            const int components = sscanf(
                value, "%f %f %f", &tmp_allangles[ 0 ], &tmp_allangles[ 1 ], &tmp_allangles[ 2 ] );
            if( components == 3 )
            {
                VectorCopy( tmp_allangles, light.allangles );
                has |= LT_HAS_ALLANGLES;
            }
        }
        else if( Q_strcmp( key, "_light" ) == 0 )
        {
            vec3_t    tmp_color;
            float     scale;
            const int components = sscanf(
                value, "%f %f %f %f", &tmp_color[ 0 ], &tmp_color[ 1 ], &tmp_color[ 2 ], &scale );
            if( components == 1 )
            {
                float val = tmp_color[ 0 ];

                light.pcolor =
                    rgUtilPackColorFloat4D( val / 255.0f, val / 255.0f, val / 255.0f, 1.0f );
                light.intensity = 1.0f;

                has |= LT_HAS_COLOR;
            }
            else if( components == 3 )
            {
                light.pcolor    = rgUtilPackColorFloat4D( tmp_color[ 0 ] / 255.0f,
                                                       tmp_color[ 1 ] / 255.0f,
                                                       tmp_color[ 2 ] / 255.0f,
                                                       1.0f );
                light.intensity = 1.0f;

                has |= LT_HAS_COLOR;
            }
            else if( components == 4 )
            {
                light.pcolor    = rgUtilPackColorFloat4D( tmp_color[ 0 ] / 255.0f,
                                                       tmp_color[ 1 ] / 255.0f,
                                                       tmp_color[ 2 ] / 255.0f,
                                                       1.0f );
                light.intensity = scale / 255.0f;

                has |= LT_HAS_COLOR;
            }
        }
        else if( Q_strcmp( key, "classname" ) == 0 )
        {
            if( Q_strcmp( value, "light" ) == 0 )
            {
                classname = LT_CLASS_POINT;
            }
            else if( Q_strcmp( value, "light_spot" ) == 0 )
            {
                classname = LT_CLASS_SPOT;
            }
            else if( Q_strcmp( value, "light_environment" ) == 0 )
            {
                classname = LT_CLASS_SUN_POTENTIAL;
            }

            has |= LT_HAS_CLASS;
        }
        else if( Q_strcmp( key, "pitch" ) == 0 )
        {
            float     tmp;
            const int components = sscanf( value, "%f", &tmp );

            if( components == 1 )
            {
                light.pitch = tmp;
                has |= LT_HAS_PITCH;
            }
        }
        else if( Q_strcmp( key, "angle" ) == 0 )
        {
            float     tmp;
            const int components = sscanf( value, "%f", &tmp );

            if( components == 1 )
            {
                light.angle = tmp;
                has |= LT_HAS_ANGLE;
            }
        }
        else if( Q_strcmp( key, "_sky" ) == 0 )
        {
            int       tmp;
            const int components = sscanf( value, "%i", &tmp );

            if( components == 1 && tmp != 0 )
            {
                has |= LT_HAS_SKY;
            }
        }
        else if( Q_strcmp( key, "style" ) == 0 )
        {
            int       tmp;
            const int components = sscanf( value, "%i", &tmp );

            if( components == 1 )
            {
                light.style = tmp;
                has |= LT_HAS_STYLE;
            }
        }
        else if( Q_strcmp( key, "_cone" ) == 0 )
        {
            float     tmp;
            const int components = sscanf( value, "%f", &tmp );

            if( components == 1 )
            {
                light.cone = tmp;
                has |= LT_HAS_CONE;
            }
        }
        else if( Q_strcmp( key, "_cone2" ) == 0 )
        {
            float     tmp;
            const int components = sscanf( value, "%f", &tmp );

            if( components == 1 )
            {
                light.cone2 = tmp;
                has |= LT_HAS_CONE2;
            }
        }
    }

    FilterTheSunFromPotential( WORLDMODEL->name );
}


static qboolean IsPlayerFlashlight( const dlight_t* l )
{
    if( gp_cl && l->key > 0 && l->key == gp_cl->playernum + 1 )
    {
        return true;
    }
    int flashlight_key = RT_CVAR_TO_INT32( _rt_flsh_key );
    return flashlight_key > 0 && l->key == flashlight_key;
}


static void CalculateFlaslightPosition( vec3_t out_position )
{
    vec3_t u;
    VectorCopy( RI.vup, u );
    VectorScale( u, METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_flsh_u ) ), u );

    vec3_t r;
    VectorCopy( RI.vright, r );
    VectorScale( r, METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_flsh_r ) ), r );

    VectorCopy( RI.rvp.vieworigin, out_position );
    VectorAdd( out_position, u, out_position );
    VectorAdd( out_position, r, out_position );
}


typedef struct rt_particlelight_t
{
    RgFloat3D         position;
    RgColor4DPacked32 color;
    uint32_t          id;
} rt_particlelight_t;

static rt_particlelight_t rt_particlelights[ 1024 ];
static uint32_t           rt_particlelights_count = 0;

void RT_TryAddParticleLight( const cl_entity_t* e )
{
    if( !e || e->curstate.iuser1 <= 0 )
    {
        return;
    }

	if( rt_particlelights_count >= RT_ARRAYSIZE( rt_particlelights ) )
    {
        return;
    }

	rt_particlelight_t* dst = &rt_particlelights[ rt_particlelights_count++ ];
    {
        VectorCopy( e->curstate.origin, dst->position.data );
        // prevent being close to a floor
        dst->position.data[ 2 ] += 8;

        dst->color = rgUtilPackColorByte4D( 255, 72, 0, 255 );
        dst->id    = e->curstate.iuser1;
    }
}

static rt_particlelight_t rt_beamlights[ 64 ];
static uint32_t           rt_beamlights_count = 0;

void RT_TryAddBeamLight( vec3_t pos, uint8_t r, uint8_t g, uint8_t b )
{
    if( rt_beamlights_count >= RT_ARRAYSIZE( rt_beamlights ) )
    {
        return;
    }

    rt_particlelight_t* dst = &rt_beamlights[ rt_beamlights_count ];
    {
        VectorCopy( pos, dst->position.data );
        dst->color     = rgUtilPackColorByte4D( r, g, b, 255 );
        dst->id        = rt_beamlights_count;
    }
    rt_beamlights_count++;
}


extern cl_entity_t* rt_trament;

    #define VectorPow( in, pw, out )                  \
        ( ( out )[ 0 ] = powf( ( in )[ 0 ], ( pw ) ), \
          ( out )[ 1 ] = powf( ( in )[ 1 ], ( pw ) ), \
          ( out )[ 2 ] = powf( ( in )[ 2 ], ( pw ) ) )


    #define RT_ID_LIGHTNONE			0
    #define RT_IDBASE_SUN			1
    #define RT_IDBASE_FLASHLIGHT	256
    #define RT_IDBASE_TRAMLIGHT		384
    #define RT_IDBASE_DLIGHT		1000000
    #define RT_IDBASE_ELIGHT		2000000
    #define RT_IDBASE_PARTICLELIGHT	3000000
    #define RT_IDBASE_BEAMLIGHT     4000000
    #define RT_IDBASE_STATICLIGHT   5000000

    static uint32_t rt_dlight_gen[ MAX_DLIGHTS ] = { 0 };
    static float    rt_dlight_last_die[ MAX_DLIGHTS ] = { 0 };
    static uint32_t rt_elight_gen[ MAX_ELIGHTS ] = { 0 };
    static float    rt_elight_last_die[ MAX_ELIGHTS ] = { 0 };

void RT_UploadAllLights( void )
{
    rt_state.flashlight_uniqueid = RT_ID_LIGHTNONE;

    if( g_lights.sun_exists && RI.isSkyVisible )
    {
        rt_sun_light_t* sun = &g_lights.sun;

        vec3_t angles = { -sun->pitch, sun->angle, 0 };
        vec3_t direction;
        AngleVectors( angles, direction, NULL, NULL );

        RgDirectionalLightUploadInfo info = {
            .uniqueID               = RT_IDBASE_SUN,
            .isExportable           = true,
            .color                  = sun->pcolor,
            .intensity              = RT_CVAR_TO_FLOAT( rt_sun ) * sun->intensity,
            .direction              = RT_VEC3( direction ),
            .angularDiameterDegrees = RT_CVAR_TO_FLOAT( rt_sun_diameter ),
        };

        RgResult r = rgUploadDirectionalLight( rg_instance, &info );
        RG_CHECK( r );
    }

    for( int i = 0; i < g_lights.static_lights_count; i++ )
    {
        const rt_static_light_t* src = &g_lights.static_lights[ i ];

        if( src->is_spot )
        {
            RgSpotLightUploadInfo info = {
                .uniqueID     = RT_IDBASE_STATICLIGHT + src->index,
                .isExportable = true,
                .extra        = { .exists = true, .lightstyle = src->light_style },
                .color        = src->pcolor,
                .intensity    = RT_CVAR_TO_FLOAT( rt_light_s ) * src->intensity,
                .position     = RT_VEC3( src->abs_position ),
                .direction    = RT_VEC3( src->dir ),
                .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
                .angleOuter   = src->spot_outer_cone_rad,
                .angleInner   = src->spot_inner_cone_rad,
            };

            RgResult r = rgUploadSpotLight( rg_instance, &info );
            RG_CHECK( r );
        }
        else
        {
            RgSphericalLightUploadInfo info = {
                .uniqueID     = RT_IDBASE_STATICLIGHT + src->index,
                .isExportable = true,
                .extra        = { .exists = true, .lightstyle = src->light_style },
                .color        = src->pcolor,
                .intensity    = RT_CVAR_TO_FLOAT( rt_light_s ) * src->intensity,
                .position     = RT_VEC3( src->abs_position ),
                .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
            };

            RgResult r = rgUploadSphericalLight( rg_instance, &info );
            RG_CHECK( r );
        }
    }

    for( qboolean is_e_light = false; is_e_light <= true; is_e_light++ )
    {
        for( int i = 0; i < ( is_e_light ? MAX_ELIGHTS : MAX_DLIGHTS ); i++ )
        {
            dlight_t* l = is_e_light ? &tr.elights[ i ] : &gp_dlights[ i ];

            if( !l || l->dark )
            {
                continue;
            }

            if( l->die < gp_cl->time || !l->radius )
            {
                continue;
            }


            if( IsPlayerFlashlight( l ) )
            {
                vec3_t pos;
                CalculateFlaslightPosition( pos );

                if( RT_IsNightVisionActive() )
                {
                    RgSpotLightUploadInfo info = {
                        .uniqueID     = RT_IDBASE_FLASHLIGHT + i,
                        .isExportable = false,
                        .color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
                        .intensity    = RT_CVAR_TO_FLOAT( rt_flsh ) * 0.9f,
                        .position     = RT_VEC3( pos ),
                        .direction    = RT_VEC3( RI.vforward ),
                        .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_flsh_radius ) ),
                        .angleOuter   = DEG2RAD( 80.0f ),
                        .angleInner   = DEG2RAD( 40.0f ),
                    };

                    RgResult r = rgUploadSpotLight( rg_instance, &info );
                    RG_CHECK( r );

                    rt_cvars._rt_flsh_key->value = -1;
                    rt_state.flashlight_uniqueid = info.uniqueID;
                }
                else
                {
                    RgSpotLightUploadInfo info = {
                        .uniqueID     = RT_IDBASE_FLASHLIGHT + i,
                        .isExportable = false,
                        .color        = rgUtilPackColorByte4D( 220, 243, 255, 255 ),
                        .intensity    = RT_CVAR_TO_FLOAT( rt_flsh ),
                        .position     = RT_VEC3( pos ),
                        .direction    = RT_VEC3( RI.vforward ),
                        .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_flsh_radius ) ),
                        .angleOuter   = DEG2RAD( RT_CVAR_TO_FLOAT( rt_flsh_angle ) ),
                        .angleInner   = 0,
                    };

                    RgResult r = rgUploadSpotLight( rg_instance, &info );
                    RG_CHECK( r );

                    rt_cvars._rt_flsh_key->value = -1;
                    rt_state.flashlight_uniqueid = info.uniqueID;
                }
            }
            else
            {
                float falloff_mult = QUAKEUNIT_TO_METRIC( l->radius );

                uint32_t* p_gen = is_e_light ? &rt_elight_gen[ i ] : &rt_dlight_gen[ i ];
                float*    p_die = is_e_light ? &rt_elight_last_die[ i ] : &rt_dlight_last_die[ i ];

                if( *p_die != l->die )
                {
                    ( *p_gen )++;
                    *p_die = l->die;
                }

                uint32_t unique_id = ( is_e_light ? RT_IDBASE_ELIGHT : RT_IDBASE_DLIGHT ) + ( ( uint32_t )i << 12 ) + ( *p_gen & 0xFFF );

                vec3_t light_pos;
                VectorCopy( l->origin, light_pos );

                vec3_t view_dir;
                VectorSubtract( RI.rvp.vieworigin, light_pos, view_dir );
                float view_dist = VectorNormalizeLength( view_dir );
                if( view_dist > 1.0f )
                {
                    float offset_dist = ( view_dist < 8.0f ) ? ( view_dist * 0.5f ) : 8.0f;
                    VectorMA( light_pos, offset_dist, view_dir, light_pos );
                }

                RgSphericalLightUploadInfo info = {
                    .uniqueID     = unique_id,
                    .isExportable = false,
                    .color     = rgUtilPackColorByte4D( l->color.r, l->color.g, l->color.b, 255 ),
                    .intensity = RT_CVAR_TO_FLOAT( rt_light_d ) * falloff_mult,
                    .position  = RT_VEC3( light_pos ),
                    .radius    = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
                };

                RgResult r = rgUploadSphericalLight( rg_instance, &info );
                RG_CHECK( r );
            }
        }
    }

    if( RT_IsNightVisionActive() && rt_state.flashlight_uniqueid == RT_ID_LIGHTNONE )
    {
        vec3_t pos;
        CalculateFlaslightPosition( pos );

        RgSpotLightUploadInfo info = {
            .uniqueID     = RT_IDBASE_FLASHLIGHT,
            .isExportable = false,
            .color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
            .intensity    = RT_CVAR_TO_FLOAT( rt_flsh ) * 0.9f,
            .position     = RT_VEC3( pos ),
            .direction    = RT_VEC3( RI.vforward ),
            .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_flsh_radius ) ),
            .angleOuter   = DEG2RAD( 80.0f ),
            .angleInner   = DEG2RAD( 40.0f ),
        };

        RgResult r = rgUploadSpotLight( rg_instance, &info );
        RG_CHECK( r );

        rt_state.flashlight_uniqueid = info.uniqueID;
    }

    if( rt_trament && WORLDMODEL )
    {
        vec3_t vf = { 1, 0, 0 };
        vec3_t vr = { 0, 1, 0 };
        vec3_t vu = { 0, 0, 1 };
        AngleVectors( rt_trament->curstate.angles, vf, vr, vu );

    #define ToGlobal( dst, offset )                            \
        {                                                      \
            VectorCopy( rt_trament->curstate.origin, dst );    \
            VectorMA( ( dst ), ( offset )[ 0 ], vf, ( dst ) ); \
            VectorMA( ( dst ), ( offset )[ 1 ], vr, ( dst ) ); \
            VectorMA( ( dst ), ( offset )[ 2 ], vu, ( dst ) ); \
        }

        const vec3_t lamps[] = {
            { 0, 0, 100 },
        };

        for( int i = 0; i < ( int )RT_ARRAYSIZE( lamps ); i++ )
        {
            vec3_t pos;
            ToGlobal( pos, lamps[ i ] );

            RgSphericalLightUploadInfo info = {
                .uniqueID     = RT_IDBASE_TRAMLIGHT + i,
                .isExportable = false,
                .color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
                .intensity    = RT_CVAR_TO_FLOAT( rt_light_tram ),
                .position     = RT_VEC3( pos ),
                .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
            };

            RgResult r = rgUploadSphericalLight( rg_instance, &info );
            RG_CHECK( r );
        }

        const vec3_t headlights[] = {
            { -150, 50, 0 },
            { -150, -50, 0 },
        };

        for( int i = 0; i < ( int )RT_ARRAYSIZE( headlights ); i++ )
        {
            vec3_t pos;
            ToGlobal( pos, headlights[ i ] );

            vec3_t dir;
            VectorNegate( vf, dir );

            RgSpotLightUploadInfo info = {
                .uniqueID     = RT_IDBASE_TRAMLIGHT + RT_ARRAYSIZE( lamps ) + i,
                .isExportable = false,
                .color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
                .intensity    = RT_CVAR_TO_FLOAT( rt_light_tram_h ),
                .position     = RT_VEC3( pos ),
                .direction    = RT_VEC3( dir ),
                .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
                .angleOuter   = DEG2RAD( bound( 0, RT_CVAR_TO_FLOAT( rt_light_tram_ao ), 150 ) ),
                .angleInner   = DEG2RAD( bound( 0, RT_CVAR_TO_FLOAT( rt_light_tram_ai ), 150 ) ),
            };

            RgResult r = rgUploadSpotLight( rg_instance, &info );
            RG_CHECK( r );
        }
    }

    for( uint32_t i = 0; i < rt_particlelights_count; i++ )
    {
        rt_particlelight_t* src = &rt_particlelights[ i ];
        assert( src->id < ( RT_IDBASE_BEAMLIGHT - RT_IDBASE_PARTICLELIGHT ) );

        RgSphericalLightUploadInfo info = {
            .uniqueID     = RT_IDBASE_PARTICLELIGHT + src->id,
            .isExportable = false,
            .color        = src->color,
            .intensity    = RT_CVAR_TO_FLOAT( rt_light_p ),
            .position     = src->position,
            .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
        };

        RgResult r = rgUploadSphericalLight( rg_instance, &info );
        RG_CHECK( r );
    }

	for( uint32_t i = 0; i < rt_beamlights_count; i++ )
    {
        rt_particlelight_t* src = &rt_beamlights[ i ];
        assert( src->id < 64 );

        RgSphericalLightUploadInfo info = {
            .uniqueID     = RT_IDBASE_BEAMLIGHT + src->id,
            .isExportable = false,
            .color        = src->color,
            .intensity    = RT_CVAR_TO_FLOAT( rt_light_b ),
            .position     = src->position,
            .radius       = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_light_radius ) ),
        };

        RgResult r = rgUploadSphericalLight( rg_instance, &info );
        RG_CHECK( r );
    }

	rt_particlelights_count = 0;
    rt_beamlights_count     = 0;
}
#endif // XASH_RAYTRACING
