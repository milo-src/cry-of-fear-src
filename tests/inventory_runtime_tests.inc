// Opt-in engine integration; never starts the original game binaries.
#include <cmath>
static int inventoryFailures;
static void InventoryCheck(bool condition, const char* name) {
    ALERT(at_console, "COF_INVENTORY_TEST %s %s\n", condition ? "PASS" : "FAIL", name);
    if (!condition) ++inventoryFailures;
}
static void InventoryKV(CBaseEntity* entity, const char* key, const char* value) {
    KeyValueData kv = {const_cast<char*>(STRING(entity->pev->classname)),
                      const_cast<char*>(key), const_cast<char*>(value), FALSE};
    DispatchKeyValue(entity->edict(), &kv);
}
static CKeyitemModel* TestKey(const Vector& origin, const char* path = "inventoryitems/sewerkey.txt") {
    edict_t* edict = CREATE_NAMED_ENTITY(ALLOC_STRING("item_key"));
    auto* key = static_cast<CKeyitemModel*>(CBaseEntity::Instance(edict));
    if (!key) return nullptr;
    key->pev->origin = origin;
    key->pev->message = ALLOC_STRING(path);
    DispatchSpawn(edict);
    return key;
}

void CofInventoryTestFrame() {
    if (!std::getenv("COF_INVENTORYTEST")) return;
    static int phase;
    static bool saveChecked;
    static float due;
    static EHANDLE mapKey, mapDoor, mapExit;
    static Vector start, destination;
    auto* player = static_cast<CBasePlayer*>(UTIL_PlayerByIndex(1));
    if (!player || !player->IsAlive() || gpGlobals->time < 1) return;
    if (phase == 0) {
        start = player->pev->origin;
        Descriptor description;
        InventoryCheck(ReadDescriptor("inventoryitems/sewerkey.txt", description) &&
            description["map_name"] == "sewerkey" && description["3dmdl"] == "models/items/nyckel4.mdl",
            "real_descriptor_loaded");
        Descriptor invalid;
        InventoryCheck(!ReadDescriptor("inventoryitems/../config.cfg", invalid) &&
            !ReadDescriptor("inventoryitems/missing_test_file.txt", invalid), "invalid_descriptors_rejected");
        InventoryCheck(!ParseDescriptor("\"map_name\" { data \"sewerkey\" } \"unterminated", invalid) &&
            !ParseDescriptor("\"map_name\" { data \"sewerkey\"", invalid), "malformed_descriptor_tail_rejected");
        CKeyitemModel* key = TestKey(start + Vector(0, 0, 100));
        InventoryCheck(key && !(key->pev->flags & FL_KILLME), "item_key_factory_spawn");
        if (!key) { phase = 99; return; }
        InventoryCheck(key->ObjectCaps() == (FCAP_ACROSS_TRANSITION | FCAP_IMPULSE_USE), "key_use_capability");
        InventoryCheck(key->pev->renderfx == 99, "key_renderfx_field");
        InventoryCheck((key->pev->maxs - key->pev->mins).Length() > 0, "model_sequence_bounds");
        CBaseEntity* counter = CBaseEntity::Create("trigger_counter", g_vecZero, g_vecZero);
        counter->pev->targetname = ALLOC_STRING("cof_inventory_test_output");
        static_cast<CBaseToggle*>(counter)->m_cTriggersLeft = 20;
        key->pev->target = counter->pev->targetname;
        key->Use(counter, counter, USE_TOGGLE, 0);
        InventoryCheck(!player->m_cofInventory[1] && !(key->pev->flags & FL_KILLME), "nonplayer_pickup_rejected");
        for (int slot = 1; slot <= 6; ++slot) AddKey(player, key->pev->message);
        key->m_useTime = 0;
        key->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(player->m_cofInventory[6] && !(key->pev->flags & FL_KILLME), "full_inventory_keeps_world_item");
        InventoryCheck(static_cast<CBaseToggle*>(counter)->m_cTriggersLeft == 19, "target_fires_before_failed_pickup");
        InventoryCheck(key->m_useTime > gpGlobals->time, "pickup_cooldown");
        key->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(static_cast<CBaseToggle*>(counter)->m_cTriggersLeft == 19, "cooldown_blocks_target_repeat");
        InventoryCheck(!CofInventoryUse(player, 0) && !CofInventoryUse(player, 7) &&
            !CofInventoryUse(player, -1), "invalid_slot_bounds");
        CBaseEntity* door = CBaseEntity::Create("inter_door", start + Vector(0, 0, 200), g_vecZero);
        door->pev->solid = SOLID_NOT;
        InventoryKV(door, "lockedby", "wrong_key");
        InventoryCheck(!CofUnlockDoorWithKey(door, player, "sewerkey", 1) && player->m_cofInventory[1],
            "wrong_key_does_not_consume");
        InventoryKV(door, "lockedby", "sewerkey");
        door->pev->spawnflags = 1;
        InventoryCheck(CofUnlockDoorWithKey(door, player, "sewerkey", 1) && player->m_cofInventory[1],
            "door_flag_one_retains_key");
        InventoryKV(door, "lockedby", "sewerkey");
        door->pev->spawnflags = 0;
        InventoryCheck(CofUnlockDoorWithKey(door, player, "sewerkey", 1) && !player->m_cofInventory[1],
            "normal_door_consumes_key");
        key->m_useTime = 0;
        key->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(player->m_cofInventory[1] && (key->pev->flags & FL_KILLME), "pickup_reuses_first_empty_slot");
        InventoryCheck(static_cast<CBaseToggle*>(counter)->m_cTriggersLeft == 18, "successful_pickup_fires_target_once");
        key->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(static_cast<CBaseToggle*>(counter)->m_cTriggersLeft == 18, "removed_key_cannot_be_picked_twice");
        for (int slot = 1; slot <= 6; ++slot) CofInventoryRemove(player, slot);
        CKeyitemModel* missing = TestKey(start, "inventoryitems/missing_test_file.txt");
        InventoryCheck(missing && (missing->pev->flags & FL_KILLME), "missing_descriptor_removes_invalid_entity");
        UTIL_Remove(counter); UTIL_Remove(door);

        mapKey = UTIL_FindEntityByTargetname(nullptr, "appung");
        CBaseEntity* search = nullptr;
        while ((search = UTIL_FindEntityByClassname(search, "inter_door")) != nullptr) {
            // The actual map's first door targets this exit; no .ent key fixtures.
            if (FStrEq(STRING(search->pev->model), "*3")) { mapDoor = search; break; }
        }
        if (mapDoor) mapExit = UTIL_FindEntityByTargetname(nullptr, STRING(mapDoor->pev->target));
        InventoryCheck(mapKey && mapDoor && mapExit, "real_map_key_door_exit_found");
        if (!mapKey || !mapDoor || !mapExit) { phase = 99; return; }
        // Position the test observer, then exercise normal client +use processing.
        // Noclip only holds a deterministic view; key acquisition still uses PlayerUse.
        player->pev->movetype = MOVETYPE_NOCLIP;
        UTIL_SetOrigin(player->pev, mapKey->pev->origin + Vector(24, 0, 20));
        Vector angles = UTIL_VecToAngles(mapKey->Center() - player->EyePosition());
        angles.x = -angles.x;
        player->pev->v_angle = player->pev->angles = angles;
        player->pev->fixangle = 1;
        player->pev->velocity = g_vecZero;
        due = gpGlobals->time + 0.5f;
        phase = 1;
    } else if (phase == 1 && gpGlobals->time > due) {
        CLIENT_COMMAND(player->edict(), "+use\n");
        due = gpGlobals->time + 0.3f;
        phase = 2;
    } else if (phase == 2 && gpGlobals->time > due) {
        CLIENT_COMMAND(player->edict(), "-use\ncof_inventory\n");
        InventoryCheck(player->m_cofInventory[1] && FStrEq(STRING(player->m_cofInventory[1]),
            "inventoryitems/sewerkey.txt"), "real_key_pickup_through_client_use");
        InventoryCheck(!mapKey || (mapKey->pev->flags & FL_KILLME), "real_world_key_removed");
        // Hold a view against the actual brush door, within the original search range.
        Vector point = (mapDoor->pev->absmin + mapDoor->pev->absmax) * 0.5f;
        UTIL_SetOrigin(player->pev, point + Vector(24, 0, 0));
        player->pev->velocity = g_vecZero;
        Vector angles = UTIL_VecToAngles(point - player->EyePosition());
        angles.x = -angles.x;
        player->pev->v_angle = player->pev->angles = angles;
        player->pev->fixangle = 1;
        mapDoor->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(!mapDoor->pev->owner, "real_door_locked_before_key_use");
        due = gpGlobals->time + 0.5f;
        phase = 3;
    } else if (phase == 3 && gpGlobals->time > due) {
        if (std::getenv("COF_INVENTORYSAVE") && !saveChecked) {
            CLIENT_COMMAND(player->edict(), "save cof_inventory_test\n");
            due = gpGlobals->time + 0.4f;
            phase = 40;
            return;
        }
        CLIENT_COMMAND(player->edict(), "inventoryuse 1\n");
        due = gpGlobals->time + 0.3f;
        phase = 4;
    } else if (phase == 4 && gpGlobals->time > due) {
        InventoryCheck(!player->m_cofInventory[1], "real_inventoryuse_command_consumed_key");
        mapDoor->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(!mapDoor->pev->owner, "real_unlock_cooldown");
        due = gpGlobals->time + 1.0f;
        phase = 5;
    } else if (phase == 5 && gpGlobals->time > due) {
        destination = mapExit->pev->origin;
        destination.z = destination.z - player->pev->mins.z + 1;
        mapDoor->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(mapDoor->pev->owner == player->edict(), "real_unlocked_door_transition_started");
        due = gpGlobals->time + 2.5f;
        phase = 6;
    } else if (phase == 6 && (!mapDoor->pev->owner || gpGlobals->time > due)) {
        InventoryCheck(!mapDoor->pev->owner && !(player->pev->flags & FL_FROZEN), "real_door_transition_finished");
        InventoryCheck((player->pev->origin - destination).Length() < 4, "real_door_exit_reached");
        player->pev->movetype = MOVETYPE_WALK;
        ALERT(at_console, "COF_INVENTORY_TEST_COMPLETE failures=%d\n", inventoryFailures);
        phase = 99;
    } else if (phase == 40 && gpGlobals->time > due) {
        CofInventoryRemove(player, 1);
        InventoryCheck(!player->m_cofInventory[1], "save_test_mutates_live_inventory");
        CLIENT_COMMAND(player->edict(), "load cof_inventory_test\n");
        phase = 41;
    } else if (phase == 41 && player->m_cofInventory[1]) {
        InventoryCheck(FStrEq(STRING(player->m_cofInventory[1]), "inventoryitems/sewerkey.txt"),
            "save_load_restores_descriptor_string");
        CBaseEntity* search = nullptr;
        mapDoor = nullptr;
        while ((search = UTIL_FindEntityByClassname(search, "inter_door")) != nullptr) {
            if (FStrEq(STRING(search->pev->model), "*3")) { mapDoor = search; break; }
        }
        mapExit = mapDoor ? UTIL_FindEntityByTargetname(nullptr, STRING(mapDoor->pev->target)) : nullptr;
        InventoryCheck(mapDoor && mapExit, "save_load_restores_map_door_and_exit");
        if (!mapDoor || !mapExit) { phase = 99; return; }
        mapDoor->Use(player, player, USE_TOGGLE, 0);
        InventoryCheck(!mapDoor->pev->owner, "save_load_retains_door_lock");
        ALERT(at_console, "COF_INVENTORY_SAVE_COMPLETE failures=%d\n", inventoryFailures);
        saveChecked = true;
        due = gpGlobals->time + 0.5f;
        phase = 3;
    }
}
