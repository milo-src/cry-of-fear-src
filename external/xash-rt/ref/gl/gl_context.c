/*
vid_sdl.c - SDL vid component
Copyright (C) 2018 a1batross

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

// GL API function pointers, if any, reside in this translation unit
#define APIENTRY_LINKAGE
#include "gl_local.h"
#include "gl_export.h"

#if XASH_GL4ES
#include "gl4es/include/gl4esinit.h"
#endif



static void R_ClearScreen( void )
{
	pglClearColor( 0.0f, 0.0f, 0.0f, 0.0f );
	pglClear( GL_COLOR_BUFFER_BIT );
}

static const byte *R_GetTextureOriginalBuffer( unsigned int idx )
{
	gl_texture_t *glt = R_GetTexture( idx );

	if( !glt || !glt->original || !glt->original->buffer )
		return NULL;

	return glt->original->buffer;
}

/*
=============
CL_FillRGBA

=============
*/
static void CL_FillRGBA( int rendermode, float _x, float _y, float _w, float _h, byte r, byte g, byte b, byte a )
{
	pglDisable( GL_TEXTURE_2D );
	pglEnable( GL_BLEND );
	pglTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	if( rendermode == kRenderTransAdd )
		pglBlendFunc( GL_SRC_ALPHA, GL_ONE );
	else
		pglBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
	pglColor4ub( r, g, b, a );

	pglBegin( GL_QUADS );
		pglVertex2f( _x, _y );
		pglVertex2f( _x + _w, _y );
		pglVertex2f( _x + _w, _y + _h );
		pglVertex2f( _x, _y + _h );
	pglEnd ();

	pglEnable( GL_TEXTURE_2D );
	pglDisable( GL_BLEND );
}

static qboolean Mod_LooksLikeWaterTexture( const char *name )
{
	if(( name[0] == '*' && Q_stricmp( name, REF_DEFAULT_TEXTURE )) || name[0] == '!' )
		return true;

	if( !FBitSet( gp_host->features, ENGINE_QUAKE_COMPATIBLE ))
	{
		if( !Q_strnicmp( name, "water", 5 ) || !Q_strnicmp( name, "laser", 5 ))
			return true;
	}

	return false;
}

static void Mod_BrushUnloadTextures( model_t *mod )
{
	for( int i = 0; i < mod->numtextures; i++ )
	{
		texture_t *tx = mod->textures[i];
		if( !tx )
			continue; // free slot

		if( tx->gl_texturenum != tr.defaultTexture )
			GL_FreeTexture( tx->gl_texturenum ); // main texture

		if( !Mod_LooksLikeWaterTexture( tx->name ))
		{
			GL_FreeTexture( tx->fb_texturenum ); // luma texture
			GL_FreeTexture( tx->dt_texturenum ); // detail texture
		}
	}
}

static void Mod_UnloadTextures( model_t *mod )
{
	Assert( mod != NULL );

	switch( mod->type )
	{
	case mod_studio:
		Mod_StudioUnloadTextures( mod->cache.data );
		break;
	case mod_alias:
		Mod_AliasUnloadTextures( mod->cache.data );
		break;
	case mod_brush:
		Mod_BrushUnloadTextures( mod );
		break;
	case mod_sprite:
		break;
	case mod_bad:
		// model was never loaded, the engine frees it right after the loader has rejected it
		break;
	default:
		gEngfuncs.Con_Printf( S_ERROR "%s: unsupported type %d\n", __func__, mod->type );
		break;
	}
}

static qboolean Mod_ProcessRenderData( model_t *mod, qboolean create, const byte *buf, size_t buffersize )
{
	qboolean loaded = false;

	if( !create )
	{
		if( gEngfuncs.drawFuncs->Mod_ProcessUserData )
			gEngfuncs.drawFuncs->Mod_ProcessUserData( mod, false, buf );
		Mod_UnloadTextures( mod );
		return true;
	}

	switch( mod->type )
	{
	case mod_studio:
	case mod_brush:
		loaded = true;
		break;
	case mod_sprite:
		loaded = true;
		break;
	case mod_alias:
		Mod_LoadAliasModel( mod, buf, &loaded );
		break;
	default:
		gEngfuncs.Host_Error( "%s: unsupported type %d\n", __func__, mod->type );
		return false;
	}

	if( gEngfuncs.drawFuncs->Mod_ProcessUserData )
		gEngfuncs.drawFuncs->Mod_ProcessUserData( mod, true, buf );

	return loaded;
}

