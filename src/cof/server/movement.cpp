// Original evidence: analysis/movement/health-stamina.md. SDK layout is separate.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "soundent.h"
#include "movement.h"
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>

extern int gmsgHealth;
namespace {
const int Sprint = 0x40000, Exhausted = 0x80000, RunButton = 0x1000;
int staminaMessage, breathMessage, fallMessage, zoomMessage, healthCapMessage;
cvar_t movementDifficulty = {"difficulty", "1", FCVAR_SERVER};
// Register before skill.cfg executes; values remain configurable by that file.
cvar_t movementSkills[] = {
    // Native table 102148e0/102148f4/10214908; sent via physinfo on spawn/restore.
    {"cof_walksteptime", "410", FCVAR_SERVER},
    {"cof_runsteptime", "375", FCVAR_SERVER},
    {"cof_sprintsteptime", "300", FCVAR_SERVER},
    {"sk_primary_speed1", "75", FCVAR_SERVER}, {"sk_primary_speed2", "75", FCVAR_SERVER},
    {"sk_primary_speed3", "75", FCVAR_SERVER}, {"sk_primary_speed4", "75", FCVAR_SERVER},
    {"sk_secondary_speed1", "45", FCVAR_SERVER}, {"sk_secondary_speed2", "45", FCVAR_SERVER},
    {"sk_secondary_speed3", "45", FCVAR_SERVER}, {"sk_secondary_speed4", "45", FCVAR_SERVER},
    {"sk_sprint_speed1", "125", FCVAR_SERVER}, {"sk_sprint_speed2", "125", FCVAR_SERVER},
    {"sk_sprint_speed3", "125", FCVAR_SERVER}, {"sk_sprint_speed4", "125", FCVAR_SERVER},
    {"sk_stair_speed1", "50", FCVAR_SERVER}, {"sk_stair_speed2", "50", FCVAR_SERVER},
    {"sk_stair_speed3", "50", FCVAR_SERVER}, {"sk_stair_speed4", "50", FCVAR_SERVER},
    {"sk_syringe_heal1", "100", FCVAR_SERVER}, {"sk_syringe_heal2", "80", FCVAR_SERVER},
    {"sk_syringe_heal3", "60", FCVAR_SERVER}, {"sk_syringe_heal4", "50", FCVAR_SERVER}
};
int Difficulty() { return Q_max(1, Q_min(4, static_cast<int>(CVAR_GET_FLOAT("difficulty")))); }
float Skill(const char* base) {
    char name[64]; std::snprintf(name, sizeof(name), "%s%d", base, Difficulty());
    return CVAR_GET_FLOAT(name);
}
bool MenuMap() {
    const char* map = STRING(gpGlobals->mapname);
    return !std::strcmp(map, "c_server_settings") || !std::strcmp(map, "c_difficulty_settings") ||
        !std::strcmp(map, "c_loadgame") || !std::strcmp(map, "c_video_stress_test");
}
void Physics(CBasePlayer* p, const char* key, const char* value) {
    g_engfuncs.pfnSetPhysicsKeyValue(p->edict(), const_cast<char*>(key), const_cast<char*>(value));
}
bool JumpBlocked(CBasePlayer* p) {
    // User-required depleted-stamina rule. Native Jump itself has no proven
    // 15-point entry threshold; the 0.1 exhaustion reserve still displays zero.
    return p->m_cofDisableJump || (!p->m_cofUnlimitedStamina && p->m_cofStamina < 1);
}
void SyncJumpGate(CBasePlayer* p) {
    const char* value = JumpBlocked(p) ? "1" : "0";
    if (std::strcmp(g_engfuncs.pfnGetPhysicsKeyValue(p->edict(), "cof_jb"), value))
        Physics(p, "cof_jb", value);
}
void CameraImpulse(CBasePlayer* p, const Vector& impulse) {
    // Native 100f91b0 writes angular velocity, not an immediate view angle.
    // SDK vuser3 is the engine-transported PM +234 spring velocity (10005260).
    p->pev->vuser3 = p->pev->vuser3 + Vector(-impulse.x, impulse.y, impulse.z) * 20;
}
void Stamina(CBasePlayer* p) {
    if (!staminaMessage) return;
    MESSAGE_BEGIN(MSG_ONE, staminaMessage, nullptr, p->pev);
    WRITE_BYTE(static_cast<int>(p->m_cofStamina)); WRITE_COORD(p->m_cofStaminaImpulse); MESSAGE_END();
    p->m_cofStaminaLast = p->m_cofStamina;
    p->m_cofStaminaImpulse = 0;
}
void HoldBreath(CBasePlayer* p, bool enabled) {
    if (p->m_cofHoldBreath == static_cast<int>(enabled)) return;
    p->m_cofHoldBreath = enabled;
    if (breathMessage) {
        MESSAGE_BEGIN(MSG_ONE, breathMessage, nullptr, p->pev); WRITE_BYTE(enabled); MESSAGE_END();
    }
    EMIT_SOUND(p->edict(), CHAN_VOICE, enabled ? "player/vocal/breathing/hold_breath.wav" :
        "player/vocal/breathing/release_breath.wav", 1, 0.8f);
}
void FallMessage(CBasePlayer* p, int state) {
    if (!fallMessage) return;
    MESSAGE_BEGIN(MSG_ONE, fallMessage, nullptr, p->pev);
    WRITE_BYTE(state); WRITE_BYTE(0); MESSAGE_END();
    // Deliberate repair: original stumble writes one byte, client expects two.
}
float WalkSpeed(CBasePlayer* p, bool exhausted = true) {
    return Skill(p->m_cofInStairs ? "sk_stair_speed" :
        exhausted && (p->pev->flags & Exhausted) ? "sk_secondary_speed" : "sk_primary_speed");
}
void ApplyQueuedHeal(CBasePlayer* p) {
    // The original integer timestamp is intentional: do not change to a float timer.
    if (std::fabs(gpGlobals->time - static_cast<float>(p->m_cofHealLast)) < 0.1f) return;
    p->m_cofHealLast = static_cast<int>(gpGlobals->time);
    if (p->m_cofHealQueue <= 0) return;
    if (p->pev->health >= p->pev->max_health) { p->m_cofHealQueue = 0; return; }
    const int amount = Q_min(5, p->m_cofHealQueue);
    p->m_cofHealQueue -= amount;
    p->m_cofStamina += amount;
    p->TakeHealth(static_cast<float>(amount), 0);
    p->m_cofStamina = Q_min(100.0f, p->m_cofStamina);
}
void UpdateStairs(CBasePlayer* p) {
    if (p->m_cofStairsNext > gpGlobals->time) return;
    p->m_cofStairsNext = gpGlobals->time + 0.1f;
    p->m_cofInStairs = 0;
    CBaseEntity* stairs = nullptr;
    while ((stairs = UTIL_FindEntityByClassname(stairs, "func_stairs"))) {
        if (stairs->pev->flags & FL_KILLME) continue;
        // Same bounding-box occupancy basis; OR overlapping volumes for each player.
        if (p->pev->absmin.x <= stairs->pev->absmax.x && p->pev->absmax.x >= stairs->pev->absmin.x &&
            p->pev->absmin.y <= stairs->pev->absmax.y && p->pev->absmax.y >= stairs->pev->absmin.y &&
            p->pev->absmin.z <= stairs->pev->absmax.z && p->pev->absmax.z >= stairs->pev->absmin.z) {
            p->m_cofInStairs = 1; break;
        }
    }
}
}

