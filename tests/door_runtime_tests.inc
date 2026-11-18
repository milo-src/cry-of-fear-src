// Engine-backed checks for the recovered subset; no original DLL is executed.
#include <cstdlib>
#include <cmath>

static int doorTestFailures;
static void DoorCheck(bool condition, const char* name) {
    ALERT(at_console, "COF_DOOR_TEST %s %s\n", condition ? "PASS" : "FAIL", name);
    if (!condition) ++doorTestFailures;
}

static void DoorKey(CBaseEntity* entity, const char* key, const char* value) {
    KeyValueData kv = {const_cast<char*>(STRING(entity->pev->classname)),
                      const_cast<char*>(key), const_cast<char*>(value), FALSE};
    DispatchKeyValue(entity->edict(), &kv);
    DoorCheck(kv.fHandled != 0, key);
}

void CofDoorTestFrame() {
    if (!std::getenv("COF_DOORTEST")) return;
    static int phase;
    static float started;
    static Vector original, destination;
    static CInterDoor* door;
    static CBaseEntity* exit;
    static CBaseEntity* counter;
    CBaseEntity* player = UTIL_PlayerByIndex(1);
    if (!player || !player->IsAlive()) return;
    if (phase == 0) {
        original = player->pev->origin;
        destination = original + Vector(0, 0, 16);
        exit = CBaseEntity::Create("inter_door_exit", destination, Vector(0, 123, 0));
        CBaseEntity* raw = CBaseEntity::Create("inter_door", g_vecZero, g_vecZero);
        DoorCheck(raw && exit, "factories");
        if (!raw || !exit) { phase = 3; return; }
        door = static_cast<CInterDoor*>(raw);
        // Keep a test-only point from interfering with the map's collision.
        door->pev->solid = SOLID_NOT;
        exit->pev->targetname = ALLOC_STRING("cof_test_exit");
        door->pev->targetname = ALLOC_STRING("cof_test_door");
        door->pev->target = exit->pev->targetname;
        DoorCheck(door->ObjectCaps() == FCAP_IMPULSE_USE, "use_capability");
        DoorKey(door, "musicfadein", "7.25");
        DoorKey(door, "musicfadeout", "3.5");
        DoorKey(door, "silentroom", "-2");
        DoorCheck(door->m_iMusicFadeIn == 7.25f && door->m_iMusicFadeOut == 3.5f &&
                  door->m_bSilentRoom, "typed_keyvalues");
        door->pev->spawnflags = 4;
        door->Spawn();
        door->pev->solid = SOLID_NOT;
        DoorCheck(door->m_bDisabled && door->m_iMusicFadeIn == -1 && door->m_iMusicFadeOut == -1,
                  "spawn_disabled_and_resets_fades");
        CBaseEntity* control = CBaseEntity::Create("inter_door_disable", g_vecZero, g_vecZero);
        DoorCheck(control != nullptr, "disable_factory");
        if (!control) { phase = 3; return; }
        control->pev->target = door->pev->targetname;
        control->pev->frags = 1;
        control->Use(exit, control, USE_TOGGLE, 0);
        DoorCheck(door->m_bDisabled, "nonplayer_cannot_enable");
        control->Use(player, control, USE_OFF, 0);
        DoorCheck(!door->m_bDisabled, "frags_one_enables_ignoring_use_type");
        control->pev->frags = 0;
        control->Use(player, control, USE_ON, 1);
        DoorCheck(door->m_bDisabled, "frags_zero_disables");
        door->Use(player, player, USE_TOGGLE, 0);
        DoorCheck(!door->pev->owner, "disabled_use_rejected");
        control->pev->frags = -2;
        control->Use(player, control, USE_TOGGLE, 0);
        DoorCheck(!door->m_bDisabled, "negative_frags_enables");
        DoorKey(door, "lockedby", "test_key");
        door->Use(player, player, USE_TOGGLE, 0);
        DoorCheck(!door->pev->owner && door->IsLocked(), "locked_use_rejected");
        CInterDoor* other = static_cast<CInterDoor*>(CBaseEntity::Create("inter_door", g_vecZero, g_vecZero));
        DoorCheck(other != nullptr, "unlock_source_factory");
        if (!other) { phase = 3; return; }
        other->pev->solid = SOLID_NOT;
        DoorKey(other, "useunlock", "cof_test_door");
        other->Use(player, player, USE_TOGGLE, 0);
        DoorCheck(!door->IsLocked() && other->m_sUseUnlock == 0 && !other->pev->owner,
                  "useunlock_unlocks_other_door_once");
        door->Use(player, player, USE_TOGGLE, 0);
        DoorCheck(!door->pev->owner, "unlock_cooldown");
        CBaseEntity* change = CBaseEntity::Create("cof_inter_door_exitchange", g_vecZero, g_vecZero);
        DoorCheck(change != nullptr, "exit_change_factory");
        if (!change) { phase = 3; return; }
        change->pev->message = door->pev->targetname;
        change->pev->target = ALLOC_STRING("cof_test_changed");
        change->Use(player, change, USE_TOGGLE, 0);
        DoorCheck(door->pev->target == change->pev->target, "message_selects_target_to_rewrite");
        door->pev->target = exit->pev->targetname;
        counter = CBaseEntity::Create("trigger_counter", g_vecZero, g_vecZero);
        DoorCheck(counter != nullptr, "output_receiver");
        if (!counter) { phase = 3; return; }
        counter->pev->targetname = ALLOC_STRING("cof_test_output");
        static_cast<CBaseToggle*>(counter)->m_cTriggersLeft = 2;
        DoorKey(door, "propertarget", "cof_test_output");
        door->m_fNextUse = 0;
        door->Use(player, player, USE_TOGGLE, 0);
        DoorCheck(door->pev->owner == player->edict() && (player->pev->flags & FL_FROZEN) &&
                  (player->pev->flags & FL_NOTARGET), "sequence_starts");
        started = gpGlobals->time;
        phase = 1;
        UTIL_Remove(control); UTIL_Remove(change); UTIL_Remove(other);
    } else if (phase == 1 && gpGlobals->time > started + 1.5f) {
        DoorCheck(door->pev->owner == player->edict(), "transition_not_early");
        phase = 2;
    } else if (phase == 2 && (!door->pev->owner || gpGlobals->time > started + 2.5f)) {
        DoorCheck(!door->pev->owner && !(player->pev->flags & (FL_FROZEN | FL_NOTARGET)),
                  "scheduled_transition_releases_player");
        DoorCheck(std::fabs(player->pev->origin.x - destination.x) < 1 &&
                  std::fabs(player->pev->origin.y - destination.y) < 1 &&
                  std::fabs(player->pev->origin.z - (destination.z - player->pev->mins.z + 1)) < 4,
                  "scheduled_teleport_to_exit");
        DoorCheck(static_cast<CBaseToggle*>(counter)->m_cTriggersLeft == 1, "proper_target_fired");
        phase = 4;
    } else if (phase == 4 && gpGlobals->time > started + 2.5f) {
        // Allow the forced view-angle network update to reach the client and return.
        ALERT(at_console, "COF_DOOR_TEST_ANGLES view=%.3f body=%.3f destination=%.3f\n",
              player->pev->v_angle.y, player->pev->angles.y, exit->pev->angles.y);
        DoorCheck(std::fabs(player->pev->v_angle.y - 123) < 1, "exit_view_angle");
        door->pev->target = ALLOC_STRING("cof_missing_exit");
        door->pev->owner = player->edict();
        static_cast<CBasePlayer*>(player)->EnableControl(FALSE);
        door->EndSequence();
        DoorCheck(!door->pev->owner && !(player->pev->flags & FL_FROZEN), "missing_exit_releases_player_adaptation");
        UTIL_SetOrigin(player->pev, original);
        player->pev->velocity = g_vecZero;
        ALERT(at_console, "COF_DOOR_TEST_COMPLETE failures=%d\n", doorTestFailures);
        UTIL_Remove(door); UTIL_Remove(exit); UTIL_Remove(counter);
        phase = 3;
    }
}
