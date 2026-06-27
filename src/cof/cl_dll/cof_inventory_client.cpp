#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include "keydefs.h"
#include "cof_ui.h"
#include "cof_inventory_client.h"

#include <string.h>
#include <stdio.h>

#define COF_INV_MAX_ITEMS 6
#define COF_INV_VISIBLE_SLOTS 6
#define COF_INV_QUICK_SLOTS 3
#define COF_INV_ACTION_COUNT 7

enum COFInventoryMode
{
	COF_INV_MODE_IDLE = 0,
	COF_INV_MODE_ACTION_MENU,
	COF_INV_MODE_COMBINE_SELECT,
	COF_INV_MODE_DUAL_SELECT
};

enum COFInventoryAction
{
	COF_INV_ACTION_USE = 0,
	COF_INV_ACTION_COMBINE,
	COF_INV_ACTION_DROP,
	COF_INV_ACTION_DUAL,
	COF_INV_ACTION_QUICK1,
	COF_INV_ACTION_QUICK2,
	COF_INV_ACTION_QUICK3
};

struct COFClientInventoryItem
{
	bool valid;
	char path[128];
	char mapName[64];
	char niceName[128];
	char className[64];
	char inventoryPicture[128];
	char quickPicture[128];
	char combinedWith[128];
	char combinedResult[128];
	bool droppable;
};

struct COFInventoryLayout
{
	COFUIRect panel;
	COFUIRect bagPanel;
	COFUIRect quickPanel;
	COFUIRect slots[COF_INV_VISIBLE_SLOTS];
	COFUIRect quickSlots[COF_INV_QUICK_SLOTS];
	COFUIRect description;
	COFUIRect objective;
	COFUIRect notesIcon;
};

struct COFInventoryActionRow
{
	const char *label;
	int action;
};

static COFClientInventoryItem g_COFItems[COF_INV_MAX_ITEMS];
static char g_COFQuickSlotPaths[COF_INV_QUICK_SLOTS][128];
static bool g_COFInventoryOpen = false;
static int g_COFSelected = 0;
static int g_COFPairSource = -1;
static int g_COFActionMenuSlot = -1;
static COFInventoryMode g_COFMode = COF_INV_MODE_IDLE;
static COFUIRect g_COFActionMenuRect = { 0, 0, 0, 0 };

static const COFInventoryActionRow g_COFActionRows[COF_INV_ACTION_COUNT] =
{
	{ "TAKE", COF_INV_ACTION_USE },
	{ "COMBINE", COF_INV_ACTION_COMBINE },
	{ "DROP", COF_INV_ACTION_DROP },
	{ "DUAL WIELD", COF_INV_ACTION_DUAL },
	{ "SLOT 1", COF_INV_ACTION_QUICK1 },
	{ "SLOT 2", COF_INV_ACTION_QUICK2 },
	{ "SLOT 3", COF_INV_ACTION_QUICK3 }
};

static int COF_ClampInt( int value, int low, int high )
{
	if( value < low )
		return low;
	if( value > high )
		return high;
	return value;
}

static void COF_BuildLayout( COFInventoryLayout &layout )
{
	const int wide = 760;
	const int tall = 460;
	const int maxX = ScreenWidth > wide + 16 ? ScreenWidth - wide - 8 : 8;
	const int maxY = ScreenHeight > tall + 16 ? ScreenHeight - tall - 8 : 8;
	const int x = COF_ClampInt( ( ScreenWidth - wide ) / 2, 8, maxX );
	const int y = COF_ClampInt( ( ScreenHeight - tall ) / 2, 8, maxY );

	layout.panel = { x, y, wide, tall };
	layout.bagPanel = { x, y, 370, tall };
	layout.quickPanel = { x + 390, y, 370, tall };

	layout.slots[0] = { x + 31, y + 64, 100, 100 };
	layout.slots[1] = { x + 133, y + 64, 100, 100 };
	layout.slots[2] = { x + 235, y + 64, 100, 100 };
	layout.slots[3] = { x + 31, y + 222, 100, 100 };
	layout.slots[4] = { x + 133, y + 222, 100, 100 };
	layout.slots[5] = { x + 235, y + 222, 100, 100 };

	layout.quickSlots[0] = { x + 410, y + 64, 100, 100 };
	layout.quickSlots[1] = { x + 512, y + 64, 100, 100 };
	layout.quickSlots[2] = { x + 614, y + 64, 100, 100 };

	layout.description = { x + 31, y + 354, 304, 92 };
	layout.objective = { x + 410, y + 354, 304, 92 };
	layout.notesIcon = { x + 532, y + 242, 44, 55 };
}

