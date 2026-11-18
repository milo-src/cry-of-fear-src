
#include "gl_local.h"
#if XASH_GL4ES
#include "gl4es/include/gl4esinit.h"
#include "gl4es/include/gl4eshint.h"
#endif // XASH_GL4ES

CVAR_DEFINE( gl_extensions, "gl_allow_extensions", "1", FCVAR_GLCONFIG|FCVAR_READ_ONLY, "allow gl_extensions" );
CVAR_DEFINE( gl_texture_anisotropy, "gl_anisotropy", "8", FCVAR_GLCONFIG, "textures anisotropic filter" );
CVAR_DEFINE_AUTO( gl_texture_lodbias, "0.0", FCVAR_GLCONFIG, "LOD bias for mipmapped textures (perfomance|quality)" );
CVAR_DEFINE_AUTO( gl_texture_nearest, "0", FCVAR_GLCONFIG, "disable texture filter" );
CVAR_DEFINE_AUTO( gl_lightmap_nearest, "0", FCVAR_GLCONFIG, "disable lightmap filter" );
CVAR_DEFINE_AUTO( gl_fbo_nearest, "0", FCVAR_GLCONFIG, "disable filter when upscaling the scene rendered with r_scene_scale" );
CVAR_DEFINE_AUTO( gl_keeptjunctions, "1", FCVAR_GLCONFIG, "removing tjuncs causes blinking pixels" );
CVAR_DEFINE_AUTO( gl_check_errors, "1", FCVAR_GLCONFIG, "ignore video engine errors" );
CVAR_DEFINE_AUTO( gl_polyoffset, "2", FCVAR_GLCONFIG, "polygon offset for decals" );
CVAR_DEFINE_AUTO( gl_polyoffset_bmodels, "2", FCVAR_GLCONFIG, "polygon offset for brush models" );
CVAR_DEFINE_AUTO( gl_wireframe, "0", FCVAR_GLCONFIG|FCVAR_SPONLY, "show wireframe overlay" );
CVAR_DEFINE_AUTO( gl_finish, "0", FCVAR_GLCONFIG, "use glFinish instead of glFlush" );
CVAR_DEFINE_AUTO( gl_nosort, "0", FCVAR_GLCONFIG, "disable sorting of translucent surfaces" );
CVAR_DEFINE_AUTO( gl_test, "0", 0, "engine developer cvar for quick testing new features" );
CVAR_DEFINE_AUTO( gl_msaa, "1", FCVAR_GLCONFIG, "enable or disable multisample anti-aliasing" );
CVAR_DEFINE_AUTO( gl_stencilbits, "8", FCVAR_GLCONFIG|FCVAR_READ_ONLY, "pixelformat stencil bits (0 - auto)" );
CVAR_DEFINE_AUTO( gl_overbright, "1", FCVAR_GLCONFIG, "overbrights" );
CVAR_DEFINE_AUTO( gl_fog, "1", FCVAR_GLCONFIG, "allow for rendering fog using built-in OpenGL fog implementation" );
CVAR_DEFINE_AUTO( gl_litwater_force, "0", FCVAR_GLCONFIG, "force enable lightmapped water, even if support not declared in the map" );
CVAR_DEFINE_AUTO( r_lighting_ambient, "0.3", FCVAR_GLCONFIG, "map ambient lighting scale" );
CVAR_DEFINE_AUTO( r_detailtextures, "1", FCVAR_GLCONFIG, "enable detail textures support" );
CVAR_DEFINE_AUTO( r_novis, "0", 0, "ignore vis information (perfomance test)" );
CVAR_DEFINE_AUTO( r_nocull, "0", 0, "ignore frustrum culling (perfomance test)" );
CVAR_DEFINE_AUTO( r_lockpvs, "0", FCVAR_CHEAT, "lockpvs area at current point (pvs test)" );
CVAR_DEFINE_AUTO( r_lockfrustum, "0", FCVAR_CHEAT, "lock frustrum area at current point (cull test)" );
CVAR_DEFINE_AUTO( r_traceglow, "0", FCVAR_GLCONFIG, "cull flares behind models" );
CVAR_DEFINE_AUTO( gl_round_down, "2", FCVAR_GLCONFIG|FCVAR_READ_ONLY, "round texture sizes to nearest POT value" );
CVAR_DEFINE( r_vbo, "gl_vbo", "0", FCVAR_GLCONFIG, "draw world using VBO (known to be glitchy)" );
CVAR_DEFINE( r_vbo_detail, "gl_vbo_detail", "0", FCVAR_GLCONFIG, "detail vbo mode (0: disable, 1: multipass, 2: singlepass, broken decal dlights)" );
CVAR_DEFINE( r_vbo_dlightmode, "gl_vbo_dlightmode", "1", FCVAR_GLCONFIG, "vbo dlight rendering mode (0-1)" );
CVAR_DEFINE( r_vbo_overbrightmode, "gl_vbo_overbrightmode", "0", FCVAR_GLCONFIG, "vbo overbright rendering mode (0-1)" );
CVAR_DEFINE_AUTO( r_ripple, "0", FCVAR_GLCONFIG, "enable software-like water texture ripple simulation" );
CVAR_DEFINE_AUTO( r_ripple_updatetime, "0.05", FCVAR_GLCONFIG, "how fast ripple simulation is" );
CVAR_DEFINE_AUTO( r_ripple_spawntime, "0.1", FCVAR_GLCONFIG, "how fast new ripples spawn" );
CVAR_DEFINE_AUTO( r_large_lightmaps, "0", FCVAR_GLCONFIG|FCVAR_LATCH, "enable larger lightmap atlas textures (might break custom renderer mods)" );
CVAR_DEFINE_AUTO( r_scene_scale, "1.0", FCVAR_GLCONFIG, "render the 3D scene at this fraction of the window resolution (0.1 to 8.0), HUD is unaffected" );


	gl_globals_t	tr;
	glconfig_t	glConfig;
	glstate_t	glState;
	glwstate_t	glw_state;

#if XASH_GL_STATIC
	#define GL_CALL( x ) #x, NULL
#else
	#define GL_CALL( x ) #x, (void**)&p##x
#endif

static const dllfunc_t opengl_110funcs[] =
{
{ GL_CALL( glClearColor ) },
{ GL_CALL( glClear ) },
{ GL_CALL( glAlphaFunc ) },
{ GL_CALL( glBlendFunc ) },
{ GL_CALL( glCullFace ) },
{ GL_CALL( glDrawBuffer ) },
{ GL_CALL( glReadBuffer ) },
{ GL_CALL( glAccum ) },
{ GL_CALL( glEnable ) },
{ GL_CALL( glDisable ) },
{ GL_CALL( glEnableClientState ) },
{ GL_CALL( glDisableClientState ) },
{ GL_CALL( glGetBooleanv ) },
{ GL_CALL( glGetDoublev ) },
{ GL_CALL( glGetFloatv ) },
{ GL_CALL( glGetIntegerv ) },
{ GL_CALL( glGetError ) },
{ GL_CALL( glGetString ) },
{ GL_CALL( glFinish ) },
{ GL_CALL( glFlush ) },
{ GL_CALL( glClearDepth ) },
{ GL_CALL( glDepthFunc ) },
{ GL_CALL( glDepthMask ) },
{ GL_CALL( glDepthRange ) },
{ GL_CALL( glFrontFace ) },
{ GL_CALL( glDrawElements ) },
{ GL_CALL( glDrawArrays ) },
{ GL_CALL( glColorMask ) },
{ GL_CALL( glIndexPointer ) },
{ GL_CALL( glVertexPointer ) },
{ GL_CALL( glNormalPointer ) },
{ GL_CALL( glColorPointer ) },
{ GL_CALL( glTexCoordPointer ) },
{ GL_CALL( glArrayElement ) },
{ GL_CALL( glColor3f ) },
{ GL_CALL( glColor3fv ) },
{ GL_CALL( glColor4f ) },
{ GL_CALL( glColor4fv ) },
{ GL_CALL( glColor3ub ) },
{ GL_CALL( glColor4ub ) },
{ GL_CALL( glColor4ubv ) },
{ GL_CALL( glTexCoord1f ) },
{ GL_CALL( glTexCoord2f ) },
{ GL_CALL( glTexCoord3f ) },
{ GL_CALL( glTexCoord4f ) },
{ GL_CALL( glTexCoord1fv ) },
{ GL_CALL( glTexCoord2fv ) },
{ GL_CALL( glTexCoord3fv ) },
{ GL_CALL( glTexCoord4fv ) },
{ GL_CALL( glTexGenf ) },
{ GL_CALL( glTexGenfv ) },
{ GL_CALL( glTexGeni ) },
{ GL_CALL( glVertex2f ) },
{ GL_CALL( glVertex3f ) },
{ GL_CALL( glVertex3fv ) },
{ GL_CALL( glNormal3f ) },
{ GL_CALL( glNormal3fv ) },
{ GL_CALL( glBegin ) },
{ GL_CALL( glEnd ) },
{ GL_CALL( glLineWidth ) },
{ GL_CALL( glPointSize ) },
{ GL_CALL( glMatrixMode ) },
{ GL_CALL( glOrtho ) },
{ GL_CALL( glRasterPos2f ) },
{ GL_CALL( glFrustum ) },
{ GL_CALL( glViewport ) },
{ GL_CALL( glPushMatrix ) },
{ GL_CALL( glPopMatrix ) },
{ GL_CALL( glPushAttrib ) },
{ GL_CALL( glPopAttrib ) },
{ GL_CALL( glLoadIdentity ) },
{ GL_CALL( glLoadMatrixd ) },
{ GL_CALL( glLoadMatrixf ) },
{ GL_CALL( glMultMatrixd ) },
{ GL_CALL( glMultMatrixf ) },
{ GL_CALL( glRotated ) },
{ GL_CALL( glRotatef ) },
{ GL_CALL( glScaled ) },
{ GL_CALL( glScalef ) },
{ GL_CALL( glTranslated ) },
{ GL_CALL( glTranslatef ) },
{ GL_CALL( glReadPixels ) },
{ GL_CALL( glDrawPixels ) },
{ GL_CALL( glStencilFunc ) },
{ GL_CALL( glStencilMask ) },
{ GL_CALL( glStencilOp ) },
{ GL_CALL( glClearStencil ) },
{ GL_CALL( glIsEnabled ) },
{ GL_CALL( glIsList ) },
{ GL_CALL( glIsTexture ) },
{ GL_CALL( glTexEnvf ) },
{ GL_CALL( glTexEnvfv ) },
{ GL_CALL( glTexEnvi ) },
{ GL_CALL( glTexParameterf ) },
{ GL_CALL( glTexParameterfv ) },
{ GL_CALL( glTexParameteri ) },
{ GL_CALL( glHint ) },
{ GL_CALL( glPixelStoref ) },
{ GL_CALL( glPixelStorei ) },
{ GL_CALL( glGenTextures ) },
{ GL_CALL( glDeleteTextures ) },
{ GL_CALL( glBindTexture ) },
{ GL_CALL( glTexImage1D ) },
{ GL_CALL( glTexImage2D ) },
{ GL_CALL( glTexSubImage1D ) },
{ GL_CALL( glTexSubImage2D ) },
{ GL_CALL( glCopyTexImage1D ) },
{ GL_CALL( glCopyTexImage2D ) },
{ GL_CALL( glCopyTexSubImage1D ) },
{ GL_CALL( glCopyTexSubImage2D ) },
{ GL_CALL( glScissor ) },
{ GL_CALL( glGetTexImage ) },
{ GL_CALL( glGetTexEnviv ) },
{ GL_CALL( glPolygonOffset ) },
{ GL_CALL( glPolygonMode ) },
{ GL_CALL( glPolygonStipple ) },
{ GL_CALL( glClipPlane ) },
{ GL_CALL( glGetClipPlane ) },
{ GL_CALL( glShadeModel ) },
{ GL_CALL( glGetTexLevelParameteriv ) },
{ GL_CALL( glGetTexLevelParameterfv ) },
{ GL_CALL( glFogfv ) },
{ GL_CALL( glFogf ) },
{ GL_CALL( glFogi ) },
};

static const dllfunc_t debugoutputfuncs[] =
{
{ GL_CALL( glDebugMessageControlARB ) },
{ GL_CALL( glDebugMessageInsertARB ) },
{ GL_CALL( glDebugMessageCallbackARB ) },
{ GL_CALL( glGetDebugMessageLogARB ) },
};

static const dllfunc_t multitexturefuncs[] =
{
{ GL_CALL( glMultiTexCoord1f ) },
{ GL_CALL( glMultiTexCoord2f ) },
{ GL_CALL( glMultiTexCoord3f ) },
{ GL_CALL( glMultiTexCoord4f ) },
{ GL_CALL( glActiveTexture ) },
{ GL_CALL( glActiveTextureARB ) },
{ GL_CALL( glClientActiveTexture ) },
{ GL_CALL( glClientActiveTextureARB ) },
};

static const dllfunc_t texture3dextfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glTexImage3D ) },
{ GL_CALL( glTexSubImage3D ) },
{ GL_CALL( glCopyTexSubImage3D ) },
};

static const dllfunc_t texturecompressionfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glCompressedTexImage3DARB ) },
{ GL_CALL( glCompressedTexImage2DARB ) },
{ GL_CALL( glCompressedTexImage1DARB ) },
{ GL_CALL( glCompressedTexSubImage3DARB ) },
{ GL_CALL( glCompressedTexSubImage2DARB ) },
{ GL_CALL( glCompressedTexSubImage1DARB ) },
{ GL_CALL( glGetCompressedTexImage ) },
};

static const dllfunc_t vbofuncs[] =
{
{ GL_CALL( glBindBufferARB ) },
{ GL_CALL( glDeleteBuffersARB ) },
{ GL_CALL( glGenBuffersARB ) },
{ GL_CALL( glIsBufferARB ) },
#if !XASH_GLES
{ GL_CALL( glMapBufferARB ) },
{ GL_CALL( glUnmapBufferARB ) },
#endif
{ GL_CALL( glBufferDataARB ) },
{ GL_CALL( glBufferSubDataARB ) },
};

static const dllfunc_t multisampletexfuncs[] MAYBE_UNUSED =
{
{ GL_CALL(glTexImage2DMultisample) },
};

static const dllfunc_t drawrangeelementsfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glDrawRangeElements ) },
};

static const dllfunc_t drawrangeelementsextfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glDrawRangeElementsEXT ) },
};


// mangling in gl2shim???
// still need resolve some ext dynamicly, and mangling beginend wrappers will help only with LTO
// anyway this will not work with gl-wes/nanogl, we do not link to libGLESv2, so skip this now
#if !XASH_GL_STATIC
static const dllfunc_t mapbufferrangefuncs[] =
{
{ GL_CALL( glMapBufferRange ) },
{ GL_CALL( glFlushMappedBufferRange ) },
#if XASH_GLES
{ GL_CALL( glUnmapBufferARB ) },
#endif
};

static const dllfunc_t drawrangeelementsbasevertexfuncs[] =
{
{ GL_CALL( glDrawRangeElementsBaseVertex ) },
};

static const dllfunc_t bufferstoragefuncs[] =
{
{ GL_CALL( glBufferStorage ) },
};

static const dllfunc_t framebufferobjectfuncs[] =
{
{ GL_CALL( glIsRenderbuffer ) },
{ GL_CALL( glBindRenderbuffer ) },
{ GL_CALL( glDeleteRenderbuffers ) },
{ GL_CALL( glGenRenderbuffers ) },
{ GL_CALL( glRenderbufferStorage ) },
{ GL_CALL( glGetRenderbufferParameteriv ) },
{ GL_CALL( glIsFramebuffer ) },
{ GL_CALL( glBindFramebuffer ) },
{ GL_CALL( glDeleteFramebuffers ) },
{ GL_CALL( glGenFramebuffers ) },
{ GL_CALL( glCheckFramebufferStatus ) },
{ GL_CALL( glFramebufferTexture2D ) },
{ GL_CALL( glFramebufferRenderbuffer ) },
{ GL_CALL( glGetFramebufferAttachmentParameteriv ) },
};

static const dllfunc_t framebufferblitfuncs[] =
{
{ GL_CALL( glBlitFramebuffer ) },
};

static const dllfunc_t framebuffermultisamplefuncs[] =
{
{ GL_CALL( glRenderbufferStorageMultisample ) },
};

// GL_ARB_framebuffer_object merges the three EXT extensions above
static const dllfunc_t framebufferarbfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glIsRenderbuffer ) },
{ GL_CALL( glBindRenderbuffer ) },
{ GL_CALL( glDeleteRenderbuffers ) },
{ GL_CALL( glGenRenderbuffers ) },
{ GL_CALL( glRenderbufferStorage ) },
{ GL_CALL( glGetRenderbufferParameteriv ) },
{ GL_CALL( glIsFramebuffer ) },
{ GL_CALL( glBindFramebuffer ) },
{ GL_CALL( glDeleteFramebuffers ) },
{ GL_CALL( glGenFramebuffers ) },
{ GL_CALL( glCheckFramebufferStatus ) },
{ GL_CALL( glFramebufferTexture2D ) },
{ GL_CALL( glFramebufferRenderbuffer ) },
{ GL_CALL( glGetFramebufferAttachmentParameteriv ) },
{ GL_CALL( glBlitFramebuffer ) },
{ GL_CALL( glRenderbufferStorageMultisample ) },
};

static const dllfunc_t shaderobjectsfuncs[] MAYBE_UNUSED =
{
{ GL_CALL( glDeleteObjectARB ) },
{ GL_CALL( glGetHandleARB ) },
{ GL_CALL( glDetachObjectARB ) },
{ GL_CALL( glCreateShaderObjectARB ) },
{ GL_CALL( glShaderSourceARB ) },
{ GL_CALL( glCompileShaderARB ) },
{ GL_CALL( glCreateProgramObjectARB ) },
{ GL_CALL( glAttachObjectARB ) },
{ GL_CALL( glLinkProgramARB ) },
{ GL_CALL( glUseProgramObjectARB ) },
{ GL_CALL( glValidateProgramARB ) },
{ GL_CALL( glUniform1fARB ) },
{ GL_CALL( glUniform2fARB ) },
{ GL_CALL( glUniform3fARB ) },
{ GL_CALL( glUniform4fARB ) },
{ GL_CALL( glUniform1iARB ) },
{ GL_CALL( glUniform2iARB ) },
{ GL_CALL( glUniform3iARB ) },
{ GL_CALL( glUniform4iARB ) },
{ GL_CALL( glUniform1fvARB ) },
{ GL_CALL( glUniform2fvARB ) },
{ GL_CALL( glUniform3fvARB ) },
{ GL_CALL( glUniform4fvARB ) },
{ GL_CALL( glUniform1ivARB ) },
{ GL_CALL( glUniform2ivARB ) },
{ GL_CALL( glUniform3ivARB ) },
{ GL_CALL( glUniform4ivARB ) },
{ GL_CALL( glUniformMatrix2fvARB ) },
{ GL_CALL( glUniformMatrix3fvARB ) },
{ GL_CALL( glUniformMatrix4fvARB ) },
{ GL_CALL( glGetObjectParameterfvARB ) },
{ GL_CALL( glGetObjectParameterivARB ) },
{ GL_CALL( glGetInfoLogARB ) },
{ GL_CALL( glGetAttachedObjectsARB ) },
{ GL_CALL( glGetUniformLocationARB ) },
{ GL_CALL( glGetActiveUniformARB ) },
{ GL_CALL( glGetUniformfvARB ) },
{ GL_CALL( glGetUniformivARB ) },
{ GL_CALL( glGetShaderSourceARB ) },
{ GL_CALL( glVertexAttribPointerARB ) },
{ GL_CALL( glEnableVertexAttribArrayARB ) },
{ GL_CALL( glDisableVertexAttribArrayARB ) },
{ GL_CALL( glBindAttribLocationARB ) },
{ GL_CALL( glGetActiveAttribARB ) },
{ GL_CALL( glGetAttribLocationARB ) },
{ GL_CALL( glVertexAttrib2fARB ) },
{ GL_CALL( glVertexAttrib2fvARB ) },
//{ GL_CALL( glVertexAttrib3fv ) },
//{ GL_CALL( glVertexAttrib4f ) },
//{ GL_CALL( glVertexAttrib4fv ) },
//{ GL_CALL( glVertexAttrib4ubv ) },
};

