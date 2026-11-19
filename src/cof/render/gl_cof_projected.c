/* CoF projection receiver, derived from the native light contract.
 * Added after diffuse/lightmap passes; no lightmap samples or BSP subdivisions
 * participate in the projection. Original masks are read from the game mount.
 */
#include "gl_local.h"
#include "gl_cof_projected.h"
#include "cof_projected_shaders.h"

#if !defined(XASH_RAYTRACING) && !XASH_GLES
static GLhandleARB cofProgram;
static int cofMasks[2];
static qboolean cofAttempted, cofTested;
static unsigned int cofLogged;
static qboolean cofNormalLogged;
/* Bounded material cache, including missing images. Release owned map handles
 * at level changes; no repeated allocations or filesystem checks per frame. */
static struct { char material[17]; int map; qboolean known, owned; } cofNormals[MAX_TEXTURES];
static struct {
    GLint origin, forward, right, up, scale, radius, alpha, normal, tangent, bitangent, hasNormal;
} cofUniform;

static int CofNormalMap( const texture_t *texture, qboolean load )
{
    unsigned int hash = 2166136261u;
    for( int i = 0; i < 16 && texture->name[i]; ++i ) hash = (hash ^ (byte)Q_tolower(texture->name[i])) * 16777619u;
    for( int probe = 0; probe < MAX_TEXTURES; ++probe )
    {
        unsigned int index = (hash + probe) % MAX_TEXTURES;
        if( !cofNormals[index].known )
        {
            char path[64];
            if( !load ) return 0;
            cofNormals[index].known = true;
            memcpy(cofNormals[index].material,texture->name,16);
            cofNormals[index].material[16] = 0;
            Q_snprintf(path,sizeof(path),"gfx/bumpmaps/%s.tga",cofNormals[index].material);
            if( gEngfuncs.fsapi->FileExists(path,false) )
            {
                int existing = GL_FindTexture(path);
                cofNormals[index].map = GL_LoadTexture(path,NULL,0,TF_NORMALMAP);
                cofNormals[index].owned = !existing && cofNormals[index].map != 0;
            }
            return cofNormals[index].map;
        }
        if( !Q_strnicmp(cofNormals[index].material,texture->name,16) ) return cofNormals[index].map;
    }
    return 0;
}

static GLhandleARB CofCompile( GLenum type, const char *source )
{
    GLint ok = 0;
    GLhandleARB shader = pglCreateShaderObjectARB( type );
    pglShaderSourceARB( shader, 1, &source, NULL );
    pglCompileShaderARB( shader );
    pglGetObjectParameterivARB( shader, GL_OBJECT_COMPILE_STATUS_ARB, &ok );
    if( !ok )
    {
        char log[2048];
        GLsizei size;
        pglGetInfoLogARB( shader, sizeof(log), &size, log );
        gEngfuncs.Con_Printf( "COF_PROJECTED_SHADER FAIL compile %s\n", log );
        pglDeleteObjectARB( shader );
        return 0;
    }
    return shader;
}