static bool COF_ParseQuotedValue( const char *pszFile, const char *pszKey, char *pszOut, size_t outSize )
{
	char szNeedle[96];
	snprintf( szNeedle, sizeof( szNeedle ), "\"%s\"", pszKey );

	const char *p = pszFile;
	while( ( p = strstr( p, szNeedle ) ) != NULL )
	{
		const char *pszData = strstr( p + strlen( szNeedle ), "data" );
		if( !pszData )
			return false;

		const char *pszQuote = strchr( pszData, '"' );
		if( !pszQuote )
			return false;
		pszQuote++;

		const char *pszEnd = strchr( pszQuote, '"' );
		if( !pszEnd )
			return false;

		const size_t len = Q_min( (size_t)( pszEnd - pszQuote ), outSize - 1 );
		memcpy( pszOut, pszQuote, len );
		pszOut[len] = '\0';
		return true;
	}

	return false;
}

static const char *COF_BaseName( const char *pszPath, char *pszOut, size_t outSize )
{
	const char *pszStart = strrchr( pszPath ? pszPath : "", '/' );
	if( !pszStart )
		pszStart = strrchr( pszPath ? pszPath : "", '\\' );
	pszStart = pszStart ? pszStart + 1 : pszPath;

	strlcpy( pszOut, pszStart ? pszStart : "", outSize );
	char *pszExt = strrchr( pszOut, '.' );
	if( pszExt )
		*pszExt = '\0';

	return pszOut;
}

static bool COF_IsAsciiText( const char *pszText )
{
	for( const unsigned char *p = (const unsigned char *)pszText; p && *p; p++ )
	{
		if( *p >= 128 )
			return false;
	}

	return true;
}

static const char *COF_ItemName( const COFClientInventoryItem &item, char *pszTemp, size_t tempSize )
{
	if( item.niceName[0] && COF_IsAsciiText( item.niceName ) )
		return item.niceName;
	if( item.mapName[0] )
		return item.mapName;
	if( item.className[0] )
		return item.className;
	return COF_BaseName( item.path, pszTemp, tempSize );
}

static void COF_TruncateText( const char *pszText, char *pszOut, size_t outSize, size_t maxChars )
{
	strlcpy( pszOut, pszText ? pszText : "", outSize );
	if( strlen( pszOut ) <= maxChars )
		return;

	if( maxChars > 3 )
	{
		pszOut[maxChars - 3] = '.';
		pszOut[maxChars - 2] = '.';
		pszOut[maxChars - 1] = '.';
		pszOut[maxChars] = '\0';
	}
	else
	{
		pszOut[maxChars] = '\0';
	}
}

static bool COF_AnyItems()
{
	for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
	{
		if( g_COFItems[i].valid )
			return true;
	}

	return false;
}

static void COF_SelectFirstValid()
{
	for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
	{
		if( g_COFItems[i].valid )
		{
			g_COFSelected = i;
			return;
		}
	}

	g_COFSelected = 0;
}

static void COF_ClearActionState()
{
	g_COFMode = COF_INV_MODE_IDLE;
	g_COFPairSource = -1;
	g_COFActionMenuSlot = -1;
	g_COFActionMenuRect = { 0, 0, 0, 0 };
}

static void COF_ClearQuickSlots()
{
	memset( g_COFQuickSlotPaths, 0, sizeof( g_COFQuickSlotPaths ) );
}

static void COF_ClearItem( int index )
{
	if( index < 0 || index >= COF_INV_MAX_ITEMS )
		return;

	memset( &g_COFItems[index], 0, sizeof( g_COFItems[index] ) );
}

