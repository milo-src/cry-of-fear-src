/*
gl_rmain.c - renderer main loop
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
#include "xash3d_mathlib.h"
#include "library.h"
#include "beamdef.h"
#include "entity_types.h"


#define IsLiquidContents( cnt )	( cnt == CONTENTS_WATER || cnt == CONTENTS_SLIME || cnt == CONTENTS_LAVA )

float		gldepthmin, gldepthmax;
ref_instance_t	RI;

static int R_RankForRenderMode( int rendermode )
{
	switch( rendermode )
	{
	case kRenderTransTexture:
		return 1;	// draw second
	case kRenderTransAdd:
		return 2;	// draw third
	case kRenderGlow:
		return 3;	// must be last!
	}
	return 0;
}

void R_AllowFog( qboolean allowed )
{
	if( allowed )
	{
		if( glState.isFogEnabled && gl_fog.value )
			pglEnable( GL_FOG );
	}
	else
	{
		if( glState.isFogEnabled )
			pglDisable( GL_FOG );
	}
}

/*
===============
R_OpaqueEntity

Opaque entity can be brush or studio model but sprite
===============
*/
qboolean R_OpaqueEntity( cl_entity_t *ent )
{
	if( R_GetEntityRenderMode( ent ) == kRenderNormal )
	{
		switch( ent->curstate.renderfx )
		{
		case kRenderFxNone:
		case kRenderFxDeadPlayer:
		case kRenderFxLightMultiplier:
		case kRenderFxExplode:
			return true;
		}
	}
	return false;
}

/*
===============
R_TransEntityCompare

Sorting translucent entities by rendermode then by distance
===============
*/
static int R_TransEntityCompare( const void *a, const void *b )
{
	cl_entity_t *ent1 = *(cl_entity_t **)a;
	cl_entity_t *ent2 = *(cl_entity_t **)b;
	int rendermode1 = R_GetEntityRenderMode( ent1 );
	int rendermode2 = R_GetEntityRenderMode( ent2 );

	vec3_t vecLen, org;
	float dist1, dist2;

	// sort by distance
	if( ent1->model->type != mod_brush || rendermode1 != kRenderTransAlpha )
	{
		VectorAverage( ent1->model->mins, ent1->model->maxs, org );
		VectorAdd( ent1->origin, org, org );
		VectorSubtract( RI.rvp.vieworigin, org, vecLen );
		dist1 = DotProduct( vecLen, vecLen );
	}
	else dist1 = 1000000000;

	if( ent2->model->type != mod_brush || rendermode2 != kRenderTransAlpha )
	{
		VectorAverage( ent2->model->mins, ent2->model->maxs, org );
		VectorAdd( ent2->origin, org, org );
		VectorSubtract( RI.rvp.vieworigin, org, vecLen );
		dist2 = DotProduct( vecLen, vecLen );
	}
	else dist2 = 1000000000;

	if( dist1 > dist2 )
		return -1;
	if( dist1 < dist2 )
		return 1;

	// then sort by rendermode
	if( R_RankForRenderMode( rendermode1 ) > R_RankForRenderMode( rendermode2 ))
		return 1;
	if( R_RankForRenderMode( rendermode1 ) < R_RankForRenderMode( rendermode2 ))
		return -1;

	return 0;
}

/*
===============
R_WorldToScreen

Convert a given point from world into screen space
Returns true if we behind to screen
===============
*/
int R_WorldToScreen( const vec3_t point, vec3_t screen )
{
	if( !point || !screen )
		return true;

	matrix4x4 worldToScreen;
	Matrix4x4_Copy( worldToScreen, RI.worldviewProjectionMatrix );
	screen[0] = worldToScreen[0][0] * point[0] + worldToScreen[0][1] * point[1] + worldToScreen[0][2] * point[2] + worldToScreen[0][3];
	screen[1] = worldToScreen[1][0] * point[0] + worldToScreen[1][1] * point[1] + worldToScreen[1][2] * point[2] + worldToScreen[1][3];
	float w = worldToScreen[3][0] * point[0] + worldToScreen[3][1] * point[1] + worldToScreen[3][2] * point[2] + worldToScreen[3][3];
	screen[2] = 0.0f; // just so we have something valid here

	qboolean behind;
	if( w < 0.001f )
	{
		behind = true;
	}
	else
	{
		float invw = 1.0f / w;
		screen[0] *= invw;
		screen[1] *= invw;
		behind = false;
	}

	return behind;
}

/*
===============
R_ScreenToWorld

Convert a given point from screen into world space
===============
*/
void R_ScreenToWorld( const vec3_t screen, vec3_t point )
{
	if( !point || !screen )
		return;

	matrix4x4 screenToWorld;
	Matrix4x4_Invert_Full( screenToWorld, RI.worldviewProjectionMatrix );

	point[0] = screen[0] * screenToWorld[0][0] + screen[1] * screenToWorld[0][1] + screen[2] * screenToWorld[0][2] + screenToWorld[0][3];
	point[1] = screen[0] * screenToWorld[1][0] + screen[1] * screenToWorld[1][1] + screen[2] * screenToWorld[1][2] + screenToWorld[1][3];
	point[2] = screen[0] * screenToWorld[2][0] + screen[1] * screenToWorld[2][1] + screen[2] * screenToWorld[2][2] + screenToWorld[2][3];
	float w = screen[0] * screenToWorld[3][0] + screen[1] * screenToWorld[3][1] + screen[2] * screenToWorld[3][2] + screenToWorld[3][3];
	if( w != 0.0f ) VectorScale( point, ( 1.0f / w ), point );
}

/*
===============
R_PushScene
===============
*/
void R_PushScene( void )
{
	if( ++tr.draw_stack_pos >= MAX_DRAW_STACK )
		gEngfuncs.Host_Error( "draw stack overflow\n" );

	tr.draw_list = &tr.draw_stack[tr.draw_stack_pos];
}

/*
===============
R_PopScene
===============
*/
void R_PopScene( void )
{
	if( --tr.draw_stack_pos < 0 )
		gEngfuncs.Host_Error( "draw stack underflow\n" );
	tr.draw_list = &tr.draw_stack[tr.draw_stack_pos];
}

/*
===============
R_ClearScene
===============
*/
void R_ClearScene( void )
{
	tr.draw_list->num_solid_entities = 0;
	tr.draw_list->num_trans_entities = 0;
	tr.draw_list->num_beam_entities = 0;

	RI.viewleaf = NULL;
	RI.oldviewleaf = NULL;
#if XASH_RAYTRACING
	RI.isSkyVisible = false;
#endif

	if( ENGINE_GET_PARM( PARM_CONNSTATE ) != ca_active )
		tr.worldmodel = NULL;

	// clear the scene befor start new frame
	if( gEngfuncs.drawFuncs->R_ClearScene != NULL )
		gEngfuncs.drawFuncs->R_ClearScene();

}

/*
===============
R_AddEntity
===============
*/
qboolean R_AddEntity( struct cl_entity_s *clent, int type )
{
	if( !r_drawentities->value )
		return false; // not allow to drawing

	if( FBitSet( clent->curstate.effects, EF_NODRAW ))
		return false; // done

	if( !R_ModelOpaque( clent->curstate.rendermode ) && CL_FxBlend( clent ) <= 0 )
		return true; // invisible

	switch( type )
	{
	case ET_FRAGMENTED:
		r_stats.c_client_ents++;
		break;
	case ET_TEMPENTITY:
		r_stats.c_active_tents_count++;
		break;
	}

	if( type == ET_BEAM )
	{
		if( tr.draw_list->num_beam_entities >= MAX_VISIBLE_PACKET )
		{
			gEngfuncs.Con_Printf( S_ERROR "Too many beams %d!\n", tr.draw_list->num_beam_entities );
			return false;
		}

		tr.draw_list->beam_entities[tr.draw_list->num_beam_entities] = clent;
		tr.draw_list->num_beam_entities++;

		return true;
	}

	if( R_OpaqueEntity( clent ))
	{
		// opaque
		if( tr.draw_list->num_solid_entities >= MAX_VISIBLE_PACKET )
			return false;

		tr.draw_list->solid_entities[tr.draw_list->num_solid_entities] = clent;
		tr.draw_list->num_solid_entities++;
	}
	else
	{
		// translucent
		if( tr.draw_list->num_trans_entities >= MAX_VISIBLE_PACKET )
			return false;

		tr.draw_list->trans_entities[tr.draw_list->num_trans_entities] = clent;
		tr.draw_list->num_trans_entities++;
	}

	return true;
}

/*
=============
R_Clear
=============
*/
static void R_Clear( int bitMask )
{
	if( ENGINE_GET_PARM( PARM_DEV_OVERVIEW ))
		pglClearColor( 0.0f, 1.0f, 0.0f, 1.0f ); // green background (Valve rules)
	else pglClearColor( 0.5f, 0.5f, 0.5f, 1.0f );

	int bits = GL_DEPTH_BUFFER_BIT;

	if( glState.stencilEnabled )
		bits |= GL_STENCIL_BUFFER_BIT;

	bits &= bitMask;

	pglClear( bits );

	// change ordering for overview
	if( FBitSet( RI.rvp.flags, RF_DRAW_OVERVIEW ))
	{
		gldepthmin = 1.0f;
		gldepthmax = 0.0f;
	}
	else
	{
		gldepthmin = 0.0f;
		gldepthmax = 1.0f;
	}

	pglDepthFunc( GL_LEQUAL );
	pglDepthRange( gldepthmin, gldepthmax );
}