static intptr_t GL_RefGetParm( int parm, int arg )
{
	switch( parm )
	{
	case PARM_TEX_WIDTH:
		return R_GetTexture( arg )->width;
	case PARM_TEX_HEIGHT:
		return R_GetTexture( arg )->height;
	case PARM_TEX_SRC_WIDTH:
		return R_GetTexture( arg )->srcWidth;
	case PARM_TEX_SRC_HEIGHT:
		return R_GetTexture( arg )->srcHeight;
	case PARM_TEX_GLFORMAT:
		return R_GetTexture( arg )->format;
	case PARM_TEX_ENCODE:
		return R_GetTexture( arg )->encode;
	case PARM_TEX_MIPCOUNT:
		return R_GetTexture( arg )->numMips;
	case PARM_TEX_DEPTH:
		return R_GetTexture( arg )->depth;
	case PARM_TEX_SKYBOX:
		Assert( arg >= 0 && arg < 6 );
		return tr.skyboxTextures[arg];
	case PARM_TEX_SKYTEXNUM:
		return tr.skytexturenum;
	case PARM_TEX_LIGHTMAP:
		arg = bound( 0, arg, MAX_LIGHTMAPS - 1 );
		return tr.lightmapTextures[arg];
	case PARM_TEX_TARGET:
		return R_GetTexture( arg )->target;
	case PARM_TEX_TEXNUM:
		return R_GetTexture( arg )->texnum;
	case PARM_TEX_FLAGS:
		return R_GetTexture( arg )->flags;
	case PARM_TEX_MEMORY:
		return GL_TexMemory();
	case PARM_ACTIVE_TMU:
		return glState.activeTMU;
	case PARM_LIGHTSTYLEVALUE:
		arg = bound( 0, arg, MAX_LIGHTSTYLES - 1 );
		return g_lightstylevalue[arg];
	case PARM_MAX_IMAGE_UNITS:
		return GL_MaxTextureUnits();
	case PARM_REBUILD_GAMMA:
		return glConfig.softwareGammaUpdate;
	case PARM_GL_CONTEXT_TYPE:
		return glConfig.context;
	case PARM_GLES_WRAPPER:
		return glConfig.wrapper;
	case PARM_STENCIL_ACTIVE:
		return glState.stencilEnabled;
	case PARM_TEX_FILTERING:
		if( arg < 0 )
			return gl_texture_nearest.value == 0.0f;

		return GL_TextureFilteringEnabled( R_GetTexture( arg ));
	case PARM_GET_STUDIO_HDR:
		return (intptr_t)R_StudioGetHeader();
	default:
		return ENGINE_GET_PARM_( parm, arg );
	}
	return 0;
}

static void R_GetDetailScaleForTexture( int texture, float *xScale, float *yScale )
{
	gl_texture_t *glt = R_GetTexture( texture );

	if( xScale ) *xScale = glt->xscale;
	if( yScale ) *yScale = glt->yscale;
}

static void R_SetDetailScaleForTexture( int texture, float xScale, float yScale )
{
	gl_texture_t *glt = R_GetTexture( texture );

	glt->xscale = xScale;
	glt->yscale = yScale;
}

static void R_GetExtraParmsForTexture( int texture, byte *red, byte *green, byte *blue, byte *density )
{
	gl_texture_t *glt = R_GetTexture( texture );

	if( red ) *red = glt->fogParams[0];
	if( green ) *green = glt->fogParams[1];
	if( blue ) *blue = glt->fogParams[2];
	if( density ) *density = glt->fogParams[3];
}


static void R_SetCurrentEntity( cl_entity_t *ent )
{
	RI.currententity = ent;

	// set model also
	if( RI.currententity != NULL )
	{
		RI.currentmodel = RI.currententity->model;
	}
}

static void R_SetCurrentModel( model_t *mod )
{
	RI.currentmodel = mod;
}

static float R_GetFrameTime( void )
{
	return tr.frametime;
}

static const char *GL_TextureName( unsigned int texnum )
{
	return R_GetTexture( texnum )->name;
}

static const byte *GL_TextureData( unsigned int texnum )
{
	rgbdata_t *pic = R_GetTexture( texnum )->original;

	if( pic != NULL )
		return pic->buffer;
	return NULL;
}