static void COF_ClearItems()
{
	for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
		COF_ClearItem( i );

	COF_ClearQuickSlots();
	g_COFSelected = 0;
	COF_ClearActionState();
}

static void COF_AddItem( int index, const char *pszPath )
{
	if( index < 0 || index >= COF_INV_MAX_ITEMS || !pszPath || !pszPath[0] )
		return;

	COF_ClearItem( index );

	COFClientInventoryItem &item = g_COFItems[index];
	item.valid = true;
	strlcpy( item.path, pszPath, sizeof( item.path ) );

	int length = 0;
	byte *pFile = gEngfuncs.COM_LoadFile( item.path, 5, &length );
	if( pFile && length > 0 )
	{
		char *pszText = new char[length + 1];
		memcpy( pszText, pFile, length );
		pszText[length] = '\0';

		COF_ParseQuotedValue( pszText, "map_name", item.mapName, sizeof( item.mapName ) );
		COF_ParseQuotedValue( pszText, "nice_name", item.niceName, sizeof( item.niceName ) );
		COF_ParseQuotedValue( pszText, "classname", item.className, sizeof( item.className ) );
		COF_ParseQuotedValue( pszText, "inventory_picture", item.inventoryPicture, sizeof( item.inventoryPicture ) );
		COF_ParseQuotedValue( pszText, "quick_picture", item.quickPicture, sizeof( item.quickPicture ) );
		COF_ParseQuotedValue( pszText, "combined_with", item.combinedWith, sizeof( item.combinedWith ) );
		COF_ParseQuotedValue( pszText, "combined_result", item.combinedResult, sizeof( item.combinedResult ) );

		char szDroppable[16];
		if( COF_ParseQuotedValue( pszText, "droppable", szDroppable, sizeof( szDroppable ) ) )
			item.droppable = atoi( szDroppable ) != 0;

		delete[] pszText;
		gEngfuncs.COM_FreeFile( pFile );
	}

	if( g_COFSelected >= COF_INV_MAX_ITEMS || !g_COFItems[g_COFSelected].valid )
		COF_SelectFirstValid();
}

static void COF_SetQuickSlotPath( int quickSlot, const char *pszPath )
{
	if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS )
		return;

	strlcpy( g_COFQuickSlotPaths[quickSlot], pszPath ? pszPath : "", sizeof( g_COFQuickSlotPaths[quickSlot] ) );
}

static int COF_FindItemByPath( const char *pszPath )
{
	if( !pszPath || !pszPath[0] )
		return -1;

	for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
	{
		if( g_COFItems[i].valid && !stricmp( g_COFItems[i].path, pszPath ) )
			return i;
	}

	return -1;
}

static int COF_HitInventorySlot( const COFInventoryLayout &layout, int x, int y )
{
	for( int i = 0; i < COF_INV_VISIBLE_SLOTS; i++ )
	{
		if( COF_UI_HitRect( layout.slots[i], x, y ) )
			return i;
	}

	return -1;
}

static int COF_HitQuickSlot( const COFInventoryLayout &layout, int x, int y )
{
	for( int i = 0; i < COF_INV_QUICK_SLOTS; i++ )
	{
		if( COF_UI_HitRect( layout.quickSlots[i], x, y ) )
			return i;
	}

	return -1;
}

static int COF_QuickSlotForKey( int keynum )
{
	if( keynum >= '1' && keynum <= '3' )
		return keynum - '1';
	return -1;
}

static void COF_SendIndexCommand( const char *pszCommand, int index )
{
	if( index < 0 || index >= COF_INV_MAX_ITEMS || !g_COFItems[index].valid )
		return;

	char szCommand[64];
	snprintf( szCommand, sizeof( szCommand ), "%s %d\n", pszCommand, index );
	gEngfuncs.pfnServerCmd( szCommand );
}

static void COF_SendPairCommand( const char *pszCommand, int first, int second )
{
	if( first < 0 || first >= COF_INV_MAX_ITEMS || second < 0 || second >= COF_INV_MAX_ITEMS )
		return;
	if( !g_COFItems[first].valid || !g_COFItems[second].valid )
		return;

	char szCommand[80];
	snprintf( szCommand, sizeof( szCommand ), "%s %d %d\n", pszCommand, first, second );
	gEngfuncs.pfnServerCmd( szCommand );
}

