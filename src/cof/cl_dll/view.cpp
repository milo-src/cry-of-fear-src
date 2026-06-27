//========= Copyright (c) 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================

// view/refresh setup functions

#include "hud.h"
#include "cl_util.h"
#include "cvardef.h"
#include "usercmd.h"
#include "const.h"

#include "entity_state.h"
#include "cl_entity.h"
#include "ref_params.h"
#include "in_defs.h" // PITCH YAW ROLL
#include "pm_movevars.h"
#include "pm_shared.h"
#include "pm_defs.h"
#include "event_api.h"
#include "pmtrace.h"
#include "screenfade.h"
#include "shake.h"
#include "hltv.h"
#include "view.h"

// Spectator Mode
extern "C" 
{
	float vecNewViewAngles[3];
	int iHasNewViewAngles;
	float vecNewViewOrigin[3];
	int iHasNewViewOrigin;
	int iIsSpectator;
}

extern "C" 
{
	int CL_IsThirdPerson( void );
	void CL_CameraOffset( float *ofs );

	void DLLEXPORT V_CalcRefdef( struct ref_params_s *pparams );

	void PM_ParticleLine( float *start, float *end, int pcolor, float life, float vert );
	int PM_GetVisEntInfo( int ent );
	int PM_GetPhysEntInfo( int ent );
	void InterpolateAngles( float * start, float * end, float * output, float frac );
	void NormalizeAngles( float * angles );
	float Distance( const float * v1, const float * v2 );
	float AngleBetweenVectors(  const float * v1,  const float * v2 );

	float vJumpOrigin[3];
	float vJumpAngles[3];
}

void V_DropPunchAngle( float frametime, float *ev_punchangle );
void VectorAngles( const float *forward, float *angles );

#include "r_studioint.h"
#include "com_model.h"

extern engine_studio_api_t IEngineStudio;

/*
The view is allowed to move slightly from it's true position for bobbing,
but if it exceeds 8 pixels linear distance (spherical, not box), the list of
entities sent from the server may not include everything in the pvs, especially
when crossing a water boudnary.
*/

extern cvar_t	*cl_forwardspeed;
extern cvar_t	*chase_active;
extern cvar_t	*scr_ofsx, *scr_ofsy, *scr_ofsz;
extern cvar_t	*cl_vsmoothing;
extern cvar_t	*cl_viewbob;
extern Vector   dead_viewangles;

#define	CAM_MODE_RELAX		1
#define CAM_MODE_FOCUS		2

vec3_t v_origin, v_angles, v_cl_angles, v_sim_org, v_lastAngles;
float v_frametime, v_lastDistance;	
float v_cameraRelaxAngle = 5.0f;
float v_cameraFocusAngle = 35.0f;
int v_cameraMode = CAM_MODE_FOCUS;
qboolean v_resetCamera = 1;

vec3_t v_client_aimangles;
vec3_t g_ev_punchangle;

cvar_t	*scr_ofsx;
cvar_t	*scr_ofsy;
cvar_t	*scr_ofsz;

cvar_t	*v_centermove;
cvar_t	*v_centerspeed;

cvar_t	*cl_waterdist;
cvar_t	*cl_chasedist;
cvar_t	*cl_weapon_inertia;
cvar_t	*cl_weapon_lag_scale;
cvar_t	*cl_weapon_lag_speed;
cvar_t	*cl_weapon_move_scale;
cvar_t	*cl_weapon_move_speed;
cvar_t	*cl_camera_inertia;
cvar_t	*cl_camera_motion_scale;
cvar_t	*cl_camera_jump_scale;

// These cvars are not registered (so users can't cheat), so set the ->value field directly
// Register these cvars in V_Init() if needed for easy tweaking
cvar_t	v_iyaw_cycle		= {"v_iyaw_cycle", "2", 0, 2};
cvar_t	v_iroll_cycle		= {"v_iroll_cycle", "0.5", 0, 0.5};
cvar_t	v_ipitch_cycle		= {"v_ipitch_cycle", "1", 0, 1};
cvar_t	v_iyaw_level		= {"v_iyaw_level", "0.3", 0, 0.3};
cvar_t	v_iroll_level		= {"v_iroll_level", "0.1", 0, 0.1};
cvar_t	v_ipitch_level		= {"v_ipitch_level", "0.3", 0, 0.3};

float	v_idlescale;  // used by TFC for concussion grenade effect

//=============================================================================
static float V_ClampFloat( float value, float minValue, float maxValue )
{
	if( value < minValue )
		return minValue;
	if( value > maxValue )
		return maxValue;
	return value;
}

static float V_AngleDelta( float a, float b )
{
	float d = a - b;
	if( d > 180.0f )
		d -= 360.0f;
	else if( d < -180.0f )
		d += 360.0f;
	return d;
}

static float V_SpringFloat( float current, float &velocity, float target, float stiffness, float damping, float frametime )
{
	if( frametime <= 0.0f )
		return current;

	velocity += ( ( target - current ) * stiffness - velocity * damping ) * frametime;
	return current + velocity * frametime;
}

static float V_ClampSpring( float value, float &velocity, float minValue, float maxValue )
{
	const float clamped = V_ClampFloat( value, minValue, maxValue );
	if( clamped != value )
		velocity *= 0.25f;
	return clamped;
}

void V_ApplyWeaponInertia( struct ref_params_s *pparams, cl_entity_t *view )
{
	static qboolean initialized = false;
	static vec3_t lastAngles;
	static vec3_t angleOffset;
	static vec3_t angleVelocity;
	static vec3_t moveOffset;
	static vec3_t moveVelocity;
	static qboolean wasOnGround = true;
	static float lastVerticalSpeed = 0.0f;
	static float jumpDrop = 0.0f;
	static float jumpDropVelocity = 0.0f;
	vec3_t forward, right, up;
	float angleTarget[3];
	float targetMove[3];
	float frametime;

	if( !view || !pparams )
		return;

	if( cl_weapon_inertia && cl_weapon_inertia->value <= 0.0f )
	{
		initialized = false;
		return;
	}

	frametime = V_ClampFloat( pparams->frametime, 0.0f, 0.05f );
	if( !initialized || pparams->paused || pparams->health <= 0 || pparams->intermission )
	{
		VectorCopy( pparams->viewangles, lastAngles );
		VectorClear( angleOffset );
		VectorClear( angleVelocity );
		VectorClear( moveOffset );
		VectorClear( moveVelocity );
		wasOnGround = pparams->onground ? true : false;
		lastVerticalSpeed = pparams->simvel[2];
		jumpDrop = 0.0f;
		jumpDropVelocity = 0.0f;
		initialized = true;
		return;
	}

	const float lagSpeed = cl_weapon_lag_speed ? Q_max( cl_weapon_lag_speed->value, 0.1f ) : 12.0f;
	const float lagScale = cl_weapon_lag_scale ? cl_weapon_lag_scale->value : 1.0f;
	const float moveSpeed = cl_weapon_move_speed ? Q_max( cl_weapon_move_speed->value, 0.1f ) : 10.0f;
	const float moveScale = cl_weapon_move_scale ? cl_weapon_move_scale->value : 1.0f;

	const float safeFrame = Q_max( frametime, 0.001f );
	const float yawSpeed = V_ClampFloat( V_AngleDelta( pparams->viewangles[YAW], lastAngles[YAW] ) / safeFrame, -720.0f, 720.0f );
	const float pitchSpeed = V_ClampFloat( V_AngleDelta( pparams->viewangles[PITCH], lastAngles[PITCH] ) / safeFrame, -560.0f, 560.0f );

	angleTarget[PITCH] = V_ClampFloat( pitchSpeed * 0.030f * lagScale, -16.0f, 16.0f );
	angleTarget[YAW] = V_ClampFloat( yawSpeed * 0.036f * lagScale, -22.0f, 22.0f );
	angleTarget[ROLL] = 0.0f;

	const float angleStiffness = lagSpeed * lagSpeed;
	const float angleDamping = lagSpeed * 1.55f;
	angleOffset[PITCH] = V_SpringFloat( angleOffset[PITCH], angleVelocity[PITCH], angleTarget[PITCH], angleStiffness, angleDamping, frametime );
	angleOffset[YAW] = V_SpringFloat( angleOffset[YAW], angleVelocity[YAW], angleTarget[YAW], angleStiffness * 0.65f, angleDamping * 0.72f, frametime );

	angleOffset[PITCH] = V_ClampSpring( angleOffset[PITCH], angleVelocity[PITCH], -18.0f, 18.0f );
	angleOffset[YAW] = V_ClampSpring( angleOffset[YAW], angleVelocity[YAW], -24.0f, 24.0f );

	AngleVectors( pparams->viewangles, forward, right, up );

	const float forwardSpeed = V_ClampFloat( DotProduct( pparams->simvel, forward ) / 280.0f, -1.0f, 1.0f );
	const float sideSpeed = V_ClampFloat( DotProduct( pparams->simvel, right ) / 280.0f, -1.0f, 1.0f );
	const float verticalSpeed = V_ClampFloat( pparams->simvel[2] / 240.0f, -1.0f, 1.0f );
	const qboolean onGround = pparams->onground ? true : false;
	const int buttons = pparams->cmd ? pparams->cmd->buttons : 0;
	const float horizontalSpeed = sqrt( pparams->simvel[0] * pparams->simvel[0] + pparams->simvel[1] * pparams->simvel[1] );
	const qboolean running = ( buttons & IN_RUN ) && onGround && horizontalSpeed > COF_PLAYER_WALK_SPEED * 0.70f;
	const float handMoveScale = moveScale * ( running ? 0.68f : 1.0f );
	const float handAngleScale = running ? 0.82f : 1.0f;

	if( wasOnGround && !onGround )
	{
		const float jumpStrength = V_ClampFloat( pparams->simvel[2] / 280.0f, 0.35f, 1.0f );
		jumpDropVelocity -= 24.0f * jumpStrength;
	}
	else if( !wasOnGround && onGround )
	{
		const float landStrength = V_ClampFloat( -lastVerticalSpeed / 420.0f, 0.25f, 1.25f );
		jumpDropVelocity -= 36.0f * landStrength;
	}

	targetMove[0] = -forwardSpeed * 0.36f * handMoveScale;
	targetMove[1] = ( -sideSpeed * 0.58f - angleOffset[YAW] * 0.060f ) * handMoveScale;
	targetMove[2] = ( fabs( sideSpeed ) * -0.10f - fabs( forwardSpeed ) * 0.24f - verticalSpeed * 0.24f + angleOffset[PITCH] * 0.045f ) * handMoveScale;

	const float moveStiffness = moveSpeed * moveSpeed;
	const float moveDamping = moveSpeed * 1.80f;
	for( int i = 0; i < 3; i++ )
	{
		moveOffset[i] = V_SpringFloat( moveOffset[i], moveVelocity[i], targetMove[i], moveStiffness, moveDamping, frametime );
		moveOffset[i] = V_ClampSpring( moveOffset[i], moveVelocity[i], -1.15f, 1.15f );
	}

	jumpDrop = V_SpringFloat( jumpDrop, jumpDropVelocity, 0.0f, 78.0f, 16.0f, frametime );
	jumpDrop = V_ClampSpring( jumpDrop, jumpDropVelocity, -2.2f, 0.6f );

	VectorMA( view->origin, moveOffset[0], forward, view->origin );
	VectorMA( view->origin, moveOffset[1], right, view->origin );
	VectorMA( view->origin, moveOffset[2] + jumpDrop, up, view->origin );

	view->angles[YAW] -= angleOffset[YAW] * 0.14f;
	view->angles[PITCH] += angleOffset[PITCH] * 0.30f;
	view->angles[ROLL] += angleOffset[YAW] * 0.26f * handAngleScale - sideSpeed * 1.0f * handMoveScale;

	wasOnGround = onGround;
	lastVerticalSpeed = pparams->simvel[2];
	VectorCopy( pparams->viewangles, lastAngles );
}