/*
==================
Even if *ARB functions may work in GL driver in Core context,
renderdoc completely ignores this calls, so we cannot workaround this
by removing ARB suffix after failed function resolve
I desided not to remove ARB suffix from function declarations because
it historicaly related to ARB_shader_object extension, not GL2+ functions
and all shader code from XashXT/ancient xash3d uses it too
Commented out lines left there intentionally to prevent usage on core/gles
==================
*/

static const dllfunc_t shaderobjectsfuncs_gles[] =
{
{ "glDeleteShader"             , (void **)&pglDeleteObjectARB },
//{ "glGetHandleARB"           , (void **)&pglGetHandleARB },
{ "glDetachShader"             , (void **)&pglDetachObjectARB },
{ "glCreateShader"             , (void **)&pglCreateShaderObjectARB },
{ "glShaderSource"             , (void **)&pglShaderSourceARB },
{ "glCompileShader"            , (void **)&pglCompileShaderARB },
{ "glCreateProgram"            , (void **)&pglCreateProgramObjectARB },
{ "glAttachShader"             , (void **)&pglAttachObjectARB },
{ "glLinkProgram"              , (void **)&pglLinkProgramARB },
{ "glUseProgram"               , (void **)&pglUseProgramObjectARB },
{ "glValidateProgram"          , (void **)&pglValidateProgramARB },
{ "glUniform1f"                , (void **)&pglUniform1fARB },
{ "glUniform2f"                , (void **)&pglUniform2fARB },
{ "glUniform3f"                , (void **)&pglUniform3fARB },
{ "glUniform4f"                , (void **)&pglUniform4fARB },
{ "glUniform1i"                , (void **)&pglUniform1iARB },
{ "glUniform2i"                , (void **)&pglUniform2iARB },
{ "glUniform3i"                , (void **)&pglUniform3iARB },
{ "glUniform4i"                , (void **)&pglUniform4iARB },
{ "glUniform1f"                , (void **)&pglUniform1fvARB },
{ "glUniform2fv"               , (void **)&pglUniform2fvARB },
{ "glUniform3fv"               , (void **)&pglUniform3fvARB },
{ "glUniform4fv"               , (void **)&pglUniform4fvARB },
{ "glUniform1iv"               , (void **)&pglUniform1ivARB },
{ "glUniform2iv"               , (void **)&pglUniform2ivARB },
{ "glUniform3iv"               , (void **)&pglUniform3ivARB },
{ "glUniform4iv"               , (void **)&pglUniform4ivARB },
{ "glUniformMatrix2fv"         , (void **)&pglUniformMatrix2fvARB },
{ "glUniformMatrix3fv"         , (void **)&pglUniformMatrix3fvARB },
{ "glUniformMatrix4fv"         , (void **)&pglUniformMatrix4fvARB },
//{ "glGetShaderfv"            , (void **)&pglGetObjectParameterfvARB }, // missing in ES2?
{ "glGetShaderiv"              , (void **)&pglGetObjectParameterivARB },
{ "glGetShaderInfoLog"         , (void **)&pglGetInfoLogARB },
//{ "glGetAttachedObjects"     , (void **)&pglGetAttachedObjectsARB }, // missing in ES2?
{ "glGetUniformLocation"       , (void **)&pglGetUniformLocationARB },
{ "glGetActiveUniform"         , (void **)&pglGetActiveUniformARB },
{ "glGetUniformfv"             , (void **)&pglGetUniformfvARB },
{ "glGetUniformiv"             , (void **)&pglGetUniformivARB },
{ "glGetShaderSource"          , (void **)&pglGetShaderSourceARB },
{ "glVertexAttribPointer"      , (void **)&pglVertexAttribPointerARB },
{ "glEnableVertexAttribArray"  , (void **)&pglEnableVertexAttribArrayARB },
{ "glDisableVertexAttribArray" , (void **)&pglDisableVertexAttribArrayARB },
{ "glBindAttribLocation"       , (void **)&pglBindAttribLocationARB },
{ "glGetActiveAttrib"          , (void **)&pglGetActiveAttribARB },
{ "glGetAttribLocation"        , (void **)&pglGetAttribLocationARB },
{ "glVertexAttrib2f"           , (void **)&pglVertexAttrib2fARB },
{ "glVertexAttrib2fv"          , (void **)&pglVertexAttrib2fvARB },
{ "glVertexAttrib3fv"          , (void **)&pglVertexAttrib3fvARB },

// Core/GLES only
{ GL_CALL( glGetProgramiv ) },
{ GL_CALL( glDeleteProgram ) },
{ GL_CALL( glGetProgramInfoLog ) },
//{ "glVertexAttrib4f"              , (void **)&pglVertexAttrib4fARB },
//{ "glVertexAttrib4fv"             , (void **)&pglVertexAttrib4fvARB },
//{ "glVertexAttrib4ubv"            , (void **)&pglVertexAttrib4ubvARB },
};

static const dllfunc_t vaofuncs[] =
{
{ GL_CALL( glBindVertexArray ) },
{ GL_CALL( glDeleteVertexArrays ) },
{ GL_CALL( glGenVertexArrays ) },
{ GL_CALL( glIsVertexArray ) },
};

static const dllfunc_t multitexturefuncs_es[] MAYBE_UNUSED =
{
{ GL_CALL( glActiveTexture ) },
{ GL_CALL( glActiveTextureARB ) },
{ GL_CALL( glClientActiveTexture ) },
{ GL_CALL( glClientActiveTextureARB ) },
};

static const dllfunc_t multitexturefuncs_es2[] MAYBE_UNUSED =
{
{ GL_CALL( glActiveTexture ) },
{ GL_CALL( glActiveTextureARB ) },
};

#endif // !XASH_GL_STATIC

/*
========================
DebugCallback

For ARB_debug_output
========================
*/
#if !XASH_GL4ES // GL4ES doesn't provide glDebug functions, even as stubs
static void APIENTRY GL_DebugOutput( GLuint source, GLuint type, GLuint id, GLuint severity, GLint length, const GLcharARB *message, GLvoid *userParam )
{
	switch( type )
	{
	case GL_DEBUG_TYPE_ERROR_ARB:
		gEngfuncs.Con_Printf( S_OPENGL_ERROR "%s\n", message );
		break;
	case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB:
	case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB:
		gEngfuncs.Con_Printf( S_OPENGL_WARN "%s\n", message );
		break;
	case GL_DEBUG_TYPE_PORTABILITY_ARB:
		gEngfuncs.Con_Reportf( S_OPENGL_WARN "%s\n", message );
		break;
	case GL_DEBUG_TYPE_PERFORMANCE_ARB:
	case GL_DEBUG_TYPE_OTHER_ARB:
	default:
		gEngfuncs.Con_Printf( S_OPENGL_NOTE "%s\n", message );
		break;
	}
}
#endif // !XASH_GL4ES

/*
=================
GL_SetExtension
=================
*/
static void GL_SetExtension( int r_ext, int enable )
{
	if( r_ext >= 0 && r_ext < GL_EXTCOUNT )
		glConfig.extension[r_ext] = enable ? GL_TRUE : GL_FALSE;
	else gEngfuncs.Con_Printf( S_ERROR "%s: invalid extension %d\n", __func__, r_ext );
}

/*
=================
GL_CheckExtension
=================
*/
static qboolean GL_CheckExtension( const char *name, const dllfunc_t *funcs, size_t num_funcs, const char *cvarname, int r_ext, float minver )
{
	const int glver = glConfig.version_major * 10 + glConfig.version_minor;
	const int iminver = Q_rint( minver * 10.0f );

	gEngfuncs.Con_Reportf( "%s: %s ", __func__, name );
	GL_SetExtension( r_ext, true );

	cvar_t *parm = NULL;
	if( cvarname )
	{
		// system config disable extensions
		char desc[MAX_VA_STRING];
		Q_snprintf( desc, sizeof( desc ), CVAR_GLCONFIG_DESCRIPTION, name );
		parm = gEngfuncs.Cvar_Get( cvarname, "1", FCVAR_GLCONFIG|FCVAR_READ_ONLY, desc );
	}

	if(( parm && !parm->value ) || ( !gl_extensions.value && r_ext != GL_OPENGL_110 ))
	{
		gEngfuncs.Con_Reportf( "- disabled\n" );
		GL_SetExtension( r_ext, false );
		return false; // nothing to process at
	}

	const char *extensions_string = glConfig.extensions_string;

	if(( name[2] == '_' || name[3] == '_' ) && !Q_strstr( extensions_string, name ) && ( glver < iminver || !iminver || !glver ))
	{
		GL_SetExtension( r_ext, false );	// update render info
		gEngfuncs.Con_Reportf( "- ^1failed\n" );
		return false;
	}

#if !XASH_GL_STATIC
	// clear exports
	ClearExports( funcs, num_funcs );

	for( size_t i = 0; i < num_funcs; i++ )
	{
		// functions are cleared before all the extensions are evaluated
		if(( *(funcs[i].func) = (void *)gEngfuncs.GL_GetProcAddress( funcs[i].name )) == NULL )
		{
			string name;
			char *end;
			size_t j = 0;
#if XASH_GLES
			const char *suffixes[] = { "", "EXT", "OES" };
#else
			const char *suffixes[] = { "", "EXT" };
#endif

			// HACK: fix ARB names
			Q_strncpy( name, funcs[i].name, sizeof( name ));
			if(( end = Q_strstr( name, "ARB" )))
			{
				*end = '\0';
			}
			else // I need Q_strstrnul
			{
				end = name + Q_strlen( name );
				j++; // skip empty suffix
			}

			for( ; j < sizeof( suffixes ) / sizeof( suffixes[0] ); j++ )
			{
				void *f;

				Q_strncat( name, suffixes[j], sizeof( name ));

				if(( f = gEngfuncs.GL_GetProcAddress( name )))
				{
					// GL_GetProcAddress prints errors about missing functions, so tell user that we found it with different name
					gEngfuncs.Con_Printf( S_NOTE "found %s\n", name );

					*(funcs[i].func) = f;
					break;
				}
				else
				{
					*end = '\0'; // cut suffix, try next
				}
			}

			// not found...
			if( j == sizeof( suffixes ) / sizeof( suffixes[0] ))
			{
				GL_SetExtension( r_ext, false );
			}
		}
	}
#endif

	if( GL_Support( r_ext ))
	{
		gEngfuncs.Con_Reportf( "- ^2enabled\n" );
		return true;
	}

	gEngfuncs.Con_Reportf( "- ^1failed\n" );
	return false;
}

/*
==============
GL_GetProcAddress

defined just for nanogl/glwes, so it don't link to SDL2 directly, nor use dlsym
==============
*/
void GAME_EXPORT *GL_GetProcAddress( const char *name ); // keep defined for nanogl/wes
void GAME_EXPORT *GL_GetProcAddress( const char *name )
{
	return gEngfuncs.GL_GetProcAddress( name );
}

/*
===============
GL_SetDefaultTexState
===============
*/
static void GL_SetDefaultTexState( void )
{
	memset( glState.currentTextures, -1, MAX_TEXTURE_UNITS * sizeof( *glState.currentTextures ));
	memset( glState.texCoordArrayMode, 0, MAX_TEXTURE_UNITS * sizeof( *glState.texCoordArrayMode ));
	memset( glState.genSTEnabled, 0, MAX_TEXTURE_UNITS * sizeof( *glState.genSTEnabled ));

	for( int i = 0; i < MAX_TEXTURE_UNITS; i++ )
	{
		glState.currentTextureTargets[i] = GL_NONE;
		glState.texIdentityMatrix[i] = true;
	}
}

/*
===============
GL_SetDefaultState
===============
*/
static void GL_SetDefaultState( void )
{
	memset( &glState, 0, sizeof( glState ));
	GL_SetDefaultTexState ();

	// init draw stack
	tr.draw_list = &tr.draw_stack[0];
	tr.draw_stack_pos = 0;
}

/*
===============
GL_SetDefaults
===============
*/
static void GL_SetDefaults( void )
{
	pglFinish();

	pglClearColor( 0.5f, 0.5f, 0.5f, 1.0f );

	pglDisable( GL_DEPTH_TEST );
	pglDisable( GL_CULL_FACE );
	pglDisable( GL_SCISSOR_TEST );
	pglDepthFunc( GL_LEQUAL );
	pglColor4f( 1.0f, 1.0f, 1.0f, 1.0f );

	if( glState.stencilEnabled )
	{
		pglDisable( GL_STENCIL_TEST );
		pglStencilMask( ( GLuint ) ~0 );
		pglStencilFunc( GL_EQUAL, 0, ~0 );
		pglStencilOp( GL_KEEP, GL_INCR, GL_INCR );
	}

	pglPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	pglPolygonOffset( -1.0f, -2.0f );

	GL_CleanupAllTextureUnits();

	pglDisable( GL_BLEND );
	pglDisable( GL_ALPHA_TEST );
	pglDisable( GL_POLYGON_OFFSET_FILL );
	pglAlphaFunc( GL_GREATER, DEFAULT_ALPHATEST );
	pglEnable( GL_TEXTURE_2D );
	pglShadeModel( GL_SMOOTH );
	pglFrontFace( GL_CCW );

	pglPointSize( 1.2f );
	pglLineWidth( 1.2f );

	GL_Cull( GL_NONE );
}


/*
=================
R_RenderInfo_f
=================
*/
static void R_RenderInfo( qboolean startup )
{
	gEngfuncs.Con_Printf( "\n" );
	gEngfuncs.Con_Printf( "GL_VENDOR: %s\n", glConfig.vendor_string );
	gEngfuncs.Con_Printf( "GL_RENDERER: %s\n", glConfig.renderer_string );
	gEngfuncs.Con_Printf( "GL_VERSION: %s\n", glConfig.version_string );

	// don't spam about extensions
	gEngfuncs.Con_Reportf( "GL_EXTENSIONS: %s\n", glConfig.extensions_string );

	if( glConfig.wrapper == GLES_WRAPPER_GL4ES )
	{
		const char *vendor = (const char *)pglGetString( GL_VENDOR | 0x10000 );
		const char *renderer = (const char *)pglGetString( GL_RENDERER | 0x10000 );
		const char *version = (const char *)pglGetString( GL_VERSION | 0x10000 );
		const char *extensions = (const char *)pglGetString( GL_EXTENSIONS | 0x10000 );

		if( vendor )
			gEngfuncs.Con_Printf( "GL4ES_VENDOR: %s\n", vendor );
		if( renderer )
			gEngfuncs.Con_Printf( "GL4ES_RENDERER: %s\n", renderer );
		if( version )
			gEngfuncs.Con_Printf( "GL4ES_VERSION: %s\n", version );
		if( extensions )
			gEngfuncs.Con_Reportf( "GL4ES_EXTENSIONS: %s\n", extensions );
	}

	gEngfuncs.Con_Printf( "GL_MAX_TEXTURE_SIZE: %i\n", glConfig.max_2d_texture_size );

	if( GL_Support( GL_ARB_MULTITEXTURE ))
		gEngfuncs.Con_Printf( "GL_MAX_TEXTURE_UNITS_ARB: %i\n", glConfig.max_texture_units );
	if( GL_Support( GL_TEXTURE_CUBEMAP_EXT ))
		gEngfuncs.Con_Printf( "GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB: %i\n", glConfig.max_cubemap_size );
	if( GL_Support( GL_ANISOTROPY_EXT ))
		gEngfuncs.Con_Printf( "GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT: %.1f\n", glConfig.max_texture_anisotropy );
	if( GL_Support( GL_TEXTURE_2D_RECT_EXT ))
		gEngfuncs.Con_Printf( "GL_MAX_RECTANGLE_TEXTURE_SIZE: %i\n", glConfig.max_2d_rectangle_size );
	if( GL_Support( GL_TEXTURE_ARRAY_EXT ))
		gEngfuncs.Con_Printf( "GL_MAX_ARRAY_TEXTURE_LAYERS_EXT: %i\n", glConfig.max_2d_texture_layers );
	if( GL_Support( GL_SHADER_GLSL100_EXT ))
	{
		gEngfuncs.Con_Printf( "GL_MAX_TEXTURE_COORDS_ARB: %i\n", glConfig.max_texture_coords );
		gEngfuncs.Con_Printf( "GL_MAX_TEXTURE_IMAGE_UNITS_ARB: %i\n", glConfig.max_teximage_units );
		gEngfuncs.Con_Printf( "GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB: %i\n", glConfig.max_vertex_uniforms );
		gEngfuncs.Con_Printf( "GL_MAX_VERTEX_ATTRIBS_ARB: %i\n", glConfig.max_vertex_attribs );
	}

	gEngfuncs.Con_Printf( "\n" );
	gEngfuncs.Con_Printf( "MODE: %ix%i\n", gpGlobals->width, gpGlobals->height );
	gEngfuncs.Con_Printf( "\n" );
	if( !startup )
		gEngfuncs.Con_Printf( "VERTICAL SYNC: %s\n", gl_vsync->value ? "enabled" : "disabled" );
	gEngfuncs.Con_Printf( "Color %d bits, Alpha %d bits, Depth %d bits, Stencil %d bits\n", glConfig.color_bits,
		glConfig.alpha_bits, glConfig.depth_bits, glConfig.stencil_bits );
}

static void R_RenderInfo_f( void )
{
	R_RenderInfo( false );
}

