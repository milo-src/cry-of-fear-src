/***
*
*   Cry of Fear compatibility entities.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "cof_utils.h"
class CCOFLadderManager : public CBaseDelay
{
public:
	CCOFLadderManager() : m_iszTopEnt( iStringNull ), m_iszBottomEnt( iStringNull ) {}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFLadderManager::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	string_t m_iszTopEnt;
	string_t m_iszBottomEnt;
};

LINK_ENTITY_TO_CLASS( cof_ladder_manager, CCOFLadderManager )

void CCOFLadderManager::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "topent" ) )
	{
		m_iszTopEnt = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "bottoment" ) )
	{
		m_iszBottomEnt = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "animation1" ) ||
		FStrEq( pkvd->szKeyName, "animation2" ) ||
		FStrEq( pkvd->szKeyName, "animation3" ) ||
		FStrEq( pkvd->szKeyName, "customond" ) ||
		FStrEq( pkvd->szKeyName, "customoffd" ) ||
		FStrEq( pkvd->szKeyName, "descendoffset" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFLadderManager::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( !pPlayer )
		return;

	const BOOL fromBottom = value < 0.5f;
	string_t iszDestination = fromBottom ? m_iszTopEnt : m_iszBottomEnt;
	if( !COF_HasText( iszDestination ) )
		return;

	CBaseEntity *pDest = UTIL_FindEntityByTargetname( NULL, STRING( iszDestination ) );
	if( !pDest )
		return;

	pPlayer->pev->velocity = g_vecZero;
	pPlayer->pev->basevelocity = g_vecZero;
	UTIL_SetOrigin( pPlayer->pev, pDest->pev->origin );
	pPlayer->pev->angles = pDest->pev->angles;
	pPlayer->pev->v_angle = pDest->pev->angles;
	pPlayer->pev->fixangle = TRUE;
}

class CCOFLadderUse : public CBaseDelay
{
public:
	CCOFLadderUse() : m_flNextUse( 0.0f ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "iuser1" ) )
		{
			pev->iuser1 = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		COF_InitBrushTrigger( this );
		SetUse( &CCOFLadderUse::Use );
	}

	int ObjectCaps( void ) { return ( CBaseDelay::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( gpGlobals->time < m_flNextUse || !pActivator || !pActivator->IsPlayer() )
			return;

		m_flNextUse = gpGlobals->time + 0.5f;

		if( COF_HasText( pev->target ) )
		{
			CBaseEntity *pManager = UTIL_FindEntityByTargetname( NULL, STRING( pev->target ) );
			if( pManager )
				pManager->Use( pActivator, this, USE_SET, (float)pev->iuser1 );
		}
	}

	float m_flNextUse;
};

LINK_ENTITY_TO_CLASS( cof_ladder_manager_use, CCOFLadderUse )

