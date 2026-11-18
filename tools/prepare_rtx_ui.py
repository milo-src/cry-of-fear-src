"""Route solid UI fills through a white material in the Vulkan bridge."""

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