static void COF_SetQuickSlot( int quickSlot, int itemIndex )
{
	if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS )
		return;
	if( itemIndex < 0 || itemIndex >= COF_INV_MAX_ITEMS || !g_COFItems[itemIndex].valid )
		return;

	char szCommand[64];
	snprintf( szCommand, sizeof( szCommand ), "cof_inv_quickset %d %d\n", quickSlot, itemIndex );
	gEngfuncs.pfnServerCmd( szCommand );
}

static void COF_SendQuickUseCommand( int quickSlot )
{
	if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS || !g_COFQuickSlotPaths[quickSlot][0] )
		return;

	char szCommand[64];
	snprintf( szCommand, sizeof( szCommand ), "cof_inv_quickuse %d\n", quickSlot );
	gEngfuncs.pfnServerCmd( szCommand );
}

static void COF_MoveSelection( int delta )
{
	if( !COF_AnyItems() )
		return;

	int selected = g_COFSelected;
	for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
	{
		selected += delta;
		if( selected < 0 )
			selected += COF_INV_MAX_ITEMS;
		if( selected >= COF_INV_MAX_ITEMS )
			selected -= COF_INV_MAX_ITEMS;

		if( g_COFItems[selected].valid )
		{
			g_COFSelected = selected;
			return;
		}
	}
}

static void COF_OpenActionMenu( int slot, int mouseX, int mouseY )
{
	if( slot < 0 || slot >= COF_INV_MAX_ITEMS || !g_COFItems[slot].valid )
		return;

	g_COFSelected = slot;
	g_COFActionMenuSlot = slot;
	g_COFMode = COF_INV_MODE_ACTION_MENU;
	g_COFPairSource = -1;

	const int wide = 128;
	const int tall = COF_INV_ACTION_COUNT * 26 + 10;
	g_COFActionMenuRect.x = COF_ClampInt( mouseX, 8, ScreenWidth - wide - 8 );
	g_COFActionMenuRect.y = COF_ClampInt( mouseY, 8, ScreenHeight - tall - 8 );
	g_COFActionMenuRect.wide = wide;
	g_COFActionMenuRect.tall = tall;
}

static int COF_HitActionRow( int x, int y )
{
	if( g_COFMode != COF_INV_MODE_ACTION_MENU || !COF_UI_HitRect( g_COFActionMenuRect, x, y ) )
		return -1;

	const int localY = y - g_COFActionMenuRect.y - 5;
	if( localY < 0 )
		return -1;

	const int row = localY / 26;
	if( row < 0 || row >= COF_INV_ACTION_COUNT )
		return -1;

	return row;
}

static void COF_RunAction( int action, int slot )
{
	if( slot < 0 || slot >= COF_INV_MAX_ITEMS || !g_COFItems[slot].valid )
		return;

	switch( action )
	{
	case COF_INV_ACTION_USE:
		COF_SendIndexCommand( "cof_inv_use", slot );
		COF_ClearActionState();
		break;
	case COF_INV_ACTION_DROP:
		COF_SendIndexCommand( "cof_inv_drop", slot );
		COF_ClearActionState();
		break;
	case COF_INV_ACTION_COMBINE:
		g_COFMode = COF_INV_MODE_COMBINE_SELECT;
		g_COFPairSource = slot;
		g_COFActionMenuSlot = -1;
		break;
	case COF_INV_ACTION_DUAL:
		g_COFMode = COF_INV_MODE_DUAL_SELECT;
		g_COFPairSource = slot;
		g_COFActionMenuSlot = -1;
		break;
	case COF_INV_ACTION_QUICK1:
	case COF_INV_ACTION_QUICK2:
	case COF_INV_ACTION_QUICK3:
		COF_SetQuickSlot( action - COF_INV_ACTION_QUICK1, slot );
		COF_ClearActionState();
		break;
	default:
		break;
	}
}

