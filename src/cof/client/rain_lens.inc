// RTX wet-lens state; optical refraction is in the pre-HUD ping-pong shader.
// Weather protocol, sky/roof traces and original game resources stay intact.
#include <cstring>
#include <cstdlib>
extern bool CofGameMenuWorld();
extern bool CofGameMenuVisible();
extern bool CofInventoryVisible();
namespace {
float rainExposure, rainTarget, lensWetness, lensTime, lensDryTime;
double nextShelterCheck;
cvar_t *lensEnabled;
bool lensRTX, lensReported;
void ResetRainLens() {
    rainExposure=rainTarget=0; nextShelterCheck=0;
    lensWetness=lensTime=lensDryTime=0;
    lensReported=false;
    if (lensEnabled) {
        gEngfuncs.Cvar_SetValue("cof_rain_exposure",0);
        gEngfuncs.Cvar_SetValue("cof_lens_wetness",0);
        gEngfuncs.Cvar_SetValue("cof_lens_visible",0);
        gEngfuncs.Cvar_SetValue("cof_lens_time",0);
        gEngfuncs.Cvar_SetValue("cof_lens_drytime",0);
    }
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
    // Wet glass fills quickly and drains over several seconds under shelter.
    // Use game time, not wall-clock, so pause freezes the refraction as well.
    lensTime+=dt;
    lensDryTime=rainTarget>.001f?0:std::fmin(63.f,lensDryTime+dt);
    lensWetness+=(rainTarget-lensWetness)*(1.f-std::exp(-dt*(rainTarget>lensWetness?1.4f:.38f)));
    gEngfuncs.Cvar_SetValue("cof_lens_time",lensTime);
    gEngfuncs.Cvar_SetValue("cof_lens_drytime",lensDryTime);
    gEngfuncs.Cvar_SetValue("cof_lens_wetness",lensEnabled && lensEnabled->value>0 ?
        lensWetness*std::fmin(1.f,lensEnabled->value):0);

}
}
#include "lens_test.inc"
void CofRainLensDraw() {
    const bool visible=lensRTX && !CofGameMenuWorld() && !CofGameMenuVisible() &&
        !CofInventoryVisible() && !gHUD.m_iIntermission && gHUD.m_Health.m_iHealth>0;
    gEngfuncs.Cvar_SetValue("cof_lens_visible",visible?1:0);
    CofLensClientTest();
    if (!lensRTX || !lensEnabled || lensEnabled->value<=0 ||
        CofGameMenuWorld() || CofGameMenuVisible() || CofInventoryVisible() ||
        gHUD.m_iIntermission || gHUD.m_Health.m_iHealth<=0) return;
    // The RTX ping-pong shader now refracts the scene before HUD composition.
    // Do not draw the old translucent droplet sprite over this second time.
    if (lensWetness>.05f && !lensReported) {
        lensReported=true;
        gEngfuncs.Con_DPrintf("COF_RTX_RAIN_LENS refraction=1 wetness=%.3f exposure=%.3f\n",lensWetness,rainExposure);
    }
}