static void R_ProcessEntData( qboolean allocate, cl_entity_t *entities, unsigned int max_entities )
{
	if( !allocate )
	{
		tr.draw_list->num_solid_entities = 0;
		tr.draw_list->num_trans_entities = 0;
		tr.draw_list->num_beam_entities = 0;

		tr.max_entities = 0;
		tr.entities = NULL;
	}
	else
	{
		tr.max_entities = max_entities;
		tr.entities = entities;
	}

	if( gEngfuncs.drawFuncs->R_ProcessEntData )
		gEngfuncs.drawFuncs->R_ProcessEntData( allocate );
}

/*
=============
R_SetSkyCloudsTextures

Quake sky cloud texture was processed by the engine,
remember them for easier access during rendering
==============
*/
static void GAME_EXPORT R_SetSkyCloudsTextures( int solidskyTexture, int alphaskyTexture )
{
	tr.solidskyTexture = solidskyTexture;
	tr.alphaskyTexture = alphaskyTexture;
}

/*
===============
R_SetupSky
===============
*/
static void GAME_EXPORT R_SetupSky( int *skyboxTextures )
{
	R_UnloadSkybox();

	if( !skyboxTextures )
		return;

	for( int i = 0; i < SKYBOX_MAX_SIDES; i++ )
		tr.skyboxTextures[i] = skyboxTextures[i];
}

static qboolean R_SetDisplayTransform( ref_screen_rotation_t rotate, int offset_x, int offset_y, float unused1_default_at_1, float unused2_default_at_1 )
{
	qboolean ret = true;

	tr.rotation = rotate;

	if( offset_x || offset_y )
	{
		gEngfuncs.Con_Printf("offset transform not supported\n");
		ret = false;
	}

	return ret;
}

static void GAME_EXPORT VGUI_SetupDrawing( qboolean rect )
{
	pglEnable( GL_BLEND );
	pglBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

	if( rect )
	{
		pglDisable( GL_ALPHA_TEST );
	}
	else
	{
		pglEnable( GL_ALPHA_TEST );
		pglAlphaFunc( GL_GREATER, 0.0f );
		pglTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	}
}

static void GAME_EXPORT R_OverrideTextureSourceSize( unsigned int texnum, uint srcWidth, uint srcHeight )
{
	gl_texture_t *tx = R_GetTexture( texnum );

	tx->srcWidth = srcWidth;
	tx->srcHeight = srcHeight;
}

static void* GAME_EXPORT R_GetProcAddress( const char *name )
{
#if XASH_GL4ES
	return gl4es_GetProcAddress( name );
#else // TODO: other wrappers
	return gEngfuncs.GL_GetProcAddress( name );
#endif
}

static const char *R_GetConfigName( void )
{
#if !XASH_RAYTRACING
	return "opengl";
#else
	return "rt";
#endif
}

#if XASH_RAYTRACING
const float* rt_portal_posteffect_position = NULL;

static const char* rt_trament_modelname = NULL;
cl_entity_t*       rt_trament           = NULL;

static const char* rt_rocketblastdoor_modelname = NULL;
cl_entity_t*       rt_rocketblastdoor           = NULL;

static void RT_ResetTramLights()
{
    typedef struct edef_t
    {
        const char* mapname;
        const char* modelname;
    } edef_t;

    {
        rt_trament_modelname = NULL;
        rt_trament           = NULL;

        edef_t traments[] = {
            { "maps/c0a0.bsp", "*12" },  { "maps/c0a0a.bsp", "*24" }, { "maps/c0a0b.bsp", "*15" },
            { "maps/c0a0c.bsp", "*74" }, { "maps/c0a0d.bsp", "*10" }, { "maps/c0a0e.bsp", "*1" },
        };

        for( int m = 0; m < ( int )RT_ARRAYSIZE( traments ); m++ )
        {
            if( Q_strcmp( WORLDMODEL->name, traments[ m ].mapname ) == 0 )
            {
                rt_trament_modelname = traments[ m ].modelname;
                break;
            }
        }
    }
    {
        rt_rocketblastdoor_modelname = NULL;
        rt_rocketblastdoor           = NULL;

        edef_t blastdoors[] = {
            { "maps/c2a2h.bsp", "*2" },
        };

        for( int m = 0; m < ( int )RT_ARRAYSIZE( blastdoors ); m++ )
        {
            if( Q_strcmp( WORLDMODEL->name, blastdoors[ m ].mapname ) == 0 )
            {
                rt_rocketblastdoor_modelname = blastdoors[ m ].modelname;
                break;
            }
        }
    }
}

