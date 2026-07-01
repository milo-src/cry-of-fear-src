/***
*
*   Cry of Fear brush and trigger compatibility entities.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "cof_utils.h"

extern Vector VecBModelOrigin( entvars_t *pevBModel );
class CCOFTriggerSwitch : public CBaseDelay
{
public:
	CCOFTriggerSwitch() : m_fEnable( TRUE ) {}

	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFTriggerSwitch::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	BOOL m_fEnable;
};

class CCOFTriggerOn : public CCOFTriggerSwitch
{
public:
	CCOFTriggerOn() { m_fEnable = TRUE; }
};

class CCOFTriggerOff : public CCOFTriggerSwitch
{
public:
	CCOFTriggerOff() { m_fEnable = FALSE; }
};

LINK_ENTITY_TO_CLASS( cof_triggeron, CCOFTriggerOn )
LINK_ENTITY_TO_CLASS( cof_triggeroff, CCOFTriggerOff )

void CCOFTriggerSwitch::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( !COF_HasText( pev->target ) )
		return;

	CBaseEntity *pEntity = NULL;
	while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->target ) ) ) != NULL )
	{
		if( m_fEnable )
			pEntity->pev->solid = SOLID_TRIGGER;
		else
			pEntity->pev->solid = SOLID_NOT;

		UTIL_SetOrigin( pEntity->pev, pEntity->pev->origin );
	}
}

class CCOFTriggerCheckBrush : public CBaseDelay
{
public:
	CCOFTriggerCheckBrush() :
		m_iszUseSound( iStringNull ),
		m_iszLockedSound( iStringNull ),
		m_iszLockedMessage( iStringNull ),
		m_iszUnlockedSound( iStringNull ),
		m_iszUnlockedMessage( iStringNull ),
		m_iszLockedBy( iStringNull ),
		m_flCheckDelay( 0.0f ),
		m_flNextUse( 0.0f )
	{
	}

	void Precache( void );
	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	int ObjectCaps( void ) { return ( CBaseDelay::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	string_t m_iszUseSound;
	string_t m_iszLockedSound;
	string_t m_iszLockedMessage;
	string_t m_iszUnlockedSound;
	string_t m_iszUnlockedMessage;
	string_t m_iszLockedBy;
	float m_flCheckDelay;
	float m_flNextUse;
};

LINK_ENTITY_TO_CLASS( trigger_checkbrush, CCOFTriggerCheckBrush )

void CCOFTriggerCheckBrush::Precache( void )
{
	if( COF_HasText( m_iszUseSound ) )
		PRECACHE_SOUND( STRING( m_iszUseSound ) );
	if( COF_HasText( m_iszLockedSound ) )
		PRECACHE_SOUND( STRING( m_iszLockedSound ) );
	if( COF_HasText( m_iszUnlockedSound ) )
		PRECACHE_SOUND( STRING( m_iszUnlockedSound ) );
}

void CCOFTriggerCheckBrush::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "usesound" ) )
	{
		m_iszUseSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "lockedsnd" ) )
	{
		m_iszLockedSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "lockedmsg" ) )
	{
		m_iszLockedMessage = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "unlockedsnd" ) )
	{
		m_iszUnlockedSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "unlockedmsg" ) )
	{
		m_iszUnlockedMessage = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "lockedby" ) )
	{
		m_iszLockedBy = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "checkdelay" ) )
	{
		m_flCheckDelay = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "opensound" ) ||
		FStrEq( pkvd->szKeyName, "closesound" ) ||
		FStrEq( pkvd->szKeyName, "doortype" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFTriggerCheckBrush::Spawn( void )
{
	Precache();
	pev->movetype = MOVETYPE_NONE;
	pev->solid = SOLID_TRIGGER;
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	SetBits( pev->effects, EF_NODRAW );
	SetUse( &CCOFTriggerCheckBrush::Use );
}

void CCOFTriggerCheckBrush::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( gpGlobals->time < m_flNextUse )
		return;

	m_flNextUse = gpGlobals->time + ( m_flCheckDelay > 0.0f ? m_flCheckDelay : 0.25f );
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );

	if( COF_HasText( m_iszLockedBy ) && !COF_PlayerHasToken( pPlayer, m_iszLockedBy ) )
	{
		COF_EmitOptionalSound( edict(), m_iszLockedSound );
		COF_ShowText( pActivator, m_iszLockedMessage );
		return;
	}

	COF_EmitOptionalSound( edict(), m_iszUseSound );
	COF_EmitOptionalSound( edict(), m_iszUnlockedSound );
	COF_ShowText( pActivator, pev->message );
	COF_ShowText( pActivator, m_iszUnlockedMessage );
	SUB_UseTargets( pActivator, useType, value );
}

class CCOFFuncValve : public CCOFTriggerCheckBrush
{
public:
	void Spawn( void ) { CCOFTriggerCheckBrush::Spawn(); }
};

LINK_ENTITY_TO_CLASS( func_valve, CCOFFuncValve )

class CCOFFuncStairs : public CBaseEntity
{
public:
	void Spawn( void )
	{
		pev->angles = g_vecZero;
		pev->movetype = MOVETYPE_NONE;
		pev->solid = SOLID_TRIGGER;
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
		SetBits( pev->effects, EF_NODRAW );
	}

	int ObjectCaps( void ) { return CBaseEntity::ObjectCaps() & ~FCAP_ACROSS_TRANSITION; }
};

LINK_ENTITY_TO_CLASS( func_stairs, CCOFFuncStairs )

class CCOFTriggerSound : public CBaseDelay
{
public:
	CCOFTriggerSound() : m_iRoomType( 0 ), m_flNextTouch( 0.0f ) {}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void EXPORT Touch( CBaseEntity *pOther );

	int m_iRoomType;
	float m_flNextTouch;
};

LINK_ENTITY_TO_CLASS( trigger_sound, CCOFTriggerSound )

void CCOFTriggerSound::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "roomtype" ) )
	{
		m_iRoomType = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFTriggerSound::Spawn( void )
{
	pev->solid = SOLID_TRIGGER;
	pev->movetype = MOVETYPE_NONE;
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	SetBits( pev->effects, EF_NODRAW );
	SetTouch( &CCOFTriggerSound::Touch );
}

void CCOFTriggerSound::Touch( CBaseEntity *pOther )
{
	if( !pOther || !pOther->IsPlayer() || gpGlobals->time < m_flNextTouch )
		return;

	m_flNextTouch = gpGlobals->time + 0.4f;
	MESSAGE_BEGIN( MSG_ONE, SVC_ROOMTYPE, NULL, pOther->edict() );
		WRITE_SHORT( (short)m_iRoomType );
	MESSAGE_END();

	SUB_UseTargets( pOther, USE_TOGGLE, 0 );
}

class CCOFBrushTrigger : public CBaseDelay
{
public:
	CCOFBrushTrigger() : m_flNextFire( 0.0f ) {}

	void Spawn( void )
	{
		COF_InitBrushTrigger( this );
		SetTouch( &CCOFBrushTrigger::Touch );
		SetUse( &CCOFBrushTrigger::Use );
	}

	int ObjectCaps( void ) { return ( CBaseDelay::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
	void EXPORT Touch( CBaseEntity *pOther )
	{
		if( !pOther || !pOther->IsPlayer() || gpGlobals->time < m_flNextFire )
			return;

		m_flNextFire = gpGlobals->time + 0.25f;
		SUB_UseTargets( pOther, USE_TOGGLE, 0 );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}

	float m_flNextFire;
};

LINK_ENTITY_TO_CLASS( func_fogfield, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( trigger_statueuse, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( func_coopallplayersbutton, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( cof_doctorshoot, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( cof_barshoot, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( func_asylumlookat, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( cof_puzzlebarbutton, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( trigger_booksimon, CCOFBrushTrigger )
LINK_ENTITY_TO_CLASS( func_shine, CCOFBrushTrigger )

class CCOFSuicideTrigger : public CCOFBrushTrigger
{
public:
	void Spawn( void )
	{
		COF_InitBrushTrigger( this );
		SetTouch( &CCOFSuicideTrigger::Touch );
		SetUse( &CCOFBrushTrigger::Use );
	}

	void EXPORT Touch( CBaseEntity *pOther )
	{
		if( !pOther || !pOther->IsPlayer() )
			return;

		pOther->TakeDamage( pev, pev, 10000.0f, DMG_GENERIC );
		SUB_UseTargets( pOther, USE_TOGGLE, 0 );
	}
};

LINK_ENTITY_TO_CLASS( trigger_suicide, CCOFSuicideTrigger )

class CCOFSubwayWall : public CBaseDelay
{
public:
	CCOFSubwayWall() :
		m_iHitsRequired( 1 ),
		m_iHits( 0 ),
		m_iszHitSound( iStringNull ),
		m_iszBreakSound( iStringNull )
	{
	}

	void KeyValue( KeyValueData *pkvd );
	void Precache( void );
	void Spawn( void );
	int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	int ObjectCaps( void ) { return CBaseDelay::ObjectCaps() & ~FCAP_ACROSS_TRANSITION; }

	int m_iHitsRequired;
	int m_iHits;
	string_t m_iszHitSound;
	string_t m_iszBreakSound;
};

LINK_ENTITY_TO_CLASS( trigger_subwaywall, CCOFSubwayWall )

void CCOFSubwayWall::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "frags" ) )
	{
		m_iHitsRequired = Q_max( 1, atoi( pkvd->szValue ) );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "noise1" ) )
	{
		m_iszHitSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "noise2" ) )
	{
		m_iszBreakSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFSubwayWall::Precache( void )
{
	if( COF_HasText( m_iszHitSound ) )
		PRECACHE_SOUND( STRING( m_iszHitSound ) );
	if( COF_HasText( m_iszBreakSound ) )
		PRECACHE_SOUND( STRING( m_iszBreakSound ) );
}

void CCOFSubwayWall::Spawn( void )
{
	Precache();
	pev->angles = g_vecZero;
	pev->movetype = MOVETYPE_PUSH;
	pev->solid = SOLID_BSP;
	pev->takedamage = DAMAGE_YES;
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
}

int CCOFSubwayWall::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	m_iHits++;

	if( m_iHits < m_iHitsRequired )
	{
		COF_EmitOptionalSound( edict(), m_iszHitSound, CHAN_BODY );
		COF_ShowText( CBaseEntity::Instance( pevAttacker ), pev->message );
		return 1;
	}

	COF_EmitOptionalSound( edict(), m_iszBreakSound, CHAN_BODY );
	SUB_UseTargets( CBaseEntity::Instance( pevAttacker ), USE_TOGGLE, 0 );
	UTIL_Remove( this );
	return 1;
}

