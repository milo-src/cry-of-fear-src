/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"

extern int gmsgItemPickup;

static const char *COF_ItemDisplayName( const char *pszName )
{
	if( !pszName )
		return "";

	const char *pszStart = strrchr( pszName, '/' );
	if( !pszStart )
		pszStart = strrchr( pszName, '\\' );
	pszStart = pszStart ? pszStart + 1 : pszName;

	static char szDisplay[64];
	strlcpy( szDisplay, pszStart, sizeof( szDisplay ) );

	char *pszExt = strrchr( szDisplay, '.' );
	if( pszExt )
		*pszExt = '\0';

	return szDisplay;
}

BOOL CBasePlayer::COF_HasInventoryItem( const char *pszName ) const
{
	if( !pszName || !pszName[0] )
		return FALSE;

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( !FStringNull( m_rgCOFInventory[i] ) && FStrEq( STRING( m_rgCOFInventory[i] ), pszName ) )
			return TRUE;
	}

	return FALSE;
}

BOOL CBasePlayer::COF_AddInventoryItem( const char *pszName )
{
	if( !pszName || !pszName[0] )
		return FALSE;

	if( COF_HasInventoryItem( pszName ) )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "Item already in inventory" );
		return FALSE;
	}

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( FStringNull( m_rgCOFInventory[i] ) )
		{
			m_rgCOFInventory[i] = ALLOC_STRING( pszName );

			MESSAGE_BEGIN( MSG_ONE, gmsgItemPickup, NULL, pev );
				WRITE_STRING( COF_ItemDisplayName( pszName ) );
			MESSAGE_END();

			ClientPrint( pev, HUD_PRINTCENTER, UTIL_VarArgs( "Picked up: %s", COF_ItemDisplayName( pszName ) ) );
			return TRUE;
		}
	}

	ClientPrint( pev, HUD_PRINTCENTER, "Inventory is full" );
	return FALSE;
}

void CBasePlayer::COF_PrintInventory( void )
{
	int iCount = 0;

	ClientPrint( pev, HUD_PRINTCONSOLE, "Cry of Fear inventory:\n" );
	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( !FStringNull( m_rgCOFInventory[i] ) )
		{
			ClientPrint( pev, HUD_PRINTCONSOLE, UTIL_VarArgs( "  %d. %s\n", iCount + 1, STRING( m_rgCOFInventory[i] ) ) );
			iCount++;
		}
	}

	if( iCount == 0 )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "Inventory is empty" );
		ClientPrint( pev, HUD_PRINTCONSOLE, "  empty\n" );
	}
	else
	{
		ClientPrint( pev, HUD_PRINTCENTER, UTIL_VarArgs( "Inventory: %d item(s). See console.", iCount ) );
	}
}

static CBasePlayer *COF_FindPlayer( CBaseEntity *pActivator, CBaseEntity *pCaller )
{
	if( pActivator && pActivator->IsPlayer() )
		return (CBasePlayer *)pActivator;

	if( pCaller && pCaller->IsPlayer() )
		return (CBasePlayer *)pCaller;

	return (CBasePlayer *)UTIL_PlayerByIndex( 1 );
}

static BOOL COF_GiveTokenToPlayer( CBasePlayer *pPlayer, const char *pszToken )
{
	if( !pPlayer || !pszToken || !pszToken[0] )
		return FALSE;

	if( !strncmp( pszToken, "weapon_", 7 ) || !strncmp( pszToken, "item_", 5 ) || !strncmp( pszToken, "ammo_", 5 ) )
	{
		pPlayer->GiveNamedItem( pszToken );
		return TRUE;
	}

	return pPlayer->COF_AddInventoryItem( pszToken );
}

class CCofGiveItems : public CPointEntity
{
public:
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( cof_giveitems, CCofGiveItems )

void CCofGiveItems::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( FStringNull( pev->message ) )
		return;

	CBasePlayer *pPlayer = COF_FindPlayer( pActivator, pCaller );
	COF_GiveTokenToPlayer( pPlayer, STRING( pev->message ) );
	SUB_UseTargets( pPlayer ? pPlayer : pActivator, USE_TOGGLE, 0 );
}

class CCofHint : public CPointEntity
{
public:
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( cof_hint, CCofHint )

void CCofHint::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_FindPlayer( pActivator, pCaller );
	if( !pPlayer )
		return;

	const char *pszMessage = FStringNull( pev->message ) ? "" : STRING( pev->message );
	if( FStrEq( pszMessage, "inventory" ) )
	{
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Press TAB to open inventory" );
		return;
	}

	ClientPrint( pPlayer->pev, HUD_PRINTCENTER, pszMessage );
}

class CCofItemKey : public CBaseAnimating
{
public:
	void Spawn( void );
	void Precache( void );
	void KeyValue( KeyValueData *pkvd );
	void Touch( CBaseEntity *pOther );
};

LINK_ENTITY_TO_CLASS( item_key, CCofItemKey )

void CCofItemKey::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "keyscript" ) || FStrEq( pkvd->szKeyName, "customscript" ) )
	{
		pev->message = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
	{
		CBaseAnimating::KeyValue( pkvd );
	}
}

void CCofItemKey::Precache( void )
{
	if( !FStringNull( pev->model ) )
		PRECACHE_MODEL( STRING( pev->model ) );

	PRECACHE_SOUND( "items/gunpickup2.wav" );
	PRECACHE_SOUND( "buttons/lighterpickup.wav" );
}

void CCofItemKey::Spawn( void )
{
	Precache();

	pev->movetype = MOVETYPE_TOSS;
	pev->solid = SOLID_TRIGGER;

	if( !FStringNull( pev->model ) )
		SET_MODEL( ENT( pev ), STRING( pev->model ) );

	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 32 ) );
	UTIL_SetOrigin( pev, pev->origin );
	SetTouch( &CCofItemKey::Touch );
}

void CCofItemKey::Touch( CBaseEntity *pOther )
{
	if( !pOther || !pOther->IsPlayer() || FStringNull( pev->message ) )
		return;

	CBasePlayer *pPlayer = (CBasePlayer *)pOther;
	if( !COF_GiveTokenToPlayer( pPlayer, STRING( pev->message ) ) )
		return;

	EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "items/gunpickup2.wav", 1.0f, ATTN_NORM );
	SUB_UseTargets( pOther, USE_TOGGLE, 0 );
	UTIL_Remove( this );
}