void V_ApplyCameraMotionInertia( struct ref_params_s *pparams )
{
	static qboolean initialized = false;
	static qboolean wasOnGround = true;
	static float lastVerticalSpeed = 0.0f;
	static float motionPhase = 0.0f;
	static float runBlend = 0.0f;
	static float runBlendVelocity = 0.0f;
	static float jumpOffset = 0.0f;
	static float jumpVelocity = 0.0f;
	static float jumpPitch = 0.0f;
	static float jumpPitchVelocity = 0.0f;
	static vec3_t motionOffset;
	static vec3_t motionVelocity;
	static vec3_t motionAngles;
	static vec3_t motionAngleVelocity;
	vec3_t forward, right, up;
	vec3_t targetOffset;
	vec3_t targetAngles;

	if( !pparams )
		return;

	if( cl_camera_inertia && cl_camera_inertia->value <= 0.0f )
	{
		initialized = false;
		return;
	}

	const float frametime = V_ClampFloat( pparams->frametime, 0.0f, 0.05f );
	const qboolean reset = !initialized || pparams->paused || pparams->health <= 0 || pparams->intermission || pparams->spectator || CL_IsThirdPerson();
	const qboolean onGround = pparams->onground ? true : false;

	if( reset )
	{
		wasOnGround = onGround;
		lastVerticalSpeed = pparams->simvel[2];
		motionPhase = 0.0f;
		runBlend = 0.0f;
		runBlendVelocity = 0.0f;
		jumpOffset = 0.0f;
		jumpVelocity = 0.0f;
		jumpPitch = 0.0f;
		jumpPitchVelocity = 0.0f;
		VectorClear( motionOffset );
		VectorClear( motionVelocity );
		VectorClear( motionAngles );
		VectorClear( motionAngleVelocity );
		initialized = true;
		return;
	}

	const int buttons = pparams->cmd ? pparams->cmd->buttons : 0;
	const float motionScale = cl_camera_motion_scale ? cl_camera_motion_scale->value : 1.0f;
	const float jumpScale = cl_camera_jump_scale ? cl_camera_jump_scale->value : 1.0f;
	const float horizontalSpeed = sqrt( pparams->simvel[0] * pparams->simvel[0] + pparams->simvel[1] * pparams->simvel[1] );
	const float moveAmount = V_ClampFloat( horizontalSpeed / COF_PLAYER_RUN_SPEED, 0.0f, 1.0f );
	const float runRange = Q_max( COF_PLAYER_RUN_SPEED - COF_PLAYER_WALK_SPEED, 1.0f );
	float runTarget = V_ClampFloat( ( horizontalSpeed - COF_PLAYER_WALK_SPEED ) / runRange, 0.0f, 1.0f );

	if( ( buttons & IN_RUN ) && horizontalSpeed > 90.0f )
		runTarget = Q_max( runTarget, 0.75f );
	if( !onGround )
		runTarget = 0.0f;

	runBlend = V_SpringFloat( runBlend, runBlendVelocity, runTarget, 72.0f, 15.0f, frametime );
	runBlend = V_ClampSpring( runBlend, runBlendVelocity, 0.0f, 1.0f );

	const float groundedMove = onGround ? moveAmount : 0.0f;
	const float walkAmount = groundedMove * ( 1.0f - runBlend );
	const float runAmount = groundedMove * runBlend;

	if( groundedMove > 0.02f )
		motionPhase += frametime * ( 5.4f + runBlend * 4.2f ) * Q_max( groundedMove, 0.28f );

	AngleVectors( pparams->viewangles, forward, right, up );

	const float forwardSpeed = V_ClampFloat( DotProduct( pparams->simvel, forward ) / COF_PLAYER_RUN_SPEED, -1.0f, 1.0f );
	const float sideSpeed = V_ClampFloat( DotProduct( pparams->simvel, right ) / COF_PLAYER_RUN_SPEED, -1.0f, 1.0f );
	const float step = sin( motionPhase );
	const float step2 = sin( motionPhase * 2.0f );
	const float step2Cos = cos( motionPhase * 2.0f );
	const float step3 = sin( motionPhase * 3.35f + 0.6f );
	const float runShake = runAmount;

	targetOffset[0] = -forwardSpeed * ( walkAmount * 0.035f + runAmount * 0.52f ) * motionScale;
	targetOffset[1] = ( -sideSpeed * ( walkAmount * 0.050f + runAmount * 0.76f ) + step * ( walkAmount * 0.018f + runAmount * 0.56f ) ) * motionScale;
	targetOffset[2] = ( step2 * ( walkAmount * 0.030f + runAmount * 1.84f ) + step3 * runShake * 0.36f ) * motionScale;

	targetAngles[PITCH] = ( -forwardSpeed * ( walkAmount * 0.035f + runAmount * 0.88f ) + step2Cos * ( walkAmount * 0.018f + runAmount * 1.24f ) + step3 * runShake * 0.36f ) * motionScale;
	targetAngles[YAW] = ( -sideSpeed * ( walkAmount * 0.025f + runAmount * 0.64f ) + step3 * runShake * 0.12f ) * motionScale;
	targetAngles[ROLL] = ( -sideSpeed * ( walkAmount * 0.10f + runAmount * 3.30f ) + step * ( walkAmount * 0.025f + runAmount * 1.10f ) + step3 * runShake * 0.32f ) * motionScale;

	const float motionSpeed = 8.6f + runBlend * 2.6f;
	const float motionStiffness = motionSpeed * motionSpeed;
	const float motionDamping = motionSpeed * 1.85f;
	for( int i = 0; i < 3; i++ )
	{
		motionOffset[i] = V_SpringFloat( motionOffset[i], motionVelocity[i], targetOffset[i], motionStiffness, motionDamping, frametime );
		motionAngles[i] = V_SpringFloat( motionAngles[i], motionAngleVelocity[i], targetAngles[i], motionStiffness, motionDamping, frametime );
	}

	motionOffset[0] = V_ClampSpring( motionOffset[0], motionVelocity[0], -1.10f, 0.88f );
	motionOffset[1] = V_ClampSpring( motionOffset[1], motionVelocity[1], -1.76f, 1.76f );
	motionOffset[2] = V_ClampSpring( motionOffset[2], motionVelocity[2], -2.40f, 2.44f );
	motionAngles[PITCH] = V_ClampSpring( motionAngles[PITCH], motionAngleVelocity[PITCH], -2.60f, 2.68f );
	motionAngles[YAW] = V_ClampSpring( motionAngles[YAW], motionAngleVelocity[YAW], -1.56f, 1.56f );
	motionAngles[ROLL] = V_ClampSpring( motionAngles[ROLL], motionAngleVelocity[ROLL], -4.30f, 4.30f );

	if( wasOnGround && !onGround )
	{
		const float jumpStrength = V_ClampFloat( pparams->simvel[2] / 280.0f, 0.35f, 1.0f );
		jumpVelocity -= 40.0f * jumpStrength * jumpScale;
		jumpPitchVelocity += 17.0f * jumpStrength * jumpScale;
	}
	else if( !wasOnGround && onGround )
	{
		const float landStrength = V_ClampFloat( -lastVerticalSpeed / 430.0f, 0.25f, 1.25f );
		jumpVelocity -= 72.0f * landStrength * jumpScale;
		jumpPitchVelocity += 34.0f * landStrength * jumpScale;
	}

	const float fallAmount = ( !onGround && pparams->simvel[2] < -40.0f ) ? V_ClampFloat( -pparams->simvel[2] / 520.0f, 0.0f, 1.0f ) : 0.0f;
	const float jumpOffsetTarget = -1.25f * fallAmount * jumpScale;
	const float jumpPitchTarget = 0.75f * fallAmount * jumpScale;
	jumpOffset = V_SpringFloat( jumpOffset, jumpVelocity, jumpOffsetTarget, 56.0f, 11.0f, frametime );
	jumpPitch = V_SpringFloat( jumpPitch, jumpPitchVelocity, jumpPitchTarget, 64.0f, 12.0f, frametime );
	jumpOffset = V_ClampSpring( jumpOffset, jumpVelocity, -4.8f, 1.5f );
	jumpPitch = V_ClampSpring( jumpPitch, jumpPitchVelocity, -2.6f, 3.6f );

	VectorMA( pparams->vieworg, motionOffset[0], forward, pparams->vieworg );
	VectorMA( pparams->vieworg, motionOffset[1], right, pparams->vieworg );
	VectorMA( pparams->vieworg, motionOffset[2] + jumpOffset, up, pparams->vieworg );

	pparams->viewangles[PITCH] += motionAngles[PITCH] + jumpPitch;
	pparams->viewangles[YAW] += motionAngles[YAW];
	pparams->viewangles[ROLL] += motionAngles[ROLL];

	AngleVectors( pparams->viewangles, pparams->forward, pparams->right, pparams->up );

	wasOnGround = onGround;
	lastVerticalSpeed = pparams->simvel[2];
}

