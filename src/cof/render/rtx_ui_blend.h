/* Compatibility for the legacy menu's translucent trails on its dark backdrop.
 * GoldSrc blends display-encoded colors; RTGL blends linear sRGB samples.
 * Precondition source RGB so its contribution over black is the same:
 *   linear(newRGB) * alpha = linear(originalRGB * alpha).
 * Preserve coverage, opaque lettering, hover colors, and all source files.
 * This is a dark-backdrop adaptation, not a general gamma-space compositor:
 * the destination contribution still uses RTGL's normal linear blending.
 */
#ifndef COF_RTX_UI_BLEND_H
#define COF_RTX_UI_BLEND_H
#include <math.h>
#include <stddef.h>
#include <string.h>

static int CofRTIsMenuLogo(const char *name)
{
    if (!name) return 0;
    if (!strncmp(name,"#HUD/",5)) name+=5;
    return !strcmp(name,"gfx/vgui/menu_logo.tga");
}

static int CofRTIsMenuButton(const char *name)
{
    static const char *buttons[]={"newgame","loadgame","customc","jserver",
        "hserver","language","unlockables","extras","options","quit"};
    if (!name) return 0;
    if (!strncmp(name,"#HUD/",5)) name+=5;
    if (strncmp(name,"gfx/vgui/menu/",14)) return 0;
    name+=14;
    for (size_t i=0;i<sizeof(buttons)/sizeof(buttons[0]);++i) {
        const size_t length=strlen(buttons[i]);
        if (!strncmp(name,buttons[i],length) &&
            (!strcmp(name+length,".tga") || !strcmp(name+length,"_mo.tga"))) return 1;
    }
    return 0;
}
static double CofRTDecodeSRGB(double value)
{
    return value<=.04045 ? value/12.92 : pow((value+.055)/1.055,2.4);
}
static double CofRTEncodeSRGB(double value)
{
    return value<=.0031308 ? value*12.92 : 1.055*pow(value,1./2.4)-.055;
}
/* TriangleAPI folds the logo's animated opacity into vertex RGB. RTGL
 * multiplies those values in linear space, so decode that modulation too.
 * Exact for white texels; a dark-backdrop approximation for the grey trails.
 * Keep the original 0..50 VGUI transparency animation in game_menu.cpp.
 */
static float CofRTLogoModulation(float value)
{
    if (value<=0) return 0;
    if (value>=1) return 1;
    return (float)CofRTDecodeSRGB(value);
}
static void CofRTMenuBlendPixels(unsigned char *out,const unsigned char *in,size_t count)
{
    static unsigned char lut[256][256];
    static int initialized;
    if (!initialized) {
        for (int a=0;a<256;++a) for (int c=0;c<256;++c) {
            const double alpha=a/255.;
            lut[a][c]=a==0 || a==255 ? (unsigned char)c : (unsigned char)(
                255*CofRTEncodeSRGB(CofRTDecodeSRGB(c/255.*alpha)/alpha)+.5);
        }
        initialized=1;
    }
    for (size_t i=0;i<count;++i) {
        const unsigned char a=in[i*4+3];
        for (int c=0;c<3;++c) out[i*4+c]=lut[a][in[i*4+c]];
        out[i*4+3]=a;
    }
}
#endif
