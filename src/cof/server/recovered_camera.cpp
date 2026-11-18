/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
// Adapted from vendored HLSDK triggers.cpp. CoF extensions are based on
// hl.dll Use 0x10113b60, FollowTarget 0x1010af30, KeyValue 0x1010cbc0.
// Scope: single-player menu camera; attached-model and skip-manager are pending.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "saverestore.h"
#include "trains.h"

#define SF_CAMERA_PLAYER_POSITION	1
#define SF_CAMERA_PLAYER_TARGET		2
#define SF_CAMERA_PLAYER_TAKECONTROL 4
#define SF_CAMERA_HIDEHUD 16
#define SF_CAMERA_DIRECT_ANGLES 64

class CCofTriggerCamera : public CBaseDelay
{
public:
	void Spawn( void );
	void KeyValue( KeyValueData *pkvd );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT FollowTarget( void );
	void Move( void );

	virtual int Save( CSave &save );
	virtual int Restore( CRestore &restore );
	virtual int ObjectCaps( void ) { return CBaseEntity :: ObjectCaps() & ~FCAP_ACROSS_TRANSITION; }
	static TYPEDESCRIPTION m_SaveData[];

	EHANDLE m_hPlayer;
	EHANDLE m_hTarget;
	CBaseEntity *m_pentPath;
	string_t m_sPath;
	float m_flWait;
	float m_flReturnTime;
	float m_flStopTime;
	float m_moveDistance;
	float m_targetSpeed;
	float m_initialSpeed;
	float m_acceleration;
	float m_deceleration;
	int m_state;
	int m_keepNoHud;
	int m_zangle;
	float m_previousDamage;
};

LINK_ENTITY_TO_CLASS( trigger_camera, CCofTriggerCamera )

// Global Savedata for changelevel friction modifier
TYPEDESCRIPTION	CCofTriggerCamera::m_SaveData[] =
{
	DEFINE_FIELD( CCofTriggerCamera, m_hPlayer, FIELD_EHANDLE ),
	DEFINE_FIELD( CCofTriggerCamera, m_hTarget, FIELD_EHANDLE ),
	DEFINE_FIELD( CCofTriggerCamera, m_pentPath, FIELD_CLASSPTR ),
	DEFINE_FIELD( CCofTriggerCamera, m_sPath, FIELD_STRING ),
	DEFINE_FIELD( CCofTriggerCamera, m_flWait, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_flReturnTime, FIELD_TIME ),
	DEFINE_FIELD( CCofTriggerCamera, m_flStopTime, FIELD_TIME ),
	DEFINE_FIELD( CCofTriggerCamera, m_moveDistance, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_targetSpeed, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_initialSpeed, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_acceleration, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_deceleration, FIELD_FLOAT ),
	DEFINE_FIELD( CCofTriggerCamera, m_state, FIELD_INTEGER ),
	DEFINE_FIELD( CCofTriggerCamera, m_keepNoHud, FIELD_INTEGER ),
	DEFINE_FIELD( CCofTriggerCamera, m_zangle, FIELD_INTEGER ),
	DEFINE_FIELD( CCofTriggerCamera, m_previousDamage, FIELD_FLOAT ),
};

IMPLEMENT_SAVERESTORE( CCofTriggerCamera, CBaseDelay )

void CCofTriggerCamera::Spawn( void )
{
	pev->movetype = MOVETYPE_NOCLIP;
	pev->solid = SOLID_NOT;							// Remove model & collisions
	pev->renderamt = 0;								// The engine won't draw this model if this is set to 0 and blending is on
	pev->rendermode = kRenderTransTexture;

	m_initialSpeed = pev->speed;
	if( m_acceleration == 0 )
		m_acceleration = 500;
	if( m_deceleration == 0 )
		m_deceleration = 500;
}

void CCofTriggerCamera::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "wait" ) )
	{
		m_flWait = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq(pkvd->szKeyName, "moveto" ) )
	{
		m_sPath = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "acceleration" ) )
	{
		m_acceleration = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq(pkvd->szKeyName, "deceleration" ) )
	{
		m_deceleration = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq(pkvd->szKeyName, "keepnohud") )
	{
		m_keepNoHud = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq(pkvd->szKeyName, "zangle") )
	{
		m_zangle = static_cast<int>(atof(pkvd->szValue));
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCofTriggerCamera::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( !ShouldToggle( useType, m_state ) )
		return;

	// Toggle state
	m_state = !m_state;
	if( m_state == 0 )
	{
		m_flReturnTime = gpGlobals->time;
		return;
	}
	if( !pActivator || !pActivator->IsPlayer() )
	{
		pActivator = CBaseEntity::Instance( g_engfuncs.pfnPEntityOfEntIndex( 1 ) );
	}

	if (!pActivator || !pActivator->IsPlayer()) { m_state = 0; return; }
	m_hPlayer = pActivator;

	m_flReturnTime = gpGlobals->time + m_flWait;
	pev->speed = m_initialSpeed;
	m_targetSpeed = m_initialSpeed;

	if( FBitSet( pev->spawnflags, SF_CAMERA_PLAYER_TARGET ) )
	{
		m_hTarget = m_hPlayer;
	}
	else
	{
		m_hTarget = GetNextTarget();
	}

	// Nothing to look at!
	if( m_hTarget == 0 )
	{
		return;
	}

	if( FBitSet( pev->spawnflags, SF_CAMERA_PLAYER_TAKECONTROL ) )
	{
		( (CBasePlayer *)pActivator )->EnableControl( FALSE );
	}

	if( m_sPath )
	{
		m_pentPath = Instance( FIND_ENTITY_BY_TARGETNAME( NULL, STRING( m_sPath ) ) );
	}
	else
	{
		m_pentPath = NULL;
	}

	m_flStopTime = gpGlobals->time;
	if( m_pentPath )
	{
		if( m_pentPath->pev->speed != 0 )
			m_targetSpeed = m_pentPath->pev->speed;
		
		m_flStopTime += m_pentPath->GetDelay();
	}

	// copy over player information
	if( FBitSet(pev->spawnflags, SF_CAMERA_PLAYER_POSITION ) )
	{
		UTIL_SetOrigin( pev, pActivator->pev->origin + pActivator->pev->view_ofs );
		pev->angles.x = -pActivator->pev->angles.x;
		pev->angles.y = pActivator->pev->angles.y;
		pev->angles.z = 0;
		pev->velocity = pActivator->pev->velocity;
	}
	else
	{
		pev->velocity = Vector( 0, 0, 0 );
	}

	SET_VIEW( pActivator->edict(), edict() );
	m_previousDamage = pActivator->pev->takedamage;
	pActivator->pev->takedamage = DAMAGE_NO;
	pActivator->pev->flags |= FL_FROZEN;
	if (FBitSet(pev->spawnflags, SF_CAMERA_HIDEHUD))
		static_cast<CBasePlayer*>(pActivator)->m_iHideHUD |= 8;

	SET_MODEL( ENT( pev ), STRING( pActivator->pev->model ) );

	// follow the player down
	SetThink( &CCofTriggerCamera::FollowTarget );
	pev->nextthink = gpGlobals->time;

	m_moveDistance = 0;
	Move();
}