//=============================================================================
/*
===============
R_GetFarClip
===============
*/
static float R_GetFarClip( void )
{
	if( WORLDMODEL && FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		return gp_movevars->zmax * 1.73f;
	return 2048.0f;
}

#if XASH_RAYTRACING
static float R_GetNearClip( void )
{
	return 4.0f;
}
#endif

/*
===============
R_SetupFrustum
===============
*/
void R_SetupFrustum( void )
{
	// build the transformation matrix for the given view angles
	AngleVectors( RI.rvp.viewangles, RI.vforward, RI.vright, RI.vup );

	if( !r_lockfrustum.value )
	{
		VectorCopy( RI.rvp.vieworigin, RI.cullorigin );
		VectorCopy( RI.vforward, RI.cull_vforward );
		VectorCopy( RI.vright, RI.cull_vright );
		VectorCopy( RI.vup, RI.cull_vup );
	}

	if( FBitSet( RI.rvp.flags, RF_DRAW_OVERVIEW ))
	{
		const ref_overview_t	*ov = gEngfuncs.GetOverviewParms();
		GL_FrustumInitOrtho( &RI.frustum, ov->xLeft, ov->xRight, ov->yTop, ov->yBottom, ov->zNear, ov->zFar );
	}
	else
	{
		GL_FrustumInitProj( &RI.frustum, 0.0f, R_GetFarClip(), RI.rvp.fov_x, RI.rvp.fov_y );
	}
}

/*
=============
R_SetupProjectionMatrix
=============
*/
static void R_SetupProjectionMatrix( matrix4x4 m )
{
	if( FBitSet( RI.rvp.flags, RF_DRAW_OVERVIEW ))
	{
		const ref_overview_t *ov = gEngfuncs.GetOverviewParms();
		Matrix4x4_CreateOrtho( m, ov->xLeft, ov->xRight, ov->yTop, ov->yBottom, ov->zNear, ov->zFar );
		return;
	}

	RI.farClip = R_GetFarClip();

#if !XASH_RAYTRACING
	GLfloat zNear = 4.0f;
#else
	GLfloat zNear = R_GetNearClip();
#endif
	GLfloat zFar = Q_max( 256.0f, RI.farClip );

	GLfloat yMax = zNear * tan( RI.rvp.fov_y * M_PI_F / 360.0f );
	GLfloat yMin = -yMax;

	GLfloat xMax = zNear * tan( RI.rvp.fov_x * M_PI_F / 360.0f );
	GLfloat xMin = -xMax;

	if( tr.rotation & 1 )
	{
		Matrix4x4_CreateProjection( m, yMax, yMin, xMax, xMin, zNear, zFar );
	}
	else
	{
		Matrix4x4_CreateProjection( m, xMax, xMin, yMax, yMin, zNear, zFar );
	}
}

/*
=============
R_SetupModelviewMatrix
=============
*/
static void R_SetupModelviewMatrix( matrix4x4 m )
{
	Matrix4x4_CreateModelview( m );
	if( tr.rotation & 1 )
	{
		Matrix4x4_ConcatRotate( m, anglemod( -RI.rvp.viewangles[2] + 90 ), 1, 0, 0 );
		Matrix4x4_ConcatRotate( m, -RI.rvp.viewangles[0], 0, 1, 0 );
		Matrix4x4_ConcatRotate( m, -RI.rvp.viewangles[1], 0, 0, 1 );
	}
	else
	{
		Matrix4x4_ConcatRotate( m, -RI.rvp.viewangles[2], 1, 0, 0 );
		Matrix4x4_ConcatRotate( m, -RI.rvp.viewangles[0], 0, 1, 0 );
		Matrix4x4_ConcatRotate( m, -RI.rvp.viewangles[1], 0, 0, 1 );
	}
	Matrix4x4_ConcatTranslate( m, -RI.rvp.vieworigin[0], -RI.rvp.vieworigin[1], -RI.rvp.vieworigin[2] );
}

/*
=============
R_LoadIdentity
=============
*/
void R_LoadIdentity( void )
{
	if( tr.modelviewIdentity ) return;

	Matrix4x4_LoadIdentity( RI.objectMatrix );
	Matrix4x4_Copy( RI.modelviewMatrix, RI.worldviewMatrix );

	pglMatrixMode( GL_MODELVIEW );
	GL_LoadMatrix( RI.modelviewMatrix );
	tr.modelviewIdentity = true;
}

/*
=============
R_RotateForEntity
=============
*/
void R_RotateForEntity( cl_entity_t *e )
{
	float	scale = 1.0f;

	if( e == CL_GetEntityByIndex( 0 ))
	{
		R_LoadIdentity();
		return;
	}

	if( e->model->type != mod_brush && e->curstate.scale > 0.0f )
		scale = e->curstate.scale;

	Matrix4x4_CreateFromEntity( RI.objectMatrix, e->angles, e->origin, scale );
	Matrix4x4_ConcatTransforms( RI.modelviewMatrix, RI.worldviewMatrix, RI.objectMatrix );

	pglMatrixMode( GL_MODELVIEW );
	GL_LoadMatrix( RI.modelviewMatrix );
	tr.modelviewIdentity = false;
}

/*
=============
R_TranslateForEntity
=============
*/
void R_TranslateForEntity( cl_entity_t *e )
{
	float	scale = 1.0f;

	if( e == CL_GetEntityByIndex( 0 ))
	{
		R_LoadIdentity();
		return;
	}

	if( e->model->type != mod_brush && e->curstate.scale > 0.0f )
		scale = e->curstate.scale;

	Matrix4x4_CreateFromEntity( RI.objectMatrix, vec3_origin, e->origin, scale );
	Matrix4x4_ConcatTransforms( RI.modelviewMatrix, RI.worldviewMatrix, RI.objectMatrix );

	pglMatrixMode( GL_MODELVIEW );
	GL_LoadMatrix( RI.modelviewMatrix );
	tr.modelviewIdentity = false;
}

/*
===============
R_FindViewLeaf
===============
*/
void R_FindViewLeaf( void )
{
	RI.oldviewleaf = RI.viewleaf;
	RI.viewleaf = gEngfuncs.Mod_PointInLeaf( RI.rvp.vieworigin, WORLDMODEL->nodes, WORLDMODEL );
}

/*
===============
R_SetupFrame
===============
*/
static void R_SetupFrame( void )
{
	// setup viewplane dist
	RI.viewplanedist = DotProduct( RI.rvp.vieworigin, RI.vforward );

	// NOTE: this request is the fps-killer on some NVidia drivers
	glState.isFogEnabled = pglIsEnabled( GL_FOG );

	if( !gl_nosort.value )
	{
		// sort translucents entities by rendermode and distance
		qsort( tr.draw_list->trans_entities, tr.draw_list->num_trans_entities, sizeof( cl_entity_t* ), R_TransEntityCompare );
	}

	// current viewleaf
	if( FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		R_FindViewLeaf();
}

/*
=============
R_SetupGL
=============
*/
void R_SetupGL( qboolean set_gl_state )
{
	R_SetupModelviewMatrix( RI.worldviewMatrix );
	R_SetupProjectionMatrix( RI.projectionMatrix );

	Matrix4x4_Concat( RI.worldviewProjectionMatrix, RI.projectionMatrix, RI.worldviewMatrix );

	if( !set_gl_state ) return;

	if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
	{
		int scene_width, scene_height;

		GL_BindSceneTarget();
		GL_GetSceneTargetSize( &scene_width, &scene_height );

		// set up viewport (main, playersetup)
		int x = RI.rvp.viewport[0] * scene_width / gpGlobals->width;
		int x2 = (( RI.rvp.viewport[0] + RI.rvp.viewport[2] ) * scene_width + gpGlobals->width - 1 ) / gpGlobals->width;
		int y = scene_height - RI.rvp.viewport[1] * scene_height / gpGlobals->height;
		int y2 = scene_height - (( RI.rvp.viewport[1] + RI.rvp.viewport[3] ) * scene_height + gpGlobals->height - 1 ) / gpGlobals->height;

		if( tr.rotation & 1 )
			pglViewport( y2, x, y - y2, x2 - x );
		else pglViewport( x, y2, x2 - x, y - y2 );
	}
	else
	{
		// envpass, mirrorpass
		GL_BindWindowTarget();
		pglViewport( RI.rvp.viewport[0], RI.rvp.viewport[1], RI.rvp.viewport[2], RI.rvp.viewport[3] );
	}

	pglMatrixMode( GL_PROJECTION );
	GL_LoadMatrix( RI.projectionMatrix );

	pglMatrixMode( GL_MODELVIEW );
	GL_LoadMatrix( RI.worldviewMatrix );

	GL_Cull( GL_FRONT );

	pglDisable( GL_BLEND );
	pglDisable( GL_ALPHA_TEST );
	pglColor4f( 1.0f, 1.0f, 1.0f, 1.0f );
}

/*
=============
R_RecursiveFindWaterTexture

using to find source waterleaf with
watertexture to grab fog values from it
=============
*/
static gl_texture_t *R_RecursiveFindWaterTexture( const mnode_t *node, const mnode_t *ignore, qboolean down )
{
	gl_texture_t *tex = NULL;

	// assure the initial node is not null
	// we could check it here, but we would rather check it
	// outside the call to get rid of one additional recursion level
	Assert( node != NULL );

	// ignore solid nodes
	if( node->contents == CONTENTS_SOLID )
		return NULL;

	if( node->contents < 0 )
	{
		// ignore non-liquid leaves
		if( node->contents != CONTENTS_WATER && node->contents != CONTENTS_LAVA && node->contents != CONTENTS_SLIME )
			 return NULL;

		// find texture
		mleaf_t *pleaf = (mleaf_t *)node;
		msurface_t **mark = pleaf->firstmarksurface;
		int c = pleaf->nummarksurfaces;

		for( int i = 0; i < c; i++, mark++ )
		{
			if( (*mark)->flags & SURF_DRAWTURB && (*mark)->texinfo && (*mark)->texinfo->texture )
				return R_GetTexture( (*mark)->texinfo->texture->gl_texturenum );
		}

		// texture not found
		return NULL;
	}

	// this is a regular node
	// traverse children
	mnode_t *child = node_child( node, 0, WORLDMODEL );

	if( child && ( child != ignore ))
	{
		tex = R_RecursiveFindWaterTexture( child, node, true );
		if( tex ) return tex;
	}

	child = node_child( node, 1, WORLDMODEL );

	if( child && ( child != ignore ))
	{
		tex = R_RecursiveFindWaterTexture( child, node, true );
		if( tex ) return tex;
	}

	// for down recursion, return immediately
	if( down ) return NULL;

	// texture not found, step up if any
	if( node->parent )
		return R_RecursiveFindWaterTexture( node->parent, node, false );

	// top-level node, bail out
	return NULL;
}

/*
=============
R_CheckFog

check for underwater fog
Using backward recursion to find waterline leaf
from underwater leaf (idea: XaeroX)
=============
*/
static void R_CheckFog( void )
{
	// quake global fog
	if( FBitSet( gp_host->features, ENGINE_QUAKE_COMPATIBLE ))
	{
		if( !gp_movevars->fog_settings )
		{
			if( pglIsEnabled( GL_FOG ))
				pglDisable( GL_FOG );
			RI.fogEnabled = false;
			return;
		}

		// quake-style global fog
		RI.fogColor[0] = ((gp_movevars->fog_settings & 0xFF000000) >> 24) / 255.0f;
		RI.fogColor[1] = ((gp_movevars->fog_settings & 0xFF0000) >> 16) / 255.0f;
		RI.fogColor[2] = ((gp_movevars->fog_settings & 0xFF00) >> 8) / 255.0f;
		RI.fogDensity = ((gp_movevars->fog_settings & 0xFF) / 255.0f) * 0.01f;
		RI.fogStart = RI.fogEnd = 0.0f;
		RI.fogColor[3] = 1.0f;
		RI.fogCustom = false;
		RI.fogEnabled = true;
		RI.fogSkybox = true;
		return;
	}

	RI.fogEnabled = false;

	if( FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ) || ENGINE_GET_PARM( PARM_WATER_LEVEL ) < 3 || !FBitSet( RI.rvp.flags, RF_DRAW_WORLD ) || !RI.viewleaf )
	{
		if( RI.cached_waterlevel == 3 )
		{
			// in some cases waterlevel jumps from 3 to 1. Catch it
			RI.cached_waterlevel = ENGINE_GET_PARM( PARM_WATER_LEVEL );
			RI.cached_contents = CONTENTS_EMPTY;
			if( !RI.fogCustom )
			{
				glState.isFogEnabled = false;
				pglDisable( GL_FOG );
			}
		}
		return;
	}

	cl_entity_t *ent = gEngfuncs.CL_GetWaterEntity( RI.rvp.vieworigin );
	int cnt;
	if( ent && ent->model && ent->model->type == mod_brush && ent->curstate.skin < 0 )
		cnt = ent->curstate.skin;
	else cnt = RI.viewleaf->contents;

	RI.cached_waterlevel = ENGINE_GET_PARM( PARM_WATER_LEVEL );

	if( !IsLiquidContents( RI.cached_contents ) && IsLiquidContents( cnt ))
	{
		gl_texture_t *tex = NULL;

		// check for water texture
		if( ent && ent->model && ent->model->type == mod_brush )
		{
			int count = ent->model->nummodelsurfaces;

			msurface_t *surf = &ent->model->surfaces[ent->model->firstmodelsurface];
			for( int i = 0; i < count; i++, surf++ )
			{
				if( surf->flags & SURF_DRAWTURB && surf->texinfo && surf->texinfo->texture )
				{
					tex = R_GetTexture( surf->texinfo->texture->gl_texturenum );
					RI.cached_contents = ent->curstate.skin;
					break;
				}
			}
		}
		else
		{
			tex = R_RecursiveFindWaterTexture( RI.viewleaf->parent, NULL, false );
			if( tex ) RI.cached_contents = RI.viewleaf->contents;
		}

		if( !tex ) return;	// no valid fogs

		// copy fog params
		RI.fogColor[0] = tex->fogParams[0] / 255.0f;
		RI.fogColor[1] = tex->fogParams[1] / 255.0f;
		RI.fogColor[2] = tex->fogParams[2] / 255.0f;
		RI.fogDensity = tex->fogParams[3] * 0.000025f;
		RI.fogStart = RI.fogEnd = 0.0f;
		RI.fogColor[3] = 1.0f;
		RI.fogCustom = false;
		RI.fogEnabled = true;
		RI.fogSkybox = true;
	}
	else
	{
		RI.fogCustom = false;
		RI.fogEnabled = true;
		RI.fogSkybox = true;
	}
}

/*
=============
R_CheckGLFog

special condition for Spirit 1.9
that used direct calls of glFog-functions
=============
*/
static void R_CheckGLFog( void )
{
#ifdef HACKS_RELATED_HLMODS
	if(( !RI.fogEnabled && !RI.fogCustom ) && pglIsEnabled( GL_FOG ) && VectorIsNull( RI.fogColor ))
	{
		// fill the fog color from GL-state machine
		pglGetFloatv( GL_FOG_COLOR, RI.fogColor );
		RI.fogSkybox = true;
	}
#endif
}

/*
=============
R_DrawFog

=============
*/
void R_DrawFog( void )
{
	if( !RI.fogEnabled || !gl_fog.value )
		return;

	pglEnable( GL_FOG );
	pglFogi( GL_FOG_MODE, FBitSet( gp_host->features, ENGINE_QUAKE_COMPATIBLE ) ? GL_EXP2 : GL_EXP );
	pglFogf( GL_FOG_DENSITY, RI.fogDensity );
	pglFogfv( GL_FOG_COLOR, RI.fogColor );
	pglHint( GL_FOG_HINT, GL_NICEST );
}

/*
=============
R_DrawEntitiesOnList
=============
*/
static void R_DrawEntitiesOnList( void )
{
	tr.blend = 1.0f;
	GL_CheckForErrors();

	// first draw solid entities
	for( int i = 0; i < tr.draw_list->num_solid_entities && !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ); i++ )
	{
		RI.currententity = tr.draw_list->solid_entities[i];
		RI.currentmodel = RI.currententity->model;

		if( !RI.currentmodel && RI.currententity->player && !FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
			continue;

		Assert( RI.currententity != NULL );
		Assert( RI.currentmodel != NULL );

		switch( RI.currentmodel->type )
		{
		case mod_brush:
			R_DrawBrushModel( RI.currententity );
			break;
		case mod_alias:
			R_DrawAliasModel( RI.currententity );
			break;
		case mod_studio:
			R_DrawStudioModel( RI.currententity );
			break;
		default:
			break;
		}
	}

	GL_CheckForErrors();

	// quake-specific feature
	R_DrawAlphaTextureChains();

	GL_CheckForErrors();

	// draw sprites seperately, because of alpha blending
	for( int i = 0; i < tr.draw_list->num_solid_entities && !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ); i++ )
	{
		RI.currententity = tr.draw_list->solid_entities[i];
		RI.currentmodel = RI.currententity->model;

		if( !RI.currentmodel && RI.currententity->player && !FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
			continue;

		Assert( RI.currententity != NULL );
		Assert( RI.currentmodel != NULL );

		switch( RI.currentmodel->type )
		{
		case mod_sprite:
			R_DrawSpriteModel( RI.currententity );
			break;
		}
	}

	GL_CheckForErrors();

	if( !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ))
	{
		gEngfuncs.CL_DrawEFX( tr.frametime, false );
	}

	GL_CheckForErrors();

	if( FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		gEngfuncs.pfnDrawNormalTriangles();

	GL_CheckForErrors();

#ifdef HACKS_RELATED_HLMODS
	// Vampire Slayer leave GL_LINEAR fog with their own start/end after
	// pfnDrawNormalTriangles; restore engine fog for the translucent
	// entities and viewmodel drawn below.
	R_DrawFog();
#endif

	// then draw translucent entities
	for( int i = 0; i < tr.draw_list->num_trans_entities && !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ); i++ )
	{
		RI.currententity = tr.draw_list->trans_entities[i];
		RI.currentmodel = RI.currententity->model;

		// handle studiomodels with custom rendermodes on texture
		if( RI.currententity->curstate.rendermode != kRenderNormal )
			tr.blend = CL_FxBlend( RI.currententity ) / 255.0f;
		else tr.blend = 1.0f; // draw as solid but sorted by distance

		if( tr.blend <= 0.0f ) continue;

		if( !RI.currentmodel && RI.currententity->player && !FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
			continue;

		Assert( RI.currententity != NULL );
		Assert( RI.currentmodel != NULL );

		switch( RI.currentmodel->type )
		{
		case mod_brush:
			R_DrawBrushModel( RI.currententity );
			break;
		case mod_alias:
			R_DrawAliasModel( RI.currententity );
			break;
		case mod_studio:
			R_DrawStudioModel( RI.currententity );
			break;
		case mod_sprite:
			R_DrawSpriteModel( RI.currententity );
			break;
		default:
			break;
		}
	}

	GL_CheckForErrors();

	if( FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
	{
		pglTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
		gEngfuncs.pfnDrawTransparentTriangles ();
	}

	GL_CheckForErrors();

	if( !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ))
	{
		R_AllowFog( false );
		gEngfuncs.CL_DrawEFX( tr.frametime, true );
		R_AllowFog( true );
	}

	GL_CheckForErrors();

	pglDisable( GL_BLEND );	// Trinity Render issues

	if( !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ))
		R_DrawViewModel();
	gEngfuncs.CL_ExtraUpdate();

	GL_CheckForErrors();
}

