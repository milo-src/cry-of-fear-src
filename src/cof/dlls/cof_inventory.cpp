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
extern int gmsgCofInvClear;
extern int gmsgCofInvItem;
extern int gmsgCofInvQuick;

struct COFInventoryDef
{
	char mapName[64];
	char niceName[128];
	char className[64];
	char model[128];
	char pickupSound[128];
	char combinedWith[128];
	char combinedResult[128];
	char combinedSound[128];
	BOOL droppable;
};

static void COF_ClearItemDef( COFInventoryDef *pDef )
{
	memset( pDef, 0, sizeof( *pDef ) );
	pDef->droppable = FALSE;
}

static const char *COF_FileBaseName( const char *pszName, char *pszOut, size_t outSize )
{
	if( !pszName || !pszName[0] )
	{
		strlcpy( pszOut, "", outSize );
		return pszOut;
	}

	const char *pszStart = strrchr( pszName, '/' );
	if( !pszStart )
		pszStart = strrchr( pszName, '\\' );
	pszStart = pszStart ? pszStart + 1 : pszName;

	strlcpy( pszOut, pszStart, outSize );
	char *pszExt = strrchr( pszOut, '.' );
	if( pszExt )
		*pszExt = '\0';

	return pszOut;
}

static const char *COF_ItemDisplayName( const char *pszName )
{
	static char szDisplay[64];
	return COF_FileBaseName( pszName, szDisplay, sizeof( szDisplay ) );
}

static BOOL COF_StringEndsWith( const char *pszText, const char *pszSuffix )
{
	if( !pszText || !pszSuffix )
		return FALSE;

	const size_t textLen = strlen( pszText );
	const size_t suffixLen = strlen( pszSuffix );
	if( suffixLen > textLen )
		return FALSE;

	return !stricmp( pszText + textLen - suffixLen, pszSuffix );
}

static void COF_NormalizeSlashes( char *pszText )
{
	for( char *p = pszText; p && *p; p++ )
	{
		if( *p == '\\' )
			*p = '/';
	}
}

static BOOL COF_NormalizeInventoryPath( const char *pszToken, char *pszOut, size_t outSize )
{
	if( !pszToken || !pszToken[0] )
		return FALSE;

	if( !strnicmp( pszToken, "inventoryitems/", 15 ) || !strnicmp( pszToken, "inventoryitems\\", 15 ) )
	{
		strlcpy( pszOut, pszToken, outSize );
		COF_NormalizeSlashes( pszOut );
		return TRUE;
	}

	if( !strncmp( pszToken, "weapon_", 7 ) )
	{
		snprintf( pszOut, outSize, "inventoryitems/weapons/%s.txt", pszToken );
		return TRUE;
	}

	if( strchr( pszToken, '/' ) || strchr( pszToken, '\\' ) )
	{
		strlcpy( pszOut, pszToken, outSize );
		COF_NormalizeSlashes( pszOut );
		return TRUE;
	}

	if( COF_StringEndsWith( pszToken, ".txt" ) )
		snprintf( pszOut, outSize, "inventoryitems/%s", pszToken );
	else
		snprintf( pszOut, outSize, "inventoryitems/%s.txt", pszToken );

	return TRUE;
}

static BOOL COF_FileExists( const char *pszPath )
{
	int length = 0;
	byte *pFile = LOAD_FILE_FOR_ME( pszPath, &length );
	if( !pFile )
		return FALSE;

	FREE_FILE( pFile );
	return TRUE;
}

