#include "hud.h"
#include "cl_util.h"
#include "keydefs.h"
#include "cof_ui.h"

#include <string.h>

static bool g_COFUIActive = false;
static float g_COFUIMouseX = 0.0f;
static float g_COFUIMouseY = 0.0f;
static int g_COFUIMouseDown = 0;
static int g_COFUIMousePressed = 0;
static int g_COFUIMouseReleased = 0;
static cvar_t *g_pCOFUIMouseScale = NULL;

static int COF_UI_ButtonFromKey( int keynum )
{
	if( keynum >= K_MOUSE1 && keynum <= K_MOUSE5 )
		return keynum - K_MOUSE1;

	return -1;
}

static float COF_UI_ClampFloat( float value, float low, float high )
{
	if( value < low )
		return low;
	if( value > high )
		return high;
	return value;
}

void COF_UI_Init( void )
{
	g_pCOFUIMouseScale = gEngfuncs.pfnRegisterVariable( "cof_ui_mouse_scale", "3.0", FCVAR_ARCHIVE );
}

void COF_UI_VidInit( void )
{
	if( g_COFUIMouseX <= 0.0f || g_COFUIMouseY <= 0.0f )
	{
		g_COFUIMouseX = ScreenWidth * 0.5f;
		g_COFUIMouseY = ScreenHeight * 0.5f;
	}

	g_COFUIMouseX = COF_UI_ClampFloat( g_COFUIMouseX, 0.0f, (float)( ScreenWidth - 1 ) );
	g_COFUIMouseY = COF_UI_ClampFloat( g_COFUIMouseY, 0.0f, (float)( ScreenHeight - 1 ) );
}

void COF_UI_SetActive( bool active )
{
	if( g_COFUIActive == active )
		return;

	g_COFUIActive = active;
	g_COFUIMousePressed = 0;
	g_COFUIMouseReleased = 0;
	g_COFUIMouseDown = 0;

	if( active )
	{
		g_COFUIMouseX = ScreenWidth * 0.5f;
		g_COFUIMouseY = ScreenHeight * 0.5f;
	}
}

bool COF_UI_IsActive( void )
{
	return g_COFUIActive;
}

bool COF_UI_ConsumeMouseDelta( float dx, float dy )
{
	if( !g_COFUIActive )
		return false;

	const float scale = g_pCOFUIMouseScale ? g_pCOFUIMouseScale->value : 3.0f;
	g_COFUIMouseX += dx * scale;
	g_COFUIMouseY += dy * scale;
	g_COFUIMouseX = COF_UI_ClampFloat( g_COFUIMouseX, 0.0f, (float)( ScreenWidth - 1 ) );
	g_COFUIMouseY = COF_UI_ClampFloat( g_COFUIMouseY, 0.0f, (float)( ScreenHeight - 1 ) );
	return true;
}

int COF_UI_KeyInput( int down, int keynum )
{
	if( !g_COFUIActive )
		return 1;

	const int button = COF_UI_ButtonFromKey( keynum );
	if( button < 0 )
		return 1;

	const int mask = 1 << button;
	if( down )
	{
		if( !( g_COFUIMouseDown & mask ) )
			g_COFUIMousePressed |= mask;
		g_COFUIMouseDown |= mask;
	}
	else
	{
		if( g_COFUIMouseDown & mask )
			g_COFUIMouseReleased |= mask;
		g_COFUIMouseDown &= ~mask;
	}

	return 0;
}

void COF_UI_EndFrame( void )
{
	g_COFUIMousePressed = 0;
	g_COFUIMouseReleased = 0;
}

int COF_UI_MouseX( void )
{
	return (int)g_COFUIMouseX;
}

int COF_UI_MouseY( void )
{
	return (int)g_COFUIMouseY;
}

bool COF_UI_MouseDown( int button )
{
	return ( g_COFUIMouseDown & ( 1 << button ) ) != 0;
}

bool COF_UI_MousePressed( int button )
{
	return ( g_COFUIMousePressed & ( 1 << button ) ) != 0;
}

bool COF_UI_MouseReleased( int button )
{
	return ( g_COFUIMouseReleased & ( 1 << button ) ) != 0;
}

bool COF_UI_HitRect( const COFUIRect &rect, int x, int y )
{
	return x >= rect.x && y >= rect.y && x < rect.x + rect.wide && y < rect.y + rect.tall;
}

void COF_UI_FillRect( int x, int y, int wide, int tall, int r, int g, int b, int a )
{
	FillRGBA( x, y, wide, tall, r, g, b, a );
}

void COF_UI_OutlineRect( int x, int y, int wide, int tall, int r, int g, int b, int a )
{
	COF_UI_FillRect( x, y, wide, 1, r, g, b, a );
	COF_UI_FillRect( x, y + tall - 1, wide, 1, r, g, b, a );
	COF_UI_FillRect( x, y, 1, tall, r, g, b, a );
	COF_UI_FillRect( x + wide - 1, y, 1, tall, r, g, b, a );
}

void COF_UI_DrawText( int x, int y, const char *pszText, int r, int g, int b )
{
	if( !pszText || !pszText[0] )
		return;

	gHUD.DrawHudString( x, y, ScreenWidth, pszText, r, g, b );
}

void COF_UI_DrawTextCentered( const COFUIRect &rect, const char *pszText, int r, int g, int b )
{
	if( !pszText || !pszText[0] )
		return;

	const int textWide = gHUD.DrawHudStringLen( pszText );
	const int x = rect.x + ( rect.wide - textWide ) / 2;
	const int y = rect.y + ( rect.tall - gHUD.m_iFontHeight ) / 2;
	COF_UI_DrawText( x, y, pszText, r, g, b );
}

void COF_UI_DrawCursor( void )
{
	if( !g_COFUIActive )
		return;

	const int x = COF_UI_MouseX();
	const int y = COF_UI_MouseY();
	COF_UI_FillRect( x, y, 13, 2, 255, 235, 150, 255 );
	COF_UI_FillRect( x, y, 2, 13, 255, 235, 150, 255 );
	COF_UI_FillRect( x + 2, y + 2, 9, 1, 25, 25, 25, 210 );
	COF_UI_FillRect( x + 2, y + 2, 1, 9, 25, 25, 25, 210 );
}
