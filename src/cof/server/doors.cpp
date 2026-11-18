// Evidence-guided SDK port, not recovered original C++ or a binary ABI match.
// hl.dll SHA-256 and per-function addresses: analysis/doors/capture.json.
// Supported: single-player same-map doors, locks, disable/exit-change helpers.
// Unrecovered: endings, CoF music/player extensions, co-op.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "inventory.h"

class CInterDoor : public CBaseToggle
{
public:
    void Spawn() override;
    void Precache() override;
    void KeyValue(KeyValueData* data) override;
    int ObjectCaps() override { return FCAP_IMPULSE_USE; } // 0x100488a0 -> 8
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE, float) override;
    void EXPORT EndSequence();
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    static TYPEDESCRIPTION m_SaveData[];

    BOOL m_bDisabled;
    string_t m_iNewLevelDoorSound;
    BOOL m_bSilentRoom;
    string_t m_sMusic, m_sLockedBy, m_sLockedMsg, m_sUnlockedMsg;
    string_t m_sProperTarget, m_sUseUnlock;
    float m_fNextUse, m_iMusicFadeOut, m_iMusicFadeIn;

    bool IsLocked() const { return m_sLockedBy != 0; } // 0x10048540
    void Unlock(CBaseEntity* activator);
    void StartSequence(CBasePlayer* player);
};

LINK_ENTITY_TO_CLASS(inter_door, CInterDoor);

// Names and field types are present in the original save table at 0x10212480.
// SDK layout differs, so these saves are not compatible with original CoF saves.
TYPEDESCRIPTION CInterDoor::m_SaveData[] = {
    DEFINE_FIELD(CInterDoor, m_sMusic, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_sLockedBy, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_sLockedMsg, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_sUnlockedMsg, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_sProperTarget, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_sUseUnlock, FIELD_STRING),
    DEFINE_FIELD(CInterDoor, m_fNextUse, FIELD_TIME),
    DEFINE_FIELD(CInterDoor, m_iMusicFadeOut, FIELD_FLOAT),
    DEFINE_FIELD(CInterDoor, m_iMusicFadeIn, FIELD_FLOAT),
    DEFINE_FIELD(CInterDoor, m_bSilentRoom, FIELD_BOOLEAN),
    DEFINE_FIELD(CInterDoor, m_bDisabled, FIELD_BOOLEAN),
    DEFINE_FIELD(CInterDoor, m_iNewLevelDoorSound, FIELD_STRING),
};
IMPLEMENT_SAVERESTORE(CInterDoor, CBaseToggle);

void CInterDoor::KeyValue(KeyValueData* data) // 0x10048550
{
    struct StringField { const char* key; string_t* value; } fields[] = {
        {"opensound", &pev->noise}, {"closesound", &pev->noise1},
        {"music", &m_sMusic}, {"lockedby", &m_sLockedBy},
        {"lockedmsg", &m_sLockedMsg}, {"lockedsnd", &pev->noise2},
        {"unlockedsnd", &pev->noise3}, {"unlockedmsg", &m_sUnlockedMsg},
        {"propertarget", &m_sProperTarget}, {"useunlock", &m_sUseUnlock},
        {"newlevelsnd", &m_iNewLevelDoorSound},
    };
    for (auto& field : fields) {
        if (FStrEq(data->szKeyName, field.key)) {
            *field.value = ALLOC_STRING(data->szValue);
            data->fHandled = TRUE;
            return;
        }
    }
    if (FStrEq(data->szKeyName, "musicfadein"))
        m_iMusicFadeIn = atof(data->szValue);
    else if (FStrEq(data->szKeyName, "musicfadeout"))
        m_iMusicFadeOut = atof(data->szValue);
    else if (FStrEq(data->szKeyName, "silentroom"))
        m_bSilentRoom = atoi(data->szValue) != 0;
    else {
        CBaseToggle::KeyValue(data);
        return;
    }
    data->fHandled = TRUE;
}

