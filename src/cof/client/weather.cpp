// Original client 10085980/10092850: bounded weather pool, wind, 900/200
// units/sec, rain triangle and snow billboard. See analysis/graphics/weather.md.
// TriangleAPI is the backend boundary; neither path modifies sprite resources.
#include "hud.h"
#include "cl_util.h"
#include "triangleapi.h"
#include "event_api.h"
#include "pmtrace.h"
#include "ref_params.h"
#include "cl_entity.h"
#include "graphics.h"
#include "weather.h"
#include <cmath>

namespace {
struct Drop { Vector position; float vx, vy, floor, alpha; bool water; };
struct Impact { Vector position; float birth, life, alpha; int frame; bool water; };
Drop drops[4000];
Impact impacts[4000];
int count, impactCount, rainSprite, snowSprite, ringSprite, splashSprite;
double previous, credit;
bool haveTime, reported;
Vector eye, right, up;
cvar_t *enabled, *ripples;
void Vertex(float u, float v, const Vector& p) {
    gEngfuncs.pTriAPI->TexCoord2f(u,v);
    gEngfuncs.pTriAPI->Vertex3f(p.x,p.y,p.z);
}
}

#include "rain_lens.inc"

void CofWeatherInit() {
    enabled = CVAR_CREATE("r_weather", "1", FCVAR_ARCHIVE);
    ripples = CVAR_CREATE("cl_ripples", "1", FCVAR_ARCHIVE);
    lensEnabled = CVAR_CREATE("rt_rain_lens", "1", FCVAR_ARCHIVE);
    CVAR_CREATE("cof_rain_exposure", "0", 0);
    const char* active=std::getenv("COF_RTX_ACTIVE");
    lensRTX=active && std::atoi(active)!=0;
}
void CofWeatherReset() {
    count = impactCount = rainSprite = snowSprite = ringSprite = splashSprite = 0;
    haveTime = reported = false;
    credit = 0;
    ResetRainLens();
}
void CofWeatherView(const ref_params_s* view) {
    eye = Vector(view->vieworg);
    Vector forward;
    AngleVectors(Vector(view->viewangles), forward, right, up);
    const double now = view->time;
    if (!haveTime || now < previous) {
        count = impactCount = 0; credit = 0; previous = now; haveTime = true;
        ResetRainLens();
        return;
    }
    const float dt = float(now-previous);
    previous = now;
    if (!enabled || enabled->value == 0) { count = impactCount = 0; credit = 0; ResetRainLens(); return; }
    if (dt <= 0 || view->paused) return;
    // A stalled renderer must not emit seconds of new particles at once.
    if (dt > .5f) { count = impactCount = 0; credit = 0; ResetRainLens(); return; }
    UpdateRainLens(view,dt);
    for (int i=0;i<impactCount;)
        if (now >= impacts[i].birth+impacts[i].life) impacts[i] = impacts[--impactCount];
        else ++i;
    const CofRainState& rain = CofGraphicsRain();
    const float speed = rain.mode ? 200.f : 900.f;
    for (int i=0;i<count;) {
        Drop& d = drops[i];
        d.position = d.position + Vector(d.vx,d.vy,-speed)*dt;
        if (d.position.z < d.floor) {
            const Vector delta = d.position-eye;
            if (impactCount<4000 && delta.x*delta.x+delta.y*delta.y<=500.f*500.f &&
                (d.water ? ripples && ripples->value!=0 : enabled->value>=2)) {
                Impact& fx = impacts[impactCount++];
                fx.position = Vector(d.position.x,d.position.y,d.floor);
                fx.birth = float(now);
                fx.life = gEngfuncs.pfnRandomFloat(.7f,1.f);
                fx.alpha = gEngfuncs.pfnRandomFloat(.6f,.9f);
                fx.frame = 0; fx.water = d.water;
            }
            drops[i] = drops[--count];
        }
        else ++i;
    }
    if (rain.drips <= 0 || rain.distance <= 0) { credit = 0; return; }
    credit += dt * rain.drips;
    int spawn = int(credit);
    credit -= spawn;
    if (spawn > 4000) spawn = 4000;
    auto* events = gEngfuncs.pEventAPI;
    events->EV_SetUpPlayerPrediction(0, 0);
    events->EV_PushPMStates();
    events->EV_SetTraceHull(2);
    for (int i=0;i<spawn && count<4000;++i) {
        Drop d = {};
        d.position = Vector(eye.x + gEngfuncs.pfnRandomFloat(-rain.distance,rain.distance),
            eye.y + gEngfuncs.pfnRandomFloat(-rain.distance,rain.distance), rain.height);
        d.vx = rain.windX + gEngfuncs.pfnRandomFloat(-rain.randomX,rain.randomX);
        d.vy = rain.windY + gEngfuncs.pfnRandomFloat(-rain.randomY,rain.randomY);
        const float travel = (rain.height + 4096.f)/speed;
        Vector end = d.position + Vector(d.vx,d.vy,-speed)*travel;
        end.z = rain.height - 4096.f;
        pmtrace_t trace = {};
        events->EV_PlayerTrace(d.position,end,1,-1,&trace);
        if (trace.startsolid || trace.allsolid) continue;
        d.floor = trace.endpos[2];
        if (gEngfuncs.PM_PointContents(trace.endpos,nullptr) == -3) {
            d.water = true;
            int waterIndex = gEngfuncs.PM_WaterEntity(trace.endpos);
            const cl_entity_t* water = waterIndex > 0 ? gEngfuncs.GetEntityByIndex(waterIndex) : nullptr;
            if (water && water->model) d.floor = water->curstate.maxs[2];
        }
        // Backdate within this frame, so emission is independent of frame rate.
        d.position.z -= gEngfuncs.pfnRandomFloat(0,float(int(dt*speed)));
        d.alpha = gEngfuncs.pfnRandomFloat(.12f,.20f);
        if (d.position.z > d.floor) drops[count++] = d;
    }
    events->EV_PopPMStates();
}