static qboolean CofProjectedInit( void )
{
    GLhandleARB vertex, fragment;
    GLint ok = 0;
    if( cofAttempted ) return cofProgram != 0;
    cofAttempted = true;
    gEngfuncs.Cvar_Get( "cof_projected_test", "0", 0, "Private FBO projected-light assertions" );
    gEngfuncs.Cvar_Get( "gl_bump", "1", FCVAR_ARCHIVE, "Use authored CoF normal maps for projected lights" );
    if( !GL_Support( GL_SHADER_OBJECTS_EXT ) || !GL_Support( GL_SHADER_GLSL100_EXT ) ||
        !GL_Support( GL_ARB_MULTITEXTURE ))
    {
        gEngfuncs.Con_Printf( "COF_PROJECTED_SHADER FAIL GLSL unavailable\n" );
        return false;
    }
    vertex = CofCompile( GL_VERTEX_SHADER_ARB, cof_projected_vert );
    fragment = CofCompile( GL_FRAGMENT_SHADER_ARB, cof_projected_frag );
    if( !vertex || !fragment )
    {
        if( vertex ) pglDeleteObjectARB( vertex );
        if( fragment ) pglDeleteObjectARB( fragment );
        return false;
    }
    cofProgram = pglCreateProgramObjectARB();
    pglAttachObjectARB( cofProgram, vertex );
    pglAttachObjectARB( cofProgram, fragment );
    pglLinkProgramARB( cofProgram );
    pglDeleteObjectARB( vertex );
    pglDeleteObjectARB( fragment );
    pglGetObjectParameterivARB( cofProgram, GL_OBJECT_LINK_STATUS_ARB, &ok );
    if( !ok )
    {
        char log[2048];
        GLsizei size;
        pglGetInfoLogARB( cofProgram, sizeof(log), &size, log );
        gEngfuncs.Con_Printf( "COF_PROJECTED_SHADER FAIL link %s\n", log );
        pglDeleteObjectARB( cofProgram );
        cofProgram = 0;
        return false;
    }
#define COF_UNIFORM(member, name) cofUniform.member = pglGetUniformLocationARB( cofProgram, name )
    COF_UNIFORM(origin, "lightOrigin"); COF_UNIFORM(forward, "lightForward");
    COF_UNIFORM(right, "lightRight"); COF_UNIFORM(up, "lightUp");
    COF_UNIFORM(scale, "projectionScale");
    COF_UNIFORM(radius, "lightRadius"); COF_UNIFORM(alpha, "alphaCutoff");
    COF_UNIFORM(normal, "surfaceNormal");
    COF_UNIFORM(tangent, "surfaceTangent"); COF_UNIFORM(bitangent, "surfaceBitangent");
    COF_UNIFORM(hasNormal, "hasNormalMap");
#undef COF_UNIFORM
    cofMasks[0] = GL_LoadTexture( "gfx/flashlight.tga", NULL, 0, TF_CLAMP|TF_NOMIPMAP );
    cofMasks[1] = GL_LoadTexture( "gfx/flashlight2.tga", NULL, 0, TF_CLAMP|TF_NOMIPMAP );
    if( !cofMasks[0] || !cofMasks[1] )
    {
        gEngfuncs.Con_Printf( "COF_PROJECTED_SHADER FAIL native masks unavailable\n" );
        pglDeleteObjectARB( cofProgram ); cofProgram = 0;
        return false;
    }
    gEngfuncs.Con_Printf( "COF_PROJECTED_SHADER PASS GLSL120 native_masks=2\n" );
    return true;
}

static void CofUseProgram( void )
{
    pglUseProgramObjectARB( cofProgram );
    pglUniform1iARB( pglGetUniformLocationARB(cofProgram, "diffuseMap"), 0 );
    pglUniform1iARB( pglGetUniformLocationARB(cofProgram, "projectionMap"), 1 );
    pglUniform1iARB( pglGetUniformLocationARB(cofProgram, "normalMap"), 2 );
}

static void CofRawTexture( int unit, GLuint texture )
{
    /* Raw GL state is bracketed by Push/PopAttrib. Do not touch glState caches. */
    pglActiveTextureARB( GL_TEXTURE0_ARB + unit );
    pglBindTexture( GL_TEXTURE_2D, texture );
}

static void CofLightUniforms( const dlight_t *light )
{
    vec3_t origin, forward, right, up;
    if( tr.modelviewIdentity )
    {
        VectorCopy( light->origin, origin );
        VectorCopy( light->cof_forward, forward );
        VectorCopy( light->cof_right, right );
        VectorCopy( light->cof_up, up );
    }
    else
    {
        Matrix4x4_VectorITransform( RI.objectMatrix, light->origin, origin );
        Matrix4x4_VectorIRotate( RI.objectMatrix, light->cof_forward, forward );
        Matrix4x4_VectorIRotate( RI.objectMatrix, light->cof_right, right );
        Matrix4x4_VectorIRotate( RI.objectMatrix, light->cof_up, up );
    }
    pglUniform3fvARB( cofUniform.origin, 1, origin );
    pglUniform3fvARB( cofUniform.forward, 1, forward );
    pglUniform3fvARB( cofUniform.right, 1, right );
    pglUniform3fvARB( cofUniform.up, 1, up );
    pglUniform2fARB( cofUniform.scale,
        0.5f / tanf(bound(1.0f, light->cof_fov[0], 170.0f) * M_PI_F / 360.0f),
        0.5f / tanf(bound(1.0f, light->cof_fov[1], 170.0f) * M_PI_F / 360.0f) );
    pglUniform1fARB( cofUniform.radius, light->radius );
}