/*
void V_NormalizeAngles( float *angles )
{
	int i;

	// Normalize angles
	for( i = 0; i < 3; i++ )
	{
		if( angles[i] > 180.0f )
		{
			angles[i] -= 360.0f;
		}
		else if( angles[i] < -180.0f )
		{
			angles[i] += 360.0f;
		}
	}
}

===================
V_InterpolateAngles

Interpolate Euler angles.
FIXME:  Use Quaternions to avoid discontinuities
Frac is 0.0 to 1.0 ( i.e., should probably be clamped, but doesn't have to be )
===================

void V_InterpolateAngles( float *start, float *end, float *output, float frac )
{
	int i;
	float ang1, ang2;
	float d;

	V_NormalizeAngles( start );
	V_NormalizeAngles( end );

	for( i = 0 ; i < 3 ; i++ )
	{
		ang1 = start[i];
		ang2 = end[i];

		d = ang2 - ang1;
		if( d > 180.0f )
		{
			d -= 360.0f;
		}
		else if( d < -180.0f )
		{
			d += 360.0f;
		}

		output[i] = ang1 + d * frac;
	}

	V_NormalizeAngles( output );
} */

/*
===============
V_CalcRoll
Used by view and sv_user
===============
*/
float V_CalcRoll( vec3_t angles, vec3_t velocity, float rollangle, float rollspeed )
{
	float sign;
	float side;
	float value;
	vec3_t forward, right, up;

	AngleVectors( angles, forward, right, up );

	side = DotProduct( velocity, right );
	sign = side < 0.0f ? -1.0f : 1.0f;
	side = fabs( side );

	value = rollangle;
	if( side < rollspeed )
	{
		side = side * value / rollspeed;
	}
	else
	{
		side = value;
	}
	return side * sign;
}

typedef struct pitchdrift_s
{
	float pitchvel;
	int nodrift;
	float driftmove;
	double laststop;
} pitchdrift_t;

static pitchdrift_t pd;

/*
===============
V_DriftPitch

Moves the client pitch angle towards idealpitch sent by the server.

If the user is adjusting pitch manually, either with lookup/lookdown,
mlook and mouse, or klook and keyboard, pitch drifting is constantly stopped.
===============
*/

/* 
============================================================================== 
						VIEW RENDERING 
============================================================================== 
*/ 

/*
==================
V_CalcGunAngle
==================
*/
void V_CalcGunAngle( struct ref_params_s *pparams )
{	
	cl_entity_t *viewent;

	viewent = gEngfuncs.GetViewModel();
	if( !viewent )
		return;

	viewent->angles[YAW] = pparams->viewangles[YAW] + pparams->crosshairangle[YAW];
	viewent->angles[PITCH] = -pparams->viewangles[PITCH] + pparams->crosshairangle[PITCH] * 0.25f;
	viewent->angles[ROLL] -= v_idlescale * sin( pparams->time * v_iroll_cycle.value ) * v_iroll_level.value;

	// don't apply all of the v_ipitch to prevent normally unseen parts of viewmodel from coming into view.
	viewent->angles[PITCH] -= v_idlescale * sin( pparams->time * v_ipitch_cycle.value ) * ( v_ipitch_level.value * 0.5f );
	viewent->angles[YAW] -= v_idlescale * sin( pparams->time * v_iyaw_cycle.value ) * v_iyaw_level.value;

	if( !( cl_viewbob && cl_viewbob->value ))
	{
		VectorCopy( viewent->angles, viewent->curstate.angles );
		VectorCopy( viewent->angles, viewent->latched.prevangles );
	}
}

/*
==============
V_AddIdle

Idle swaying
==============
*/
void V_AddIdle( struct ref_params_s *pparams )
{
	pparams->viewangles[ROLL] += v_idlescale * sin( pparams->time * v_iroll_cycle.value ) * v_iroll_level.value;
	pparams->viewangles[PITCH] += v_idlescale * sin( pparams->time * v_ipitch_cycle.value ) * v_ipitch_level.value;
	pparams->viewangles[YAW] += v_idlescale * sin( pparams->time * v_iyaw_cycle.value ) * v_iyaw_level.value;
}

/*
==============
V_CalcViewRoll

Roll is induced by movement and damage
==============
*/
void V_CalcViewRoll( struct ref_params_s *pparams )
{
	float side;
	cl_entity_t *viewentity;

	viewentity = gEngfuncs.GetEntityByIndex( pparams->viewentity );
	if( !viewentity )
		return;

	side = V_CalcRoll( viewentity->angles, pparams->simvel, pparams->movevars->rollangle, pparams->movevars->rollspeed );

	pparams->viewangles[ROLL] += side;

	if( pparams->health <= 0 && ( pparams->viewheight[2] != 0 ) )
	{
		// only roll the view if the player is dead and the viewheight[2] is nonzero 
		// this is so deadcam in multiplayer will work.
		pparams->viewangles[ROLL] = 80;	// dead view angle
		return;
	}
}

