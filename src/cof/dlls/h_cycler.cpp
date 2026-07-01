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
/*

===== h_cycler.cpp ========================================================

  The Halflife Cycler Monsters

*/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "animation.h"
#include "weapons.h"
#include "player.h"

#define TEMP_FOR_SCREEN_SHOTS	1
#if TEMP_FOR_SCREEN_SHOTS //===================================================

class CCycler : public CBaseMonster
{
public:
	void GenericCyclerSpawn( const char *szModel, Vector vecMin, Vector vecMax );
	virtual int ObjectCaps( void ) { return ( CBaseEntity::ObjectCaps() | FCAP_IMPULSE_USE ); }
	int TakeDamage( entvars_t* pevInflictor, entvars_t* pevAttacker, float flDamage, int bitsDamageType );
	void Spawn( void );
	void Think( void );
	//void Pain( float flDamage );
	void Use ( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	// Don't treat as a live target
	virtual BOOL IsAlive( void ) { return FALSE; }
#if SPEAKABLE_TARGETS
	BOOL IsAllowedToSpeak( void ) { return TRUE; }
#endif
	virtual int Save( CSave &save );
	virtual int Restore( CRestore &restore );
	static TYPEDESCRIPTION m_SaveData[];

	int m_animate;
};

TYPEDESCRIPTION	CCycler::m_SaveData[] =
{
	DEFINE_FIELD( CCycler, m_animate, FIELD_INTEGER ),
};

IMPLEMENT_SAVERESTORE( CCycler, CBaseMonster )

//
// we should get rid of all the other cyclers and replace them with this.
//
class CGenericCycler : public CCycler
{
public:
	void Spawn( void )
	{
		GenericCyclerSpawn( STRING( pev->model ), Vector( -16, -16, 0 ), Vector( 16, 16, 72 ) );
	}
};

LINK_ENTITY_TO_CLASS( cycler, CGenericCycler )

// Probe droid imported for tech demo compatibility
//
// PROBE DROID
//
class CCyclerProbe : public CCycler
{
public:	
	void Spawn( void );
};

LINK_ENTITY_TO_CLASS( cycler_prdroid, CCyclerProbe )

void CCyclerProbe::Spawn( void )
{
	pev->origin = pev->origin + Vector( 0, 0, 16 );
	GenericCyclerSpawn( "models/prdroid.mdl", Vector( -16, -16, -16 ), Vector( 16, 16, 16 ) );
}

// Cycler member functions
void CCycler::GenericCyclerSpawn( const char *szModel, Vector vecMin, Vector vecMax )
{
	if( !szModel || !*szModel )
	{
		ALERT( at_error, "cycler at %.0f %.0f %0.f missing modelname\n", (double)pev->origin.x, (double)pev->origin.y, (double)pev->origin.z );
		REMOVE_ENTITY( ENT( pev ) );
		return;
	}

	pev->classname = MAKE_STRING( "cycler" );
	PRECACHE_MODEL( szModel );
	SET_MODEL( ENT( pev ), szModel );

	CCycler::Spawn();

	UTIL_SetSize( pev, vecMin, vecMax );
}

void CCycler::Spawn()
{
	InitBoneControllers();
	pev->solid		= SOLID_SLIDEBOX;
	pev->movetype		= MOVETYPE_NONE;
	pev->takedamage		= DAMAGE_YES;
	pev->effects		= 0;
	pev->health		= 80000;// no cycler should die
	pev->yaw_speed		= 5;
	pev->ideal_yaw		= pev->angles.y;
	ChangeYaw( 360 );

	m_flFrameRate		= 75;
	m_flGroundSpeed		= 0;

	pev->nextthink		+= 1.0f;

	ResetSequenceInfo();

	if( pev->sequence != 0 || pev->frame != 0 )
	{
		m_animate = 0;
		pev->framerate = 0;
	}
	else
	{
		m_animate = 1;
	}
}

//
// cycler think
//
void CCycler::Think( void )
{
	pev->nextthink = gpGlobals->time + 0.1f;

	if( m_animate )
	{
		StudioFrameAdvance();
	}
	if( m_fSequenceFinished && !m_fSequenceLoops )
	{
		// ResetSequenceInfo();
		// hack to avoid reloading model every frame
		pev->animtime = gpGlobals->time;
		pev->framerate = 1.0;
		m_fSequenceFinished = FALSE;
		m_flLastEventCheck = gpGlobals->time;
		pev->frame = 0;
		if( !m_animate )
			pev->framerate = 0.0f;	// FIX: don't reset framerate
	}
}

//
// CyclerUse - starts a rotation trend
//
void CCycler::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	m_animate = !m_animate;
	if( m_animate )
		pev->framerate = 1.0f;
	else
		pev->framerate = 0.0f;
}

