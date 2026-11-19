// Ammo pickup factories are populated from the native spawn/GiveAmmo contracts.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include <string>

struct CofAmmoDef { const char* classname; const char* ammo; const char* model; int amount, maximum; };
static const CofAmmoDef ammoDefs[] = {
    {"ammo_glock","glock","models/ammo/clip.mdl",15,150},
    {"ammo_p345","p345","models/ammo/p345_clip.mdl",8,80},
    {"ammo_revolver","revolver","models/ammo/ammo_revolver.mdl",5,50},
    {"ammo_rifle","rifle","models/ammo/ammo_rifle.mdl",5,50},
    {"ammo_g43","g43","models/ammo/ammo_g43.mdl",10,40},
    {"ammo_m16","m16","models/ammo/ammo_m16.mdl",20,200},
    {"ammo_vp70","vp70","models/ammo/vp70_clip.mdl",18,180},
    {"ammo_shells","shotgun","models/ammo/ammo_shotshells.mdl",9,50},
    {"ammo_mp5","mp5","models/ammo/ammo_tmp.mdl",30,300},
    {"ammo_tmp","tmp","models/ammo/ammo_tmp.mdl",30,300},
};
class CCofAmmo : public CBaseEntity {
public:
    virtual const CofAmmoDef& Definition() const = 0;
    string_t m_customWorld;
    const char* WorldModel() const { return m_customWorld ? STRING(m_customWorld) : Definition().model; }
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    static TYPEDESCRIPTION m_SaveData[];
    void KeyValue(KeyValueData* data) override {
        if (FStrEq(data->szKeyName,"customw")) {
            const std::string path(data->szValue);
            if (path.size()>11 && path.size()<128 && path.compare(0,7,"models/")==0 &&
                path.find("..")==std::string::npos && path.find('\\')==std::string::npos && path.substr(path.size()-4)==".mdl")
                m_customWorld=ALLOC_STRING(data->szValue);
            data->fHandled=TRUE;
        } else CBaseEntity::KeyValue(data);
    }
    void Precache() override {
        PRECACHE_MODEL(const_cast<char*>(WorldModel()));
        PRECACHE_SOUND("weapons/item_get.wav");
    }
    void Spawn() override {
        Precache(); SET_MODEL(edict(), WorldModel());
        pev->movetype = MOVETYPE_TOSS; pev->solid = SOLID_TRIGGER; pev->renderfx = 99;
        UTIL_SetSize(pev, Vector(-4,-4,0), Vector(4,4,8));
        // Native serialized entvars table: +0x254 is iuser4, not SDK's offset.
        if (pev->iuser4 == 1) SetTouch(&CCofAmmo::PickupTouch);
    }
    int ObjectCaps() override { return FCAP_ACROSS_TRANSITION | FCAP_IMPULSE_USE; }
    void EXPORT PickupTouch(CBaseEntity* other) { Use(other, other, USE_TOGGLE, 0); }
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override {
        if (!activator || !activator->IsPlayer() || !activator->IsAlive() || (pev->flags & FL_KILLME)) return;
        auto* player = static_cast<CBasePlayer*>(activator);
        const auto& def = Definition();
        if (player->GiveAmmo(def.amount, const_cast<char*>(def.ammo), def.maximum) < 0) return;
        EMIT_SOUND(edict(), CHAN_ITEM, "weapons/item_get.wav", 1, .8f);
        UTIL_Remove(this);
    }
};
TYPEDESCRIPTION CCofAmmo::m_SaveData[] = { DEFINE_FIELD(CCofAmmo,m_customWorld,FIELD_STRING) };
IMPLEMENT_SAVERESTORE(CCofAmmo,CBaseEntity);

#define COF_AMMO(cls,entity,index) class cls : public CCofAmmo { public: const CofAmmoDef& Definition() const override { return ammoDefs[index]; } }; LINK_ENTITY_TO_CLASS(entity,cls)
COF_AMMO(CCofGlockAmmo,ammo_glock,0);
COF_AMMO(CCofP345Ammo,ammo_p345,1);
COF_AMMO(CCofRevolverAmmo,ammo_revolver,2);
COF_AMMO(CCofRifleAmmo,ammo_rifle,3);
COF_AMMO(CCofG43Ammo,ammo_g43,4);
COF_AMMO(CCofM16Ammo,ammo_m16,5);
COF_AMMO(CCofVP70Ammo,ammo_vp70,6);
COF_AMMO(CCofShellAmmo,ammo_shells,7);
COF_AMMO(CCofMP5Ammo,ammo_mp5,8);
COF_AMMO(CCofTMPAmmo,ammo_tmp,9);
#undef COF_AMMO

void CofAmmoPrecache() {
    for (const CofAmmoDef& def : ammoDefs) {
        PRECACHE_MODEL(const_cast<char*>(def.model));
    }
}
int CofAmmoTests(CBasePlayer* player) {
    int failures = 0;
    for (const CofAmmoDef& def : ammoDefs) {
        int index = player->GetAmmoIndex(def.ammo);
        const int saved = index > 0 ? player->m_rgAmmo[index] : 0;
        CBaseEntity* ammo = CBaseEntity::Create(def.classname, player->pev->origin + Vector(0,0,40), g_vecZero);
        bool valid = ammo && index > 0;
        if (valid) {
            player->m_rgAmmo[index] = def.maximum;
            ammo->Use(player, player, USE_TOGGLE, 0);
            valid = !(ammo->pev->flags & FL_KILLME);
            player->m_rgAmmo[index] = def.maximum - 1;
            ammo->Use(player, player, USE_TOGGLE, 0);
            valid = valid && player->m_rgAmmo[index] == def.maximum && (ammo->pev->flags & FL_KILLME);
            player->m_rgAmmo[index] = saved;
        }
        ALERT(at_console, "COF_WEAPON_TEST %s %s_capacity_and_pickup\n", valid ? "PASS" : "FAIL", def.classname);
        if (!valid) ++failures;
        if (ammo) UTIL_Remove(ammo);
    }
    return failures;
}
