/***
*
*	Cry of Fear compatibility entities.
*
*	These are intentionally conservative implementations for map scripting.
*	They keep common CoF entity chains alive and emulate the parts that matter
*	for scenario flow while the full game-specific systems are rebuilt.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "schedule.h"
#include "player.h"
#include "weapons.h"
#include "shake.h"

extern Vector VecBModelOrigin( entvars_t *pevBModel );
extern int gmsgSetFOV;

static BOOL COF_HasText( string_t iszText )
{
	return !FStringNull( iszText ) && STRING( iszText )[0] != '\0';
}

static CBasePlayer *COF_PlayerFromEntity( CBaseEntity *pEntity )
{
	if( pEntity && pEntity->IsPlayer() )
		return (CBasePlayer *)pEntity;

	return (CBasePlayer *)UTIL_PlayerByIndex( 1 );
}

static void COF_ShowText( CBaseEntity *pActivator, string_t iszText )
{
	if( !COF_HasText( iszText ) )
		return;

	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer )
		UTIL_ShowMessage( STRING( iszText ), pPlayer );
	else
		UTIL_ShowMessageAll( STRING( iszText ) );
}

static void COF_EmitOptionalSound( edict_t *pEdict, string_t iszSound, int channel = CHAN_ITEM )
{
	if( COF_HasText( iszSound ) )
		EMIT_SOUND( pEdict, channel, STRING( iszSound ), 1.0f, ATTN_NORM );
}

static CBasePlayerItem *COF_FindPlayerItemByName( CBasePlayer *pPlayer, const char *pszClassname )
{
	if( !pPlayer || !pszClassname || !pszClassname[0] )
		return NULL;

	for( int i = 0; i < MAX_ITEM_TYPES; i++ )
	{
		CBasePlayerItem *pItem = pPlayer->m_rgpPlayerItems[i];
		while( pItem )
		{
			if( !stricmp( pszClassname, STRING( pItem->pev->classname ) ) )
				return pItem;
			pItem = pItem->m_pNext;
		}
	}

	return NULL;
}

static BOOL COF_RemovePlayerItemByName( CBasePlayer *pPlayer, const char *pszClassname )
{
	CBasePlayerItem *pItem = COF_FindPlayerItemByName( pPlayer, pszClassname );
	if( !pItem )
		return FALSE;

	if( pItem->m_iId >= 0 && pItem->m_iId < 32 )
		pPlayer->pev->weapons &= ~( 1 << pItem->m_iId );

	if( !pPlayer->RemovePlayerItem( pItem, TRUE ) )
		return FALSE;

	UTIL_Remove( pItem );
	return TRUE;
}

static BOOL COF_PlayerHasToken( CBasePlayer *pPlayer, string_t iszToken )
{
	if( !pPlayer || !COF_HasText( iszToken ) )
		return FALSE;

	const char *pszToken = STRING( iszToken );
	if( !stricmp( pszToken, "none" ) || !stricmp( pszToken, "0" ) )
		return TRUE;

	return pPlayer->COF_HasInventoryItem( pszToken ) || pPlayer->HasNamedPlayerItem( pszToken );
}

#define COF_MAX_SUBTITLE_LINES 768
#define COF_MAX_SUBTITLE_TEXT 192

static BOOL g_fCOFSubtitlesLoaded = FALSE;
static int g_iCOFSubtitleLines = 0;
static char g_szCOFSubtitles[COF_MAX_SUBTITLE_LINES][COF_MAX_SUBTITLE_TEXT];

static void COF_CleanSubtitleLine( char *pszLine )
{
	if( !pszLine )
		return;

	size_t len = strlen( pszLine );
	while( len > 0 && ( pszLine[len - 1] == '\r' || pszLine[len - 1] == '\n' || pszLine[len - 1] == ' ' || pszLine[len - 1] == '\t' || pszLine[len - 1] == '*' ) )
		pszLine[--len] = '\0';
}

static void COF_LoadSubtitles( void )
{
	if( g_fCOFSubtitlesLoaded )
		return;

	g_fCOFSubtitlesLoaded = TRUE;

	int length = 0;
	byte *pFile = LOAD_FILE_FOR_ME( "txtfiles/subtitles.txt", &length );
	if( !pFile || length <= 0 )
		return;

	int line = 0;
	int start = 0;
	while( start <= length && line < COF_MAX_SUBTITLE_LINES )
	{
		int end = start;
		while( end < length && pFile[end] != '\n' )
			end++;

		int copyLen = Q_min( end - start, COF_MAX_SUBTITLE_TEXT - 1 );
		if( copyLen < 0 )
			copyLen = 0;

		memcpy( g_szCOFSubtitles[line], pFile + start, copyLen );
		g_szCOFSubtitles[line][copyLen] = '\0';
		COF_CleanSubtitleLine( g_szCOFSubtitles[line] );

		line++;
		start = end + 1;
		if( end >= length )
			break;
	}

	g_iCOFSubtitleLines = line;
	FREE_FILE( pFile );
}

static const char *COF_GetSubtitleLine( int iLine )
{
	COF_LoadSubtitles();

	if( iLine < 0 || iLine >= g_iCOFSubtitleLines )
		return NULL;

	return g_szCOFSubtitles[iLine];
}

static void COF_ShowSubtitleLine( CBaseEntity *pActivator, int iLine )
{
	const char *pszLine = COF_GetSubtitleLine( iLine );
	if( !pszLine || !pszLine[0] )
		return;

	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer )
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, pszLine );
}

static void COF_SendMP3Command( const char *pszTrack )
{
	if( !pszTrack || !pszTrack[0] )
		return;

	for( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBasePlayer *pPlayer = (CBasePlayer *)UTIL_PlayerByIndex( i );
		if( !pPlayer )
			continue;

		if( !strnicmp( pszTrack, "mp3/", 4 ) )
			CLIENT_COMMAND( pPlayer->edict(), "mp3 play %s\n", pszTrack );
		else
			CLIENT_COMMAND( pPlayer->edict(), "mp3 play mp3/%s\n", pszTrack );
	}
}

static void COF_StopMP3( void )
{
	for( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBasePlayer *pPlayer = (CBasePlayer *)UTIL_PlayerByIndex( i );
		if( pPlayer )
			CLIENT_COMMAND( pPlayer->edict(), "mp3 stop\n" );
	}
}

static void COF_InitBrushTrigger( CBaseEntity *pEntity )
{
	pEntity->pev->movetype = MOVETYPE_NONE;
	pEntity->pev->solid = SOLID_TRIGGER;
	SET_MODEL( ENT( pEntity->pev ), STRING( pEntity->pev->model ) );
	SetBits( pEntity->pev->effects, EF_NODRAW );
}

static void COF_RunConsoleCommand( const char *pszCommand )
{
	if( !pszCommand || !pszCommand[0] )
		return;

	while( *pszCommand == ' ' || *pszCommand == '\t' )
		pszCommand++;

	if( !strnicmp( pszCommand, "map ", 4 ) || !strnicmp( pszCommand, "changelevel ", 12 ) )
	{
		const char *pszMap = strchr( pszCommand, ' ' );
		if( pszMap )
		{
			while( *pszMap == ' ' || *pszMap == '\t' )
				pszMap++;

			char szMap[64];
			int i = 0;
			while( pszMap[i] && pszMap[i] != ' ' && pszMap[i] != '\t' && pszMap[i] != '\n' && i < (int)sizeof( szMap ) - 1 )
			{
				szMap[i] = pszMap[i];
				i++;
			}
			szMap[i] = '\0';

			if( szMap[0] )
			{
				CHANGE_LEVEL( szMap, NULL );
				return;
			}
		}
	}

	char szCommand[256];
	snprintf( szCommand, sizeof( szCommand ), "%s\n", pszCommand );
	SERVER_COMMAND( szCommand );
}

static float COF_KeyFloat( KeyValueData *pkvd )
{
	return pkvd && pkvd->szValue ? atof( pkvd->szValue ) : 0.0f;
}

class CCOFFmodStream : public CBaseDelay
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( ambient_fmodstream, CCOFFmodStream )

void CCOFFmodStream::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetUse( &CCOFFmodStream::Use );
}

void CCOFFmodStream::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( useType == USE_OFF )
		COF_StopMP3();
	else if( COF_HasText( pev->message ) )
		COF_SendMP3Command( STRING( pev->message ) );

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFKillMP3 : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFKillMP3::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_StopMP3();
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_killmp3, CCOFKillMP3 )

class CCOFSimpleText : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFSimpleText::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_simpletext, CCOFSimpleText )
LINK_ENTITY_TO_CLASS( cof_chapter, CCOFSimpleText )
LINK_ENTITY_TO_CLASS( cof_blackandwhite, CCOFSimpleText )

class CCOFSubtitleMain : public CBaseDelay
{
public:
	CCOFSubtitleMain() : m_iLineNumber( -1 ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "linenumber" ) )
		{
			m_iLineNumber = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFSubtitleMain::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowSubtitleLine( pActivator, m_iLineNumber );
		SUB_UseTargets( pActivator, useType, value );
	}

	int m_iLineNumber;
};

class CCOFSubtitleLineChange : public CBaseDelay
{
public:
	CCOFSubtitleLineChange() : m_iLineChange( -1 ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "linechange" ) )
		{
			m_iLineChange = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFSubtitleLineChange::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowSubtitleLine( pActivator, m_iLineChange );
		SUB_UseTargets( pActivator, useType, value );
	}

	int m_iLineChange;
};

LINK_ENTITY_TO_CLASS( subtitle_main, CCOFSubtitleMain )
LINK_ENTITY_TO_CLASS( subtitle_linechange, CCOFSubtitleLineChange )
LINK_ENTITY_TO_CLASS( subtitle_multiple, CCOFSubtitleMain )

class CCOFObjective : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFObjective::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_objective, CCOFObjective )

class CCOFScreenEffect : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFScreenEffect::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_blur, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( cof_credits, CCOFScreenEffect )

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
LINK_ENTITY_TO_CLASS( scripted_action, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( motion_manager, CCOFPointUseTargets )
LINK_ENTITY_TO_CLASS( calc_position, CCOFPointUseTargets )
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

class CCOFClothesMenu : public CBaseDelay
{
public:
	CCOFClothesMenu() : m_iszSimonEnt( iStringNull ), m_iszCameraEnt( iStringNull ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "simonent" ) )
		{
			m_iszSimonEnt = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "cameraent" ) )
		{
			m_iszCameraEnt = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFClothesMenu::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( m_iszSimonEnt ) )
		{
			CBaseEntity *pSimon = UTIL_FindEntityByTargetname( NULL, STRING( m_iszSimonEnt ) );
			if( pSimon )
			{
				pSimon->pev->effects &= ~EF_NODRAW;
				pSimon->Use( pActivator, this, USE_ON, 1 );
			}
		}

		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer )
			ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Clothes menu is not available yet" );

		SUB_UseTargets( pActivator, useType, value );
	}

	string_t m_iszSimonEnt;
	string_t m_iszCameraEnt;
};

LINK_ENTITY_TO_CLASS( cof_clothesmenu, CCOFClothesMenu )

class CCOFDoorPropView : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFDoorPropView::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( door_prop_view, CCOFDoorPropView )

class CCOFMobileTrigger : public CBaseDelay
{
public:
	CCOFMobileTrigger() : m_iBodyNumber( -1 ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "bodynumber" ) )
		{
			m_iBodyNumber = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Precache( void )
	{
		PRECACHE_SOUND( "weapons/mobile/mobile_sms.wav" );
	}

	void Spawn( void )
	{
		Precache();
		pev->solid = SOLID_NOT;
		SetUse( &CCOFMobileTrigger::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer )
		{
			CBasePlayerItem *pMobile = COF_FindPlayerItemByName( pPlayer, "weapon_mobile" );
			if( pMobile && m_iBodyNumber >= 0 )
				pMobile->pev->body = m_iBodyNumber;

			EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/mobile/mobile_sms.wav", 0.9f, ATTN_NORM );
			ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "New SMS received" );
		}

		SUB_UseTargets( pActivator, useType, value );
	}

	int m_iBodyNumber;
};

LINK_ENTITY_TO_CLASS( trigger_cofmobile, CCOFMobileTrigger )

static const char *COF_DefaultStaticModelForClass( const char *pszClassname )
{
	if( !pszClassname )
		return NULL;

	if( !stricmp( pszClassname, "statue_eagle" ) ) return "models/Props/UtomhusD/eagle.mdl";
	if( !stricmp( pszClassname, "statue_horse" ) ) return "models/Props/UtomhusD/horse.mdl";
	if( !stricmp( pszClassname, "statue_lion" ) ) return "models/Props/UtomhusD/lion.mdl";
	if( !stricmp( pszClassname, "statue_owl" ) ) return "models/Props/UtomhusD/owl.mdl";
	if( !stricmp( pszClassname, "boat" ) ) return "models/boat.mdl";
	if( !stricmp( pszClassname, "cof_deadcat" ) ) return "models/Props/Blandat/dead_cat.mdl";

	return NULL;
}

class CCOFStaticPropCompat : public CBaseAnimating
{
public:
	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		pev->movetype = MOVETYPE_NONE;

		if( FStringNull( pev->model ) )
		{
			const char *pszModel = COF_DefaultStaticModelForClass( STRING( pev->classname ) );
			if( pszModel )
				pev->model = MAKE_STRING( pszModel );
		}

		if( COF_HasText( pev->model ) )
		{
			const char *pszModel = STRING( pev->model );
			if( !strnicmp( pszModel, "cryoffear/", 10 ) )
				pev->model = MAKE_STRING( pszModel + 10 );

			PRECACHE_MODEL( STRING( pev->model ) );
			SET_MODEL( ENT( pev ), STRING( pev->model ) );
		}

		InitBoneControllers();
		ResetSequenceInfo();
	}
};

LINK_ENTITY_TO_CLASS( statue_eagle, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_horse, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_lion, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_owl, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( boat, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( cof_deadcat, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( prop, CCOFStaticPropCompat )

class CCOFSpeedChange : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFSpeedChange::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( pev->target ) )
		{
			CBaseEntity *pEntity = NULL;
			while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->target ) ) ) != NULL )
			{
				if( pev->speed != 0 )
					pEntity->pev->speed = pev->speed;
			}
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_speedchange, CCOFSpeedChange )

class CCOFCameraZoom : public CBaseDelay
{
public:
	CCOFCameraZoom() : m_iZoomFOV( 0 ), m_flReturnTime( 0.0f ) {}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFCameraZoom::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT ReturnThink( void );

	int m_iZoomFOV;
	float m_flReturnTime;
	EHANDLE m_hPlayer;
};

LINK_ENTITY_TO_CLASS( cof_camerazoom, CCOFCameraZoom )

void CCOFCameraZoom::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "zoomfov" ) )
	{
		m_iZoomFOV = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "returntime" ) )
	{
		m_flReturnTime = COF_KeyFloat( pkvd );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "zoomtime" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFCameraZoom::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( !pPlayer )
		return;

	const int fov = Q_max( 0, Q_min( 120, m_iZoomFOV ) );
	pPlayer->pev->fov = pPlayer->m_iFOV = fov;
	pPlayer->m_iClientFOV = -1;

	MESSAGE_BEGIN( MSG_ONE, gmsgSetFOV, NULL, pPlayer->pev );
		WRITE_BYTE( fov );
	MESSAGE_END();

	m_hPlayer = pPlayer;
	if( m_flReturnTime > 0.0f )
	{
		SetThink( &CCOFCameraZoom::ReturnThink );
		pev->nextthink = gpGlobals->time + m_flReturnTime;
	}
}

void CCOFCameraZoom::ReturnThink( void )
{
	CBasePlayer *pPlayer = (CBasePlayer *)( (CBaseEntity *)m_hPlayer );
	if( pPlayer )
	{
		pPlayer->pev->fov = pPlayer->m_iFOV = 0;
		pPlayer->m_iClientFOV = -1;
		MESSAGE_BEGIN( MSG_ONE, gmsgSetFOV, NULL, pPlayer->pev );
			WRITE_BYTE( 0 );
		MESSAGE_END();
	}

	ResetThink();
}

class CCOFKillPlayer : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFKillPlayer::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer )
			pPlayer->TakeDamage( pev, pev, 10000.0f, DMG_GENERIC );

		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_killplayer, CCOFKillPlayer )

class CCOFPlayerFreeze : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFPlayerFreeze::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer )
		{
			if( useType == USE_ON )
				pPlayer->EnableControl( FALSE );
			else if( useType == USE_OFF )
				pPlayer->EnableControl( TRUE );
			else
				pPlayer->EnableControl( FBitSet( pPlayer->pev->flags, FL_FROZEN ) );
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( player_freeze, CCOFPlayerFreeze )

class CCOFCommand : public CBaseDelay
{
public:
	CCOFCommand() : m_iszCommand( iStringNull ) {}
	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "netname" ) )
		{
			m_iszCommand = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFCommand::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_RunConsoleCommand( COF_HasText( m_iszCommand ) ? STRING( m_iszCommand ) : STRING( pev->netname ) );
		SUB_UseTargets( pActivator, useType, value );
	}

	string_t m_iszCommand;
};

LINK_ENTITY_TO_CLASS( trigger_command, CCOFCommand )

class CCOFChangeValue : public CBaseDelay
{
public:
	CCOFChangeValue() : m_iszKey( iStringNull ), m_iszValue( iStringNull ) {}
	void KeyValue( KeyValueData *pkvd );
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFChangeValue::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	string_t m_iszKey;
	string_t m_iszValue;
};

LINK_ENTITY_TO_CLASS( trigger_changevalue, CCOFChangeValue )

void CCOFChangeValue::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "netname" ) )
	{
		m_iszKey = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iszNewValue" ) )
	{
		m_iszValue = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFChangeValue::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( !COF_HasText( pev->target ) || !COF_HasText( m_iszKey ) || !COF_HasText( m_iszValue ) )
		return;

	const char *pszKey = STRING( m_iszKey );
	const char *pszValue = STRING( m_iszValue );

	CBaseEntity *pEntity = NULL;
	while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->target ) ) ) != NULL )
	{
		if( FStrEq( pszKey, "body" ) )
			pEntity->pev->body = atoi( pszValue );
		else if( FStrEq( pszKey, "skin" ) )
			pEntity->pev->skin = atoi( pszValue );
		else if( FStrEq( pszKey, "frame" ) )
			pEntity->pev->frame = atof( pszValue );
		else if( FStrEq( pszKey, "framerate" ) )
			pEntity->pev->framerate = atof( pszValue );
		else
		{
			KeyValueData kvd;
			kvd.szClassName = (char *)STRING( pEntity->pev->classname );
			kvd.szKeyName = (char *)pszKey;
			kvd.szValue = (char *)pszValue;
			kvd.fHandled = FALSE;
			DispatchKeyValue( pEntity->edict(), &kvd );
		}
	}

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFSimonspeak : public CBaseDelay
{
public:
	CCOFSimonspeak() : m_iszSound( iStringNull ) {}
	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "noise" ) )
		{
			m_iszSound = ALLOC_STRING( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else if( FStrEq( pkvd->szKeyName, "iuser1" ) || FStrEq( pkvd->szKeyName, "fuser1" ) )
			pkvd->fHandled = TRUE;
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		if( COF_HasText( m_iszSound ) )
			PRECACHE_SOUND( STRING( m_iszSound ) );
		SetUse( &CCOFSimonspeak::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer && COF_HasText( m_iszSound ) )
			EMIT_SOUND( ENT( pPlayer->pev ), CHAN_VOICE, STRING( m_iszSound ), 1.0f, ATTN_NORM );

		SUB_UseTargets( pActivator, useType, value );
	}

	string_t m_iszSound;
};

LINK_ENTITY_TO_CLASS( cof_simonspeak, CCOFSimonspeak )

class CCOFPhoneCall : public CBaseDelay
{
public:
	CCOFPhoneCall() : m_iszAudio( iStringNull ), m_flCallTime( 0.0f ) {}
	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT FinishThink( void );

	string_t m_iszAudio;
	float m_flCallTime;
	EHANDLE m_hActivator;
};

LINK_ENTITY_TO_CLASS( cof_phonecall, CCOFPhoneCall )

void CCOFPhoneCall::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "audiofile" ) )
	{
		m_iszAudio = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( !strncmp( pkvd->szKeyName, "subtitletime", 12 ) )
	{
		m_flCallTime += COF_KeyFloat( pkvd );
		pkvd->fHandled = TRUE;
	}
	else if( !strncmp( pkvd->szKeyName, "subtitlenumber", 14 ) || FStrEq( pkvd->szKeyName, "iuser1" ) )
		pkvd->fHandled = TRUE;
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFPhoneCall::Spawn( void )
{
	pev->solid = SOLID_NOT;
	if( COF_HasText( m_iszAudio ) )
		PRECACHE_SOUND( STRING( m_iszAudio ) );
	SetUse( &CCOFPhoneCall::Use );
}

void CCOFPhoneCall::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer && COF_HasText( m_iszAudio ) )
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_VOICE, STRING( m_iszAudio ), 1.0f, ATTN_NORM );

	m_hActivator = pActivator;
	if( m_flCallTime > 0.0f && COF_HasText( pev->target ) )
	{
		SetThink( &CCOFPhoneCall::FinishThink );
		pev->nextthink = gpGlobals->time + Q_min( m_flCallTime, 60.0f );
	}
	else
		SUB_UseTargets( pActivator, useType, value );
}

void CCOFPhoneCall::FinishThink( void )
{
	SUB_UseTargets( (CBaseEntity *)m_hActivator, USE_TOGGLE, 0 );
	ResetThink();
}

class CCOFGreyFade : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFGreyFade::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		const float fadeTime = pev->iuser2 > 0 ? (float)pev->iuser2 : 1.0f;
		const int flags = pev->iuser1 ? FFADE_IN : FFADE_OUT;
		CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
		if( pPlayer )
			UTIL_ScreenFade( pPlayer, Vector( 96, 96, 96 ), fadeTime, 0.0f, 180, flags | FFADE_MODULATE );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_greyfade, CCOFGreyFade )

class CCOFDocument : public CBaseDelay
{
public:
	CCOFDocument() : m_iszPage1( iStringNull ), m_iszNote1( iStringNull ), m_iszTurnSound( iStringNull ) {}

	void Precache( void );
	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	string_t m_iszPage1;
	string_t m_iszNote1;
	string_t m_iszTurnSound;
};

LINK_ENTITY_TO_CLASS( cof_document, CCOFDocument )

void CCOFDocument::Precache( void )
{
	if( COF_HasText( m_iszTurnSound ) )
		PRECACHE_SOUND( STRING( m_iszTurnSound ) );
}

void CCOFDocument::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "page1" ) )
	{
		m_iszPage1 = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "note1" ) )
	{
		m_iszNote1 = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "turnsound" ) )
	{
		m_iszTurnSound = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( !strncmp( pkvd->szKeyName, "page", 4 ) ||
		!strncmp( pkvd->szKeyName, "note", 4 ) ||
		FStrEq( pkvd->szKeyName, "label" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFDocument::Spawn( void )
{
	Precache();
	pev->solid = SOLID_NOT;
	SetUse( &CCOFDocument::Use );
}

void CCOFDocument::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	COF_EmitOptionalSound( edict(), m_iszTurnSound );
	if( COF_HasText( m_iszPage1 ) )
		COF_ShowText( pActivator, m_iszPage1 );
	else
		COF_ShowText( pActivator, m_iszNote1 );

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFClearItems : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFClearItems::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( cof_clearitems, CCOFClearItems )

void CCOFClearItems::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer )
	{
		if( COF_HasText( pev->message ) )
		{
			const char *pszToken = STRING( pev->message );
			for( int i = MAX_COF_INVENTORY - 1; i >= 0; i-- )
			{
				if( !FStringNull( pPlayer->m_rgCOFInventory[i] ) &&
					strstr( STRING( pPlayer->m_rgCOFInventory[i] ), pszToken ) )
					pPlayer->COF_RemoveInventoryItem( i );
			}

			if( !strncmp( pszToken, "weapon_", 7 ) )
				COF_RemovePlayerItemByName( pPlayer, pszToken );
		}
		else
		{
			for( int i = MAX_COF_INVENTORY - 1; i >= 0; i-- )
				pPlayer->COF_RemoveInventoryItem( i );
		}

		if( pev->spawnflags & 1 )
			pPlayer->RemoveAllItems( FALSE );
	}

	SUB_UseTargets( pActivator, useType, value );
}

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

class CCOFDynLight : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFDynLight::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( env_dynlight, CCOFDynLight )
LINK_ENTITY_TO_CLASS( env_elight, CCOFDynLight )

void CCOFDynLight::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	const int radius = Q_min( 255, Q_max( 1, (int)( pev->scale > 0 ? pev->scale : 48 ) ) );
	MESSAGE_BEGIN( MSG_PVS, SVC_TEMPENTITY, pev->origin );
		WRITE_BYTE( TE_DLIGHT );
		WRITE_COORD( pev->origin.x );
		WRITE_COORD( pev->origin.y );
		WRITE_COORD( pev->origin.z );
		WRITE_BYTE( radius );
		WRITE_BYTE( (int)pev->rendercolor.x );
		WRITE_BYTE( (int)pev->rendercolor.y );
		WRITE_BYTE( (int)pev->rendercolor.z );
		WRITE_BYTE( 10 );
		WRITE_BYTE( 0 );
	MESSAGE_END();

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFStaticDecal : public CBaseDelay
{
public:
	void Spawn( void );
	void EXPORT PlaceDecal( void );
};

LINK_ENTITY_TO_CLASS( env_static_decal, CCOFStaticDecal )

void CCOFStaticDecal::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetThink( &CCOFStaticDecal::PlaceDecal );
	pev->nextthink = gpGlobals->time + 0.1f;
}

void CCOFStaticDecal::PlaceDecal( void )
{
	if( !COF_HasText( pev->netname ) )
		return;

	int decal = DECAL_INDEX( STRING( pev->netname ) );
	if( decal < 0 )
		return;

	static const Vector dirs[] =
	{
		Vector( 1, 0, 0 ), Vector( -1, 0, 0 ), Vector( 0, 1, 0 ),
		Vector( 0, -1, 0 ), Vector( 0, 0, 1 ), Vector( 0, 0, -1 )
	};

	TraceResult tr;
	for( int i = 0; i < (int)ARRAYSIZE( dirs ); i++ )
	{
		UTIL_TraceLine( pev->origin, pev->origin + dirs[i] * 24.0f, ignore_monsters, ENT( pev ), &tr );
		if( tr.flFraction < 1.0f )
		{
			const int high = decal > 255;
			MESSAGE_BEGIN( MSG_BROADCAST, SVC_TEMPENTITY );
				WRITE_BYTE( high ? TE_WORLDDECALHIGH : TE_WORLDDECAL );
				WRITE_COORD( tr.vecEndPos.x );
				WRITE_COORD( tr.vecEndPos.y );
				WRITE_COORD( tr.vecEndPos.z );
				WRITE_BYTE( high ? decal - 256 : decal );
			MESSAGE_END();
			return;
		}
	}
}

class CCOFParticle : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFParticle::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( env_particle, CCOFParticle )

class CCOFDripper : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFDripper::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( dripper, CCOFDripper )

class CCOFTapeRecorder : public CBaseAnimating
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	int ObjectCaps( void ) { return ( CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
};

LINK_ENTITY_TO_CLASS( tape_recorder, CCOFTapeRecorder )

void CCOFTapeRecorder::Spawn( void )
{
	pev->movetype = MOVETYPE_TOSS;
	pev->solid = SOLID_TRIGGER;

	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( "models/tape_recorder.mdl" );

	PRECACHE_MODEL( STRING( pev->model ) );
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 16 ) );
	UTIL_SetOrigin( pev, pev->origin );
	SetUse( &CCOFTapeRecorder::Use );
}

void CCOFTapeRecorder::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	COF_ShowText( pActivator, pev->message );
	SUB_UseTargets( pActivator, useType, value );
}

static const char *COF_DefaultWorldModelForPickup( const char *pszClassname )
{
	if( !pszClassname )
		return NULL;

	if( !stricmp( pszClassname, "weapon_syringe" ) ) return "models/weapons/syringe/w_syringe.mdl";
	if( !stricmp( pszClassname, "weapon_lantern" ) ) return "models/weapons/lantern/w_lantern.mdl";
	if( !stricmp( pszClassname, "weapon_m16" ) ) return "models/weapons/m16/w_m16.mdl";
	if( !stricmp( pszClassname, "weapon_branch" ) ) return "models/weapons/branch/w_branch.mdl";
	if( !stricmp( pszClassname, "weapon_tmp" ) ) return "models/weapons/tmp/w_tmp.mdl";
	if( !stricmp( pszClassname, "weapon_vp70" ) ) return "models/weapons/vp70/w_vp70.mdl";
	if( !stricmp( pszClassname, "weapon_flare" ) ) return "models/weapons/flare/w_flare.mdl";
	if( !stricmp( pszClassname, "weapon_glock" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_glocktac" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_instituteglock" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_p345" ) ) return "models/weapons/p345/w_p345.mdl";
	if( !stricmp( pszClassname, "weapon_p345blackslide" ) ) return "models/weapons/p345/w_p345.mdl";
	if( !stricmp( pszClassname, "weapon_revolver" ) ) return "models/weapons/revolver/w_revolver.mdl";
	if( !stricmp( pszClassname, "weapon_rifle" ) ) return "models/weapons/rifle/w_rifle.mdl";
	if( !stricmp( pszClassname, "weapon_sledgehammer" ) ) return "models/weapons/sledgehammer/w_sledgehammer.mdl";
	if( !stricmp( pszClassname, "weapon_g43" ) ) return "models/weapons/g43/w_g43.mdl";
	if( !stricmp( pszClassname, "weapon_flashlight" ) ) return "models/weapons/flashlight/w_flashlight.mdl";
	if( !stricmp( pszClassname, "weapon_nightstick" ) ) return "models/weapons/nightstick/w_nightstick.mdl";
	if( !stricmp( pszClassname, "weapon_axe" ) ) return "models/weapons/axe/w_axe.mdl";
	if( !stricmp( pszClassname, "weapon_camera" ) ) return "models/weapons/camera/w_camera.mdl";
	if( !stricmp( pszClassname, "weapon_famas" ) ) return "models/weapons/famas/w_famas.mdl";
	if( !stricmp( pszClassname, "weapon_browning" ) ) return "models/weapons/browning/w_browning.mdl";
	if( !stricmp( pszClassname, "weapon_browning_wheelchair" ) ) return "models/weapons/browning/w_browning.mdl";
	if( !stricmp( pszClassname, "weapon_booklaser" ) ) return "models/weapons/booklaser/w_booklaser.mdl";
	if( !stricmp( pszClassname, "weapon_m76" ) ) return "models/weapons/m76/w_m76.mdl";

	if( !stricmp( pszClassname, "ammo_glock" ) ) return "models/ammo/clip.mdl";
	if( !stricmp( pszClassname, "ammo_p345" ) ) return "models/ammo/p345_clip.mdl";
	if( !stricmp( pszClassname, "ammo_revolver" ) ) return "models/ammo/ammo_revolver.mdl";
	if( !stricmp( pszClassname, "ammo_shells" ) ) return "models/ammo/ammo_shotshells.mdl";
	if( !stricmp( pszClassname, "ammo_tmp" ) ) return "models/ammo/ammo_tmp.mdl";
	if( !stricmp( pszClassname, "ammo_m16" ) ) return "models/ammo/ammo_m16.mdl";
	if( !stricmp( pszClassname, "ammo_vp70" ) ) return "models/ammo/vp70_clip.mdl";
	if( !stricmp( pszClassname, "ammo_g43" ) ) return "models/ammo/ammo_g43.mdl";
	if( !stricmp( pszClassname, "ammo_rifle" ) ) return "models/ammo/ammo_rifle.mdl";

	if( !stricmp( pszClassname, "aom_pills" ) ) return "models/items/w_pills.mdl";
	if( !stricmp( pszClassname, "item_phonebattery" ) ) return "models/items/phone_battery.mdl";
	if( !stricmp( pszClassname, "item_nightvision" ) ) return "models/items/w_nightvision.mdl";
	if( !stricmp( pszClassname, "item_glocktaclight" ) ) return "models/weapons/glock/glock_taclight.mdl";
	if( !stricmp( pszClassname, "item_padlock" ) ) return "models/items/padlock.mdl";
	if( !stricmp( pszClassname, "cof_hoodie" ) ) return "models/costumes/hoodie.mdl";
	if( !stricmp( pszClassname, "cof_passwordnote" ) ) return "models/items/generic_note.mdl";

	return NULL;
}

static void COF_InventoryTokenForPickup( const char *pszClassname, char *pszOut, size_t outSize )
{
	if( !pszOut || outSize == 0 )
		return;

	pszOut[0] = '\0';
	if( !pszClassname || !pszClassname[0] )
		return;

	if( !strnicmp( pszClassname, "ammo_", 5 ) )
		snprintf( pszOut, outSize, "inventoryitems/ammo/%s.txt", pszClassname );
	else
		strlcpy( pszOut, pszClassname, outSize );
}

class CCOFInventoryPickup : public CBaseAnimating
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	int ObjectCaps( void ) { return ( CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
};

void CCOFInventoryPickup::Spawn( void )
{
	pev->movetype = MOVETYPE_TOSS;
	pev->solid = SOLID_TRIGGER;

	if( FStringNull( pev->model ) )
	{
		const char *pszModel = COF_DefaultWorldModelForPickup( STRING( pev->classname ) );
		if( pszModel )
			pev->model = MAKE_STRING( pszModel );
	}

	if( !FStringNull( pev->model ) )
	{
		PRECACHE_MODEL( STRING( pev->model ) );
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
	}

	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 16 ) );
	UTIL_SetOrigin( pev, pev->origin );
	SetUse( &CCOFInventoryPickup::Use );
}

void CCOFInventoryPickup::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( !pPlayer )
		return;

	char szToken[128];
	COF_InventoryTokenForPickup( STRING( pev->classname ), szToken, sizeof( szToken ) );
	if( !szToken[0] || !pPlayer->COF_GiveInventoryItem( szToken ) )
	{
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Cannot pick up this item" );
		return;
	}

	EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "items/gunpickup2.wav", 1.0f, ATTN_NORM );
	SUB_UseTargets( pPlayer, USE_TOGGLE, 0 );
	UTIL_Remove( this );
}

LINK_ENTITY_TO_CLASS( weapon_syringe, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_lantern, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_m16, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_branch, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_tmp, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_vp70, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_flare, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_glocktac, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_instituteglock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_p345, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_p345blackslide, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_revolver, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_rifle, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_sledgehammer, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_g43, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_flashlight, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_nightstick, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_axe, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_camera, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_famas, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_browning, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_browning_wheelchair, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_booklaser, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_m76, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_glock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_p345, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_revolver, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_shells, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_tmp, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_m16, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_vp70, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_g43, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_rifle, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( aom_pills, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_phonebattery, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_nightvision, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_glocktaclight, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_padlock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( cof_hoodie, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( cof_passwordnote, CCOFInventoryPickup )

class CCOFCustomize : public CBaseDelay
{
public:
	CCOFCustomize() :
		m_iSkin( -1 ),
		m_iBody( -1 ),
		m_flFrame( -1.0f ),
		m_flFramerate( -1.0f ),
		m_iVisible( -1 ),
		m_iSolid( -1 ),
		m_iszModel( iStringNull )
	{
	}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	int m_iSkin;
	int m_iBody;
	float m_flFrame;
	float m_flFramerate;
	int m_iVisible;
	int m_iSolid;
	string_t m_iszModel;
};

LINK_ENTITY_TO_CLASS( env_customize, CCOFCustomize )

void CCOFCustomize::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "skin" ) )
	{
		m_iSkin = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "body" ) )
	{
		m_iBody = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "frame" ) )
	{
		m_flFrame = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_fFramerate" ) )
	{
		m_flFramerate = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iVisible" ) )
	{
		m_iVisible = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iSolid" ) )
	{
		m_iSolid = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iszModel" ) )
	{
		m_iszModel = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( !strncmp( pkvd->szKeyName, "m_fController", 13 ) ||
		FStrEq( pkvd->szKeyName, "m_iPlayerReact" ) ||
		FStrEq( pkvd->szKeyName, "m_voicePitch" ) ||
		FStrEq( pkvd->szKeyName, "m_flRadius" ) ||
		FStrEq( pkvd->szKeyName, "m_iProvoked" ) ||
		FStrEq( pkvd->szKeyName, "m_iMonsterClip" ) ||
		FStrEq( pkvd->szKeyName, "m_iPrisoner" ) ||
		FStrEq( pkvd->szKeyName, "m_iClass" ) ||
		FStrEq( pkvd->szKeyName, "m_bloodColor" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFCustomize::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetUse( &CCOFCustomize::Use );
}

void CCOFCustomize::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( !COF_HasText( pev->target ) )
		return;

	CBaseEntity *pEntity = NULL;
	while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->target ) ) ) != NULL )
	{
		if( m_iSkin >= 0 )
			pEntity->pev->skin = m_iSkin;
		if( m_iBody >= 0 )
			pEntity->pev->body = m_iBody;
		if( m_flFrame >= 0.0f )
			pEntity->pev->frame = m_flFrame;
		if( m_flFramerate >= 0.0f )
			pEntity->pev->framerate = m_flFramerate;

		if( COF_HasText( m_iszModel ) )
		{
			PRECACHE_MODEL( STRING( m_iszModel ) );
			SET_MODEL( pEntity->edict(), STRING( m_iszModel ) );
		}

		if( m_iVisible == 1 )
			pEntity->pev->effects &= ~EF_NODRAW;
		else if( m_iVisible == 2 )
			pEntity->pev->effects |= EF_NODRAW;
		else if( m_iVisible == 3 )
			pEntity->pev->effects ^= EF_NODRAW;

		if( m_iSolid == 0 )
			pEntity->pev->solid = SOLID_NOT;
		else if( m_iSolid == 1 && pEntity->pev->model )
		{
			const char *pszModel = STRING( pEntity->pev->model );
			if( pszModel && pszModel[0] == '*' )
				pEntity->pev->solid = SOLID_BSP;
		}

		UTIL_SetOrigin( pEntity->pev, pEntity->pev->origin );
	}

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFMonsterRandomSpawn : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFMonsterRandomSpawn::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( pev->message ) )
		{
			CBaseEntity *pSpawned = CBaseEntity::Create( STRING( pev->message ), pev->origin, pev->angles, edict() );
			if( pSpawned && pev->health > 0 )
				pSpawned->pev->health = pev->health;
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_monster_random_spawn, CCOFMonsterRandomSpawn )

class CCOFMdlCutscene : public CBaseAnimating
{
public:
	CCOFMdlCutscene()
	{
		memset( m_iszAnimations, 0, sizeof( m_iszAnimations ) );
		m_hActivator.Set( NULL );
	}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT AnimateThink( void );

	string_t m_iszAnimations[8];
	EHANDLE m_hActivator;
};

LINK_ENTITY_TO_CLASS( cof_mdlcutscene, CCOFMdlCutscene )
LINK_ENTITY_TO_CLASS( cutscene_model, CCOFMdlCutscene )

void CCOFMdlCutscene::KeyValue( KeyValueData *pkvd )
{
	if( !strncmp( pkvd->szKeyName, "animation", 9 ) )
	{
		const int index = atoi( pkvd->szKeyName + 9 ) - 1;
		if( index >= 0 && index < (int)ARRAYSIZE( m_iszAnimations ) )
			m_iszAnimations[index] = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseAnimating::KeyValue( pkvd );
}

void CCOFMdlCutscene::Spawn( void )
{
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NONE;

	if( COF_HasText( pev->model ) )
	{
		PRECACHE_MODEL( STRING( pev->model ) );
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
	}

	InitBoneControllers();
	ResetSequenceInfo();
	SetUse( &CCOFMdlCutscene::Use );
}

void CCOFMdlCutscene::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	m_hActivator = pActivator;

	if( COF_HasText( m_iszAnimations[0] ) )
	{
		const int sequence = LookupSequence( STRING( m_iszAnimations[0] ) );
		if( sequence >= 0 )
			pev->sequence = sequence;
	}

	pev->frame = 0;
	pev->framerate = 1.0f;
	ResetSequenceInfo();
	SetThink( &CCOFMdlCutscene::AnimateThink );
	pev->nextthink = gpGlobals->time + 0.05f;
}

void CCOFMdlCutscene::AnimateThink( void )
{
	StudioFrameAdvance();

	if( m_fSequenceFinished && !m_fSequenceLoops )
	{
		pev->framerate = 0.0f;
		ResetThink();
		SUB_UseTargets( (CBaseEntity *)m_hActivator, USE_TOGGLE, 0 );
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;
}

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

#define SLOWER_AE_ATTACK_RIGHT 1
#define SLOWER_AE_ATTACK_HEAVY 3
#define SLOWER_FLINCH_DELAY 1.6f

enum COFSlowerVariant
{
	SLOWER_NORMAL = 0,
	SLOWER_FAST,
	SLOWER_STUCK,
};

class CCOFMonsterSlower : public CBaseMonster
{
public:
	CCOFMonsterSlower();
	void Spawn( void );
	void Precache( void );
	void StartMonster( void );
	void MonsterThink( void );
	void SetYawSpeed( void );
	int Classify( void ) { return CLASS_ALIEN_MONSTER; }
	int IRelationship( CBaseEntity *pTarget );
	void HandleAnimEvent( MonsterEvent_t *pEvent );
	BOOL CheckMeleeAttack1( float flDot, float flDist );
	BOOL CheckRangeAttack1( float flDot, float flDist ) { return FALSE; }
	BOOL CheckRangeAttack2( float flDot, float flDist ) { return FALSE; }
	void Killed( entvars_t *pevAttacker, int iGib );
	int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	int IgnoreConditions( void );
	void PainSound( void );
	void AlertSound( void );
	void IdleSound( void );
	void AttackSound( void );

private:
	COFSlowerVariant GetVariant( void ) const;
	BOOL IsFastVariant( void ) const;
	BOOL IsStuckVariant( void ) const;
	const char *DefaultModel( void ) const;
	void NormalizeBodygroup( void );
	float SkillHealth( void ) const;
	float SkillDamage( BOOL fHeavyAttack ) const;
	BOOL IsHeavyAttackSequence( void );
	BOOL ShouldUseBaseAI( void ) const;
	CBaseEntity *FindSlowerEnemy( void );
	void SetSlowerEnemy( CBaseEntity *pEnemy );
	void SlowerCombatThink( float flInterval );
	void MoveTowardEnemy( float flInterval, float flDist );
	void HammerAttack( BOOL fHeavyAttack );

	static const char *pAttackSounds[];
	static const char *pFastAttackSounds[];
	static const char *pPainSounds[];
	static const char *pFastPainSounds[];
	static const char *pAlertSounds[];
	static const char *pFastAlertSounds[];
	static const char *pHitSounds[];
	static const char *pMissSounds[];
	static const char *pExtraSounds[];

	BOOL m_fFirstHitReacted;
	float m_flNextPainSound;
	float m_flNextFlinch;
	float m_flNextEnemySearch;
};

LINK_ENTITY_TO_CLASS( monster_slower, CCOFMonsterSlower )
LINK_ENTITY_TO_CLASS( monster_slower3, CCOFMonsterSlower )
LINK_ENTITY_TO_CLASS( monster_slowerstuck, CCOFMonsterSlower )

const char *CCOFMonsterSlower::pAttackSounds[] =
{
	"slower/slower_attack1.wav",
	"slower/slower_attack2.wav",
};

const char *CCOFMonsterSlower::pFastAttackSounds[] =
{
	"slower3/slower_attack1.wav",
	"slower3/slower_attack2.wav",
};

const char *CCOFMonsterSlower::pPainSounds[] =
{
	"slower/slower_pain1.wav",
	"slower/slower_pain2.wav",
};

const char *CCOFMonsterSlower::pFastPainSounds[] =
{
	"slower3/slower_pain1.wav",
	"slower3/slower_pain2.wav",
};

const char *CCOFMonsterSlower::pAlertSounds[] =
{
	"slower/slower_alert10.wav",
	"slower/slower_alert20.wav",
	"slower/slower_alert30.wav",
};

const char *CCOFMonsterSlower::pFastAlertSounds[] =
{
	"slower3/slower_alert10.wav",
	"slower3/slower_alert20.wav",
	"slower3/slower_alert30.wav",
};

const char *CCOFMonsterSlower::pHitSounds[] =
{
	"slower/hammer_strike1.wav",
	"slower/hammer_strike2.wav",
	"slower/hammer_strike3.wav",
};

const char *CCOFMonsterSlower::pMissSounds[] =
{
	"slower/hammer_miss1.wav",
	"slower/hammer_miss2.wav",
};

const char *CCOFMonsterSlower::pExtraSounds[] =
{
	"common/npc_step1.wav",
	"slower/scream1.wav",
	"slower/head_gore.wav",
	"slower/k_crawl1.wav",
	"slower/k_crawl2.wav",
	"slower/k_crawl3.wav",
	"slower/k_crawl4.wav",
	"slower/k_crawl5.wav",
	"slower/k_crawl6.wav",
	"slower/k_crawl7.wav",
};

CCOFMonsterSlower::CCOFMonsterSlower() :
	m_fFirstHitReacted( FALSE ),
	m_flNextPainSound( 0.0f ),
	m_flNextFlinch( 0.0f ),
	m_flNextEnemySearch( 0.0f )
{
}

COFSlowerVariant CCOFMonsterSlower::GetVariant( void ) const
{
	if( FClassnameIs( pev, "monster_slower3" ) )
		return SLOWER_FAST;

	if( FClassnameIs( pev, "monster_slowerstuck" ) )
		return SLOWER_STUCK;

	return SLOWER_NORMAL;
}

BOOL CCOFMonsterSlower::IsFastVariant( void ) const
{
	return GetVariant() == SLOWER_FAST;
}

BOOL CCOFMonsterSlower::IsStuckVariant( void ) const
{
	return GetVariant() == SLOWER_STUCK;
}

const char *CCOFMonsterSlower::DefaultModel( void ) const
{
	switch( GetVariant() )
	{
	case SLOWER_FAST:
		return "models/slower3.mdl";
	case SLOWER_STUCK:
		return "models/slower2.mdl";
	default:
		return "models/slower.mdl";
	}
}

void CCOFMonsterSlower::NormalizeBodygroup( void )
{
	if( pev->body >= 0 )
		return;

	const char *pszModel = STRING( pev->model );

	if( strstr( pszModel, "slower2.mdl" ) )
		pev->body = RANDOM_LONG( 0, 2 );
	else if( strstr( pszModel, "slower3.mdl" ) || strstr( pszModel, "slowerno.mdl" ) || strstr( pszModel, "slowerno_boss.mdl" ) )
		pev->body = 0;
	else
		pev->body = RANDOM_LONG( 0, 5 );
}

float CCOFMonsterSlower::SkillHealth( void ) const
{
	switch( (int)CVAR_GET_FLOAT( "skill" ) )
	{
	case 1: return 20.0f;
	case 2: return 40.0f;
	case 3: return 70.0f;
	default: return 110.0f;
	}
}

float CCOFMonsterSlower::SkillDamage( BOOL fHeavyAttack ) const
{
	float flDamage;

	switch( (int)CVAR_GET_FLOAT( "skill" ) )
	{
	case 1: flDamage = 5.0f; break;
	case 2: flDamage = 7.0f; break;
	case 3: flDamage = 10.0f; break;
	default: flDamage = 20.0f; break;
	}

	if( fHeavyAttack )
		flDamage *= 1.5f;

	return flDamage;
}

BOOL CCOFMonsterSlower::IsHeavyAttackSequence( void )
{
	if( IsFastVariant() || IsStuckVariant() )
		return FALSE;

	return pev->sequence == LookupSequence( "attack4" );
}

void CCOFMonsterSlower::Precache( void )
{
	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( DefaultModel() );

	PRECACHE_MODEL( STRING( pev->model ) );
	PRECACHE_MODEL( "models/slower.mdl" );
	PRECACHE_MODEL( "models/slower2.mdl" );
	PRECACHE_MODEL( "models/slower3.mdl" );
	PRECACHE_MODEL( "models/slower_headgibs.mdl" );
	PRECACHE_SOUND_ARRAY( pAttackSounds );
	PRECACHE_SOUND_ARRAY( pFastAttackSounds );
	PRECACHE_SOUND_ARRAY( pPainSounds );
	PRECACHE_SOUND_ARRAY( pFastPainSounds );
	PRECACHE_SOUND_ARRAY( pAlertSounds );
	PRECACHE_SOUND_ARRAY( pFastAlertSounds );
	PRECACHE_SOUND_ARRAY( pHitSounds );
	PRECACHE_SOUND_ARRAY( pMissSounds );
	PRECACHE_SOUND_ARRAY( pExtraSounds );
}

void CCOFMonsterSlower::Spawn( void )
{
	Precache();
	NormalizeBodygroup();

	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX );

	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->takedamage = DAMAGE_AIM;
	pev->health = pev->health > 0 ? pev->health : SkillHealth();
	pev->max_health = pev->health;
	pev->view_ofs = VEC_VIEW;
	m_bloodColor = BLOOD_COLOR_RED;
	m_flFieldOfView = 0.5f;
	m_MonsterState = MONSTERSTATE_NONE;
	m_afCapability = bits_CAP_DOORS_GROUP | bits_CAP_MELEE_ATTACK1;

	MonsterInit();
}

void CCOFMonsterSlower::StartMonster( void )
{
	CBaseMonster::StartMonster();

	m_flDistLook = IsFastVariant() ? 2300.0f : 1900.0f;
	m_flDistTooFar = IsFastVariant() ? 1400.0f : 1100.0f;

	if( !m_pCine && m_MonsterState != MONSTERSTATE_DEAD )
		SetActivity( ACT_IDLE );
}

BOOL CCOFMonsterSlower::ShouldUseBaseAI( void ) const
{
	return m_pCine != NULL ||
		m_MonsterState == MONSTERSTATE_SCRIPT ||
		m_MonsterState == MONSTERSTATE_DEAD ||
		pev->deadflag != DEAD_NO;
}

CBaseEntity *CCOFMonsterSlower::FindSlowerEnemy( void )
{
	CBaseEntity *pPlayer = UTIL_PlayerByIndex( 1 );

	if( !pPlayer || !pPlayer->IsAlive() || FBitSet( pPlayer->pev->flags, FL_NOTARGET ) )
		return NULL;

	const float flDist = ( pPlayer->pev->origin - pev->origin ).Length();
	if( flDist > m_flDistLook )
		return NULL;

	if( flDist > 192.0f && !FInViewCone( pPlayer ) )
		return NULL;

	if( flDist > 256.0f && !FVisible( pPlayer ) )
		return NULL;

	return pPlayer;
}

void CCOFMonsterSlower::SetSlowerEnemy( CBaseEntity *pEnemy )
{
	if( !pEnemy )
		return;

	if( m_hEnemy != pEnemy )
	{
		m_hEnemy = pEnemy;
		m_vecEnemyLKP = pEnemy->pev->origin;
		AlertSound();
	}

	SetConditions( bits_COND_NEW_ENEMY | bits_COND_SEE_ENEMY | bits_COND_SEE_CLIENT | bits_COND_SEE_HATE );
	m_IdealMonsterState = MONSTERSTATE_COMBAT;
	m_MonsterState = MONSTERSTATE_COMBAT;
}

void CCOFMonsterSlower::MoveTowardEnemy( float flInterval, float flDist )
{
	if( m_hEnemy == 0 )
		return;

	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;
	if( flDist <= flAttackDist * 0.82f )
		return;

	if( m_Activity != ACT_WALK )
		SetActivity( ACT_WALK );

	Vector vecDir = m_hEnemy->pev->origin - pev->origin;
	vecDir.z = 0;
	pev->ideal_yaw = UTIL_VecToYaw( vecDir );
	ChangeYaw( pev->yaw_speed );

	const float flSpeed = IsFastVariant() ? 245.0f : ( IsStuckVariant() ? 90.0f : 155.0f );
	const float flStep = flSpeed * flInterval;

	if( !WALK_MOVE( ENT( pev ), pev->angles.y, flStep, WALKMOVE_NORMAL ) )
	{
		if( !WALK_MOVE( ENT( pev ), pev->angles.y + 35.0f, flStep * 0.65f, WALKMOVE_NORMAL ) )
			WALK_MOVE( ENT( pev ), pev->angles.y - 35.0f, flStep * 0.65f, WALKMOVE_NORMAL );
	}
}

void CCOFMonsterSlower::SlowerCombatThink( float flInterval )
{
	if( gpGlobals->time >= m_flNextEnemySearch || m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		m_flNextEnemySearch = gpGlobals->time + 0.25f;
		SetSlowerEnemy( FindSlowerEnemy() );
	}

	if( m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		if( m_Activity != ACT_IDLE )
			SetActivity( ACT_IDLE );

		m_MonsterState = MONSTERSTATE_IDLE;
		return;
	}

	m_vecEnemyLKP = m_hEnemy->pev->origin;

	Vector vecToEnemy = m_hEnemy->pev->origin - pev->origin;
	vecToEnemy.z = 0;
	const float flDist = vecToEnemy.Length();
	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;

	if( flDist > 0.1f )
	{
		pev->ideal_yaw = UTIL_VecToYaw( vecToEnemy );
		ChangeYaw( pev->yaw_speed );
	}

	if( m_Activity == ACT_MELEE_ATTACK1 )
	{
		if( m_fSequenceFinished && gpGlobals->time >= m_flNextAttack - 0.25f )
			SetActivity( flDist <= flAttackDist ? ACT_IDLE : ACT_WALK );
		return;
	}

	if( flDist <= flAttackDist && gpGlobals->time >= m_flNextAttack )
	{
		SetActivity( ACT_MELEE_ATTACK1 );
		m_flNextAttack = gpGlobals->time + ( IsFastVariant() ? 0.72f : 1.0f );
		return;
	}

	MoveTowardEnemy( flInterval, flDist );
}

void CCOFMonsterSlower::MonsterThink( void )
{
	if( ShouldUseBaseAI() )
	{
		CBaseMonster::MonsterThink();
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;

	float flInterval = StudioFrameAdvance();
	DispatchAnimEvents( flInterval );

	SlowerCombatThink( flInterval );
	FCheckAITrigger();
}

void CCOFMonsterSlower::SetYawSpeed( void )
{
	switch( m_Activity )
	{
	case ACT_MELEE_ATTACK1:
		pev->yaw_speed = IsFastVariant() ? 190 : 150;
		break;
	case ACT_WALK:
	case ACT_RUN:
		pev->yaw_speed = IsFastVariant() ? 170 : 120;
		break;
	default:
		pev->yaw_speed = IsFastVariant() ? 130 : 95;
		break;
	}
}

BOOL CCOFMonsterSlower::CheckMeleeAttack1( float flDot, float flDist )
{
	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;

	if( flDist <= flAttackDist && flDot >= 0.62f && m_hEnemy != 0 )
		return TRUE;

	return FALSE;
}

int CCOFMonsterSlower::IRelationship( CBaseEntity *pTarget )
{
	if( pTarget && pTarget->IsPlayer() )
		return R_HT;

	return CBaseMonster::IRelationship( pTarget );
}

void CCOFMonsterSlower::HammerAttack( BOOL fHeavyAttack )
{
	CBaseEntity *pHurt = CheckTraceHullAttack( IsFastVariant() ? 86.0f : 78.0f, (int)SkillDamage( fHeavyAttack ), DMG_CLUB );

	if( pHurt )
	{
		if( pHurt->pev->flags & ( FL_MONSTER | FL_CLIENT ) )
		{
			pHurt->pev->punchangle.x = fHeavyAttack ? 8 : 5;
			pHurt->pev->punchangle.z = fHeavyAttack ? RANDOM_FLOAT( -7, 7 ) : RANDOM_FLOAT( -4, 4 );
			pHurt->pev->velocity = pHurt->pev->velocity - gpGlobals->v_forward * ( fHeavyAttack ? 155 : 110 );
		}

		EMIT_SOUND_DYN( ENT( pev ), CHAN_WEAPON, RANDOM_SOUND_ARRAY( pHitSounds ), 1.0f, ATTN_NORM, 0, 100 + RANDOM_LONG( -5, 5 ) );
	}
	else
	{
		EMIT_SOUND_DYN( ENT( pev ), CHAN_WEAPON, RANDOM_SOUND_ARRAY( pMissSounds ), 1.0f, ATTN_NORM, 0, 100 + RANDOM_LONG( -5, 5 ) );
	}

	if( RANDOM_LONG( 0, 1 ) )
		AttackSound();
}

void CCOFMonsterSlower::HandleAnimEvent( MonsterEvent_t *pEvent )
{
	switch( pEvent->event )
	{
	case SLOWER_AE_ATTACK_RIGHT:
		HammerAttack( FALSE );
		break;
	case SLOWER_AE_ATTACK_HEAVY:
		HammerAttack( IsHeavyAttackSequence() );
		break;
	default:
		CBaseMonster::HandleAnimEvent( pEvent );
		break;
	}
}

void CCOFMonsterSlower::Killed( entvars_t *pevAttacker, int iGib )
{
	if( m_iTriggerCondition == AITRIGGER_DEATH && COF_HasText( m_iszTriggerTarget ) )
	{
		FireTargets( STRING( m_iszTriggerTarget ), this, this, USE_TOGGLE, 0 );
		m_iTriggerCondition = AITRIGGER_NONE;
	}

	CBaseMonster::Killed( pevAttacker, iGib );
}

int CCOFMonsterSlower::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( IsAlive() && gpGlobals->time >= m_flNextPainSound )
	{
		PainSound();
		m_flNextPainSound = gpGlobals->time + 0.65f;
	}

	if( IsAlive() && !m_fFirstHitReacted )
	{
		m_fFirstHitReacted = TRUE;
		m_flNextAttack = gpGlobals->time + ( IsFastVariant() ? 0.45f : 0.75f );
		m_flNextFlinch = 0.0f;
	}

	if( IsAlive() && pevAttacker )
	{
		CBaseEntity *pAttacker = CBaseEntity::Instance( ENT( pevAttacker ) );
		if( pAttacker && pAttacker->IsPlayer() )
			SetSlowerEnemy( pAttacker );
	}

	return CBaseMonster::TakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
}

int CCOFMonsterSlower::IgnoreConditions( void )
{
	int iIgnore = CBaseMonster::IgnoreConditions();

	if( m_Activity == ACT_MELEE_ATTACK1 )
		iIgnore |= bits_COND_LIGHT_DAMAGE | bits_COND_HEAVY_DAMAGE;

	if( m_Activity == ACT_SMALL_FLINCH || m_Activity == ACT_BIG_FLINCH )
	{
		if( m_flNextFlinch < gpGlobals->time )
			m_flNextFlinch = gpGlobals->time + SLOWER_FLINCH_DELAY;
	}
	else if( m_flNextFlinch >= gpGlobals->time )
	{
		iIgnore |= bits_COND_LIGHT_DAMAGE | bits_COND_HEAVY_DAMAGE;
	}

	return iIgnore;
}

void CCOFMonsterSlower::PainSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastPainSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pPainSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

void CCOFMonsterSlower::AlertSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastAlertSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pAlertSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

void CCOFMonsterSlower::IdleSound( void )
{
	if( !IsStuckVariant() && RANDOM_LONG( 0, 2 ) == 0 )
		AlertSound();
}

void CCOFMonsterSlower::AttackSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastAttackSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pAttackSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

class CCOFMonsterCompat : public CBaseMonster
{
public:
	CCOFMonsterCompat() :
		m_flNextEnemySearch( 0.0f ),
		m_flNextAttackTime( 0.0f )
	{
	}

	void Spawn( void );
	void Precache( void );
	void StartMonster( void );
	void MonsterThink( void );
	void SetYawSpeed( void );
	int Classify( void ) { return CLASS_ALIEN_MONSTER; }
	int IRelationship( CBaseEntity *pTarget );
	BOOL CheckMeleeAttack1( float flDot, float flDist );
	BOOL CheckRangeAttack1( float flDot, float flDist ) { return FALSE; }
	BOOL CheckRangeAttack2( float flDot, float flDist ) { return FALSE; }
	int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	void Killed( entvars_t *pevAttacker, int iGib );

private:
	const char *DefaultModel( void ) const;
	float DefaultHealth( void ) const;
	float MoveSpeed( void ) const;
	float AttackDamage( void ) const;
	float AttackDistance( void ) const;
	CBaseEntity *FindEnemy( void );
	void SetEnemy( CBaseEntity *pEnemy );
	void CombatThink( float flInterval );
	void MoveTowardEnemy( float flInterval, float flDist );
	void MeleeAttack( void );

	float m_flNextEnemySearch;
	float m_flNextAttackTime;
};

LINK_ENTITY_TO_CLASS( monster_sewmo, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_rcrazy, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_faceless, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_facelessv, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_nerd, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_faster, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_child, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_spitter, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_stranger, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_taller, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sawrunner, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_baby, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_suicider, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_krypande, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher2, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher3, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher4, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_crab, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_watro, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_crazybitch, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sawcrazy, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_ruben, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_booksimonsledgehammer, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_booksimon, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_bosschainsaw, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sewerboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_doctorboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_roofboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_custom, CCOFMonsterCompat )

const char *CCOFMonsterCompat::DefaultModel( void ) const
{
	if( FClassnameIs( pev, "monster_sewmo" ) ) return "models/sewmo.mdl";
	if( FClassnameIs( pev, "monster_rcrazy" ) ) return "models/runningcrazy.mdl";
	if( FClassnameIs( pev, "monster_faceless" ) || FClassnameIs( pev, "monster_facelessv" ) ) return "models/Faceless.mdl";
	if( FClassnameIs( pev, "monster_nerd" ) ) return "models/psycho.mdl";
	if( FClassnameIs( pev, "monster_faster" ) ) return "models/faster.mdl";
	if( FClassnameIs( pev, "monster_child" ) ) return "models/children.mdl";
	if( FClassnameIs( pev, "monster_spitter" ) ) return "models/spitter.mdl";
	if( FClassnameIs( pev, "monster_stranger" ) ) return "models/stranger.mdl";
	if( FClassnameIs( pev, "monster_taller" ) ) return "models/taller.mdl";
	if( FClassnameIs( pev, "monster_sawrunner" ) ) return "models/sawrunner.mdl";
	if( FClassnameIs( pev, "monster_baby" ) ) return "models/baby.mdl";
	if( FClassnameIs( pev, "monster_suicider" ) ) return "models/suicider.mdl";
	if( FClassnameIs( pev, "monster_krypande" ) ) return "models/krypande.mdl";
	if( FClassnameIs( pev, "monster_twitcher" ) || FClassnameIs( pev, "monster_twitcher2" ) ||
		FClassnameIs( pev, "monster_twitcher3" ) || FClassnameIs( pev, "monster_twitcher4" ) ) return "models/twister.mdl";
	if( FClassnameIs( pev, "monster_crab" ) ) return "models/Facehead.mdl";
	if( FClassnameIs( pev, "monster_watro" ) ) return "models/watro.mdl";
	if( FClassnameIs( pev, "monster_crazybitch" ) ) return "models/crazywoman.mdl";
	if( FClassnameIs( pev, "monster_sawcrazy" ) ) return "models/sawcrazy.mdl";
	if( FClassnameIs( pev, "monster_ruben" ) ) return "models/crazyrumpel.mdl";
	if( FClassnameIs( pev, "monster_booksimonsledgehammer" ) ) return "models/booksimon_m.mdl";
	if( FClassnameIs( pev, "monster_booksimon" ) ) return "models/booksimon.mdl";
	if( FClassnameIs( pev, "monster_bosschainsaw" ) ) return "models/chainsawguy.mdl";
	if( FClassnameIs( pev, "monster_sewerboss" ) ) return "models/sewer_boss.mdl";
	if( FClassnameIs( pev, "monster_doctorboss" ) ) return "models/doctor_boss.mdl";
	if( FClassnameIs( pev, "monster_roofboss" ) ) return "models/carcassboss.mdl";

	return "models/slower.mdl";
}

float CCOFMonsterCompat::DefaultHealth( void ) const
{
	if( FClassnameIs( pev, "monster_sawrunner" ) || FClassnameIs( pev, "monster_bosschainsaw" ) )
		return 400.0f;
	if( FClassnameIs( pev, "monster_booksimon" ) || FClassnameIs( pev, "monster_booksimonsledgehammer" ) ||
		FClassnameIs( pev, "monster_doctorboss" ) || FClassnameIs( pev, "monster_roofboss" ) ||
		FClassnameIs( pev, "monster_sewerboss" ) )
		return 700.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) )
		return 35.0f;

	return 80.0f;
}

float CCOFMonsterCompat::MoveSpeed( void ) const
{
	if( FClassnameIs( pev, "monster_faster" ) || FClassnameIs( pev, "monster_rcrazy" ) ||
		FClassnameIs( pev, "monster_sawrunner" ) )
		return 250.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) ||
		FClassnameIs( pev, "monster_krypande" ) )
		return 95.0f;

	return 155.0f;
}

float CCOFMonsterCompat::AttackDamage( void ) const
{
	if( FClassnameIs( pev, "monster_sawrunner" ) || FClassnameIs( pev, "monster_bosschainsaw" ) )
		return 35.0f;
	if( FClassnameIs( pev, "monster_booksimon" ) || FClassnameIs( pev, "monster_booksimonsledgehammer" ) ||
		FClassnameIs( pev, "monster_doctorboss" ) || FClassnameIs( pev, "monster_roofboss" ) ||
		FClassnameIs( pev, "monster_sewerboss" ) )
		return 25.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) )
		return 8.0f;

	return 14.0f;
}

float CCOFMonsterCompat::AttackDistance( void ) const
{
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) ||
		FClassnameIs( pev, "monster_krypande" ) )
		return 58.0f;

	return 82.0f;
}

void CCOFMonsterCompat::Precache( void )
{
	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( DefaultModel() );

	PRECACHE_MODEL( STRING( pev->model ) );
}

void CCOFMonsterCompat::Spawn( void )
{
	Precache();

	if( pev->body < 0 )
		pev->body = 0;

	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX );

	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->takedamage = DAMAGE_AIM;
	pev->health = pev->health > 0 ? pev->health : DefaultHealth();
	pev->max_health = pev->health;
	pev->view_ofs = VEC_VIEW;
	m_bloodColor = BLOOD_COLOR_RED;
	m_flFieldOfView = 0.5f;
	m_MonsterState = MONSTERSTATE_NONE;
	m_afCapability = bits_CAP_DOORS_GROUP | bits_CAP_MELEE_ATTACK1;

	MonsterInit();
}

void CCOFMonsterCompat::StartMonster( void )
{
	CBaseMonster::StartMonster();
	m_flDistLook = 1800.0f;
	m_flDistTooFar = 1200.0f;

	if( !m_pCine && m_MonsterState != MONSTERSTATE_DEAD )
		SetActivity( ACT_IDLE );
}

void CCOFMonsterCompat::SetYawSpeed( void )
{
	switch( m_Activity )
	{
	case ACT_MELEE_ATTACK1:
		pev->yaw_speed = 170;
		break;
	case ACT_WALK:
	case ACT_RUN:
		pev->yaw_speed = 150;
		break;
	default:
		pev->yaw_speed = 110;
		break;
	}
}

int CCOFMonsterCompat::IRelationship( CBaseEntity *pTarget )
{
	if( pTarget && pTarget->IsPlayer() )
		return R_HT;

	return CBaseMonster::IRelationship( pTarget );
}

BOOL CCOFMonsterCompat::CheckMeleeAttack1( float flDot, float flDist )
{
	return m_hEnemy != 0 && flDist <= AttackDistance() && flDot >= 0.62f;
}

CBaseEntity *CCOFMonsterCompat::FindEnemy( void )
{
	CBaseEntity *pPlayer = UTIL_PlayerByIndex( 1 );
	if( !pPlayer || !pPlayer->IsAlive() || FBitSet( pPlayer->pev->flags, FL_NOTARGET ) )
		return NULL;

	const float flDist = ( pPlayer->pev->origin - pev->origin ).Length();
	if( flDist > m_flDistLook )
		return NULL;

	if( flDist > 192.0f && !FInViewCone( pPlayer ) )
		return NULL;

	if( flDist > 256.0f && !FVisible( pPlayer ) )
		return NULL;

	return pPlayer;
}

void CCOFMonsterCompat::SetEnemy( CBaseEntity *pEnemy )
{
	if( !pEnemy )
		return;

	m_hEnemy = pEnemy;
	m_vecEnemyLKP = pEnemy->pev->origin;
	SetConditions( bits_COND_NEW_ENEMY | bits_COND_SEE_ENEMY | bits_COND_SEE_CLIENT | bits_COND_SEE_HATE );
	m_IdealMonsterState = MONSTERSTATE_COMBAT;
	m_MonsterState = MONSTERSTATE_COMBAT;
}

void CCOFMonsterCompat::MoveTowardEnemy( float flInterval, float flDist )
{
	if( m_hEnemy == 0 || flDist <= AttackDistance() * 0.82f )
		return;

	if( m_Activity != ACT_WALK )
		SetActivity( ACT_WALK );

	Vector vecDir = m_hEnemy->pev->origin - pev->origin;
	vecDir.z = 0;
	pev->ideal_yaw = UTIL_VecToYaw( vecDir );
	ChangeYaw( pev->yaw_speed );

	const float flStep = MoveSpeed() * flInterval;
	if( !WALK_MOVE( ENT( pev ), pev->angles.y, flStep, WALKMOVE_NORMAL ) )
	{
		if( !WALK_MOVE( ENT( pev ), pev->angles.y + 35.0f, flStep * 0.65f, WALKMOVE_NORMAL ) )
			WALK_MOVE( ENT( pev ), pev->angles.y - 35.0f, flStep * 0.65f, WALKMOVE_NORMAL );
	}
}

void CCOFMonsterCompat::MeleeAttack( void )
{
	CBaseEntity *pHurt = CheckTraceHullAttack( AttackDistance(), (int)AttackDamage(), DMG_CLUB );
	if( pHurt && pHurt->pev->flags & ( FL_MONSTER | FL_CLIENT ) )
		pHurt->pev->punchangle.x = 5;
}

void CCOFMonsterCompat::CombatThink( float flInterval )
{
	if( gpGlobals->time >= m_flNextEnemySearch || m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		m_flNextEnemySearch = gpGlobals->time + 0.25f;
		SetEnemy( FindEnemy() );
	}

	if( m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		if( m_Activity != ACT_IDLE )
			SetActivity( ACT_IDLE );

		m_MonsterState = MONSTERSTATE_IDLE;
		return;
	}

	Vector vecToEnemy = m_hEnemy->pev->origin - pev->origin;
	vecToEnemy.z = 0;
	const float flDist = vecToEnemy.Length();

	if( flDist > 0.1f )
	{
		pev->ideal_yaw = UTIL_VecToYaw( vecToEnemy );
		ChangeYaw( pev->yaw_speed );
	}

	if( m_Activity == ACT_MELEE_ATTACK1 )
	{
		if( m_fSequenceFinished && gpGlobals->time >= m_flNextAttackTime - 0.2f )
			SetActivity( flDist <= AttackDistance() ? ACT_IDLE : ACT_WALK );
		return;
	}

	if( flDist <= AttackDistance() && gpGlobals->time >= m_flNextAttackTime )
	{
		SetActivity( ACT_MELEE_ATTACK1 );
		MeleeAttack();
		m_flNextAttackTime = gpGlobals->time + 0.9f;
		return;
	}

	MoveTowardEnemy( flInterval, flDist );
}

void CCOFMonsterCompat::MonsterThink( void )
{
	if( m_pCine || m_MonsterState == MONSTERSTATE_SCRIPT || m_MonsterState == MONSTERSTATE_DEAD || pev->deadflag != DEAD_NO )
	{
		CBaseMonster::MonsterThink();
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;
	float flInterval = StudioFrameAdvance();
	DispatchAnimEvents( flInterval );
	CombatThink( flInterval );
	FCheckAITrigger();
}

int CCOFMonsterCompat::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( IsAlive() && pevAttacker )
	{
		CBaseEntity *pAttacker = CBaseEntity::Instance( ENT( pevAttacker ) );
		if( pAttacker && pAttacker->IsPlayer() )
			SetEnemy( pAttacker );
	}

	return CBaseMonster::TakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
}

void CCOFMonsterCompat::Killed( entvars_t *pevAttacker, int iGib )
{
	if( m_iTriggerCondition == AITRIGGER_DEATH && COF_HasText( m_iszTriggerTarget ) )
	{
		FireTargets( STRING( m_iszTriggerTarget ), this, this, USE_TOGGLE, 0 );
		m_iTriggerCondition = AITRIGGER_NONE;
	}

	CBaseMonster::Killed( pevAttacker, iGib );
}

LINK_ENTITY_TO_CLASS( info_simon_spawnpoint, CPointEntity )
LINK_ENTITY_TO_CLASS( info_texlights, CPointEntity )
LINK_ENTITY_TO_CLASS( envpos_sky, CPointEntity )
LINK_ENTITY_TO_CLASS( envpos_world, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_coop_spawn1, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_coop_spawn2, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_coop_spawn3, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_coop_spawn4, CPointEntity )
LINK_ENTITY_TO_CLASS( rain_settings, CPointEntity )
LINK_ENTITY_TO_CLASS( rain_modify, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_developer_commentary, CPointEntity )
LINK_ENTITY_TO_CLASS( cof_billboard, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( cof_bosshealthbar, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( env_fog, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( env_grass_sprite, CCOFParticle )
LINK_ENTITY_TO_CLASS( camera_spot_trigger, CCOFParticle )
