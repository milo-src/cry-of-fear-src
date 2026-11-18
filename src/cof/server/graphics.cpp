// Original graphical entity/message contracts: analysis/graphics/server-effects.md.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "saverestore.h"
#include "graphics.h"

namespace {
int blackWhiteMessage;
int fogMessage;
int rainMessage;
void SendBlackWhite(CBasePlayer* player) {
    MESSAGE_BEGIN(MSG_ONE, blackWhiteMessage, nullptr, player->pev);
    WRITE_BYTE(player->m_cofBlackAndWhite);
    MESSAGE_END();
}
}

// hl.dll 0x1009d5c0 / 0x100a5af0. Use type does not toggle this value.
class CCofBlackAndWhite : public CPointEntity {
public:
    void KeyValue(KeyValueData* kv) override {
        // Original entvars descriptor 0x1021b040: FIELD_INTEGER "iuser1",
        // offset 0x248, count1. Portable SDK omits this generic key, so bridge
        // it here without changing the original map contract.
        if (FStrEq(kv->szKeyName, "iuser1")) {
            pev->iuser1 = atoi(kv->szValue);
            kv->fHandled = TRUE;
        } else CPointEntity::KeyValue(kv);
    }
    void Spawn() override {
        pev->solid = SOLID_NOT;
        pev->movetype = MOVETYPE_NONE;
        pev->effects = EF_NODRAW;
    }
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override {
        if (!activator) return;
        if (pev->iuser1 > 255) pev->iuser1 = 255;
        if (pev->iuser1 < 0) pev->iuser1 = 0;
        for (int i = 1; i <= gpGlobals->maxClients; ++i) {
            CBaseEntity* entity = UTIL_PlayerByIndex(i);
            if (!entity || !entity->IsPlayer()) continue;
            CBasePlayer* player = static_cast<CBasePlayer*>(entity);
            player->m_cofBlackAndWhite = pev->iuser1;
            SendBlackWhite(player);
        }
    }
};
LINK_ENTITY_TO_CLASS(cof_blackandwhite, CCofBlackAndWhite);

// hl.dll 0x1009e3b0 / 0x100993e0 / 0x100a8310. The renderer consumes
// the ordinary network entity's renderfx 71, not a fabricated light message.
class CCofDynamicLight : public CPointEntity {
public:
    void Precache() override { PRECACHE_MODEL("sprites/null.spr"); }
    void Spawn() override {
        pev->solid = SOLID_NOT;
        pev->movetype = MOVETYPE_NONE;
        pev->renderfx = 71;
        Precache();
        SET_MODEL(edict(), "sprites/null.spr");
        UTIL_SetSize(pev, g_vecZero, g_vecZero);
        if (pev->spawnflags & 1) pev->effects |= EF_NODRAW;
        pev->renderamt *= 0.125f;
    }
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE type, float) override {
        if (type == USE_ON) pev->effects &= ~EF_NODRAW;
        else if (type == USE_OFF) pev->effects |= EF_NODRAW;
        else if (type == USE_TOGGLE) pev->effects ^= EF_NODRAW;
    }
};
LINK_ENTITY_TO_CLASS(env_dynlight, CCofDynamicLight);

// These map entities preserve health/body/skin/origin/spawnflags for the
// original sky consumer. Their own Spawn functions set no extra protocol.
class CCofSkyPosition : public CPointEntity {
public:
    void Spawn() override {
        pev->solid = SOLID_NOT;
        pev->movetype = MOVETYPE_NONE;
        pev->effects |= EF_NODRAW;
    }
};
LINK_ENTITY_TO_CLASS(envpos_sky, CCofSkyPosition);
LINK_ENTITY_TO_CLASS(envpos_world, CCofSkyPosition);