static void COF_FinishPairAction( int secondSlot )
{
	if( g_COFPairSource < 0 || secondSlot < 0 || g_COFPairSource == secondSlot )
		return;

	if( g_COFMode == COF_INV_MODE_COMBINE_SELECT )
		COF_SendPairCommand( "cof_inv_combine", g_COFPairSource, secondSlot );
	else if( g_COFMode == COF_INV_MODE_DUAL_SELECT )
		COF_SendPairCommand( "cof_inv_dualwield", g_COFPairSource, secondSlot );

	COF_ClearActionState();
}

static void COF_UpdateMouseInput( const COFInventoryLayout &layout )
{
	const int mouseX = COF_UI_MouseX();
	const int mouseY = COF_UI_MouseY();

	if( COF_UI_MousePressed( 1 ) )
	{
		COF_ClearActionState();
		return;
	}

	if( !COF_UI_MousePressed( 0 ) )
		return;

	if( g_COFMode == COF_INV_MODE_ACTION_MENU )
	{
		const int row = COF_HitActionRow( mouseX, mouseY );
		if( row >= 0 )
		{
			COF_RunAction( g_COFActionRows[row].action, g_COFActionMenuSlot );
			return;
		}

		COF_ClearActionState();
	}

	if( g_COFMode == COF_INV_MODE_COMBINE_SELECT || g_COFMode == COF_INV_MODE_DUAL_SELECT )
	{
		const int slot = COF_HitInventorySlot( layout, mouseX, mouseY );
		if( slot >= 0 && g_COFItems[slot].valid )
		{
			g_COFSelected = slot;
			COF_FinishPairAction( slot );
		}
		return;
	}

	const int slot = COF_HitInventorySlot( layout, mouseX, mouseY );
	if( slot >= 0 )
	{
		if( g_COFItems[slot].valid )
			COF_OpenActionMenu( slot, mouseX, mouseY );
		return;
	}

	const int quickSlot = COF_HitQuickSlot( layout, mouseX, mouseY );
	if( quickSlot >= 0 )
	{
		COF_SendQuickUseCommand( quickSlot );
		return;
	}
}

static void COF_DrawPanel( const COFUIRect &rect, int alpha )
{
	COF_UI_FillRect( rect.x, rect.y, rect.wide, rect.tall, 0, 0, 0, alpha );
	COF_UI_OutlineRect( rect.x, rect.y, rect.wide, rect.tall, 190, 190, 190, 80 );
}

static void COF_DrawSlot( const COFUIRect &rect, bool selected, bool marked, bool hovered )
{
	COF_UI_FillRect( rect.x, rect.y, rect.wide, rect.tall, 0, 0, 0, hovered ? 145 : 105 );
	COF_UI_OutlineRect( rect.x, rect.y, rect.wide, rect.tall, hovered ? 235 : 210, hovered ? 235 : 210, hovered ? 235 : 210, hovered ? 155 : 85 );

	if( selected )
	{
		COF_UI_OutlineRect( rect.x - 2, rect.y - 2, rect.wide + 4, rect.tall + 4, 255, 220, 80, 255 );
		COF_UI_OutlineRect( rect.x - 3, rect.y - 3, rect.wide + 6, rect.tall + 6, 255, 220, 80, 120 );
	}

	if( marked )
		COF_UI_OutlineRect( rect.x - 5, rect.y - 5, rect.wide + 10, rect.tall + 10, 120, 225, 120, 235 );
}

static void COF_DrawItemInSlot( const COFUIRect &rect, const COFClientInventoryItem &item, bool selected )
{
	char szTemp[96];
	char szName[48];
	COF_TruncateText( COF_ItemName( item, szTemp, sizeof( szTemp ) ), szName, sizeof( szName ), 13 );

	COF_UI_FillRect( rect.x + 12, rect.y + 12, rect.wide - 24, rect.tall - 24, selected ? 68 : 30, selected ? 54 : 30, selected ? 18 : 30, 145 );
	COF_UI_DrawTextCentered( { rect.x + 8, rect.y + 37, rect.wide - 16, 24 }, szName, selected ? 255 : 225, selected ? 220 : 225, selected ? 90 : 225 );
}

