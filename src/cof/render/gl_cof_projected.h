#ifndef COF_PROJECTED_H
#define COF_PROJECTED_H
void CofProjectedDrawModel( model_t *model, qboolean world,
    texture_t *(*textureForSurface)( msurface_t * ));
void CofProjectedShutdown( void );
void CofProjectedNewMap( void );
#endif
