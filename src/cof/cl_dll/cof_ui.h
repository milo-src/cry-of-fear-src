#pragma once

struct COFUIRect
{
	int x;
	int y;
	int wide;
	int tall;
};

void COF_UI_Init( void );
void COF_UI_VidInit( void );
void COF_UI_SetActive( bool active );
bool COF_UI_IsActive( void );
bool COF_UI_ConsumeMouseDelta( float dx, float dy );
int COF_UI_KeyInput( int down, int keynum );
void COF_UI_EndFrame( void );

int COF_UI_MouseX( void );
int COF_UI_MouseY( void );
bool COF_UI_MouseDown( int button );
bool COF_UI_MousePressed( int button );
bool COF_UI_MouseReleased( int button );
bool COF_UI_HitRect( const COFUIRect &rect, int x, int y );

void COF_UI_FillRect( int x, int y, int wide, int tall, int r, int g, int b, int a );
void COF_UI_OutlineRect( int x, int y, int wide, int tall, int r, int g, int b, int a );
void COF_UI_DrawText( int x, int y, const char *pszText, int r, int g, int b );
void COF_UI_DrawTextCentered( const COFUIRect &rect, const char *pszText, int r, int g, int b );
void COF_UI_DrawCursor( void );
