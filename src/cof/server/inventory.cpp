// Evidence-guided ordinary single-player keys, not original recovered C++.
// Addresses/hashes and deliberate port differences: analysis/inventory/behavior.md.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "cof_weapons.h"
#include "inventory.h"
#include <string>
#include "item_descriptor.h"
#include <cstdlib>

namespace {
int inventoryMessage;
int quickSlotsMessage;
cvar_t difficulty = {"difficulty", "1", FCVAR_SERVER};
using cof::Descriptor;
using cof::ParseDescriptor;

bool ReadDescriptor(const char* path, Descriptor& result) {
    const std::string name = path ? path : "";
    if (!cof::ValidDescriptorPath(name)) return false;
    int length = 0;
    byte* buffer = LOAD_FILE_FOR_ME(const_cast<char*>(path), &length);
    if (!buffer) return false;
    if (length <= 0 || length > 65536) { FREE_FILE(buffer); return false; }
    const std::string data(reinterpret_cast<char*>(buffer), length);
    FREE_FILE(buffer);
    return ParseDescriptor(data, result);
}

bool ResourceExists(const char* path) {
    int length = 0;
    byte* buffer = LOAD_FILE_FOR_ME(const_cast<char*>(path), &length);
    if (buffer) FREE_FILE(buffer);
    return buffer && length > 0;
}

void InventorySound(CBasePlayer* player, const char* sound, int channel = CHAN_ITEM) {
    EMIT_SOUND_DYN(player->edict(), channel, sound, 1, 0.8f, 0, 100);
}

bool AddKey(CBasePlayer* player, string_t description) { // 0x100dad40, non-weapon branch
    for (int slot = 1; slot <= 6; ++slot) {
        if (player->m_cofInventory[slot]) continue;
        player->m_cofInventory[slot] = description;
        CofInventorySync(player);
        InventorySound(player, "weapons/item_get.wav");
        return true;
    }
    ClientPrint(player->pev, HUD_PRINTCENTER, "Inventory is full.");
    return false;
}
}

void CofInventoryPrecache() {
    if (!inventoryMessage) inventoryMessage = REG_USER_MSG("Inventory", -1);
    if (!quickSlotsMessage) quickSlotsMessage = REG_USER_MSG("CofQuickSlots", 3);
    if (!CVAR_GET_POINTER("difficulty")) CVAR_REGISTER(&difficulty);
    PRECACHE_SOUND("weapons/item_get.wav");
    PRECACHE_SOUND("inventory/inventory_no.wav");
    PRECACHE_SOUND("inventory/inventory_click.wav");
}

// Original UpdateSlot (0x100e4360): slot, resetImages, descriptor, three mode bytes.
// This server currently implements ordinary six-slot single-player inventory.
void CofInventorySync(CBasePlayer* player) {
    if (!inventoryMessage || !player) return;
    for (int slot = 1; slot <= 6; ++slot) {
        const char* path = player->m_cofInventory[slot] ? STRING(player->m_cofInventory[slot]) : "";
        if (*path && !cof::ValidDescriptorPath(path)) path = "";
        MESSAGE_BEGIN(MSG_ONE, inventoryMessage, nullptr, player->pev);
        WRITE_BYTE(slot);
        WRITE_BYTE(0);
        WRITE_STRING(path);
        WRITE_BYTE(0); WRITE_BYTE(0); WRITE_BYTE(0);
        MESSAGE_END();
    }
    if (quickSlotsMessage) {
        MESSAGE_BEGIN(MSG_ONE, quickSlotsMessage, nullptr, player->pev);
        for (int i = 0; i < 3; ++i) WRITE_BYTE(player->m_cofQuickSlots[i]);
        MESSAGE_END();
    }
}

void CofInventoryRemove(CBasePlayer* player, int slot) { // 0x100dd990 subset
    if (slot < 1 || slot > 6) return;
    for (int i = 0; i < 3; ++i) if (player->m_cofQuickSlots[i] == slot) player->m_cofQuickSlots[i] = 0;
    player->m_cofInventory[slot] = 0;
    CofInventorySync(player);
}

bool CofInventoryUse(CBasePlayer* player, int slot) { // 0x100e4410, inter_door branches
    // Bounds/liveness validation is a deliberate robustness addition.
    if (!player || !player->IsAlive() || (player->pev->flags & FL_FROZEN) ||
        slot < 1 || slot > 6 || !player->m_cofInventory[slot]) return false;
    Descriptor description;
    if (!ReadDescriptor(STRING(player->m_cofInventory[slot]), description)) return false;
    const std::string name = description["map_name"];
    if (name.size() < 2 || name.size() > 127) return false;
    UTIL_MakeVectors(player->pev->v_angle);
    const Vector eye = player->pev->origin + player->pev->view_ofs;
    TraceResult trace;
    UTIL_TraceLine(eye, eye + gpGlobals->v_forward * 80, dont_ignore_monsters, player->edict(), &trace);
    CBaseEntity* hit = CBaseEntity::Instance(trace.pHit);
    if (hit && (hit->ObjectCaps() & (FCAP_IMPULSE_USE | FCAP_CONTINUOUS_USE | FCAP_ONOFF_USE)) &&
        CofUnlockDoorWithKey(hit, player, name.c_str(), slot)) {
        InventorySound(player, "inventory/inventory_click.wav");
        return true;
    }
    // Original fallback uses entity bounds in a 64-unit sphere, without LOS.
    CBaseEntity* nearby = nullptr;
    while ((nearby = UTIL_FindEntityInSphere(nearby, player->pev->origin, 64)) != nullptr) {
        if (CofUnlockDoorWithKey(nearby, player, name.c_str(), slot)) {
            InventorySound(player, "inventory/inventory_click.wav");
            return true;
        }
    }
    InventorySound(player, "inventory/inventory_no.wav");
    ClientPrint(player->pev, HUD_PRINTCENTER, "This item does not unlock a nearby door.");
    return false;
}