//
// CyclerPain , changes sequences when shot
//
//void CCycler::Pain( float flDamage )
int CCycler::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( m_animate )
	{
		pev->sequence++;

		ResetSequenceInfo();

		if( m_flFrameRate == 0.0f )
		{
			pev->sequence = 0;
			ResetSequenceInfo();
		}
		pev->frame = 0;
	}
	else
	{
		pev->framerate = 1.0f;
		StudioFrameAdvance( 0.1f );
		pev->framerate = 0;
		ALERT( at_console, "sequence: %d, frame %.0f\n", pev->sequence, (double)pev->frame );
	}

	return 0;
}
#endif

class CCyclerSprite : public CBaseAnimating
{
public:
	CCyclerSprite();

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Think( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	virtual int ObjectCaps( void ) { return ( CBaseEntity :: ObjectCaps() | FCAP_DONT_SAVE | FCAP_IMPULSE_USE ); }
	virtual int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	void Animate( float frames );
	void PlayConfiguredSequence( BOOL state );

	virtual int Save( CSave &save );
	virtual int Restore( CRestore &restore );
	static TYPEDESCRIPTION m_SaveData[];

	inline int ShouldAnimate( void )
	{
		return m_animate && m_maxFrame > 1.0f;
	}

	int m_animate;
	float m_lastTime;
	float m_maxFrame;
	BOOL m_isStudioModel;
	BOOL m_state;
	int m_iActionOn;
	int m_iActionOff;
	int m_iCurrentAction;
	string_t m_iszSequenceOn;
	string_t m_iszSequenceOff;
};

LINK_ENTITY_TO_CLASS( cycler_sprite, CCyclerSprite )
LINK_ENTITY_TO_CLASS( env_model, CCyclerSprite )

TYPEDESCRIPTION	CCyclerSprite::m_SaveData[] =
{
	DEFINE_FIELD( CCyclerSprite, m_animate, FIELD_INTEGER ),
	DEFINE_FIELD( CCyclerSprite, m_lastTime, FIELD_TIME ),
	DEFINE_FIELD( CCyclerSprite, m_maxFrame, FIELD_FLOAT ),
	DEFINE_FIELD( CCyclerSprite, m_isStudioModel, FIELD_BOOLEAN ),
	DEFINE_FIELD( CCyclerSprite, m_state, FIELD_BOOLEAN ),
	DEFINE_FIELD( CCyclerSprite, m_iActionOn, FIELD_INTEGER ),
	DEFINE_FIELD( CCyclerSprite, m_iActionOff, FIELD_INTEGER ),
	DEFINE_FIELD( CCyclerSprite, m_iCurrentAction, FIELD_INTEGER ),
	DEFINE_FIELD( CCyclerSprite, m_iszSequenceOn, FIELD_STRING ),
	DEFINE_FIELD( CCyclerSprite, m_iszSequenceOff, FIELD_STRING ),
};

IMPLEMENT_SAVERESTORE( CCyclerSprite, CBaseAnimating )

CCyclerSprite::CCyclerSprite() :
	m_animate( 1 ),
	m_lastTime( 0.0f ),
	m_maxFrame( 0.0f ),
	m_isStudioModel( FALSE ),
	m_state( FALSE ),
	m_iActionOn( 1 ),
	m_iActionOff( 1 ),
	m_iCurrentAction( 1 ),
	m_iszSequenceOn( iStringNull ),
	m_iszSequenceOff( iStringNull )
{
}

void CCyclerSprite::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "m_iszSequence_On" ) )
	{
		m_iszSequenceOn = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iszSequence_Off" ) )
	{
		m_iszSequenceOff = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iAction_On" ) )
	{
		m_iActionOn = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iAction_Off" ) )
	{
		m_iActionOff = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_fFramerate" ) )
	{
		const float flFramerate = atof( pkvd->szValue );
		if( flFramerate >= 0.0f )
			pev->framerate = flFramerate;
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "movewith" ) ||
		FStrEq( pkvd->szKeyName, "m_fTurnType" ) ||
		FStrEq( pkvd->szKeyName, "m_fMoveTo" ) ||
		FStrEq( pkvd->szKeyName, "m_fRepeatFrame" ) ||
		FStrEq( pkvd->szKeyName, "m_iRepeats" ) ||
		FStrEq( pkvd->szKeyName, "m_iFinishSchedule" ) ||
		FStrEq( pkvd->szKeyName, "m_iPriority" ) ||
		FStrEq( pkvd->szKeyName, "chestnums" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseAnimating::KeyValue( pkvd );
}

void CCyclerSprite::Spawn( void )
{
	pev->solid		= SOLID_SLIDEBOX;
	pev->movetype		= MOVETYPE_NONE;
	pev->takedamage		= DAMAGE_YES;
	pev->effects		= 0;

	pev->frame		= 0;
	pev->nextthink		= gpGlobals->time + 0.1f;
	m_animate		= 1;
	m_lastTime		= gpGlobals->time;
	if( pev->framerate == 0.0f )
		pev->framerate = 1.0f;

	PRECACHE_MODEL( STRING( pev->model ) );
	SET_MODEL( ENT( pev ), STRING( pev->model ) );

	const char *pszModel = STRING( pev->model );
	const char *pszExt = strrchr( pszModel, '.' );
	m_isStudioModel = pszExt && !stricmp( pszExt, ".mdl" );

	if( m_isStudioModel )
	{
		InitBoneControllers();

		if( FClassnameIs( pev, "env_model" ) )
			m_state = !FBitSet( pev->spawnflags, 1 );

		PlayConfiguredSequence( m_state );
	}
	else
		m_maxFrame = (float)MODEL_FRAMES( pev->modelindex ) - 1;
}

void CCyclerSprite::Think( void )
{
	if( m_isStudioModel )
	{
		if( m_animate )
			StudioFrameAdvance();

		if( m_fSequenceFinished && !m_fSequenceLoops )
		{
			if( m_iCurrentAction == 2 )
			{
				m_state = !m_state;
				PlayConfiguredSequence( m_state );
			}
			else if( m_iCurrentAction == 1 )
			{
				pev->frame = 0;
				ResetSequenceInfo();
			}
			else
			{
				m_animate = 0;
				pev->framerate = 0.0f;
			}
		}
	}
	else if( ShouldAnimate() )
		Animate( pev->framerate * ( gpGlobals->time - m_lastTime ) );

	pev->nextthink = gpGlobals->time + 0.1f;
	m_lastTime = gpGlobals->time;
}

void CCyclerSprite::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( m_isStudioModel )
	{
		if( useType == USE_ON )
			m_state = TRUE;
		else if( useType == USE_OFF )
			m_state = FALSE;
		else
			m_state = !m_state;

		PlayConfiguredSequence( m_state );
	}
	else
		m_animate = !m_animate;
}

int CCyclerSprite::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( m_isStudioModel )
	{
		pev->sequence++;
		ResetSequenceInfo();
		if( m_flFrameRate == 0.0f )
		{
			pev->sequence = 0;
			ResetSequenceInfo();
		}
		pev->frame = 0;
	}
	else if( m_maxFrame > 1.0f )
	{
		Animate( 1.0f );
	}
	return 1;
}

void CCyclerSprite::PlayConfiguredSequence( BOOL state )
{
	if( !m_isStudioModel )
		return;

	m_iCurrentAction = state ? m_iActionOn : m_iActionOff;
	string_t iszSequence = state ? m_iszSequenceOn : m_iszSequenceOff;

	if( FStringNull( iszSequence ) )
		iszSequence = !FStringNull( m_iszSequenceOn ) ? m_iszSequenceOn : m_iszSequenceOff;

	if( !FStringNull( iszSequence ) )
	{
		const int sequence = LookupSequence( STRING( iszSequence ) );
		if( sequence >= 0 )
			pev->sequence = sequence;
	}

	pev->frame = 0;
	pev->framerate = 1.0f;
	m_animate = 1;
	ResetSequenceInfo();
}

void CCyclerSprite::Animate( float frames )
{ 
	pev->frame += frames;
	if( m_maxFrame > 0 )
		pev->frame = fmod( pev->frame, m_maxFrame );
}

class CWeaponCycler : public CBasePlayerWeapon
{
public:
	void Spawn( void );
	int iItemSlot( void ) { return 1; }
	int GetItemInfo(ItemInfo *p) {return 0; }

	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy( void );
	void Holster( int skiplocal = 0 );
	int m_iszModel;
	int m_iModel;
};

LINK_ENTITY_TO_CLASS( cycler_weapon, CWeaponCycler )

void CWeaponCycler::Spawn()
{
	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_NONE;

	PRECACHE_MODEL( STRING( pev->model ) );
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	m_iszModel = pev->model;
	m_iModel = pev->modelindex;

	UTIL_SetOrigin( pev, pev->origin );
	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 16 ) );
	SetTouch( &CBasePlayerItem::DefaultTouch );
}