/* Runs inside the isolated game context only when explicitly enabled by smoke.
 * No default framebuffer reads, screenshots, window activation or OS input.
 * Dynamically resolved FBO calls are private: this renderer did not load them.
 */
static void CofReadbackTest( void )
{
    typedef void (APIENTRY *gen_fbo_t)(GLsizei, GLuint*);
    typedef void (APIENTRY *bind_fbo_t)(GLenum, GLuint);
    typedef void (APIENTRY *attach_fbo_t)(GLenum, GLenum, GLenum, GLuint, GLint);
    typedef GLenum (APIENTRY *check_fbo_t)(GLenum);
    typedef void (APIENTRY *delete_fbo_t)(GLsizei, const GLuint*);
    gen_fbo_t gen = (gen_fbo_t)gEngfuncs.GL_GetProcAddress("glGenFramebuffers");
    bind_fbo_t bind = (bind_fbo_t)gEngfuncs.GL_GetProcAddress("glBindFramebuffer");
    attach_fbo_t attach = (attach_fbo_t)gEngfuncs.GL_GetProcAddress("glFramebufferTexture2D");
    check_fbo_t check = (check_fbo_t)gEngfuncs.GL_GetProcAddress("glCheckFramebufferStatus");
    delete_fbo_t destroy = (delete_fbo_t)gEngfuncs.GL_GetProcAddress("glDeleteFramebuffers");
    GLuint fbo = 0, textures[4] = {0, 0, 0, 0};
    GLint oldFbo, oldProgram, oldMode, oldPack;
    int failures = 0;
    const byte white[4] = {255,255,255,255}, gray[4] = {128,128,128,255}, black[4] = {0,0,0,255}, hole[4] = {255,255,255,0};
    if( !gen || !bind || !attach || !check || !destroy )
    {
        gEngfuncs.Con_Printf("COF_PROJECTED_READBACK_COMPLETE failures=1 reason=no_FBO\n");
        return;
    }
    pglGetIntegerv(0x8CA6, &oldFbo); /* GL_FRAMEBUFFER_BINDING */
    pglGetIntegerv(0x8B8D, &oldProgram); /* GL_CURRENT_PROGRAM */
    pglGetIntegerv(GL_MATRIX_MODE, &oldMode);
    pglGetIntegerv(GL_PACK_ALIGNMENT, &oldPack);
    pglPushAttrib(GL_ALL_ATTRIB_BITS);
    pglGenTextures(4, textures);
    for( int i = 0; i < 4; ++i )
    {
        CofRawTexture(0, textures[i]);
        pglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        pglTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        pglTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, i ? 1 : 8, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, i ? white : NULL);
    }
    gen(1, &fbo); bind(0x8D40, fbo); /* GL_FRAMEBUFFER */
    attach(0x8D40, 0x8CE0, GL_TEXTURE_2D, textures[0], 0);
    if( check(0x8D40) != 0x8CD5 ) failures++;
    else
    {
        pglDrawBuffer(0x8CE0); pglReadBuffer(0x8CE0);
        pglViewport(0,0,8,1);
        pglDisable(GL_DEPTH_TEST); pglDisable(GL_ALPHA_TEST); pglDisable(GL_BLEND);
        pglDisable(GL_CULL_FACE); pglDisable(GL_FOG); pglDisable(GL_SCISSOR_TEST);
        pglColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
        pglMatrixMode(GL_PROJECTION); pglPushMatrix(); pglLoadIdentity();
        pglMatrixMode(GL_MODELVIEW); pglPushMatrix(); pglLoadIdentity();
        CofUseProgram();
        pglUniform3fARB(cofUniform.forward,0,0,1);
        pglUniform3fARB(cofUniform.right,1,0,0);
        pglUniform3fARB(cofUniform.up,0,1,0);
        pglUniform2fARB(cofUniform.scale,.5f,.5f);
        pglUniform1fARB(cofUniform.radius,4);
        pglUniform1fARB(cofUniform.alpha,.5f);
        pglUniform3fARB(cofUniform.normal,0,0,-1);
        pglPixelStorei(GL_PACK_ALIGNMENT,1);
        for( int test = 0; test < 15; ++test )
        {
            byte pixels[8*4];
            const char *names[] = {"quadratic_depth", "behind", "range", "alpha_hole", "mask_black", "polygon_seam", "light_backface", "outside_projection", "phone_cookie", "torch_cookie", "grazing_incidence", "cookie_vertical_axis", "normal_tilt", "normal_length_preserved", "native_skew_basis"};
            qboolean pass = true;
            int expectedRGB[3] = {0,0,0};
            int width = test == 5 ? 8 : 1;
            pglViewport(0,0,width,1);
            pglUniform3fARB(cofUniform.normal,0,0,test == 6 ? 1.0f : -1.0f);
            pglUniform3fARB(cofUniform.tangent,1,0,0);
            pglUniform3fARB(cofUniform.bitangent,0,1,0);
            pglUniform1iARB(cofUniform.hasNormal,test == 12 || test == 13);
            CofRawTexture(2,textures[3]);
            if( test == 12 || test == 13 )
            {
                const byte normals[2][4] = {{238,128,191,255},{128,128,159,255}};
                pglTexSubImage2D(GL_TEXTURE_2D,0,0,0,1,1,GL_RGBA,GL_UNSIGNED_BYTE,normals[test-12]);
                expectedRGB[0] = expectedRGB[1] = expectedRGB[2] = test == 12 ? 96 : 47;
            }
            if( test == 14 )
            {
                pglUniform3fARB(cofUniform.tangent,.70710678f,0,.70710678f);
                expectedRGB[0] = expectedRGB[1] = expectedRGB[2] = 157;
            }
            if( test == 10 )
            {
                pglUniform3fARB(cofUniform.normal,.8660254f,0,-.5f);
                pglUniform3fARB(cofUniform.tangent,.5f,0,.8660254f);
                expectedRGB[0] = expectedRGB[1] = expectedRGB[2] = 96;
            }
            if( test == 0 || test == 5 )
            { expectedRGB[0] = expectedRGB[1] = expectedRGB[2] = 192; }
            CofRawTexture(0, textures[1]);
            pglTexSubImage2D(GL_TEXTURE_2D,0,0,0,1,1,GL_RGBA,GL_UNSIGNED_BYTE,test == 3 ? hole : gray);
            CofRawTexture(1, textures[2]);
            pglTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,1,1,0,GL_RGBA,GL_UNSIGNED_BYTE,test == 4 ? black : white);
            if( test == 8 || test == 9 )
            {
                gl_texture_t *mask = R_GetTexture(cofMasks[test-8]);
                byte *texels = Mem_Malloc(r_temppool,mask->width*mask->height*4);
                CofRawTexture(1,mask->texnum);
                pglGetTexImage(GL_TEXTURE_2D,0,GL_RGBA,GL_UNSIGNED_BYTE,texels);
                for( int c = 0; c < 3; ++c )
                {
                    int sum = 0;
                    for( int y = mask->height/2-1; y <= mask->height/2; ++y )
                        for( int x = mask->width/2-1; x <= mask->width/2; ++x )
                            sum += texels[(y*mask->width+x)*4+c];
                    expectedRGB[c] = bound(0,(int)(sum*.25f*.75f*(256.0f/255.0f)+.5f),255);
                }
                Mem_Free(texels);
            }
            if( test == 11 )
            {
                const byte orientationMask[16] = {255,0,0,255,255,0,0,255,0,255,0,255,0,255,0,255};
                pglTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,2,2,0,GL_RGBA,GL_UNSIGNED_BYTE,orientationMask);
                expectedRGB[0] = 172; // normal/light cosine=2/sqrt(5), negative T chooses red row.
            }
            pglUniform3fARB(cofUniform.origin,test == 7 ? 4.0f : 0.0f,test == 11 ? -1.0f : 0.0f,test == 1 ? 2.0f : test == 2 ? -5.0f : -2.0f);
            pglClearColor(0,0,0,0); pglClear(GL_COLOR_BUFFER_BIT);
            /* Two coplanar independently submitted surfaces meet at x=0. */
            for( int half = 0; half < 2; ++half )
            {
                float x = half ? 0.0f : -1.0f;
                pglBegin(GL_QUADS);
                pglTexCoord2f(.5f,.5f); pglVertex3f(x,-1,0); pglVertex3f(x+1,-1,0);
                pglVertex3f(x+1,1,0); pglVertex3f(x,1,0);
                pglEnd();
            }
            pglReadPixels(0,0,width,1,GL_RGBA,GL_UNSIGNED_BYTE,pixels);
            for( int x = 0; x < width; ++x )
                for( int c = 0; c < 3; ++c )
                {
                    int expected = expectedRGB[c];
                    if( test == 5 )
                    {
                        float rayX = 2.0f*((float)x+.5f)/8.0f-1.0f;
                        float incidence = 2.0f/sqrtf(4.0f+rayX*rayX);
                        expected = (int)(256*.75f*incidence+.5f);
                    }
                    if( abs((int)pixels[x*4+c] - expected) > 2 ) pass = false;
                }
            if( !pass ) failures++;
            gEngfuncs.Con_Printf("COF_PROJECTED_READBACK %s %s rgb=%d,%d,%d\n", pass ? "PASS" : "FAIL", names[test],pixels[0],pixels[1],pixels[2]);
        }
        pglMatrixMode(GL_MODELVIEW); pglPopMatrix();
        pglMatrixMode(GL_PROJECTION); pglPopMatrix();
    }
    pglUseProgramObjectARB(oldProgram);
    bind(0x8D40,oldFbo); destroy(1,&fbo);
    pglDeleteTextures(4,textures);
    pglPixelStorei(GL_PACK_ALIGNMENT,oldPack);
    pglPopAttrib(); pglMatrixMode(oldMode);
    gEngfuncs.Con_Printf("COF_PROJECTED_READBACK_COMPLETE failures=%d\n",failures);
}

