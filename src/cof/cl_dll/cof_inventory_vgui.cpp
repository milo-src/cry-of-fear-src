#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include "keydefs.h"

#if USE_VGUI

#include "vgui_TeamFortressViewport.h"
#include "vgui_loadtga.h"
#include "../game_shared/vgui_defaultinputsignal.h"

#include <VGUI_App.h>
#include <VGUI_Panel.h>
#include <VGUI_Color.h>
#include <VGUI_Scheme.h>
#include <VGUI_SurfaceBase.h>
#include <string.h>
#include <stdio.h>

using namespace vgui;

#define COF_INV_MAX_ITEMS 6
#define COF_INV_VISIBLE_SLOTS 6
#define COF_INV_QUICK_SLOTS 3
#define COF_INV_ACTION_BUTTONS 7

void IN_SetVisibleMouse( bool visible );
void IgnoreNextMouseDelta( void );
void IN_ResetMouse( void );

struct COFInventoryRect
{
	int x;
	int y;
	int wide;
	int tall;
};

static const COFInventoryRect g_COFInventorySlots[COF_INV_VISIBLE_SLOTS] =
{
	{ 31, 64, 100, 100 }, { 133, 64, 100, 100 }, { 235, 64, 100, 100 },
	{ 31, 222, 100, 100 }, { 133, 222, 100, 100 }, { 235, 222, 100, 100 }
};

static const COFInventoryRect g_COFQuickSlots[COF_INV_QUICK_SLOTS] =
{
	{ 398, 64, 100, 100 }, { 500, 64, 100, 100 }, { 602, 64, 100, 100 }
};

enum
{
	COF_INV_ACTION_NONE = -1,
	COF_INV_ACTION_EQUIP = 0,
	COF_INV_ACTION_COMBINE,
	COF_INV_ACTION_DROP,
	COF_INV_ACTION_DUAL_WIELD,
	COF_INV_ACTION_QUICK_1,
	COF_INV_ACTION_QUICK_2,
	COF_INV_ACTION_QUICK_3
};

static const COFInventoryRect g_COFActionButtons[COF_INV_ACTION_BUTTONS] =
{
	{ 0, 0, 100, 28 },
	{ 0, 31, 100, 28 },
	{ 0, 62, 100, 28 },
	{ 0, 93, 100, 28 },
	{ 0, 127, 31, 30 },
	{ 34, 127, 31, 30 },
	{ 68, 127, 31, 30 }
};

static const char *g_COFActionLabels[COF_INV_ACTION_BUTTONS] =
{
	"EQUIP",
	"COMBINE",
	"DROP",
	"DUAL WIELD",
	"1",
	"2",
	"3"
};

static bool COF_RectContains( const COFInventoryRect &rect, int x, int y )
{
	return x >= rect.x && y >= rect.y && x < rect.x + rect.wide && y < rect.y + rect.tall;
}

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

class CCofInventoryPanel : public Panel, public vgui::CDefaultInputSignal
{
public:
	CCofInventoryPanel() : Panel( 0, 0, 748, 480 )
	{
		memset( m_Items, 0, sizeof( m_Items ) );
		memset( m_szQuickSlots, 0, sizeof( m_szQuickSlots ) );
		m_pBackground = NULL;
		m_iSelected = 0;
		m_iCombineSource = -1;
		m_iPendingAction = COF_INV_ACTION_NONE;
		m_iMenuSlot = -1;
		m_iHoverSlot = -1;
		m_iHoverQuickSlot = -1;
		m_iHoverAction = -1;
		m_bIgnoreNextMouseRelease = false;
		setVisible( false );
		setPaintBackgroundEnabled( true );
		setPaintEnabled( true );
		setBgColor( 0, 0, 0, 0 );
		setCursor( Scheme::scu_arrow );
		addInputSignal( this );
	}

	~CCofInventoryPanel()
	{
		removeInputSignal( this );
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
			m_iPendingAction = COF_INV_ACTION_NONE;
			m_iMenuSlot = -1;
			m_iHoverSlot = -1;
			m_iHoverQuickSlot = -1;
			m_iHoverAction = -1;
		}

		setVisible( open );
		setAsMouseCapture( open );
		setAsMouseArena( open );
		UpdateCursorState( open );
		if( open )
			requestFocus();
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
		ClearQuickSlots();
		m_iSelected = 0;
		m_iCombineSource = -1;
		m_iPendingAction = COF_INV_ACTION_NONE;
		m_iMenuSlot = -1;
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

	void SetQuickSlotPath( int quickSlot, const char *pszPath )
	{
		if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS )
			return;