/*
================
R_RenderScene

R_SetupRefParams must be called right before
================
*/
void R_RenderScene( void )
{
	if( !WORLDMODEL && FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		gEngfuncs.Host_Error( "%s: NULL worldmodel\n", __func__ );

	// frametime is valid only for normal pass
	if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
		tr.frametime = gp_cl->time -   gp_cl->oldtime;
	else tr.frametime = 0.0;

	// begin a new frame
	tr.framecount++;

	tr.dlightframecount = R_PushDlights( WORLDMODEL, tr.framecount );

	R_SetupFrustum();
	R_SetupFrame();
	R_SetupGL( true );
	R_Clear( ~0 );

	R_MarkLeaves();
	R_DrawFog ();
	if( FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		R_AnimateRipples();

	R_CheckGLFog();
	R_DrawWorld();
	R_CheckFog();

	gEngfuncs.CL_ExtraUpdate ();	// don't let sound get messed up if going slow

	R_DrawEntitiesOnList();

	R_DrawWaterSurfaces();
}

void R_GammaChanged( qboolean do_reset_gamma )
{
	if( do_reset_gamma )
	{
		// paranoia cubemap rendering
		if( gEngfuncs.drawFuncs->GL_BuildLightmaps )
			gEngfuncs.drawFuncs->GL_BuildLightmaps( );
	}
	else
	{
		glConfig.softwareGammaUpdate = true;
		GL_RebuildLightmaps();
		glConfig.softwareGammaUpdate = false;
	}
}

static void R_CheckCvars( void )
{
	qboolean rebuild = false;

	if( FBitSet( gl_overbright.flags, FCVAR_CHANGED ))
	{
		ClearBits( gl_overbright.flags, FCVAR_CHANGED );
		rebuild = true;
	}

	if( FBitSet( r_vbo.flags, FCVAR_CHANGED ))
	{
		ClearBits( r_vbo.flags, FCVAR_CHANGED );

		R_EnableVBO( r_vbo.value ? true : false );
		if( R_HasEnabledVBO( ))
			R_GenerateVBO();

		if( gl_overbright.value )
			rebuild = true;
	}

	if( FBitSet( r_vbo_overbrightmode.flags, FCVAR_CHANGED ) && gl_overbright.value )
	{
		ClearBits( r_vbo_overbrightmode.flags, FCVAR_CHANGED );
		rebuild = true;
	}

	if( rebuild )
		R_GammaChanged( false );
}

#if XASH_RAYTRACING
extern const float* rt_portal_posteffect_position;

static qboolean RT_IsPortalPosteffectActive()
{
    if( rt_portal_posteffect_position != NULL )
    {
        const float threshold = METRIC_TO_QUAKEUNIT( 2.0f );

        return VectorDistance2( rt_portal_posteffect_position, RI.rvp.vieworigin ) < threshold * threshold;
    }

    return false;
}

static float RT_LerpAlpha( float a, float b, float lerp )
{
    float r = a + bound( 0.0f, lerp, 1.0f ) * ( b - a );

	r = powf( r, 2.2f );
    return bound( 0.0f, r, 1.0f );
}

static const char* RT_TryUploadChapterIntroTexture()
{
    static char tex[ 256 ]                      = "";
    static char tex_prev[ RT_ARRAYSIZE( tex ) ] = "";

    const char* chaptername = CVAR_TO_STR( rt_cvars._rt_chapter );
    if( !chaptername )
    {
        if( Q_strlen( tex_prev ) > 0 )
        {
            RgResult r = rgMarkOriginalTextureAsDeleted( rg_instance, tex_prev );
            RG_CHECK( r );

            tex_prev[ 0 ] = '\0';
        }

        return NULL;
    }

	Q_strncpy( tex, "resource/ch/", RT_ARRAYSIZE( tex ) );
    Q_strncat( tex, chaptername, RT_ARRAYSIZE( tex ) - RT_ARRAYSIZE( "resource/ch/" ) - 1 );

	// same as previous
    if( Q_strncmp( tex, tex_prev, RT_ARRAYSIZE( tex ) ) == 0 )
    {
        return tex;
    }

    {
        RgResult r = rgMarkOriginalTextureAsDeleted( rg_instance, tex_prev );
        RG_CHECK( r );
    }
    {
        const uint32_t pix = 0xFF000000;

        RgOriginalTextureInfo info = {
            .pTextureName = tex,
            .pPixels      = &pix,
            .size         = { 1, 1 },
            .filter       = RG_SAMPLER_FILTER_LINEAR,
            .addressModeU = RG_SAMPLER_ADDRESS_MODE_CLAMP,
            .addressModeV = RG_SAMPLER_ADDRESS_MODE_CLAMP,
        };
        RgResult r = rgProvideOriginalTexture( rg_instance, &info );
        RG_CHECK( r );
    }

    Q_strncpy( tex_prev, tex, RT_ARRAYSIZE( tex ) );
    return tex;
}

static float rt_chaptertime_start     = -1;
static float rt_chaptertime_beginfade = -1;
static float rt_chaptertime_end       = -1;
void RT_ResetChapterLogo( void )
{
    rt_chaptertime_start     = -1;
    rt_chaptertime_beginfade = -1;
    rt_chaptertime_end       = -1;
}
static void RT_TryDrawCustomChapterIntro()
{
    const char* texname = RT_TryUploadChapterIntroTexture();

    if( !texname )
    {
        return;
    }

    const float duration_solid   = 3.0f;
    const float duration_fadeout = 2.0f;
    Assert( duration_fadeout > 0 );
    const float background_opacity = 0.3f;

    if( RT_CVAR_TO_BOOL( _rt_chaptershow ) )
    {
        rt_chaptertime_start     = gp_cl->time;
        rt_chaptertime_beginfade = rt_chaptertime_start + duration_solid;
        rt_chaptertime_end       = rt_chaptertime_start + duration_solid + duration_fadeout;

		gEngfuncs.Cvar_Set( rt_cvars._rt_chaptershow->name, "0" );
    }

    float curtime = gp_cl->time;

    if( curtime < rt_chaptertime_start )
    {
        return;
    }

	if( curtime > rt_chaptertime_end )
    {
        RT_ResetChapterLogo();
        return;
    }

    float alpha = RT_LerpAlpha(
        1.0f, 0.0f, Q_max( 0, curtime - rt_chaptertime_beginfade ) / duration_fadeout );

    if( alpha < 1.0f / 255.0f )
    {
        return;
    }

    static const uint32_t indices[] = { 0, 1, 2, 2, 3, 0 };

    static const RgPrimitiveVertex verts_fullscreen[] = {
        { .position = { -1, +1, 0 }, .texCoord = { 0, 1 }, .color = 0xFFFFFFFF },
        { .position = { -1, -1, 0 }, .texCoord = { 0, 0 }, .color = 0xFFFFFFFF },
        { .position = { +1, -1, 0 }, .texCoord = { 1, 0 }, .color = 0xFFFFFFFF },
        { .position = { +1, +1, 0 }, .texCoord = { 1, 1 }, .color = 0xFFFFFFFF },
    };

    RgPrimitiveVertex verts_16by9[] = {
        { .position = { 0 }, .texCoord = { 0, 1 }, .color = 0xFFFFFFFF },
        { .position = { 0 }, .texCoord = { 0, 0 }, .color = 0xFFFFFFFF },
        { .position = { 0 }, .texCoord = { 1, 0 }, .color = 0xFFFFFFFF },
        { .position = { 0 }, .texCoord = { 1, 1 }, .color = 0xFFFFFFFF },
    };

    {
        float xwin = ( float )gpGlobals->width / ( float )gpGlobals->height;
        float ximg = 16.0f / 9.0f;
		
		float tx, ty;

        if( ximg < xwin )
        {
            tx = ximg / xwin;
            ty = 1.0f;
        }
        else
        {
            tx = 1.0f;
            ty = xwin / ximg;
        }

		VectorSet( verts_16by9[ 0 ].position, -tx, +ty, 0 );
        VectorSet( verts_16by9[ 1 ].position, -tx, -ty, 0 );
		VectorSet( verts_16by9[ 2 ].position, +tx, -ty, 0 );
		VectorSet( verts_16by9[ 3 ].position, +tx, +ty, 0 );
    }

    static const float identity_mat4[ 16 ] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f,
    };

    // background
    {
        RgMeshPrimitiveInfo prim = {
            .pPrimitiveNameInMesh = NULL,
            .primitiveIndexInMesh = 0,
            .flags                = RG_MESH_PRIMITIVE_TRANSLUCENT,
            .pVertices            = verts_fullscreen,
            .vertexCount          = RT_ARRAYSIZE( verts_fullscreen ),
            .pIndices             = indices,
            .indexCount           = RT_ARRAYSIZE( indices ),
            .pTextureName         = NULL,
            .textureFrame         = 0,
            .color       = rgUtilPackColorFloat4D( 0.0f, 0.0f, 0.0f, alpha * background_opacity ),
            .emissive    = 0,
            .pEditorInfo = NULL,
        };
        RgResult r = rgUploadNonWorldPrimitive( rg_instance, &prim, identity_mat4, NULL );
        RG_CHECK( r );
    }
    // text
    {
        RgMeshPrimitiveInfo prim = {
            .pPrimitiveNameInMesh = NULL,
            .primitiveIndexInMesh = 0,
            .flags                = RG_MESH_PRIMITIVE_TRANSLUCENT,
            .pVertices            = verts_16by9,
            .vertexCount          = RT_ARRAYSIZE( verts_16by9 ),
            .pIndices             = indices,
            .indexCount           = RT_ARRAYSIZE( indices ),
            .pTextureName         = texname,
            .textureFrame         = 0,
            .color                = rgUtilPackColorFloat4D( 1.0f, 1.0f, 1.0f, alpha ),
            .emissive             = 0,
            .pEditorInfo          = NULL,
        };

        RgResult r = rgUploadNonWorldPrimitive( rg_instance, &prim, identity_mat4, NULL );
        RG_CHECK( r );
    }
}
#endif

/*
===============
R_BeginFrame
===============
*/
void R_BeginFrame( qboolean clearScene )
{
	glConfig.softwareGammaUpdate = false;	// in case of possible fails

	GL_CheckRenderTargets();

	if(( gl_clear->value || ENGINE_GET_PARM( PARM_DEV_OVERVIEW )) &&
		clearScene && ENGINE_GET_PARM( PARM_CONNSTATE ) != ca_cinematic )
	{
		pglClear( GL_COLOR_BUFFER_BIT );
	}

	R_CheckCvars();

	R_Set2DMode( true );

	// draw buffer stuff
	if( !GL_RenderTargetsActive( ))
		pglDrawBuffer( GL_BACK );

#if XASH_RAYTRACING

    if( RT_CVAR_TO_BOOL( rt_forcecvars ) )
    {
		// CVAR_TO_BOOL but without NULL check
    #define TO_BOOL( x ) ( ( ( x )->value != 0.0f ) ? true : false )

        if( !TO_BOOL( r_fullbright ) )
        {
            gEngfuncs.Cvar_Set( r_fullbright->name, "1" );
        }

        // dynamic lightmaps not supported
        if( CVAR_TO_BOOL( r_dynamic ) )
        {
            gEngfuncs.Cvar_Set( r_dynamic->name, "0" );
        }
        if( r_nocull.value <= 0.5f )
        {
            gEngfuncs.Cvar_Set( r_nocull.name, "1" );
        }
        if( r_novis.value <= 0.5f )
        {
            gEngfuncs.Cvar_Set( r_novis.name, "1" );
        }

    #undef TO_BOOL
    }

    if( gl_vsync && ( ( gl_vsync->value != 0.0f ) != ( RT_CVAR_TO_BOOL( rt_vsync ) ) ) )
    {
        gEngfuncs.Cvar_Set( gl_vsync->name, RT_CVAR_TO_BOOL( rt_vsync ) ? "1" : "0" );
    }

	{
		char mapname_storage[ 64 ] = "";

		char* mapname = NULL;
		if( ENGINE_GET_PARM( PARM_CONNSTATE ) == ca_active && WORLDMODEL )
		{
			{
				assert( sizeof( WORLDMODEL->name ) == sizeof( mapname_storage ) );
				memcpy( mapname_storage, WORLDMODEL->name, sizeof( mapname_storage ) );
				mapname_storage[ sizeof( mapname_storage ) - 1 ] = '\0';
			}
			mapname = mapname_storage;

			// try skip "maps/"
			if( Q_strncmp( mapname, "maps/", 5 ) == 0 )
			{
				mapname += 5;
			}

			// try remove ".bsp" at the end
			char* e = Q_strstr( mapname, ".bsp" );
			if( e != NULL )
			{
				*e = '\0';
			}
		}

		RgStartFrameInfo info = {
			.pMapName               = mapname,
			.ignoreExternalGeometry = false,
			.surfaceSize            = {
				.width  = gpGlobals->width > 0 ? ( uint32_t )gpGlobals->width : 0,
				.height = gpGlobals->height > 0 ? ( uint32_t )gpGlobals->height : 0,
			},
		};

		RgResult r = rgStartFrame( rg_instance, &info );
		RG_CHECK( r );
	}
#endif

	// update texture parameters
	if( FBitSet( gl_texture_nearest.flags|gl_lightmap_nearest.flags|gl_texture_anisotropy.flags|gl_texture_lodbias.flags, FCVAR_CHANGED ))
		R_SetTextureParameters();

	gEngfuncs.CL_ExtraUpdate ();
}

/*
===============
R_SetupRefParams

set initial params for renderer
===============
*/
void R_SetupRefParams( const ref_viewpass_t *rvp )
{
	RI.rvp = *rvp;

	RI.farClip = 0;
	RI.viewleaf = NULL;
#if XASH_RAYTRACING
	RI.isSkyVisible = false;
#endif
}

/*
===============
R_RenderFrame
===============
*/
void R_RenderFrame( const ref_viewpass_t *rvp )
{
	if( r_norefresh->value )
		return;

	// setup the initial render params
	R_SetupRefParams( rvp );

	if( gl_finish.value && FBitSet( RI.rvp.flags, RF_DRAW_WORLD ))
		pglFinish();

	// completely override rendering
	if( gEngfuncs.drawFuncs->GL_RenderFrame != NULL )
	{
		tr.fCustomRendering = true;

		if( gEngfuncs.drawFuncs->GL_RenderFrame( rvp ))
		{
			R_GatherPlayerLight( tr.viewent );
			tr.realframecount++;
			tr.fResetVis = true;
			return;
		}
	}

	tr.fCustomRendering = false;
	if( !FBitSet( RI.rvp.flags, RF_ONLY_CLIENTDRAW ))
		R_RunViewmodelEvents();

	tr.realframecount++; // right called after viewmodel events
	R_RenderScene();

#if XASH_RAYTRACING
    RT_TryDrawCustomChapterIntro();
#endif

	return;
}

#if XASH_RAYTRACING
// clang-format off
typedef enum RT_VINTAGE
{
    RT_VINTAGE_OFF,

    RT_VINTAGE_CRT,
    RT_VINTAGE_200,
    RT_VINTAGE_480,
    RT_VINTAGE_720,

	RT_VINTAGE__COUNT
};
// this enum must match pVintageNames from VideoModes.cpp

qboolean RT_IsNightVisionActive( void )
{
    int cvarVal = RT_CVAR_TO_INT32( rt_ef_nv );
    if( cvarVal >= 0 )
    {
        return cvarVal > 0;
    }

    if( gp_cl )
    {
        cl_entity_t *player = CL_GetEntityByIndex( gp_cl->playernum + 1 );
        if( player && FBitSet( player->curstate.effects, EF_BRIGHTLIGHT ) )
        {
            return true;
        }
    }
    return false;
}

static void ResolutionToRtgl( RgDrawFrameRenderResolutionParams* dst,
                              const RgExtent2D                   winsize,
                              RgExtent2D*                        storage )
{
    const float aspect = ( float )winsize.width / ( float )winsize.height;

    if( RT_CVAR_TO_INT32( rt_renderscale ) > 0 )
    {
        float scale = ( float )RT_CVAR_TO_INT32( rt_renderscale ) / 100.0f;
        scale       = RT_CLAMP( scale, 0.2f, 1.0f );

        dst->customRenderSize.width  = ( uint32_t )( scale * ( float )winsize.width );
        dst->customRenderSize.height = ( uint32_t )( scale * ( float )winsize.height );
        dst->pPixelizedRenderSize    = NULL;

        return;
    }
    else
    {
        if( RT_CVAR_TO_INT32( rt_ef_vintage ) != RT_VINTAGE_OFF )
        {
            uint32_t h_pixelized = 0;
            uint32_t h_render    = 0;

            switch( RT_CVAR_TO_INT32( rt_ef_vintage ) )
            {
                case RT_VINTAGE_200:
                    h_pixelized = 200;
                    h_render    = 400;
                    break;

                case RT_VINTAGE_480:
                    h_pixelized = 480;
                    h_render    = 600;
                    break;

                case RT_VINTAGE_CRT:
                    h_pixelized = 480;
                    h_render    = 480;
                    break;

                case RT_VINTAGE_720:
                    h_pixelized = 720;
                    h_render    = 720;
                    break;

                default:
                    gEngfuncs.Cvar_SetValue( rt_cvars.rt_ef_vintage->name, 0 );
                    dst->customRenderSize     = winsize;
                    dst->pPixelizedRenderSize = NULL;
                    return;
            }

            assert( h_render > 0 && h_pixelized > 0 );

            storage->height              = h_pixelized;
            storage->width               = ( uint32_t )( h_pixelized * aspect );
            dst->pPixelizedRenderSize    = storage;
            dst->customRenderSize.height = h_render;
            dst->customRenderSize.width  = ( uint32_t )( h_render * aspect );

            return;
        }
    }

    dst->customRenderSize     = winsize;
    dst->pPixelizedRenderSize = NULL;
}

static RgRenderSharpenTechnique GetSharpenTechniqueFromCvar( void )
{
    int vintage = RT_CVAR_TO_INT32( rt_ef_vintage );
    int t       = RT_CVAR_TO_INT32( rt_sharpen );

    if( t == 1 )
    {
        return RG_RENDER_SHARPEN_TECHNIQUE_NAIVE;
    }
    if( t >= 2 )
    {
        return RG_RENDER_SHARPEN_TECHNIQUE_AMD_CAS;
    }

    if( vintage == RT_VINTAGE_200 || vintage == RT_VINTAGE_480 )
    {
        return RG_RENDER_SHARPEN_TECHNIQUE_AMD_CAS;
    }
    return RG_RENDER_SHARPEN_TECHNIQUE_NONE;
}

static void UpscaleCvarsToRtgl( RgDrawFrameRenderResolutionParams* pDst )
{
    static int prev_vintage = -1;
    static int prev_upscale_active = -1;

    RgBool32 fsr3_ok    = rgUtilIsUpscaleTechniqueAvailable( rg_instance, RG_RENDER_UPSCALE_TECHNIQUE_AMD_FSR3 );
    RgBool32 dlss_ok    = rgUtilIsUpscaleTechniqueAvailable( rg_instance, RG_RENDER_UPSCALE_TECHNIQUE_NVIDIA_DLSS );
    RgBool32 fg_ok      = rgUtilIsFrameGenerationAvailable( rg_instance );
    RgBool32 dlss_fg_ok = rgUtilIsDlssgAvailable( rg_instance );

    gEngfuncs.Cvar_Set( rt_cvars._rt_fsr3_available->name, fsr3_ok ? "1" : "0" );
    gEngfuncs.Cvar_Set( rt_cvars._rt_dlss_available->name, dlss_ok ? "1" : "0" );
    gEngfuncs.Cvar_Set( rt_cvars._rt_framegen_available->name, fg_ok ? "1" : "0" );
    gEngfuncs.Cvar_Set( rt_cvars._rt_dlss_framegen_available->name, dlss_fg_ok ? "1" : "0" );

    int method = RT_CVAR_TO_INT32( rt_upscale_method );
    int quality = RT_CVAR_TO_INT32( rt_upscale_quality );
    int vintage = RT_CVAR_TO_INT32( rt_ef_vintage );

    static qboolean initial_boot_done = false;
    if( !initial_boot_done )
    {
        initial_boot_done = true;
        if( method == 0 && quality > 0 )
        {
            method = dlss_ok ? 2 : 1;
            gEngfuncs.Cvar_SetValue( rt_cvars.rt_upscale_method->name, ( float )method );
        }
    }

    static int prev_rejected_method = -1;
    int effective_method = method;
    if( effective_method == 1 && !fsr3_ok )
    {
        effective_method = 0;
        if( prev_rejected_method != 1 )
        {
            gEngfuncs.Con_Printf( S_WARN "FSR3 upscaling is not available, disabling upscaling\n" );
            prev_rejected_method = 1;
        }
    }
    else if( effective_method == 2 && !dlss_ok )
    {
        method = fsr3_ok ? 1 : 0;
        effective_method = method;
        if( prev_rejected_method != 2 )
        {
            gEngfuncs.Con_Printf( S_WARN "DLSS upscaling is not available on this system, reverting rt_upscale_method to %d (%s)\n",
                                  method, method == 1 ? "FSR3" : "off" );
            prev_rejected_method = 2;
        }
        gEngfuncs.Cvar_SetValue( rt_cvars.rt_upscale_method->name, ( float )method );
    }
    else
    {
        prev_rejected_method = -1;
    }

    if( quality <= 0 )
    {
        effective_method = 0;
    }

    int upscale_active = ( effective_method > 0 ) ? 1 : 0;
    if( upscale_active && upscale_active != prev_upscale_active )
    {
        if( vintage > 0 )
        {
            gEngfuncs.Con_Printf( S_NOTE "%s conflicts with upscaling, forcing %s to 0\n", rt_cvars.rt_ef_vintage->name, rt_cvars.rt_ef_vintage->name );
            gEngfuncs.Cvar_Set( rt_cvars.rt_ef_vintage->name, "0" );
            vintage = 0;
        }
    }
    else if( vintage > 0 && vintage != prev_vintage )
    {
        if( upscale_active )
        {
            gEngfuncs.Con_Printf( S_NOTE "upscaling conflicts with %s, forcing upscaling to 0\n", rt_cvars.rt_ef_vintage->name );
            gEngfuncs.Cvar_Set( rt_cvars.rt_upscale_quality->name, "0" );
            upscale_active = 0;
            effective_method = 0;
        }
    }

    prev_upscale_active = upscale_active;
    prev_vintage = vintage;

    static int prev_fg_warn = -1;
    int fg_wanted = ( rt_cvars.rt_framegen && RT_CVAR_TO_INT32( rt_framegen ) > 0 );
    if( fg_wanted && !fg_ok && effective_method != 2 )
    {
        if( prev_fg_warn != 1 )
        {
            gEngfuncs.Con_Printf( S_NOTE "Enabling frame generation requires vid_restart\n" );
            prev_fg_warn = 1;
        }
    }
    else
    {
        prev_fg_warn = fg_wanted ? 1 : 0;
    }

    if( effective_method == 1 )
    {
        pDst->upscaleTechnique = RG_RENDER_UPSCALE_TECHNIQUE_AMD_FSR3;
    }
    else if( effective_method == 2 )
    {
        pDst->upscaleTechnique = RG_RENDER_UPSCALE_TECHNIQUE_NVIDIA_DLSS;
    }
    else
    {
        pDst->upscaleTechnique = RG_RENDER_UPSCALE_TECHNIQUE_NEAREST;
    }

    pDst->sharpenTechnique = GetSharpenTechniqueFromCvar();

    if( effective_method > 0 )
    {
        switch( quality )
        {
            case 1: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_CUSTOM; break;
            case 2: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_QUALITY; break;
            case 3: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_BALANCED; break;
            case 4: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_PERFORMANCE; break;
            case 5: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_ULTRA_PERFORMANCE; break;
            default: pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_QUALITY; break;
        }
    }
    else
    {
        pDst->resolutionMode = RG_RENDER_RESOLUTION_MODE_CUSTOM;
    }
}
// clang-format on
#endif

/*
===============
R_EndFrame
===============
*/
void R_EndFrame( void )
{
	GL_PresentScreenTarget();
#if XASH_PSVITA
	VGL_ShimEndFrame();
#endif
#if !defined( XASH_GL_STATIC )
	GL2_ShimEndFrame();
#endif

	// flush any remaining 2D bits
	R_Set2DMode( false );
	gEngfuncs.GL_SwapBuffers();

#if XASH_RAYTRACING
	{
		RT_OnBeforeDrawFrame();
		RT_UploadAllLights();

		RgExtent2D       pixstorage = { 0 };
		const RgExtent2D winsize    = { .width = gpGlobals->width, .height = gpGlobals->height };

		RgDrawFrameRenderResolutionParams resolution_params = {
			.sType = RG_STRUCTURE_TYPE_RENDER_RESOLUTION,
			.pNext = NULL,
		};
		ResolutionToRtgl( &resolution_params, winsize, &pixstorage );
		UpscaleCvarsToRtgl( &resolution_params );

		resolution_params.enableFrameGeneration =
			( rt_cvars.rt_framegen && RT_CVAR_TO_INT32( rt_framegen ) > 0 ) &&
			( ( resolution_params.upscaleTechnique == RG_RENDER_UPSCALE_TECHNIQUE_NVIDIA_DLSS )
				? rgUtilIsDlssgAvailable( rg_instance )
				: rgUtilIsFrameGenerationAvailable( rg_instance ) );

		if( rt_cvars.rt_upscale_quality && RT_CVAR_TO_INT32( rt_upscale_quality ) == 1 )
		{
			resolution_params.customRenderSize = winsize;
		}

		float lightstyles[ RT_ARRAYSIZE( g_lightstylevalue ) ];
		for( uint32_t i = 0; i < RT_ARRAYSIZE( g_lightstylevalue ); i++ )
		{
			lightstyles[ i ] = ( float )bound( 0, g_lightstylevalue[ i ], 255 ) / 255.0f;
		}

		RgDrawFrameIlluminationParams illum_params = {
			.sType                              = RG_STRUCTURE_TYPE_ILLUMINATION,
			.pNext                              = &resolution_params,
			.maxBounceShadows                   = RT_CVAR_TO_UINT32( rt_shadowrays ),
			.enableSecondBounceForIndirect      = RT_CVAR_TO_BOOL( rt_indir2bounces ),
			.cellWorldSize                      = METRIC_TO_QUAKEUNIT( 2.0f ),
			.directDiffuseSensitivityToChange   = 1.0f,
			.indirectDiffuseSensitivityToChange = 0.75f,
			.specularSensitivityToChange        = 1.0f,
			.polygonalLightSpotlightFactor      = 2.0f,
			.lightUniqueIdIgnoreFirstPersonViewerShadows =
				rt_state.flashlight_uniqueid ? &rt_state.flashlight_uniqueid : NULL,
			.lightstyleValuesCount = RT_ARRAYSIZE( lightstyles ),
			.pLightstyleValues     = lightstyles,
			.denoiserMode          = ( rt_cvars.rt_denoiser && RT_CVAR_TO_INT32( rt_denoiser ) == 1 )
                                ? RG_DENOISER_MODE_RELAX
                                : RG_DENOISER_MODE_REBLUR,
		};

		RgDrawFrameTonemappingParams tnmp_params = {
			.sType                = RG_STRUCTURE_TYPE_TONEMAPPING,
			.pNext                = &illum_params,
			.disableEyeAdaptation = false,
			.ev100Min             = RT_CVAR_TO_FLOAT( rt_tnmp_ev100_min ),
			.ev100Max             = RT_CVAR_TO_FLOAT( rt_tnmp_ev100_max ),
			.luminanceWhitePoint  = 10.0f,
			.saturation           = { RT_CVAR_TO_FLOAT( rt_tnmp_saturation_r ),
									  RT_CVAR_TO_FLOAT( rt_tnmp_saturation_g ),
									  RT_CVAR_TO_FLOAT( rt_tnmp_saturation_b ) },
			.crosstalk            = { RT_CVAR_TO_FLOAT( rt_tnmp_crosstalk_r ),
									  RT_CVAR_TO_FLOAT( rt_tnmp_crosstalk_g ),
									  RT_CVAR_TO_FLOAT( rt_tnmp_crosstalk_b ) },
		};

		RgDrawFrameBloomParams bloom_params = {
			.sType          = RG_STRUCTURE_TYPE_BLOOM,
			.pNext          = &tnmp_params,
			.bloomIntensity = RT_CVAR_TO_BOOL( rt_bloom )
								  ? RT_CVAR_TO_FLOAT( rt_bloom_intensity )
								  : 0.0f,
			.inputThreshold = RT_CVAR_TO_FLOAT( rt_bloom_threshold ),
			.bloomEmissionMultiplier = RT_CVAR_TO_FLOAT( rt_bloom_emis_mult ),
        .lensDirtIntensity =
            RT_CVAR_TO_BOOL( rt_bloom_dirt_enable ) ? RT_CVAR_TO_FLOAT( rt_bloom_dirt ) : 0.0f,
		};

		int viewcontents = CONTENTS_EMPTY;
		if( ENGINE_GET_PARM( PARM_CONNSTATE ) == ca_active && FBitSet( RI.rvp.flags, RF_DRAW_WORLD ) && WORLDMODEL )
		{
			cl_entity_t *waterEnt = gEngfuncs.CL_GetWaterEntity( RI.rvp.vieworigin );
			if( waterEnt && waterEnt->model && waterEnt->model->type == mod_brush && waterEnt->curstate.skin < 0 )
			{
				viewcontents = waterEnt->curstate.skin;
			}
			else
			{
				mleaf_t *leaf = RI.viewleaf;
				if( !leaf && WORLDMODEL->nodes )
				{
					leaf = gEngfuncs.Mod_PointInLeaf( RI.rvp.vieworigin, WORLDMODEL->nodes, WORLDMODEL );
				}
				if( leaf )
				{
					viewcontents = leaf->contents;
				}
			}
		}

		RgMediaType cameramedia = RG_MEDIA_TYPE_VACUUM;
		if( ENGINE_GET_PARM( PARM_WATER_LEVEL ) > 2 || viewcontents == CONTENTS_WATER || ( viewcontents <= CONTENTS_CURRENT_0 && viewcontents >= CONTENTS_CURRENT_DOWN ) )
		{
			cameramedia = RG_MEDIA_TYPE_WATER;
		}
		else if( viewcontents == CONTENTS_SLIME || viewcontents == CONTENTS_LAVA )
		{
			cameramedia = RG_MEDIA_TYPE_ACID;
		}

		RgDrawFrameReflectRefractParams refl_refr_params = {
			.sType                   = RG_STRUCTURE_TYPE_REFLECTREFRACT,
			.pNext                   = &bloom_params,
			.maxReflectRefractDepth  = RT_CVAR_TO_UINT32( rt_reflrefr_depth ),
			.typeOfMediaAroundCamera = cameramedia,
			.indexOfRefractionGlass  = RT_CVAR_TO_FLOAT( rt_refr_glass ),
			.indexOfRefractionWater  = RT_CVAR_TO_FLOAT( rt_refr_water ),
			.thinMediaWidth          = METRIC_TO_QUAKEUNIT( RT_CVAR_TO_FLOAT( rt_refr_thinwidth ) ),
			.waterWaveSpeed          = METRIC_TO_QUAKEUNIT( 0.4f ),
			.waterWaveNormalStrength = RT_CVAR_TO_FLOAT( rt_normalmap_stren_water ),
			.waterColor              = { RT_CVAR_TO_FLOAT( rt_me_water_r ) / 255.0f,
										RT_CVAR_TO_FLOAT( rt_me_water_g ) / 255.0f,
										RT_CVAR_TO_FLOAT( rt_me_water_b ) / 255.0f },
			.waterDensity            = RT_CVAR_TO_FLOAT( rt_me_water_density ),
			.acidColor               = { 0.1f, 1.0f, 0.01f },
			.acidDensity             = 100,
			.waterWaveTextureDerivativesMultiplier = 5,
			.waterTextureAreaScale   = METRIC_TO_QUAKEUNIT( 1.0f ),
			.portalNormalTwirl       = 0,
		};

		RgDrawFrameSkyParams skyParams = {
			.sType                       = RG_STRUCTURE_TYPE_SKY,
			.pNext                       = &refl_refr_params,
			.skyType                     = ( ENGINE_GET_PARM( PARM_CONNSTATE ) == ca_active && RI.isSkyVisible ) ? RG_SKY_TYPE_RASTERIZED_GEOMETRY : RG_SKY_TYPE_COLOR,
			.skyColorDefault             = { 0, 0, 0 },
			.skyColorMultiplier          = RT_CVAR_TO_FLOAT( rt_sky ),
			.skyColorSaturation          = RT_CVAR_TO_FLOAT( rt_sky_saturation ),
			.skyViewerPosition           = RT_VEC3( RI.rvp.vieworigin ),
			.pSkyCubemapTextureName      = NULL,
			.skyCubemapRotationTransform = { { { 1.f, 0.f, 0.f }, { 0.f, 1.f, 0.f }, { 0.f, 0.f, 1.f } } },
		};

		RgDrawFrameVolumetricParams volumetric_params = {
			.sType                   = RG_STRUCTURE_TYPE_VOLUMETRIC,
			.pNext                   = &skyParams,
			.enable                  = RT_CVAR_TO_UINT32( rt_volume_type ) != 0,
			.maxHistoryLength =
				RT_CVAR_TO_UINT32( rt_volume_type ) == 1 ? RT_CVAR_TO_FLOAT( rt_volume_history ) : 0,
			.useSimpleDepthBased     = RT_CVAR_TO_UINT32( rt_volume_type ) == 2,
			.volumetricFar           = RT_CVAR_TO_FLOAT( rt_volume_far ),
			.ambientColor            = { RT_CVAR_TO_FLOAT( rt_volume_ambient ),
										 RT_CVAR_TO_FLOAT( rt_volume_ambient ),
										 RT_CVAR_TO_FLOAT( rt_volume_ambient ) },
			.scaterring              = RT_CVAR_TO_FLOAT( rt_volume_scatter ),
			.assymetry               = RT_CVAR_TO_FLOAT( rt_volume_lassymetry ),
			.useIlluminationVolume   = RT_CVAR_TO_BOOL( rt_volume_illumgrid ),
			.fallbackSourceColor     = { 0, 0, 0 },
			.fallbackSourceDirection = { 0, -1, 0 },
			.lightMultiplier         = RT_CVAR_TO_FLOAT( rt_volume_lintensity ),
		};

		RgDrawFrameTexturesParams texture_params = {
			.sType                  = RG_STRUCTURE_TYPE_TEXTURES,
			.pNext                  = &volumetric_params,
			.dynamicSamplerFilter   = RT_CVAR_TO_BOOL( rt_texture_nearest ) ? RG_SAMPLER_FILTER_NEAREST
																			: RG_SAMPLER_FILTER_LINEAR,
			.normalMapStrength      = RT_CVAR_TO_FLOAT( rt_normalmap_stren ),
			.emissionMapBoost       = RT_CVAR_TO_FLOAT( rt_emis_mapboost ),
			.emissionMaxScreenColor = RT_CVAR_TO_FLOAT( rt_emis_maxscrcolor ),
		};

		RgDrawFrameLightmapParams lightmap_params = {
			.sType                  = RG_STRUCTURE_TYPE_LIGHTMAP,
			.pNext                  = &texture_params,
			.lightmapScreenCoverage = 0.0f,
		};

		qboolean skipframe = false;
		if( rt_cvars._rt_skipframe )
		{
			skipframe = RT_CVAR_TO_BOOL( _rt_skipframe );
			gEngfuncs.Cvar_Set( rt_cvars._rt_skipframe->name, "0" );
		}

		RgPostEffectCRT crt_effect = {
			.isActive =
				RT_CVAR_TO_BOOL( rt_ef_crt ) || RT_CVAR_TO_INT32( rt_ef_vintage ) == RT_VINTAGE_CRT,
		};

		RgPostEffectNightVision nv_effect = {
			.isActive              = RT_IsNightVisionActive(),
			.transitionDurationIn  = 0.12f,
			.transitionDurationOut = 0.20f,
			.gain                  = RT_CVAR_TO_FLOAT( rt_nv_gain ),
			.noiseIntensity        = RT_CVAR_TO_FLOAT( rt_nv_noise ),
			.vignetteIntensity     = RT_CVAR_TO_FLOAT( rt_nv_vignette ),
		};

		RgPostEffectChromaticAberration chromatic_aberration_effect = {
			.isActive              = RT_CVAR_TO_FLOAT( rt_ef_chraber ) > 0.0f,
			.transitionDurationIn  = 0,
			.transitionDurationOut = 0,
			.intensity             = RT_CVAR_TO_FLOAT( rt_ef_chraber ),
		};

		RgPostEffectWaves waves_effect = {
			.isActive              = cameramedia != RG_MEDIA_TYPE_VACUUM,
			.transitionDurationIn  = 0.1f,
			.transitionDurationOut = 0.75f,
			.amplitude             = RT_CVAR_TO_FLOAT( rt_ef_water ) * 0.01f,
			.speed                 = 1.0f,
			.xMultiplier           = 0.5f,
		};

		RgPostEffectTeleport teleport_effect = {
			.isActive              = true,
			.transitionDurationIn  = 1.5f,
			.transitionDurationOut = 0.1f,
		};

		RgDrawFramePostEffectsParams posteffect_params = {
			.sType                = RG_STRUCTURE_TYPE_POSTEFFECTS,
			.pNext                = &lightmap_params,
			.pChromaticAberration = &chromatic_aberration_effect,
			.pTeleport            = RT_IsPortalPosteffectActive() ? &teleport_effect : NULL,
			.pWaves               = ENGINE_GET_PARM( PARM_CONNSTATE ) == ca_active ? &waves_effect : NULL,
			.pCRT                 = &crt_effect,
			.pNightVision         = &nv_effect,
		};

		RgDrawFrameInfo info = {
			.fovYRadians      = DEG2RAD( RI.rvp.fov_y ),
			.cameraNear       = R_GetNearClip(),
			.cameraFar        = R_GetFarClip(),
			.rayLength        = R_GetFarClip(),
			.rayCullMaskWorld = RG_DRAW_FRAME_RAY_CULL_WORLD_0_BIT |
								RG_DRAW_FRAME_RAY_CULL_WORLD_1_BIT | RG_DRAW_FRAME_RAY_CULL_SKY_BIT,
			.presentPrevFrame = skipframe,
			.currentTime      = gEngfuncs.pfnTime(),
			.vsync            = RT_CVAR_TO_BOOL( rt_vsync ),
			.pParams          = &posteffect_params,
		};

		// reinterpret cast to make matrices column-major
		matrix4x4* v = ( matrix4x4* )&info.view;
		Matrix4x4_Transpose( *v, RI.worldviewMatrix );

		RgResult r = rgDrawFrame( rg_instance, &info );
		RG_CHECK( r );

		RI.viewleaf = NULL;
		RI.isSkyVisible = false;
	}
#endif
}

/*
===============
R_DrawCubemapView
===============
*/
void R_DrawCubemapView( const vec3_t origin, const vec3_t angles, int size )
{
	ref_viewpass_t rvp;

	// basic params
	rvp.flags = rvp.viewentity = 0;
	SetBits( rvp.flags, RF_DRAW_WORLD );
	SetBits( rvp.flags, RF_DRAW_CUBEMAP );

	rvp.viewport[0] = rvp.viewport[1] = 0;
	rvp.viewport[2] = rvp.viewport[3] = size;
	rvp.fov_x = rvp.fov_y = 90.0f; // this is a final fov value

	// setup origin & angles
	VectorCopy( origin, rvp.vieworigin );
	VectorCopy( angles, rvp.viewangles );

	R_RenderFrame( &rvp );

	RI.viewleaf = NULL;		// force markleafs next frame
}

/*
===============
CL_FxBlend
===============
*/
int CL_FxBlend( cl_entity_t *e )
{
	int blend = 0;
	float offset = ((int)e->index ) * 363.0f; // Use ent index to de-sync these fx

	switch( e->curstate.renderfx )
	{
	case kRenderFxPulseSlowWide:
		blend = e->curstate.renderamt + 0x40 * sin( gp_cl->time * 2 + offset );
		break;
	case kRenderFxPulseFastWide:
		blend = e->curstate.renderamt + 0x40 * sin( gp_cl->time * 8 + offset );
		break;
	case kRenderFxPulseSlow:
		blend = e->curstate.renderamt + 0x10 * sin( gp_cl->time * 2 + offset );
		break;
	case kRenderFxPulseFast:
		blend = e->curstate.renderamt + 0x10 * sin( gp_cl->time * 8 + offset );
		break;
	case kRenderFxFadeSlow:
		if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
		{
			if( e->curstate.renderamt > 0 )
				e->curstate.renderamt -= 1;
			else e->curstate.renderamt = 0;
		}
		blend = e->curstate.renderamt;
		break;
	case kRenderFxFadeFast:
		if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
		{
			if( e->curstate.renderamt > 3 )
				e->curstate.renderamt -= 4;
			else e->curstate.renderamt = 0;
		}
		blend = e->curstate.renderamt;
		break;
	case kRenderFxSolidSlow:
		if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
		{
			if( e->curstate.renderamt < 255 )
				e->curstate.renderamt += 1;
			else e->curstate.renderamt = 255;
		}
		blend = e->curstate.renderamt;
		break;
	case kRenderFxSolidFast:
		if( !FBitSet( RI.rvp.flags, RF_DRAW_CUBEMAP ))
		{
			if( e->curstate.renderamt < 252 )
				e->curstate.renderamt += 4;
			else e->curstate.renderamt = 255;
		}
		blend = e->curstate.renderamt;
		break;
	case kRenderFxStrobeSlow:
		blend = 20 * sin( gp_cl->time * 4 + offset );
		if( blend < 0 ) blend = 0;
		else blend = e->curstate.renderamt;
		break;
	case kRenderFxStrobeFast:
		blend = 20 * sin( gp_cl->time * 16 + offset );
		if( blend < 0 ) blend = 0;
		else blend = e->curstate.renderamt;
		break;
	case kRenderFxStrobeFaster:
		blend = 20 * sin( gp_cl->time * 36 + offset );
		if( blend < 0 ) blend = 0;
		else blend = e->curstate.renderamt;
		break;
	case kRenderFxFlickerSlow:
		blend = 20 * (sin( gp_cl->time * 2 ) + sin( gp_cl->time * 17 + offset ));
		if( blend < 0 ) blend = 0;
		else blend = e->curstate.renderamt;
		break;
	case kRenderFxFlickerFast:
		blend = 20 * (sin( gp_cl->time * 16 ) + sin( gp_cl->time * 23 + offset ));
		if( blend < 0 ) blend = 0;
		else blend = e->curstate.renderamt;
		break;
	case kRenderFxHologram:
	case kRenderFxDistort:
	{
		vec3_t tmp = Vec3( e->origin );
		VectorSubtract( tmp, RI.rvp.vieworigin, tmp );
		float dist = DotProduct( tmp, RI.vforward );

		// turn off distance fade
		if( e->curstate.renderfx == kRenderFxDistort )
			dist = 1;

		if( dist <= 0 )
		{
			blend = 0;
		}
		else
		{
			e->curstate.renderamt = 180;
			if( dist <= 100 ) blend = e->curstate.renderamt;
			else blend = (int) ((1.0f - ( dist - 100 ) * ( 1.0f / 400.0f )) * e->curstate.renderamt );
			blend += gEngfuncs.COM_RandomLong( -32, 31 );
		}
		break;
	}
	default:
		blend = e->curstate.renderamt;
		break;
	}

	blend = bound( 0, blend, 255 );

	return blend;
}
