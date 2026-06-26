#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include "keydefs.h"

#if USE_VGUI

#include "vgui_TeamFortressViewport.h"
#include "vgui_loadtga.h"

#include <VGUI_Panel.h>
#include <VGUI_Color.h>
#include <VGUI_Scheme.h>
#include <string.h>
#include <stdio.h>

using namespace vgui;

#define COF_INV_MAX_ITEMS 32
#define COF_INV_VISIBLE_SLOTS 6
#define COF_INV_QUICK_SLOTS 3

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
	BitmapTGA *icon;
	BitmapTGA *quickIcon;
};

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
	const char *pszStart = strrchr( pszPath, '/' );
	if( !pszStart )
		pszStart = strrchr( pszPath, '\\' );
	pszStart = pszStart ? pszStart + 1 : pszPath;

	strlcpy( pszOut, pszStart, outSize );
	char *pszExt = strrchr( pszOut, '.' );
	if( pszExt )
		*pszExt = '\0';

	return pszOut;
}

static BitmapTGA *COF_LoadTGAPath( const char *pszPath )
{
	if( !pszPath || !pszPath[0] )
		return NULL;

	return vgui_LoadTGA( pszPath );
}

class CCofInventoryPanel : public Panel
{
public:
	CCofInventoryPanel() : Panel( 0, 0, 748, 480 )
	{
		memset( m_Items, 0, sizeof( m_Items ) );
		memset( m_szQuickSlots, 0, sizeof( m_szQuickSlots ) );
		m_pBackground = NULL;
		m_iSelected = 0;
		m_iCombineSource = -1;
		setVisible( false );
		setPaintBackgroundEnabled( true );
		setPaintEnabled( true );
		setBgColor( 0, 0, 0, 0 );
	}

	~CCofInventoryPanel()
	{
		ClearItems();
		if( m_pBackground )
			delete m_pBackground;
	}

	void VidInit()
	{
		if( m_pBackground )
			delete m_pBackground;

		m_pBackground = COF_LoadTGAPath( "gfx/vgui/640_inventory.tga" );
		Reposition();
	}

	void Reposition()
	{
		const int wide = 748;
		const int tall = 480;
		setBounds( ( ScreenWidth - wide ) / 2, ( ScreenHeight - tall ) / 2, wide, tall );
	}

	void SetOpen( bool open )
	{
		if( open )
		{
			gEngfuncs.pfnServerCmd( "cof_inventory_sync\n" );
			Reposition();
		}
		else
		{
			m_iCombineSource = -1;
		}

		setVisible( open );
		repaint();
	}

	bool IsOpen()
	{
		return isVisible();
	}

	void ClearItems()
	{
		for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
			ClearItem( i );
		m_iSelected = 0;
		m_iCombineSource = -1;
	}

	void ClearItem( int index )
	{
		if( index < 0 || index >= COF_INV_MAX_ITEMS )
			return;

		if( m_Items[index].icon )
			delete m_Items[index].icon;
		if( m_Items[index].quickIcon && m_Items[index].quickIcon != m_Items[index].icon )
			delete m_Items[index].quickIcon;

		memset( &m_Items[index], 0, sizeof( m_Items[index] ) );
	}

	void AddItem( int index, const char *pszPath )
	{
		if( index < 0 || index >= COF_INV_MAX_ITEMS || !pszPath || !pszPath[0] )
			return;

		ClearItem( index );

		COFClientInventoryItem &item = m_Items[index];
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

			delete[] pszText;
			gEngfuncs.COM_FreeFile( pFile );
		}

		item.icon = COF_LoadTGAPath( item.inventoryPicture );
		item.quickIcon = COF_LoadTGAPath( item.quickPicture[0] ? item.quickPicture : item.inventoryPicture );

		if( m_iSelected >= COF_INV_MAX_ITEMS || !m_Items[m_iSelected].valid )
			SelectFirstValid();

		repaint();
	}

	int KeyInput( int down, int keynum, const char *pszCurrentBinding )
	{
		if( !IsOpen() )
			return 1;

		if( !down )
			return 0;

		switch( keynum )
		{
		case K_ESCAPE:
		case K_TAB:
			SetOpen( false );
			return 0;
		case K_LEFTARROW:
		case 'a':
			MoveSelection( -1 );
			return 0;
		case K_RIGHTARROW:
		case 'd':
			MoveSelection( 1 );
			return 0;
		case K_UPARROW:
		case 'w':
			MoveSelection( -3 );
			return 0;
		case K_DOWNARROW:
		case 's':
			MoveSelection( 3 );
			return 0;
		case K_ENTER:
		case K_KP_ENTER:
		case K_SPACE:
		case 'e':
			SendIndexCommand( "cof_inv_use", m_iSelected );
			return 0;
		case 'c':
			CombineSelected();
			return 0;
		case K_BACKSPACE:
		case K_DEL:
		case 'x':
			SendIndexCommand( "cof_inv_drop", m_iSelected );
			return 0;
		case '1':
			SetQuickSlot( 0 );
			return 0;
		case '2':
			SetQuickSlot( 1 );
			return 0;
		case '3':
			SetQuickSlot( 2 );
			return 0;
		default:
			break;
		}

		return 0;
	}