#if XASH_GLES
static void GL_InitExtensionsGLES( void )
{
	// intialize wrapper type
#if XASH_NANOGL
	glConfig.context = CONTEXT_TYPE_GLES_1_X;
	glConfig.wrapper = GLES_WRAPPER_NANOGL;
#elif XASH_WES
	glConfig.context = CONTEXT_TYPE_GLES_2_X;
	glConfig.wrapper = GLES_WRAPPER_WES;
#elif XASH_GLES3COMPAT
	glConfig.context = CONTEXT_TYPE_GLES_2_X;
	glConfig.wrapper = GLES_WRAPPER_NONE;
#else
	#error "unknown gles wrapper"
#endif

	glConfig.hardware_type = GLHW_GENERIC;

	for( int extid = GL_OPENGL_110 + 1; extid < GL_EXTCOUNT; extid++ )
	{
		switch( extid )
		{
		case GL_ARB_VERTEX_BUFFER_OBJECT_EXT:
			GL_CheckExtension( "vertex_buffer_object", vbofuncs, ARRAYSIZE( vbofuncs ), "gl_vertex_buffer_object", extid, 1.0 );
			break;
		case GL_ARB_MULTITEXTURE:
			if( !GL_CheckExtension( "multitexture", multitexturefuncs, ARRAYSIZE( multitexturefuncs ), "gl_arb_multitexture", GL_ARB_MULTITEXTURE, 1.0 ) && glConfig.wrapper == GLES_WRAPPER_NONE )
			{
#if !XASH_GL_STATIC
				if( !GL_CheckExtension( "multitexture_es1", multitexturefuncs_es, ARRAYSIZE( multitexturefuncs_es ), "gl_arb_multitexture", GL_ARB_MULTITEXTURE, 1.0 )
						&& !GL_CheckExtension( "multitexture_es2", multitexturefuncs_es2, ARRAYSIZE( multitexturefuncs_es2 ), "gl_arb_multitexture", GL_ARB_MULTITEXTURE, 2.0 ))
					break;
#endif
			}
			GL_SetExtension( extid, true ); // required to be supported by wrapper

			pglGetIntegerv( GL_MAX_TEXTURE_UNITS_ARB, &glConfig.max_texture_units );
			if( glConfig.max_texture_units <= 1 )
				pglGetIntegerv( GL_MAX_TEXTURE_IMAGE_UNITS_ARB, &glConfig.max_texture_units );
			if( glConfig.max_texture_units <= 1 )
			{
				GL_SetExtension( extid, false );
				glConfig.max_texture_units = 1;
			}

			glConfig.max_texture_coords = glConfig.max_teximage_units = glConfig.max_texture_units;
			break;
		case GL_TEXTURE_CUBEMAP_EXT:
			if( GL_CheckExtension( "GL_OES_texture_cube_map", NULL, 0, "gl_texture_cubemap", extid, 0 ))
				pglGetIntegerv( GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB, &glConfig.max_cubemap_size );
			break;
		case GL_ANISOTROPY_EXT:
			glConfig.max_texture_anisotropy = 0.0f;
			if( GL_CheckExtension( "GL_EXT_texture_filter_anisotropic", NULL, 0, "gl_ext_anisotropic_filter", extid, 0 ))
				pglGetFloatv( GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &glConfig.max_texture_anisotropy );
			break;
		case GL_TEXTURE_LOD_BIAS:
			if( GL_CheckExtension( "GL_EXT_texture_lod_bias", NULL, 0, "gl_texture_mipmap_biasing", extid, 0 ))
				pglGetFloatv( GL_MAX_TEXTURE_LOD_BIAS_EXT, &glConfig.max_texture_lod_bias );
			break;
		case GL_ARB_TEXTURE_NPOT_EXT:
			// according to spec, GLES3.0 made NPOT required
			// thanks lewa_j for advice
			if( glConfig.version_major >= 3 )
				GL_SetExtension( extid, true );
			else
				GL_CheckExtension( "GL_OES_texture_npot", NULL, 0, "gl_texture_npot", extid, 0 );
			break;
#if !XASH_GL_STATIC
		case GL_SHADER_OBJECTS_EXT:
			GL_CheckExtension( "ES2 Shaders", shaderobjectsfuncs_gles, ARRAYSIZE( shaderobjectsfuncs_gles ), "gl_shaderobjects", extid, 2.0 );
			break;
		case GL_ARB_VERTEX_ARRAY_OBJECT_EXT:
			if( !GL_CheckExtension( "GL_OES_vertex_array_object", vaofuncs, ARRAYSIZE( vaofuncs ), "gl_vertex_array_object", extid, 3.0 ))
				GL_CheckExtension( "GL_EXT_vertex_array_object", vaofuncs, ARRAYSIZE( vaofuncs ), "gl_vertex_array_object", extid, 3.0 );
			break;
		case GL_DRAW_RANGEELEMENTS_EXT:
			if( !GL_CheckExtension( "GL_EXT_draw_range_elements", drawrangeelementsfuncs, ARRAYSIZE( drawrangeelementsfuncs ), "gl_drawrangeelements", extid, 3.0 ))
				GL_CheckExtension( "GL_OES_draw_range_elements", drawrangeelementsfuncs, ARRAYSIZE( drawrangeelementsfuncs ), "gl_drawrangeelements", extid, 3.0 );
			break;
		case GL_DRAW_RANGE_ELEMENTS_BASE_VERTEX_EXT:
			if( !GL_CheckExtension( "GL_OES_draw_elements_base_vertex", drawrangeelementsbasevertexfuncs, ARRAYSIZE( drawrangeelementsbasevertexfuncs ), "gl_drawrangeelementsbasevertex", GL_DRAW_RANGE_ELEMENTS_BASE_VERTEX_EXT, 0 ))
				GL_CheckExtension( "GL_EXT_draw_elements_base_vertex", drawrangeelementsbasevertexfuncs, ARRAYSIZE( drawrangeelementsbasevertexfuncs ), "gl_drawrangeelementsbasevertex", GL_DRAW_RANGE_ELEMENTS_BASE_VERTEX_EXT, 3.2 );
			break;
		case GL_MAP_BUFFER_RANGE_EXT:
			GL_CheckExtension( "GL_EXT_map_buffer_range", mapbufferrangefuncs, ARRAYSIZE( mapbufferrangefuncs ), "gl_map_buffer_range", GL_MAP_BUFFER_RANGE_EXT , 3.0);
			break;
		case GL_BUFFER_STORAGE_EXT:
			GL_CheckExtension( "GL_EXT_buffer_storage", bufferstoragefuncs, ARRAYSIZE( bufferstoragefuncs ), "gl_buffer_storage", GL_BUFFER_STORAGE_EXT, 0);
			break;
		case GL_FRAMEBUFFER_OBJECT_EXT:
			// render targets use RGBA8 and packed depth-stencil renderbuffers and NPOT textures, all core since ES 3.0
			if( glConfig.version_major >= 3 || ( GL_Support( GL_ARB_TEXTURE_NPOT_EXT )
				&& Q_strstr( glConfig.extensions_string, "GL_OES_rgb8_rgba8" )
				&& Q_strstr( glConfig.extensions_string, "GL_OES_packed_depth_stencil" )))
				GL_CheckExtension( "GL_OES_framebuffer_object", framebufferobjectfuncs, ARRAYSIZE( framebufferobjectfuncs ), "gl_framebuffer_object", extid, 2.0 );
			else
				GL_SetExtension( extid, false );
			break;
		case GL_FRAMEBUFFER_BLIT_EXT:
			// ES 2.0 blit extensions use vendor suffixes that GL_CheckExtension doesn't look up
			if( glConfig.version_major >= 3 && GL_Support( GL_FRAMEBUFFER_OBJECT_EXT ))
				GL_CheckExtension( "framebuffer_blit", framebufferblitfuncs, ARRAYSIZE( framebufferblitfuncs ), "gl_framebuffer_object", extid, 3.0 );
			else
				GL_SetExtension( extid, false );
			break;
		case GL_FRAMEBUFFER_MULTISAMPLE_EXT:
			if( glConfig.version_major >= 3 && GL_Support( GL_FRAMEBUFFER_OBJECT_EXT ))
				GL_CheckExtension( "framebuffer_multisample", framebuffermultisamplefuncs, ARRAYSIZE( framebuffermultisamplefuncs ), "gl_framebuffer_object", extid, 3.0 );
			else
				GL_SetExtension( extid, false );
			break;

#endif
		case GL_DEBUG_OUTPUT:
			if( glw_state.extended )
				GL_CheckExtension( "GL_KHR_debug", debugoutputfuncs, ARRAYSIZE( debugoutputfuncs ), "gl_debug_output", extid, 0 );
			else
				GL_SetExtension( extid, false );
			break;
		// case GL_TEXTURE_COMPRESSION_EXT: NOPE
		// case GL_SHADER_GLSL100_EXT: NOPE
		// case GL_TEXTURE_2D_RECT_EXT: NOPE
		// case GL_TEXTURE_ARRAY_EXT: NOPE
		// case GL_TEXTURE_3D_EXT: NOPE
		// case GL_CLAMPTOEDGE_EXT: NOPE
		// case GL_CLAMP_TEXBORDER_EXT: NOPE
		// case GL_ARB_TEXTURE_FLOAT_EXT: NOPE
		// case GL_ARB_DEPTH_FLOAT_EXT: NOPE
		// case GL_ARB_SEAMLESS_CUBEMAP: NOPE
		// case GL_EXT_GPU_SHADER4: NOPE
		// case GL_DEPTH_TEXTURE: NOPE
		// case GL_DRAWRANGEELEMENTS_EXT: NOPE
		default:
			GL_SetExtension( extid, false );
		}
	}
#if !XASH_GL_STATIC
	GL2_ShimInit();
#endif
}
#else
static void GL_InitExtensionsBigGL( void )
{
	// intialize wrapper type
	glConfig.context = gEngfuncs.Sys_CheckParm( "-glcore" )? CONTEXT_TYPE_GL_CORE : CONTEXT_TYPE_GL;
	glConfig.wrapper = GLES_WRAPPER_NONE;

	if( Q_stristr( glConfig.renderer_string, "geforce" ))
		glConfig.hardware_type = GLHW_NVIDIA;
	else if( Q_stristr( glConfig.renderer_string, "quadro fx" ))
		glConfig.hardware_type = GLHW_NVIDIA;
	else if( Q_stristr(glConfig.renderer_string, "rv770" ))
		glConfig.hardware_type = GLHW_RADEON;
	else if( Q_stristr(glConfig.renderer_string, "radeon hd" ))
		glConfig.hardware_type = GLHW_RADEON;
	else if( Q_stristr( glConfig.renderer_string, "eah4850" ) || Q_stristr( glConfig.renderer_string, "eah4870" ))
		glConfig.hardware_type = GLHW_RADEON;
	else if( Q_stristr( glConfig.renderer_string, "radeon" ))
		glConfig.hardware_type = GLHW_RADEON;
	else if( Q_stristr( glConfig.renderer_string, "intel" ))
		glConfig.hardware_type = GLHW_INTEL;
	else glConfig.hardware_type = GLHW_GENERIC;

	// gl4es may be used system-wide
	if( Q_stristr( glConfig.renderer_string, "gl4es" ))
		glConfig.wrapper = GLES_WRAPPER_GL4ES;

	// multitexture
	glConfig.max_texture_units = glConfig.max_texture_coords = glConfig.max_teximage_units = 1;
	if( GL_CheckExtension( "GL_ARB_multitexture", multitexturefuncs, ARRAYSIZE( multitexturefuncs ), "gl_arb_multitexture", GL_ARB_MULTITEXTURE, 1.3f ))
	{
		pglGetIntegerv( GL_MAX_TEXTURE_UNITS_ARB, &glConfig.max_texture_units );
	}

	if( glConfig.max_texture_units == 1 )
		GL_SetExtension( GL_ARB_MULTITEXTURE, false );

	// 3d texture support
	if( GL_CheckExtension( "GL_EXT_texture3D", texture3dextfuncs, ARRAYSIZE( texture3dextfuncs ), "gl_texture_3d", GL_TEXTURE_3D_EXT, 2.0f ))
	{
		pglGetIntegerv( GL_MAX_3D_TEXTURE_SIZE, &glConfig.max_3d_texture_size );

		if( glConfig.max_3d_texture_size < 32 )
		{
			GL_SetExtension( GL_TEXTURE_3D_EXT, false );
			gEngfuncs.Con_Printf( S_ERROR "GL_EXT_texture3D reported bogus GL_MAX_3D_TEXTURE_SIZE, disabled\n" );
		}
	}

	// 2d texture array support
	if( GL_CheckExtension( "GL_EXT_texture_array", texture3dextfuncs, ARRAYSIZE( texture3dextfuncs ), "gl_texture_2d_array", GL_TEXTURE_ARRAY_EXT, 0 ))
		pglGetIntegerv( GL_MAX_ARRAY_TEXTURE_LAYERS_EXT, &glConfig.max_2d_texture_layers );

	// cubemaps support
	if( GL_CheckExtension( "GL_ARB_texture_cube_map", NULL, 0, "gl_texture_cubemap", GL_TEXTURE_CUBEMAP_EXT, 0 ))
	{
		pglGetIntegerv( GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB, &glConfig.max_cubemap_size );

		// check for seamless cubemaps too
		GL_CheckExtension( "GL_ARB_seamless_cube_map", NULL, 0, "gl_texture_cubemap_seamless", GL_ARB_SEAMLESS_CUBEMAP, 0 );
	}

	GL_CheckExtension( "GL_ARB_texture_non_power_of_two", NULL, 0, "gl_texture_npot", GL_ARB_TEXTURE_NPOT_EXT, 0 );
	GL_CheckExtension( "GL_ARB_texture_compression", texturecompressionfuncs, ARRAYSIZE( texturecompressionfuncs ), "gl_texture_dxt_compression", GL_TEXTURE_COMPRESSION_EXT, 0 );
	if( !GL_CheckExtension( "GL_EXT_texture_edge_clamp", NULL, 0, "gl_clamp_to_edge", GL_CLAMPTOEDGE_EXT, 2.0 )) // present in ES2
		GL_CheckExtension( "GL_SGIS_texture_edge_clamp", NULL, 0, "gl_clamp_to_edge", GL_CLAMPTOEDGE_EXT, 0 );

	glConfig.max_texture_anisotropy = 0.0f;
	if( GL_CheckExtension( "GL_EXT_texture_filter_anisotropic", NULL, 0, "gl_texture_anisotropic_filter", GL_ANISOTROPY_EXT, 0 ))
		pglGetFloatv( GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &glConfig.max_texture_anisotropy );

#if XASH_WIN32 // Win32 only drivers?
	// g-cont. because lodbias it too glitchy on Intel's cards
	if( glConfig.hardware_type != GLHW_INTEL )
#endif
	{
		if( GL_CheckExtension( "GL_EXT_texture_lod_bias", NULL, 0, "gl_texture_mipmap_biasing", GL_TEXTURE_LOD_BIAS, 1.4 ))
			pglGetFloatv( GL_MAX_TEXTURE_LOD_BIAS_EXT, &glConfig.max_texture_lod_bias );
	}

	GL_CheckExtension( "GL_ARB_texture_border_clamp", NULL, 0, NULL, GL_CLAMP_TEXBORDER_EXT, 2.0 ); // present in ES2

	GL_CheckExtension( "GL_ARB_depth_texture", NULL, 0, NULL, GL_DEPTH_TEXTURE, 1.4 ); // missing in gles, check GL_OES_depth_texture
	GL_CheckExtension( "GL_ARB_texture_float", NULL, 0, "gl_texture_float", GL_ARB_TEXTURE_FLOAT_EXT, 0 );
	GL_CheckExtension( "GL_ARB_depth_buffer_float", NULL, 0, "gl_texture_depth_float", GL_ARB_DEPTH_FLOAT_EXT, 0 );
	GL_CheckExtension( "GL_EXT_gpu_shader4", NULL, 0, NULL, GL_EXT_GPU_SHADER4, 0 ); // don't confuse users
	GL_CheckExtension( "GL_ARB_vertex_buffer_object", vbofuncs, ARRAYSIZE( vbofuncs ), "gl_vertex_buffer_object", GL_ARB_VERTEX_BUFFER_OBJECT_EXT, 2.0 );
	GL_CheckExtension( "GL_ARB_texture_multisample", multisampletexfuncs, ARRAYSIZE( multisampletexfuncs ), "gl_texture_multisample", GL_TEXTURE_MULTISAMPLE, 0 );
	GL_CheckExtension( "GL_ARB_texture_compression_bptc", NULL, 0, "gl_texture_bptc_compression", GL_ARB_TEXTURE_COMPRESSION_BPTC, 0 );
#if !XASH_GL_STATIC
	if( glConfig.context == CONTEXT_TYPE_GL_CORE )
		GL_CheckExtension( "shader_objects", shaderobjectsfuncs_gles, ARRAYSIZE( shaderobjectsfuncs_gles ), "gl_shaderobjects", GL_SHADER_OBJECTS_EXT, 2.0 );
	else
		GL_CheckExtension( "GL_ARB_shader_objects", shaderobjectsfuncs, ARRAYSIZE( shaderobjectsfuncs ), "gl_shaderobjects", GL_SHADER_OBJECTS_EXT, 2.0 );
	GL_CheckExtension( "GL_ARB_vertex_array_object", vaofuncs, ARRAYSIZE( vaofuncs ), "gl_vertex_array_object", GL_ARB_VERTEX_ARRAY_OBJECT_EXT, 3.0 );
	GL_CheckExtension( "GL_ARB_buffer_storage", bufferstoragefuncs, ARRAYSIZE( bufferstoragefuncs ), "gl_buffer_storage", GL_BUFFER_STORAGE_EXT, 4.4);
	GL_CheckExtension( "GL_ARB_map_buffer_range", mapbufferrangefuncs, ARRAYSIZE( mapbufferrangefuncs ), "gl_map_buffer_range", GL_MAP_BUFFER_RANGE_EXT , 3.0);
	GL_CheckExtension( "GL_ARB_draw_elements_base_vertex", drawrangeelementsbasevertexfuncs, ARRAYSIZE( drawrangeelementsbasevertexfuncs ), "gl_drawrangeelementsbasevertex", GL_DRAW_RANGE_ELEMENTS_BASE_VERTEX_EXT, 3.2 );
	if( GL_CheckExtension( "GL_ARB_framebuffer_object", framebufferarbfuncs, ARRAYSIZE( framebufferarbfuncs ), "gl_framebuffer_object", GL_FRAMEBUFFER_OBJECT_EXT, 3.0 ))
	{
		GL_SetExtension( GL_FRAMEBUFFER_BLIT_EXT, true );
		GL_SetExtension( GL_FRAMEBUFFER_MULTISAMPLE_EXT, true );
	}
	else
	{
		GL_CheckExtension( "GL_EXT_framebuffer_object", framebufferobjectfuncs, ARRAYSIZE( framebufferobjectfuncs ), "gl_framebuffer_object", GL_FRAMEBUFFER_OBJECT_EXT, 0 );
		GL_CheckExtension( "GL_EXT_framebuffer_blit", framebufferblitfuncs, ARRAYSIZE( framebufferblitfuncs ), "gl_framebuffer_object", GL_FRAMEBUFFER_BLIT_EXT, 0 );
		GL_CheckExtension( "GL_EXT_framebuffer_multisample", framebuffermultisamplefuncs, ARRAYSIZE( framebuffermultisamplefuncs ), "gl_framebuffer_object", GL_FRAMEBUFFER_MULTISAMPLE_EXT, 0 );
	}
#endif
	if( GL_CheckExtension( "GL_ARB_shading_language_100", NULL, 0, NULL, GL_SHADER_GLSL100_EXT, 2.0 ))
	{
		pglGetIntegerv( GL_MAX_TEXTURE_COORDS_ARB, &glConfig.max_texture_coords );
		pglGetIntegerv( GL_MAX_TEXTURE_IMAGE_UNITS_ARB, &glConfig.max_teximage_units );

		// check for hardware skinning
		pglGetIntegerv( GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB, &glConfig.max_vertex_uniforms );
		pglGetIntegerv( GL_MAX_VERTEX_ATTRIBS_ARB, &glConfig.max_vertex_attribs );

		// GLSL sanity check
		if( glConfig.max_vertex_uniforms <= 0 || glConfig.max_texture_coords < glConfig.max_texture_units || glConfig.max_teximage_units < glConfig.max_texture_units )
		{
			gEngfuncs.Con_Reportf( S_NOTE "driver supports GL_ARB_shading_language_100 but has bogus limits, ignoring\n" );
			GL_SetExtension( GL_SHADER_GLSL100_EXT, false );
			glConfig.max_texture_coords = glConfig.max_teximage_units = glConfig.max_texture_units;
			glConfig.max_vertex_uniforms = 0;
			glConfig.max_vertex_attribs = 0;
		}
#if XASH_WIN32 // Win32 only drivers?
		else if( glConfig.hardware_type == GLHW_RADEON && glConfig.max_vertex_uniforms > 512 )
			glConfig.max_vertex_uniforms /= 4; // radeon returns not correct info
#endif
	}
	else
	{
		// just get from multitexturing
		glConfig.max_texture_coords = glConfig.max_teximage_units = glConfig.max_texture_units;
	}

	// rectangle textures support
	GL_CheckExtension( "GL_ARB_texture_rectangle", NULL, 0, "gl_texture_rectangle", GL_TEXTURE_2D_RECT_EXT, 0 );

	if( !GL_CheckExtension( "glDrawRangeElements", drawrangeelementsfuncs, ARRAYSIZE( drawrangeelementsfuncs ), "gl_drawrangeelements", GL_DRAW_RANGEELEMENTS_EXT, 0 ) )
	{
		if( GL_CheckExtension( "glDrawRangeElementsEXT", drawrangeelementsextfuncs, ARRAYSIZE( drawrangeelementsextfuncs ), "gl_drawrangeelements", GL_DRAW_RANGEELEMENTS_EXT, 0 ))
		{
#if !XASH_GL_STATIC
			pglDrawRangeElements = pglDrawRangeElementsEXT;
#endif
		}
	}

	// this won't work without extended context
	if( glw_state.extended )
		GL_CheckExtension( "GL_ARB_debug_output", debugoutputfuncs, ARRAYSIZE( debugoutputfuncs ), "gl_debug_output", GL_DEBUG_OUTPUT, 0 );

#if XASH_PSVITA
	// not all GL1.1 functions are implemented in vitaGL, but there's enough
	GL_SetExtension( GL_OPENGL_110, true );
	// init our immediate mode override
	VGL_ShimInit();
#endif
#if !XASH_GLES && !XASH_GL_STATIC
	if( gEngfuncs.Sys_CheckParm( "-gl2shim" ))
		GL2_ShimInit();
#endif
}
#endif

