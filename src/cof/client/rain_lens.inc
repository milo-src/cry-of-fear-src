// Optional RTX lens droplets, generated in code. This is a new visual effect,
// not a claim about the original CoF renderer. No sprites or game art replaced.
#include "ui_draw.h"
#include <cstring>
#include <cstdlib>
extern bool CofGameMenuWorld();
extern bool CofGameMenuVisible();
extern bool CofInventoryVisible();
namespace {
struct LensDrop { float x,y,width,age,life,speed,phase; };
LensDrop lensDrops[28];
int lensCount;
float lensCredit, rainExposure, rainTarget;
double nextShelterCheck;
unsigned lensRandom=0x734ba621u;
cvar_t *lensEnabled;
bool lensRTX, lensReported;
float LensRandom() {
    lensRandom^=lensRandom<<13; lensRandom^=lensRandom>>17; lensRandom^=lensRandom<<5;
    return float(lensRandom&0xffffff)/16777216.f;
}
void ResetRainLens() {
    lensCount=0; lensCredit=rainExposure=rainTarget=0; nextShelterCheck=0;
    lensReported=false;
    if (lensEnabled) gEngfuncs.Cvar_SetValue("cof_rain_exposure",0);
}
void UpdateRainLens(const ref_params_s* view,float dt) {
    const CofRainState& rain=CofGraphicsRain();
    if (!lensRTX || !enabled || enabled->value==0 || CofGameMenuWorld() ||
        view->waterlevel>=3 || view->intermission || view->spectator) {
        ResetRainLens(); return;
    }
    // Trace only five times per second, from the eye towards the precipitation.
    // A roof blocks new drops, a sky boundary doesn't. Check along the wind.
    if (view->time>=nextShelterCheck) {
        nextShelterCheck=view->time+.2;
        rainTarget=0;
        if (rain.drips>0 && rain.distance>0 && rain.mode==0 && rain.height>eye.z) {
            const float height=rain.height-eye.z;
            Vector start=eye, end=eye+Vector(-rain.windX*height/900.f,-rain.windY*height/900.f,height);
            auto* ev=gEngfuncs.pEventAPI;
            ev->EV_SetUpPlayerPrediction(0,0); ev->EV_PushPMStates(); ev->EV_SetTraceHull(2);
            pmtrace_t trace={}; ev->EV_PlayerTrace(start,end,1,-1,&trace);
            const char* texture=ev->EV_TraceTexture(trace.ent,start,end);
            const bool sky=texture && !std::strncmp(texture,"sky",3);
            if (!trace.startsolid && !trace.allsolid && (trace.fraction>=.999f || sky))
                rainTarget=std::fmin(1.f,float(rain.drips)/1000.f);
            ev->EV_PopPMStates();
        }
    }
    // Smooth transitions into shelter without retaining stale light history.
    rainExposure+=(rainTarget-rainExposure)*(1.f-std::exp(-dt*2.f));
    gEngfuncs.Cvar_SetValue("cof_rain_exposure",rainExposure);
    if (!lensEnabled || lensEnabled->value<=0) { lensCount=0; lensCredit=0; return; }
    for (int i=0;i<lensCount;) {
        LensDrop& d=lensDrops[i]; d.age+=dt;
        d.y+=dt*(d.speed+.004f*d.age);
        d.x+=dt*(.003f*std::sin(d.phase+d.age*1.7f)+rain.windX*.00001f);
        if (d.age>=d.life || d.y>1.08f) lensDrops[i]=lensDrops[--lensCount]; else ++i;
    }
    // Stop emission immediately under cover; existing drops drain naturally.
    lensCredit+=dt*rainTarget*3.5f;
    while (lensCredit>=1) {
        lensCredit-=1;
        if (lensCount>=28) continue;
        LensDrop& d=lensDrops[lensCount++];
        d.x=.025f+.95f*LensRandom(); d.y=-.03f+.8f*LensRandom();
        d.width=.0035f+.006f*LensRandom(); d.age=0;
        d.life=3.5f+3.5f*LensRandom(); d.speed=.008f+.024f*LensRandom();
        d.phase=6.2831853f*LensRandom();
    }
}
}
void CofRainLensDraw() {
    if (!lensRTX || !lensEnabled || lensEnabled->value<=0 ||
        CofGameMenuWorld() || CofGameMenuVisible() || CofInventoryVisible() ||
        gHUD.m_iIntermission || gHUD.m_Health.m_iHealth<=0) return;
    for (int i=0;i<lensCount;++i) {
        const LensDrop& d=lensDrops[i];
        const float fade=std::fmin(1.f,d.age*5.f)*std::fmin(1.f,(d.life-d.age)*1.5f);
        const int w=int(d.width*ScreenWidth)+2;
        CofDrawRainLens(int(d.x*ScreenWidth),int(d.y*ScreenHeight),w,w*3,
            .65f*fade*std::fmin(lensEnabled->value,1.f));
    }
    if (lensCount && !lensReported) {
        lensReported=true;
        gEngfuncs.Con_DPrintf("COF_RTX_RAIN_LENS active drops=%d exposure=%.3f\n",lensCount,rainExposure);
    }
}
