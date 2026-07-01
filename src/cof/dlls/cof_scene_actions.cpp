/***
*
*   Cry of Fear scripted scene helpers.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "scripted.h"
#include "cof_utils.h"

class CCOFCalcPosition : public CBaseDelay
{
public:
	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFCalcPosition::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( calc_position, CCOFCalcPosition )

static CBaseEntity *COF_FindSceneReference( string_t iszName, CBaseEntity *pActivator )
{
	if( !COF_HasText( iszName ) )
		return pActivator;

	const char *pszName = STRING( iszName );
	if( !stricmp( pszName, "*locus" ) || !stricmp( pszName, "!activator" ) )
		return pActivator;

	CBaseEntity *pEntity = COF_FindEntityByNameOrClass( pszName );
	if( pEntity )
		return pEntity;

	return pActivator;
}

static void COF_CalcSceneTransform( CBaseEntity *pCalc, CBaseEntity *pActivator, Vector &vecOrigin, Vector &vecAngles )
{
	vecOrigin = pCalc ? pCalc->pev->origin : g_vecZero;
	vecAngles = pCalc ? pCalc->pev->angles : g_vecZero;

	if( !pCalc )
		return;

	CBaseEntity *pReference = COF_FindSceneReference( pCalc->pev->netname, pActivator );
	if( pReference )
	{
		vecOrigin = pReference->pev->origin;
		vecAngles = pReference->pev->angles;
	}

	if( COF_HasText( pCalc->pev->message ) )
		vecOrigin = vecOrigin + COF_ParseVector( STRING( pCalc->pev->message ) );
}

class CCOFMotionManager : public CBaseDelay
{
public:
	CCOFMotionManager() : m_iszPosition( iStringNull ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "m_iszPosition" ) )
		{
			m_iszPosition = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFMotionManager::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( pev->target ) && COF_HasText( m_iszPosition ) )
		{
			CBaseEntity *pCalc = UTIL_FindEntityByTargetname( NULL, STRING( m_iszPosition ) );
			Vector vecOrigin, vecAngles;
			COF_CalcSceneTransform( pCalc, pActivator, vecOrigin, vecAngles );
			ApplyTransformToTargets( STRING( pev->target ), vecOrigin, vecAngles );
		}

		SUB_UseTargets( pActivator, useType, value );
	}

	void ApplyTransformToTargets( const char *pszTarget, const Vector &vecOrigin, const Vector &vecAngles )
	{
		BOOL fFound = FALSE;
		CBaseEntity *pTarget = NULL;
		while( ( pTarget = UTIL_FindEntityByTargetname( pTarget, pszTarget ) ) != NULL )
		{
			ApplyTransform( pTarget, vecOrigin, vecAngles );
			fFound = TRUE;
		}

		if( fFound )
			return;

		pTarget = NULL;
		while( ( pTarget = UTIL_FindEntityByClassname( pTarget, pszTarget ) ) != NULL )
			ApplyTransform( pTarget, vecOrigin, vecAngles );
	}

	void ApplyTransform( CBaseEntity *pTarget, const Vector &vecOrigin, const Vector &vecAngles )
	{
		if( !pTarget )
			return;

		UTIL_SetOrigin( pTarget->pev, vecOrigin );
		pTarget->pev->angles = vecAngles;
		pTarget->pev->velocity = g_vecZero;
		pTarget->pev->avelocity = g_vecZero;
		pTarget->pev->effects |= EF_NOINTERP;
	}

	string_t m_iszPosition;
};

LINK_ENTITY_TO_CLASS( motion_manager, CCOFMotionManager )

class CCOFScriptedAction : public CCineMonster
{
public:
	CCOFScriptedAction() :
		m_iszAction( iStringNull ),
		m_iszAttack( iStringNull ),
		m_iszMoveTarget( iStringNull )
	{
	}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "m_fAction" ) )
		{
			m_iszAction = ALLOC_STRING( pkvd->szValue );
			m_iszPlay = m_iszAction;
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "m_iszAttack" ) )
		{
			m_iszAttack = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "m_iszMoveTarget" ) )
		{
			m_iszMoveTarget = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "m_fTurnType" ) ||
			FStrEq( pkvd->szKeyName, "m_iPriority" ) )
		{
			pkvd->fHandled = TRUE;
		}
		else
			CCineMonster::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		if( !COF_HasText( m_iszAction ) && COF_HasText( m_iszAttack ) )
			m_iszPlay = m_iszAttack;

		CCineMonster::Spawn();
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		ApplyMoveTarget();

		if( COF_HasText( m_iszAction ) )
			m_iszPlay = m_iszAction;

		CCineMonster::Use( pActivator, pCaller, useType, value );
	}

	void ApplyMoveTarget( void )
	{
		if( !COF_HasText( m_iszMoveTarget ) )
			return;

		CBaseEntity *pMoveTarget = COF_FindEntityByNameOrClass( STRING( m_iszMoveTarget ) );
		if( !pMoveTarget )
			return;

		UTIL_SetOrigin( pev, pMoveTarget->pev->origin );
		pev->angles = pMoveTarget->pev->angles;
	}

	string_t m_iszAction;
	string_t m_iszAttack;
	string_t m_iszMoveTarget;
};

LINK_ENTITY_TO_CLASS( scripted_action, CCOFScriptedAction )