void CofProjectedDrawModel( model_t *model, qboolean world,
    texture_t *(*textureForSurface)( msurface_t * ))
{
    GLint oldProgram;
    qboolean active = false;
    qboolean bump;
    if( !world && RI.currententity->curstate.rendermode != kRenderNormal &&
        RI.currententity->curstate.rendermode != kRenderTransAlpha ) return;
    for( int i = 0; i < MAX_DLIGHTS; ++i )
        if( gp_dlights[i].cof_kind && gp_dlights[i].radius > 0 && gp_dlights[i].die >= gp_cl->time ) active = true;
    if( !active || !CofProjectedInit() ) return;
    bump = gEngfuncs.pfnGetCvarFloat("gl_bump") != 0;
    if( bump )
        for( int j = 0; j < model->nummodelsurfaces; ++j )
        {
            msurface_t *surface = &model->surfaces[model->firstmodelsurface+j];
            if( surface->texinfo && surface->polys && !(surface->flags & (SURF_DRAWSKY|SURF_DRAWTURB)) &&
                (!world || surface->visframe == tr.framecount) )
                CofNormalMap(textureForSurface(surface),true);
        }
    if( !cofTested && (getenv("COF_PROJECTEDTEST") || gEngfuncs.pfnGetCvarFloat("cof_projected_test") > 0) )
    {
        cofTested = true;
        CofReadbackTest();
    }
    pglGetIntegerv(0x8B8D,&oldProgram);
    pglPushAttrib(GL_ALL_ATTRIB_BITS);
    pglEnable(GL_DEPTH_TEST); pglDepthFunc(GL_EQUAL); pglDepthMask(GL_FALSE);
    pglDisable(GL_ALPHA_TEST); pglDisable(GL_FOG); pglDisable(GL_CULL_FACE);
    pglEnable(GL_BLEND); pglBlendFunc(GL_ONE,GL_ONE);
    CofUseProgram();
    for( int i = 0; i < MAX_DLIGHTS; ++i )
    {
        const dlight_t *light = &gp_dlights[i];
        int faces = 0;
        unsigned int mark;
        if( light->cof_kind < 1 || light->cof_kind > 3 || light->radius <= 0 || light->die < gp_cl->time ) continue;
        CofLightUniforms(light);
        CofRawTexture(1, R_GetTexture(cofMasks[light->cof_kind == 1 ? 0 : 1])->texnum);
        for( int j = 0; j < model->nummodelsurfaces; ++j )
        {
            msurface_t *surface = &model->surfaces[model->firstmodelsurface+j];
            texture_t *texture;
            if( world && surface->visframe != tr.framecount ) continue;
            if( surface->flags & (SURF_DRAWSKY|SURF_DRAWTURB) ) continue;
            if( !surface->polys || !surface->texinfo ) continue;
            texture = textureForSurface(surface);
            {
                vec3_t normal, tangent, bitangent;
                VectorScale(surface->plane->normal,
                    FBitSet(surface->flags,SURF_PLANEBACK) ? -1.0f : 1.0f, normal);
                pglUniform3fvARB(cofUniform.normal,1,normal);
                VectorNormalize2(surface->texinfo->vecs[0],tangent);
                VectorNormalize2(surface->texinfo->vecs[1],bitangent);
                pglUniform3fvARB(cofUniform.tangent,1,tangent);
                pglUniform3fvARB(cofUniform.bitangent,1,bitangent);
            }
            {
                int normalMap = bump ? CofNormalMap(texture,false) : 0;
                pglUniform1iARB(cofUniform.hasNormal,normalMap != 0);
                CofRawTexture(2,R_GetTexture(normalMap ? normalMap : tr.whiteTexture)->texnum);
                if( normalMap && !cofNormalLogged )
                {
                    cofNormalLogged = true;
                    gEngfuncs.Con_Printf("COF_PROJECTED_NORMALMAP material=%.16s world=%d\n",texture->name,world);
                }
            }
            CofRawTexture(0,R_GetTexture(texture->gl_texturenum)->texnum);
            pglUniform1fARB(cofUniform.alpha,texture->name[0] == '{' ||
                (!world && RI.currententity->curstate.rendermode == kRenderTransAlpha) ? DEFAULT_ALPHATEST : -1.0f);
            for( glpoly2_t *poly = surface->polys; poly; poly = poly->next )
            {
                pglBegin(GL_POLYGON);
                for( int v = 0; v < poly->numverts; ++v )
                {
                    pglTexCoord2fv(&poly->verts[v][3]);
                    pglVertex3fv(poly->verts[v]);
                }
                pglEnd();
                faces++;
            }
        }
        mark = 1u << (light->cof_kind + (world ? 4 : 0));
        if( faces && !(cofLogged & mark) )
        {
            cofLogged |= mark;
            gEngfuncs.Con_Printf("COF_PROJECTED_GEOMETRY kind=%d faces=%d world=%d\n",light->cof_kind,faces,world);
        }
    }
    pglUseProgramObjectARB(oldProgram);
    pglPopAttrib();
}