static BOOL COF_ParseQuotedValue( const char *pszFile, const char *pszKey, char *pszOut, size_t outSize )
{
	char szNeedle[96];
	snprintf( szNeedle, sizeof( szNeedle ), "\"%s\"", pszKey );

	const char *p = pszFile;
	while( ( p = strstr( p, szNeedle ) ) != NULL )
	{
		const char *pszData = strstr( p + strlen( szNeedle ), "data" );
		if( !pszData )
			return FALSE;

		const char *pszQuote = strchr( pszData, '"' );
		if( !pszQuote )
			return FALSE;
		pszQuote++;

		const char *pszEnd = strchr( pszQuote, '"' );
		if( !pszEnd )
			return FALSE;

		const size_t len = Q_min( (size_t)( pszEnd - pszQuote ), outSize - 1 );
		memcpy( pszOut, pszQuote, len );
		pszOut[len] = '\0';
		return TRUE;
	}

	return FALSE;
}

static BOOL COF_LoadItemDef( const char *pszPath, COFInventoryDef *pDef )
{
	COF_ClearItemDef( pDef );

	int length = 0;
	byte *pFile = LOAD_FILE_FOR_ME( pszPath, &length );
	if( !pFile || length <= 0 )
		return FALSE;

	char *pszText = new char[length + 1];
	memcpy( pszText, pFile, length );
	pszText[length] = '\0';
	FREE_FILE( pFile );

	COF_ParseQuotedValue( pszText, "map_name", pDef->mapName, sizeof( pDef->mapName ) );
	COF_ParseQuotedValue( pszText, "nice_name", pDef->niceName, sizeof( pDef->niceName ) );
	COF_ParseQuotedValue( pszText, "classname", pDef->className, sizeof( pDef->className ) );
	COF_ParseQuotedValue( pszText, "3dmdl", pDef->model, sizeof( pDef->model ) );
	COF_ParseQuotedValue( pszText, "pickup_sound", pDef->pickupSound, sizeof( pDef->pickupSound ) );
	COF_ParseQuotedValue( pszText, "combined_with", pDef->combinedWith, sizeof( pDef->combinedWith ) );
	COF_ParseQuotedValue( pszText, "combined_result", pDef->combinedResult, sizeof( pDef->combinedResult ) );
	COF_ParseQuotedValue( pszText, "combined_sound", pDef->combinedSound, sizeof( pDef->combinedSound ) );

	char szDroppable[16];
	if( COF_ParseQuotedValue( pszText, "droppable", szDroppable, sizeof( szDroppable ) ) )
		pDef->droppable = atoi( szDroppable ) != 0;

	delete[] pszText;
	return TRUE;
}

static BOOL COF_DefMatchesName( const COFInventoryDef &def, const char *pszName, const char *pszPath )
{
	if( !pszName || !pszName[0] )
		return FALSE;

	if( def.mapName[0] && !stricmp( def.mapName, pszName ) )
		return TRUE;
	if( def.niceName[0] && !stricmp( def.niceName, pszName ) )
		return TRUE;
	if( def.className[0] && !stricmp( def.className, pszName ) )
		return TRUE;

	char szBase[64];
	COF_FileBaseName( pszPath, szBase, sizeof( szBase ) );
	return !stricmp( szBase, pszName );
}

static BOOL COF_DefIsWeaponClass( const COFInventoryDef &def, const char *pszPath, const char *pszClassName )
{
	if( !pszClassName || !pszClassName[0] )
		return FALSE;

	if( def.className[0] && !stricmp( def.className, pszClassName ) )
		return TRUE;

	char szBase[64];
	COF_FileBaseName( pszPath, szBase, sizeof( szBase ) );
	return !stricmp( szBase, pszClassName );
}

static BOOL COF_IsMobileSwitchbladePair( const COFInventoryDef &firstDef, const char *pszFirstPath, const COFInventoryDef &secondDef, const char *pszSecondPath )
{
	const BOOL firstMobile = COF_DefIsWeaponClass( firstDef, pszFirstPath, "weapon_mobile" );
	const BOOL secondMobile = COF_DefIsWeaponClass( secondDef, pszSecondPath, "weapon_mobile" );
	const BOOL firstSwitchblade = COF_DefIsWeaponClass( firstDef, pszFirstPath, "weapon_switchblade" );
	const BOOL secondSwitchblade = COF_DefIsWeaponClass( secondDef, pszSecondPath, "weapon_switchblade" );

	return ( firstMobile && secondSwitchblade ) || ( firstSwitchblade && secondMobile );
}