protected:
	virtual void paintBackground()
	{
		drawSetColor( 0, 0, 0, 210 );
		drawFilledRect( 0, 0, getWide(), getTall() );

		if( m_pBackground )
		{
			m_pBackground->setPos( 0, 0 );
			m_pBackground->setColor( Color( 255, 255, 255, 0 ) );
			m_pBackground->doPaint( this );
		}
	}

	virtual void paint()
	{
		DrawInventoryItems();
		DrawQuickSlots();
		DrawSelection();
		DrawDescription();
	}

private:
	void SelectFirstValid()
	{
		for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
		{
			if( m_Items[i].valid )
			{
				m_iSelected = i;
				return;
			}
		}

		m_iSelected = 0;
	}

	void MoveSelection( int step )
	{
		if( !AnyItems() )
			return;

		int index = m_iSelected;
		for( int tries = 0; tries < COF_INV_MAX_ITEMS; tries++ )
		{
			index += step;
			while( index < 0 )
				index += COF_INV_MAX_ITEMS;
			while( index >= COF_INV_MAX_ITEMS )
				index -= COF_INV_MAX_ITEMS;

			if( m_Items[index].valid )
			{
				m_iSelected = index;
				repaint();
				return;
			}
		}
	}

	bool AnyItems() const
	{
		for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
		{
			if( m_Items[i].valid )
				return true;
		}
		return false;
	}

	void SetQuickSlot( int quickSlot )
	{
		if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS || !m_Items[m_iSelected].valid )
			return;

		strlcpy( m_szQuickSlots[quickSlot], m_Items[m_iSelected].path, sizeof( m_szQuickSlots[quickSlot] ) );
		repaint();
	}

	void CombineSelected()
	{
		if( !m_Items[m_iSelected].valid )
			return;

		if( m_iCombineSource < 0 )
		{
			m_iCombineSource = m_iSelected;
			repaint();
			return;
		}

		char szCmd[64];
		snprintf( szCmd, sizeof( szCmd ), "cof_inv_combine %d %d\n", m_iCombineSource, m_iSelected );
		gEngfuncs.pfnServerCmd( szCmd );
		m_iCombineSource = -1;
	}

	void SendIndexCommand( const char *pszCommand, int index )
	{
		if( index < 0 || index >= COF_INV_MAX_ITEMS || !m_Items[index].valid )
			return;

		char szCmd[64];
		snprintf( szCmd, sizeof( szCmd ), "%s %d\n", pszCommand, index );
		gEngfuncs.pfnServerCmd( szCmd );
	}

	void DrawItemIcon( COFClientInventoryItem &item, int x, int y, bool quick )
	{
		BitmapTGA *pIcon = quick ? item.quickIcon : item.icon;
		if( pIcon )
		{
			pIcon->setPos( x, y );
			pIcon->setColor( Color( 255, 255, 255, 0 ) );
			pIcon->doPaint( this );
			return;
		}

		char szBase[64];
		COF_BaseName( item.path, szBase, sizeof( szBase ) );
		drawSetTextFont( Scheme::sf_primary1 );
		drawSetTextColor( 220, 220, 220, 255 );
		drawSetTextPos( x + 6, y + 40 );
		drawPrintText( szBase, strlen( szBase ) );
	}

	void DrawInventoryItems()
	{
		static const int slotPos[COF_INV_VISIBLE_SLOTS][2] =
		{
			{ 31, 64 }, { 133, 64 }, { 235, 64 },
			{ 31, 222 }, { 133, 222 }, { 235, 222 }
		};

		for( int i = 0; i < COF_INV_VISIBLE_SLOTS; i++ )
		{
			if( m_Items[i].valid )
				DrawItemIcon( m_Items[i], slotPos[i][0], slotPos[i][1], false );
		}
	}

	int FindItemByPath( const char *pszPath )
	{
		if( !pszPath || !pszPath[0] )
			return -1;

		for( int i = 0; i < COF_INV_MAX_ITEMS; i++ )
		{
			if( m_Items[i].valid && !stricmp( m_Items[i].path, pszPath ) )
				return i;
		}

		return -1;
	}

	void DrawQuickSlots()
	{
		static const int quickPos[COF_INV_QUICK_SLOTS][2] =
		{
			{ 398, 64 }, { 500, 64 }, { 602, 64 }
		};

		for( int i = 0; i < COF_INV_QUICK_SLOTS; i++ )
		{
			const int itemIndex = FindItemByPath( m_szQuickSlots[i] );
			if( itemIndex >= 0 )
				DrawItemIcon( m_Items[itemIndex], quickPos[i][0], quickPos[i][1], true );
		}
	}

	void DrawSelection()
	{
		static const int slotPos[COF_INV_VISIBLE_SLOTS][2] =
		{
			{ 31, 64 }, { 133, 64 }, { 235, 64 },
			{ 31, 222 }, { 133, 222 }, { 235, 222 }
		};

		if( m_iSelected >= 0 && m_iSelected < COF_INV_VISIBLE_SLOTS && m_Items[m_iSelected].valid )
		{
			const int x = slotPos[m_iSelected][0];
			const int y = slotPos[m_iSelected][1];
			drawSetColor( 255, 220, 90, 255 );
			drawOutlinedRect( x - 2, y - 2, x + 101, y + 101 );
			drawOutlinedRect( x - 3, y - 3, x + 102, y + 102 );
		}

		if( m_iCombineSource >= 0 && m_iCombineSource < COF_INV_VISIBLE_SLOTS && m_Items[m_iCombineSource].valid )
		{
			const int x = slotPos[m_iCombineSource][0];
			const int y = slotPos[m_iCombineSource][1];
			drawSetColor( 120, 220, 120, 255 );
			drawOutlinedRect( x - 5, y - 5, x + 104, y + 104 );
		}
	}

	void DrawDescription()
	{
		drawSetTextFont( Scheme::sf_primary1 );
		drawSetTextColor( 240, 240, 240, 255 );

		if( !AnyItems() )
		{
			const char *pszEmpty = "Inventory is empty";
			drawSetTextPos( 42, 374 );
			drawPrintText( pszEmpty, strlen( pszEmpty ) );
			return;
		}

		if( !m_Items[m_iSelected].valid )
			SelectFirstValid();

		COFClientInventoryItem &item = m_Items[m_iSelected];
		const char *pszName = item.niceName[0] ? item.niceName : item.path;
		drawSetTextPos( 42, 366 );
		drawPrintText( pszName, strlen( pszName ) );

		char szHelp[192];
		snprintf( szHelp, sizeof( szHelp ), "Enter: use  C: combine  X: drop  1/2/3: quick slot" );
		drawSetTextColor( 180, 180, 180, 255 );
		drawSetTextPos( 42, 402 );
		drawPrintText( szHelp, strlen( szHelp ) );

		if( m_iCombineSource >= 0 )
		{
			drawSetTextColor( 150, 230, 150, 255 );
			const char *pszCombine = "Select second item and press C";
			drawSetTextPos( 42, 422 );
			drawPrintText( pszCombine, strlen( pszCombine ) );
		}
	}

	COFClientInventoryItem m_Items[COF_INV_MAX_ITEMS];
	char m_szQuickSlots[COF_INV_QUICK_SLOTS][128];
	BitmapTGA *m_pBackground;
	int m_iSelected;
	int m_iCombineSource;
};