void GL_InitExtensions( void )
{
#if !XASH_RAYTRACING
	char value[MAX_VA_STRING];
	GLint major = 0, minor = 0;

	GL_OnContextCreated();

	// initialize gl extensions
	GL_CheckExtension( "OpenGL 1.1.0", opengl_110funcs, ARRAYSIZE( opengl_110funcs ), NULL, GL_OPENGL_110, 1.0 );

	// get our various GL strings
	glConfig.vendor_string = (const char *)pglGetString( GL_VENDOR );
	glConfig.renderer_string = (const char *)pglGetString( GL_RENDERER );
	glConfig.version_string = (const char *)pglGetString( GL_VERSION );
	glConfig.extensions_string = (const char *)pglGetString( GL_EXTENSIONS );

	pglGetIntegerv( GL_MAJOR_VERSION, &major );
	pglGetIntegerv( GL_MINOR_VERSION, &minor );
	if( !major && glConfig.version_string )
	{
		const char *str = glConfig.version_string;

		while( *str && ( *str < '0' || *str > '9' )) str++;
		float ver = Q_atof(str);
		if( ver )
		{
			glConfig.version_major = ver;
			glConfig.version_minor = (int)(ver * 10) % 10;
		}
	}
	else
	{
		glConfig.version_major = major;
		glConfig.version_minor = minor;
	}
#if !XASH_GL_STATIC
	if( !glConfig.extensions_string )
	{
		int n = 0;
		pglGetStringi = gEngfuncs.GL_GetProcAddress( "glGetStringi" );

		pglGetIntegerv( GL_NUM_EXTENSIONS, &n );
		if( n && pglGetStringi )
		{
			int len = 1;

			for( int i = 0; i < n; i++ )
				len += Q_strlen((const char *)pglGetStringi( GL_EXTENSIONS, i )) + 1;

			char *str = (char*)Mem_Calloc( r_temppool, len );
			glConfig.extensions_string = str;

			for( int i = 0; i < n; i++ )
			{
				int l = Q_strncpy( str, pglGetStringi( GL_EXTENSIONS, i ), len );
				str += l;
				*str++ = ' ';
				len -= l + 1;
			}
		}
	}
#endif
	gEngfuncs.Con_Reportf( "^3Video^7: %s\n", glConfig.renderer_string );

#if XASH_GLES
	GL_InitExtensionsGLES();
#else
	GL_InitExtensionsBigGL();
#endif

	pglGetIntegerv( GL_MAX_TEXTURE_SIZE, &glConfig.max_2d_texture_size );
	if( glConfig.max_2d_texture_size <= 0 ) glConfig.max_2d_texture_size = 256;

#if !XASH_GL4ES // GL4ES doesn't provide glDebugMessage functions, even as stubs
	// enable gldebug if allowed
	if( GL_Support( GL_DEBUG_OUTPUT ))
	{
		if( gpGlobals->developer )
		{
			gEngfuncs.Con_Reportf( "Installing GL_DebugOutput...\n");
			pglDebugMessageCallbackARB( GL_DebugOutput, NULL );

			// force everything to happen in the main thread instead of in a separate driver thread
			pglEnable( GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB );

		}

		// enable all the low priority messages
		pglDebugMessageControlARB( GL_DONT_CARE, GL_DONT_CARE, GL_DEBUG_SEVERITY_LOW_ARB, 0, NULL, true );
	}
#endif // !XASH_GL4ES

	if( GL_Support( GL_TEXTURE_2D_RECT_EXT ))
		pglGetIntegerv( GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT, &glConfig.max_2d_rectangle_size );

	Q_snprintf( value, sizeof( value ), "%i", glConfig.max_2d_texture_size );
	gEngfuncs.Cvar_Get( "gl_max_size", value, 0, "opengl texture max dims (compatibility cvar, does nothing)" );
	gEngfuncs.Cvar_SetValue( "gl_anisotropy", bound( 0, gl_texture_anisotropy.value, glConfig.max_texture_anisotropy ));

	if( GL_Support( GL_TEXTURE_COMPRESSION_EXT ))
		gEngfuncs.Image_AddCmdFlags( IL_DDS_HARDWARE );

	// MCD has buffering issues
#if XASH_WIN32
	if( Q_strstr( glConfig.renderer_string, "gdi" ))
		gEngfuncs.Cvar_SetValue( "gl_finish", 1 );
#endif

	R_RenderInfo( true );
#else
	glConfig.vendor_string     = "";
	glConfig.renderer_string   = "";
	glConfig.version_string    = "";
	glConfig.extensions_string = "";

	glConfig.max_2d_texture_size    = 4096;
	glConfig.max_2d_rectangle_size  = 4096;
	glConfig.max_texture_anisotropy = 8;
#endif

	tr.framecount = tr.visframecount = 1;
	glw_state.initialized = true;
}

void GL_ClearExtensions( void )
{
	// now all extensions are disabled
	memset( glConfig.extension, 0, sizeof( glConfig.extension ));
	glw_state.initialized = false;
#if XASH_PSVITA
	// deinit our immediate mode override
	VGL_ShimShutdown();
#endif
}

//=======================================================================

#if XASH_RAYTRACING
void RT_WaterColor( void )
{
    if( gEngfuncs.Cmd_Argc() != 4 )
    {
        gEngfuncs.Con_Printf( "%d %d %d\nTo set, use: rt_me_water <R> <G> <B>, "
                              "where R, G, B are in 0..255\n",
                              ( int )rt_cvars.rt_me_water_r->value,
                              ( int )rt_cvars.rt_me_water_g->value,
                              ( int )rt_cvars.rt_me_water_b->value );
        return;
    }

	int r = Q_atoi( gEngfuncs.Cmd_Argv( 1 ) );
	int g = Q_atoi( gEngfuncs.Cmd_Argv( 2 ) );
	int b = Q_atoi( gEngfuncs.Cmd_Argv( 3 ) );

    gEngfuncs.Cvar_SetValue( rt_cvars.rt_me_water_r->name, ( float )bound( 0, r, 255 ) );
    gEngfuncs.Cvar_SetValue( rt_cvars.rt_me_water_g->name, ( float )bound( 0, g, 255 ) );
    gEngfuncs.Cvar_SetValue( rt_cvars.rt_me_water_b->name, ( float )bound( 0, b, 255 ) );
}
#endif

/*
=================
GL_InitCommands
=================
*/
static void GL_InitCommands( void )
{
	gEngfuncs.Cvar_RegisterVariable( &r_lighting_ambient );
	gEngfuncs.Cvar_RegisterVariable( &r_novis );
	gEngfuncs.Cvar_RegisterVariable( &r_nocull );
	gEngfuncs.Cvar_RegisterVariable( &r_detailtextures );
	gEngfuncs.Cvar_RegisterVariable( &r_lockpvs );
	gEngfuncs.Cvar_RegisterVariable( &r_lockfrustum );
	gEngfuncs.Cvar_RegisterVariable( &r_traceglow );
	gEngfuncs.Cvar_RegisterVariable( &r_studio_sort_textures );
	gEngfuncs.Cvar_RegisterVariable( &r_studio_drawelements );
	gEngfuncs.Cvar_RegisterVariable( &r_studio_builtin_renderer );
	gEngfuncs.Cvar_RegisterVariable( &r_ripple );
	gEngfuncs.Cvar_RegisterVariable( &r_ripple_updatetime );
	gEngfuncs.Cvar_RegisterVariable( &r_ripple_spawntime );
	gEngfuncs.Cvar_RegisterVariable( &r_shadows );
	gEngfuncs.Cvar_RegisterVariable( &r_vbo );
	gEngfuncs.Cvar_RegisterVariable( &r_vbo_dlightmode );
	gEngfuncs.Cvar_RegisterVariable( &r_vbo_overbrightmode );
	gEngfuncs.Cvar_RegisterVariable( &r_vbo_detail );
	gEngfuncs.Cvar_RegisterVariable( &r_large_lightmaps );
	gEngfuncs.Cvar_RegisterVariable( &r_scene_scale );

	gEngfuncs.Cvar_RegisterVariable( &gl_extensions );
	gEngfuncs.Cvar_RegisterVariable( &gl_texture_nearest );
	gEngfuncs.Cvar_RegisterVariable( &gl_lightmap_nearest );
	gEngfuncs.Cvar_RegisterVariable( &gl_fbo_nearest );
	gEngfuncs.Cvar_RegisterVariable( &gl_check_errors );
	gEngfuncs.Cvar_RegisterVariable( &gl_texture_anisotropy );
	gEngfuncs.Cvar_RegisterVariable( &gl_texture_lodbias );
	gEngfuncs.Cvar_RegisterVariable( &gl_keeptjunctions );
	gEngfuncs.Cvar_RegisterVariable( &gl_finish );
	gEngfuncs.Cvar_RegisterVariable( &gl_nosort );
	gEngfuncs.Cvar_RegisterVariable( &gl_test );
	gEngfuncs.Cvar_RegisterVariable( &gl_wireframe );
	gEngfuncs.Cvar_RegisterVariable( &gl_msaa );
	gEngfuncs.Cvar_RegisterVariable( &gl_stencilbits );
	gEngfuncs.Cvar_RegisterVariable( &gl_round_down );
	gEngfuncs.Cvar_RegisterVariable( &gl_overbright );
	gEngfuncs.Cvar_RegisterVariable( &gl_fog );
	gEngfuncs.Cvar_RegisterVariable( &gl_litwater_force );

	gEngfuncs.Cvar_RegisterVariable( &gl_polyoffset );
	gEngfuncs.Cvar_RegisterVariable( &gl_polyoffset_bmodels );

	// make sure gl_vsync is checked after vid_restart
	SetBits( gl_vsync->flags, FCVAR_CHANGED );

	gEngfuncs.Cmd_AddCommand( "r_info", R_RenderInfo_f, "display renderer info" );
	gEngfuncs.Cmd_AddCommand( "timerefresh", SCR_TimeRefresh_f, "turn quickly and print rendering statistcs" );

#if XASH_RAYTRACING

    // NOTE: if start with '_' then the cvar won't be archived
    #define CVAR_DEF_T( name, default_value, description )                                  \
        rt_cvars.name = gEngfuncs.Cvar_Get( ( #name ),                                      \
                                            ( default_value ),                              \
                                            ( ( #name )[ 0 ] == '_' ? 0 : FCVAR_GLCONFIG ), \
                                            ( description ) );

    // clang-format off



	CVAR_DEF_T( rt_vsync,					"1",	"vertical synchronization to prevent tearing" )
	
	CVAR_DEF_T( rt_renderscale,				"0",	"[20, 100] resolution scale")
	CVAR_DEF_T( rt_upscale_method,			"0",	"0 - off, 1 - FSR3, 2 - DLSS" )
	CVAR_DEF_T( rt_upscale_quality,			"0",	"0 - off, 1 - native aa, 2 - quality, 3 - balanced, 4 - perf, 5 - ultra perf" )
	CVAR_DEF_T( rt_sharpen,					"0",	"image sharpening" )

	CVAR_DEF_T( rt_antifirefly,				"1",	"" )
	CVAR_DEF_T( rt_denoiser,				"0",	"0 - ReBLUR, 1 - RELAX" )
    CVAR_DEF_T( rt_shadowrays,				"2",	"max depth of shadow ray casts" )
	CVAR_DEF_T( rt_indir2bounces,			"1",	"2 bounces for indirect" )

	CVAR_DEF_T( rt_normalmap_stren,			"1",	"" )
	CVAR_DEF_T( rt_normalmap_stren_water,	"1",	"normal map influence for water" )
	CVAR_DEF_T( rt_emis_mapboost,			"100",	"indirect illumination emissiveness" )
	CVAR_DEF_T( rt_emis_maxscrcolor,		"16",	"burn on-screen emissive colors" )
	CVAR_DEF_T( rt_emis_additive_dflt,		"0.01",	"" )
	CVAR_DEF_T( rt_emis_additive_brush,		"1.0",	"" )
	CVAR_DEF_T( rt_emis_hologram,			"0.2",	"" )

	CVAR_DEF_T( rt_tnmp_ev100_min,			"2.0",	"min brightness for auto-exposure" )
    CVAR_DEF_T( rt_tnmp_ev100_max,			"7.7",	"max brightness for auto-exposure" )
    CVAR_DEF_T( rt_tnmp_saturation_r,		"2",	"-1 desaturate, +1 over saturate" )
    CVAR_DEF_T( rt_tnmp_saturation_g,		"2",	"-1 desaturate, +1 over saturate" )
    CVAR_DEF_T( rt_tnmp_saturation_b,		"2",	"-1 desaturate, +1 over saturate" )
    CVAR_DEF_T( rt_tnmp_crosstalk_r,		"1",	"set one channel to 1.0, others to <= 1.0" )
    CVAR_DEF_T( rt_tnmp_crosstalk_g,		"1",	"set one channel to 1.0, others to <= 1.0" )
    CVAR_DEF_T( rt_tnmp_crosstalk_b,		"1",	"set one channel to 1.0, others to <= 1.0" )

	CVAR_DEF_T( rt_sky,						"100",	"sky intensity")
	CVAR_DEF_T( rt_sky_saturation,			"1",	"sky saturation")

	CVAR_DEF_T( rt_sun,						"7000",	"sun intensity")
	CVAR_DEF_T( rt_sun_diameter,			"0.5",	"sun angular diameter in degrees")

	CVAR_DEF_T( rt_flsh,					"800",	"flashlight intensity")
    CVAR_DEF_T( rt_flsh_radius,				"0.02",	"flashlight source disk radius in meters")
	CVAR_DEF_T( rt_flsh_angle,				"20",	"flashlight width in degrees")
	CVAR_DEF_T( rt_flsh_r,					"-0.2",	"flashlight position offset - right")
	CVAR_DEF_T( rt_flsh_u,					"-0.3",	"flashlight position offset - up")
	CVAR_DEF_T( _rt_flsh_key,				"-1",	"internal variable; d-light key of the player's flashlight")

	CVAR_DEF_T( rt_light_d,					"1000",	"dlight intensity (explosions, other dynamic lights)")
	CVAR_DEF_T( rt_light_s,					"1000",	"map lights intensity (lights defined by a map)")
	CVAR_DEF_T( rt_light_p,					"10",	"particle lights intensity (gauss)")
	CVAR_DEF_T( rt_light_b,					"1000",	"beam lights intensity (egon)")
    CVAR_DEF_T( rt_light_tram,				"5",	"intro tram interior light intensity")
	CVAR_DEF_T( rt_light_tram_h,			"400",	"intro tram headlights intensity")
	CVAR_DEF_T( rt_light_tram_ao,			"45",	"intro tram headlights outer angle")
	CVAR_DEF_T( rt_light_tram_ai,			"30",	"intro tram headlights inner angle")
	CVAR_DEF_T( rt_light_radius,			"0.02",	"default radius for original lights (in meters)")

    CVAR_DEF_T( rt_reflrefr_depth,			"6",	"max depth of reflect/refract") 
	CVAR_DEF_T( rt_refr_glass,				"1.52",	"glass index of refraction") 
	CVAR_DEF_T( rt_refr_water,				"1.33",	"water index of refraction") 
	CVAR_DEF_T( rt_refr_thinwidth,			"0.0",	"approx. width of thin media, e.g. thin glass (in meters)") 

	CVAR_DEF_T( rt_mzlflash,				"1",	"enable muzzle flash light source" )
	CVAR_DEF_T( rt_mzlflash_life,			"0.05",	"how long muzzle flash light should exist" )
	CVAR_DEF_T( rt_mzlflash_f,				"0.2",	"muzzle flash light offset - forward" )
	CVAR_DEF_T( rt_mzlflash_u,				"0.0",	"muzzle flash light offset - up" )
	CVAR_DEF_T( rt_mzlflash_size,			"1",	"additional muzzle flash light size" )
	CVAR_DEF_T( rt_mzlflash_decay,			"2",	"how fast muzzle flash light size should decrease" )
	CVAR_DEF_T( rt_norms_studio,			"1",	"use original normals for studio models" )
	CVAR_DEF_T( rt_norms_brush,				"1",	"use original normals for brushes" )

	CVAR_DEF_T( rt_tent_life,				"1",	"lifetime multiplier for tempentities" )

	CVAR_DEF_T( rt_texture_nearest,			"1",	"nearest texture filter for the world" )
	CVAR_DEF_T( rt_particles_notex,			"0",	"don't use texture for particles" )

	CVAR_DEF_T( rt_volume_type,				"1",	"0 - none, 1 - volumetric, 2 - distance based" )
	CVAR_DEF_T( rt_volume_far,				"1000",	"max distance of scattering volume" )
	CVAR_DEF_T( rt_volume_scatter,			"1",	"density of media" )
	CVAR_DEF_T( rt_volume_ambient,			"0.5",	"ambient term" )
	CVAR_DEF_T( rt_volume_lintensity,		"1",	"intensity of lights for scattering" )
	CVAR_DEF_T( rt_volume_lassymetry,		"0.75",	"scaterring phase function assymetry" )
	CVAR_DEF_T( rt_volume_illumgrid,		"0",	"enable illumination grid, instead of only one light source for scaterring" )
	CVAR_DEF_T( rt_volume_history,			"8",	"max history length for scaterring accumulation (in frames)" )

	CVAR_DEF_T( rt_me_water_r,				"200",	"water color Red; set by rt_me_water" )
	CVAR_DEF_T( rt_me_water_g,				"205",	"water color Green; set by rt_me_water" )
	CVAR_DEF_T( rt_me_water_b,				"210",	"water color Blue; set by rt_me_water" )
	CVAR_DEF_T( rt_me_water_density,		"1",	"water absorption density multiplier; 0 - crystal clear" )

	CVAR_DEF_T( rt_bloom,					"1",	"enable bloom" )
	CVAR_DEF_T( rt_bloom_intensity,			"0.2",	"bloom intensity" )
	CVAR_DEF_T( rt_bloom_threshold,			"4",	"bloom threshold" )
	CVAR_DEF_T( rt_bloom_emis_mult,			"9",	"bloom multiplier for emissive" )
    CVAR_DEF_T( rt_bloom_dirt,				"2",	"lens dirt intensity" )
    CVAR_DEF_T( rt_bloom_dirt_enable,		"0",	"lens dirt enable" )
	
	CVAR_DEF_T( rt_ef_crt,					"0",	"CRT-monitor filter" )
    CVAR_DEF_T( rt_ef_chraber,				"0.1",	"chromatic aberration intensity" )
    CVAR_DEF_T( rt_ef_vintage,				"0",	"[0, 4] vintage effects, disabled if rt_renderscale>0" )
    CVAR_DEF_T( rt_ef_water,				"1",	"warp screen while under water" )
	CVAR_DEF_T( rt_ef_nv,					"-1",	"-1 - auto, 0 - off, 1 - force night vision" )
	CVAR_DEF_T( rt_nv_gain,					"4.0",	"night vision light amplification gain" )
	CVAR_DEF_T( rt_nv_noise,				"0.15",	"night vision quantum noise intensity" )
	CVAR_DEF_T( rt_nv_vignette,				"1.0",	"night vision optical tube vignette intensity" )

    CVAR_DEF_T( _rt_labcoat,				"0",	"internal variable; 0 - use default model, 1 - use labcoat (without HEV suit)" )
    CVAR_DEF_T( rt_labcoat_force,			"0",	"1 - force labcoat player model, 2 - force HEV, 0 - auto" )
    CVAR_DEF_T( rt_labcoat_model,			"rt/valve/models_rt/gordon_scientist.mdl", "path to Gordon's model without the HEV suit" )
	
	CVAR_DEF_T( rt_forcecvars,				"1",	"force original cvars to be set to be compatible with RT mode: disable culling, no lightmaps" )

	CVAR_DEF_T( rt_cull,					"0",	"enable PVS-based culling in RT mode" )
	CVAR_DEF_T( rt_pvs_radius,				"768",	"radius for fattened PVS in RT mode (qu units)" )
	CVAR_DEF_T( rt_cull_entities,			"0",	"also cull studio models and brush entities by PVS" )

	CVAR_DEF_T( _rt_chapter,				"",		"chapter logo name; checking folder: rt/mat/resource/ch/" )
	CVAR_DEF_T( _rt_chaptershow,			"0",	"show chapter logo" )

	CVAR_DEF_T( _rt_skipframe,				"0",	"skip frame for level change" )

    CVAR_DEF_T( _rt_fsr3_available,			"0",	"internal variable; for menu" )
    CVAR_DEF_T( _rt_dlss_available,			"0",	"internal variable; for menu" )
    CVAR_DEF_T( rt_framegen,				"1",	"enable Frame Generation" )
    CVAR_DEF_T( _rt_framegen_available,		"0",	"internal variable; for menu" )
    CVAR_DEF_T( _rt_dlss_framegen_available,	"0",	"internal variable; for menu" )

	// clang-format on

    gEngfuncs.Cmd_AddCommand( "rt_me_water",
                              &RT_WaterColor,
                              "set water color (rt_me_water_*), usage: rt_me_water <R> <G> <B>, "
                              "where R, G, B are in 0..255" );

#endif
}

/*
===============
R_CheckVBO

register VBO cvars and get default value
===============
*/
static void R_CheckVBO( void )
{
	qboolean disable = false;
	int flags = 0;

	// some bad GLES1 implementations breaks dlights completely
	if( glConfig.max_texture_units < 3 )
		disable = true;

#if XASH_MOBILE_PLATFORM
	// VideoCore4 drivers have a problem with mixing VBO and client arrays
	// Disable it, as there is no suitable workaround here
	if( Q_stristr( glConfig.renderer_string, "VideoCore IV" ) || Q_stristr( glConfig.renderer_string, "vc4" ) )
		disable = true;
#endif

	// we do not want to write vbo code that does not use multitexture
	if( !GL_Support( GL_ARB_VERTEX_BUFFER_OBJECT_EXT ) || !GL_Support( GL_ARB_MULTITEXTURE ) || glConfig.max_texture_units < 2 )
	{
		flags = FCVAR_READ_ONLY;
		disable = true;
	}

	if( disable )
	{
		gEngfuncs.Cvar_FullSet( r_vbo.name, "0", flags );
		gEngfuncs.Cvar_FullSet( r_vbo_dlightmode.name, "0", flags );
	}
}

/*
=================
GL_RemoveCommands
=================
*/
static void GL_RemoveCommands( void )
{
	gEngfuncs.Cmd_RemoveCommand( "r_info" );
	gEngfuncs.Cmd_RemoveCommand( "timerefresh" );
}

#if XASH_RAYTRACING
static void PrintMessage( const char *pMessage, RgMessageSeverityFlags severity, void *pUserData )
{
	if( severity & RG_MESSAGE_SEVERITY_VERBOSE )
	{
		return;
	}

	if( severity & RG_MESSAGE_SEVERITY_ERROR )
	{
		gEngfuncs.Host_Error( "%s\n", pMessage );
	}

	gEngfuncs.Con_Printf( "%s\n", pMessage );
}
#endif

/*
===============
R_Init
===============
*/
qboolean R_Init( void )
{
	if( glw_state.initialized )
		return true;

	GL_InitCommands();
	GL_InitRandomTable();

	GL_SetDefaultState();

	r_temppool = Mem_AllocPool( "Render Zone" );

	// create the window and set up the context
	if( !gEngfuncs.R_Init_Video( REF_RT )) // request GL context
	{
		GL_RemoveCommands();
		gEngfuncs.R_Free_Video();
// Why? Host_Error again???
//		gEngfuncs.Host_Error( "Can't initialize video subsystem\nProbably driver was not installed" );
		Mem_FreePool( &r_temppool );
		return false;
	}

#if XASH_RAYTRACING
	{
#if XASH_WIN32
		RgWin32SurfaceCreateInfo win32Info = {
			.hinstance = GetModuleHandle( NULL ),
			.hwnd      = gpGlobals->rtglHwnd,
		};
#elif XASH_LINUX
		RgWaylandSurfaceCreateInfo waylandInfo = {
			.display = gpGlobals->rtglDisplay,
			.surface = gpGlobals->rtglWaylandSurface,
		};
		RgXlibSurfaceCreateInfo xlibInfo = {
			.dpy    = gpGlobals->rtglDisplay,
			.window = (Window)gpGlobals->rtglX11Window,
		};
#endif

		RgInstanceCreateInfo info = {
			.pAppName = "Xash",
			.pAppGUID = "986af412-bab4-4e44-a603-bfaf49e7ef4d",

#if XASH_WIN32
			.pWin32SurfaceInfo = &win32Info,
#elif XASH_LINUX
			.pWaylandSurfaceCreateInfo = gpGlobals->rtglSurfaceType == REF_WINDOW_TYPE_WAYLAND ? &waylandInfo : NULL,
			.pXlibSurfaceCreateInfo    = gpGlobals->rtglSurfaceType == REF_WINDOW_TYPE_X11     ? &xlibInfo    : NULL,
#endif

			.pOverrideFolderPath = "rt/",

			.pfnPrint = PrintMessage,
#ifdef NDEBUG
			.allowedMessages = RG_MESSAGE_SEVERITY_INFO |
							   RG_MESSAGE_SEVERITY_WARNING | RG_MESSAGE_SEVERITY_ERROR,
#else
			.allowedMessages = RG_MESSAGE_SEVERITY_VERBOSE | RG_MESSAGE_SEVERITY_INFO |
							   RG_MESSAGE_SEVERITY_WARNING | RG_MESSAGE_SEVERITY_ERROR,
#endif

			.primaryRaysMaxAlbedoLayers          = 2,
			.indirectIlluminationMaxAlbedoLayers = 1,
            .rayCullBackFacingTriangles          = true,
			.allowGeometryWithSkyFlag            = true,

			.allowTexCoordLayer1        = true,
			.allowTexCoordLayer2        = false,
			.allowTexCoordLayer3        = false,
			.lightmapTexCoordLayerIndex = 1,

			.rasterizedMaxVertexCount   = 1 << 20,
			.rasterizedMaxIndexCount    = 1 << 21,
			.rasterizedVertexColorGamma = true,

			.rasterizedSkyCubemapSize = 256,

			.textureSamplerForceMinificationFilterLinear = true,
			.textureSamplerForceNormalMapFilterLinear    = true,

			// to match the GLTF standard
			.pbrTextureSwizzling = RG_TEXTURE_SWIZZLING_NULL_ROUGHNESS_METALLIC,

			.worldUp      = { 0, 0, 1 },
			.worldForward = { 0, 1, 0 },
			.worldScale   = QUAKEUNIT_IN_METERS,

			.enableFrameGeneration = ( rt_cvars.rt_framegen && RT_CVAR_TO_INT32( rt_framegen ) > 0 ),
		};

		RgResult r = rgCreateInstance( &info, &rg_instance );
		if( r != RG_RESULT_SUCCESS )
		{
			gEngfuncs.Host_Error( "RayTracedGL1 init error: %s", rgUtilGetResultDescription( r ) );
		}

		gEngfuncs.Cvar_SetValue(
			"_rt_fsr3_available",
			rgUtilIsUpscaleTechniqueAvailable( rg_instance, RG_RENDER_UPSCALE_TECHNIQUE_AMD_FSR3 )
				? 1.0f
				: 0.0f );
		gEngfuncs.Cvar_SetValue(
			"_rt_dlss_available",
			rgUtilIsUpscaleTechniqueAvailable( rg_instance, RG_RENDER_UPSCALE_TECHNIQUE_NVIDIA_DLSS )
				? 1.0f
				: 0.0f );
		gEngfuncs.Cvar_SetValue(
			"_rt_framegen_available",
			rgUtilIsFrameGenerationAvailable( rg_instance ) ? 1.0f : 0.0f );
		gEngfuncs.Cvar_SetValue(
			"_rt_dlss_framegen_available",
			rgUtilIsDlssgAvailable( rg_instance ) ? 1.0f : 0.0f );

		gEngfuncs.Con_Printf( "Ray tracing upscaling: FSR3=%s, DLSS=%s, FrameGen=%s, DLSS-FG=%s\n",
			RT_CVAR_TO_BOOL( _rt_fsr3_available ) ? "available" : "unavailable",
			RT_CVAR_TO_BOOL( _rt_dlss_available ) ? "available" : "unavailable",
			RT_CVAR_TO_BOOL( _rt_framegen_available ) ? "available" : "unavailable",
			RT_CVAR_TO_BOOL( _rt_dlss_framegen_available ) ? "available" : "unavailable" );

		{
			const rt_state_t nullstate = {
.curTexture2DName       = NULL,
.curTextureNearest      = false,
.curTexturePreferLinear = false,
.curTextureIsHUD        = false,
.curTextureClamped      = false,
				.curIsSky               = false,
				.curIsRasterized        = false,
				.curStudioBodyPart = -1,
				.curStudioSubmodel = -1,
				.curStudioMesh     = -1,
				.curStudioGlend    = -1,

				.curBrushSurface           = -1,
				.curBrushSurfaceIsSky      = false,
				.curBrushSurfaceIsWater    = false,
				.curBrushSurfaceIsAnimated = false,

				.flashlight_uniqueid = 0,
			};
			memcpy( &rt_state, &nullstate, sizeof( rt_state ) );
		}
	}
#endif

	// see R_ProcessEntData for tr.entities initialization
	tr.world = (struct world_static_s *)ENGINE_GET_PARM( PARM_GET_WORLD_PTR );
	tr.palette = (color24 *)ENGINE_GET_PARM( PARM_GET_PALETTE_PTR );
	tr.viewent = (cl_entity_t *)ENGINE_GET_PARM( PARM_GET_VIEWENT_PTR );
	tr.texgammatable = (byte *)ENGINE_GET_PARM( PARM_GET_TEXGAMMATABLE_PTR );
	tr.lightgammatable = (uint16_t *)ENGINE_GET_PARM( PARM_GET_LIGHTGAMMATABLE_PTR );
	tr.screengammatable = (uint16_t *)ENGINE_GET_PARM( PARM_GET_SCREENGAMMATABLE_PTR );
	tr.lineargammatable = (uint16_t *)ENGINE_GET_PARM( PARM_GET_LINEARGAMMATABLE_PTR );
	tr.elights = (dlight_t *)ENGINE_GET_PARM( PARM_GET_ELIGHTS_PTR );

	GL_SetDefaults();
	R_CheckVBO();
	R_InitImages();
	R_StudioInit();
	R_AliasInit();
	R_ClearDecals();
	R_ClearScene();

#if XASH_RAYTRACING
	glw_state.initialized = true;
#endif
	return true;
}

/*
===============
R_Shutdown
===============
*/
void R_Shutdown( void )
{
	if( !glw_state.initialized )
		return;

	GL_RemoveCommands();
	GL_FreeRenderTargets();
	R_ShutdownImages();
#if !XASH_GLES && !XASH_GL_STATIC
	GL2_ShimShutdown();
#endif

	Mem_FreePool( &r_temppool );

#if XASH_GL4ES
	close_gl4es();
#endif // XASH_GL4ES

	// shut down OS specific OpenGL stuff like contexts, etc.
	gEngfuncs.R_Free_Video();

#if XASH_RAYTRACING
	if( rg_instance )
	{
		rgDestroyInstance( rg_instance );
	}
#endif
}

/*
=================
GL_ErrorString
convert errorcode to string
=================
*/
const char *GL_ErrorString( int err )
{
	switch( err )
	{
	case GL_STACK_OVERFLOW:
		return "GL_STACK_OVERFLOW";
	case GL_STACK_UNDERFLOW:
		return "GL_STACK_UNDERFLOW";
	case GL_INVALID_ENUM:
		return "GL_INVALID_ENUM";
	case GL_INVALID_VALUE:
		return "GL_INVALID_VALUE";
	case GL_INVALID_OPERATION:
		return "GL_INVALID_OPERATION";
	case GL_OUT_OF_MEMORY:
		return "GL_OUT_OF_MEMORY";
	default:
		return "UNKNOWN ERROR";
	}
}

/*
=================
GL_CheckForErrors
obsolete
=================
*/
void GL_CheckForErrors_( const char *filename, const int fileline )
{
#if !XASH_RAYTRACING
	if( !gl_check_errors.value || !gpGlobals->developer )
		return;

	int err = pglGetError();

	if( err == GL_NO_ERROR )
		return;

	gEngfuncs.Con_Printf( S_OPENGL_ERROR "%s (at %s:%i)\n", GL_ErrorString( err ), filename, fileline );
#endif
}

void GL_SetupAttributes( int safegl )
{
	int context_flags = 0; // REFTODO!!!!!
	int samples = 0;

#if XASH_GLES
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_PROFILE_MASK, REF_GL_CONTEXT_PROFILE_ES );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_EGL, 1 );
#if XASH_NANOGL
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, 1 );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MINOR_VERSION, 1 );
#else // !XASH_NANOGL
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, 2 );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MINOR_VERSION, 0 );
#endif