// env_fog is driven by signed-duration SetFog messages, not by a density cvar.
class CCofFog : public CPointEntity {
public:
    int m_startDistance, m_endDistance;
    float m_fadeIn, m_fadeOut, m_hold;
    static TYPEDESCRIPTION m_SaveData[];
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    void Spawn() override {
        pev->effects |= EF_NODRAW;
        if (!pev->targetname) pev->spawnflags |= 1;
        if (!m_startDistance) m_startDistance = 1;
        if (!m_endDistance) m_endDistance = 1;
    }
    void Activate() override {
        // Original queues TurnOn until initialization; Activate is the SDK bridge.
        if (pev->spawnflags & 1) TurnOn();
    }
    void Precache() override {
        if (pev->spawnflags & 1) {
            SetThink(&CCofFog::ResumeThink);
            pev->nextthink = gpGlobals->time + .1f;
        }
    }
    void KeyValue(KeyValueData* kv) override {
        if (FStrEq(kv->szKeyName, "startdist")) m_startDistance = atoi(kv->szValue);
        else if (FStrEq(kv->szKeyName, "enddist")) m_endDistance = atoi(kv->szValue);
        else if (FStrEq(kv->szKeyName, "fadein")) m_fadeIn = static_cast<float>(atoi(kv->szValue));
        else if (FStrEq(kv->szKeyName, "fadeout")) m_fadeOut = static_cast<float>(atoi(kv->szValue));
        else if (FStrEq(kv->szKeyName, "holdtime")) m_hold = atof(kv->szValue);
        else { CPointEntity::KeyValue(kv); return; }
        kv->fHandled = TRUE;
    }
    void Send(CBasePlayer* player, int fade, bool clear = false) {
        MESSAGE_BEGIN(MSG_ONE, fogMessage, nullptr, player->pev);
        WRITE_BYTE(clear ? 0 : static_cast<int>(pev->rendercolor.x));
        WRITE_BYTE(clear ? 0 : static_cast<int>(pev->rendercolor.y));
        WRITE_BYTE(clear ? 0 : static_cast<int>(pev->rendercolor.z));
        WRITE_SHORT(fade);
        WRITE_SHORT(clear ? 0 : m_startDistance);
        WRITE_SHORT(clear ? 0 : m_endDistance);
        MESSAGE_END();
    }
    void SendAll(int fade, bool clear = false) {
        for (int i = 1; i <= gpGlobals->maxClients; ++i) {
            CBaseEntity* entity = UTIL_PlayerByIndex(i);
            if (entity && entity->IsPlayer()) Send(static_cast<CBasePlayer*>(entity), fade, clear);
        }
    }
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE type, float) override {
        if (!ShouldToggle(type, pev->spawnflags & 1)) return;
        if (pev->spawnflags & 1) TurnOff(); else TurnOn();
    }
    void EXPORT TurnOn() {
        pev->spawnflags |= 1;
        if (m_fadeIn != 0) {
            pev->spawnflags |= 0x8000;
            SendAll(static_cast<int>(m_fadeIn));
            SetThink(&CCofFog::FadeInDone);
            pev->nextthink = gpGlobals->time + m_fadeIn;
        } else FadeInDone();
    }
    void EXPORT TurnOff() {
        pev->spawnflags &= ~1;
        if (m_fadeOut != 0) {
            pev->spawnflags |= 0x8000;
            SendAll(static_cast<int>(-m_fadeOut));
            SetThink(&CCofFog::FadeOutDone);
            pev->nextthink = gpGlobals->time + m_fadeOut;
        } else FadeOutDone();
    }
    void EXPORT FadeInDone() {
        pev->spawnflags &= ~0x8000;
        SendAll(0);
        SetThink(nullptr); pev->nextthink = 0;
        if (m_hold != 0) {
            SetThink(&CCofFog::TurnOff);
            pev->nextthink = gpGlobals->time + m_hold;
        }
    }
    void EXPORT FadeOutDone() {
        pev->spawnflags &= ~0x8000;
        SendAll(0, true);
        SetThink(nullptr); pev->nextthink = 0;
    }
    void EXPORT ResumeThink() {
        SetThink(&CCofFog::FadeInDone);
        pev->nextthink = gpGlobals->time + .1f;
    }
};
LINK_ENTITY_TO_CLASS(env_fog, CCofFog);
TYPEDESCRIPTION CCofFog::m_SaveData[] = {
    DEFINE_FIELD(CCofFog, m_startDistance, FIELD_INTEGER),
    DEFINE_FIELD(CCofFog, m_endDistance, FIELD_INTEGER),
    DEFINE_FIELD(CCofFog, m_fadeIn, FIELD_FLOAT),
    DEFINE_FIELD(CCofFog, m_fadeOut, FIELD_FLOAT),
    DEFINE_FIELD(CCofFog, m_hold, FIELD_FLOAT),
};
IMPLEMENT_SAVERESTORE(CCofFog, CPointEntity);

