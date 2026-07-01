/***
*
*   Cry of Fear player and scripted event compatibility entities.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "shake.h"
#include "weapons.h"
#include "cof_utils.h"

extern int gmsgSetFOV;
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