/*
==================
V_CalcIntermissionRefdef

==================
*/
void V_CalcIntermissionRefdef( struct ref_params_s *pparams )
{
	cl_entity_t /**ent,*/ *view;
	float old;

	// ent is the player model ( visible when out of body )
	//ent = gEngfuncs.GetLocalPlayer();

	// view is the weapon model (only visible from inside body )
	view = gEngfuncs.GetViewModel();

	VectorCopy( pparams->simorg, pparams->vieworg );
	VectorCopy( pparams->cl_viewangles, pparams->viewangles );

	view->model = NULL;

	// allways idle in intermission
	old = v_idlescale;
	v_idlescale = 1;

	V_AddIdle( pparams );

	if( gEngfuncs.IsSpectateOnly() )
	{
		// in HLTV we must go to 'intermission' position by ourself
		VectorCopy( gHUD.m_Spectator.m_cameraOrigin, pparams->vieworg );
		VectorCopy( gHUD.m_Spectator.m_cameraAngles, pparams->viewangles );
	}

	v_idlescale = old;

	v_cl_angles = pparams->cl_viewangles;
	v_origin = pparams->vieworg;
	v_angles = pparams->viewangles;
}

#define ORIGIN_BACKUP 64
#define ORIGIN_MASK ( ORIGIN_BACKUP - 1 )

typedef struct 
{
	float Origins[ORIGIN_BACKUP][3];
	float OriginTime[ORIGIN_BACKUP];

	float Angles[ORIGIN_BACKUP][3];
	float AngleTime[ORIGIN_BACKUP];

	int CurrentOrigin;
	int CurrentAngle;
} viewinterp_t;

/*
==================
V_CalcRefdef

==================
*/
void V_CalcNormalRefdef( struct ref_params_s *pparams )
{
	cl_entity_t *ent, *view;
	int i;
	vec3_t angles;
	float waterOffset;
	static viewinterp_t ViewInterp;

	static float oldz = 0;
	static float lasttime;

	vec3_t camAngles, camForward, camRight, camUp;
	cl_entity_t *pwater;

	if( gEngfuncs.IsSpectateOnly() )
	{
		ent = gEngfuncs.GetEntityByIndex( g_iUser2 );
	}
	else
	{
		// ent is the player model ( visible when out of body )
		ent = gEngfuncs.GetLocalPlayer();
	}

	// view is the weapon model (only visible from inside body)
	view = gEngfuncs.GetViewModel();

	// refresh position
	VectorCopy( pparams->simorg, pparams->vieworg );
	VectorAdd( pparams->vieworg, pparams->viewheight, pparams->vieworg );

	if( pparams->health <= 0 )
	{
		VectorCopy( dead_viewangles, pparams->viewangles );
	}
	else
	{
		VectorCopy( pparams->cl_viewangles, pparams->viewangles );
	}

	gEngfuncs.V_CalcShake();
	gEngfuncs.V_ApplyShake( pparams->vieworg, pparams->viewangles, 1.0f );

	// never let view origin sit exactly on a node line, because a water plane can
	// dissapear when viewed with the eye exactly on it.
	// FIXME, we send origin at 1/128 now, change this?
	// the server protocol only specifies to 1/16 pixel, so add 1/32 in each axis
	pparams->vieworg[0] += 1.0f / 32.0f;
	pparams->vieworg[1] += 1.0f / 32.0f;
	pparams->vieworg[2] += 1.0f / 32.0f;

	// Check for problems around water, move the viewer artificially if necessary 
	// -- this prevents drawing errors in GL due to waves

	waterOffset = 0;
	if( pparams->waterlevel >= 2 )
	{
		int contents, waterDist, waterEntity;
		vec3_t point;
		waterDist = cl_waterdist->value;

		if( pparams->hardware )
		{
			waterEntity = gEngfuncs.PM_WaterEntity( pparams->simorg );
			if( waterEntity >= 0 && waterEntity < pparams->max_entities )
			{
				pwater = gEngfuncs.GetEntityByIndex( waterEntity );
				if( pwater && ( pwater->model != NULL ) )
				{
					waterDist += ( pwater->curstate.scale * 16.0f );	// Add in wave height
				}
			}
		}
		else
		{
			// waterEntity = 0;	// Don't need this in software
		}
	
		VectorCopy( pparams->vieworg, point );

		// Eyes are above water, make sure we're above the waves
		if( pparams->waterlevel == 2 )	
		{
			point[2] -= waterDist;
			for( i = 0; i < waterDist; i++ )
			{
				contents = gEngfuncs.PM_PointContents( point, NULL );
				if( contents > CONTENTS_WATER )
					break;
				point[2] += 1;
			}
			waterOffset = ( point[2] + waterDist ) - pparams->vieworg[2];
		}
		else
		{
			// eyes are under water.  Make sure we're far enough under
			point[2] += waterDist;

			for( i = 0; i < waterDist; i++ )
			{
				contents = gEngfuncs.PM_PointContents( point, NULL );
				if( contents <= CONTENTS_WATER )
					break;
				point[2] -= 1;
			}
			waterOffset = ( point[2] - waterDist ) - pparams->vieworg[2];
		}
	}

	pparams->vieworg[2] += waterOffset;

	V_CalcViewRoll( pparams );

	V_AddIdle( pparams );

	// offsets
	if( pparams->health <= 0 )
	{
		VectorCopy( dead_viewangles, angles );
	}
	else
	{
		VectorCopy( pparams->cl_viewangles, angles );
	}

	AngleVectors( angles, pparams->forward, pparams->right, pparams->up );

	// don't allow cheats in multiplayer
	if( pparams->maxclients <= 1 )
	{
		for( i = 0; i < 3; i++ )
		{
			pparams->vieworg[i] += scr_ofsx->value*pparams->forward[i] + scr_ofsy->value*pparams->right[i] + scr_ofsz->value*pparams->up[i];
		}
	}

	V_ApplyCameraMotionInertia( pparams );

	// Treating cam_ofs[2] as the distance
	if( CL_IsThirdPerson() )
	{
		vec3_t ofs;

		ofs[0] = ofs[1] = ofs[2] = 0.0f;

		CL_CameraOffset( (float *)&ofs );

		VectorCopy( ofs, camAngles );
		camAngles[ROLL]	= 0;

		AngleVectors( camAngles, camForward, camRight, camUp );

		for( i = 0; i < 3; i++ )
		{
			pparams->vieworg[i] += -ofs[2] * camForward[i];
		}
	}

	// Give gun our viewangles
	if( pparams->health <= 0 )
	{
		VectorCopy( dead_viewangles, view->angles );
	}
	else
	{
		VectorCopy( pparams->cl_viewangles, view->angles );
	}

	// set up gun position
	V_CalcGunAngle( pparams );

	// Use predicted origin as view origin.
	VectorCopy( pparams->simorg, view->origin );      
	view->origin[2] += waterOffset;
	VectorAdd( view->origin, pparams->viewheight, view->origin );

	// Let the viewmodel shake at about 10% of the amplitude
	gEngfuncs.V_ApplyShake( view->origin, view->angles, 0.9f );

	// pushing the view origin down off of the same X/Z plane as the ent's origin will give the
	// gun a very nice 'shifting' effect when the player looks up/down. If there is a problem
	// with view model distortion, this may be a cause. (SJB). 
	view->origin[2] -= 1.0f;

	// fudge position around to keep amount of weapon visible
	// roughly equal with different FOV
	if( pparams->viewsize == 110.0f )
	{
		view->origin[2] += 1.0f;
	}
	else if( pparams->viewsize == 100.0f )
	{
		view->origin[2] += 2.0f;
	}
	else if( pparams->viewsize == 90.0f )
	{
		view->origin[2] += 1.0f;
	}
	else if( pparams->viewsize == 80.0f )
	{
		view->origin[2] += 0.5f;
	}

	V_ApplyWeaponInertia( pparams, view );

	// Add in the punchangle, if any
	VectorAdd( pparams->viewangles, pparams->punchangle, pparams->viewangles );

	// Include client side punch, too
	VectorAdd( pparams->viewangles, (float *)&g_ev_punchangle, pparams->viewangles );

	V_DropPunchAngle( pparams->frametime, (float *)&g_ev_punchangle );

	// smooth out stair step ups
#if 1
	if( !pparams->smoothing && pparams->onground && pparams->simorg[2] - oldz > 0.0f )
	{
		float steptime;

		steptime = pparams->time - lasttime;

		if( steptime < 0 )
		//FIXME		I_Error( "steptime < 0" );
			steptime = 0;

		oldz += steptime * 150.0f;
		if( oldz > pparams->simorg[2] )
			oldz = pparams->simorg[2];
		if( pparams->simorg[2] - oldz > 18.0f )
			oldz = pparams->simorg[2]- 18.0f;
		pparams->vieworg[2] += oldz - pparams->simorg[2];
		view->origin[2] += oldz - pparams->simorg[2];
	}
	else
	{
		oldz = pparams->simorg[2];
	}
#endif
	{
		static float lastorg[3];
		vec3_t delta;

		VectorSubtract( pparams->simorg, lastorg, delta );

		if( Length( delta ) != 0.0f )
		{
			VectorCopy( pparams->simorg, ViewInterp.Origins[ViewInterp.CurrentOrigin & ORIGIN_MASK] );
			ViewInterp.OriginTime[ViewInterp.CurrentOrigin & ORIGIN_MASK] = pparams->time;
			ViewInterp.CurrentOrigin++;

			VectorCopy( pparams->simorg, lastorg );
		}
	}

	// Smooth out whole view in multiplayer when on trains, lifts
	if( cl_vsmoothing && cl_vsmoothing->value &&
		( pparams->smoothing && ( pparams->maxclients > 1 ) ) )
	{
		int foundidx;
		float t;

		if( cl_vsmoothing->value < 0.0f )
		{
			gEngfuncs.Cvar_SetValue( "cl_vsmoothing", 0.0f );
		}

		t = pparams->time - cl_vsmoothing->value;

		for( i = 1; i < ORIGIN_MASK; i++ )
		{
			foundidx = ViewInterp.CurrentOrigin - 1 - i;
			if( ViewInterp.OriginTime[foundidx & ORIGIN_MASK] <= t )
				break;
		}

		if( i < ORIGIN_MASK && ViewInterp.OriginTime[foundidx & ORIGIN_MASK] != 0.0f )
		{
			// Interpolate
			vec3_t delta;
			double frac;
			double dt;
			vec3_t neworg;

			dt = ViewInterp.OriginTime[( foundidx + 1 ) & ORIGIN_MASK] - ViewInterp.OriginTime[foundidx & ORIGIN_MASK];
			if( dt > 0.0 )
			{
				frac = ( t - ViewInterp.OriginTime[foundidx & ORIGIN_MASK] ) / dt;
				frac = Q_min( 1.0, frac );
				VectorSubtract( ViewInterp.Origins[( foundidx + 1 ) & ORIGIN_MASK], ViewInterp.Origins[foundidx & ORIGIN_MASK], delta );
				VectorMA( ViewInterp.Origins[foundidx & ORIGIN_MASK], frac, delta, neworg );

				// Dont interpolate large changes
				if( Length( delta ) < 64.0f )
				{
					VectorSubtract( neworg, pparams->simorg, delta );

					VectorAdd( pparams->simorg, delta, pparams->simorg );
					VectorAdd( pparams->vieworg, delta, pparams->vieworg );
					VectorAdd( view->origin, delta, view->origin );
				}
			}
		}
	}

	// Store off v_angles before munging for third person
	v_angles = pparams->viewangles;
	v_client_aimangles = pparams->cl_viewangles;
	v_lastAngles = pparams->viewangles;
	//v_cl_angles = pparams->cl_viewangles;	// keep old user mouse angles !
	if( CL_IsThirdPerson() )
	{
		VectorCopy( camAngles, pparams->viewangles );
	}

	// Apply this at all times
	{
		float pitch = pparams->viewangles[0];

		// Normalize angles
		if( pitch > 180.0f )
			pitch -= 360.0f;
		else if( pitch < -180.0f )
			pitch += 360.0f;

		// Player pitch is inverted
		pitch /= -3.0f;

		// Slam local player's pitch value
		ent->angles[0] = pitch;
		ent->curstate.angles[0] = pitch;
		ent->prevstate.angles[0] = pitch;
		ent->latched.prevangles[0] = pitch;
	}

	// override all previous settings if the viewent isn't the client
	if( pparams->viewentity > pparams->maxclients )
	{
		cl_entity_t *viewentity;
		viewentity = gEngfuncs.GetEntityByIndex( pparams->viewentity );
		if( viewentity )
		{
			VectorCopy( viewentity->origin, pparams->vieworg );
			VectorCopy( viewentity->angles, pparams->viewangles );

			// Store off overridden viewangles
			v_angles = pparams->viewangles;
		}
	}

	if( cl_viewbob && cl_viewbob->value )
	{
		VectorCopy( view->origin, view->curstate.origin );
		VectorCopy( view->origin, view->latched.prevorigin );
		VectorCopy( view->angles, view->curstate.angles );
		VectorCopy( view->angles, view->latched.prevangles );
	}

	lasttime = pparams->time;

	v_origin = pparams->vieworg;
}