class CCofRainSettings : public CPointEntity {
public:
    float m_distance;
    int m_mode;
    static TYPEDESCRIPTION m_SaveData[];
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    void Spawn() override {
        pev->solid = SOLID_NOT; pev->movetype = MOVETYPE_NONE; pev->effects |= EF_NODRAW;
    }
    void KeyValue(KeyValueData* kv) override {
        if (FStrEq(kv->szKeyName, "m_flDistance")) m_distance = atof(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_iMode")) m_mode = atoi(kv->szValue);
        else { CPointEntity::KeyValue(kv); return; }
        kv->fHandled = TRUE;
    }
};
LINK_ENTITY_TO_CLASS(rain_settings, CCofRainSettings);
TYPEDESCRIPTION CCofRainSettings::m_SaveData[] = {
    DEFINE_FIELD(CCofRainSettings, m_distance, FIELD_FLOAT),
    DEFINE_FIELD(CCofRainSettings, m_mode, FIELD_INTEGER),
};
IMPLEMENT_SAVERESTORE(CCofRainSettings, CPointEntity);

class CCofRainModify : public CPointEntity {
public:
    int m_drips;
    float m_values[4], m_time; // windX, windY, randX, randY
    static TYPEDESCRIPTION m_SaveData[];
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    void Spawn() override {
        pev->solid = SOLID_NOT; pev->movetype = MOVETYPE_NONE; pev->effects |= EF_NODRAW;
        if (!pev->targetname) pev->spawnflags |= 1;
    }
    void KeyValue(KeyValueData* kv) override {
        if (FStrEq(kv->szKeyName, "m_iDripsPerSecond")) m_drips = atoi(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_flWindX")) m_values[0] = atof(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_flWindY")) m_values[1] = atof(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_flRandX")) m_values[2] = atof(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_flRandY")) m_values[3] = atof(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_flTime")) m_time = atof(kv->szValue);
        else { CPointEntity::KeyValue(kv); return; }
        kv->fHandled = TRUE;
    }
    void Apply(CBasePlayer* player) {
        player->m_cofRainDrips = m_drips;
        for (int i = 0; i < 4; ++i) player->m_cofRainValues[i] = m_values[i];
    }
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE, float) override;
};
LINK_ENTITY_TO_CLASS(rain_modify, CCofRainModify);
TYPEDESCRIPTION CCofRainModify::m_SaveData[] = {
    DEFINE_FIELD(CCofRainModify, m_drips, FIELD_INTEGER),
    DEFINE_ARRAY(CCofRainModify, m_values, FIELD_FLOAT, 4),
    DEFINE_FIELD(CCofRainModify, m_time, FIELD_FLOAT),
};
IMPLEMENT_SAVERESTORE(CCofRainModify, CPointEntity);

