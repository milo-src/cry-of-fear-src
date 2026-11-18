/* Reconstructed water pipeline: client.dll 10086890/10086d10/100866e0.
 * Evidence and port boundaries: analysis/graphics/shaders.md.
 * No NVIDIA Cg runtime or original game code is loaded.
 */
#include "gl_local.h"
#include "gl_cof.h"
#include "cof_shader_sources.h"

static GLhandleARB waterProgram, blackProgram, desaturateProgram;
static GLuint captures[3]; /* original scene, rendered noise, white water mask */
static int captureWidth, captureHeight, noiseTexture;
static cvar_t *waterEnabled, *waterSpeedX, *waterSpeedY, *waterReady;
static cvar_t *postEffects, *grayscale;
static qboolean supported, failed, reported, desaturationReported;
static const GLfloat identity[16] = {
 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1
};

static void CofReady( qboolean ready )
{
 if( waterReady && waterReady->value != (float)ready )
  gEngfuncs.Cvar_FullSet( "cof_water_ready", ready ? "1" : "0", FCVAR_READ_ONLY );
}

static GLhandleARB CofCompile( GLenum type, const char *source )
{
 GLhandleARB shader = pglCreateShaderObjectARB( type );
 GLint ok = 0;
 char log[2048];
 pglShaderSourceARB( shader, 1, (const GLcharARB **)&source, NULL );
 pglCompileShaderARB( shader );
 pglGetObjectParameterivARB( shader, GL_OBJECT_COMPILE_STATUS_ARB, &ok );
 if( ok ) return shader;
 pglGetInfoLogARB( shader, sizeof( log ), NULL, log );
 gEngfuncs.Con_Printf( "CoF shader compile failed: %s\n", log );
 pglDeleteObjectARB( shader );
 return 0;
}

static GLhandleARB CofProgram( const char *vertex, const char *fragment )
{
 GLhandleARB vs = CofCompile( GL_VERTEX_SHADER_ARB, vertex );
 GLhandleARB fs = CofCompile( GL_FRAGMENT_SHADER_ARB, fragment ), program = 0;
 GLint ok = 0;
 char log[2048];
 if( vs && fs )
 {
  program = pglCreateProgramObjectARB();
  pglAttachObjectARB( program, vs );
  pglAttachObjectARB( program, fs );
  pglLinkProgramARB( program );
  pglGetObjectParameterivARB( program, GL_OBJECT_LINK_STATUS_ARB, &ok );
  if( !ok )
  {
   pglGetInfoLogARB( program, sizeof( log ), NULL, log );
   gEngfuncs.Con_Printf( "CoF shader link failed: %s\n", log );
   pglDeleteObjectARB( program );
   program = 0;
  }
 }
 if( vs ) pglDeleteObjectARB( vs );
 if( fs ) pglDeleteObjectARB( fs );
 return program;
}

static void CofStatus( void )
{
 gEngfuncs.Con_Printf( "COF_RENDER supported=%d water_program=%d black_program=%d desaturate_program=%d ready=%g capture=%dx%d noise=%d\n",
  supported, waterProgram != 0, blackProgram != 0, desaturateProgram != 0, waterReady ? waterReady->value : 0,
  captureWidth, captureHeight, noiseTexture );
}