		strlcpy( m_szQuickSlots[quickSlot], pszPath ? pszPath : "", sizeof( m_szQuickSlots[quickSlot] ) );
		repaint();
	}

	int KeyInput( int down, int keynum, const char *pszCurrentBinding )
	{
		if( !IsOpen() )
		{
			if( !down )
				return 1;

			const int quickSlot = QuickSlotForKey( keynum );
			if( quickSlot >= 0 && m_szQuickSlots[quickSlot][0] )
			{
				SendQuickUseCommand( quickSlot );
				return 0;
			}

			return 1;
		}

		if( keynum == K_TAB )
		{
			if( !down )
				SetOpen( false );
			return 0;
		}

		if( !down )
			return 0;

		switch( keynum )
		{
		case K_ESCAPE:
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
			RunAction( COF_INV_ACTION_EQUIP );
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
		DrawActionButtons();
	}

	virtual void cursorMoved( int x, int y, Panel *panel )
	{
		const int oldSlot = m_iHoverSlot;
		const int oldQuickSlot = m_iHoverQuickSlot;
		const int oldAction = m_iHoverAction;

		m_iHoverSlot = HitTestSlot( x, y );
		m_iHoverQuickSlot = HitTestQuickSlot( x, y );
		m_iHoverAction = HitTestAction( x, y );

		if( oldSlot != m_iHoverSlot || oldQuickSlot != m_iHoverQuickSlot || oldAction != m_iHoverAction )
			repaint();
	}

	virtual void cursorExited( Panel *panel )
	{
		m_iHoverSlot = -1;
		m_iHoverQuickSlot = -1;
		m_iHoverAction = -1;
		repaint();
	}

	virtual void mousePressed( MouseCode code, Panel *panel )
	{
		if( code != MOUSE_LEFT )
			return;

		m_bIgnoreNextMouseRelease = HandlePrimaryClick( true );
	}

	virtual void mouseReleased( MouseCode code, Panel *panel )
	{
		if( code != MOUSE_LEFT )
			return;

		if( m_bIgnoreNextMouseRelease )
		{
			m_bIgnoreNextMouseRelease = false;
			return;
		}

		HandlePrimaryClick( true );
	}

	virtual void mouseDoublePressed( MouseCode code, Panel *panel )
	{
		if( code != MOUSE_LEFT )
			return;

		HandlePrimaryClick( false );
	}

private:
	bool HandlePrimaryClick( bool allowActions )
	{
		int x, y;
		App::getInstance()->getCursorPos( x, y );
		screenToLocal( x, y );

		const int action = allowActions ? HitTestAction( x, y ) : -1;
		if( action >= 0 )
		{
			if( m_iMenuSlot >= 0 && m_iMenuSlot < COF_INV_VISIBLE_SLOTS )
				m_iSelected = m_iMenuSlot;
			RunAction( action );
			repaint();
			return true;
		}

		const int slot = HitTestSlot( x, y );
		if( slot >= 0 && m_Items[slot].valid )
		{
			m_iSelected = slot;
			if( m_iPendingAction != COF_INV_ACTION_NONE )
			{
				ExecuteActionOnSlot( m_iPendingAction, slot );
				m_iMenuSlot = -1;
			}
			else
			{
				m_iMenuSlot = slot;
				m_iCombineSource = -1;
			}
			repaint();
			return true;
		}

		const int quickSlot = HitTestQuickSlot( x, y );
		if( quickSlot >= 0 )
		{
			if( m_Items[m_iSelected].valid )
				SetQuickSlot( quickSlot );
			repaint();
			return true;
		}

		m_iMenuSlot = -1;
		if( m_iPendingAction != COF_INV_ACTION_COMBINE && m_iPendingAction != COF_INV_ACTION_DUAL_WIELD )
			m_iPendingAction = COF_INV_ACTION_NONE;
		repaint();
		return true;
	}

	void UpdateCursorState( bool open )
	{
		if( getSurfaceBase() )
			getSurfaceBase()->setEmulatedCursorVisible( open );

		if( open )
		{
			IN_SetVisibleMouse( true );
			IgnoreNextMouseDelta();
			App::getInstance()->setCursorOveride( App::getInstance()->getScheme()->getCursor( Scheme::scu_arrow ) );
			return;
		}

		if( gViewPort )
			gViewPort->UpdateCursorState();
		else
		{
			App::getInstance()->setCursorOveride( App::getInstance()->getScheme()->getCursor( Scheme::scu_none ) );
			IN_SetVisibleMouse( false );
			IN_ResetMouse();
		}
	}

	int HitTestSlot( int x, int y ) const
	{
		for( int i = 0; i < COF_INV_VISIBLE_SLOTS; i++ )
		{
			if( COF_RectContains( g_COFInventorySlots[i], x, y ) )
				return i;
		}
		return -1;
	}

	int HitTestQuickSlot( int x, int y ) const
	{
		for( int i = 0; i < COF_INV_QUICK_SLOTS; i++ )
		{
			if( COF_RectContains( g_COFQuickSlots[i], x, y ) )
				return i;
		}
		return -1;
	}

	int HitTestAction( int x, int y ) const
	{
		if( m_iMenuSlot < 0 || m_iMenuSlot >= COF_INV_VISIBLE_SLOTS || !m_Items[m_iMenuSlot].valid )
			return -1;

		for( int i = 0; i < COF_INV_ACTION_BUTTONS; i++ )
		{
			COFInventoryRect rect;
			GetActionButtonRect( i, rect );
			if( COF_RectContains( rect, x, y ) )
				return i;
		}
		return -1;
	}

	void GetActionMenuOrigin( int &x, int &y ) const
	{
		x = 250;
		y = 64;

		if( m_iMenuSlot >= 3 )
			y = 222;
	}

	void GetActionButtonRect( int action, COFInventoryRect &rect ) const
	{
		int x, y;
		GetActionMenuOrigin( x, y );
		rect = g_COFActionButtons[action];
		rect.x += x;
		rect.y += y;
	}

	void RunAction( int action )
	{
		if( action < 0 || action >= COF_INV_ACTION_BUTTONS || !m_Items[m_iSelected].valid )
			return;

		if( action == COF_INV_ACTION_EQUIP )
		{
			SendIndexCommand( "cof_inv_use", m_iSelected );
			m_iPendingAction = COF_INV_ACTION_NONE;
			m_iCombineSource = -1;
			m_iMenuSlot = -1;
			return;
		}

		if( action == COF_INV_ACTION_DROP )
		{
			SendIndexCommand( "cof_inv_drop", m_iSelected );
			m_iPendingAction = COF_INV_ACTION_NONE;
			m_iCombineSource = -1;
			m_iMenuSlot = -1;
			return;
		}

		if( action >= COF_INV_ACTION_QUICK_1 && action <= COF_INV_ACTION_QUICK_3 )
		{
			SetQuickSlot( action - COF_INV_ACTION_QUICK_1 );
			m_iPendingAction = COF_INV_ACTION_NONE;
			m_iCombineSource = -1;
			m_iMenuSlot = -1;
			return;
		}

		if( action == COF_INV_ACTION_COMBINE )
		{
			m_iPendingAction = COF_INV_ACTION_COMBINE;
			m_iCombineSource = m_iSelected;
			m_iMenuSlot = -1;
			repaint();
			return;
		}

		if( action == COF_INV_ACTION_DUAL_WIELD )
		{
			m_iPendingAction = COF_INV_ACTION_DUAL_WIELD;
			m_iCombineSource = m_iSelected;
			m_iMenuSlot = -1;
			repaint();
			return;
		}

		repaint();
	}

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

	void ClearQuickSlots()
	{
		memset( m_szQuickSlots, 0, sizeof( m_szQuickSlots ) );
	}

	int QuickSlotForKey( int keynum ) const
	{
		switch( keynum )
		{
		case '1':
			return 0;
		case '2':
			return 1;
		case '3':
			return 2;
		default:
			return -1;
		}
	}

	void SetQuickSlot( int quickSlot )
	{
		if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS || !m_Items[m_iSelected].valid )
			return;

		strlcpy( m_szQuickSlots[quickSlot], m_Items[m_iSelected].path, sizeof( m_szQuickSlots[quickSlot] ) );
		char szCmd[64];
		snprintf( szCmd, sizeof( szCmd ), "cof_inv_quickset %d %d\n", quickSlot, m_iSelected );
		gEngfuncs.pfnServerCmd( szCmd );
		repaint();
	}

	void SendQuickUseCommand( int quickSlot )
	{
		if( quickSlot < 0 || quickSlot >= COF_INV_QUICK_SLOTS )
			return;

		char szCmd[64];
		snprintf( szCmd, sizeof( szCmd ), "cof_inv_quickuse %d\n", quickSlot );
		gEngfuncs.pfnServerCmd( szCmd );
	}

	void ExecuteActionOnSlot( int action, int slot )
	{
		if( slot < 0 || slot >= COF_INV_MAX_ITEMS || !m_Items[slot].valid )
			return;

		if( action == COF_INV_ACTION_EQUIP )
		{
			SendIndexCommand( "cof_inv_use", slot );
			m_iPendingAction = COF_INV_ACTION_NONE;
			return;
		}

		if( action == COF_INV_ACTION_DROP )
		{
			SendIndexCommand( "cof_inv_drop", slot );
			m_iPendingAction = COF_INV_ACTION_NONE;
			return;
		}

		if( action == COF_INV_ACTION_COMBINE )
		{
			if( m_iCombineSource < 0 )
			{
				m_iCombineSource = slot;
				return;
			}

			if( m_iCombineSource != slot )
			{
				char szCmd[64];
				snprintf( szCmd, sizeof( szCmd ), "cof_inv_combine %d %d\n", m_iCombineSource, slot );
				gEngfuncs.pfnServerCmd( szCmd );
			}

			m_iCombineSource = -1;
			m_iPendingAction = COF_INV_ACTION_NONE;
		}

		if( action == COF_INV_ACTION_DUAL_WIELD )
		{
			if( m_iCombineSource < 0 )
			{
				m_iCombineSource = slot;
				return;
			}

			if( m_iCombineSource != slot )
			{
				char szCmd[64];
				snprintf( szCmd, sizeof( szCmd ), "cof_inv_dualwield %d %d\n", m_iCombineSource, slot );
				gEngfuncs.pfnServerCmd( szCmd );
			}

			m_iCombineSource = -1;
			m_iPendingAction = COF_INV_ACTION_NONE;
		}
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
		m_iPendingAction = COF_INV_ACTION_NONE;
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
		for( int i = 0; i < COF_INV_VISIBLE_SLOTS; i++ )
		{
			if( m_Items[i].valid )
				DrawItemIcon( m_Items[i], g_COFInventorySlots[i].x, g_COFInventorySlots[i].y, false );
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
		for( int i = 0; i < COF_INV_QUICK_SLOTS; i++ )
		{
			const int itemIndex = FindItemByPath( m_szQuickSlots[i] );
			if( itemIndex >= 0 )
				DrawItemIcon( m_Items[itemIndex], g_COFQuickSlots[i].x, g_COFQuickSlots[i].y, true );
		}
	}

	void DrawSelection()
	{
		if( m_iHoverSlot >= 0 && m_iHoverSlot < COF_INV_VISIBLE_SLOTS )
		{
			const COFInventoryRect &rect = g_COFInventorySlots[m_iHoverSlot];
			drawSetColor( 220, 220, 220, 150 );
			drawOutlinedRect( rect.x - 2, rect.y - 2, rect.x + rect.wide + 1, rect.y + rect.tall + 1 );
		}
		if( m_iHoverQuickSlot >= 0 && m_iHoverQuickSlot < COF_INV_QUICK_SLOTS )
		{
			const COFInventoryRect &rect = g_COFQuickSlots[m_iHoverQuickSlot];
			drawSetColor( 180, 210, 255, 150 );
			drawOutlinedRect( rect.x - 2, rect.y - 2, rect.x + rect.wide + 1, rect.y + rect.tall + 1 );
		}
		if( m_iSelected >= 0 && m_iSelected < COF_INV_VISIBLE_SLOTS && m_Items[m_iSelected].valid )
		{
			const int x = g_COFInventorySlots[m_iSelected].x;
			const int y = g_COFInventorySlots[m_iSelected].y;
			drawSetColor( 255, 220, 90, 255 );
			drawOutlinedRect( x - 2, y - 2, x + 101, y + 101 );
			drawOutlinedRect( x - 3, y - 3, x + 102, y + 102 );
		}

		if( m_iMenuSlot >= 0 && m_iMenuSlot < COF_INV_VISIBLE_SLOTS && m_Items[m_iMenuSlot].valid )
		{
			const int x = g_COFInventorySlots[m_iMenuSlot].x;
			const int y = g_COFInventorySlots[m_iMenuSlot].y;
			drawSetColor( 255, 255, 255, 220 );
			drawOutlinedRect( x - 5, y - 5, x + 104, y + 104 );
		}

		if( m_iCombineSource >= 0 && m_iCombineSource < COF_INV_VISIBLE_SLOTS && m_Items[m_iCombineSource].valid )
		{
			const int x = g_COFInventorySlots[m_iCombineSource].x;
			const int y = g_COFInventorySlots[m_iCombineSource].y;
			drawSetColor( 120, 220, 120, 255 );
			drawOutlinedRect( x - 5, y - 5, x + 104, y + 104 );
		}
	}

	void DrawActionButtons()
	{
		if( m_iMenuSlot < 0 || m_iMenuSlot >= COF_INV_VISIBLE_SLOTS || !m_Items[m_iMenuSlot].valid )
			return;

		drawSetTextFont( Scheme::sf_primary1 );

		for( int i = 0; i < COF_INV_ACTION_BUTTONS; i++ )
		{
			COFInventoryRect rect;
			GetActionButtonRect( i, rect );
			const bool enabled = m_iSelected >= 0 && m_iSelected < COF_INV_MAX_ITEMS && m_Items[m_iSelected].valid;
			const bool hover = enabled && m_iHoverAction == i;
			const bool pending = enabled && m_iPendingAction == i;

			drawSetColor( pending ? 95 : ( hover ? 80 : 35 ), pending ? 75 : ( hover ? 80 : 35 ), pending ? 30 : ( hover ? 80 : 35 ), enabled ? 230 : 130 );
			drawFilledRect( rect.x, rect.y, rect.x + rect.wide, rect.y + rect.tall );
			drawSetColor( ( hover || pending ) ? 255 : 170, ( hover || pending ) ? 220 : 170, ( hover || pending ) ? 90 : 170, enabled ? 255 : 120 );
			drawOutlinedRect( rect.x, rect.y, rect.x + rect.wide, rect.y + rect.tall );

			drawSetTextColor( enabled ? 240 : 120, enabled ? 240 : 120, enabled ? 240 : 120, 255 );
			drawSetTextPos( rect.x + ( i >= COF_INV_ACTION_QUICK_1 ? 11 : 12 ), rect.y + ( i >= COF_INV_ACTION_QUICK_1 ? 7 : 6 ) );
			drawPrintText( g_COFActionLabels[i], strlen( g_COFActionLabels[i] ) );
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
		if( m_iPendingAction == COF_INV_ACTION_EQUIP )
			snprintf( szHelp, sizeof( szHelp ), "EQUIP: select an item" );
		else if( m_iPendingAction == COF_INV_ACTION_DROP )
			snprintf( szHelp, sizeof( szHelp ), "DROP: select an item" );
		else if( m_iPendingAction == COF_INV_ACTION_COMBINE && m_iCombineSource < 0 )
			snprintf( szHelp, sizeof( szHelp ), "COMBINE: select the first item" );
		else if( m_iPendingAction == COF_INV_ACTION_DUAL_WIELD && m_iCombineSource < 0 )
			snprintf( szHelp, sizeof( szHelp ), "DUAL WIELD: select the first weapon" );
		else
			snprintf( szHelp, sizeof( szHelp ), "Equip, combine, drop, or choose quick slot 1/2/3" );
		drawSetTextColor( 180, 180, 180, 255 );
		drawSetTextPos( 42, 402 );
		drawPrintText( szHelp, strlen( szHelp ) );

		if( m_iCombineSource >= 0 )
		{
			drawSetTextColor( 150, 230, 150, 255 );
			const char *pszCombine = "Select second item and press C";
			if( m_iPendingAction == COF_INV_ACTION_COMBINE )
				pszCombine = "COMBINE: select the second item";
			else if( m_iPendingAction == COF_INV_ACTION_DUAL_WIELD )
				pszCombine = "DUAL WIELD: select the second weapon";
			drawSetTextPos( 42, 422 );
			drawPrintText( pszCombine, strlen( pszCombine ) );
		}
	}

	COFClientInventoryItem m_Items[COF_INV_MAX_ITEMS];
	char m_szQuickSlots[COF_INV_QUICK_SLOTS][128];
	BitmapTGA *m_pBackground;
	int m_iSelected;
	int m_iCombineSource;
	int m_iPendingAction;
	int m_iMenuSlot;
	int m_iHoverSlot;
	int m_iHoverQuickSlot;
	int m_iHoverAction;
	bool m_bIgnoreNextMouseRelease;
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

static int __MsgFunc_CofInvQuick( const char *pszName, int iSize, void *pbuf )
{
	BEGIN_READ( pbuf, iSize );
	const int quickSlot = READ_BYTE();
	const char *pszPath = READ_STRING();

	if( g_pCofInventory )
		g_pCofInventory->SetQuickSlotPath( quickSlot, pszPath );

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
	gEngfuncs.pfnHookUserMsg( "CofInvQuick", __MsgFunc_CofInvQuick );
	gEngfuncs.pfnAddCommand( "+inventory", __CmdFunc_CofInventoryDown );
	gEngfuncs.pfnAddCommand( "-inventory", __CmdFunc_CofInventoryUp );
	gEngfuncs.pfnAddCommand( "cof_inventory_toggle", __CmdFunc_CofInventoryToggle );
}

#endif