void RT_TryFindTramLights()
{
    // if not found yet
    if( rt_trament == NULL )
    {
        // if tram may exist
        if( rt_trament_modelname )
        {
            if( RI.currententity && RI.currentmodel )
            {
                if( Q_strcmp( RI.currentmodel->name, rt_trament_modelname ) == 0 )
                {
                    rt_trament = RI.currententity;
                }
            }
        }
    }
}

qboolean RT_IsBrushIgnored()
{
    if( rt_rocketblastdoor == NULL )
    {
        if( rt_rocketblastdoor_modelname )
        {
            if( RI.currententity && RI.currentmodel )
            {
                if( Q_strcmp( RI.currentmodel->name, rt_rocketblastdoor_modelname ) == 0 )
                {
                    rt_rocketblastdoor = RI.currententity;
                }
            }
        }
    }

    return RI.currententity == rt_rocketblastdoor;
}

qboolean RT_IsCullingActive()
{
    if( !RT_CVAR_TO_BOOL( rt_cull ) )
    {
        return false;
    }

    // while a scene export is in progress, all geometry must be submitted
    if( rg_instance && rgUtilIsExportActive( rg_instance ) )
    {
        return false;
    }

    return true;
}
#endif

static void R_NewMap( void )
{
	tr.worldmodel = gp_cl->models[1];

	R_ClearDecals(); // clear all level decals

	R_StudioResetPlayerModels();

	// clear out efrags in case the level hasn't been reloaded
	for( int i = 0; i < WORLDMODEL->numleafs; i++ )
		WORLDMODEL->leafs[i+1].efrags = NULL;

	glState.isFogEnabled = false;
	tr.skytexturenum = -1;
	pglDisable( GL_FOG );

	// clearing texture chains
	for( int i = 0; i < WORLDMODEL->numtextures; i++ )
	{
		if( !WORLDMODEL->textures[i] )
			continue;

		texture_t *tx = WORLDMODEL->textures[i];

		if( !Q_strncmp( tx->name, "sky", 3 ) && tx->width == ( tx->height * 2 ))
			tr.skytexturenum = i;

		tx->texturechain = NULL;
	}

	GL_BuildLightmaps ();

	R_ClearVBO();
	if( R_HasEnabledVBO( ))
		R_GenerateVBO();
	R_ResetRipples();

	if( gEngfuncs.drawFuncs->R_NewMap != NULL )
		gEngfuncs.drawFuncs->R_NewMap();

#if XASH_RAYTRACING
	RT_ParseStaticLightEntities();
	RT_ResetChapterLogo();
	RT_ResetTramLights();

	// HACKHACK
	if( Q_strcmp( WORLDMODEL->name, "maps/c2a5.bsp" ) == 0 )
	{
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_r->name, "150" );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_g->name, "150" );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_b->name, "155" );
	}
	else if( Q_strcmp( WORLDMODEL->name, "maps/c4a1.bsp" ) == 0 )
	{
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_r->name, "2" );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_g->name, "1" );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_b->name, "2" );
	}
	else
	{
		// to default
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_r->name, NULL );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_g->name, NULL );
		gEngfuncs.Cvar_Set( rt_cvars.rt_me_water_b->name, NULL );
	}

	// HACKHACK
	if( Q_strcmp( WORLDMODEL->name, "maps/c1a4k.bsp" ) == 0 )
	{
		gEngfuncs.Cvar_Set( rt_cvars.rt_normalmap_stren_water->name, "20" );
	}
	else
	{
		// to default
		gEngfuncs.Cvar_Set( rt_cvars.rt_normalmap_stren_water->name, NULL );
	}

	// HACKHACK
	if( Q_strcmp( WORLDMODEL->name, "maps/c3a2d.bsp" ) == 0 )
	{
		static const vec3_t campos    = { 1160.00000f, 268.921875f, -191.937500f };
		rt_portal_posteffect_position = campos;
	}
	else if( Q_strcmp( WORLDMODEL->name, "maps/c5a1.bsp" ) == 0 )
	{
		static const vec3_t campos    = { -1265.96875f, 427.031250f, -2674.29688f };
		rt_portal_posteffect_position = campos;
	}
	else
	{
		rt_portal_posteffect_position = NULL;
	}