static void COF_DrawInventoryFrame( const COFInventoryLayout &layout )
{
	COF_DrawPanel( layout.bagPanel, 105 );
	COF_DrawPanel( layout.quickPanel, 105 );
	COF_UI_FillRect( layout.panel.x + 379, layout.panel.y, 1, layout.panel.tall, 210, 210, 210, 95 );

	COF_UI_DrawText( layout.panel.x + 31, layout.panel.y + 25, "BAG", 245, 245, 245 );
	COF_UI_DrawText( layout.panel.x + 31, layout.panel.y + 183, "POCKETS", 245, 245, 245 );
	COF_UI_DrawText( layout.panel.x + 410, layout.panel.y + 25, "QUICK SELECT", 245, 245, 245 );
	COF_UI_DrawText( layout.panel.x + 410, layout.panel.y + 226, "NOTES", 245, 245, 245 );

	COF_UI_FillRect( layout.panel.x + 410, layout.panel.y + 216, 320, 1, 205, 205, 205, 80 );
	COF_UI_FillRect( layout.panel.x + 410, layout.panel.y + 317, 320, 1, 205, 205, 205, 80 );

	COF_UI_DrawText( layout.panel.x + 31, layout.panel.y + 332, "ITEM DESCRIPTION", 205, 205, 205 );
	COF_UI_OutlineRect( layout.description.x, layout.description.y, layout.description.wide, layout.description.tall, 205, 205, 205, 85 );

	COF_UI_DrawText( layout.panel.x + 410, layout.panel.y + 332, "CURRENT OBJECTIVE", 205, 205, 205 );
	COF_UI_OutlineRect( layout.objective.x, layout.objective.y, layout.objective.wide, layout.objective.tall, 205, 205, 205, 85 );

	COF_UI_FillRect( layout.notesIcon.x, layout.notesIcon.y, layout.notesIcon.wide, layout.notesIcon.tall, 235, 235, 235, 210 );
	COF_UI_OutlineRect( layout.notesIcon.x, layout.notesIcon.y, layout.notesIcon.wide, layout.notesIcon.tall, 170, 170, 170, 140 );
	COF_UI_DrawText( layout.notesIcon.x + 9, layout.notesIcon.y + 20, "NOTE", 45, 45, 45 );
}

static void COF_DrawInventorySlots( const COFInventoryLayout &layout )
{
	const int hoverSlot = COF_HitInventorySlot( layout, COF_UI_MouseX(), COF_UI_MouseY() );

	for( int i = 0; i < COF_INV_VISIBLE_SLOTS; i++ )
	{
		const bool selected = i == g_COFSelected && g_COFItems[i].valid;
		const bool marked = i == g_COFPairSource && g_COFItems[i].valid;
		const bool hovered = i == hoverSlot;
		COF_DrawSlot( layout.slots[i], selected, marked, hovered );

		if( g_COFItems[i].valid )
			COF_DrawItemInSlot( layout.slots[i], g_COFItems[i], selected );
	}
}

static void COF_DrawQuickSlots( const COFInventoryLayout &layout )
{
	const int hoverQuickSlot = COF_HitQuickSlot( layout, COF_UI_MouseX(), COF_UI_MouseY() );

	for( int i = 0; i < COF_INV_QUICK_SLOTS; i++ )
	{
		COF_DrawSlot( layout.quickSlots[i], false, false, i == hoverQuickSlot );

		char szLabel[16];
		snprintf( szLabel, sizeof( szLabel ), "SLOT %d", i + 1 );
		COF_UI_DrawText( layout.quickSlots[i].x + 3, layout.quickSlots[i].y + 110, szLabel, 215, 215, 215 );

		const int itemIndex = COF_FindItemByPath( g_COFQuickSlotPaths[i] );
		if( itemIndex >= 0 )
			COF_DrawItemInSlot( layout.quickSlots[i], g_COFItems[itemIndex], false );
	}
}

