#pragma once

void COF_Inventory_Init( void );
void COF_Inventory_VidInit( void );
void COF_Inventory_Draw( float flTime );
bool COF_Inventory_IsVisible( void );
int COF_Inventory_KeyInput( int down, int keynum, const char *pszCurrentBinding );