class CCofStairs : public CBaseEntity {
public:
    void Precache() override {
        // CFuncStairs vtable +0x30 -> 1010eed0, called by Spawn 10110760.
        // SOLID_NOT alone does not hide a brush from AddToFullPack/rendering.
        pev->solid = SOLID_TRIGGER;
        if (CVAR_GET_FLOAT("showtriggers") == 0) pev->effects |= EF_NODRAW;
        else pev->effects &= ~EF_NODRAW;
    }
    void Spawn() override {
        Precache(); pev->movetype = MOVETYPE_PUSH;
        if (pev->model) SET_MODEL(edict(), STRING(pev->model));
    }
};
LINK_ENTITY_TO_CLASS(func_stairs, CCofStairs);

void CofMovementRegisterCvars() {
    if (!CVAR_GET_POINTER("difficulty")) CVAR_REGISTER(&movementDifficulty);
    for (auto& setting : movementSkills) if (!CVAR_GET_POINTER(setting.name)) CVAR_REGISTER(&setting);
}
void CofMovementPrecache() {
    if (!staminaMessage) staminaMessage = REG_USER_MSG("Stamina", 3);
    if (!breathMessage) breathMessage = REG_USER_MSG("HoldBreath", 1);
    if (!fallMessage) fallMessage = REG_USER_MSG("FallOver", -1);
    if (!zoomMessage) zoomMessage = REG_USER_MSG("CameraZoom", -1);
    if (!healthCapMessage) healthCapMessage = REG_USER_MSG("HealthCap", 1);
    CofMovementRegisterCvars();
    PRECACHE_SOUND("player/player_out_of_breath.wav");
    PRECACHE_SOUND("player/heartbeat1.wav");
    PRECACHE_SOUND("player/vocal/breathing/hold_breath.wav");
    PRECACHE_SOUND("player/vocal/breathing/release_breath.wav");
    PRECACHE_SOUND("common/bodydrop1.wav"); PRECACHE_SOUND("common/bodydrop2.wav");
    PRECACHE_SOUND("common/bodydrop3.wav"); PRECACHE_SOUND("common/bodydrop4.wav");
    PRECACHE_SOUND("common/bodysplat.wav");
}