#elif XASH_GL4ES
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_PROFILE_MASK, REF_GL_CONTEXT_PROFILE_ES );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_EGL, 1 );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, 2 );
	gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MINOR_VERSION, 0 );
#else // GL1.x
	if( gEngfuncs.Sys_CheckParm( "-glcore" ))
	{
		SetBits( context_flags, FCONTEXT_CORE_PROFILE );

		gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_PROFILE_MASK, REF_GL_CONTEXT_PROFILE_CORE );
		gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, 3 );
		gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MINOR_VERSION, 3 );
	}
	else
	{
		if( !safegl )
			gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_PROFILE_MASK, REF_GL_CONTEXT_PROFILE_COMPATIBILITY );
		else
		{
			gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, 1 );
			gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_MINOR_VERSION, 1 );
		}
	}
#endif // XASH_GLES

	if( gEngfuncs.Sys_CheckParm( "-gldebug" ))
	{
		gEngfuncs.Con_Reportf( "Creating an extended GL context for debug...\n" );
		SetBits( context_flags, FCONTEXT_DEBUG_ARB );
		gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_FLAGS, REF_GL_CONTEXT_DEBUG_FLAG );
		glw_state.extended = true;
	}

	if( gEngfuncs.Sys_CheckParm( "-glnoerr" ))
	{
		gEngfuncs.Con_Reportf( "Creating a no-error GL context...\n" );
		gEngfuncs.GL_SetAttribute( REF_GL_CONTEXT_NO_ERROR, 1 );
	}

	if( safegl > SAFE_DONTCARE )
	{
		safegl = -1; // can't retry anymore, can only shutdown engine
		return;
	}

	gEngfuncs.Con_Printf( "Trying safe opengl mode %d\n", safegl );

	if( safegl == SAFE_DONTCARE )
		return;

	gEngfuncs.GL_SetAttribute( REF_GL_DOUBLEBUFFER, 1 );

	if( safegl < SAFE_NOACC )
		gEngfuncs.GL_SetAttribute( REF_GL_ACCELERATED_VISUAL, 1 );

	gEngfuncs.Con_Printf( "bpp %d\n", gpGlobals->desktopBitsPixel );

	if( safegl < SAFE_NOSTENCIL )
		gEngfuncs.GL_SetAttribute( REF_GL_STENCIL_SIZE, gl_stencilbits.value );

	if( safegl < SAFE_NOALPHA )
		gEngfuncs.GL_SetAttribute( REF_GL_ALPHA_SIZE, 8 );

	if( safegl < SAFE_NODEPTH )
		gEngfuncs.GL_SetAttribute( REF_GL_DEPTH_SIZE, 24 );
	else
		gEngfuncs.GL_SetAttribute( REF_GL_DEPTH_SIZE, 8 );

	if( safegl < SAFE_NOCOLOR )
	{
		if( gpGlobals->desktopBitsPixel >= 24 )
		{
			gEngfuncs.GL_SetAttribute( REF_GL_RED_SIZE, 8 );
			gEngfuncs.GL_SetAttribute( REF_GL_GREEN_SIZE, 8 );
			gEngfuncs.GL_SetAttribute( REF_GL_BLUE_SIZE, 8 );
		}
		else if( gpGlobals->desktopBitsPixel >= 16 )
		{
			gEngfuncs.GL_SetAttribute( REF_GL_RED_SIZE, 5 );
			gEngfuncs.GL_SetAttribute( REF_GL_GREEN_SIZE, 6 );
			gEngfuncs.GL_SetAttribute( REF_GL_BLUE_SIZE, 5 );
		}
		else
		{
			gEngfuncs.GL_SetAttribute( REF_GL_RED_SIZE, 3 );
			gEngfuncs.GL_SetAttribute( REF_GL_GREEN_SIZE, 3 );
			gEngfuncs.GL_SetAttribute( REF_GL_BLUE_SIZE, 2 );
		}
	}

	if( safegl < SAFE_NOMSAA )
	{
		switch( (int)gEngfuncs.pfnGetCvarFloat( "gl_msaa_samples" ))
		{
		case 2:
		case 4:
		case 8:
		case 16:
			samples = gEngfuncs.pfnGetCvarFloat( "gl_msaa_samples" );
			break;
		default:
			samples = 0; // don't use, because invalid parameter is passed
		}

		if( samples )
		{
			gEngfuncs.GL_SetAttribute( REF_GL_MULTISAMPLEBUFFERS, 1 );
			gEngfuncs.GL_SetAttribute( REF_GL_MULTISAMPLESAMPLES, samples );

			glConfig.max_multisamples = samples;
		}
		else
		{
			gEngfuncs.GL_SetAttribute( REF_GL_MULTISAMPLEBUFFERS, 0 );
			gEngfuncs.GL_SetAttribute( REF_GL_MULTISAMPLESAMPLES, 0 );

			glConfig.max_multisamples = 0;
		}
	}
	else
	{
		gEngfuncs.Cvar_Set( "gl_msaa_samples", "0" );
	}
}

void wes_init( const char *gles2 );
int nanoGL_Init( void );
#if XASH_GL4ES
static void APIENTRY GL4ES_GetMainFBSize( int *width, int *height )
{
	*width = gpGlobals->width;
	*height = gpGlobals->height;
}

static void * APIENTRY GL4ES_GetProcAddress( const char *name )
{
	if( !Q_strcmp(name, "glShadeModel") )
		// combined gles/gles2/gl implementation exports this, but it is invalid
		return NULL;
	return gEngfuncs.GL_GetProcAddress( name );
}
#endif // XASH_GL4ES

void GL_OnContextCreated( void )
{
	int colorBits[3];
#if XASH_NANOGL
	nanoGL_Init();
#endif

	gEngfuncs.GL_GetAttribute( REF_GL_RED_SIZE, &colorBits[0] );
	gEngfuncs.GL_GetAttribute( REF_GL_GREEN_SIZE, &colorBits[1] );
	gEngfuncs.GL_GetAttribute( REF_GL_BLUE_SIZE, &colorBits[2] );
	glConfig.color_bits = colorBits[0] + colorBits[1] + colorBits[2];

	gEngfuncs.GL_GetAttribute( REF_GL_ALPHA_SIZE, &glConfig.alpha_bits );
	gEngfuncs.GL_GetAttribute( REF_GL_DEPTH_SIZE, &glConfig.depth_bits );
	gEngfuncs.GL_GetAttribute( REF_GL_STENCIL_SIZE, &glConfig.stencil_bits );
	glState.stencilEnabled = glConfig.stencil_bits ? true : false;

	gEngfuncs.GL_GetAttribute( REF_GL_MULTISAMPLESAMPLES, &glConfig.msaasamples );
	gEngfuncs.GL_GetAttribute( REF_GL_CONTEXT_MAJOR_VERSION, &glConfig.version_major );
	gEngfuncs.GL_GetAttribute( REF_GL_CONTEXT_MINOR_VERSION, &glConfig.version_minor );

#if XASH_WES
	wes_init( "" );
#endif // XASH_WES

#if XASH_GL4ES
	set_getprocaddress( GL4ES_GetProcAddress );
	set_getmainfbsize( GL4ES_GetMainFBSize );
	initialize_gl4es();

	// merge glBegin/glEnd in beams and console
	pglHint( GL_BEGINEND_HINT_GL4ES, 1 );
	// dxt unpacked to 16-bit looks ugly
	pglHint( GL_AVOID16BITS_HINT_GL4ES, 1 );
#endif // XASH_GL4ES
}

