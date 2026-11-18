/* Source-owned CoF renderer integration; compiled into the prepared Xash tree. */
#ifndef COF_RENDER_H
#define COF_RENDER_H
void CofRenderInit( void );
void CofRenderShutdown( void );
void CofRenderWater( void );
void CofRenderFog( void );
void CofRenderPostProcess( void );
#endif