void V_SmoothInterpolateAngles( float * startAngle, float * endAngle, float * finalAngle, float degreesPerSec )
{
	float absd, frac, d, threshhold;

	NormalizeAngles( startAngle );
	NormalizeAngles( endAngle );

	for( int i = 0; i < 3; i++ )
	{
		d = endAngle[i] - startAngle[i];

		if( d > 180.0f )
		{
			d -= 360.0f;
		}
		else if( d < -180.0f )
		{
			d += 360.0f;
		}

		absd = fabs( d );

		if( absd > 0.01f )
		{
			frac = degreesPerSec * v_frametime;

			threshhold= degreesPerSec / 4.0f;

			if( absd < threshhold )
			{
				float h = absd / threshhold;
				h *= h;
				frac *= h;  // slow down last degrees
			}

			if( frac > absd )
			{
				finalAngle[i] = endAngle[i];
			}
			else
			{
				if( d > 0.0f )
					finalAngle[i] = startAngle[i] + frac;
				else
					finalAngle[i] = startAngle[i] - frac;
			}
		}
		else
		{
			finalAngle[i] = endAngle[i];
		}
	}

	NormalizeAngles( finalAngle );
}

// Get the origin of the Observer based around the target's position and angles
void V_GetChaseOrigin( float * angles, float * origin, float distance, float * returnvec )
{
	vec3_t vecEnd;
	vec3_t forward;
	vec3_t vecStart;
	pmtrace_t *trace = 0;
	int maxLoops = 8;

	int ignoreent = -1;	// first, ignore no entity

	cl_entity_t *ent = NULL;

	// Trace back from the target using the player's view angles
	AngleVectors( angles, forward, NULL, NULL );

	VectorScale( forward, -1, forward );

	VectorCopy( origin, vecStart );

	VectorMA( vecStart, distance , forward, vecEnd );

	while( maxLoops > 0 )
	{
		trace = gEngfuncs.PM_TraceLine( vecStart, vecEnd, PM_TRACELINE_PHYSENTSONLY, 2, ignoreent );

		// WARNING! trace->ent is is the number in physent list not the normal entity number

		if( trace->ent <= 0)
			break;	// we hit the world or nothing, stop trace

		ent = gEngfuncs.GetEntityByIndex( PM_GetPhysEntInfo( trace->ent ) );

		if( ent == NULL )
			break;

		// hit non-player solid BSP , stop here
		if( ent->curstate.solid == SOLID_BSP && !ent->player ) 
			break;

		// if close enought to end pos, stop, otherwise continue trace
		if( Distance( trace->endpos, vecEnd ) < 1.0f )
		{
			break;
		}
		else
		{
			ignoreent = trace->ent;	// ignore last hit entity
			VectorCopy( trace->endpos, vecStart );
		}

		maxLoops--;
	}
	assert( trace );
/*	if( ent )
	{
		gEngfuncs.Con_Printf( "Trace loops %i , entity %i, model %s, solid %i\n",(8-maxLoops),ent->curstate.number, ent->model->name , ent->curstate.solid );
	} */

	VectorMA( trace->endpos, 4, trace->plane.normal, returnvec );

	v_lastDistance = Distance( trace->endpos, origin );	// real distance without offset
}

/*void V_GetDeathCam( cl_entity_t * ent1, cl_entity_t * ent2, float * angle, float * origin )
{
	float newAngle[3]; float newOrigin[3];

	float distance = 168.0f;

	v_lastDistance += v_frametime * 96.0f;	// move unit per seconds back

	if( v_resetCamera )
		v_lastDistance = 64.0f;

	if( distance > v_lastDistance )
		distance = v_lastDistance;

	VectorCopy( ent1->origin, newOrigin );

	if( ent1->player )
		newOrigin[2] += 17.0f; // head level of living player

	// get new angle towards second target
	if( ent2 )
	{
		VectorSubtract( ent2->origin, ent1->origin, newAngle );
		VectorAngles( newAngle, newAngle );
		newAngle[0] = -newAngle[0];
	}
	else
	{
		// if no second target is given, look down to dead player
		newAngle[0] = 90.0f;
		newAngle[1] = 0.0f;
		newAngle[2] = 0.0f;
	}

	// and smooth view
	V_SmoothInterpolateAngles( v_lastAngles, newAngle, angle, 120.0f );
	
	V_GetChaseOrigin( angle, newOrigin, distance, origin );

	VectorCopy( angle, v_lastAngles );
}*/

