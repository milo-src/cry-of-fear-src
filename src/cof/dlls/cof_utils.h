/***
*
*	Small shared helpers for Cry of Fear compatibility code.
*
****/

#pragma once

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"

inline BOOL COF_HasText( string_t iszText )
{
	return !FStringNull( iszText ) && STRING( iszText )[0] != '\0';
}

inline CBasePlayer *COF_PlayerFromEntity( CBaseEntity *pEntity )
{
	if( pEntity && pEntity->IsPlayer() )
		return (CBasePlayer *)pEntity;

	return (CBasePlayer *)UTIL_PlayerByIndex( 1 );
}

inline void COF_ShowText( CBaseEntity *pActivator, string_t iszText )
{
	if( !COF_HasText( iszText ) )
		return;

	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer )
		UTIL_ShowMessage( STRING( iszText ), pPlayer );
	else
		UTIL_ShowMessageAll( STRING( iszText ) );
}

inline void COF_EmitOptionalSound( edict_t *pEdict, string_t iszSound, int channel = CHAN_ITEM )
{
	if( COF_HasText( iszSound ) )
		EMIT_SOUND( pEdict, channel, STRING( iszSound ), 1.0f, ATTN_NORM );
}

inline void COF_InitBrushTrigger( CBaseEntity *pEntity )
{
	pEntity->pev->movetype = MOVETYPE_NONE;
	pEntity->pev->solid = SOLID_TRIGGER;
	SET_MODEL( ENT( pEntity->pev ), STRING( pEntity->pev->model ) );
	SetBits( pEntity->pev->effects, EF_NODRAW );
}

inline CBasePlayerItem *COF_FindPlayerItemByName( CBasePlayer *pPlayer, const char *pszClassname )
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

inline BOOL COF_RemovePlayerItemByName( CBasePlayer *pPlayer, const char *pszClassname )
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

inline BOOL COF_PlayerHasToken( CBasePlayer *pPlayer, string_t iszToken )
{
	if( !pPlayer || !COF_HasText( iszToken ) )
		return FALSE;

	const char *pszToken = STRING( iszToken );
	if( !stricmp( pszToken, "none" ) || !stricmp( pszToken, "0" ) )
		return TRUE;

	return pPlayer->COF_HasInventoryItem( pszToken ) || pPlayer->HasNamedPlayerItem( pszToken );
}

inline float COF_KeyFloat( KeyValueData *pkvd )
{
	return pkvd && pkvd->szValue ? atof( pkvd->szValue ) : 0.0f;
}

inline Vector COF_ParseVector( const char *pszValue, const Vector &vecDefault = g_vecZero )
{
	if( !pszValue || !pszValue[0] )
		return vecDefault;

	Vector vecOut = vecDefault;
	float x, y, z;
	if( sscanf( pszValue, "%f %f %f", &x, &y, &z ) == 3 )
		vecOut = Vector( x, y, z );

	return vecOut;
}

inline CBaseEntity *COF_FindEntityByNameOrClass( const char *pszName, CBaseEntity *pStart = NULL )
{
	if( !pszName || !pszName[0] )
		return NULL;

	CBaseEntity *pEntity = UTIL_FindEntityByTargetname( pStart, pszName );
	if( pEntity )
		return pEntity;

	return UTIL_FindEntityByClassname( pStart, pszName );
}

inline BOOL COF_EntityCanAnimate( CBaseEntity *pEntity )
{
	if( !pEntity || FStringNull( pEntity->pev->model ) )
		return FALSE;

	if( pEntity->MyMonsterPointer() )
		return TRUE;

	return FClassnameIs( pEntity->pev, "env_model" ) ||
		FClassnameIs( pEntity->pev, "cycler_sprite" ) ||
		FClassnameIs( pEntity->pev, "cof_mdlcutscene" ) ||
		FClassnameIs( pEntity->pev, "cutscene_model" );
}

inline BOOL COF_PlayNamedSequence( CBaseEntity *pEntity, const char *pszSequence, float flFramerate = 1.0f )
{
	if( !COF_EntityCanAnimate( pEntity ) || !pszSequence || !pszSequence[0] )
		return FALSE;

	CBaseAnimating *pAnimating = (CBaseAnimating *)pEntity;
	const int iSequence = pAnimating->LookupSequence( pszSequence );
	if( iSequence < 0 )
		return FALSE;

	pAnimating->pev->sequence = iSequence;
	pAnimating->pev->frame = 0;
	pAnimating->ResetSequenceInfo();
	pAnimating->pev->framerate = flFramerate;
	return TRUE;
}

inline void COF_RunConsoleCommand( const char *pszCommand )
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