static void COF_DrawDescription( const COFInventoryLayout &layout )
{
	if( !COF_AnyItems() )
	{
		COF_UI_DrawText( layout.description.x + 10, layout.description.y + 16, "Inventory is empty", 190, 190, 190 );
		return;
	}

	if( g_COFSelected < 0 || g_COFSelected >= COF_INV_MAX_ITEMS || !g_COFItems[g_COFSelected].valid )
		COF_SelectFirstValid();

	char szTemp[96];
	char szName[64];
	COF_TruncateText( COF_ItemName( g_COFItems[g_COFSelected], szTemp, sizeof( szTemp ) ), szName, sizeof( szName ), 28 );
	COF_UI_DrawText( layout.description.x + 10, layout.description.y + 12, szName, 240, 240, 240 );

	const char *pszHint = "Click item for actions";
	if( g_COFMode == COF_INV_MODE_COMBINE_SELECT )
		pszHint = "Select second item";
	else if( g_COFMode == COF_INV_MODE_DUAL_SELECT )
		pszHint = "Select second weapon";
	COF_UI_DrawText( layout.description.x + 10, layout.description.y + 60, pszHint, 175, 175, 175 );
}

static void COF_DrawActionMenu()
{
	if( g_COFMode != COF_INV_MODE_ACTION_MENU || g_COFActionMenuSlot < 0 )
		return;

	COF_UI_FillRect( g_COFActionMenuRect.x, g_COFActionMenuRect.y, g_COFActionMenuRect.wide, g_COFActionMenuRect.tall, 0, 0, 0, 220 );
	COF_UI_OutlineRect( g_COFActionMenuRect.x, g_COFActionMenuRect.y, g_COFActionMenuRect.wide, g_COFActionMenuRect.tall, 235, 235, 235, 180 );

	const int mouseX = COF_UI_MouseX();
	const int mouseY = COF_UI_MouseY();
	for( int i = 0; i < COF_INV_ACTION_COUNT; i++ )
	{
		const COFUIRect row = { g_COFActionMenuRect.x + 5, g_COFActionMenuRect.y + 5 + i * 26, g_COFActionMenuRect.wide - 10, 24 };
		const bool hover = COF_UI_HitRect( row, mouseX, mouseY );

		COF_UI_FillRect( row.x, row.y, row.wide, row.tall, hover ? 78 : 28, hover ? 64 : 28, hover ? 20 : 28, 230 );
		COF_UI_OutlineRect( row.x, row.y, row.wide, row.tall, hover ? 255 : 180, hover ? 220 : 180, hover ? 90 : 180, hover ? 240 : 120 );
		COF_UI_DrawText( row.x + 8, row.y + 5, g_COFActionRows[i].label, 240, 240, 240 );
	}
}

static void COF_Inventory_SetOpen( bool open )
{
	if( g_COFInventoryOpen == open )
		return;

	g_COFInventoryOpen = open;
	COF_UI_SetActive( open );

	if( open )
	{
		gEngfuncs.pfnServerCmd( "cof_inventory_sync\n" );
		if( !g_COFItems[g_COFSelected].valid )
			COF_SelectFirstValid();
	}
	else
	{
		COF_ClearActionState();
	}
}

void COF_Inventory_Draw( float flTime )
{
	if( !g_COFInventoryOpen )
		return;

	COFInventoryLayout layout;
	COF_BuildLayout( layout );
	COF_UI_UpdateMousePosition();
	COF_UpdateMouseInput( layout );

	COF_DrawInventoryFrame( layout );
	COF_DrawInventorySlots( layout );
	COF_DrawQuickSlots( layout );
	COF_DrawDescription( layout );
	COF_DrawActionMenu();
	COF_UI_DrawCursor();
	COF_UI_EndFrame();
}

void COF_Inventory_VidInit( void )
{
	COF_UI_VidInit();
}

bool COF_Inventory_IsVisible( void )
{
	return g_COFInventoryOpen;
}

