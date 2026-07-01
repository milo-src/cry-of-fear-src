/***
*
*   Cry of Fear ladder use trigger.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "cof_utils.h"

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

	int ObjectCaps( void )
	{
		return ( CBaseDelay::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE;
	}

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