#if XASH_RAYTRACING
#define EMPTY_LINKAGE extern
#define EMPTY_FUNCTION( name ) APIENTRY p##name

EMPTY_LINKAGE GLenum APIENTRY pglGetError(void){ return 0; }
EMPTY_LINKAGE const GLubyte * APIENTRY pglGetString(GLenum name){ return ""; }
EMPTY_LINKAGE void APIENTRY pglAccum(GLenum op, GLfloat value){}
EMPTY_LINKAGE void APIENTRY pglAlphaFunc(GLenum func, GLclampf ref){}
EMPTY_LINKAGE void APIENTRY pglArrayElement(GLint i){}
EMPTY_LINKAGE void APIENTRY pglBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap){}
EMPTY_LINKAGE void APIENTRY pglBlendColorARB(GLfloat r, GLfloat g, GLfloat b, GLfloat a){}
EMPTY_LINKAGE void APIENTRY pglCallList(GLuint list){}
EMPTY_LINKAGE void APIENTRY pglCallLists(GLsizei n, GLenum type, const GLvoid *lists){}
EMPTY_LINKAGE void APIENTRY pglClear(GLbitfield mask){}
EMPTY_LINKAGE void APIENTRY pglClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){}
EMPTY_LINKAGE void APIENTRY pglClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha){}
EMPTY_LINKAGE void APIENTRY pglClearDepth(GLclampd depth){}
EMPTY_LINKAGE void APIENTRY pglClearIndex(GLfloat c){}
EMPTY_LINKAGE void APIENTRY pglClearStencil(GLint s){}
EMPTY_LINKAGE GLboolean APIENTRY pglIsEnabled( GLenum cap ){ return 0; }
EMPTY_LINKAGE GLboolean APIENTRY pglIsList( GLuint list ){ return 0; }
EMPTY_LINKAGE GLboolean APIENTRY pglIsTexture( GLuint texture ){ return 0; }
EMPTY_LINKAGE void APIENTRY pglClipPlane(GLenum plane, const GLdouble *equation){}
EMPTY_LINKAGE void APIENTRY pglColor3b(GLbyte red, GLbyte green, GLbyte blue){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3bv(const GLbyte *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3i(GLint red, GLint green, GLint blue){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3s(GLshort red, GLshort green, GLshort blue){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3ui(GLuint red, GLuint green, GLuint blue){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3uiv(const GLuint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3us(GLushort red, GLushort green, GLushort blue){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor3usv(const GLushort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4bv(const GLbyte *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4i(GLint red, GLint green, GLint blue, GLint alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4uiv(const GLuint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColor4usv(const GLushort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColorMaterial(GLenum face, GLenum mode){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type){}
EMPTY_LINKAGE void APIENTRY pglCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border){}
EMPTY_LINKAGE void APIENTRY pglCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border){}
EMPTY_LINKAGE void APIENTRY pglCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){}
EMPTY_LINKAGE void APIENTRY pglCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){}
EMPTY_LINKAGE void APIENTRY pglCullFace(GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglDeleteLists(GLuint list, GLsizei range){}
void pglDeleteTextures( const char* texturename )
{
    RgResult r = rgMarkOriginalTextureAsDeleted( rg_instance, texturename );
    RG_CHECK( r );
}
EMPTY_LINKAGE void APIENTRY pglDepthFunc(GLenum func){}
EMPTY_LINKAGE void APIENTRY pglDepthMask(GLboolean flag){}
EMPTY_LINKAGE void APIENTRY pglDisableClientState(GLenum array){}
EMPTY_LINKAGE void APIENTRY pglDrawArrays(GLenum mode, GLint first, GLsizei count){}
EMPTY_LINKAGE void APIENTRY pglDrawBuffer(GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices){}
EMPTY_LINKAGE void APIENTRY pglDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels){}
EMPTY_LINKAGE void APIENTRY pglEdgeFlag(GLboolean flag){}
EMPTY_LINKAGE void APIENTRY pglEdgeFlagPointer(GLsizei stride, const GLvoid *pointer){}
EMPTY_LINKAGE void APIENTRY pglEdgeFlagv(const GLboolean *flag){}
EMPTY_LINKAGE void APIENTRY pglEnableClientState(GLenum array){}
EMPTY_LINKAGE void APIENTRY pglEndList(void){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord1d(GLdouble u){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord1dv(const GLdouble *u){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord1f(GLfloat u){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord1fv(const GLfloat *u){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord2d(GLdouble u, GLdouble v){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord2dv(const GLdouble *u){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord2f(GLfloat u, GLfloat v){}
EMPTY_LINKAGE void APIENTRY pglEvalCoord2fv(const GLfloat *u){}
EMPTY_LINKAGE void APIENTRY pglEvalMesh1(GLenum mode, GLint i1, GLint i2){}
EMPTY_LINKAGE void APIENTRY pglEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2){}
EMPTY_LINKAGE void APIENTRY pglEvalPoint1(GLint i){}
EMPTY_LINKAGE void APIENTRY pglEvalPoint2(GLint i, GLint j){}
EMPTY_LINKAGE void APIENTRY pglFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer){}
EMPTY_LINKAGE void APIENTRY pglFinish(void){}
EMPTY_LINKAGE void APIENTRY pglFlush(void){}
EMPTY_LINKAGE void APIENTRY pglFogf(GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglFogfv(GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglFogi(GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglFogiv(GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglFrontFace(GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar){}
EMPTY_LINKAGE void APIENTRY pglGenTextures(GLsizei n, GLuint *textures){}
EMPTY_LINKAGE void APIENTRY pglGetBooleanv(GLenum pname, GLboolean *params){}
EMPTY_LINKAGE void APIENTRY pglGetClipPlane(GLenum plane, GLdouble *equation){}
EMPTY_LINKAGE void APIENTRY pglGetDoublev(GLenum pname, GLdouble *params){}
EMPTY_LINKAGE void APIENTRY pglGetFloatv(GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetIntegerv(GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetLightfv(GLenum light, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetLightiv(GLenum light, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetMapdv(GLenum target, GLenum query, GLdouble *v){}
EMPTY_LINKAGE void APIENTRY pglGetMapfv(GLenum target, GLenum query, GLfloat *v){}
EMPTY_LINKAGE void APIENTRY pglGetMapiv(GLenum target, GLenum query, GLint *v){}
EMPTY_LINKAGE void APIENTRY pglGetMaterialfv(GLenum face, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetMaterialiv(GLenum face, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetPixelMapfv(GLenum map, GLfloat *values){}
EMPTY_LINKAGE void APIENTRY pglGetPixelMapuiv(GLenum map, GLuint *values){}
EMPTY_LINKAGE void APIENTRY pglGetPixelMapusv(GLenum map, GLushort *values){}
EMPTY_LINKAGE void APIENTRY pglGetPointerv(GLenum pname, GLvoid* *params){}
EMPTY_LINKAGE void APIENTRY pglGetPolygonStipple(GLubyte *mask){}
EMPTY_LINKAGE void APIENTRY pglGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexEnviv(GLenum target, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexGendv(GLenum coord, GLenum pname, GLdouble *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexGeniv(GLenum coord, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels){}
EMPTY_LINKAGE void APIENTRY pglGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetTexParameteriv(GLenum target, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglHint(GLenum target, GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglIndexMask(GLuint mask){}
EMPTY_LINKAGE void APIENTRY pglIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer){}
EMPTY_LINKAGE void APIENTRY pglIndexd(GLdouble c){}
EMPTY_LINKAGE void APIENTRY pglIndexdv(const GLdouble *c){}
EMPTY_LINKAGE void APIENTRY pglIndexf(GLfloat c){}
EMPTY_LINKAGE void APIENTRY pglIndexfv(const GLfloat *c){}
EMPTY_LINKAGE void APIENTRY pglIndexi(GLint c){}
EMPTY_LINKAGE void APIENTRY pglIndexiv(const GLint *c){}
EMPTY_LINKAGE void APIENTRY pglIndexs(GLshort c){}
EMPTY_LINKAGE void APIENTRY pglIndexsv(const GLshort *c){}
EMPTY_LINKAGE void APIENTRY pglIndexub(GLubyte c){}
EMPTY_LINKAGE void APIENTRY pglIndexubv(const GLubyte *c){}
EMPTY_LINKAGE void APIENTRY pglInitNames(void){}
EMPTY_LINKAGE void APIENTRY pglInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer){}
EMPTY_LINKAGE void APIENTRY pglLightModelf(GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglLightModelfv(GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglLightModeli(GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglLightModeliv(GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglLightf(GLenum light, GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglLightfv(GLenum light, GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglLighti(GLenum light, GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglLightiv(GLenum light, GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglLineStipple(GLint factor, GLushort pattern){}
EMPTY_LINKAGE void APIENTRY pglLineWidth(GLfloat width){}
EMPTY_LINKAGE void APIENTRY pglListBase(GLuint base){}
EMPTY_LINKAGE void APIENTRY pglLoadName(GLuint name){}
EMPTY_LINKAGE void APIENTRY pglLogicOp(GLenum opcode){}
EMPTY_LINKAGE void APIENTRY pglMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points){}
EMPTY_LINKAGE void APIENTRY pglMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points){}
EMPTY_LINKAGE void APIENTRY pglMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points){}
EMPTY_LINKAGE void APIENTRY pglMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points){}
EMPTY_LINKAGE void APIENTRY pglMapGrid1d(GLint un, GLdouble u1, GLdouble u2){}
EMPTY_LINKAGE void APIENTRY pglMapGrid1f(GLint un, GLfloat u1, GLfloat u2){}
EMPTY_LINKAGE void APIENTRY pglMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2){}
EMPTY_LINKAGE void APIENTRY pglMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2){}
EMPTY_LINKAGE void APIENTRY pglMaterialf(GLenum face, GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglMaterialfv(GLenum face, GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglMateriali(GLenum face, GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglMaterialiv(GLenum face, GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglMultMatrixd(const GLdouble *m){}
EMPTY_LINKAGE void APIENTRY pglMultMatrixf(const GLfloat *m){}
EMPTY_LINKAGE void APIENTRY pglNewList(GLuint list, GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglNormal3b(GLbyte nx, GLbyte ny, GLbyte nz){}
EMPTY_LINKAGE void APIENTRY pglNormal3bv(const GLbyte *v){}
EMPTY_LINKAGE void APIENTRY pglNormal3d(GLdouble nx, GLdouble ny, GLdouble nz){}
EMPTY_LINKAGE void APIENTRY pglNormal3dv(const GLdouble *v){}
void pglNormal3f( GLfloat nx, GLfloat ny, GLfloat nz )
{
    rt_perf.c_normals++;
    rgUtilImScratchNormal( rg_instance, nx, ny, nz );
}
void pglNormal3fv( const GLfloat* v )
{
    rt_perf.c_normals++;
    rgUtilImScratchNormal( rg_instance, v[ 0 ], v[ 1 ], v[ 2 ] );
}
EMPTY_LINKAGE void APIENTRY pglNormal3i(GLint nx, GLint ny, GLint nz){}
EMPTY_LINKAGE void APIENTRY pglNormal3iv(const GLint *v){}
EMPTY_LINKAGE void APIENTRY pglNormal3s(GLshort nx, GLshort ny, GLshort nz){}
EMPTY_LINKAGE void APIENTRY pglNormal3sv(const GLshort *v){}
EMPTY_LINKAGE void APIENTRY pglNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer){}
EMPTY_LINKAGE void APIENTRY pglPassThrough(GLfloat token){}
EMPTY_LINKAGE void APIENTRY pglPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values){}
EMPTY_LINKAGE void APIENTRY pglPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values){}
EMPTY_LINKAGE void APIENTRY pglPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values){}
EMPTY_LINKAGE void APIENTRY pglPixelStoref(GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglPixelStorei(GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglPixelTransferf(GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglPixelTransferi(GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglPixelZoom(GLfloat xfactor, GLfloat yfactor){}
EMPTY_LINKAGE void APIENTRY pglPointSize(GLfloat size){}
EMPTY_LINKAGE void APIENTRY pglPolygonMode(GLenum face, GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglPolygonOffset(GLfloat factor, GLfloat units){}
EMPTY_LINKAGE void APIENTRY pglPolygonStipple(const GLubyte *mask){}
EMPTY_LINKAGE void APIENTRY pglPopAttrib(void){}
EMPTY_LINKAGE void APIENTRY pglPopClientAttrib(void){}
EMPTY_LINKAGE void APIENTRY pglPopMatrix(void){}
EMPTY_LINKAGE void APIENTRY pglPopName(void){}
EMPTY_LINKAGE void APIENTRY pglPushAttrib(GLbitfield mask){}
EMPTY_LINKAGE void APIENTRY pglPushClientAttrib(GLbitfield mask){}
EMPTY_LINKAGE void APIENTRY pglPushMatrix(void){}
EMPTY_LINKAGE void APIENTRY pglPushName(GLuint name){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2d(GLdouble x, GLdouble y){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2dv(const GLdouble *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2f(GLfloat x, GLfloat y){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2fv(const GLfloat *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2i(GLint x, GLint y){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2iv(const GLint *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2s(GLshort x, GLshort y){}
EMPTY_LINKAGE void APIENTRY pglRasterPos2sv(const GLshort *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3d(GLdouble x, GLdouble y, GLdouble z){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3dv(const GLdouble *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3f(GLfloat x, GLfloat y, GLfloat z){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3fv(const GLfloat *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3i(GLint x, GLint y, GLint z){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3iv(const GLint *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3s(GLshort x, GLshort y, GLshort z){}
EMPTY_LINKAGE void APIENTRY pglRasterPos3sv(const GLshort *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4dv(const GLdouble *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4fv(const GLfloat *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4i(GLint x, GLint y, GLint z, GLint w){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4iv(const GLint *v){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w){}
EMPTY_LINKAGE void APIENTRY pglRasterPos4sv(const GLshort *v){}
EMPTY_LINKAGE void APIENTRY pglReadBuffer(GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels){}
EMPTY_LINKAGE void APIENTRY pglRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2){}
EMPTY_LINKAGE void APIENTRY pglRectdv(const GLdouble *v1, const GLdouble *v2){}
EMPTY_LINKAGE void APIENTRY pglRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2){}
EMPTY_LINKAGE void APIENTRY pglRectfv(const GLfloat *v1, const GLfloat *v2){}
EMPTY_LINKAGE void APIENTRY pglRecti(GLint x1, GLint y1, GLint x2, GLint y2){}
EMPTY_LINKAGE void APIENTRY pglRectiv(const GLint *v1, const GLint *v2){}
EMPTY_LINKAGE void APIENTRY pglRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2){}
EMPTY_LINKAGE void APIENTRY pglRectsv(const GLshort *v1, const GLshort *v2){}
EMPTY_LINKAGE void APIENTRY pglRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z){}
EMPTY_LINKAGE void APIENTRY pglRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z){}
EMPTY_LINKAGE void APIENTRY pglScaled(GLdouble x, GLdouble y, GLdouble z){}
EMPTY_LINKAGE void APIENTRY pglScalef(GLfloat x, GLfloat y, GLfloat z){}
EMPTY_LINKAGE void APIENTRY pglScissor(GLint x, GLint y, GLsizei width, GLsizei height){}
EMPTY_LINKAGE void APIENTRY pglSelectBuffer(GLsizei size, GLuint *buffer){}
EMPTY_LINKAGE void APIENTRY pglShadeModel(GLenum mode){}
EMPTY_LINKAGE void APIENTRY pglStencilFunc(GLenum func, GLint ref, GLuint mask){}
EMPTY_LINKAGE void APIENTRY pglStencilMask(GLuint mask){}
EMPTY_LINKAGE void APIENTRY pglStencilOp(GLenum fail, GLenum zfail, GLenum zpass){}
EMPTY_LINKAGE void APIENTRY pglTexCoord1d(GLdouble s){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1f(GLfloat s){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1fv(const GLfloat *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1i(GLint s){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1s(GLshort s){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord1sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2d(GLdouble s, GLdouble t){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2i(GLint s, GLint t){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2s(GLshort s, GLshort t){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord2sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3d(GLdouble s, GLdouble t, GLdouble r){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3f(GLfloat s, GLfloat t, GLfloat r){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3fv(const GLfloat *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3i(GLint s, GLint t, GLint r){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3s(GLshort s, GLshort t, GLshort r){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord3sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4fv(const GLfloat *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4i(GLint s, GLint t, GLint r, GLint q){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoord4sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglTexEnvf(GLenum target, GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglTexEnvfv(GLenum target, GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglTexEnvi(GLenum target, GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglTexEnviv(GLenum target, GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglTexGend(GLenum coord, GLenum pname, GLdouble param){}
EMPTY_LINKAGE void APIENTRY pglTexGendv(GLenum coord, GLenum pname, const GLdouble *params){}
EMPTY_LINKAGE void APIENTRY pglTexGenf(GLenum coord, GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglTexGenfv(GLenum coord, GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglTexGeni(GLenum coord, GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglTexGeniv(GLenum coord, GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels){}
EMPTY_LINKAGE void APIENTRY pglTexParameterf(GLenum target, GLenum pname, GLfloat param){}
EMPTY_LINKAGE void APIENTRY pglTexParameterfv(GLenum target, GLenum pname, const GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglTexParameteri(GLenum target, GLenum pname, GLint param){}
EMPTY_LINKAGE void APIENTRY pglTexParameteriv(GLenum target, GLenum pname, const GLint *params){}
EMPTY_LINKAGE void APIENTRY pglTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels){}
EMPTY_LINKAGE void APIENTRY pglTranslated(GLdouble x, GLdouble y, GLdouble z){}
EMPTY_LINKAGE void APIENTRY pglTranslatef(GLfloat x, GLfloat y, GLfloat z){}
EMPTY_LINKAGE void APIENTRY pglVertex2d(GLdouble x, GLdouble y){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2fv(const GLfloat *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2i(GLint x, GLint y){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2s(GLshort x, GLshort y){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex2sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3d(GLdouble x, GLdouble y, GLdouble z){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3i(GLint x, GLint y, GLint z){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3s(GLshort x, GLshort y, GLshort z){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex3sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4dv(const GLdouble *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4fv(const GLfloat *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4i(GLint x, GLint y, GLint z, GLint w){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4iv(const GLint *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4s(GLshort x, GLshort y, GLshort z, GLshort w){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertex4sv(const GLshort *v){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer){ assert( 0 ); }
EMPTY_LINKAGE void APIENTRY pglPointParameterfEXT( GLenum param, GLfloat value ){}
EMPTY_LINKAGE void APIENTRY pglPointParameterfvEXT( GLenum param, const GLfloat *value ){}
EMPTY_LINKAGE void APIENTRY pglLockArraysEXT (int a, int b){}
EMPTY_LINKAGE void APIENTRY pglUnlockArraysEXT (void){}
EMPTY_LINKAGE void APIENTRY pglActiveTextureARB( GLenum e ){}
EMPTY_LINKAGE void APIENTRY pglClientActiveTextureARB( GLenum e ){}
EMPTY_LINKAGE void APIENTRY pglGetCompressedTexImage( GLenum target, GLint lod, const GLvoid* data ){}
EMPTY_LINKAGE void APIENTRY pglDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices ){}
EMPTY_LINKAGE void APIENTRY pglDrawRangeElementsEXT( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices ){}
EMPTY_LINKAGE void APIENTRY pglMultiTexCoord1f (GLenum e, GLfloat a){}
EMPTY_LINKAGE void APIENTRY pglMultiTexCoord2f (GLenum e, GLfloat a, GLfloat b){}
EMPTY_LINKAGE void APIENTRY pglMultiTexCoord3f (GLenum e, GLfloat a, GLfloat b, GLfloat c){}
EMPTY_LINKAGE void APIENTRY pglMultiTexCoord4f (GLenum e, GLfloat a, GLfloat b, GLfloat c, GLfloat d){}
EMPTY_LINKAGE void APIENTRY pglActiveTexture (GLenum e){}
EMPTY_LINKAGE void APIENTRY pglClientActiveTexture (GLenum e){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border,  GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){}
EMPTY_LINKAGE void APIENTRY pglDeleteObjectARB(GLhandleARB obj){}
EMPTY_LINKAGE GLhandleARB APIENTRY pglGetHandleARB(GLenum pname){ return 0; }
EMPTY_LINKAGE void APIENTRY pglDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj){}
EMPTY_LINKAGE GLhandleARB APIENTRY pglCreateShaderObjectARB(GLenum shaderType){ return 0; }
EMPTY_LINKAGE void APIENTRY pglShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length){}
EMPTY_LINKAGE void APIENTRY pglCompileShaderARB(GLhandleARB shaderObj){}
EMPTY_LINKAGE GLhandleARB APIENTRY pglCreateProgramObjectARB(void){ return 0; }
EMPTY_LINKAGE void APIENTRY pglAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj){}
EMPTY_LINKAGE void APIENTRY pglLinkProgramARB(GLhandleARB programObj){}
EMPTY_LINKAGE void APIENTRY pglUseProgramObjectARB(GLhandleARB programObj){}
EMPTY_LINKAGE void APIENTRY pglValidateProgramARB(GLhandleARB programObj){}
EMPTY_LINKAGE void APIENTRY pglBindProgramARB(GLenum target, GLuint program){}
EMPTY_LINKAGE void APIENTRY pglDeleteProgramsARB(GLsizei n, const GLuint *programs){}
EMPTY_LINKAGE void APIENTRY pglGenProgramsARB(GLsizei n, GLuint *programs){}
EMPTY_LINKAGE void APIENTRY pglProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string){}
EMPTY_LINKAGE void APIENTRY pglProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){}
EMPTY_LINKAGE void APIENTRY pglProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){}
EMPTY_LINKAGE void APIENTRY pglUniform1fARB(GLint location, GLfloat v0){}
EMPTY_LINKAGE void APIENTRY pglUniform2fARB(GLint location, GLfloat v0, GLfloat v1){}
EMPTY_LINKAGE void APIENTRY pglUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2){}
EMPTY_LINKAGE void APIENTRY pglUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){}
EMPTY_LINKAGE void APIENTRY pglUniform1iARB(GLint location, GLint v0){}
EMPTY_LINKAGE void APIENTRY pglUniform2iARB(GLint location, GLint v0, GLint v1){}
EMPTY_LINKAGE void APIENTRY pglUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2){}
EMPTY_LINKAGE void APIENTRY pglUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3){}
EMPTY_LINKAGE void APIENTRY pglUniform1fvARB(GLint location, GLsizei count, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniform2fvARB(GLint location, GLsizei count, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniform3fvARB(GLint location, GLsizei count, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniform4fvARB(GLint location, GLsizei count, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniform1ivARB(GLint location, GLsizei count, const GLint *value){}
EMPTY_LINKAGE void APIENTRY pglUniform2ivARB(GLint location, GLsizei count, const GLint *value){}
EMPTY_LINKAGE void APIENTRY pglUniform3ivARB(GLint location, GLsizei count, const GLint *value){}
EMPTY_LINKAGE void APIENTRY pglUniform4ivARB(GLint location, GLsizei count, const GLint *value){}
EMPTY_LINKAGE void APIENTRY pglUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){}
EMPTY_LINKAGE void APIENTRY pglGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog){}
EMPTY_LINKAGE void APIENTRY pglGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj){}
EMPTY_LINKAGE GLint APIENTRY pglGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name){ return 0; }
EMPTY_LINKAGE void APIENTRY pglGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name){}
EMPTY_LINKAGE void APIENTRY pglGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params){}
EMPTY_LINKAGE void APIENTRY pglGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source){}
EMPTY_LINKAGE void APIENTRY pglTexImage3D( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels ){}
EMPTY_LINKAGE void APIENTRY pglTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels ){}
EMPTY_LINKAGE void APIENTRY pglCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height ){}
EMPTY_LINKAGE void APIENTRY pglBlendEquationEXT(GLenum e){}
EMPTY_LINKAGE void APIENTRY pglStencilOpSeparate(GLenum a, GLenum b, GLenum c, GLenum d){}
EMPTY_LINKAGE void APIENTRY pglStencilFuncSeparate(GLenum a, GLenum b, GLint c, GLuint d){}
EMPTY_LINKAGE void APIENTRY pglActiveStencilFaceEXT(GLenum e){}
EMPTY_LINKAGE void APIENTRY pglVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer){}
EMPTY_LINKAGE void APIENTRY pglEnableVertexAttribArrayARB(GLuint index){}
EMPTY_LINKAGE void APIENTRY pglDisableVertexAttribArrayARB(GLuint index){}
EMPTY_LINKAGE void APIENTRY pglBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name){}
EMPTY_LINKAGE void APIENTRY pglGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name){}
EMPTY_LINKAGE GLint APIENTRY pglGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name){ return 0; }
EMPTY_LINKAGE void APIENTRY pglBindFragDataLocation(GLuint programObj, GLuint index, const GLcharARB *name){}
EMPTY_LINKAGE void APIENTRY pglVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y ){}
EMPTY_LINKAGE void APIENTRY pglVertexAttrib2fvARB( GLuint index, const GLfloat *v ){}
EMPTY_LINKAGE void APIENTRY pglVertexAttrib3fvARB( GLuint index, const GLfloat *v ){}
EMPTY_LINKAGE void APIENTRY pglBindBufferARB(GLenum target, GLuint buffer){}
EMPTY_LINKAGE void APIENTRY pglDeleteBuffersARB(GLsizei n, const GLuint *buffers){}
EMPTY_LINKAGE void APIENTRY pglGenBuffersARB(GLsizei n, GLuint *buffers){}
EMPTY_LINKAGE GLboolean APIENTRY pglIsBufferARB(GLuint buffer){ return 0; }
EMPTY_LINKAGE GLvoid* APIENTRY pglMapBufferARB(GLenum target, GLenum access){ return NULL; }
EMPTY_LINKAGE GLboolean APIENTRY pglUnmapBufferARB(GLenum target){ return 0; }
EMPTY_LINKAGE void APIENTRY pglBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage){}
EMPTY_LINKAGE void APIENTRY pglBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data){}
EMPTY_LINKAGE void APIENTRY pglGenQueriesARB(GLsizei n, GLuint *ids){}
EMPTY_LINKAGE void APIENTRY pglDeleteQueriesARB(GLsizei n, const GLuint *ids){}
EMPTY_LINKAGE GLboolean APIENTRY pglIsQueryARB(GLuint id){ return 0; }
EMPTY_LINKAGE void APIENTRY pglBeginQueryARB(GLenum target, GLuint id){}
EMPTY_LINKAGE void APIENTRY pglEndQueryARB(GLenum target){}
EMPTY_LINKAGE void APIENTRY pglGetQueryivARB(GLenum target, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params){}
EMPTY_LINKAGE void APIENTRY pglDebugMessageControlARB( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled ){}
EMPTY_LINKAGE void APIENTRY pglDebugMessageInsertARB( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const char* buf ){}
EMPTY_LINKAGE void APIENTRY pglDebugMessageCallbackARB( GL_DEBUG_PROC_ARB callback, void* userParam ){}
EMPTY_LINKAGE GLuint APIENTRY pglGetDebugMessageLogARB( GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLuint* severities, GLsizei* lengths, char* messageLog ){ return 0; }
EMPTY_LINKAGE GLboolean APIENTRY pglIsRenderbuffer(GLuint renderbuffer){ return 0; }
EMPTY_LINKAGE void APIENTRY pglBindRenderbuffer(GLenum target, GLuint renderbuffer){}
EMPTY_LINKAGE void APIENTRY pglDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers){}
EMPTY_LINKAGE void APIENTRY pglGenRenderbuffers(GLsizei n, GLuint *renderbuffers){}
EMPTY_LINKAGE void APIENTRY pglRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height){}
EMPTY_LINKAGE void APIENTRY pglRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){}
EMPTY_LINKAGE void APIENTRY pglGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params){}
EMPTY_LINKAGE GLboolean APIENTRY pglIsFramebuffer(GLuint framebuffer){ return 0; }
EMPTY_LINKAGE void APIENTRY pglBindFramebuffer(GLenum target, GLuint framebuffer){}
EMPTY_LINKAGE void APIENTRY pglDeleteFramebuffers(GLsizei n, const GLuint *framebuffers){}
EMPTY_LINKAGE void APIENTRY pglGenFramebuffers(GLsizei n, GLuint *framebuffers){}
EMPTY_LINKAGE GLenum APIENTRY pglCheckFramebufferStatus(GLenum target){ return 0; }
EMPTY_LINKAGE void APIENTRY pglFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){}
EMPTY_LINKAGE void APIENTRY pglFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){}
EMPTY_LINKAGE void APIENTRY pglFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer){}
EMPTY_LINKAGE void APIENTRY pglFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){}
EMPTY_LINKAGE void APIENTRY pglFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){}
EMPTY_LINKAGE void APIENTRY pglGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params){}
EMPTY_LINKAGE void APIENTRY pglBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){}
EMPTY_LINKAGE void APIENTRY pglDrawBuffersARB( GLsizei n, const GLenum *bufs ){}
EMPTY_LINKAGE void APIENTRY pglGenerateMipmap( GLenum target ){}
EMPTY_LINKAGE void APIENTRY pglBindVertexArray( GLuint array ){}
EMPTY_LINKAGE void APIENTRY pglDeleteVertexArrays( GLsizei n, const GLuint *arrays ){}
EMPTY_LINKAGE void APIENTRY pglGenVertexArrays( GLsizei n, const GLuint *arrays ){}
EMPTY_LINKAGE GLboolean APIENTRY pglIsVertexArray( GLuint array ){ return 0; }
EMPTY_LINKAGE void APIENTRY pglSwapInterval ( int interval ){}
EMPTY_LINKAGE void APIENTRY pglTexImage2DMultisample( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations ){}
EMPTY_LINKAGE const GLubyte * EMPTY_FUNCTION( glGetStringi )(GLenum name, GLint i){ return ""; }
EMPTY_LINKAGE void EMPTY_FUNCTION( glDeleteProgram )(GLuint program){}
EMPTY_LINKAGE void EMPTY_FUNCTION( glGetProgramiv )(GLuint program, GLenum e, GLuint *v){}
EMPTY_LINKAGE void EMPTY_FUNCTION( glGetProgramInfoLog )(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog){}
EMPTY_LINKAGE void EMPTY_FUNCTION( glBufferStorage )( GLenum target, GLsizei size, const GLvoid * data, GLbitfield flags){}
EMPTY_LINKAGE void EMPTY_FUNCTION( glFlushMappedBufferRange )(GLenum target, GLsizei offset, GLsizei length){}
EMPTY_LINKAGE void *EMPTY_FUNCTION( glMapBufferRange )(GLenum target, GLsizei offset, GLsizei length, GLbitfield access){ return NULL; }
EMPTY_LINKAGE void EMPTY_FUNCTION( glDrawRangeElementsBaseVertex )( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLuint vertex ){}


static void TryBeginBatch( RgUtilImScratchTopology glbegin_topology );

void pglBegin( GLenum mode )
{
	RgUtilImScratchTopology topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_TRIANGLES;
	switch( mode )
	{
		case GL_TRIANGLES: topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_TRIANGLES; break;
		case GL_TRIANGLE_STRIP: topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_TRIANGLE_STRIP; break;
		case GL_TRIANGLE_FAN: topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_TRIANGLE_FAN; break;
		case GL_QUADS: topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_QUADS; break;
		case GL_POLYGON: topology = RG_UTIL_IM_SCRATCH_TOPOLOGY_TRIANGLE_FAN; break;
		default: assert( 0 ); return;
	}

	TryBeginBatch( topology );
}

void pglTexCoord2f( GLfloat s, GLfloat t )
{
	rt_perf.c_texcoords++;
	rgUtilImScratchTexCoord( rg_instance, s, t );
}
void pglTexCoord2fv( const GLfloat* v )
{
	rt_perf.c_texcoords++;
	rgUtilImScratchTexCoord( rg_instance, v[ 0 ], v[ 1 ] );
}

void pglVertex3f( GLfloat x, GLfloat y, GLfloat z )
{
	rt_perf.c_verts++;
	rgUtilImScratchVertex( rg_instance, x, y, z );
}
void pglVertex3fv( const GLfloat* v )
{
	rt_perf.c_verts++;
	rgUtilImScratchVertex( rg_instance, v[ 0 ], v[ 1 ], v[ 2 ] );
}
void pglVertex2f ( GLfloat x, GLfloat y )
{
	rt_perf.c_verts++;
	rgUtilImScratchVertex( rg_instance, x, y, 0.0f );
}

void pglColor3d( GLdouble red, GLdouble green, GLdouble blue )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( ( float )red, ( float )green, ( float )blue, 1.0f ) );
}
void pglColor3dv( const GLdouble* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( ( float )v[ 0 ], ( float )v[ 1 ], ( float )v[ 2 ], 1.0f ) );
}
void pglColor3f( GLfloat red, GLfloat green, GLfloat blue )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( red, green, blue, 1.0f ) );
}
void pglColor3fv( const GLfloat* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( v[ 0 ], v[ 1 ], v[ 2 ], 1.0f ) );
}
void pglColor3ub( GLubyte red, GLubyte green, GLubyte blue )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorByte4D( red, green, blue, 255 ) );
}
void pglColor3ubv( const GLubyte* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorByte4D( v[ 0 ], v[ 1 ], v[ 2 ], 255 ) );
}
void pglColor4d( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( ( float )red, ( float )green, ( float )blue, ( float )alpha ) );
}
void pglColor4dv( const GLdouble* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( ( float )v[ 0 ], ( float )v[ 1 ], ( float )v[ 2 ], ( float )v[ 3 ] ) );
}
void pglColor4f( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( red, green, blue, alpha ) );
}
void pglColor4fv( const GLfloat* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorFloat4D( v[ 0 ], v[ 1 ], v[ 2 ], v[ 3 ] ) );
}
void pglColor4ub( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorByte4D( red, green, blue, alpha ) );
}
void pglColor4ubv( const GLubyte* v )
{
	rgUtilImScratchColor( rg_instance, rgUtilPackColorByte4D( v[ 0 ], v[ 1 ], v[ 2 ], v[ 3 ] ) );
}

RgInstance rg_instance = NULL;
rt_state_t rt_state     = { 0 };
rt_cvars_t rt_cvars     = { 0 };

static qboolean AreFloatsClose( const float a, const float b )
{
	const float eps = 0.001f;
	return fabsf( a - b ) < eps;
}

static qboolean AreTransformsClose( const RgTransform* a, const RgTransform* b )
{
	for( int i = 0; i < 3; i++ )
	{
		for( int j = 0; j < 4; j++ )
		{
			if( !AreFloatsClose( a->matrix[ i ][ j ], b->matrix[ i ][ j ] ))
			{
				return false;
			}
		}
	}

	return true;
}

#define MATRIX4_TO_RGTRANSFORM( m )                                             \
	{{                                                                          \
		{ ( m )[ 0 ][ 0 ], ( m )[ 0 ][ 1 ], ( m )[ 0 ][ 2 ], ( m )[ 0 ][ 3 ] }, \
		{ ( m )[ 1 ][ 0 ], ( m )[ 1 ][ 1 ], ( m )[ 1 ][ 2 ], ( m )[ 1 ][ 3 ] }, \
		{ ( m )[ 2 ][ 0 ], ( m )[ 2 ][ 1 ], ( m )[ 2 ][ 2 ], ( m )[ 2 ][ 3 ] }, \
	}}

static int Q_clamp_wassert( int x, int xmin, int xmax )
{
	if( x < xmin )
	{
		assert( 0 );
		return xmin;
	}
	if( x > xmax )
	{
		assert( 0 );
		return xmax;
	}
	return x;
}

static uint32_t hashStudioPrimitive( int bodypart, int submodel, int mesh, int weaponmodel, int glendIndex )
{
	// must be compact
	const uint32_t BODYPART_BITS = 5;
	const uint32_t SUBMODEL_BITS = 5;
	const uint32_t MESH_BITS     = 8;
	const uint32_t WEAPON_BITS   = 1;
	const uint32_t GLEND_BITS    = 32 - BODYPART_BITS - SUBMODEL_BITS - MESH_BITS - WEAPON_BITS;
	assert( BODYPART_BITS + SUBMODEL_BITS + MESH_BITS + WEAPON_BITS + GLEND_BITS == 32 );

	// must be same as engine limitations
	assert( ( 1 << BODYPART_BITS ) == MAXSTUDIOBODYPARTS ); // body parts per submodel
	assert( ( 1 << SUBMODEL_BITS ) == MAXSTUDIOMODELS );    // sub-models per model
	assert( ( 1 << MESH_BITS ) == MAXSTUDIOMESHES );        // max textures per model

	// must be within bounds
	bodypart    = Q_clamp_wassert( bodypart, 0, ( 1 << BODYPART_BITS ) - 1 );
	submodel    = Q_clamp_wassert( submodel, 0, ( 1 << SUBMODEL_BITS ) - 1 );
	mesh        = Q_clamp_wassert( mesh, 0, ( 1 << MESH_BITS ) - 1 );
	weaponmodel = Q_clamp_wassert( !!weaponmodel, 0, ( 1 << WEAPON_BITS ) - 1 );
	glendIndex  = Q_clamp_wassert( glendIndex, 0, ( 1 << GLEND_BITS ) - 1 );

	// combine
	return ( uint32_t )glendIndex << ( BODYPART_BITS + SUBMODEL_BITS + MESH_BITS + WEAPON_BITS ) |
		   ( uint32_t )weaponmodel << ( BODYPART_BITS + SUBMODEL_BITS + MESH_BITS ) |
		   ( uint32_t )mesh << ( BODYPART_BITS + SUBMODEL_BITS ) |
		   ( uint32_t )submodel << ( BODYPART_BITS ) |
		   ( uint32_t )bodypart;
}

static uint32_t HashCombine( uint32_t seed, uint32_t v )
{
	seed ^= v + 0x9e3779b9 + ( seed << 6 ) + ( seed >> 2 );
	return seed;
}

static uint32_t MakeTempEntityIndex( const cl_entity_t* ent )
{
	uint64_t iptr = ( uint64_t )RI.currententity / sizeof( cl_entity_t );

	return ( 1u << 30u ) | ( HashCombine( iptr >> 32ull, iptr & UINT32_MAX ) );
}

typedef enum
{
	RT_BATCH_TYPE_NONE,
	RT_BATCH_TYPE_2D,
	RT_BATCH_TYPE_RASTER,
	RT_BATCH_TYPE_STUDIO,
	RT_BATCH_TYPE_BRUSH,
} rt_batchtype_t;

static rt_batchtype_t GetGlBeginEndType( void )
{
	if( glState.in2DMode )
	{
		return RT_BATCH_TYPE_2D;
	}

	if( rt_state.curIsRasterized || rt_state.curIsSky )
	{
		return RT_BATCH_TYPE_RASTER;
	}

	if( RI.currententity && RI.currententity->index >= 0 )
	{
		if( RI.currentmodel )
		{
			if( rt_state.curStudioBodyPart >= 0 && rt_state.curStudioSubmodel >= 0 &&
				rt_state.curStudioMesh >= 0 && rt_state.curStudioGlend >= 0 )
			{
				return RT_BATCH_TYPE_STUDIO;
			}

			if( rt_state.curBrushSurface >= 0 )
			{
				return RT_BATCH_TYPE_BRUSH;
			}
		}
	}

	return RT_BATCH_TYPE_NONE;
}


typedef struct
{
	RgViewport viewport;
	float      view_projection[ 16 ];
} rt_2dstate_t;
static rt_2dstate_t rt_2dstate         = { 0 };
static rt_2dstate_t rt_2dstate_onbatch = { 0 };
static qboolean     rt_2dstate_changed = false;

static struct
{
	rt_batchtype_t           type;
	RgMeshInfo               mesh;
	RgMeshPrimitiveInfo      primitive;
	RgEditorInfo             additional;
} rt_batch = { 0 };

rt_perf_t rt_perf = { 0 };

static qboolean AreTransformsAlwaysIdentity( rt_batchtype_t type )
{
	switch( type )
	{
		case RT_BATCH_TYPE_NONE:
		case RT_BATCH_TYPE_2D:
		case RT_BATCH_TYPE_RASTER:
		case RT_BATCH_TYPE_STUDIO: return true;

		case RT_BATCH_TYPE_BRUSH: return RI.currentmodel == WORLDMODEL;

		default: assert( 0 ); return true;
	}
}

static qboolean AreViewParamsSame( rt_batchtype_t type )
{
	if( type == RT_BATCH_TYPE_2D )
	{
		if( rt_2dstate_changed )
		{
			return false;
		}
	}
	return true;
}

static qboolean AreMeshesSame( rt_batchtype_t    a_type,
							   const RgMeshInfo* a_mesh,
							   rt_batchtype_t    b_type,
							   const RgMeshInfo* b_mesh )
{
	if( a_type == RT_BATCH_TYPE_NONE || b_type == RT_BATCH_TYPE_NONE )
	{
		assert( a_mesh == NULL && b_mesh == NULL );
		return false;
	}

	if( a_type == b_type )
	{
		if( a_type != RT_BATCH_TYPE_2D )
		{
			assert( a_mesh != NULL && b_mesh != NULL );

			return a_mesh->uniqueObjectID == b_mesh->uniqueObjectID &&
				   a_mesh->pMeshName == b_mesh->pMeshName &&
				   a_mesh->isExportable == b_mesh->isExportable;
		}
		else
		{
			// should be &&, but &rt_batch is never NULL
			assert( a_mesh == NULL || b_mesh == NULL );
			return true;
		}
	}

	return false;
}

static qboolean AreAdditionalsSame( const RgEditorInfo* a, const RgEditorInfo* b )
{
	if( !a && !b )
	{
		return true;
	}

	if( a && b )
	{
		// layer1 is lightmap

		if( !a->layer1Exists && !b->layer1Exists )
		{
			return true;
		}

		if( a->layer1Exists && b->layer1Exists )
		{
			if( a->layer1.pTextureName == b->layer1.pTextureName )
			{
				return true;
			}
		}
	}

	return false;
}

static qboolean ArePrimitivesSame( rt_batchtype_t             a_type,
								   const RgMeshInfo*          a_mesh,
								   const RgMeshPrimitiveInfo* a_primitive,
								   rt_batchtype_t             b_type,
								   const RgMeshInfo*          b_mesh,
								   const RgMeshPrimitiveInfo* b_primitive )
{
	if( a_type == RT_BATCH_TYPE_NONE || b_type == RT_BATCH_TYPE_NONE )
	{
		return false;
	}
	assert( a_primitive && b_primitive );

	if( a_type == b_type )
	{
		if( AreMeshesSame( a_type, a_mesh, b_type, b_mesh ) )
		{
		if( a_primitive->flags == b_primitive->flags && a_primitive->color == b_primitive->color &&
			a_primitive->pTextureName == b_primitive->pTextureName &&
			AreFloatsClose( a_primitive->emissive, b_primitive->emissive ) &&
			AreAdditionalsSame( a_primitive->pEditorInfo, b_primitive->pEditorInfo ) )
			{
				assert( a_type == b_type );

				if( AreTransformsAlwaysIdentity( a_type ) ||
					AreTransformsClose( &a_mesh->transform, &b_mesh->transform ) )
				{
					if( AreViewParamsSame( a_type ) )
					{
						return true;
					}
				}
			}
		}
	}

	return false;
}


static void FlushBatch( void )
{
	if( rt_batch.type != RT_BATCH_TYPE_NONE )
	{
		rgUtilImScratchSetToPrimitive( rg_instance, &rt_batch.primitive );

		if( rt_batch.type != RT_BATCH_TYPE_2D )
		{
			rt_perf.c_uploads++;
			RgResult r = rgUploadMeshPrimitive( rg_instance, &rt_batch.mesh, &rt_batch.primitive );
			RG_CHECK( r );
		}
		else
		{
			rt_perf.c_uploads_nonworld++;
			RgResult r = rgUploadNonWorldPrimitive( rg_instance,
													&rt_batch.primitive,
													rt_2dstate_onbatch.view_projection,
													&rt_2dstate_onbatch.viewport );
			RG_CHECK( r );
		}
	}

	rgUtilImScratchClear( rg_instance );
}


static qboolean rt_raster_additive = false;
static qboolean rt_raster_blend    = false;
static qboolean rt_alphatest       = false;

static void TryBeginBatch_Finalize( rt_batchtype_t             newtype,
									const RgMeshInfo*          newmesh,
									const RgMeshPrimitiveInfo* newprimitive )
{
	static const RgMeshInfo          null_mesh = { 0 };
	static const RgMeshPrimitiveInfo null_prim = { 0 };
	assert( ( newtype != RT_BATCH_TYPE_NONE ) ||
			( newtype == RT_BATCH_TYPE_NONE && newmesh == NULL && newprimitive == NULL ) );

	if( !ArePrimitivesSame(
			rt_batch.type, &rt_batch.mesh, &rt_batch.primitive, newtype, newmesh, newprimitive ) )
	{
		FlushBatch();

		// start new
		{
			rt_batch.type      = newtype;
			rt_batch.mesh      = newmesh ? *newmesh : null_mesh;
			rt_batch.primitive = newprimitive ? *newprimitive : null_prim;
			{
				const RgEditorInfo* src =
					newprimitive && newprimitive->pEditorInfo ? newprimitive->pEditorInfo : NULL;
				// assign and relink
				static const RgEditorInfo        null_addt = { 0 };
				rt_batch.additional            = src ? *src : null_addt;
				rt_batch.primitive.pEditorInfo = src ? &rt_batch.additional : NULL;
			}

			if( rt_batch.type == RT_BATCH_TYPE_2D )
			{
				rt_2dstate_onbatch = rt_2dstate;
				rt_2dstate_changed = false;
			}
		}
	}
}

static void TryBeginBatch( RgUtilImScratchTopology glbegin_topology )
{
	rt_batchtype_t curtype = GetGlBeginEndType();

	if( curtype == RT_BATCH_TYPE_2D )
	{
		RgMeshPrimitiveInfo prim = {
			.pPrimitiveNameInMesh = NULL,
			.primitiveIndexInMesh = 0,
			.flags                = ( rt_raster_blend ? RG_MESH_PRIMITIVE_TRANSLUCENT : 0 ) |
									( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ),
			.pTextureName = rt_state.curTexture2DName,
			.textureFrame = 0,
			.color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
            .emissive     = rt_raster_blend && rt_raster_additive
                                ? RT_CVAR_TO_FLOAT( rt_emis_additive_dflt )
                                : 0.0f,
			.pEditorInfo  = NULL,
		};

		TryBeginBatch_Finalize( curtype, NULL, &prim );
	}
	else if( curtype == RT_BATCH_TYPE_RASTER )
	{
		RgMeshInfo mesh = {
			.uniqueObjectID = ( RI.currententity && RI.currententity->index > 0 )
                                ? ( uint32_t )RI.currententity->index
                                : ( RI.currententity ? MakeTempEntityIndex( RI.currententity ) : UINT32_MAX ),
			.pMeshName      = ( RI.currentmodel && RI.currentmodel->name )
                                ? RI.currentmodel->name
                                : NULL,
			.transform      = RG_TRANSFORM_IDENTITY,
			.isExportable   = false,
			.animationName  = NULL,
			.animationTime  = 0.0f,
		};

		RgMeshPrimitiveInfo prim = {
			.pPrimitiveNameInMesh = NULL,
			.primitiveIndexInMesh = 0,
			.flags                = ( rt_raster_blend ? RG_MESH_PRIMITIVE_TRANSLUCENT : 0 ) |
									( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |
									( rt_state.curIsSky ? RG_MESH_PRIMITIVE_SKY : 0 ),
			.pTextureName = rt_state.curTexture2DName,
			.textureFrame = 0,
			.color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
            .emissive     = ( rt_state.curIsBeam || ( rt_state.curTexture2DName && strstr( rt_state.curTexture2DName, "muzzleflash" ) != NULL ) )
                                ? 2.0f
                                : ( rt_raster_blend && rt_raster_additive
                                    ? RT_CVAR_TO_FLOAT( rt_emis_additive_dflt )
                                    : 0.0f ),
			.pEditorInfo  = NULL,
		};

		TryBeginBatch_Finalize( curtype, &mesh, &prim );
	}
	else if( curtype == RT_BATCH_TYPE_STUDIO )
	{
		qboolean isviewmodel    = ( RI.currententity == gEngfuncs.GetViewModel() );
		qboolean isplayerviewer = ( RI.currententity == gEngfuncs.GetLocalPlayer() &&
									!ENGINE_GET_PARM( PARM_THIRDPERSON ) );
		qboolean ishologram     = ( RI.currententity->curstate.renderfx == kRenderFxHologram );
		qboolean isfadeout      = ( RI.currententity->curstate.rendermode == kRenderTransTexture ||
							   RI.currententity->curstate.rendermode == kRenderTransColor );

		// look HL1RT_HACKS in hlsdk
		qboolean hasinvis = ( RI.currententity->curstate.renderfx == 63 );

		uint8_t alpha = ( uint8_t )bound( 0.0f, 255.0f * tr.blend, 255.0f );

		RgMeshInfo mesh = {
			.uniqueObjectID = RI.currententity->index,
			.pMeshName      = RI.currentmodel->name,
			.transform      = RG_TRANSFORM_IDENTITY,
			.isExportable   = false,
			.animationName  = NULL,
			.animationTime  = 0.0f,
		};

		// tempentity-s have entity index of 0, this fixes it
		//  but curTempEntityIndex is unstable between frames,
		// so motion vectors will be invalid
		if( mesh.uniqueObjectID == 0 )
		{
			mesh.uniqueObjectID = MakeTempEntityIndex( RI.currententity );
		}
		assert( mesh.uniqueObjectID != 0 );

		if( RI.currententity->player )
		{
			assert( ( mesh.uniqueObjectID & ( 1u << 31u ) ) == 0 );
			mesh.uniqueObjectID |= 1u << 31u;
		}

		RgMeshPrimitiveInfo prim = {
			.pPrimitiveNameInMesh = NULL,
			.primitiveIndexInMesh = hashStudioPrimitive( rt_state.curStudioBodyPart,
														 rt_state.curStudioSubmodel,
														 rt_state.curStudioMesh,
														 rt_state.curStudioWeaponModel,
														 rt_state.curStudioGlend ),
			.flags =
				( hasinvis ? RG_MESH_PRIMITIVE_GLASS | RG_MESH_PRIMITIVE_IGNORE_REFRACT_AFTER
						   : 0 ) |
				( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |
				( isviewmodel ? RG_MESH_PRIMITIVE_FIRST_PERSON
							  : ( isplayerviewer ? RG_MESH_PRIMITIVE_FIRST_PERSON_VIEWER : 0 ) ),
			.pTextureName = rt_state.curTexture2DName,
			.textureFrame = 0,
			.color        = rgUtilPackColorByte4D( 255, 255, 255, ishologram ? alpha : 255 ),
			.emissive     = ishologram ? RT_CVAR_TO_FLOAT( rt_emis_hologram ) : 0.0f,
			.pEditorInfo  = NULL,
		};

		if( RT_CVAR_TO_BOOL( rt_norms_studio ) )
        {
            prim.flags |= RG_MESH_PRIMITIVE_DONT_GENERATE_NORMALS;
        }

		TryBeginBatch_Finalize( curtype, &mesh, &prim );
	}
	else if( curtype == RT_BATCH_TYPE_BRUSH )
	{
		qboolean immovable = ( RI.currentmodel == WORLDMODEL ) ||
							 ( RI.currententity->curstate.movetype == MOVETYPE_NONE );

		if( RI.currententity->curstate.movetype == MOVETYPE_NONE )
		{
			// assuming that never changes
			assert( RI.currententity->prevstate.movetype == MOVETYPE_NONE );
		}

		RgMeshInfo mesh = {
			.uniqueObjectID = RI.currententity->index,
			.pMeshName      = RI.currentmodel->name,
			.transform      = MATRIX4_TO_RGTRANSFORM( RI.objectMatrix ),
			.isExportable   = immovable && !rt_state.curBrushSurfaceIsAnimated &&
							!rt_state.curBrushSurfaceIsWater &&
							!rt_state.curBrushSurfaceIsSky &&
							!rt_raster_blend,
			.animationName = NULL,
			.animationTime = 0.0f,
		};

		RgMeshPrimitiveInfo prim = {
			.pPrimitiveNameInMesh = rt_state.curTexture2DName, // NULL,
			.primitiveIndexInMesh = rt_state.curBrushSurface,
			.flags                = ( rt_alphatest ? RG_MESH_PRIMITIVE_ALPHA_TESTED : 0 ) |
									( rt_raster_blend ? RG_MESH_PRIMITIVE_TRANSLUCENT : 0 ) |
									( rt_state.curBrushSurfaceIsWater ? RG_MESH_PRIMITIVE_WATER : 0 ) |
									( rt_state.curBrushSurfaceIsSky ? RG_MESH_PRIMITIVE_SKY_VISIBILITY : 0 ),
			.pTextureName         = rt_state.curTexture2DName,
			.textureFrame         = 0,
			.color                = rgUtilPackColorByte4D( 255, 255, 255, 255 ),
			.emissive             = rt_raster_blend && rt_raster_additive
										? RT_CVAR_TO_FLOAT( rt_emis_additive_brush )
										: 0.0f,
			.pEditorInfo          = NULL,
		};

		RgEditorInfo additional = {
			.layer1Exists = false,
			.layer1       = { .pTexCoord    = NULL,
							  .pTextureName = rt_state.curLightmapTextureName,
							  .blend        = RG_TEXTURE_LAYER_BLEND_TYPE_SHADE,
							  .color        = rgUtilPackColorByte4D( 255, 255, 255, 255 ) },
		};

		prim.pEditorInfo = &additional;

        if( RT_CVAR_TO_BOOL( rt_norms_brush ) )
        {
            prim.flags |= RG_MESH_PRIMITIVE_DONT_GENERATE_NORMALS;
        }

		TryBeginBatch_Finalize( curtype, &mesh, &prim );
	}
	else
	{
		assert( curtype == RT_BATCH_TYPE_NONE );
		TryBeginBatch_Finalize( RT_BATCH_TYPE_NONE, NULL, NULL );
	}

	rgUtilImScratchStart( rg_instance, glbegin_topology );
}

void pglEnd( void )
{
	rt_perf.c_prims++;
	rgUtilImScratchEnd( rg_instance );
}

void RT_OnBeforeDrawFrame( void )
{
	// flush residue
	TryBeginBatch_Finalize( RT_BATCH_TYPE_NONE, NULL, NULL );
	rt_2dstate_changed = true;
}

void pglBindTexture( GLenum target, GLuint texture, const char* textureName )
{
	if( target == GL_TEXTURE_2D || target == GL_TEXTURE_RECTANGLE_EXT )
	{
		if( textureName && textureName[ 0 ] != '\0' )
		{
			rt_state.curTexture2DName = textureName;
		}
	}
}

void pglTexImage2D( GLenum        target,
					GLint         level,
					GLint         internalformat,
					GLsizei       width,
					GLsizei       height,
					GLint         border,
					GLenum        format,
					GLenum        type,
					const GLvoid* pixels )
{
	if( target == GL_TEXTURE_2D || target == GL_TEXTURE_RECTANGLE_EXT )
	{
		if( rt_state.curTexture2DName )
		{
			if( level == 0 && format == GL_RGBA && type == GL_UNSIGNED_BYTE && pixels )
			{
				RgOriginalTextureInfo info = {
					.pTextureName = rt_state.curTexture2DName,
					.pPixels      = pixels,
					.size         = { width, height },
				.filter       = ( rt_state.curTextureNearest || rt_state.curTextureIsHUD )
									? RG_SAMPLER_FILTER_NEAREST
									: rt_state.curTexturePreferLinear
										? RG_SAMPLER_FILTER_LINEAR
										: RG_SAMPLER_FILTER_AUTO,
					.addressModeU = rt_state.curTextureClamped ? RG_SAMPLER_ADDRESS_MODE_CLAMP
															   : RG_SAMPLER_ADDRESS_MODE_REPEAT,
					.addressModeV = rt_state.curTextureClamped ? RG_SAMPLER_ADDRESS_MODE_CLAMP
															   : RG_SAMPLER_ADDRESS_MODE_REPEAT,
				};

				RgResult r = rgProvideOriginalTexture( rg_instance, &info );
				RG_CHECK( r );
			}
		}
	}
}

void pglTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels )
{
	if( xoffset == 0 && yoffset == 0 )
	{
		pglTexImage2D( target, level, format, width, height, 0, format, type, pixels );
	}
}

void pglEnable( GLenum cap )
{
	switch( cap )
	{
		case GL_BLEND: rt_raster_blend = true; break;
		case GL_ALPHA_TEST: rt_alphatest = true; break;
		default: break;
	}
}

void pglDisable( GLenum cap )
{
	switch( cap )
	{
		case GL_BLEND: rt_raster_blend = false; break;
		case GL_ALPHA_TEST: rt_alphatest = false; break;
		default: break;
	}
}

void pglBlendFunc( GLenum sfactor, GLenum dfactor )
{
	rt_raster_additive = ( sfactor == GL_ONE || dfactor == GL_ONE );
}


void pglViewport( GLint x, GLint y, GLsizei width, GLsizei height )
{
	rt_2dstate.viewport.x      = ( float )x;
	rt_2dstate.viewport.y      = ( float )y;
	rt_2dstate.viewport.width  = ( float )width;
	rt_2dstate.viewport.height = ( float )height;

	rt_2dstate_changed = true;
}

void pglDepthRange( GLclampd zNear, GLclampd zFar )
{
	rt_2dstate.viewport.minDepth = ( float )zNear;
	rt_2dstate.viewport.maxDepth = ( float )zFar;

	rt_2dstate_changed = true;
}


static GLenum    rt_matrix_mode = 0;
static matrix4x4 rt_matrix_proj = { 0 };

void pglMatrixMode( GLenum mode )
{
	rt_matrix_mode = mode;
}

void pglLoadIdentity( void )
{
	if( rt_matrix_mode == GL_PROJECTION )
	{
		Matrix4x4_LoadIdentity( rt_matrix_proj );
		Matrix4x4_ToArrayFloatGL( rt_matrix_proj, rt_2dstate.view_projection );
		rt_2dstate_changed = true;
	}
}

void pglLoadMatrixd( const GLdouble* m )
{
	assert( 0 );
}

void pglLoadMatrixf( const GLfloat* m )
{
	if( rt_matrix_mode == GL_PROJECTION )
	{
		memcpy( rt_2dstate.view_projection, m, 16 * sizeof( float ) );
		rt_2dstate_changed = true;

		Matrix4x4_FromArrayFloatGL( rt_matrix_proj, m );
	}
}

void pglOrtho( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	// vulkan: swap Y
	{
		GLdouble temp = bottom;

		bottom = top;
		top    = temp;
	}

	if( rt_matrix_mode == GL_PROJECTION )
	{
		GLdouble tx = -( right + left ) / ( right - left );
		GLdouble ty = -( top + bottom ) / ( top - bottom );
		GLdouble tz = -( zFar + zNear ) / ( zFar - zNear );

		matrix4x4 ortho = {
			{ ( float )( 2.0 / ( right - left ) ), 0, 0, ( float )tx },
			{ 0, ( float )( 2.0 / ( top - bottom ) ), 0, ( float )ty },
			{ 0, 0, ( float )( -2.0 / ( zFar - zNear ) ), ( float )tz },
			{ 0, 0, 0, 1 },
		};

		matrix4x4 prev;
		Matrix4x4_Copy( prev, rt_matrix_proj );

		Matrix4x4_Concat( rt_matrix_proj, ortho, prev );

		Matrix4x4_ToArrayFloatGL( rt_matrix_proj, rt_2dstate.view_projection );
		rt_2dstate_changed = true;
	}
}


#undef EMPTY_LINKAGE
#undef EMPTY_FUNCTION
#endif // XASH_RAYTRACING