void CofRenderInit( void )
{
 waterEnabled = gEngfuncs.Cvar_Get( "cg_water", "1", FCVAR_ARCHIVE, "Recovered CoF water shader" );
 waterSpeedX = gEngfuncs.Cvar_Get( "cl_waterspeed_x", "32", FCVAR_ARCHIVE, "CoF water X time divisor" );
 waterSpeedY = gEngfuncs.Cvar_Get( "cl_waterspeed_y", "20", FCVAR_ARCHIVE, "CoF water Y time divisor" );
 waterReady = gEngfuncs.Cvar_Get( "cof_water_ready", "0", FCVAR_READ_ONLY, "CoF renderer water resources available" );
 postEffects = gEngfuncs.Cvar_Get( "gl_posteffects", "1", FCVAR_ARCHIVE, "Recovered CoF post effects" );
 grayscale = gEngfuncs.Cvar_Get( "gl_grayscale", "0", FCVAR_ARCHIVE, "CoF fallback desaturation amount" );
 CofReady( false );
 supported = glConfig.context == CONTEXT_TYPE_GL && GL_Support( GL_SHADER_GLSL100_EXT )
  && GL_Support( GL_SHADER_OBJECTS_EXT ) && glConfig.max_teximage_units >= 4;
 failed = reported = desaturationReported = false;
 gEngfuncs.Cmd_AddCommand( "cof_render_status", CofStatus, "Print source-owned CoF graphics status" );
 if( !supported )
 {
  gEngfuncs.Con_Printf( "CoF water: compatibility GLSL unavailable; stock water retained.\n" );
  return;
 }
 waterProgram = CofProgram( cof_water_vert, cof_water_frag );
 blackProgram = CofProgram( cof_black_vert, cof_black_frag );
 desaturateProgram = CofProgram( cof_black_vert, cof_desaturate_frag );
 failed = !waterProgram;
}

void CofRenderShutdown( void )
{
 CofReady( false );
 gEngfuncs.Cmd_RemoveCommand( "cof_render_status" );
 if( captures[0] ) pglDeleteTextures( 3, captures );
 memset( captures, 0, sizeof( captures ));
 if( waterProgram ) pglDeleteObjectARB( waterProgram );
 if( blackProgram ) pglDeleteObjectARB( blackProgram );
 if( desaturateProgram ) pglDeleteObjectARB( desaturateProgram );
 waterProgram = blackProgram = desaturateProgram = 0;
 captureWidth = captureHeight = noiseTexture = 0;
 supported = false;
}

static qboolean CofCaptures( int width, int height )
{
 int w = 2, h = 2, i;
 GLint binding;
 while( w < width ) w *= 2;
 while( h < height ) h *= 2;
 if( w > glConfig.max_2d_texture_size || h > glConfig.max_2d_texture_size ) return false;
 if( w == captureWidth && h == captureHeight && captures[0] ) return true;
 /* Attribute allocation errors to this operation, not an earlier engine draw. */
 for( i = 0; i < 16 && pglGetError() != GL_NO_ERROR; i++ ) {}
 pglGetIntegerv( GL_TEXTURE_BINDING_2D, &binding );
 if( captures[0] ) pglDeleteTextures( 3, captures );
 pglGenTextures( 3, captures );
 for( i = 0; i < 3; i++ )
 {
  pglBindTexture( GL_TEXTURE_2D, captures[i] );
  pglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
  pglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
  pglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
  pglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
  /* Explicit zero padding avoids reading outside the drawable as old Cg did. */
  {
   byte *zero = Mem_Malloc( r_temppool, (size_t)w * h * 4 );
   memset( zero, 0, (size_t)w * h * 4 );
   pglTexImage2D( GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, zero );
   Mem_Free( zero );
  }
 }
 pglBindTexture( GL_TEXTURE_2D, binding );
 if( pglGetError() != GL_NO_ERROR )
 {
  pglDeleteTextures( 3, captures );
  memset( captures, 0, sizeof( captures ));
  captureWidth = captureHeight = 0;
  return false;
 }
 captureWidth = w;
 captureHeight = h;
 return true;
}

/* NDC and framebuffer UVs have matching bottom-left origins. */
static void CofQuad( float u, float v )
{
 pglBegin( GL_QUADS );
 pglTexCoord2f( 0, 0 ); pglVertex3f( -1, -1, 0 );
 pglTexCoord2f( u, 0 ); pglVertex3f( 1, -1, 0 );
 pglTexCoord2f( u, v ); pglVertex3f( 1, 1, 0 );
 pglTexCoord2f( 0, v ); pglVertex3f( -1, 1, 0 );
 pglEnd();
}