void CCofTriggerCamera::FollowTarget()
{
	if( m_hPlayer == 0 )
		return;

	if( m_hTarget == 0 || m_state == 0 || (m_flWait != 666.0f && m_flReturnTime < gpGlobals->time) )
	{
		if( m_hPlayer->IsAlive() )
		{
			SET_VIEW( m_hPlayer->edict(), m_hPlayer->edict() );
			( (CBasePlayer *)( (CBaseEntity *)m_hPlayer ) )->EnableControl( TRUE );
		}
		m_hPlayer->pev->flags &= ~FL_FROZEN;
		m_hPlayer->pev->takedamage = m_previousDamage;
		if (FBitSet(pev->spawnflags, SF_CAMERA_HIDEHUD) && !m_keepNoHud)
			static_cast<CBasePlayer*>(static_cast<CBaseEntity*>(m_hPlayer))->m_iHideHUD &= ~8;
		SUB_UseTargets( this, USE_TOGGLE, 0 );
		pev->avelocity = Vector( 0, 0, 0 );
		m_state = 0;
		return;
	}

	Vector vecGoal = UTIL_VecToAngles( m_hTarget->pev->origin - pev->origin );
	vecGoal.x = -vecGoal.x;

	if (FBitSet(pev->spawnflags, SF_CAMERA_DIRECT_ANGLES))
	{
		pev->angles.x = vecGoal.x;
		pev->angles.y = vecGoal.y;
		pev->avelocity = g_vecZero;
	}
	else
	{
		if( pev->angles.y > 360 )
			pev->angles.y -= 360;
	
		if( pev->angles.y < 0 )
			pev->angles.y += 360;
	
		float dx = vecGoal.x - pev->angles.x;
		float dy = vecGoal.y - pev->angles.y;
	
		if( dx < -180 )
			dx += 360;
		if( dx > 180 )
			dx = dx - 360;
		
		if( dy < -180 ) 
			dy += 360;
		if( dy > 180 ) 
			dy = dy - 360;
	
		pev->avelocity.x = dx * 40 * gpGlobals->frametime;
		pev->avelocity.y = dy * 40 * gpGlobals->frametime;
	}
	if (m_zangle) pev->angles.z = static_cast<float>(m_zangle);

	if( !( FBitSet( pev->spawnflags, SF_CAMERA_PLAYER_TAKECONTROL ) ) )
	{
		pev->velocity = pev->velocity * 0.8f;
		if( pev->velocity.Length() < 10.0f )
			pev->velocity = g_vecZero;
	}

	pev->nextthink = gpGlobals->time;

	Move();
}

void CCofTriggerCamera::Move()
{
	// Not moving on a path, return
	if( !m_pentPath )
		return;

	// Subtract movement from the previous frame
	m_moveDistance -= pev->speed * gpGlobals->frametime;

	// Have we moved enough to reach the target?
	if( m_moveDistance <= 0 )
	{
		// Fire the passtarget if there is one
		if( m_pentPath->pev->message )
		{
			FireTargets( STRING( m_pentPath->pev->message ), this, this, USE_TOGGLE, 0 );
			if( FBitSet( m_pentPath->pev->spawnflags, SF_CORNER_FIREONCE ) )
				m_pentPath->pev->message = 0;
		}

		// Time to go to the next target
		m_pentPath = m_pentPath->GetNextTarget();

		// Set up next corner
		if( !m_pentPath )
		{
			pev->velocity = g_vecZero;
		}
		else 
		{
			if( m_pentPath->pev->speed != 0 )
				m_targetSpeed = m_pentPath->pev->speed;

			Vector delta = m_pentPath->pev->origin - pev->origin;
			m_moveDistance = delta.Length();
			pev->movedir = delta.Normalize();
			m_flStopTime = gpGlobals->time + m_pentPath->GetDelay();
		}
	}

	if( m_flStopTime > gpGlobals->time )
		pev->speed = UTIL_Approach( 0, pev->speed, m_deceleration * gpGlobals->frametime );
	else
		pev->speed = UTIL_Approach( m_targetSpeed, pev->speed, m_acceleration * gpGlobals->frametime );

	float fraction = 2 * gpGlobals->frametime;
	pev->velocity = ( ( pev->movedir * pev->speed ) * fraction ) + ( pev->velocity * ( 1 - fraction ) );
}