BOOL CWeaponCycler::Deploy()
{
	m_pPlayer->pev->viewmodel = m_iszModel;
	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 1.0f;
	SendWeaponAnim( 0 );
	m_iClip = 0;
	return TRUE;
}

void CWeaponCycler::Holster( int skiplocal /* = 0 */ )
{
	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 0.5f;
}

void CWeaponCycler::PrimaryAttack()
{
	SendWeaponAnim( pev->sequence );

	m_flNextPrimaryAttack = gpGlobals->time + 0.3f;
}

void CWeaponCycler::SecondaryAttack( void )
{
	float flFrameRate, flGroundSpeed;

	pev->sequence = ( pev->sequence + 1 ) % 8;

	pev->modelindex = m_iModel;
	void *pmodel = GET_MODEL_PTR( ENT( pev ) );
	GetSequenceInfo( pmodel, pev, &flFrameRate, &flGroundSpeed );
	pev->modelindex = 0;

	if( flFrameRate == 0.0f )
	{
		pev->sequence = 0;
	}

	SendWeaponAnim( pev->sequence );

	m_flNextSecondaryAttack = gpGlobals->time + 0.3f;
}

// Flaming Wreakage
class CWreckage : public CBaseMonster
{
	int Save( CSave &save );
	int Restore( CRestore &restore );
	static TYPEDESCRIPTION m_SaveData[];