namespace {
void SendRain(CBasePlayer* player) {
    CCofRainSettings* settings = static_cast<CCofRainSettings*>(
        UTIL_FindEntityByClassname(nullptr, "rain_settings"));
    if (settings) {
        CBaseEntity* entity = nullptr;
        while ((entity = UTIL_FindEntityByClassname(entity, "rain_modify"))) {
            if (!(entity->pev->spawnflags & 1)) continue;
            static_cast<CCofRainModify*>(entity)->Apply(player);
            player->m_cofRainEnd = 0;
            break;
        }
    } else {
        player->m_cofRainDrips = player->m_cofRainIdealDrips = 0;
        for (int i = 0; i < 4; ++i) player->m_cofRainValues[i] = player->m_cofRainIdeal[i] = 0;
        player->m_cofRainEnd = player->m_cofRainNext = 0;
    }
    // Original emits this 16-byte message when settings exist. An explicit
    // zero message when absent resets the source client across map changes.
    MESSAGE_BEGIN(MSG_ONE, rainMessage, nullptr, player->pev);
    WRITE_SHORT(player->m_cofRainDrips);
    WRITE_COORD(settings ? settings->m_distance : 0);
    for (int i = 0; i < 4; ++i) WRITE_COORD(player->m_cofRainValues[i]);
    WRITE_SHORT(settings ? settings->m_mode : 0);
    WRITE_COORD(settings ? settings->pev->origin.z : 0);
    MESSAGE_END();
}
}

void CCofRainModify::Use(CBaseEntity*, CBaseEntity*, USE_TYPE, float) {
    if (pev->spawnflags & 1) return;
    if (gpGlobals->deathmatch != 0) {
        ALERT(at_warning, "Rain error: only static rain in multiplayer\n"); return;
    }
    CBaseEntity* entity = UTIL_PlayerByIndex(1);
    if (!entity || !entity->IsPlayer()) return;
    CBasePlayer* player = static_cast<CBasePlayer*>(entity);
    if (m_time == 0) { Apply(player); SendRain(player); }
    else {
        player->m_cofRainIdealDrips = m_drips;
        for (int i = 0; i < 4; ++i) player->m_cofRainIdeal[i] = m_values[i];
        player->m_cofRainEnd = gpGlobals->time + m_time;
        player->m_cofRainNext = gpGlobals->time + 1;
    }
}

void CofGraphicsPrecache() {
    if (!blackWhiteMessage) blackWhiteMessage = REG_USER_MSG("BlackWhite", 1);
    if (!fogMessage) fogMessage = REG_USER_MSG("SetFog", 9);
    if (!rainMessage) rainMessage = REG_USER_MSG("RainData", 16);
}

void CofGraphicsPlayerInit(CBasePlayer* player) {
    if (!player || !blackWhiteMessage) return;
    // Original resends nonzero state at 0x100f77b7. Explicit zero also resets
    // the source client's state after map/renderer changes.
    SendBlackWhite(player);
    SendRain(player);
    // Initialization bridge: the original delayed entity think targets connected
    // players. Late source-client initialization also needs the active fog state.
    CBaseEntity* fog = nullptr;
    while ((fog = UTIL_FindEntityByClassname(fog, "env_fog")))
        if (fog->pev->spawnflags & 1) static_cast<CCofFog*>(fog)->Send(player, 0);
}

void CofGraphicsServerTestFrame(CBasePlayer* player);
void CofGraphicsPlayerFrame(CBasePlayer* player) {
    CofGraphicsServerTestFrame(player);
    if (!player || player->m_cofRainEnd <= 0) return;
    if (player->m_cofRainEnd <= gpGlobals->time) {
        player->m_cofRainDrips = player->m_cofRainIdealDrips;
        for (int i = 0; i < 4; ++i) player->m_cofRainValues[i] = player->m_cofRainIdeal[i];
        player->m_cofRainEnd = player->m_cofRainNext = 0;
        SendRain(player);
    } else if (player->m_cofRainNext <= gpGlobals->time) {
        const int remaining = static_cast<int>(player->m_cofRainEnd - gpGlobals->time + 1);
        player->m_cofRainDrips += (player->m_cofRainIdealDrips - player->m_cofRainDrips) / remaining;
        for (int i = 0; i < 4; ++i)
            player->m_cofRainValues[i] += (player->m_cofRainIdeal[i] - player->m_cofRainValues[i]) / remaining;
        player->m_cofRainNext = gpGlobals->time + 1;
        SendRain(player);
    }
}

#include "graphics_runtime_tests.inc"