void CofWeatherDraw() {
    if ((!count && !impactCount) || !enabled || enabled->value == 0) return;
    const CofRainState& rain = CofGraphicsRain();
    int& sprite = rain.mode ? snowSprite : rainSprite;
    if (!sprite) sprite = SPR_Load(rain.mode ? "sprites/snowflake.spr" : "sprites/hi_rain.spr");
    if (!sprite || !gEngfuncs.pTriAPI->SpriteTexture(const_cast<model_s*>(gEngfuncs.GetSpritePointer(sprite)),0)) return;
    auto* tri = gEngfuncs.pTriAPI;
    tri->RenderMode(kRenderTransAdd);
    tri->CullFace(TRI_NONE);
    tri->Begin(TRI_TRIANGLES);
    for (int i=0;i<count;++i) {
        const Drop& d = drops[i];
        float alpha = d.alpha;
        if (rain.mode && rain.height-d.position.z < 80)
            alpha *= (rain.height-d.position.z)/80;
        tri->Color4f(1,1,1,alpha);
        if (!rain.mode) {
            Vector side = Vector(d.position.y-eye.y,eye.x-d.position.x,0.f).Normalize()*8;
            Vector slope(d.vx/900.f*46,d.vy/900.f*46,0.f);
            Vertex(0,0,d.position-side-slope+Vector(0,0,46));
            Vertex(.5f,1,d.position+slope-Vector(0,0,46));
            Vertex(1,0,d.position+side-slope+Vector(0,0,46));
        } else {
            const Vector a=d.position-right*3+up*3, b=d.position-right*3-up*3;
            const Vector c=d.position+right*3-up*3, e=d.position+right*3+up*3;
            Vertex(0,0,a); Vertex(0,1,b); Vertex(1,1,c);
            Vertex(0,0,a); Vertex(1,1,c); Vertex(1,0,e);
        }
    }
    tri->End();
    // Native 100862b0/10085740 + 10092390: growing water rings and optional
    // animated ground splashes. Preserve the shipped sprites and mode gates.
    const float now = gEngfuncs.GetClientTime();
    for (int i=0;i<impactCount;++i) {
        Impact& fx = impacts[i];
        int& handle = fx.water ? ringSprite : splashSprite;
        if (!handle) handle = SPR_Load(fx.water ? "sprites/waterring.spr" : "sprites/wsplash_x.spr");
        if (!handle) continue;
        if (!fx.water && fx.frame >= SPR_Frames(handle)) continue;
        if (!tri->SpriteTexture(const_cast<model_s*>(gEngfuncs.GetSpritePointer(handle)),fx.water?0:fx.frame++)) continue;
        const float age = now-fx.birth;
        const float size = fx.water ? age*25.f : 5.f;
        const float alpha = fx.water ? fx.alpha*(1-age/fx.life) : .4f;
        tri->Begin(TRI_QUADS);
        tri->Color4f(1,1,1,alpha);
        Vertex(0,0,fx.position+Vector(-size,-size,0.f));
        Vertex(0,1,fx.position+Vector(-size,size,0.f));
        Vertex(1,1,fx.position+Vector(size,size,0.f));
        Vertex(1,0,fx.position+Vector(size,-size,0.f));
        tri->End();
    }
    tri->RenderMode(kRenderNormal);
    tri->CullFace(TRI_FRONT);
    if (!reported && count > 50) {
        reported = true;
        gEngfuncs.Con_DPrintf("COF_WEATHER_DRAW mode=%d particles=%d speed=%.0f\n",rain.mode,count,rain.mode?200.f:900.f);
    }
}