static void COF_EquipMobileSwitchblade( CBasePlayer *pPlayer )
{
	if( !pPlayer )
		return;

	if( !pPlayer->HasNamedPlayerItem( "weapon_mobile_switchblade" ) )
		pPlayer->GiveNamedItem( "weapon_mobile_switchblade" );

	if( pPlayer->HasNamedPlayerItem( "weapon_mobile_switchblade" ) )
	{
		pPlayer->SelectItem( "weapon_mobile_switchblade" );
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/mobile/mobile_switch.wav", 0.85f, ATTN_NORM );
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Mobile phone + switchblade equipped" );
	}
	else
	{
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Cannot equip this dual wield pair" );
	}
}

static const char *COF_GetInventoryPath( const CBasePlayer *pPlayer, int iIndex )
{
	if( !pPlayer || iIndex < 0 || iIndex >= MAX_COF_INVENTORY || FStringNull( pPlayer->m_rgCOFInventory[iIndex] ) )
		return NULL;

	return STRING( pPlayer->m_rgCOFInventory[iIndex] );
}

static int COF_FindInventoryPathIndex( const CBasePlayer *pPlayer, const char *pszPath )
{
	if( !pPlayer || !pszPath || !pszPath[0] )
		return -1;

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		const char *pszItemPath = COF_GetInventoryPath( pPlayer, i );
		if( pszItemPath && !stricmp( pszItemPath, pszPath ) )
			return i;
	}

	return -1;
}

static void COF_ClearQuickSlotsForPath( CBasePlayer *pPlayer, const char *pszPath )
{
	if( !pPlayer || !pszPath || !pszPath[0] )
		return;

	for( int i = 0; i < MAX_COF_QUICK_SLOTS; i++ )
	{
		if( !FStringNull( pPlayer->m_rgCOFQuickSlots[i] ) && !stricmp( STRING( pPlayer->m_rgCOFQuickSlots[i] ), pszPath ) )
			pPlayer->m_rgCOFQuickSlots[i] = iStringNull;
	}
}

static void COF_PrecacheOptionalSound( const char *pszSound )
{
	if( pszSound && pszSound[0] )
		PRECACHE_SOUND( pszSound );
}

void CBasePlayer::COF_SendInventory( void )
{
	MESSAGE_BEGIN( MSG_ONE, gmsgCofInvClear, NULL, pev );
	MESSAGE_END();

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( !FStringNull( m_rgCOFInventory[i] ) )
		{
			MESSAGE_BEGIN( MSG_ONE, gmsgCofInvItem, NULL, pev );
				WRITE_BYTE( i );
				WRITE_STRING( STRING( m_rgCOFInventory[i] ) );
			MESSAGE_END();
		}
	}

	COF_SendQuickSlots();
}

void CBasePlayer::COF_SendQuickSlot( int iQuickSlot )
{
	if( iQuickSlot < 0 || iQuickSlot >= MAX_COF_QUICK_SLOTS )
		return;

	const char *pszPath = FStringNull( m_rgCOFQuickSlots[iQuickSlot] ) ? "" : STRING( m_rgCOFQuickSlots[iQuickSlot] );
	MESSAGE_BEGIN( MSG_ONE, gmsgCofInvQuick, NULL, pev );
		WRITE_BYTE( iQuickSlot );
		WRITE_STRING( pszPath );
	MESSAGE_END();
}

void CBasePlayer::COF_SendQuickSlots( void )
{
	for( int i = 0; i < MAX_COF_QUICK_SLOTS; i++ )
		COF_SendQuickSlot( i );
}

