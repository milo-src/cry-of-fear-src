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
class CCOFPointUseTargets : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFPointUseTargets::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

class CCOFSpawnPointOnOff : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFSpawnPointOnOff::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( pev->message ) )
		{
			CBaseEntity *pEntity = NULL;
			while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->message ) ) ) != NULL )
			{
				if( pev->iuser1 || useType == USE_OFF )
					pEntity->pev->effects |= EF_NODRAW;
				else
					pEntity->pev->effects &= ~EF_NODRAW;
			}
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

class CCOFWeaponTrigger : public CBaseDelay
{
public:
	CCOFWeaponTrigger() : m_iszFailTarget( iStringNull ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "noise" ) )
		{
			m_iszFailTarget = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFWeaponTrigger::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( COF_HasText( pev->message ) && !COF_PlayerHasToken( pPlayer, pev->message ) )
		{
			if( COF_HasText( m_iszFailTarget ) )
				FireTargets( STRING( m_iszFailTarget ), pActivator, this, USE_TOGGLE, 0 );
			return;
		}

		SUB_UseTargets( pActivator, useType, value );
	}

	string_t m_iszFailTarget;
};

class CCOFYesNo : public CBaseDelay
{
public:
	CCOFYesNo() :
		m_iszRequiredWeapon( iStringNull ),
		m_iszNoTarget( iStringNull ),
		m_iszNoItemMessage( iStringNull )
	{
	}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "weaponneed" ) )
		{
			m_iszRequiredWeapon = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "notrigger" ) )
		{
			m_iszNoTarget = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "noitemmsg" ) )
		{
			m_iszNoItemMessage = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFYesNo::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( COF_HasText( m_iszRequiredWeapon ) && !COF_PlayerHasToken( pPlayer, m_iszRequiredWeapon ) )
		{
			COF_ShowText( pActivator, m_iszNoItemMessage );
			if( COF_HasText( m_iszNoTarget ) )
				FireTargets( STRING( m_iszNoTarget ), pActivator, this, USE_TOGGLE, 0 );
			return;
		}

		SUB_UseTargets( pActivator, useType, value );
	}

	string_t m_iszRequiredWeapon;
	string_t m_iszNoTarget;
	string_t m_iszNoItemMessage;
};

class CCOFMaxHealthChange : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFMaxHealthChange::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer && pev->impulse > 0 )
		{
			float flMaxHealth = 100.0f;
			if( pev->impulse == 1 )
				flMaxHealth = 50.0f;
			else if( pev->impulse == 2 )
				flMaxHealth = 75.0f;

			pPlayer->pev->max_health = flMaxHealth;
			if( pPlayer->pev->health > flMaxHealth )
				pPlayer->pev->health = flMaxHealth;
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

class CCOFWatcher : public CBaseDelay
{
public:
	CCOFWatcher() : m_iszWatch( iStringNull ), m_fSawTarget( FALSE ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "m_iszWatch" ) )
		{
			m_iszWatch = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFWatcher::Use );
		SetThink( &CCOFWatcher::WatchThink );
		pev->nextthink = gpGlobals->time + 0.25f;
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		WatchThink();
	}

	void EXPORT WatchThink( void )
	{
		pev->nextthink = gpGlobals->time + 0.25f;

		if( !COF_HasText( m_iszWatch ) )
			return;

		CBaseEntity *pWatched = UTIL_FindEntityByTargetname( NULL, STRING( m_iszWatch ) );
		if( pWatched )
		{
			m_fSawTarget = TRUE;
			if( pWatched->pev->deadflag == DEAD_NO && pWatched->pev->solid != SOLID_NOT )
				return;
		}
		else if( !m_fSawTarget )
		{
			return;
		}

		SUB_UseTargets( this, USE_TOGGLE, 0 );
		UTIL_Remove( this );
	}

	string_t m_iszWatch;
	BOOL m_fSawTarget;
};

LINK_ENTITY_TO_CLASS( cof_begingame, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_spawnpointonoff, CCOFSpawnPointOnOff )
LINK_ENTITY_TO_CLASS( cof_keypad, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_playerbreathetoggle, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_phonedisable, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_logo, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( info_roofboss_target, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_coop_stats, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_coopgameover, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_survivalmode, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_doctorweaponset, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_doctorweapontrigger, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_maxhealthchange, CCOFMaxHealthChange )
LINK_ENTITY_TO_CLASS( cof_customiseplayer, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_ending, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_introduction, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_lookat, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_yesno, CCOFYesNo )
LINK_ENTITY_TO_CLASS( cof_addcodenote, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_entityrestore, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_computer, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_randomtimedspawner, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_strangle, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( watcher, CCOFWatcher )
LINK_ENTITY_TO_CLASS( cof_lobby_start, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_startdoctormode, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_stats, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_telescope_camera, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_updatekeypad, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_weapontrigger, CCOFWeaponTrigger )
LINK_ENTITY_TO_CLASS( boat_exit, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_closeallvgui, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_cracker, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_difficultysettings, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_entteleport, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_gamemenu, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_goodpoints, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_goodpointstrigger, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_keypad2, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_keypad3, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_keypad4, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_lensflare, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_loadgame, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_phonecheck, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_puzzlebar, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_puzzlebar2, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_puzzlebar3, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_puzzlebar4, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_puzzlebar5, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_stopwheelchair, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_telephone, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_telescope, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_unlockables, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( cof_wheelchairmode, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( statue_puzzle_complete, CCOFPointUseTargets )