void CInterDoor::Precache() // 0x100488c0
{
    const string_t sounds[] = {pev->noise, pev->noise1, pev->noise2, pev->noise3};
    for (string_t sound : sounds)
        if (sound) PRECACHE_SOUND(STRING(sound));
}

void CInterDoor::Spawn() // 0x10048bd0
{
    if (pev->spawnflags & 4) m_bDisabled = TRUE;
    Precache();
    pev->solid = SOLID_BSP;
    pev->movetype = MOVETYPE_PUSH;
    UTIL_SetOrigin(pev, pev->origin);
    UTIL_SetSize(pev, pev->mins, pev->maxs);
    // Test-created point entities lack a brush; map doors have a model.
    if (pev->model) SET_MODEL(ENT(pev), STRING(pev->model));
    m_fNextUse = gpGlobals->time;
    // The original resets both map-supplied fade values here, too.
    m_iMusicFadeIn = m_iMusicFadeOut = -1;
}

static void DoorSound(CBaseEntity* source, string_t sound, int channel)
{
    if (sound) EMIT_SOUND_DYN(ENT(source->pev), channel, STRING(sound), 1, 0.8f, 0, 100);
}

void CInterDoor::Unlock(CBaseEntity* activator) // 0x10048e40
{
    if (!activator) return;
    DoorSound(this, pev->noise3, CHAN_BODY);
    if (m_sUnlockedMsg) ClientPrint(activator->pev, HUD_PRINTCENTER, STRING(m_sUnlockedMsg));
    m_sLockedBy = m_sLockedMsg = 0;
    m_fNextUse = gpGlobals->time + 1;
}

void CInterDoor::Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) // 0x10048f70
{
    if (!activator || !activator->IsPlayer() ||
        !UTIL_IsMasterTriggered(m_sMaster, activator) || m_bDisabled ||
        m_fNextUse > gpGlobals->time) return;

    // Original checks five inventory predicates for this named bonus door.
    // Keep the gate closed until that subsystem is recovered.
    if (FStrEq(STRING(pev->targetname), "unlockablesdoor")) {
        ClientPrint(activator->pev, HUD_PRINTCENTER, "Bonus inventory check is not reconstructed yet.");
    } else {
        CBaseEntity* other = m_sUseUnlock
            ? UTIL_FindEntityByTargetname(nullptr, STRING(m_sUseUnlock)) : nullptr;
        if (other && FClassnameIs(other->pev, "inter_door")) {
            auto* door = static_cast<CInterDoor*>(other);
            if (door->IsLocked()) door->Unlock(activator);
            m_sUseUnlock = 0;
        } else if (pev->owner) {
            ClientPrint(activator->pev, HUD_PRINTCENTER, "Someone is using this door.");
        } else if (IsLocked()) {
            if (m_sLockedMsg) ClientPrint(activator->pev, HUD_PRINTCENTER, STRING(m_sLockedMsg));
            DoorSound(this, pev->noise2, CHAN_BODY);
        } else {
            pev->owner = activator->edict();
            StartSequence(static_cast<CBasePlayer*>(activator));
        }
    }
    m_fNextUse = gpGlobals->time + 1;
}

void CInterDoor::StartSequence(CBasePlayer* player) // 0x10048cb0
{
    DoorSound(player, pev->noise, CHAN_AUTO);
    UTIL_ScreenFade(player, g_vecZero, 0.5f, 2, 255, 5);
    player->EnableControl(FALSE);
    player->pev->flags |= FL_NOTARGET;
    // Port adaptation: Xash push entities schedule using local entity time.
    // CoF-only viewmodel, player-state, music and nearby-NPC helper are pending.
    SetThink(&CInterDoor::EndSequence);
    pev->nextthink = pev->ltime + 2;
}