BOOL CBasePlayer::COF_HasInventoryItem( const char *pszName ) const
{
	char szPath[128];
	if( !COF_NormalizeInventoryPath( pszName, szPath, sizeof( szPath ) ) )
		return FALSE;

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( !FStringNull( m_rgCOFInventory[i] ) && !stricmp( STRING( m_rgCOFInventory[i] ), szPath ) )
			return TRUE;
	}

	return FALSE;
}

BOOL CBasePlayer::COF_AddInventoryItem( const char *pszName )
{
	char szPath[128];
	if( !COF_NormalizeInventoryPath( pszName, szPath, sizeof( szPath ) ) )
		return FALSE;

	if( COF_HasInventoryItem( szPath ) )
		return FALSE;

	for( int i = 0; i < MAX_COF_INVENTORY; i++ )
	{
		if( FStringNull( m_rgCOFInventory[i] ) )
		{
			m_rgCOFInventory[i] = ALLOC_STRING( szPath );

			MESSAGE_BEGIN( MSG_ONE, gmsgCofInvItem, NULL, pev );
				WRITE_BYTE( i );
				WRITE_STRING( szPath );
			MESSAGE_END();

			COFInventoryDef def;
			const char *pszDisplay = COF_ItemDisplayName( szPath );
			if( COF_LoadItemDef( szPath, &def ) && def.niceName[0] )
				pszDisplay = def.niceName;

			MESSAGE_BEGIN( MSG_ONE, gmsgItemPickup, NULL, pev );
				WRITE_STRING( COF_ItemDisplayName( szPath ) );
			MESSAGE_END();

			ClientPrint( pev, HUD_PRINTCENTER, UTIL_VarArgs( "Picked up: %s", pszDisplay ) );
			return TRUE;
		}
	}

	ClientPrint( pev, HUD_PRINTCENTER, "Inventory is full" );
	return FALSE;
}

BOOL CBasePlayer::COF_GiveInventoryItem( const char *pszName )
{
	char szPath[128];
	if( !COF_NormalizeInventoryPath( pszName, szPath, sizeof( szPath ) ) )
		return FALSE;

	COFInventoryDef def;
	if( !COF_LoadItemDef( szPath, &def ) )
		return FALSE;

	return COF_AddInventoryItem( szPath );
}

BOOL CBasePlayer::COF_RemoveInventoryItem( int iIndex )
{
	if( iIndex < 0 || iIndex >= MAX_COF_INVENTORY || FStringNull( m_rgCOFInventory[iIndex] ) )
		return FALSE;

	char szRemovedPath[128];
	strlcpy( szRemovedPath, STRING( m_rgCOFInventory[iIndex] ), sizeof( szRemovedPath ) );
	COF_ClearQuickSlotsForPath( this, szRemovedPath );

	for( int i = iIndex; i < MAX_COF_INVENTORY - 1; i++ )
		m_rgCOFInventory[i] = m_rgCOFInventory[i + 1];

	m_rgCOFInventory[MAX_COF_INVENTORY - 1] = iStringNull;
	COF_SendInventory();
	return TRUE;
}

void CBasePlayer::COF_SetQuickSlot( int iQuickSlot, int iInventoryIndex )
{
	if( iQuickSlot < 0 || iQuickSlot >= MAX_COF_QUICK_SLOTS )
		return;

	const char *pszPath = COF_GetInventoryPath( this, iInventoryIndex );
	m_rgCOFQuickSlots[iQuickSlot] = pszPath ? ALLOC_STRING( pszPath ) : iStringNull;
	COF_SendQuickSlot( iQuickSlot );
}

void CBasePlayer::COF_UseQuickSlot( int iQuickSlot )
{
	if( iQuickSlot < 0 || iQuickSlot >= MAX_COF_QUICK_SLOTS || FStringNull( m_rgCOFQuickSlots[iQuickSlot] ) )
		return;

	const char *pszPath = STRING( m_rgCOFQuickSlots[iQuickSlot] );
	const int iInventoryIndex = COF_FindInventoryPathIndex( this, pszPath );
	if( iInventoryIndex < 0 )
	{
		m_rgCOFQuickSlots[iQuickSlot] = iStringNull;
		COF_SendQuickSlot( iQuickSlot );
		return;
	}

	COF_UseInventoryItem( iInventoryIndex );
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
		ClientPrint( pev, HUD_PRINTCONSOLE, "  empty\n" );
}