static void CofFullscreen( qboolean black, float u, float v )
{
 pglMatrixMode( GL_MODELVIEW ); pglPushMatrix(); pglLoadIdentity();
 pglMatrixMode( GL_PROJECTION ); pglPushMatrix(); pglLoadIdentity();
 pglDisable( GL_DEPTH_TEST ); pglDepthMask( GL_FALSE );
 pglDisable( GL_CULL_FACE );
 if( black ) pglDisable( GL_TEXTURE_2D );
 pglColor4f( black ? 0 : 1, black ? 0 : 1, black ? 0 : 1, 1 );
 CofQuad( u, v );
 pglEnable( GL_TEXTURE_2D );
 pglEnable( GL_DEPTH_TEST ); pglEnable( GL_CULL_FACE );
 pglPopMatrix(); pglMatrixMode( GL_MODELVIEW ); pglPopMatrix();
}

static qboolean CofWaterEntity( const cl_entity_t *ent )
{
 return ent && ent->curstate.skin == CONTENTS_WATER &&
  ent->curstate.maxs[0] > ent->curstate.mins[0] &&
  ent->curstate.maxs[1] > ent->curstate.mins[1];
}

static qboolean CofHasWater( void )
{
 int i;
 for( i = 0; i < 1024; i++ )
  if( CofWaterEntity( CL_GetEntityByIndex( i ))) return true;
 return false;
}

static int CofWaterBounds( qboolean mask )
{
 int i, count = 0;
 float x = waterSpeedX->value != 0 ? gp_cl->time / waterSpeedX->value : 0;
 float y = waterSpeedY->value != 0 ? gp_cl->time / waterSpeedY->value : 0;
 for( i = 0; i < 1024; i++ )
 {
  cl_entity_t *ent = CL_GetEntityByIndex( i );
  const float *mn, *mx;
  float z, u, v;
  if( !CofWaterEntity( ent )) continue;
  mn = ent->curstate.mins; mx = ent->curstate.maxs;
  z = mx[2] + (mask ? 0 : 1);
  u = (mx[0] - mn[0]) / 128.0f + x;
  v = (mx[1] - mn[1]) / 128.0f + y;
  pglBegin( GL_QUADS );
  pglTexCoord2f( x, y ); pglVertex3f( mn[0], mn[1], z );
  pglTexCoord2f( x, v ); pglVertex3f( mn[0], mx[1], z );
  pglTexCoord2f( u, v ); pglVertex3f( mx[0], mx[1], z );
  pglTexCoord2f( u, y ); pglVertex3f( mx[0], mn[1], z );
  pglEnd();
  count++;
 }
 return count;
}

static void CofCapture( int index, const GLint *viewport )
{
 pglBindTexture( GL_TEXTURE_2D, captures[index] );
 pglCopyTexSubImage2D( GL_TEXTURE_2D, 0, 0, 0, viewport[0], viewport[1], viewport[2], viewport[3] );
}