void CofMovementRestore(CBasePlayer* p) {
    if (!p->m_cofMovementVersion) { // Saves made before this port had no movement fields.
        p->m_cofStamina = 100; p->m_cofStaminaNext = gpGlobals->time;
        p->m_cofJumpHeight = 100; p->m_cofHealLast = static_cast<int>(gpGlobals->time);
        p->m_cofNightmare = Difficulty() == 4; p->m_cofMovementVersion = 1;
    }
    char value[24]; std::snprintf(value, sizeof(value), "%d", p->m_cofJumpHeight);
    Physics(p, "jh", value); Physics(p, "slj", p->m_fLongJump ? "1" : "0");
    Physics(p, "low", p->m_cofLowHealth && !g_pGameRules->IsMultiplayer() ? "1" : "0");
    Physics(p, "asd", CVAR_GET_STRING("cof_walksteptime"));
    Physics(p, "bsd", CVAR_GET_STRING("cof_runsteptime"));
    Physics(p, "csd", CVAR_GET_STRING("cof_sprintsteptime"));
    SyncJumpGate(p);
    // SDK clientmaxspeed transport is filled by UpdateClientData (client.cpp).
    p->m_cofStaminaLast = -1;
}
void CofMovementSpawn(CBasePlayer* p) {
    p->m_cofMovementVersion = 1;
    p->m_cofStamina = 100; p->m_cofStaminaLast = -1; p->m_cofStaminaNext = gpGlobals->time;
    p->m_cofHealLast = static_cast<int>(gpGlobals->time); p->m_cofHealQueue = 0;
    p->m_cofDodgeNext = gpGlobals->time; p->m_cofFallUntil = 0;
    p->m_cofJumpHeight = 100; p->m_cofLowHealth = 0;
    p->m_cofNightmare = Difficulty() == 4; p->m_cofInStairs = 0;
    p->m_cofStairsNext = 0;
    p->m_cofUnlimitedStamina = p->m_cofDisableJump = p->m_cofDisableDodge = 0;
    p->m_cofHoldBreath = p->m_cofWeaponSprintBlocked = p->m_cofScopedRifle = 0;
    p->m_cofHoldBreathUntil = p->m_cofBreathSoundNext = p->m_cofHeartbeatNext = 0;
    p->m_cofStaminaImpulse = 0; p->pev->flags &= ~(Sprint | Exhausted);
    p->pev->health = p->pev->max_health = 100; p->pev->armorvalue = 0;
    p->pev->maxspeed = Skill("sk_primary_speed");
    p->pev->fov = p->m_iFOV = 90; p->pev->fuser3 = 0;
    p->pev->vuser3 = g_vecZero;
    CofMovementRestore(p);
}
void CofMovementSync(CBasePlayer* p) {
    Stamina(p);
    if (breathMessage) {
        MESSAGE_BEGIN(MSG_ONE, breathMessage, nullptr, p->pev);
        WRITE_BYTE(p->m_cofHoldBreath != 0); MESSAGE_END();
    }
    FallMessage(p, p->m_cofFallUntil > gpGlobals->time && p->pev->fuser3 == 1);
    if (healthCapMessage) {
        MESSAGE_BEGIN(MSG_ONE, healthCapMessage, nullptr, p->pev); WRITE_BYTE(0); MESSAGE_END();
    }
    CofMovementHealth(p);
}
void CofMovementHealth(CBasePlayer* p) {
    if (!gmsgHealth) return;
    for (int index = 1; index <= gpGlobals->maxClients; ++index) {
        CBaseEntity* recipient = UTIL_PlayerByIndex(index);
        if (!recipient) continue;
        MESSAGE_BEGIN(MSG_ONE, gmsgHealth, nullptr, recipient->pev);
        WRITE_BYTE(static_cast<int>(Q_max(0.0f, p->pev->health)));
        WRITE_BYTE(p->entindex()); WRITE_BYTE(g_pGameRules && g_pGameRules->IsMultiplayer()); MESSAGE_END();
    }
}
void CofMovementQueueHeal(CBasePlayer* p, int amount) {
    if (p) p->m_cofHealQueue = Q_max(0, amount); // replace, never accumulate
}
void CofMovementQueueSyringe(CBasePlayer* p) { CofMovementQueueHeal(p, static_cast<int>(Skill("sk_syringe_heal"))); }
void CofMovementWeaponState(CBasePlayer* p, bool blocksSprint, bool scopedRifle) {
    if (!p) return;
    p->m_cofWeaponSprintBlocked = blocksSprint; p->m_cofScopedRifle = scopedRifle;
}
void CofMovementPreThink(CBasePlayer* p) {
    const int low = p->pev->health < 25;
    if (low != p->m_cofLowHealth) {
        p->m_cofLowHealth = low;
        Physics(p, "low", low && !g_pGameRules->IsMultiplayer() ? "1" : "0");
    }
    if (!p->IsAlive()) {
        HoldBreath(p, false); p->pev->flags &= ~Sprint;
        ApplyQueuedHeal(p); // native queue still runs before the death-think branch
        return;
    }
    if (p->m_cofHoldBreath && (!(p->pev->button & RunButton) || !p->m_cofScopedRifle ||
        p->m_cofStamina <= 0)) HoldBreath(p, false);
    if (!p->m_cofHoldBreath && p->m_cofScopedRifle && (p->pev->button & RunButton) &&
        p->m_cofStamina >= 1 && p->m_cofHoldBreathUntil < gpGlobals->time) {
        HoldBreath(p, true); p->m_cofHoldBreathUntil = gpGlobals->time + 1;
    }
    if (low && p->pev->waterlevel < 3 && !MenuMap() && p->m_cofHeartbeatNext < gpGlobals->time) {
        EMIT_SOUND(p->edict(), CHAN_AUTO, "player/heartbeat1.wav", 0.25f, 0.8f);
        p->m_cofHeartbeatNext = gpGlobals->time + 1;
    }
    // 100ef2d0 evaluates low-health/hold-breath before its 100dca10 heal step.
    ApplyQueuedHeal(p);
    // Freeze admission after healing but before Jump charges stamina, so
    // spending the last points cannot cancel the accepted PM jump this frame.
    SyncJumpGate(p);
}
void CofMovementPostThink(CBasePlayer* p) {
    if (!p->IsAlive()) return;
    // 100ead70 clears stumble in PostThink, after this frame's PM move and
    // before 100f4d70. Clearing it in PreThink releases movement one step early.
    if (p->m_cofFallUntil > 0 && p->m_cofFallUntil < gpGlobals->time) {
        p->m_cofFallUntil = 0;
        if (p->pev->fuser3 == 1) p->pev->fuser3 = 0;
        FallMessage(p, 0);
    }
    if (MenuMap()) return;
    UpdateStairs(p);
    const float now = gpGlobals->time, speed = p->pev->velocity.Length2D();
    int& flags = p->pev->flags;
    const bool blockedEarly = p->pev->movetype == MOVETYPE_FLY ||
        p->m_cofWeaponSprintBlocked || p->m_cofScopedRifle || (p->pev->button & IN_BACK);
    if (blockedEarly) flags &= ~Sprint;
    if ((flags & FL_ONGROUND) && p->m_cofInStairs && (flags & (Sprint | FL_FROZEN)) == Sprint)
        CofMovementFallOver(p);
    // Native stair stumble precedes the crouch cancellation, including a frame
    // which arrives on stairs with both Sprint and FL_DUCKING set.
    const bool blocked = blockedEarly || (flags & FL_DUCKING);
    if (flags & FL_DUCKING) flags &= ~Sprint;
    p->pev->maxspeed = WalkSpeed(p);
    if (!(flags & Exhausted) && !p->m_cofInStairs && (flags & Sprint))
        p->pev->maxspeed = Skill("sk_sprint_speed");
    if (!(flags & Sprint) && !p->m_cofInStairs && !blocked &&
        (p->pev->button & (RunButton | IN_BACK)) == RunButton && p->m_cofStamina >= 1 &&
        speed != 0 && p->pev->waterlevel != 2) {
        flags |= Sprint; p->pev->maxspeed = Skill("sk_sprint_speed");
        if (!p->m_cofUnlimitedStamina) p->m_cofStamina -= 5;
    }
    if ((flags & Sprint) && (!(p->pev->button & RunButton) || blocked || p->m_cofStamina == 0 ||
        (flags & Exhausted))) {
        flags &= ~Sprint; p->pev->maxspeed = WalkSpeed(p, false);
    }
    if (p->m_cofStaminaNext < now && p->m_cofStamina > 0) {
        if ((!(flags & Sprint) || speed == 0) && !p->m_cofHoldBreath) {
            p->m_cofStamina += flags & FL_DUCKING ? 2 : 1;
            p->m_cofStaminaNext = now + (p->m_cofNightmare ? 0.75f : 0.25f);
        } else {
            if (!p->m_cofUnlimitedStamina) p->m_cofStamina -= p->m_cofHoldBreath ? 1 : 2;
            p->m_cofStaminaNext = now + (p->m_cofNightmare ? 0.05f : 0.1f);
        }
    }
    if (p->m_cofStaminaNext < now && p->m_cofStamina == 0) {
        p->m_cofStamina = 0.1f; p->m_cofHoldBreathUntil = now + 4;
        p->m_cofStaminaNext = now + (p->m_cofNightmare ? 10 : 5); flags |= Exhausted;
        if (p->pev->waterlevel < 3 && p->m_cofBreathSoundNext < now) {
            EMIT_SOUND(p->edict(), CHAN_VOICE, "player/player_out_of_breath.wav", 1, 0.8f);
            p->m_cofBreathSoundNext = now + 30;
        }
    }
    if ((flags & Exhausted) && p->m_cofStamina >= 1) flags &= ~Exhausted;
    p->m_cofStamina = Q_max(0.0f, Q_min(100.0f, p->m_cofStamina));
    SyncJumpGate(p);
    if (p->m_cofStaminaLast != p->m_cofStamina) Stamina(p);
    const bool runFov = (flags & Sprint) && p->pev->waterlevel <= 2;
    if ((runFov && p->m_iFOV == 90) || (!runFov && p->m_iFOV == 95)) {
        p->pev->fov = p->m_iFOV = runFov ? 95 : 90;
        if (zoomMessage) {
            MESSAGE_BEGIN(MSG_ONE, zoomMessage, nullptr, p->pev);
            WRITE_COORD(50); WRITE_BYTE(0); WRITE_BYTE(0); MESSAGE_END();
        }
    }
    if (p->pev->waterlevel > 0) {
        TraceResult tr;
        UTIL_TraceLine(p->pev->origin, p->pev->origin - Vector(0, 0, 13), ignore_monsters, p->edict(), &tr);
        if (UTIL_PointContents(tr.vecEndPos) == CONTENT_WATER) p->pev->maxspeed = 30;
    }
    p->pev->maxspeed = Q_max(30.0f, p->pev->maxspeed);
}
void CofMovementJump(CBasePlayer* p) {
    if (JumpBlocked(p) || (p->pev->flags & FL_WATERJUMP) ||
        (p->pev->waterlevel >= 2 && p->pev->watertype != -19) || !(p->m_afButtonPressed & IN_JUMP) ||
        !(p->pev->flags & FL_ONGROUND) || !p->pev->groundentity) return;
    UTIL_MakeVectors(p->pev->angles); p->SetAnimation(PLAYER_JUMP);
    if (!p->m_cofUnlimitedStamina) p->m_cofStamina -= 15;
    CameraImpulse(p, Vector(-6, 1, 1));
    if (p->m_fLongJump && (p->pev->button & IN_DUCK) && p->pev->flDuckTime > 0 &&
        p->pev->velocity.Length() > 50) p->SetAnimation(PLAYER_SUPERJUMP);
    entvars_t* ground = VARS(p->pev->groundentity);
    if (ground && (ground->flags & FL_CONVEYOR)) p->pev->velocity = p->pev->velocity + p->pev->basevelocity;
}
bool CofMovementDodge(CBasePlayer* p, int direction) {
    if (!p || !p->IsAlive() || p->m_cofDisableDodge || (p->pev->flags & (FL_FROZEN | FL_DUCKING)) ||
        (p->pev->button & IN_DUCK) || p->pev->waterlevel > 2 || p->pev->flDuckTime != 0 ||
        p->m_cofStamina < 15 || p->m_cofDodgeNext > gpGlobals->time) return false;
    UTIL_MakeVectors(p->pev->v_angle);
    if (!p->m_cofUnlimitedStamina) p->m_cofStamina -= 15;
    const float z = p->pev->velocity.z;
    Vector kick = g_vecZero;
    switch (direction) {
    case 1: p->pev->velocity = gpGlobals->v_forward * 600; kick = Vector(4, 2, 2); break;
    case 2: p->pev->velocity = gpGlobals->v_forward * -600; kick = Vector(-4, 2, 2); break;
    case 3: p->pev->velocity = gpGlobals->v_right * -600; kick = Vector(2, 4, 2); break;
    case 4: p->pev->velocity = gpGlobals->v_right * 600; kick = Vector(2, -4, 2); break;
    }
    CameraImpulse(p, kick);
    p->pev->velocity.z = z; p->m_cofStaminaImpulse = 1; p->m_cofDodgeNext = gpGlobals->time + 1;
    return true;
}
bool CofMovementCommand(CBasePlayer* p, const char* command) {
    static const char* names[] = {"dodgeforward", "dodgebackward", "dodgeleft", "dodgeright"};
    for (int i = 0; i < 4; ++i) if (FStrEq(command, names[i])) { CofMovementDodge(p, i + 1); return true; }
    if (FStrEq(command, "dodgetoggle")) {
        if (p) p->m_cofDisableDodge = !p->m_cofDisableDodge;
        return true;
    }
    if (FStrEq(command, "tapgetup")) return true; // interactive get-up animation is not ported yet
    return false;
}
void CofMovementFallOver(CBasePlayer* p) {
    char sound[40]; std::snprintf(sound, sizeof(sound), "common/bodydrop%d.wav", RANDOM_LONG(1, 4));
    EMIT_SOUND_DYN(p->edict(), CHAN_AUTO, sound, 1, 0.8f, 0, 90);
    p->pev->velocity = p->pev->velocity * 0.5f; p->m_cofFallUntil = gpGlobals->time + 0.8f;
    p->pev->fuser3 = 1; FallMessage(p, 1);
    CameraImpulse(p, Vector(-30, RANDOM_LONG(-35, 35), RANDOM_LONG(-35, 35)));
    p->pev->flags &= ~Sprint; p->pev->maxspeed = Q_max(30.0f, WalkSpeed(p));
}
float CofMovementFallDamage(CBasePlayer* p) {
    p->m_flFallVelocity -= 580;
    return p->m_flFallVelocity * 100 / 444;
}
void CofMovementLand(CBasePlayer* p) {
    if (!(p->pev->flags & FL_ONGROUND)) return;
    if (p->pev->health > 0 && p->m_flFallVelocity >= 350) {
        if (p->pev->watertype != CONTENT_WATER && p->m_flFallVelocity > 580) {
            const float damage = CofMovementFallDamage(p);
            if (damage > p->pev->health) EMIT_SOUND(p->edict(), CHAN_ITEM, "common/bodysplat.wav", 1, 0.8f);
            if (damage > 0) {
                CofMovementFallOver(p);
                p->TakeDamage(VARS(INDEXENT(0)), VARS(INDEXENT(0)), damage, DMG_FALL);
                p->pev->punchangle.x = 0;
            }
        }
        if (p->IsAlive()) p->SetAnimation(PLAYER_WALK);
    }
    if (p->m_flFallVelocity > 64 && !g_pGameRules->IsMultiplayer())
        CSoundEnt::InsertSound(bits_SOUND_PLAYER, p->pev->origin, static_cast<int>(p->m_flFallVelocity), 0.2f);
    p->m_flFallVelocity = 0;
}

#include "movement_runtime_tests.inc"