	void Spawn( void );
	void Precache( void );
	void Think( void );

	int m_flStartTime;
};

TYPEDESCRIPTION	CWreckage::m_SaveData[] =
{
	DEFINE_FIELD( CWreckage, m_flStartTime, FIELD_TIME ),
};

IMPLEMENT_SAVERESTORE( CWreckage, CBaseMonster )

LINK_ENTITY_TO_CLASS( cycler_wreckage, CWreckage )

void CWreckage::Spawn( void )
{
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NONE;
	pev->takedamage = 0;
	pev->effects = 0;

	pev->frame = 0;
	pev->nextthink = gpGlobals->time + 0.1f;

	if( pev->model )
	{
		PRECACHE_MODEL( STRING( pev->model ) );
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
	}
	// pev->scale = 5.0;

	m_flStartTime = (int)gpGlobals->time;
}

void CWreckage::Precache()
{
	if( pev->model )
		PRECACHE_MODEL( STRING( pev->model ) );
}

void CWreckage::Think( void )
{
	StudioFrameAdvance();
	pev->nextthink = gpGlobals->time + 0.2f;

	if( pev->dmgtime )
	{
		if( pev->dmgtime < gpGlobals->time )
		{
			UTIL_Remove( this );
			return;
		}
		else if( RANDOM_FLOAT( 0, pev->dmgtime - m_flStartTime ) > pev->dmgtime - gpGlobals->time )
		{
			return;
		}
	}

	Vector VecSrc;

	VecSrc.x = RANDOM_FLOAT( pev->absmin.x, pev->absmax.x );
	VecSrc.y = RANDOM_FLOAT( pev->absmin.y, pev->absmax.y );
	VecSrc.z = RANDOM_FLOAT( pev->absmin.z, pev->absmax.z );

	MESSAGE_BEGIN( MSG_PVS, SVC_TEMPENTITY, VecSrc );
		WRITE_BYTE( TE_SMOKE );
		WRITE_COORD( VecSrc.x );
		WRITE_COORD( VecSrc.y );
		WRITE_COORD( VecSrc.z );
		WRITE_SHORT( g_sModelIndexSmoke );
		WRITE_BYTE( RANDOM_LONG( 0,49 ) + 50 ); // scale * 10
		WRITE_BYTE( RANDOM_LONG( 0, 3 ) + 8  ); // framerate
	MESSAGE_END();
}