void CBasePlayer::COF_UseInventoryItem( int iIndex )
{
	const char *pszPath = COF_GetInventoryPath( this, iIndex );
	if( !pszPath )
		return;

	COFInventoryDef def;
	if( !COF_LoadItemDef( pszPath, &def ) )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "Cannot use this item" );
		return;
	}

	if( !strncmp( def.className, "weapon_", 7 ) )
	{
		if( !HasNamedPlayerItem( def.className ) )
			GiveNamedItem( def.className );
		SelectItem( def.className );
		return;
	}

	ClientPrint( pev, HUD_PRINTCENTER, UTIL_VarArgs( "%s cannot be used here", def.niceName[0] ? def.niceName : COF_ItemDisplayName( pszPath ) ) );
}

void CBasePlayer::COF_DropInventoryItem( int iIndex )
{
	const char *pszPath = COF_GetInventoryPath( this, iIndex );
	if( !pszPath )
		return;

	char szPath[128];
	strlcpy( szPath, pszPath, sizeof( szPath ) );

	COFInventoryDef def;
	if( !COF_LoadItemDef( szPath, &def ) || !def.droppable )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "This item cannot be dropped" );
		return;
	}

	UTIL_MakeVectors( pev->v_angle );

	if( !strncmp( def.className, "weapon_", 7 ) )
	{
		DropPlayerItem( def.className );
		COF_RemoveInventoryItem( iIndex );
		return;
	}

	edict_t *pent = CREATE_NAMED_ENTITY( MAKE_STRING( "item_key" ) );
	if( !FNullEnt( pent ) )
	{
		entvars_t *pevItem = VARS( pent );
		pevItem->origin = pev->origin + pev->view_ofs + gpGlobals->v_forward * 48;
		pevItem->angles = pev->angles;
		pevItem->velocity = gpGlobals->v_forward * 120 + Vector( 0, 0, 90 );
		pevItem->message = MAKE_STRING( szPath );
		if( def.model[0] )
			pevItem->model = MAKE_STRING( def.model );

		DispatchSpawn( pent );
	}

	COF_RemoveInventoryItem( iIndex );
}

void CBasePlayer::COF_CombineInventoryItems( int iFirst, int iSecond )
{
	if( iFirst == iSecond )
		return;

	const char *pszFirst = COF_GetInventoryPath( this, iFirst );
	const char *pszSecond = COF_GetInventoryPath( this, iSecond );
	if( !pszFirst || !pszSecond )
		return;

	char szFirst[128], szSecond[128];
	strlcpy( szFirst, pszFirst, sizeof( szFirst ) );
	strlcpy( szSecond, pszSecond, sizeof( szSecond ) );

	COFInventoryDef firstDef, secondDef;
	if( !COF_LoadItemDef( szFirst, &firstDef ) || !COF_LoadItemDef( szSecond, &secondDef ) )
		return;

	if( COF_IsMobileSwitchbladePair( firstDef, szFirst, secondDef, szSecond ) )
	{
		COF_EquipMobileSwitchblade( this );
		return;
	}

	const COFInventoryDef *pResultDef = NULL;
	const char *pszResult = NULL;

	if( firstDef.combinedWith[0] && COF_DefMatchesName( secondDef, firstDef.combinedWith, szSecond ) )
	{
		pResultDef = &firstDef;
		pszResult = firstDef.combinedResult;
	}
	else if( secondDef.combinedWith[0] && COF_DefMatchesName( firstDef, secondDef.combinedWith, szFirst ) )
	{
		pResultDef = &secondDef;
		pszResult = secondDef.combinedResult;
	}

	if( !pszResult || !pszResult[0] )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "These items do not combine" );
		return;
	}

	if( pResultDef && pResultDef->combinedSound[0] )
	{
		COF_PrecacheOptionalSound( pResultDef->combinedSound );
		EMIT_SOUND( ENT( pev ), CHAN_ITEM, pResultDef->combinedSound, 1.0f, ATTN_NORM );
	}

	char szResultPath[128];
	const BOOL hasResultPath = COF_NormalizeInventoryPath( pszResult, szResultPath, sizeof( szResultPath ) ) && COF_FileExists( szResultPath );

	if( hasResultPath )
	{
		COF_RemoveInventoryItem( Q_max( iFirst, iSecond ) );
		COF_RemoveInventoryItem( Q_min( iFirst, iSecond ) );
		COF_AddInventoryItem( szResultPath );
	}
	else
	{
		const BOOL firstWeapon = !strncmp( firstDef.className, "weapon_", 7 );
		const BOOL secondWeapon = !strncmp( secondDef.className, "weapon_", 7 );

		if( firstWeapon && !secondWeapon )
			COF_RemoveInventoryItem( iSecond );
		else if( secondWeapon && !firstWeapon )
			COF_RemoveInventoryItem( iFirst );
		else
			COF_RemoveInventoryItem( iSecond );
	}

	ClientPrint( pev, HUD_PRINTCENTER, "Items combined" );
}

