/* Exercise the actual decoder against native flat-normal fallback cases. */
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef unsigned int uint;
typedef int qboolean;
enum { MAXLIGHTMAPS = 4 };
typedef struct { unsigned char r,g,b; } color24;
typedef struct { color24 *samples; unsigned char styles[4]; } msurface_t;
#define Q_max(a,b) ((a) > (b) ? (a) : (b))
#include "../../../src/cof/render/cof_lightmap.h"

int main(void)
{
    uint out[6] = {11,22,33,44,55,66};
    color24 samples[] = {{30,40,50}, {20,30,40}, {127,127,127}};
    msurface_t surface = {samples, {0,255,255,255}};
    assert(!CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==11 && out[1]==22 && out[2]==33);
    surface.styles[0]=61;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==30*256 && out[1]==40*256 && out[2]==50*256);
    surface.styles[1]=62; surface.styles[2]=63;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==30*256 && out[1]==40*256 && out[2]==50*256);
    samples[2].b=254;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==50*256 && out[1]==70*256 && out[2]==90*256);
    samples[2].b=0;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==10*256 && out[1]==10*256 && out[2]==10*256);
    samples[1]=(color24){60,80,100};
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==0 && out[1]==0 && out[2]==0);
    samples[0]=(color24){200,100,50}; samples[1]=samples[0]; samples[2].b=254;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==255*256 && out[1]==127*256 && out[2]==63*256);
    /* Styles need not appear in numerical order. */
    samples[0]=(color24){127,127,254}; samples[1]=(color24){20,30,40}; samples[2]=(color24){30,40,50};
    surface.styles[0]=63; surface.styles[1]=62; surface.styles[2]=61;
    assert(CofDirectionalLightmap(&surface,1,out));
    assert(out[0]==50*256 && out[1]==70*256 && out[2]==90*256);
    surface.samples=NULL;
    assert(!CofDirectionalLightmap(&surface,1,out));
    puts("PASS: native directional-lightmap default-gamma cases");
    return 0;
}
