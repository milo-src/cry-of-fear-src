"""Adapt solid UI fills and legacy menu blending in the Vulkan bridge."""
from pathlib import Path
import shutil

def prepare(target):
    path = target / 'ref/gl/gl_context.c'
    text = path.read_text()
    start = text.index('static void CL_FillRGBA(')
    end = text.index('\nstatic ', start + 1)
    part = text[start:end]
    anchor = '\tpglDisable( GL_TEXTURE_2D );'
    if part.count(anchor) != 1: raise ValueError('RTX solid UI fill hook changed')
    # Do not emulate GL texture enable state globally: cleanup disables other
    # texture units and can turn the next HUD/font draw into a solid rectangle.
    part = part.replace(anchor,
        '\tconst int previousTexture = glState.currentTexturesIndex[0];\n'
        '\tconst int previousUnit = glState.activeTMU;\n'
        '\tGL_Bind( XASH_TEXTURE0, tr.whiteTexture );\n' + anchor)
    anchor = '\tpglDisable( GL_BLEND );'
    if part.count(anchor) != 1: raise ValueError('RTX solid UI restore hook changed')
    part = part.replace(anchor, anchor + '\n'
        '\tGL_Bind( XASH_TEXTURE0, previousTexture );\n'
        '\tGL_SelectTexture( previousUnit );')
    text = text[:start] + part + text[end:]
    path.write_text(text)
    # Only the ten main-menu buttons, including their hover images. The logo,
    # fonts, HUD sprites, solid VGUI fills and scene textures retain their paths.
    path=target/'ref/gl/gl_opengl.c'
    text=path.read_text()
    anchor='void pglTexImage2D( GLenum'
    if text.count(anchor)!=1: raise ValueError('RTX UI texture hook changed')
    text=text.replace(anchor,'#include "rtx_ui_blend.h"\n\n'+anchor)
    anchor='\t\t\t\tRgResult r = rgProvideOriginalTexture( rg_instance, &info );'
    if text.count(anchor)!=1: raise ValueError('RTX UI upload hook changed')
    text=text.replace(anchor,'''                unsigned char *cofMenuPixels=NULL;
                if (width>0 && height>0 && width<=4096 && height<=4096 &&
                    CofRTIsMenuButton(info.pTextureName)) {
                    const size_t count=(size_t)width*(size_t)height;
                    cofMenuPixels=malloc(count*4);
                    if (cofMenuPixels) {
                        CofRTMenuBlendPixels(cofMenuPixels,pixels,count);
                        info.pPixels=cofMenuPixels;
                        gEngfuncs.Con_DPrintf("COF_RTX_MENU_BLEND %s %dx%d\\n",info.pTextureName,width,height);
                    }
                }
'''+anchor+'\n                free(cofMenuPixels);')
    path.write_text(text)
    shutil.copy2(Path(__file__).resolve().parents[1]/'src/cof/render/rtx_ui_blend.h',
                 target/'ref/gl/rtx_ui_blend.h')