bool CofInventoryCommand(CBasePlayer* player, const char* command) {
    if (FStrEq(command, "cof_inventory_sync")) {
        CofInventorySync(player);
        return true;
    }
    const bool equip = FStrEq(command, "inventoryequip");
    if (!equip && !FStrEq(command, "inventoryuse")) return false;
    if (CMD_ARGC() == 2) {
        const char* argument = CMD_ARGV(1);
        // Six slots, no atoi overflow or accidental negative array index.
        if (argument[0] >= '1' && argument[0] <= '6' && argument[1] == '\0') {
            const int slot = argument[0] - '0';
            if (CofWeaponsInventoryUse(player, slot)) return true;
            Descriptor item;
            // Original inventoryequip routes item_key to inventoryuse (0x100e4231).
            if (!equip || (player && player->m_cofInventory[slot] &&
                ReadDescriptor(STRING(player->m_cofInventory[slot]), item) && item["classname"] == "item_key"))
                CofInventoryUse(player, slot);
        }
    }
    return true;
}

class CKeyitemModel : public CBaseAnimating {
public:
    float m_useTime; // Original field name in the save table at 0x10212610.
    int m_promptCount; // SDK adaptation of the original entvar at +0x248.
    void Spawn() override;
    void Precache() override;
    void KeyValue(KeyValueData* data) override;
    int ObjectCaps() override { return FCAP_ACROSS_TRANSITION | FCAP_IMPULSE_USE; }
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override;
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    static TYPEDESCRIPTION m_SaveData[];
};
LINK_ENTITY_TO_CLASS(item_key, CKeyitemModel);
TYPEDESCRIPTION CKeyitemModel::m_SaveData[] = {
    DEFINE_FIELD(CKeyitemModel, m_useTime, FIELD_TIME),
    DEFINE_FIELD(CKeyitemModel, m_promptCount, FIELD_INTEGER),
};
IMPLEMENT_SAVERESTORE(CKeyitemModel, CBaseAnimating);

void CKeyitemModel::KeyValue(KeyValueData* data) { // 0x1004de60
    if (FStrEq(data->szKeyName, "customsound")) {
        pev->noise = ALLOC_STRING(data->szValue);
        data->fHandled = TRUE;
    } else CBaseAnimating::KeyValue(data);
}

void CKeyitemModel::Precache() { // 0x1004e050
    if (pev->model) PRECACHE_MODEL(STRING(pev->model));
}

void CKeyitemModel::Spawn() { // 0x1004e160
    Descriptor description;
    if (!pev->message || !ReadDescriptor(STRING(pev->message), description) ||
        description["map_name"].size() < 2 || description["map_name"].size() > 127) {
        ALERT(at_console, "COF_KEY invalid descriptor '%s'; entity removed\n", STRING(pev->message));
        UTIL_Remove(this);
        return;
    }
    if (!pev->model && !description["3dmdl"].empty()) pev->model = ALLOC_STRING(description["3dmdl"].c_str());
    if (!pev->model || !ResourceExists(STRING(pev->model))) {
        ALERT(at_console, "COF_KEY missing model for '%s'; entity removed\n", STRING(pev->message));
        UTIL_Remove(this);
        return;
    }
    pev->renderfx = 99; // Original entvars table: +0x160 is renderfx, not health.
    Precache();
    SET_MODEL(edict(), STRING(pev->model));
    UTIL_SetOrigin(pev, pev->origin);
    pev->solid = SOLID_BBOX;
    pev->movetype = MOVETYPE_TOSS;
    // Exact unrotated sequence bounding box, as original 0x100180e0.
    Vector mins, maxs;
    if (ExtractBbox(pev->sequence, mins, maxs)) UTIL_SetSize(pev, mins, maxs);
    if ((pev->spawnflags & 1) && CVAR_GET_FLOAT("difficulty") != 4) {
        UTIL_Remove(this);
        return;
    }
    m_promptCount = (pev->spawnflags & 2) ? 3 : 0;
}

void CKeyitemModel::Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) { // 0x1004ded0
    if (!activator || m_useTime > gpGlobals->time || (pev->flags & FL_KILLME)) return;
    if (activator->IsPlayer()) {
        auto* player = static_cast<CBasePlayer*>(activator);
        if (pev->target) FireTargets(STRING(pev->target), this, this, USE_TOGGLE, 0);
        if ((pev->spawnflags & 2) && m_promptCount >= 1 && m_promptCount <= 3) {
            // Temporary English presentation; original localized story text pending.
            const char* prompts[] = {"A key... did I see it in a dream?", "I don't remember...", "There is something familiar about this."};
            ClientPrint(player->pev, HUD_PRINTCENTER, prompts[--m_promptCount]);
            return;
        }
        if (AddKey(player, pev->message)) {
            // Original also writes an unrecovered nightmare-story player field.
            pev->armorvalue = 0; // Original entvars +0x1c0.
            pev->solid = SOLID_NOT;
            UTIL_Remove(this);
        }
    }
    m_useTime = gpGlobals->time + 1;
}

#include "inventory_runtime_tests.inc"