void CofRenderWater( void )
{
 GLint viewport[4], matrixMode, activeTexture;
 GLint oldProgram;
 float u, v;
 int unit, count;
 if( !supported || failed || !waterEnabled->value || (RI.rvp.flags & RF_DRAW_CUBEMAP) ) return;
 /* No water quads means the native pass is an identity operation. Avoid its
  * framebuffer copies and state transitions entirely on ordinary maps.
  * Resource readiness is retained across maps, and initialized lazily when
  * the first actual water volume arrives (stock water covers that frame). */
 if( !CofHasWater() ) return;
 if( noiseTexture && GL_FindTexture( "textures/noise.tga" ) != noiseTexture )
 {
  noiseTexture = 0;
  CofReady( false );
 }
 if( !noiseTexture )
 {
  noiseTexture = GL_LoadTexture( "textures/noise.tga", NULL, 0, TF_NOMIPMAP );
  if( !noiseTexture ) { failed = true; CofReady( false ); return; }
 }
 pglGetIntegerv( 0x0BA2 /* GL_VIEWPORT */, viewport );
 if( viewport[2] <= 0 || viewport[3] <= 0 ) return;
 pglGetIntegerv( GL_MATRIX_MODE, &matrixMode );
 pglGetIntegerv( GL_ACTIVE_TEXTURE_ARB, &activeTexture );
 pglGetIntegerv( 0x8B8D /* GL_CURRENT_PROGRAM */, &oldProgram );
 pglPushAttrib( GL_ALL_ATTRIB_BITS );
 pglActiveTextureARB( GL_TEXTURE0_ARB );
 if( !CofCaptures( viewport[2], viewport[3] ))
 {
  pglPopAttrib(); pglActiveTextureARB( activeTexture );
  failed = true; CofReady( false );
  gEngfuncs.Con_Printf( "CoF water: capture allocation failed; stock water retained.\n" );
  return;
 }
 CofReady( true );
 for( unit = 1; unit < 4; unit++ )
 {
  pglActiveTextureARB( GL_TEXTURE0_ARB + unit ); pglDisable( GL_TEXTURE_2D );
 }
 pglActiveTextureARB( GL_TEXTURE0_ARB );
 pglUseProgramObjectARB( 0 );
 pglEnable( GL_TEXTURE_2D ); pglDisable( GL_BLEND );
 pglColorMask( GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE );
 pglTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
 pglMatrixMode( GL_MODELVIEW ); pglPushMatrix(); GL_LoadMatrix( RI.worldviewMatrix );
 u = (float)viewport[2] / captureWidth; v = (float)viewport[3] / captureHeight;
 CofCapture( 0, viewport );
 CofFullscreen( true, u, v );
 pglDisable( GL_CULL_FACE ); pglDepthMask( GL_FALSE );
 pglBindTexture( GL_TEXTURE_2D, R_GetTexture( noiseTexture )->texnum );
 pglColor4f( 1, 1, 1, 1 );
 count = CofWaterBounds( false );
 CofCapture( 1, viewport );
 CofFullscreen( true, u, v );
 pglDisable( GL_TEXTURE_2D ); pglDisable( GL_CULL_FACE );
 pglColor4f( 1, 1, 1, 1 );
 CofWaterBounds( true );
 CofCapture( 2, viewport );
 CofFullscreen( true, u, v );
 pglBindTexture( GL_TEXTURE_2D, captures[0] ); CofFullscreen( false, u, v );
 pglUseProgramObjectARB( waterProgram );
 pglUniform1iARB( pglGetUniformLocationARB( waterProgram, "OffsetTex" ), 0 );
 pglUniform1iARB( pglGetUniformLocationARB( waterProgram, "DecalTex" ), 2 );
 pglUniform1iARB( pglGetUniformLocationARB( waterProgram, "MaskTex" ), 3 );
 pglUniform4fARB( pglGetUniformLocationARB( waterProgram, "TexOffset" ), 0, 0.05f, 0, 0.05f );
 pglUniform1fARB( pglGetUniformLocationARB( waterProgram, "flScreen" ), 0.965f );
 pglUniformMatrix4fvARB( pglGetUniformLocationARB( waterProgram, "ModelViewProj" ), 1, GL_FALSE, identity );
 pglActiveTextureARB( GL_TEXTURE0_ARB + 3 ); pglBindTexture( GL_TEXTURE_2D, captures[2] );
 pglActiveTextureARB( GL_TEXTURE2_ARB ); pglBindTexture( GL_TEXTURE_2D, captures[0] );
 pglActiveTextureARB( GL_TEXTURE0_ARB ); pglBindTexture( GL_TEXTURE_2D, captures[1] );
 pglEnable( GL_BLEND ); pglBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
 pglDisable( GL_DEPTH_TEST ); pglDisable( GL_CULL_FACE );
 pglColor4f( 1, 1, 1, 1 ); CofQuad( u, v );
 pglMatrixMode( GL_MODELVIEW ); pglPopMatrix();
 pglUseProgramObjectARB( oldProgram );
 pglPopAttrib(); pglActiveTextureARB( activeTexture ); pglMatrixMode( matrixMode );
 if( count && !reported )
 {
  gEngfuncs.Con_Printf( "COF_WATER rendered=%d viewport=%dx%d capture=%dx%d\n", count,
   viewport[2], viewport[3], captureWidth, captureHeight );
  reported = true;
 }
}