void V_GetSingleTargetCam( cl_entity_t * ent1, float * angle, float * origin )
{
	float newAngle[3]; float newOrigin[3];

	int flags = gHUD.m_Spectator.m_iObserverFlags;

	// see is target is a dead player
	qboolean deadPlayer = ent1->player && ( ent1->curstate.solid == SOLID_NOT );

	float dfactor = ( flags & DRC_FLAG_DRAMATIC ) ? -1.0f : 1.0f;

	float distance = 112.0f + ( 16.0f * dfactor ); // get close if dramatic;

	// go away in final scenes or if player just died
	if( flags & DRC_FLAG_FINAL )
		distance *= 2.0f;	
	else if( deadPlayer )
		distance *= 1.5f;	

	// let v_lastDistance float smoothly away
	v_lastDistance += v_frametime * 32.0f;	// move unit per seconds back

	if( distance > v_lastDistance )
		distance = v_lastDistance;

	VectorCopy( ent1->origin, newOrigin );

	if( ent1->player )
	{
		if( deadPlayer )  
			newOrigin[2] += 2.0f;	//laying on ground
		else
			newOrigin[2] += 17.0f; // head level of living player
	}
	else
		newOrigin[2]+= 8.0f;	// object, tricky, must be above bomb in CS

	// we have no second target, choose view direction based on
	// show front of primary target
	VectorCopy( ent1->angles, newAngle );

	// show dead players from front, normal players back
	if( flags & DRC_FLAG_FACEPLAYER )
		newAngle[1] += 180.0f;

	newAngle[0] += 12.5f * dfactor; // lower angle if dramatic

	// if final scene (bomb), show from real high pos
	if( flags & DRC_FLAG_FINAL )
		newAngle[0] = 22.5f; 

	// choose side of object/player			
	if( flags & DRC_FLAG_SIDE )
		newAngle[1] += 22.5f;
	else
		newAngle[1] -= 22.5f;

	V_SmoothInterpolateAngles( v_lastAngles, newAngle, angle, 120.0f );

	// HACK, if player is dead don't clip against his dead body, can't check this
	V_GetChaseOrigin( angle, newOrigin, distance, origin );
}

float MaxAngleBetweenAngles( float *a1, float *a2 )
{
	float d, maxd = 0.0f;

	NormalizeAngles( a1 );
	NormalizeAngles( a2 );

	for( int i = 0; i < 3; i++ )
	{
		d = a2[i] - a1[i];
		if( d > 180.0f )
		{
			d -= 360.0f;
		}
		else if( d < -180.0f )
		{	
			d += 360.0f;
		}

		d = fabs( d );

		if( d > maxd )
			maxd = d;
	}

	return maxd;
}

void V_GetDoubleTargetsCam( cl_entity_t *ent1, cl_entity_t *ent2, float *angle, float *origin )
{
	float newAngle[3], newOrigin[3], tempVec[3];

	int flags = gHUD.m_Spectator.m_iObserverFlags;

	float dfactor = ( flags & DRC_FLAG_DRAMATIC ) ? -1.0f : 1.0f;

	float distance = 112.0f + ( 16.0f * dfactor ); // get close if dramatic;

	// go away in final scenes or if player just died
	if( flags & DRC_FLAG_FINAL )
		distance *= 2.0f;	

	// let v_lastDistance float smoothly away
	v_lastDistance += v_frametime * 32.0f;	// move unit per seconds back

	if( distance > v_lastDistance )
		distance = v_lastDistance;

	VectorCopy( ent1->origin, newOrigin );

	if( ent1->player )
		newOrigin[2] += 17.0f; // head level of living player
	else
		newOrigin[2] += 8.0f;	// object, tricky, must be above bomb in CS

	// get new angle towards second target
	VectorSubtract( ent2->origin, ent1->origin, newAngle );

	VectorAngles( newAngle, newAngle );
	newAngle[0] = -newAngle[0];

	// set angle diffrent in Dramtaic scenes
	newAngle[0] += 12.5f * dfactor; // lower angle if dramatic

	if( flags & DRC_FLAG_SIDE )
		newAngle[1] += 22.5f;
	else
		newAngle[1] -= 22.5f;

	float d = MaxAngleBetweenAngles( v_lastAngles, newAngle );

	if( ( d < v_cameraFocusAngle) && ( v_cameraMode == CAM_MODE_RELAX ) )
	{
		// difference is to small and we are in relax camera mode, keep viewangles
		VectorCopy( v_lastAngles, newAngle );
	}
	else if( ( d < v_cameraRelaxAngle ) && ( v_cameraMode == CAM_MODE_FOCUS ) )
	{
		// we catched up with our target, relax again
		v_cameraMode = CAM_MODE_RELAX;
	}
	else
	{
		// target move too far away, focus camera again
		v_cameraMode = CAM_MODE_FOCUS;
	}

	// and smooth view, if not a scene cut
	if( v_resetCamera || ( v_cameraMode == CAM_MODE_RELAX ) )
	{
		VectorCopy( newAngle, angle );
	}
	else
	{
		V_SmoothInterpolateAngles( v_lastAngles, newAngle, angle, 180.0f );
	}

	V_GetChaseOrigin( newAngle, newOrigin, distance, origin );

	// move position up, if very close at target
	if( v_lastDistance < 64.0f )
		origin[2] += 16.0f * ( 1.0f - ( v_lastDistance / 64.0f ) );

	// calculate angle to second target
	VectorSubtract( ent2->origin, origin, tempVec );
	VectorAngles( tempVec, tempVec );
	tempVec[0] = -tempVec[0];

	/* take middle between two viewangles
	InterpolateAngles( newAngle, tempVec, newAngle, 0.5f ); */
}

void V_GetDirectedChasePosition(cl_entity_t *ent1, cl_entity_t *ent2,float *angle, float *origin)
{
	if( v_resetCamera )
	{
		v_lastDistance = 4096.0f;
		// v_cameraMode = CAM_MODE_FOCUS;
	}

	if( ( ent2 == (cl_entity_t*)0xFFFFFFFF ) || ( ent1->player && ( ent1->curstate.solid == SOLID_NOT ) ) )
	{
		// we have no second target or player just died
		V_GetSingleTargetCam( ent1, angle, origin );
	}
	else if( ent2 )
	{
		// keep both target in view
		V_GetDoubleTargetsCam( ent1, ent2, angle, origin );
	}
	else
	{
		// second target disappeard somehow (dead)

		// keep last good viewangle
		float newOrigin[3];

		int flags = gHUD.m_Spectator.m_iObserverFlags;

		float dfactor = ( flags & DRC_FLAG_DRAMATIC ) ? -1.0f : 1.0f;

		float distance = 112.0f + ( 16.0f * dfactor ); // get close if dramatic;

		// go away in final scenes or if player just died
		if( flags & DRC_FLAG_FINAL )
			distance *= 2.0f;	

		// let v_lastDistance float smoothly away
		v_lastDistance+= v_frametime * 32.0f;	// move unit per seconds back

		if( distance > v_lastDistance )
			distance = v_lastDistance;

		VectorCopy( ent1->origin, newOrigin );

		if( ent1->player )
			newOrigin[2] += 17.0f; // head level of living player
		else
			newOrigin[2] += 8.0f;	// object, tricky, must be above bomb in CS

		V_GetChaseOrigin( angle, newOrigin, distance, origin );
	}

	VectorCopy( angle, v_lastAngles );
}

void V_GetChasePos( int target, float *cl_angles, float *origin, float *angles )
{
	cl_entity_t *ent = NULL;

	if( target ) 
	{
		ent = gEngfuncs.GetEntityByIndex( target );
	}
	
	if( !ent )
	{
		// just copy a save in-map position
		VectorCopy( vJumpAngles, angles );
		VectorCopy( vJumpOrigin, origin );
		return;
	}

	if( gHUD.m_Spectator.m_autoDirector->value )
	{
		if( g_iUser3 )
			V_GetDirectedChasePosition( ent, gEngfuncs.GetEntityByIndex( g_iUser3 ),
				angles, origin );
		else
			V_GetDirectedChasePosition( ent, (cl_entity_t*)0xFFFFFFFF,
				angles, origin );
	}
	else
	{
		if( cl_angles == NULL )	// no mouse angles given, use entity angles ( locked mode )
		{
			VectorCopy( ent->angles, angles);
			angles[0] *= -1.0f;
		}
		else
			VectorCopy( cl_angles, angles );

		VectorCopy( ent->origin, origin );

		origin[2] += 28.0f; // DEFAULT_VIEWHEIGHT - some offset

		V_GetChaseOrigin( angles, origin, cl_chasedist->value, origin );
	}

	v_resetCamera = false;	
}

