// Opt-in handler integration. Run only through the isolated -nosound smoke runner.
#include "entity_state.h"
extern void UpdateClientData(const struct edict_s*, int, struct clientdata_s*);
extern int AddToFullPack(struct entity_state_s*, int, edict_t*, edict_t*, int, int, unsigned char*);
extern "C" int CofPMRunTests(void);
namespace {
int movementFailures;
void MovementCheck(bool ok, const char* name) {
    ALERT(at_console, "COF_MOVEMENT_TEST %s %s\n", ok ? "PASS" : "FAIL", name);
    if (!ok) ++movementFailures;
}
bool MovementNear(float a, float b) { return std::fabs(a - b) < 0.002f; }
}
void CofMovementTestFrame() {
    if (!std::getenv("COF_MOVEMENTTEST")) return;
    static bool done;
    auto* p = static_cast<CBasePlayer*>(UTIL_PlayerByIndex(1));
    if (done || !p || !p->IsAlive() || gpGlobals->time < 1) return;
    done = true;
    const entvars_t saved = *p->pev;
    const float savedTime = gpGlobals->time;
    const int savedPressed = p->m_afButtonPressed;
    const float savedFallVelocity = p->m_flFallVelocity;
    const int savedFov = p->m_iFOV;
    gpGlobals->time = 20.5f;
    CofMovementSpawn(p);
    MovementCheck(!std::strcmp(g_engfuncs.pfnGetPhysicsKeyValue(p->edict(), "asd"), CVAR_GET_STRING("cof_walksteptime")) &&
        !std::strcmp(g_engfuncs.pfnGetPhysicsKeyValue(p->edict(), "bsd"), CVAR_GET_STRING("cof_runsteptime")) &&
        !std::strcmp(g_engfuncs.pfnGetPhysicsKeyValue(p->edict(), "csd"), CVAR_GET_STRING("cof_sprintsteptime")),
        "spawn_transports_native_step_cadence");
    p->m_cofNightmare = 0;
    // Keep authored stair volumes out of deterministic handler cases.
    UTIL_SetOrigin(p->pev, saved.origin + Vector(0, 0, 4096));
    p->pev->flags = FL_CLIENT | FL_ONGROUND;
    p->pev->movetype = MOVETYPE_WALK; p->pev->waterlevel = 0; p->pev->watertype = CONTENT_EMPTY;
    p->pev->takedamage = DAMAGE_AIM; p->pev->deadflag = DEAD_NO;
    p->pev->groundentity = INDEXENT(0); p->pev->flDuckTime = 0; p->pev->fuser3 = 0;
    p->pev->button = RunButton; p->pev->velocity = Vector(100, 0, 0);
    p->m_cofStaminaNext = 21;
    CofMovementPostThink(p);
    MovementCheck((p->pev->flags & Sprint) && MovementNear(p->m_cofStamina, 95) &&
        MovementNear(p->pev->maxspeed, Skill("sk_sprint_speed")), "run_starts_costs_five_percent_speed");
    p->m_cofStaminaNext = 20;
    CofMovementPostThink(p);
    MovementCheck(MovementNear(p->m_cofStamina, 93) && MovementNear(p->m_cofStaminaNext, 20.6f), "run_tick_two_tenths_gate");
    CofMovementPostThink(p);
    MovementCheck(MovementNear(p->m_cofStamina, 93), "same_time_no_second_run_tick");
    p->m_cofNightmare = 1; p->m_cofStaminaNext = 20;
    CofMovementPostThink(p);
    MovementCheck(MovementNear(p->m_cofStamina, 91) && MovementNear(p->m_cofStaminaNext, 20.55f), "nightmare_run_tick");
    p->m_cofNightmare = 0; p->pev->button = 0; p->pev->velocity = g_vecZero;
    p->pev->flags |= FL_DUCKING; p->m_cofStaminaNext = 20;
    CofMovementPostThink(p);
    MovementCheck(!(p->pev->flags & Sprint) && MovementNear(p->m_cofStamina, 93), "crouch_regenerates_two");
    // Exercise both showtriggers branches via the engine setter. Xash reads
    // CVAR_GET_FLOAT from the string, so changing cvar.value alone is invalid.
    cvar_t* showTriggers = CVAR_GET_POINTER("showtriggers");
    MovementCheck(showTriggers != nullptr, "stairs_debug_cvar_registered");
    const float savedShowTriggers = showTriggers ? showTriggers->value : 0;
    CVAR_SET_FLOAT("showtriggers", 0);
    CBaseEntity* stairs = CBaseEntity::Create("func_stairs", p->pev->origin, g_vecZero);
    MovementCheck(stairs != nullptr, "stairs_brush_factory");
    if (stairs) {
        MovementCheck(stairs->pev->solid == SOLID_TRIGGER && (stairs->pev->effects & EF_NODRAW),
            "stairs_factory_calls_hidden_trigger_precache");
        // Bind a real authored brush, so a missing model cannot make the
        // AddToFullPack NODRAW assertion pass for the wrong reason.
        CBaseEntity* authored = nullptr;
        for (int index = 1; index < gpGlobals->maxEntities; ++index) {
            edict_t* candidate = INDEXENT(index);
            if (!candidate || candidate->free || !candidate->v.modelindex || !candidate->v.model) continue;
            if ((STRING(candidate->v.model))[0] != '*' || candidate == stairs->edict()) continue;
            authored = CBaseEntity::Instance(candidate);
            if (authored) break;
        }
        MovementCheck(authored != nullptr, "stairs_test_has_authored_brush_model");
        if (authored) {
            SET_MODEL(stairs->edict(), STRING(authored->pev->model));
            entity_state_t packet = {};
            CVAR_SET_FLOAT("showtriggers", 0);
            stairs->Precache();
            MovementCheck(stairs->pev->modelindex != 0 && stairs->pev->solid == SOLID_TRIGGER &&
                (stairs->pev->effects & EF_NODRAW) &&
                AddToFullPack(&packet, stairs->entindex(), stairs->edict(), p->edict(), 0, 0, nullptr) == 0,
                "stairs_hidden_brush_excluded_from_network");
            CVAR_SET_FLOAT("showtriggers", 1);
            stairs->Precache();
            MovementCheck(!(stairs->pev->effects & EF_NODRAW) &&
                AddToFullPack(&packet, stairs->entindex(), stairs->edict(), p->edict(), 0, 0, nullptr) == 1,
                "stairs_debug_brush_included_in_network");
            CVAR_SET_FLOAT("showtriggers", 0);
            stairs->Precache();
        }
        UTIL_SetSize(stairs->pev, Vector(-64, -64, -64), Vector(64, 64, 64));
        UTIL_SetOrigin(stairs->pev, p->pev->origin);
        p->pev->flags &= ~FL_DUCKING; p->m_cofStairsNext = 0;
        CofMovementPostThink(p);
        MovementCheck(p->m_cofInStairs && MovementNear(p->pev->maxspeed, Skill("sk_stair_speed")), "stairs_occupancy_speed_override");
        p->pev->flags |= Sprint; p->pev->velocity = Vector(100, 0, 0);
        CofMovementPostThink(p);
        MovementCheck(p->pev->fuser3 == 1 && !(p->pev->flags & Sprint) &&
            MovementNear(p->pev->velocity.x, 50), "enter_stairs_sprinting_falls_over");
        clientdata_t packet = {};
        UpdateClientData(p->edict(), 0, &packet);
        MovementCheck(packet.fuser3 == 1 && packet.maxspeed == p->pev->maxspeed &&
            packet.flags == p->pev->flags, "prediction_packet_carries_stumble_speed_flags");
        // 100f4d70 evaluates stairs before cancelling a newly crouched sprint.
        p->pev->fuser3 = 0; p->m_cofFallUntil = 0;
        p->pev->flags |= Sprint | FL_DUCKING; p->pev->velocity = Vector(100, 0, 0);
        CofMovementPostThink(p);
        MovementCheck(p->pev->fuser3 == 1 && MovementNear(p->pev->velocity.x, 50),
            "stairs_stumble_precedes_crouch_cancellation");
        UTIL_Remove(stairs); p->m_cofStairsNext = 0;
        p->pev->fuser3 = 0; p->m_cofFallUntil = 0; p->pev->velocity = g_vecZero;
    }
    CVAR_SET_FLOAT("showtriggers", savedShowTriggers);
    p->pev->flags = FL_CLIENT | FL_ONGROUND;
    p->pev->button = RunButton; p->pev->velocity = Vector(100, 0, 0);
    p->pev->fuser3 = 1; p->m_cofFallUntil = 20; p->m_cofStamina = 100;
    p->m_cofStaminaNext = 99;
    CofMovementPreThink(p);
    MovementCheck(p->pev->fuser3 == 1 && p->m_cofFallUntil == 20,
        "stumble_does_not_release_before_pm_step");
    CofMovementPostThink(p);
    MovementCheck(p->pev->fuser3 == 0 && p->m_cofFallUntil == 0 && (p->pev->flags & Sprint),
        "stumble_releases_in_postthink_before_sprint");
    p->pev->flags &= ~Sprint; p->pev->fuser3 = 1; p->m_cofFallUntil = 22;
    p->m_cofStamina = 100;
    CofMovementPostThink(p);
    MovementCheck((p->pev->flags & Sprint) && p->pev->fuser3 == 1 && MovementNear(p->m_cofStamina, 95),
        "native_sprint_flag_can_start_during_pm_stumble_lock");
    p->pev->fuser3 = 0; p->m_cofFallUntil = 0;
    p->pev->flags &= ~Sprint; p->pev->button = 0; p->pev->velocity = g_vecZero;
    p->pev->flags &= ~FL_DUCKING; p->m_cofStamina = 0; p->m_cofStaminaNext = 20;
    CofMovementPostThink(p);
    MovementCheck((p->pev->flags & Exhausted) && MovementNear(p->m_cofStamina, 0.1f) &&
        MovementNear(p->m_cofStaminaNext, 25.5f), "exhaustion_five_second_delay_and_seed");
    gpGlobals->time = 25.6f;
    CofMovementPostThink(p);
    MovementCheck(!(p->pev->flags & Exhausted) && MovementNear(p->m_cofStamina, 1.1f), "exhaustion_clears_after_recovery");
    p->m_cofStamina = 15; p->m_cofDodgeNext = 0; p->pev->velocity = Vector(0, 0, -33);
    p->pev->vuser3 = g_vecZero; p->pev->punchangle = g_vecZero;
    p->pev->v_angle = g_vecZero;
    MovementCheck(CofMovementCommand(p, "dodgeforward") && MovementNear(p->m_cofStamina, 0) &&
        MovementNear(p->pev->velocity.x, 600) && MovementNear(p->pev->velocity.z, -33), "dodge_command_cost_direction_preserves_z");
    MovementCheck(p->pev->vuser3 == Vector(-80, 40, 40) && p->pev->punchangle == g_vecZero,
        "dodge_adds_native_spring_velocity_not_view_angle");
    p->m_cofStamina = 100;
    MovementCheck(!CofMovementDodge(p, 2) && MovementNear(p->m_cofStamina, 100), "dodge_cooldown_blocks_repeat");
    p->m_cofDodgeNext = 0; p->m_cofStamina = 14.99f;
    MovementCheck(!CofMovementDodge(p, 1), "dodge_threshold_fifteen");
    p->m_cofStamina = 100; CofMovementCommand(p, "dodgetoggle");
    MovementCheck(p->m_cofDisableDodge && !CofMovementDodge(p, 1), "dodge_toggle_command_disables_handler");
    CofMovementCommand(p, "dodgetoggle");
    p->m_cofStamina = 5; p->m_afButtonPressed = IN_JUMP; p->pev->button = IN_JUMP;
    p->pev->velocity = g_vecZero; p->pev->vuser3 = g_vecZero; p->Jump();
    MovementCheck(MovementNear(p->m_cofStamina, -10), "jump_uses_original_no_fifteen_threshold");
    MovementCheck(p->pev->vuser3 == Vector(120, 20, 20) && p->pev->punchangle == g_vecZero,
        "jump_adds_native_spring_velocity_not_view_angle");
    clientdata_t cameraPacket = {};
    UpdateClientData(p->edict(), 1, &cameraPacket);
    MovementCheck(cameraPacket.vuser3 == p->pev->vuser3,
        "prediction_packet_camera_spring_survives_weapon_export");
    p->m_afButtonPressed = 0; p->Jump();
    MovementCheck(MovementNear(p->m_cofStamina, -10), "jump_held_does_not_charge_twice");
    p->m_cofStaminaNext = 99; p->pev->button = 0;
    CofMovementPostThink(p);
    MovementCheck(MovementNear(p->m_cofStamina, 0) && !(p->pev->flags & Exhausted), "negative_stamina_clamps_after_exhaustion_gate");
    gpGlobals->time = 30.5f; p->pev->health = 50; p->m_cofStamina = 20; p->m_cofHealLast = 30;
    CofMovementQueueHeal(p, 12); CofMovementPreThink(p);
    MovementCheck(MovementNear(p->pev->health, 55) && p->m_cofHealQueue == 7 &&
        MovementNear(p->m_cofStamina, 25), "queued_heal_hp_and_stamina");
    gpGlobals->time = 30.51f; CofMovementPreThink(p);
    MovementCheck(MovementNear(p->pev->health, 60) && p->m_cofHealQueue == 2,
        "queued_heal_retains_original_integer_timestamp");
    CofMovementQueueHeal(p, 3);
    MovementCheck(p->m_cofHealQueue == 3, "heal_queue_replaces_not_accumulates");
    p->pev->health = 99; CofMovementPreThink(p);
    MovementCheck(MovementNear(p->pev->health, 100) && p->m_cofHealQueue == 0 &&
        MovementNear(p->m_cofStamina, 33), "heal_caps_hp_but_full_stamina_credit");
    CofMovementQueueHeal(p, 20); CofMovementPreThink(p);
    MovementCheck(p->m_cofHealQueue == 0 && MovementNear(p->m_cofStamina, 33), "full_health_discards_heal_queue");
    p->pev->health = 24; CofMovementPreThink(p);
    MovementCheck(p->m_cofLowHealth && !std::strcmp(g_engfuncs.pfnGetPhysicsKeyValue(p->edict(), "low"), "1"), "low_health_physics_key");
    p->pev->health = 25; CofMovementPreThink(p);
    MovementCheck(!p->m_cofLowHealth, "low_health_exact_twentyfive_boundary");
    p->pev->health = 24; CofMovementQueueHeal(p, 5); CofMovementPreThink(p);
    MovementCheck(p->m_cofLowHealth && MovementNear(p->pev->health, 29),
        "low_health_evaluated_before_queued_heal");
    CofMovementPreThink(p);
    MovementCheck(!p->m_cofLowHealth, "low_health_recovers_next_prethink_after_heal");
    p->pev->health = 100; p->pev->armorvalue = 100; p->m_flFallVelocity = 624.4f;
    p->pev->watertype = CONTENT_EMPTY; p->pev->flags = FL_CLIENT | FL_ONGROUND;
    CofMovementLand(p);
    MovementCheck(p->pev->health >= 90 && p->pev->health <= 91 && MovementNear(p->pev->armorvalue, 100) &&
        p->pev->fuser3 == 1 && p->m_flFallVelocity == 0, "landing_damage_bypasses_armor_falls_and_resets_velocity");
    const float landedHealth = p->pev->health;
    p->pev->watertype = CONTENT_WATER; p->m_flFallVelocity = 1100;
    CofMovementLand(p);
    MovementCheck(MovementNear(p->pev->health, landedHealth), "water_landing_suppresses_damage");
    p->m_flFallVelocity = 1024;
    MovementCheck(MovementNear(CofMovementFallDamage(p), 100) && MovementNear(p->m_flFallVelocity, 444), "fall_rule_formula_mutates_saved_speed");
    p->m_cofStamina = 40; p->m_cofStaminaNext = 0; p->pev->button = RunButton;
    p->pev->fuser3 = 0; p->pev->watertype = CONTENT_EMPTY; p->m_cofFallUntil = 0;
    CofMovementWeaponState(p, true, true); CofMovementPreThink(p); CofMovementPostThink(p);
    MovementCheck(p->m_cofHoldBreath && !(p->pev->flags & Sprint) && MovementNear(p->m_cofStamina, 39), "rifle_adapter_hold_breath_consumes_stamina");
    p->pev->button = 0; CofMovementPreThink(p);
    MovementCheck(!p->m_cofHoldBreath, "release_hold_breath");
    MovementCheck(!CofMovementCommand(p, "not_a_movement_command"), "unrelated_command_falls_through");
    movementFailures += CofPMRunTests();
    gpGlobals->time = savedTime;
    CofMovementSpawn(p); *p->pev = saved; UTIL_SetOrigin(p->pev, saved.origin);
    p->m_afButtonPressed = savedPressed; p->m_flFallVelocity = savedFallVelocity;
    p->m_iFOV = savedFov; CofMovementRestore(p); CofMovementSync(p);
    ALERT(at_console, "COF_MOVEMENT_TEST_COMPLETE failures=%d\n", movementFailures);
}