#endif
}

static void R_FillRenderAPI( render_api_t *api )
{
	api->GetExtraParmsForTexture  = R_GetExtraParmsForTexture;
	api->GetFrameTime             = R_GetFrameTime;
	api->R_SetCurrentEntity       = R_SetCurrentEntity;
	api->R_SetCurrentModel        = R_SetCurrentModel;
	api->GL_CreateTexture         = GL_CreateTexture;
	api->GL_LoadTextureArray      = GL_LoadTextureArray;
	api->GL_CreateTextureArray    = GL_CreateTextureArray;
	api->DrawSingleDecal          = DrawSingleDecal;
	api->R_DecalSetupVerts        = R_DecalSetupVerts;
	api->R_EntityRemoveDecals     = R_EntityRemoveDecals;
	api->GL_SelectTexture         = GL_SelectTexture;
	api->GL_LoadTextureMatrix     = GL_LoadTexMatrixExt;
	api->GL_TexMatrixIdentity     = GL_LoadIdentityTexMatrix;
	api->GL_CleanUpTextureUnits   = GL_CleanUpTextureUnits;
	api->GL_TexGen                = GL_TexGen;
	api->GL_TextureTarget         = GL_TextureTarget;
	api->GL_TexCoordArrayMode     = GL_SetTexCoordArrayMode;
	api->GL_UpdateTexSize         = GL_UpdateTexSize;
	api->GL_DrawParticles         = CL_DrawParticlesExternal;
	api->LightVec                 = R_LightVec;
	api->StudioGetTexture         = R_StudioGetTexture;
	api->GL_GetProcAddress        = R_GetProcAddress;
}

static void R_FillTriAPI( triangleapi_t *api )
{
	api->TexCoord2f    = TriTexCoord2f;
	api->Fog           = TriFog;
	api->ScreenToWorld = R_ScreenToWorld;
	api->GetMatrix     = TriGetMatrix;
	api->FogParams     = TriFogParams;
}

const ref_interface_t gReffuncs =
{
	R_Init,
	R_Shutdown,
	R_GetConfigName,
	R_SetDisplayTransform,

	GL_SetupAttributes,
	GL_InitExtensions,
	GL_ClearExtensions,

	R_GammaChanged,
	R_BeginFrame,
	R_RenderScene,
	R_EndFrame,
	R_PushScene,
	R_PopScene,
	GL_BackendStartFrame,
	GL_BackendEndFrame,

	R_ClearScreen,
	R_AllowFog,
	GL_SetRenderMode,

	R_AddEntity,
	R_ProcessEntData,

	R_ShowTextures,

	R_GetTextureOriginalBuffer,
	GL_LoadTextureFromBuffer,
	GL_ProcessTexture,
	R_SetupSky,

	R_Set2DMode,
	R_Set2DOffset,
	R_DrawStretchPic,
	CL_FillRGBA,
	R_WorldToScreen,

	VID_ScreenShot,
	VID_CubemapShot,

	R_LightPoint,

	R_DecalShoot,
	R_DecalRemoveAll,
	R_CreateDecalList,
	R_ClearAllDecals,

	R_StudioEstimateFrame,
	R_StudioLerpMovement,
	R_StudioFillAPI,
	R_StudioSetDrawInterface,

	R_SetSkyCloudsTextures,
	GL_SubdivideSurface,
	CL_RunLightStyles,


	Mod_ProcessRenderData,
	Mod_StudioLoadTextures,

	CL_DrawParticles,
	CL_DrawTracers,
	CL_DrawBeams,

	GL_RefGetParm,

	R_GetDetailScaleForTexture,
	R_SetDetailScaleForTexture,

	GL_CreateTexture,
	GL_FindTexture,
	GL_TextureName,
	GL_TextureData,
	GL_LoadTexture,
	GL_FreeTexture,
	R_OverrideTextureSourceSize,

	GL_UpdateTexture,

	GL_Bind,

	R_RenderFrame,
	Mod_SetOrthoBounds,
	R_SpeedsMessage,
	Mod_GetCurrentVis,
	R_NewMap,
	R_ClearScene,

	TriRenderMode,
	TriBegin,
	TriEnd,
	_TriColor4f,
	_TriColor4ub,
	TriVertex3fv,
	TriVertex3f,
	TriCullFace,

	R_FillRenderAPI,
	R_FillTriAPI,

	VGUI_SetupDrawing,
};

