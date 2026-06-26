#pragma once

#if USE_VGUI
void COF_Inventory_Init( void );
void COF_Inventory_VidInit( void );
bool COF_Inventory_IsVisible( void );
int COF_Inventory_KeyInput( int down, int keynum, const char *pszCurrentBinding );
#endif