void V_ResetChaseCam()
{
	v_resetCamera = true;
}

void V_GetInEyePos( int target, float *origin, float *angles )
{
	if( !target )
	{
		// just copy a save in-map position
		VectorCopy ( vJumpAngles, angles );
		VectorCopy ( vJumpOrigin, origin );
		return;
	};

	cl_entity_t *ent = gEngfuncs.GetEntityByIndex( target );

	if( !ent )
		return;

	VectorCopy( ent->origin, origin );
	VectorCopy( ent->angles, angles );

	angles[PITCH] *= -3.0f;	// see CL_ProcessEntityUpdate()

	if( ent->curstate.solid == SOLID_NOT )
	{
		angles[ROLL] = 80.0f;	// dead view angle
		origin[2] += -8.0f; // PM_DEAD_VIEWHEIGHT
	}
	else if( ent->curstate.usehull == 1 )
		origin[2] += 12.0f; // VEC_DUCK_VIEW;
	else
		// Exact eye position is not available here, so use the standing view height.
		origin[2] += 28.0f; // DEFAULT_VIEWHEIGHT
}

void V_GetMapFreePosition( float *cl_angles, float *origin, float *angles )
{
	vec3_t forward;
	vec3_t zScaledTarget;

	VectorCopy( cl_angles, angles );

	// modify angles since we don't wanna see map's bottom
	angles[0] = 51.25f + 38.75f * ( angles[0] / 90.0f );

	zScaledTarget[0] = gHUD.m_Spectator.m_mapOrigin[0];
	zScaledTarget[1] = gHUD.m_Spectator.m_mapOrigin[1];
	zScaledTarget[2] = gHUD.m_Spectator.m_mapOrigin[2] * ( ( 90.0f - angles[0] ) / 90.0f );

	AngleVectors( angles, forward, NULL, NULL );

	VectorNormalize( forward );

	VectorMA( zScaledTarget, -( 4096.0f / gHUD.m_Spectator.m_mapZoom ), forward, origin );
}

void V_GetMapChasePosition( int target, float *cl_angles, float *origin, float *angles )
{
	vec3_t forward;

	if( target )
	{
		cl_entity_t *ent = gEngfuncs.GetEntityByIndex( target );

		if( gHUD.m_Spectator.m_autoDirector->value )
		{
			// this is done to get the angles made by director mode
			V_GetChasePos( target, cl_angles, origin, angles );
			VectorCopy( ent->origin, origin );

			// keep fix chase angle horizontal
			angles[0] = 45.0f;
		}
		else
		{
			VectorCopy( cl_angles, angles );
			VectorCopy( ent->origin, origin );

			// modify angles since we don't wanna see map's bottom
			angles[0] = 51.25f + 38.75f * ( angles[0] / 90.0f );
		}
	}
	else
	{
		// keep out roaming position, but modify angles
		VectorCopy( cl_angles, angles );
		angles[0] = 51.25f + 38.75f * ( angles[0] / 90.0f );
	}

	origin[2] *= ( ( 90.0f - angles[0] ) / 90.0f );
	angles[2] = 0.0f;	// don't roll angle (if chased player is dead)

	AngleVectors( angles, forward, NULL, NULL );

	VectorNormalize( forward );

	VectorMA( origin, -1536.0f, forward, origin ); 
}

int V_FindViewModelByWeaponModel( int weaponindex )
{
	static const char *modelmap[][2] =
	{
		{ "models/p_crossbow.mdl",	"models/v_crossbow.mdl" },
		{ "models/p_crowbar.mdl",	"models/v_crowbar.mdl" },
		{ "models/p_egon.mdl",		"models/v_egon.mdl" },
		{ "models/p_gauss.mdl",		"models/v_gauss.mdl" },
		{ "models/p_9mmhandgun.mdl",	"models/v_9mmhandgun.mdl" },
		{ "models/p_grenade.mdl",	"models/v_grenade.mdl" },
		{ "models/p_hgun.mdl",		"models/v_hgun.mdl" },
		{ "models/p_9mmAR.mdl",		"models/v_9mmAR.mdl" },
		{ "models/p_357.mdl",		"models/v_357.mdl" },
		{ "models/p_rpg.mdl",		"models/v_rpg.mdl" },
		{ "models/p_shotgun.mdl",	"models/v_shotgun.mdl" },
		{ "models/p_squeak.mdl",	"models/v_squeak.mdl" },
		{ "models/p_tripmine.mdl",	"models/v_tripmine.mdl" },
		{ "models/p_satchel_radio.mdl",	"models/v_satchel_radio.mdl" },
		{ "models/p_satchel.mdl",	"models/v_satchel.mdl" },
		{ NULL, NULL }
	};

	struct model_s *weaponModel = IEngineStudio.GetModelByIndex( weaponindex );

	if( weaponModel )
	{
		int len = strlen( weaponModel->name );
		int i = 0;

		while( modelmap[i][0] != NULL )
		{
			if( !strnicmp( weaponModel->name, modelmap[i][0], len ) )
			{
				return gEngfuncs.pEventAPI->EV_FindModelIndex( modelmap[i][1] );
			}
			i++;
		}

		return 0;
	}
	else
		return 0;
}

/*
==================
V_CalcSpectatorRefdef

==================
*/
void V_CalcSpectatorRefdef( struct ref_params_s * pparams )
{
	static vec3_t velocity( 0.0f, 0.0f, 0.0f );

	static int lastWeaponModelIndex = 0;
	static int lastViewModelIndex = 0;

	cl_entity_t *ent = gEngfuncs.GetEntityByIndex( g_iUser2 );

	pparams->onlyClientDraw = false;

	// refresh position
	VectorCopy( pparams->simorg, v_sim_org );

	// get old values
	VectorCopy( pparams->cl_viewangles, v_cl_angles );
	VectorCopy( pparams->viewangles, v_angles );
	VectorCopy( pparams->vieworg, v_origin );

	if( ( g_iUser1 == OBS_IN_EYE || gHUD.m_Spectator.m_pip->value == INSET_IN_EYE ) && ent )
	{
		// calculate player velocity
		float timeDiff = ent->curstate.msg_time - ent->prevstate.msg_time;

		if( timeDiff > 0 )
		{
			vec3_t distance;
			VectorSubtract( ent->prevstate.origin, ent->curstate.origin, distance );
			VectorScale( distance, 1 / timeDiff, distance );

			velocity[0] = velocity[0] * 0.9f + distance[0] * 0.1f;
			velocity[1] = velocity[1] * 0.9f + distance[1] * 0.1f;
			velocity[2] = velocity[2] * 0.9f + distance[2] * 0.1f;

			VectorCopy( velocity, pparams->simvel );
		}

		// predict missing client data and set weapon model ( in HLTV mode or inset in eye mode )
		if( gEngfuncs.IsSpectateOnly() )
		{
			V_GetInEyePos( g_iUser2, pparams->simorg, pparams->cl_viewangles );

			pparams->health = 1;

			cl_entity_t *gunModel = gEngfuncs.GetViewModel();

			if( lastWeaponModelIndex != ent->curstate.weaponmodel )
			{
				// weapon model changed
				lastWeaponModelIndex = ent->curstate.weaponmodel;
				lastViewModelIndex = V_FindViewModelByWeaponModel( lastWeaponModelIndex );
				if( lastViewModelIndex )
				{
					gEngfuncs.pfnWeaponAnim( 0, 0 ); // reset weapon animation
				}
				else
				{
					// model not found
					gunModel->model = NULL;	// disable weapon model
					lastWeaponModelIndex = lastViewModelIndex = 0;
				}
			}

			if( lastViewModelIndex )
			{
				gunModel->model = IEngineStudio.GetModelByIndex( lastViewModelIndex );
				gunModel->curstate.modelindex = lastViewModelIndex;
				gunModel->curstate.frame = 0;
				gunModel->curstate.colormap = 0; 
				gunModel->index = g_iUser2;
			}
			else
			{
				gunModel->model = NULL;	// disable weaopn model
			}
		}
		else
		{
			// only get viewangles from entity
			VectorCopy( ent->angles, pparams->cl_viewangles );
			pparams->cl_viewangles[PITCH] *= -3.0f;	// see CL_ProcessEntityUpdate()
		}
	}

	v_frametime = pparams->frametime;

	if( pparams->nextView == 0 )
	{
		// first renderer cycle, full screen
		switch( g_iUser1 )
		{
			case OBS_CHASE_LOCKED:
				V_GetChasePos( g_iUser2, NULL, v_origin, v_angles );
				break;
			case OBS_CHASE_FREE:
				V_GetChasePos( g_iUser2, v_cl_angles, v_origin, v_angles );
				break;
			case OBS_ROAMING:
				VectorCopy( v_cl_angles, v_angles );
				VectorCopy( v_sim_org, v_origin );
				// override values if director is active
				gHUD.m_Spectator.GetDirectorCamera(v_origin, v_angles);
				break;
			case OBS_IN_EYE:
				V_CalcNormalRefdef( pparams );
				break;
			case OBS_MAP_FREE:
				pparams->onlyClientDraw = true;
				V_GetMapFreePosition( v_cl_angles, v_origin, v_angles );
				break;
			case OBS_MAP_CHASE:
				pparams->onlyClientDraw = true;
				V_GetMapChasePosition( g_iUser2, v_cl_angles, v_origin, v_angles );
				break;
		}

		if( gHUD.m_Spectator.m_pip->value )
			pparams->nextView = 1;	// force a second renderer view

		gHUD.m_Spectator.m_iDrawCycle = 0;
	}
	else
	{
		// second renderer cycle, inset window
		// set inset parameters
		pparams->viewport[0] = XRES_HD( gHUD.m_Spectator.m_OverviewData.insetWindowX );	// change viewport to inset window
		pparams->viewport[1] = YRES_HD( gHUD.m_Spectator.m_OverviewData.insetWindowY );
		pparams->viewport[2] = XRES_HD( gHUD.m_Spectator.m_OverviewData.insetWindowWidth );
		pparams->viewport[3] = YRES_HD( gHUD.m_Spectator.m_OverviewData.insetWindowHeight );
		pparams->nextView = 0;	// on further view

		// override some settings in certain modes
		switch( (int)gHUD.m_Spectator.m_pip->value )
		{
			case INSET_CHASE_FREE:
				V_GetChasePos( g_iUser2, v_cl_angles, v_origin, v_angles );
				break;	
			case INSET_IN_EYE:
				V_CalcNormalRefdef( pparams );
				break;
			case INSET_MAP_FREE:
				pparams->onlyClientDraw = true;
				V_GetMapFreePosition( v_cl_angles, v_origin, v_angles );
				break;
			case INSET_MAP_CHASE:
				pparams->onlyClientDraw = true;
				if( g_iUser1 == OBS_ROAMING )
					V_GetMapChasePosition( 0, v_cl_angles, v_origin, v_angles );
				else
					V_GetMapChasePosition( g_iUser2, v_cl_angles, v_origin, v_angles );
				break;
		}

		gHUD.m_Spectator.m_iDrawCycle = 1;
	}

	// write back new values into pparams
	VectorCopy( v_cl_angles, pparams->cl_viewangles );
	VectorCopy( v_angles, pparams->viewangles )
	VectorCopy( v_origin, pparams->vieworg );
}