void CofProjectedShutdown( void )
{
    if( cofProgram ) pglDeleteObjectARB(cofProgram);
    /* Texture manager owns the loaded mask handles and frees them immediately after us. */
    cofProgram = 0; cofMasks[0] = cofMasks[1] = 0;
    cofAttempted = cofTested = false; cofLogged = 0;
    cofNormalLogged = false;
    memset(cofNormals,0,sizeof(cofNormals));
}

void CofProjectedNewMap( void )
{
    for( int i = 0; i < MAX_TEXTURES; ++i )
        if( cofNormals[i].map && cofNormals[i].owned )
        {
            char path[64];
            Q_snprintf(path,sizeof(path),"gfx/bumpmaps/%s.tga",cofNormals[i].material);
            /* Do not delete a borrowed handle or a slot recycled by another owner. */
            if( GL_FindTexture(path) == cofNormals[i].map ) GL_FreeTexture(cofNormals[i].map);
        }
    memset(cofNormals,0,sizeof(cofNormals));
    cofNormalLogged = false; cofLogged = 0;
}
#else
void CofProjectedDrawModel( model_t *model, qboolean world,
    texture_t *(*textureForSurface)( msurface_t * )) { (void)model; (void)world; (void)textureForSurface; }
void CofProjectedShutdown( void ) {}
void CofProjectedNewMap( void ) {}
#endif
