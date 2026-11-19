// Opt-in integration checks in the real SDK runtime, never desktop input.
#include <cstdio>
class CCofWeaponTestTarget : public CBaseEntity {
public:
    void Spawn() override {
        pev->solid = SOLID_SLIDEBOX; pev->movetype = MOVETYPE_NONE;
        pev->health = 100; pev->takedamage = DAMAGE_YES;
        UTIL_SetSize(pev, Vector(-8,-8,-8), Vector(8,8,8));
        UTIL_SetOrigin(pev, pev->origin);
    }
    int BloodColor() override { return DONT_BLEED; }
    int TakeDamage(entvars_t*, entvars_t*, float damage, int) override { pev->health -= damage; return 1; }
};
LINK_ENTITY_TO_CLASS(cof_weapon_test_target, CCofWeaponTestTarget);
static int weaponFailures;
static void WeaponCheck(bool value, const char* name) {
    ALERT(at_console, "COF_WEAPON_TEST %s %s\n", value ? "PASS" : "FAIL", name);
    if (!value) ++weaponFailures;
}
static void WeaponDispose(CCofWeapon* weapon) {
    if (!weapon) return;
    if (weapon->m_pPlayer) {
        CBasePlayer* player = weapon->m_pPlayer;
        player->RemovePlayerItem(weapon, true);
        player->pev->weapons &= ~(1 << weapon->m_iId);
        if (weapon->m_inventorySlot) CofInventoryRemove(player, weapon->m_inventorySlot);
        weapon->m_pPlayer = nullptr;
    }
    weapon->pev->solid = SOLID_NOT;
    UTIL_Remove(weapon);
}
static void WeaponKey(CCofWeapon* weapon, const char* key, const char* value) {
    KeyValueData data={const_cast<char*>(weapon->Definition().classname),const_cast<char*>(key),const_cast<char*>(value),0};
    weapon->KeyValue(&data);
    WeaponCheck(data.fHandled != 0,"map_override_key_handled");
}
static CCofWeapon* WeaponCreate(const char* name, CBasePlayer* player) {
    CBaseEntity* entity = CBaseEntity::Create(name, player->pev->origin + Vector(0,0,40), g_vecZero);
    return entity ? static_cast<CCofWeapon*>(entity) : nullptr;
}
void CofWeaponsTestFrame() {
    if (!std::getenv("COF_WEAPONTEST")) return;
    static bool done;
    static int savePhase;
    static float saveDue;
    CBasePlayer* player = static_cast<CBasePlayer*>(UTIL_PlayerByIndex(1));
    if (!player || !player->IsAlive() || gpGlobals->time < 2) return;
    if (done) {
        if (savePhase == 1 && gpGlobals->time > saveDue) {
            CCofWeapon* saved = CofWeaponForSlot(player, 1);
            WeaponCheck(saved != nullptr, "save_fixture_equipped");
            if (saved) { saved->m_iClip = 1; saved->m_action = 0; saved->m_actionTime = 0; }
            player->m_cofQuickSlots[1] = 0;
            player->m_cofInventory[1] = 0;
            CLIENT_COMMAND(player->edict(), "load cof_weapons_test\n");
            savePhase = 2;
        } else if (savePhase == 2 && gpGlobals->time > saveDue + .5f && player->m_cofInventory[1]) {
            CCofWeapon* saved = CofWeaponForSlot(player, 1);
            WeaponCheck(saved && saved->m_iClip == 7 && saved->m_action == 11 &&
                saved->m_actionTime > gpGlobals->time && player->m_cofQuickSlots[1] == 1,
                "save_load_restores_clip_pending_deadline_inventory_quickslot");
            WeaponCheck(saved && FStrEq(saved->WorldModel(),"models/null.mdl") &&
                saved->m_customDescriptor && saved->m_customView, "save_load_restores_map_overrides");
            WeaponCheck(saved && player->m_pActiveItem == saved && player->m_rgAmmo[saved->m_iPrimaryAmmoType] == 23,
                "save_load_restores_owner_active_weapon_and_ammo");
            if (saved) { saved->m_action = 0; saved->m_actionTime = 0; WeaponDispose(saved); }
            CCofWeapon* left = WeaponCreate("weapon_mobile", player);
            CCofWeapon* right = WeaponCreate("weapon_glock", player);
            if (left && right) {
                left->Use(player,player,USE_TOGGLE,0); right->Use(player,player,USE_TOGGLE,0);
                WeaponCheck(CofSpecialPair(player,left->m_inventorySlot,right->m_inventorySlot), "persistent_pair_for_render_passes");
            } else WeaponCheck(false,"persistent_pair_creation");
            CLIENT_COMMAND(player->edict(), "save cof_weapons_pair_test\n");
            saveDue=gpGlobals->time+.4f; savePhase=3;
        } else if(savePhase==3 && gpGlobals->time>saveDue) {
            CofSpecialUnpair(player);
            CLIENT_COMMAND(player->edict(), "load cof_weapons_pair_test\n");
            savePhase=4;
        } else if(savePhase==4 && player->m_pActiveItem && FClassnameIs(player->m_pActiveItem->pev,"weapon_dualweapon")) {
            WeaponCheck(CofWeaponForSlot(player,1) && CofWeaponForSlot(player,2),"save_load_dual_restores_both_hand_owners");
            savePhase=5;
            ALERT(at_console, "COF_WEAPON_SAVE_COMPLETE failures=%d\n", weaponFailures);
            ALERT(at_console, "COF_WEAPON_TEST_COMPLETE failures=%d\n", weaponFailures);
        }
        return;
    }
    done = true;
    const Vector savedAngles = player->pev->v_angle;
    const Vector savedPunch = player->pev->punchangle;
    player->pev->v_angle = Vector(-90,0,0); player->pev->punchangle = g_vecZero;
    for (const char* const* list : {cofRangedClasses, cofSpecialClasses}) {
        for (int i = 0; list[i]; ++i) {
            CCofWeapon* weapon = WeaponCreate(list[i], player);
            char name[160]; std::snprintf(name, sizeof(name), "%s_factory", list[i]);
            WeaponCheck(weapon && !(weapon->pev->flags & FL_KILLME), name);
            if (!weapon) continue;
            const auto& def = weapon->Definition();
            if (def.kind == COF_DUAL || def.kind == COF_ACTION) { WeaponDispose(weapon); continue; }
            weapon->Use(player, player, USE_TOGGLE, 0);
            std::snprintf(name, sizeof(name), "%s_inventory_model_clip", list[i]);
            WeaponCheck(weapon->m_pPlayer == player && weapon->m_inventorySlot > 0 &&
                player->m_cofInventory[weapon->m_inventorySlot] &&
                (!def.viewModel || weapon->SequenceDuration(def.deploy) > 0) &&
                (def.clip <= 0 || weapon->m_iClip == std::min(def.clip, def.defaultAmmo)), name);
            if (weapon->m_pPlayer == player) {
                player->SwitchWeapon(weapon);
                if (def.kind == COF_FIREARM) {
                    weapon->SetAim(true, 60);
                    WeaponCheck(player->m_iFOV < 90 && player->m_cofWeaponSprintBlocked, "aim_movement_contract");
                    weapon->SetAim(false);
                    int clip = weapon->m_iClip;
                    weapon->Shoot(1, 0, 1, def.fire, .2f, nullptr);
                    WeaponCheck(weapon->m_iClip == clip - 1 && weapon->m_flNextPrimaryAttack > gpGlobals->time,
                        "fire_consumes_exactly_one_and_locks");
                    weapon->m_iClip = 0;
                    weapon->Shoot(1, 0, 1, def.fire, .2f, nullptr);
                    WeaponCheck(weapon->m_iClip == 0, "empty_fire_never_underflows");
                    weapon->m_iClip = std::max(0, def.clip - 2);
                    player->m_rgAmmo[weapon->m_iPrimaryAmmoType] = 1;
                    // Exercise base completion independently of per-gun reload phases.
                    weapon->CCofWeapon::Reload();
                    WeaponCheck(weapon->m_fInReload && weapon->m_iClip == def.clip - 2, "reload_delayed_until_animation");
                    weapon->m_reloadTime = gpGlobals->time - .01f;
                    CofWeaponsPlayerFrame(player);
                    WeaponCheck(!weapon->m_fInReload && weapon->m_iClip == def.clip - 1 &&
                        player->m_rgAmmo[weapon->m_iPrimaryAmmoType] == 0, "reload_conserves_short_reserve");
                }
                const int slot = weapon->m_inventorySlot;
                const int clip = weapon->m_iClip;
                weapon->DropToWorld();
                WeaponCheck(!weapon->m_pPlayer && !player->m_cofInventory[slot] && weapon->pev->solid == SOLID_BBOX,
                    "drop_detaches_inventory_and_restores_world_model");
                weapon->m_nextUse = 0; weapon->Use(player, player, USE_TOGGLE, 0);
                WeaponCheck(weapon->m_pPlayer == player && weapon->m_iClip == clip,
                    "repick_keeps_clip_without_refill");
            }
            WeaponDispose(weapon);
        }
    }
    const char* aliases[] = {"weapon_beretta","weapon_P228","weapon_mp5k","weapon_uzi","weapon_knife","weapon_hammer"};
    for (const char* alias : aliases) {
        CCofWeapon* weapon = WeaponCreate(alias, player);
        WeaponCheck(weapon && !FStrEq(STRING(weapon->pev->classname), alias), alias);
        WeaponDispose(weapon);
    }
    CCofWeapon* weapon = WeaponCreate("weapon_glock", player);
    if (weapon) {
        for (int i = 1; i <= 6; ++i) player->m_cofInventory[i] = MAKE_STRING("inventoryitems/sewerkey.txt");
        weapon->Use(player, player, USE_TOGGLE, 0);
        WeaponCheck(!weapon->m_pPlayer && !(weapon->pev->flags & FL_KILLME), "full_inventory_retains_pickup");
        for (int i = 1; i <= 6; ++i) player->m_cofInventory[i] = 0;
        WeaponDispose(weapon);
    }
    CofInventorySync(player);
    extern int CofSpecialTests(CBasePlayer*);
    weaponFailures += CofSpecialTests(player);
    extern int CofAmmoTests(CBasePlayer*);
    weaponFailures += CofAmmoTests(player);
    extern int CofRangedTests(CBasePlayer*);
    weaponFailures += CofRangedTests(player);
    // UTIL_Remove defers destruction until the next frame. Exclude the already
    // destroyed fixture models before tracing through their former positions.
    for (int e=1; e<gpGlobals->maxEntities; ++e) {
        edict_t* pending=INDEXENT(e);
        if (pending && !pending->free && (pending->v.flags & FL_KILLME)) pending->v.solid=SOLID_NOT;
    }
    // Trace and actual damage delivery, not only changes to counters/timers.
    CCofWeapon* knife = WeaponCreate("weapon_knife", player);
    CBaseEntity* target = CBaseEntity::Create("cof_weapon_test_target", player->GetGunPosition()+Vector(0,0,24), g_vecZero);
    if (knife && target) {
        knife->Use(player,player,USE_TOGGLE,0);
        player->SwitchWeapon(knife);
        UTIL_SetOrigin(target->pev, player->GetGunPosition()+Vector(0,0,24));
        knife->Swing(6,.16f,.5f,3);
        WeaponCheck(target->pev->health == 100, "melee_does_not_damage_at_button_press");
        knife->m_actionTime = gpGlobals->time - .001f;
        CofWeaponsPlayerFrame(player);
        WeaponCheck(target->pev->health == 94, "melee_delayed_trace_delivers_damage");
        WeaponDispose(knife);
        CCofWeapon* gun = WeaponCreate("weapon_glock",player);
        if (gun) {
            gun->Use(player,player,USE_TOGGLE,0);
            gun->Shoot(13,0,1,2,.1f,nullptr);
            WeaponCheck(target->pev->health == 81, "firearm_trace_delivers_explicit_skill_damage");
            WeaponDispose(gun);
        }
    } else WeaponCheck(false, "damage_fixture_creation");
    if (target) UTIL_Remove(target);
    player->pev->v_angle = savedAngles; player->pev->punchangle = savedPunch;
    player->m_flNextAttack = gpGlobals->time;
    player->pev->button = 0;
    CCofWeapon* saved = WeaponCreate("weapon_glock", player);
    if (saved) {
        saved->Use(player, player, USE_TOGGLE, 0);
        WeaponKey(saved,"customv",saved->Definition().viewModel);
        WeaponKey(saved,"customw","models/null.mdl");
        WeaponKey(saved,"customscript",saved->Definition().descriptor);
        WeaponKey(saved,"customv","../invalid.mdl");
        WeaponCheck(FStrEq(saved->ViewModel(),saved->Definition().viewModel),"invalid_override_keeps_valid_model");
        saved->m_iClip = 7;
        player->m_rgAmmo[saved->m_iPrimaryAmmoType] = 23;
        saved->m_action = 11; saved->m_actionTime = gpGlobals->time + 15;
        player->m_cofQuickSlots[1] = 1;
        CLIENT_COMMAND(player->edict(), "save cof_weapons_test\n");
        saveDue = gpGlobals->time + .4f;
        savePhase = 1;
    } else WeaponCheck(false, "save_fixture_creation");
}