void CInterDoor::EndSequence() // 0x10048070, ordinary target branch
{
    SetThink(nullptr);
    CBaseEntity* user = pev->owner ? CBaseEntity::Instance(pev->owner) : nullptr;
    if (!user || !user->IsPlayer()) { pev->owner = nullptr; return; }
    auto* player = static_cast<CBasePlayer*>(user);
    const char* target = STRING(pev->target);
    const bool special = FStrEq(target, "endingcheck") || FStrEq(target, "closegame1") ||
        FStrEq(target, "closegame2") || FStrEq(target, "closegame3") || FStrEq(target, "closegame4");
    CBaseEntity* exit = !special && pev->target
        ? UTIL_FindEntityByTargetname(nullptr, target) : nullptr;
    if (exit) {
        Vector position = exit->pev->origin;
        position.z = position.z - player->pev->mins.z + 1;
        UTIL_SetOrigin(player->pev, position);
        player->pev->angles = exit->pev->angles;
        player->pev->v_angle = exit->pev->angles;
        player->pev->velocity = player->pev->basevelocity = g_vecZero;
        player->pev->fixangle = 1;
        player->pev->flags &= ~FL_ONGROUND;
        DoorSound(player, pev->noise1, CHAN_AUTO);
    } else {
        // Deliberate robustness deviation: original returns leaving player busy.
        ALERT(at_console, "COF_DOOR unresolved destination '%s'; player released\n", target);
    }
    UTIL_ScreenFade(player, g_vecZero, 0.5f, 0, 255, 0);
    player->EnableControl(TRUE);
    player->pev->flags &= ~FL_NOTARGET;
    if (exit && m_sProperTarget)
        FireTargets(STRING(m_sProperTarget), this, this, USE_TOGGLE, 0);
    pev->owner = nullptr;
}

class CInterDoorExit : public CPointEntity
{
public:
    void Spawn() override { pev->solid = SOLID_NOT; } // 0x10102c40
};
LINK_ENTITY_TO_CLASS(inter_door_exit, CInterDoorExit);

class CInterDoorDisable : public CBaseEntity
{
public:
    void Spawn() override { // 0x10048c70
        pev->solid = SOLID_NOT;
        pev->effects = EF_NODRAW;
        pev->movetype = MOVETYPE_NONE;
    }
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override {
        if (!activator || !activator->IsPlayer() || !pev->target) return;
        CBaseEntity* entity = UTIL_FindEntityByTargetname(nullptr, STRING(pev->target));
        if (entity && FClassnameIs(entity->pev, "inter_door"))
            static_cast<CInterDoor*>(entity)->m_bDisabled = pev->frags == 0;
    } // 0x10049280: frags == 0 disables; any nonzero value enables.
};
LINK_ENTITY_TO_CLASS(inter_door_disable, CInterDoorDisable);

class CInterDoorExitChange : public CBaseEntity
{
public:
    void Spawn() override { // 0x10048ba0
        pev->solid = SOLID_NOT;
        pev->effects = EF_NODRAW;
        pev->movetype = MOVETYPE_NONE;
    }
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override {
        if (!activator || !activator->IsPlayer() || !pev->target || !pev->message) return;
        CBaseEntity* entity = UTIL_FindEntityByTargetname(nullptr, STRING(pev->message));
        if (entity) entity->pev->target = pev->target;
    } // 0x10048ef0: message selects an entity; target replaces its destination.
};
LINK_ENTITY_TO_CLASS(cof_inter_door_exitchange, CInterDoorExitChange);

// 0x100e4410: the key command calls Unlock directly, rather than Use.
bool CofUnlockDoorWithKey(CBaseEntity* entity, CBasePlayer* player,
                          const char* mapName, int slot) {
    if (!entity || !FClassnameIs(entity->pev, "inter_door")) return false;
    auto* door = static_cast<CInterDoor*>(entity);
    if (!door->IsLocked() || !FStrEq(STRING(door->m_sLockedBy), mapName)) return false;
    if (!(door->pev->spawnflags & 1)) CofInventoryRemove(player, slot);
    door->Unlock(player);
    return true;
}

// Opt-in integration checks run only with COF_DOORTEST in the test process.
#include "door_runtime_tests.inc"