void DLLEXPORT V_CalcRefdef( struct ref_params_s *pparams )
{
	// intermission / finale rendering
	if( pparams->intermission )
	{
		V_CalcIntermissionRefdef( pparams );	
	}
	else if( pparams->spectator || g_iUser1 )	// g_iUser true if in spectator mode
	{
		V_CalcSpectatorRefdef( pparams );	
	}
	else if( !pparams->paused )
	{
		V_CalcNormalRefdef( pparams );
	}
/*
// Example of how to overlay the whole screen with red at 50 % alpha
#define SF_TEST	1
#if SF_TEST
	{
		screenfade_t sf;
		gEngfuncs.pfnGetScreenFade( &sf );

		sf.fader = 255;
		sf.fadeg = 0;
		sf.fadeb = 0;
		sf.fadealpha = 128;
		sf.fadeFlags = FFADE_STAYOUT | FFADE_OUT;

		gEngfuncs.pfnSetScreenFade( &sf );
	}
#endif
*/
}

/*
=============
V_DropPunchAngle

=============
*/
void V_DropPunchAngle( float frametime, float *ev_punchangle )
{
	float len;

	len = VectorNormalize( ev_punchangle );
	len -= ( 10.0f + len * 0.5f ) * (float)frametime;
	len = Q_max( len, 0.0f );
	VectorScale( ev_punchangle, len, ev_punchangle );
}

/*
=============
V_PunchAxis

Client side punch effect
=============
*/
void V_PunchAxis( int axis, float punch )
{
	g_ev_punchangle[axis] = punch;
}

/*
=============
V_Init
=============
*/
void V_Init( void )
{
	scr_ofsx = gEngfuncs.pfnRegisterVariable( "scr_ofsx","0", 0 );
	scr_ofsy = gEngfuncs.pfnRegisterVariable( "scr_ofsy","0", 0 );
	scr_ofsz = gEngfuncs.pfnRegisterVariable( "scr_ofsz","0", 0 );

	v_centermove = gEngfuncs.pfnRegisterVariable( "v_centermove", "0.15", 0 );
	v_centerspeed = gEngfuncs.pfnRegisterVariable( "v_centerspeed","500", 0 );

	cl_waterdist = gEngfuncs.pfnRegisterVariable( "cl_waterdist","4", 0 );
	cl_chasedist = gEngfuncs.pfnRegisterVariable( "cl_chasedist","112", 0 );
	cl_weapon_inertia = gEngfuncs.pfnRegisterVariable( "cl_weapon_inertia", "1", FCVAR_ARCHIVE );
	cl_weapon_lag_scale = gEngfuncs.pfnRegisterVariable( "cl_weapon_lag_scale", "1.2", FCVAR_ARCHIVE );
	cl_weapon_lag_speed = gEngfuncs.pfnRegisterVariable( "cl_weapon_lag_speed", "7.5", FCVAR_ARCHIVE );
	cl_weapon_move_scale = gEngfuncs.pfnRegisterVariable( "cl_weapon_move_scale", "1.15", FCVAR_ARCHIVE );
	cl_weapon_move_speed = gEngfuncs.pfnRegisterVariable( "cl_weapon_move_speed", "8", FCVAR_ARCHIVE );
	cl_camera_inertia = gEngfuncs.pfnRegisterVariable( "cl_camera_inertia", "1", FCVAR_ARCHIVE );
	cl_camera_motion_scale = gEngfuncs.pfnRegisterVariable( "cl_camera_motion_scale", "1", FCVAR_ARCHIVE );
	cl_camera_jump_scale = gEngfuncs.pfnRegisterVariable( "cl_camera_jump_scale", "1", FCVAR_ARCHIVE );
}

//#define TRACE_TEST	1
#if TRACE_TEST

extern float in_fov;
/*
====================
CalcFov
====================
*/
float CalcFov( float fov_x, float width, float height )
{
	float a;
	float x;

	if( fov_x < 1.0f || fov_x > 179.0f )
		fov_x = 90.0f;	// error, set to 90

	x = width / tan( fov_x / 360.0f * M_PI_F );

	a = atan ( height / x );

	a = a * 360.0f / M_PI_F;

	return a;
}

int hitent = -1;

void V_Move( int mx, int my )
{
	float fov;
	float fx, fy;
	float dx, dy;
	float c_x, c_y;
	float dX, dY;
	vec3_t forward, up, right;
	vec3_t newangles;

	vec3_t farpoint;
	pmtrace_t tr;

	fov = CalcFov( in_fov, (float)ScreenWidth, (float)ScreenHeight );

	c_x = (float)ScreenWidth / 2.0f;
	c_y = (float)ScreenHeight / 2.0f;

	dx = (float)mx - c_x;
	dy = (float)my - c_y;

	// Proportion we moved in each direction
	fx = dx / c_x;
	fy = dy / c_y;

	dX = fx * in_fov / 2.0f;
	dY = fy * fov / 2.0f;

	newangles = v_angles;

	newangles[YAW] -= dX;
	newangles[PITCH] += dY;

	// Now rotate v_forward around that point
	AngleVectors( newangles, forward, right, up );

	farpoint = v_origin + 8192 * forward;

	// Trace
	tr = *( gEngfuncs.PM_TraceLine( (float *)&v_origin, (float *)&farpoint, PM_TRACELINE_PHYSENTSONLY, 2 /*point sized hull*/, -1 ) );

	if( tr.fraction != 1.0f && tr.ent != 0 )
	{
		hitent = PM_GetPhysEntInfo( tr.ent );
		PM_ParticleLine( (float *)&v_origin, (float *)&tr.endpos, 5, 1.0f, 0.0f );
	}
	else
	{
		hitent = -1;
	}
}
#endif