int COF_Inventory_KeyInput( int down, int keynum, const char *pszCurrentBinding )
{
	const int uiResult = COF_UI_KeyInput( down, keynum );
	if( !uiResult )
		return 0;

	if( !g_COFInventoryOpen )
	{
		if( !down )
			return 1;

		const int quickSlot = COF_QuickSlotForKey( keynum );
		if( quickSlot >= 0 && g_COFQuickSlotPaths[quickSlot][0] )
		{
			COF_SendQuickUseCommand( quickSlot );
			return 0;
		}

		return 1;
	}

	if( keynum == K_TAB )
	{
		if( !down )
			COF_Inventory_SetOpen( false );
		return 0;
	}

	if( !down )
		return 1;

	switch( keynum )
	{
	case K_ESCAPE:
		if( g_COFMode != COF_INV_MODE_IDLE )
			COF_ClearActionState();
		else
			COF_Inventory_SetOpen( false );
		return 0;
	case K_LEFTARROW:
	case 'a':
		COF_MoveSelection( -1 );
		return 0;
	case K_RIGHTARROW:
	case 'd':
		COF_MoveSelection( 1 );
		return 0;
	case K_UPARROW:
	case 'w':
		COF_MoveSelection( -3 );
		return 0;
	case K_DOWNARROW:
	case 's':
		COF_MoveSelection( 3 );
		return 0;
	case K_ENTER:
	case K_KP_ENTER:
	case K_SPACE:
	case 'e':
		COF_SendIndexCommand( "cof_inv_use", g_COFSelected );
		COF_ClearActionState();
		return 0;
	case 'c':
		if( g_COFMode == COF_INV_MODE_COMBINE_SELECT )
			COF_FinishPairAction( g_COFSelected );
		else if( g_COFItems[g_COFSelected].valid )
		{
			g_COFMode = COF_INV_MODE_COMBINE_SELECT;
			g_COFPairSource = g_COFSelected;
			g_COFActionMenuSlot = -1;
		}
		return 0;
	case 'v':
		if( g_COFMode == COF_INV_MODE_DUAL_SELECT )
			COF_FinishPairAction( g_COFSelected );
		else if( g_COFItems[g_COFSelected].valid )
		{
			g_COFMode = COF_INV_MODE_DUAL_SELECT;
			g_COFPairSource = g_COFSelected;
			g_COFActionMenuSlot = -1;
		}
		return 0;
	case K_BACKSPACE:
	case K_DEL:
	case 'x':
		COF_SendIndexCommand( "cof_inv_drop", g_COFSelected );
		COF_ClearActionState();
		return 0;
	case '1':
		COF_SetQuickSlot( 0, g_COFSelected );
		return 0;
	case '2':
		COF_SetQuickSlot( 1, g_COFSelected );
		return 0;
	case '3':
		COF_SetQuickSlot( 2, g_COFSelected );
		return 0;
	default:
		break;
	}

	return 0;
}

static int __MsgFunc_CofInvClear( const char *pszName, int iSize, void *pbuf )
{
	COF_ClearItems();
	return 1;
}

static int __MsgFunc_CofInvItem( const char *pszName, int iSize, void *pbuf )
{
	BEGIN_READ( pbuf, iSize );
	const int index = READ_BYTE();
	const char *pszPath = READ_STRING();

	COF_AddItem( index, pszPath );
	return 1;
}

static int __MsgFunc_CofInvQuick( const char *pszName, int iSize, void *pbuf )
{
	BEGIN_READ( pbuf, iSize );
	const int quickSlot = READ_BYTE();
	const char *pszPath = READ_STRING();

	COF_SetQuickSlotPath( quickSlot, pszPath );
	return 1;
}

static void __CmdFunc_CofInventoryDown( void )
{
	COF_Inventory_SetOpen( true );
}

static void __CmdFunc_CofInventoryUp( void )
{
	COF_Inventory_SetOpen( false );
}

static void __CmdFunc_CofInventoryToggle( void )
{
	COF_Inventory_SetOpen( !COF_Inventory_IsVisible() );
}

void COF_Inventory_Init( void )
{
	COF_UI_Init();
	gEngfuncs.pfnHookUserMsg( "CofInvClear", __MsgFunc_CofInvClear );
	gEngfuncs.pfnHookUserMsg( "CofInvItem", __MsgFunc_CofInvItem );
	gEngfuncs.pfnHookUserMsg( "CofInvQuick", __MsgFunc_CofInvQuick );
	gEngfuncs.pfnAddCommand( "+inventory", __CmdFunc_CofInventoryDown );
	gEngfuncs.pfnAddCommand( "-inventory", __CmdFunc_CofInventoryUp );
	gEngfuncs.pfnAddCommand( "cof_inventory_toggle", __CmdFunc_CofInventoryToggle );
}