void CBasePlayer::COF_DualWieldInventoryItems( int iFirst, int iSecond )
{
	if( iFirst == iSecond )
		return;

	const char *pszFirst = COF_GetInventoryPath( this, iFirst );
	const char *pszSecond = COF_GetInventoryPath( this, iSecond );
	if( !pszFirst || !pszSecond )
		return;

	COFInventoryDef firstDef, secondDef;
	if( !COF_LoadItemDef( pszFirst, &firstDef ) || !COF_LoadItemDef( pszSecond, &secondDef ) )
		return;

	if( COF_IsMobileSwitchbladePair( firstDef, pszFirst, secondDef, pszSecond ) )
	{
		COF_EquipMobileSwitchblade( this );
		return;
	}

	if( strncmp( firstDef.className, "weapon_", 7 ) || strncmp( secondDef.className, "weapon_", 7 ) )
	{
		ClientPrint( pev, HUD_PRINTCENTER, "Only weapons can be dual wielded" );
		return;
	}

	COF_SetQuickSlot( 0, iFirst );
	COF_SetQuickSlot( 1, iSecond );
	ClientPrint( pev, HUD_PRINTCENTER, "Dual wield pair assigned to slots 1 and 2" );
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
	int ObjectCaps( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

private:
	bool Pickup( CBasePlayer *pPlayer );
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

	if( !FStringNull( pev->message ) )
	{
		COFInventoryDef def;
		if( COF_LoadItemDef( STRING( pev->message ), &def ) )
			COF_PrecacheOptionalSound( def.pickupSound );
	}
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
	SetUse( &CCofItemKey::Use );
}

int CCofItemKey::ObjectCaps( void )
{
	return ( CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE;
}

void CCofItemKey::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_FindPlayer( pActivator, pCaller );
	if( !pPlayer )
		return;

	Pickup( pPlayer );
}

bool CCofItemKey::Pickup( CBasePlayer *pPlayer )
{
	if( !pPlayer || FStringNull( pev->message ) )
		return false;

	if( !COF_GiveTokenToPlayer( pPlayer, STRING( pev->message ) ) )
		return false;

	COFInventoryDef def;
	if( COF_LoadItemDef( STRING( pev->message ), &def ) && def.pickupSound[0] )
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, def.pickupSound, 1.0f, ATTN_NORM );
	else
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "items/gunpickup2.wav", 1.0f, ATTN_NORM );

	SUB_UseTargets( pPlayer, USE_TOGGLE, 0 );
	UTIL_Remove( this );
	return true;
}