static CCofInventoryPanel *g_pCofInventory = NULL;

static void COF_Inventory_SetOpen( bool open )
{
	if( g_pCofInventory )
		g_pCofInventory->SetOpen( open );
}

void COF_Inventory_VidInit( void )
{
	if( !gViewPort )
		return;

	if( !g_pCofInventory )
	{
		g_pCofInventory = new CCofInventoryPanel();
		g_pCofInventory->setParent( gViewPort );
	}

	g_pCofInventory->VidInit();
}

bool COF_Inventory_IsVisible( void )
{
	return g_pCofInventory && g_pCofInventory->IsOpen();
}

int COF_Inventory_KeyInput( int down, int keynum, const char *pszCurrentBinding )
{
	if( !g_pCofInventory )
		return 1;

	return g_pCofInventory->KeyInput( down, keynum, pszCurrentBinding );
}

static int __MsgFunc_CofInvClear( const char *pszName, int iSize, void *pbuf )
{
	if( g_pCofInventory )
		g_pCofInventory->ClearItems();
	return 1;
}

static int __MsgFunc_CofInvItem( const char *pszName, int iSize, void *pbuf )
{
	BEGIN_READ( pbuf, iSize );
	const int index = READ_BYTE();
	const char *pszPath = READ_STRING();

	if( g_pCofInventory )
		g_pCofInventory->AddItem( index, pszPath );

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
	gEngfuncs.pfnHookUserMsg( "CofInvClear", __MsgFunc_CofInvClear );
	gEngfuncs.pfnHookUserMsg( "CofInvItem", __MsgFunc_CofInvItem );
	gEngfuncs.pfnAddCommand( "+inventory", __CmdFunc_CofInventoryDown );
	gEngfuncs.pfnAddCommand( "-inventory", __CmdFunc_CofInventoryUp );
	gEngfuncs.pfnAddCommand( "cof_inventory_toggle", __CmdFunc_CofInventoryToggle );
}

#endif