void CofRenderPostProcess( void )
{
 GLint viewport[4], activeTexture, oldProgram;
 float raw, alpha;
 int unit;
 if( !supported || !desaturateProgram || !postEffects->value ||
  !(RI.rvp.flags & RF_DRAW_WORLD) || (RI.rvp.flags & RF_DRAW_CUBEMAP) ) return;
 raw = gEngfuncs.pfnGetCvarFloat( "cof_blackwhite" );
 alpha = raw != 0 ? raw / 255.0f : grayscale->value;
 alpha = bound( 0.0f, alpha, 1.0f );
 if( alpha <= 0 ) return;
 pglGetIntegerv( 0x0BA2 /* GL_VIEWPORT */, viewport );
 if( viewport[2] <= 0 || viewport[3] <= 0 ) return;
 pglGetIntegerv( GL_ACTIVE_TEXTURE_ARB, &activeTexture );
 pglGetIntegerv( 0x8B8D /* GL_CURRENT_PROGRAM */, &oldProgram );
 pglPushAttrib( GL_ALL_ATTRIB_BITS );
 pglActiveTextureARB( GL_TEXTURE0_ARB );
 if( !CofCaptures( viewport[2], viewport[3] ))
 {
  pglPopAttrib(); pglActiveTextureARB( activeTexture );
  CofReady( false );
  return;
 }
 CofCapture( 0, viewport );
 for( unit = 1; unit < 4; unit++ )
 {
  pglActiveTextureARB( GL_TEXTURE0_ARB + unit ); pglDisable( GL_TEXTURE_2D );
 }
 pglActiveTextureARB( GL_TEXTURE0_ARB );
 pglUseProgramObjectARB( desaturateProgram );
 pglUniform1iARB( pglGetUniformLocationARB( desaturateProgram, "DecalTex" ), 0 );
 pglUniform1fARB( pglGetUniformLocationARB( desaturateProgram, "Desaturation" ), alpha );
 pglUniformMatrix4fvARB( pglGetUniformLocationARB( desaturateProgram, "ModelViewProj" ), 1, GL_FALSE, identity );
 pglEnable( GL_BLEND ); pglBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
 pglDisable( GL_DEPTH_TEST ); pglDepthMask( GL_FALSE );
 pglDisable( GL_CULL_FACE ); pglDisable( GL_ALPHA_TEST );
 pglColor4f( 1, 1, 1, 1 );
 CofQuad( (float)viewport[2] / captureWidth, (float)viewport[3] / captureHeight );
 pglUseProgramObjectARB( oldProgram );
 pglPopAttrib(); pglActiveTextureARB( activeTexture );
 if( !desaturationReported )
 {
  gEngfuncs.Con_Printf( "COF_DESATURATION alpha=%g viewport=%dx%d\n", alpha, viewport[2], viewport[3] );
  desaturationReported = true;
 }
}

void CofRenderFog( void )
{
 cvar_t *enabled = gEngfuncs.pfnGetCvarPointer( "cof_fog_enable" );
 float rgb[3];
 /* Client owns message interpolation. Apply its current frame before the
  * world draw; HUD_DrawNormalTriangles is too late for world geometry. */
 if( !enabled || !(RI.rvp.flags & RF_DRAW_WORLD) || RI.fogEnabled ) return;
 rgb[0] = gEngfuncs.pfnGetCvarFloat( "cof_fog_r" );
 rgb[1] = gEngfuncs.pfnGetCvarFloat( "cof_fog_g" );
 rgb[2] = gEngfuncs.pfnGetCvarFloat( "cof_fog_b" );
 TriFogParams( 0, 1 );
 TriFog( rgb, gEngfuncs.pfnGetCvarFloat( "cof_fog_start" ),
  gEngfuncs.pfnGetCvarFloat( "cof_fog_end" ),
  enabled->value != 0 && ENGINE_GET_PARM( PARM_WATER_LEVEL ) < 2 );
 glState.isFogEnabled = pglIsEnabled( GL_FOG );
}
