// Static contracts and adaptation boundaries: analysis/weapons/special.md.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "monsters.h"
#include "gamerules.h"
#include "cof_weapons.h"
#include "movement.h"
#include "inventory.h"
#include "item_descriptor.h"
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
void CofSpecialUnpair(CBasePlayer*);
bool CofRangedTaclightOn(CCofWeapon*);
static void SendHandState(CCofWeapon*,int,int,bool);

namespace {
float Skill(const char* key, float fallback) {
    int difficulty = (int)CVAR_GET_FLOAT("skill");
    if (CVAR_GET_POINTER("difficulty")) difficulty = (int)CVAR_GET_FLOAT("difficulty");
    difficulty = max(1, min(4, difficulty));
    char name[80]; std::snprintf(name, sizeof(name), "%s%d", key, difficulty);
    return CVAR_GET_POINTER(name) ? CVAR_GET_FLOAT(name) : fallback;
}
CofWeaponDef Special(const char* name, int id, CofWeaponKind kind, const char* v,
                     const char* w, int draw, int idle, int fire, float damage = 0,
                     float cycle = 1, float delay = 0, const char* sound = nullptr,
                     const char* ammo = nullptr, int maximum = 0) {
    CofWeaponDef d = {}; d.classname = name; d.id = id; d.kind = kind;
    d.viewModel = v; d.worldModel = w; d.playerModel = "models/null.mdl";
    d.ammo = ammo; d.maxAmmo = maximum; d.clip = -1; d.defaultAmmo = id==1?100:(ammo?1:0);
    d.deploy = draw; d.idle = idle; d.fire = fire; d.reload = d.reloadEmpty = -1;
    d.damage = damage; d.cycle = cycle; d.impactDelay = delay; d.fireSound = sound;
    d.staminaCost = id == 18 ? 8 : 0;
    // Native action/dual have no inventory descriptor; the base exempts them.
    switch(id) {
    case 1:d.descriptor="inventoryitems/weapons/weapon_flashlight.txt";break;
    case 2:d.descriptor="inventoryitems/weapons/weapon_mobile.txt";break;
    case 5:d.descriptor="inventoryitems/weapons/weapon_camera.txt";break;
    case 6:d.descriptor="inventoryitems/weapons/weapon_switchblade.txt";break;
    case 8:d.descriptor="inventoryitems/weapons/weapon_syringe.txt";break;
    case 10:d.descriptor="inventoryitems/weapons/weapon_lantern.txt";break;
    case 12:d.descriptor="inventoryitems/weapons/weapon_nightstick.txt";break;
    case 13:d.descriptor="inventoryitems/weapons/weapon_flare.txt";break;
    case 16:d.descriptor="inventoryitems/weapons/weapon_branch.txt";break;
    case 18:d.descriptor="inventoryitems/weapons/weapon_sledgehammer.txt";break;
    case 22:d.descriptor="inventoryitems/weapons/weapon_radio.txt";break;
    case 24:d.descriptor="inventoryitems/weapons/weapon_axe.txt";break;
    case 25:d.descriptor="inventoryitems/weapons/weapon_booklaser.txt";break;
    default:d.descriptor="";break;
    }
    d.automatic = kind == COF_MELEE || kind == COF_BOOK; return d;
}
const CofWeaponDef axe = Special("weapon_axe",24,COF_MELEE,"models/weapons/axe/v_axe.mdl","models/weapons/axe/w_axe.mdl",0,1,2,55,.966667f,.26f,"weapons/axe/axe_swing.wav");
const CofWeaponDef branch = Special("weapon_branch",16,COF_MELEE,"models/weapons/branch/v_branch.mdl","models/weapons/branch/w_branch.mdl",1,0,3,10,.925f,.37f,"weapons/branch/branch_swing.wav");
const CofWeaponDef nightstick = Special("weapon_nightstick",12,COF_MELEE,"models/weapons/nightstick/v_nightstick.mdl","models/weapons/nightstick/w_nightstick.mdl",1,0,3,11,1,.31f,"weapons/nightstick/nightstick_swing.wav");
const CofWeaponDef sledge = Special("weapon_sledgehammer",18,COF_MELEE,"models/weapons/sledgehammer/v_sledgehammer.mdl","models/weapons/sledgehammer/w_sledgehammer.mdl",0,2,1,45,2.66f,1,"weapons/sledgehammer/sledgehammer_swing.wav");
const CofWeaponDef knife = Special("weapon_switchblade",6,COF_MELEE,"models/weapons/switchblade/v_switchblade.mdl","models/weapons/switchblade/w_switchblade.mdl",1,0,3,6,.5f,.16f,"weapons/switchblade/switchblade_swing.wav");
const CofWeaponDef syringe = Special("weapon_syringe",8,COF_SYRINGE,"models/weapons/syringe/v_syringe.mdl","models/weapons/syringe/w_syringe.mdl",1,0,3,0,5,2,nullptr,"syringe",10);
const CofWeaponDef flashlight = Special("weapon_flashlight",1,COF_LIGHT,"models/weapons/flashlight/v_flashlight.mdl","models/weapons/flashlight/w_flashlight.mdl",1,0,3,0,1,0,nullptr,"flashlight",200);
const CofWeaponDef mobile = Special("weapon_mobile",2,COF_LIGHT,"models/weapons/mobile/v_mobile.mdl","models/weapons/mobile/w_mobile.mdl",2,0,4);
const CofWeaponDef lantern = Special("weapon_lantern",10,COF_LIGHT,"models/weapons/lantern/v_lantern.mdl","models/weapons/lantern/w_lantern.mdl",0,2,3);
const CofWeaponDef flare = Special("weapon_flare",13,COF_LIGHT,"models/weapons/flare/v_flare.mdl","models/weapons/flare/w_flare.mdl",0,2,3,0,1.5f,.86f,nullptr,"flares",5);
const CofWeaponDef radio = Special("weapon_radio",22,COF_LIGHT,"models/weapons/radio/v_radio.mdl","models/null.mdl",1,0,3);
const CofWeaponDef camera = Special("weapon_camera",5,COF_CAMERA,"models/weapons/camera/v_camera.mdl","models/weapons/camera/w_camera.mdl",7,0,3);
const CofWeaponDef book = Special("weapon_booklaser",25,COF_BOOK,"models/weapons/booklaser/v_booklazer.mdl","models/weapons/booklaser/w_booklaser.mdl",2,0,1);
const CofWeaponDef action = Special("weapon_action",17,COF_ACTION,"models/weapons/v_actions.mdl","models/null.mdl",0,0,6);
const CofWeaponDef dual = Special("weapon_dualweapon",15,COF_DUAL,"models/null.mdl","models/null.mdl",0,0,0);
const int InjectAction = 100, TogglePhone = 101, IgniteAction = 102, ThrowAction = 103, ConsumeAction = 104, BatteryMidAction = 105, BatteryFixAction = 106;
int flameSprite;
void Light(const Vector& point, int radius, int r, int g, int b) {
    MESSAGE_BEGIN(MSG_PVS, SVC_TEMPENTITY, point);
    WRITE_BYTE(TE_DLIGHT); WRITE_COORD(point.x); WRITE_COORD(point.y); WRITE_COORD(point.z);
    WRITE_BYTE(radius / 10); WRITE_BYTE(r); WRITE_BYTE(g); WRITE_BYTE(b); WRITE_BYTE(2); WRITE_BYTE(0);
    MESSAGE_END();
}
}

// A thrown flare remains a world light after the held item is consumed.
class CCofBurningFlare : public CBaseEntity {
public:
    void Spawn() override {
        PRECACHE_MODEL("models/weapons/flare/w_flare.mdl");
        PRECACHE_SOUND("weapons/flare/flare_burn.wav");
        SET_MODEL(ENT(pev), "models/weapons/flare/w_flare.mdl");
        pev->movetype = MOVETYPE_TOSS; pev->solid = SOLID_BBOX;
        UTIL_SetSize(pev, Vector(-2,-2,-2), Vector(2,2,2));
        SetThink(&CCofBurningFlare::Burn); pev->nextthink = gpGlobals->time + .1f;
    }
    void EXPORT Burn() {
        if (gpGlobals->time >= pev->dmgtime || pev->waterlevel == 3) {
            STOP_SOUND(ENT(pev),CHAN_WEAPON,"weapons/flare/flare_burn.wav");
            UTIL_Remove(this); return;
        }
        Light(pev->origin, 200, 255, 100, 55);
        if (gpGlobals->time >= pev->pain_finished) {
            EMIT_SOUND(ENT(pev),CHAN_WEAPON,"weapons/flare/flare_burn.wav",.3f,ATTN_NORM);
            pev->pain_finished = gpGlobals->time + 6.9f;
        }
        pev->nextthink = gpGlobals->time + .1f;
    }
};
// Native flashlight_battery.mdl is absent from this installation; use the
// shipped phone_battery mesh as an explicit resource adapter.
class CCofFlashlightBattery : public CBaseEntity {
public:
    void Precache() override {
        PRECACHE_MODEL("models/items/phone_battery.mdl");
        PRECACHE_SOUND("weapons/item_get.wav");
    }
    void Spawn() override {
        Precache(); SET_MODEL(edict(),"models/items/phone_battery.mdl");
        pev->movetype=MOVETYPE_TOSS; pev->solid=SOLID_TRIGGER; pev->renderfx=99;
        UTIL_SetSize(pev,Vector(-4,-4,0),Vector(4,4,8));
        if(pev->iuser4==1) SetTouch(&CCofFlashlightBattery::PickupTouch);
    }
    int ObjectCaps() override { return FCAP_ACROSS_TRANSITION|FCAP_IMPULSE_USE; }
    void EXPORT PickupTouch(CBaseEntity* other) { Use(other,other,USE_TOGGLE,0); }
    void Use(CBaseEntity* activator,CBaseEntity*,USE_TYPE,float) override {
        if(!activator || !activator->IsPlayer() || !activator->IsAlive() || (pev->flags&FL_KILLME)) return;
        if(static_cast<CBasePlayer*>(activator)->GiveAmmo(100,"flashlight",200)<0) return;
        EMIT_SOUND(edict(),CHAN_ITEM,"weapons/item_get.wav",1,.8f); UTIL_Remove(this);
    }
};
LINK_ENTITY_TO_CLASS(ammo_flashlightbattery,CCofFlashlightBattery);
LINK_ENTITY_TO_CLASS(cof_burning_flare, CCofBurningFlare);

class CCofAccessory : public CBaseEntity {
public:
    virtual const char* ModelPath() const=0;
    virtual const char* DescriptionPath() const=0;
    void Precache() override { PRECACHE_MODEL(const_cast<char*>(ModelPath())); PRECACHE_SOUND("weapons/item_get.wav"); }
    void Spawn() override {
        Precache();SET_MODEL(edict(),ModelPath());pev->movetype=MOVETYPE_TOSS;pev->solid=SOLID_TRIGGER;
        pev->renderfx=99;pev->message=ALLOC_STRING(DescriptionPath());
        UTIL_SetSize(pev,Vector(-16,-16,0),Vector(16,16,16));
        SetTouch(&CCofAccessory::PickupTouch);
    }
    int ObjectCaps() override { return FCAP_ACROSS_TRANSITION|FCAP_IMPULSE_USE; }
    void EXPORT PickupTouch(CBaseEntity* other) {
        // Native MyTouch100b5250/100b56b0 requires player use bit0x20.
        if(other && (other->pev->button&IN_USE)) Use(other,other,USE_TOGGLE,0);
    }
    void Use(CBaseEntity* activator,CBaseEntity*,USE_TYPE,float) override {
        if(!activator || !activator->IsPlayer() || !activator->IsAlive() || (pev->flags&FL_KILLME)) return;
        CBasePlayer* player=static_cast<CBasePlayer*>(activator);
        for(int slot=1;slot<=6;++slot) if(!player->m_cofInventory[slot]) {
            player->m_cofInventory[slot]=ALLOC_STRING(DescriptionPath());
            SetTouch(nullptr);pev->solid=SOLID_NOT;
            if(pev->target) FireTargets(STRING(pev->target),player,this,USE_TOGGLE,0);
            EMIT_SOUND(edict(),CHAN_ITEM,"weapons/item_get.wav",1,.8f);
            CofInventorySync(player);UTIL_Remove(this);return;
        }
        ClientPrint(player->pev,HUD_PRINTCENTER,"Inventory is full.");
    }
};
class CCofTaclightItem : public CCofAccessory {
public:
    const char* ModelPath() const override {return "models/weapons/glock/glock_taclight.mdl";}
    const char* DescriptionPath() const override {return "inventoryitems/taclight.txt";}
};
class CCofPhoneBatteryItem : public CCofAccessory {
public:
    const char* ModelPath() const override {return "models/items/phone_battery.mdl";}
    const char* DescriptionPath() const override {return "inventoryitems/mobile_battery.txt";}
};
LINK_ENTITY_TO_CLASS(item_glocktaclight,CCofTaclightItem);
LINK_ENTITY_TO_CLASS(item_phonebattery,CCofPhoneBatteryItem);

class CCofSpecial : public CCofWeapon {
public:
    float m_lightUntil, m_lightNext, m_burnNext;
    int m_batteryPending;
    EHANDLE m_healTarget;
    static TYPEDESCRIPTION m_SaveData[];
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    void Precache() override {
        CCofWeapon::Precache();
        const char* sounds[] = {"items/flashlight1.wav","weapons/mobile/punch_swing.wav",
            "weapons/syringe/syringe_inject.wav","weapons/syringe/syringe_insert.wav",
            "weapons/flare/flare_ignite.wav","weapons/flare/flare_burn.wav",
            "weapons/camera/take_photo.wav","weapons/camera/flash_charge.wav",
            "weapons/booklaser/flamethrower_burn.wav","weapons/booklaser/flamethrower_end.wav",
            "weapons/booklaser/flamethrower_ignite.wav",
            "weapons/mobile/punch_smack.wav","weapons/axe/axe_hitbody.wav","weapons/axe/axe_hit.wav",
            "weapons/branch/branch_hit.wav","weapons/sledgehammer/sledgehammer_hitbody.wav","weapons/sledgehammer/sledgehammer_hit.wav",
            "weapons/nightstick/nightstick_hitbody1.wav","weapons/nightstick/nightstick_hitbody2.wav",
            "weapons/nightstick/nightstick_hitwall1.wav","weapons/nightstick/nightstick_hitwall2.wav",
            "weapons/switchblade/switchblade_hitbody1.wav","weapons/switchblade/switchblade_hitbody2.wav",
            "weapons/switchblade/switchblade_hitwall1.wav","weapons/switchblade/switchblade_hitwall2.wav"};
        for (const char* sound : sounds) PRECACHE_SOUND((char*)sound);
        flameSprite = PRECACHE_MODEL("sprites/fire.spr");
        if (Definition().id == 1) PRECACHE_MODEL("models/items/phone_battery.mdl");
        if (Definition().id == 2) {
            PRECACHE_MODEL("models/weapons/glock/glock_taclight.mdl");
            PRECACHE_SOUND("weapons/sleeve_generic2.wav");PRECACHE_SOUND("weapons/sleeve_generic3.wav");
            PRECACHE_SOUND("weapons/rifle/rifle_insert.wav");
        }
        if (Definition().id == 13) PRECACHE_MODEL("models/weapons/flare/w_flare.mdl");
    }
    BOOL Deploy() override {
        const BOOL result = CCofWeapon::Deploy();
        if (m_pPlayer && (Definition().id == 1 || Definition().id == 2)) {
            if (m_mode) m_pPlayer->pev->effects |= EF_DIMLIGHT;
            else m_pPlayer->pev->effects &= ~EF_DIMLIGHT;
        }
        if (result && Definition().id == 6 && m_mode) Animate(6);
        return result;
    }
    void Holster(int skiplocal = 0) override {
        if (m_pPlayer && (Definition().id == 1 || Definition().id == 2)) m_pPlayer->pev->effects &= ~EF_DIMLIGHT;
        if (Definition().kind == COF_BOOK) StopBook();
        m_healTarget = nullptr; CCofWeapon::Holster(skiplocal);
    }
    void PrimaryAttack() override {
        if (!m_pPlayer || m_action) return;
        const CofWeaponDef& d = Definition();
        if (d.kind == COF_MELEE) {
            int sequence = d.fire; float damage = d.damage, cycle = d.cycle;
            if (d.id == 6) { sequence = RANDOM_LONG(0,2) ? (m_mode ? 18 : 16) : (m_mode ? 8 : 3); damage = Skill(m_mode ? "sk_cof_2switchblade" : "sk_cof_switchblade",m_mode ? 9 : 6); cycle = m_mode ? .9f : .5f; }
            if (d.id == 12) { sequence = RANDOM_LONG(3,5); damage = Skill("sk_cof_nightstick",11); }
            if (d.id == 16) { sequence = RANDOM_LONG(3,4); damage = Skill("sk_cof_branch",10); cycle = SequenceDuration(sequence); }
            if (d.id == 24) { damage = Skill("sk_cof_axe",55); cycle = SequenceDuration(sequence); }
            if (d.id == 18) { damage = Skill("sk_cof_sledgehammer",45); if (m_pPlayer->m_cofStamina < 8) return; }
            Swing(damage,d.impactDelay,cycle,sequence,d.id == 18 ? 8 : 0);
            return;
        }
        switch (d.id) {
        case 8:
            if (!HasAmmo()) { PlayEmptySound(); return; }
            m_healTarget = m_pPlayer; Animate(3); Lock(5); m_action = InjectAction; m_actionTime = gpGlobals->time + 2; break;
        case 1:
            m_mode = !m_mode; Animate(3); Lock(.5f);
            if (m_mode) m_pPlayer->pev->effects |= EF_DIMLIGHT; else m_pPlayer->pev->effects &= ~EF_DIMLIGHT;
            EMIT_SOUND(ENT(pev),CHAN_WEAPON,"items/flashlight1.wav",1,ATTN_NORM); break;
        case 2:
            Animate(m_mode ? 8 : 4); Lock(1); m_action = TogglePhone;
            m_actionTime = gpGlobals->time + (m_mode ? .66f : .23f); break;
        case 10: case 22: break; // Native primary is empty; melee is secondary.
        case 13:
            if (!HasAmmo()) { PlayEmptySound(); return; }
            Animate(m_mode ? 7 : 3); Lock(1.5f); m_action = m_mode ? ThrowAction : IgniteAction;
            m_actionTime = gpGlobals->time + (m_mode ? .9f : .86f); break;
        case 5: Photograph(); break;
        case 25:
            if (!m_mode) { m_mode = 1; Animate(1); m_burnNext = gpGlobals->time + .1f;
                EMIT_SOUND(ENT(pev),CHAN_WEAPON,"weapons/booklaser/flamethrower_burn.wav",1,ATTN_NORM);
                EMIT_SOUND(ENT(pev),CHAN_ITEM,"weapons/booklaser/flamethrower_ignite.wav",1,ATTN_NORM); }
            Lock(.1f); break;
        // Native action is an animation driver, not an inventory firearm.
        case 17: break;
        }
    }
    void SecondaryAttack() override {
        if (!m_pPlayer || m_action) return;
        const int id = Definition().id;
        if (id == 6) { m_mode = !m_mode; Animate(m_mode ? 4 : 9); Lock(1.5f); return; }
        if (id == 16) { Swing(Skill("sk_cof_weapon_melee",5),.3f,1,8); return; }
        if (id == 8) {
            if (!g_pGameRules->IsMultiplayer() || !HasAmmo()) return;
            UTIL_MakeVectors(m_pPlayer->pev->v_angle);
            TraceResult tr; Vector from = m_pPlayer->GetGunPosition();
            UTIL_TraceLine(from,from + gpGlobals->v_forward*48,dont_ignore_monsters,ENT(m_pPlayer->pev),&tr);
            CBaseEntity* target = CBaseEntity::Instance(tr.pHit);
            if (target && target->IsPlayer() && target->IsAlive() && target->pev->health < 100) {
                m_healTarget = target; Animate(4); Lock(8); m_action = InjectAction; m_actionTime = gpGlobals->time+1.5f;
            } else { Animate(5); Lock(1); }
            return;
        }
        if (id == 2 || id == 22) Swing(Skill("sk_cof_punch",5),.133f,1,id == 22 ? 3 : (m_mode ? 11 : 10));
        else if (id == 1 || id == 10 || id == 13) Swing(Skill("sk_cof_weapon_melee",5),.3f,1,id == 1 ? 10 : (id == 10 ? 3 : (m_mode ? 22 : 17)));
    }
    void Aim() override { if (Definition().id == 6) SecondaryAttack(); }
    void ExtraAction() override { if (Definition().id == 6) SecondaryAttack(); }
    void PendingAction() override {
        if (!m_pPlayer) return;
        const int pending = m_action;
        if (pending < InjectAction) {
            if (pending == 1 && (Definition().id == 6 || Definition().kind == COF_LIGHT)) {
                MeleeImpact(m_actionDamage,32); m_action=0; m_actionTime=0; SyncMovement();
            } else CCofWeapon::PendingAction();
            return;
        }
        m_action = 0; m_actionTime = 0;
        if (pending == InjectAction) {
            CBaseEntity* target = m_healTarget; m_healTarget = nullptr;
            if (!target || !target->IsPlayer() || !target->IsAlive() || !HasAmmo()) return;
            CofMovementQueueSyringe(static_cast<CBasePlayer*>(target));
            EMIT_SOUND(ENT(m_pPlayer->pev),CHAN_ITEM,"weapons/syringe/syringe_inject.wav",1,ATTN_NORM);
            Consume(); if (HasAmmo()) { Animate(1); } else { m_action=ConsumeAction; m_actionTime=gpGlobals->time+1.5f; }
        } else if (pending == TogglePhone) {
            m_mode = !m_mode;
            if (m_mode) m_pPlayer->pev->effects |= EF_DIMLIGHT; else m_pPlayer->pev->effects &= ~EF_DIMLIGHT;
        } else if (pending == IgniteAction) {
            m_mode = 1;
            const float times[] = {120,90,60,30}; int difficulty = max(1,min(4,(int)CVAR_GET_FLOAT("difficulty")));
            m_lightUntil = gpGlobals->time + Skill("sk_flare_burn_time",times[difficulty-1]);
            EMIT_SOUND(ENT(m_pPlayer->pev),CHAN_ITEM,"weapons/flare/flare_ignite.wav",1,ATTN_NORM);
        } else if (pending == ThrowAction) {
            UTIL_MakeVectors(m_pPlayer->pev->v_angle);
            CBaseEntity* thrown = CBaseEntity::Create("cof_burning_flare",m_pPlayer->GetGunPosition()+gpGlobals->v_forward*16,m_pPlayer->pev->v_angle,ENT(m_pPlayer->pev));
            if (thrown) { thrown->pev->velocity = m_pPlayer->pev->velocity+gpGlobals->v_forward*400+Vector(0,0,100); thrown->pev->dmgtime=m_lightUntil; }
            Consume(); m_mode=0; m_lightUntil=0; if (HasAmmo()) Animate(0); else ConsumeEmpty();
        } else if(pending==ConsumeAction) {
            if(!HasAmmo()) ConsumeEmpty();
        } else if(pending==BatteryMidAction) {
            EMIT_SOUND(edict(),CHAN_ITEM,"weapons/rifle/rifle_insert.wav",1,.8f);
            Lock(5);m_action=BatteryFixAction;m_actionTime=gpGlobals->time+1;
        } else if(pending==BatteryFixAction) {
            EMIT_SOUND(edict(),CHAN_ITEM,"weapons/sleeve_generic3.wav",1,.8f);
            Animate(m_mode?7:2);Lock(.5f);m_batteryPending=0;
        }
    }
    void ItemPostFrame() override {
        // CMobile PostFrame10053210 starts the queued attachment only when
        // attack transitions are idle; its two Think stages are one second each.
        if(m_pPlayer && Definition().id==2 && m_batteryPending && !m_action &&
           gpGlobals->time>=m_flNextPrimaryAttack && gpGlobals->time>=m_flNextSecondaryAttack &&
           !(m_pPlayer->pev->flags&FL_FROZEN)) {
            Animate(m_mode?9:3);Lock(5);m_action=BatteryMidAction;m_actionTime=gpGlobals->time+1;
            EMIT_SOUND(edict(),CHAN_ITEM,"weapons/sleeve_generic2.wav",1,.8f);
        }
        if (m_pPlayer && Definition().id == 25) {
            if (m_mode && (!(m_pPlayer->pev->button & IN_ATTACK) || !m_pPlayer->IsAlive() || (m_pPlayer->pev->flags & 0x40000))) StopBook();
            if (m_mode && gpGlobals->time >= m_burnNext) { BurnCone(); m_burnNext=gpGlobals->time+.1f; }
        }
        if (m_pPlayer && gpGlobals->time >= m_lightNext) {
            const int id=Definition().id;
            if (id==10) Light(m_pPlayer->GetGunPosition(),160,255,210,125);
            if (id==13 && m_mode) {
                if (gpGlobals->time >= m_lightUntil || m_pPlayer->pev->waterlevel==3) { m_mode=0; Consume(); if (!HasAmmo()) { ConsumeEmpty(); return; } }
                else Light(m_pPlayer->GetGunPosition(),200,255,100,55);
            }
            m_lightNext=gpGlobals->time+.1f;
        }
        CCofWeapon::ItemPostFrame();
    }
    void WeaponIdle() override {
        if (!m_pPlayer || m_action || m_flTimeWeaponIdle > gpGlobals->time) return;
        int seq=Definition().idle;
        if (Definition().id==6 && m_mode) seq=5;
        if (Definition().id==2 && m_mode) seq=5;
        if (Definition().id==13 && m_mode) seq=5;
        if (Definition().id==25 && m_mode) return;
        Animate(seq); m_flTimeWeaponIdle=gpGlobals->time+max(1.0f,SequenceDuration(seq));
    }
private:
    void ConsumeEmpty() {
        if(!m_pPlayer) return;
        CBasePlayer* player=m_pPlayer;
        const float gate=player->m_flNextAttack;
        CofSpecialUnpair(player);
        if(player->m_pActiveItem==this) RetireWeapon();
        player->RemovePlayerItem(this,true);
        player->pev->weapons&=~(1<<m_iId);
        if(m_inventorySlot) CofInventoryRemove(player,m_inventorySlot);
        m_inventorySlot=0; m_action=0; m_actionTime=0; m_pPlayer=nullptr; m_pNext=nullptr;
        player->m_flNextAttack=max(player->m_flNextAttack,gate);
        UTIL_Remove(this);
    }
    void Consume() { if (m_iPrimaryAmmoType>=0 && m_iPrimaryAmmoType<MAX_AMMO_SLOTS) m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]=max(0,m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]-1); }
    void StopBook() { if (m_mode) { STOP_SOUND(ENT(pev),CHAN_WEAPON,"weapons/booklaser/flamethrower_burn.wav"); EMIT_SOUND(ENT(pev),CHAN_ITEM,"weapons/booklaser/flamethrower_end.wav",1,ATTN_NORM); } m_mode=0; }
    void BurnCone() {
        UTIL_MakeVectors(m_pPlayer->pev->v_angle+m_pPlayer->pev->punchangle);
        const Vector from=m_pPlayer->GetGunPosition(); ClearMultiDamage();
        // 10023900 -> 10088ca0: six rays, range400, spread .04362, explicitdamage5.
        for (int i=0;i<6;i++) {
            const Vector dir=gpGlobals->v_forward+gpGlobals->v_right*(RANDOM_FLOAT(-.5f,.5f)+RANDOM_FLOAT(-.5f,.5f))*.04362f+gpGlobals->v_up*(RANDOM_FLOAT(-.5f,.5f)+RANDOM_FLOAT(-.5f,.5f))*.04362f;
            TraceResult tr; UTIL_TraceLine(from,from+dir*400,dont_ignore_monsters,ENT(m_pPlayer->pev),&tr);
            CBaseEntity* hit=CBaseEntity::Instance(tr.pHit); if (hit && hit->pev->takedamage) hit->TraceAttack(m_pPlayer->pev,5,dir,&tr,DMG_BURN|DMG_NEVERGIB);
        }
        ApplyMultiDamage(m_pPlayer->pev,m_pPlayer->pev);
        // SDK visual adapter: native Aurora particle messages are not available.
        MESSAGE_BEGIN(MSG_PVS,SVC_TEMPENTITY,from); WRITE_BYTE(TE_SPRAY);
        WRITE_COORD(from.x); WRITE_COORD(from.y); WRITE_COORD(from.z);
        WRITE_COORD(gpGlobals->v_forward.x); WRITE_COORD(gpGlobals->v_forward.y); WRITE_COORD(gpGlobals->v_forward.z);
        WRITE_SHORT(flameSprite); WRITE_BYTE(6); WRITE_BYTE(120); WRITE_BYTE(8); WRITE_BYTE(0); MESSAGE_END();
        Light(from,100,255,95,35);
    }
    void Photograph() {
        Animate(3); Lock(SequenceDuration(3));
        static int takePhoto; if(!takePhoto) takePhoto=REG_USER_MSG("TakePhoto",0);
        MESSAGE_BEGIN(MSG_ONE,takePhoto,nullptr,m_pPlayer->pev);MESSAGE_END();
        EMIT_SOUND(ENT(pev),CHAN_WEAPON,"weapons/camera/take_photo.wav",1,ATTN_NORM);
        EMIT_SOUND(ENT(pev),CHAN_ITEM,"weapons/camera/flash_charge.wav",1,ATTN_NORM);
        const Vector from=m_pPlayer->GetGunPosition(); Light(from,400,255,255,255);
        UTIL_MakeVectors(m_pPlayer->pev->v_angle); TraceResult tr;
        UTIL_TraceLine(from,from+gpGlobals->v_forward*512,dont_ignore_monsters,ENT(m_pPlayer->pev),&tr);
        const bool wide=(pev->spawnflags&1)!=0; CBaseEntity* target=nullptr;
        if(!wide && !tr.pHit) return;
        while ((target=UTIL_FindEntityInSphere(target,wide ? from : tr.vecEndPos,wide ? 1024 : 64))) {
            if (FClassnameIs(target->pev,"camera_spot_trigger")) {
                if (!wide && target->pev->target) FireTargets(STRING(target->pev->target),m_pPlayer,m_pPlayer,USE_TOGGLE,0);
            } else if (target->MyMonsterPointer() && !target->IsPlayer() && (!wide || (m_pPlayer->FVisible(target) && DotProduct((target->Center()-from).Normalize(),gpGlobals->v_forward)>.5f))) {
                // Native camera-special damage type: amount zero, no fabricated bullets.
                target->TakeDamage(m_pPlayer->pev,m_pPlayer->pev,0,0x10000000);
            }
        }
    }
};
TYPEDESCRIPTION CCofSpecial::m_SaveData[]={DEFINE_FIELD(CCofSpecial,m_lightUntil,FIELD_TIME),DEFINE_FIELD(CCofSpecial,m_lightNext,FIELD_TIME),DEFINE_FIELD(CCofSpecial,m_burnNext,FIELD_TIME),DEFINE_FIELD(CCofSpecial,m_healTarget,FIELD_EHANDLE),DEFINE_FIELD(CCofSpecial,m_batteryPending,FIELD_INTEGER)};

int CCofSpecial::Save(CSave& s) { if(!CCofWeapon::Save(s)) return 0; return s.WriteFields("CCofSpecial",this,m_SaveData,ARRAYSIZE(m_SaveData)); }
int CCofSpecial::Restore(CRestore& s) { if(!CCofWeapon::Restore(s)) return 0; return s.ReadFields("CCofSpecial",this,m_SaveData,ARRAYSIZE(m_SaveData)); }

#define COF_SPECIAL(cls,entity,definition) class cls : public CCofSpecial { public: const CofWeaponDef& Definition() const override { return definition; } }; LINK_ENTITY_TO_CLASS(entity,cls)
COF_SPECIAL(CCofAxe,weapon_axe,axe);
COF_SPECIAL(CCofBranch,weapon_branch,branch);
COF_SPECIAL(CCofNightstick,weapon_nightstick,nightstick);
LINK_ENTITY_TO_CLASS(weapon_hammer,CCofNightstick);
COF_SPECIAL(CCofSledgehammer,weapon_sledgehammer,sledge);
COF_SPECIAL(CCofSwitchblade,weapon_switchblade,knife);
LINK_ENTITY_TO_CLASS(weapon_knife,CCofSwitchblade);
COF_SPECIAL(CCofSyringe,weapon_syringe,syringe);
COF_SPECIAL(CCofFlashlight,weapon_flashlight,flashlight);
COF_SPECIAL(CCofMobile,weapon_mobile,mobile);
COF_SPECIAL(CCofLantern,weapon_lantern,lantern);
COF_SPECIAL(CCofFlare,weapon_flare,flare);
COF_SPECIAL(CCofRadio,weapon_radio,radio);
COF_SPECIAL(CCofCamera,weapon_camera,camera);
COF_SPECIAL(CCofBook,weapon_booklaser,book);
COF_SPECIAL(CCofAction,weapon_action,action);
#undef COF_SPECIAL

const char* const cofSpecialClasses[]={"weapon_axe","weapon_branch","weapon_nightstick","weapon_sledgehammer","weapon_switchblade","weapon_syringe","weapon_flashlight","weapon_mobile","weapon_lantern","weapon_flare","weapon_radio","weapon_camera","weapon_booklaser","weapon_action","weapon_dualweapon",nullptr};
// CCameraSpot vtable 0x101a41ec: Spawn 0x10011250; all KeyValue,
// Save/Restore and Use behavior is inherited from CBaseToggle. The camera
// explicitly fires pev->target; touching/using the brush does not take a photo.
class CCofCameraSpot : public CBaseToggle {
public:
    void Spawn() override {
        pev->angles=g_vecZero;
        pev->movetype=MOVETYPE_PUSH;
        pev->solid=SOLID_BSP;
        // SDK visibility adapter: original camera trigger brushes must not
        // become visible surfaces in the reconstructed normal/RTX renderer.
        pev->effects|=EF_NODRAW;
        if(pev->model) SET_MODEL(ENT(pev),STRING(pev->model));
    }
};
LINK_ENTITY_TO_CLASS(camera_spot_trigger,CCofCameraSpot);

class CCofDual : public CCofWeapon {
public:
    EHANDLE m_left, m_right;
    int m_lastLeft, m_lastRight, m_hudSent, m_pairActive;
    int m_leftBody, m_rightBody, m_needsResync;
    static TYPEDESCRIPTION m_SaveData[];
    const CofWeaponDef& Definition() const override { return dual; }
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    BOOL CanDeploy() override { return Hand(m_left) && Hand(m_right); }
    void SendAmmo(bool clear=false, bool force=false) {
        if(!m_pPlayer) return;
        CCofWeapon* left=Hand(m_left); CCofWeapon* right=Hand(m_right);
        const int l=clear||!left?-2:(left->Definition().clip>0?left->m_iClip:-1);
        const int r=clear||!right?-2:(right->Definition().clip>0?right->m_iClip:-1);
        if(!force && m_hudSent && l==m_lastLeft && r==m_lastRight) return;
        static int message; if(!message) message=REG_USER_MSG("DualAmmo",8);
        MESSAGE_BEGIN(MSG_ONE,message,nullptr,m_pPlayer->pev);
        WRITE_LONG(l); WRITE_LONG(r); MESSAGE_END();
        m_lastLeft=l; m_lastRight=r; m_hudSent=1;
    }
    CCofWeapon* Hand(EHANDLE& handle) {
        CBaseEntity* item=handle;
        return m_pPlayer && item && item->pev->owner==ENT(m_pPlayer->pev) ? static_cast<CCofWeapon*>(item) : nullptr;
    }
    void RefreshHands() {
        CCofWeapon* left=Hand(m_left); CCofWeapon* right=Hand(m_right);
        if(!m_pairActive || !left || !right) return;
        if(m_needsResync && !m_pPlayer->m_fInitHUD) {
            SendHandState(left,1,left->m_animation,true);
            SendHandState(right,2,right->m_animation,true);
            SendAmmo(false,true);m_needsResync=0;
            if(std::getenv("COF_WEAPONTEST")) ALERT(at_console,"COF_WEAPON_DUAL_RESYNC left=%d right=%d\n",left->Definition().id,right->Definition().id);
        }
        bool light=false;
        CCofWeapon* hands[]={left,right};
        for(int i=0;i<2;++i) {
            CCofWeapon* hand=hands[i];
            const int id=hand->Definition().id;
            light|=((id==1 || id==2) && hand->m_mode) || CofRangedTaclightOn(hand);
            int& cached=i?m_rightBody:m_leftBody;
            if(cached!=hand->pev->body) {
                SendHandState(hand,i+1,hand->m_animation,false);
                cached=hand->pev->body;
            }
        }
        if(light) m_pPlayer->pev->effects|=EF_DIMLIGHT;
        else m_pPlayer->pev->effects&=~EF_DIMLIGHT;
    }
    BOOL Deploy() override {
        if (!m_pPlayer) return FALSE;
        CCofWeapon* right=Hand(m_right); CCofWeapon* left=Hand(m_left);
        if (!right || !left) return FALSE;
        m_pairActive=1;
        left->Deploy(); right->Deploy();
        m_leftBody=left->pev->body;m_rightBody=right->pev->body;
        RefreshHands();SendAmmo(false,true); return TRUE;
    }
    void Holster(int skiplocal=0) override {
        m_pairActive=0;
        if (m_pPlayer) {
            static int message; if(!message) message=REG_USER_MSG("CofHands",-1);
            MESSAGE_BEGIN(MSG_ONE,message,nullptr,m_pPlayer->pev); WRITE_BYTE(0); MESSAGE_END();
            SendAmmo(true);
            CCofWeapon* left=Hand(m_left); CCofWeapon* right=Hand(m_right);
            if (left) left->Holster(skiplocal); if (right) right->Holster(skiplocal);
        }
        CCofWeapon::Holster(skiplocal);
    }
    void ItemPostFrame() override {
        if (!m_pPlayer) return;
        CCofWeapon* right=Hand(m_right); CCofWeapon* left=Hand(m_left);
        if (!right || !left) { RetireWeapon(); return; }
        const int buttons=m_pPlayer->pev->button;
        const float playerGate=m_pPlayer->m_flNextAttack;
        CBasePlayerItem* active=m_pPlayer->m_pActiveItem;
        // Separate held-edge and timers belong to each underlying item. Forward
        // only its primary attack; preserve movement/reload without other fire.
        m_pPlayer->m_pActiveItem=left;
        m_pPlayer->pev->button=(buttons&~(IN_ATTACK|IN_ATTACK2))|((buttons&IN_ATTACK2)?IN_ATTACK:0);
        left->m_attackHeld=(left->m_attackHeld&~(IN_ATTACK|IN_ATTACK2))|((left->m_attackHeld&IN_ATTACK2)?IN_ATTACK:0);
        left->ItemPostFrame();
        if(!Hand(m_left) || !Hand(m_right)) {
            m_pPlayer->pev->button=buttons;
            m_pPlayer->m_pActiveItem=active;
            if(right->m_pPlayer==m_pPlayer) m_pPlayer->SelectItem(right->Definition().classname);
            SendAmmo(true); return;
        }
        m_pPlayer->m_flNextAttack=playerGate;
        left->m_attackHeld=(left->m_attackHeld&~(IN_ATTACK|IN_ATTACK2))|((left->m_attackHeld&IN_ATTACK)?IN_ATTACK2:0);
        m_pPlayer->m_pActiveItem=right;
        m_pPlayer->pev->button=buttons&~IN_ATTACK2;
        right->ItemPostFrame();
        // Each hand's own deadline remains authoritative. Lock() also writes
        // the single SDK player gate, which would otherwise block both hands.
        m_pPlayer->m_flNextAttack=playerGate>gpGlobals->time?playerGate:gpGlobals->time;
        m_pPlayer->pev->button=buttons;
        m_pPlayer->m_pActiveItem=active;
        RefreshHands();SendAmmo();
    }
    void PrimaryAttack() override {}
    void SecondaryAttack() override {}
    void WeaponIdle() override {}
    void Reload() override {
        if (!m_pPlayer) return;
        CCofWeapon* left=Hand(m_left); CCofWeapon* right=Hand(m_right);
        const float playerGate=m_pPlayer->m_flNextAttack;
        if (left) left->Reload(); if (right) right->Reload();
        m_pPlayer->m_flNextAttack=playerGate;
    }
};
TYPEDESCRIPTION CCofDual::m_SaveData[]={DEFINE_FIELD(CCofDual,m_left,FIELD_EHANDLE),DEFINE_FIELD(CCofDual,m_right,FIELD_EHANDLE),DEFINE_FIELD(CCofDual,m_pairActive,FIELD_INTEGER)};
int CCofDual::Save(CSave& s) { if(!CCofWeapon::Save(s)) return 0; return s.WriteFields("CCofDual",this,m_SaveData,ARRAYSIZE(m_SaveData)); }
int CCofDual::Restore(CRestore& s) { if(!CCofWeapon::Restore(s)) return 0; const int result=s.ReadFields("CCofDual",this,m_SaveData,ARRAYSIZE(m_SaveData));m_needsResync=1;return result; }
LINK_ENTITY_TO_CLASS(weapon_dualweapon,CCofDual);

namespace {
CCofDual* FindDual(CBasePlayer* player) {
    for(int slot=0;slot<MAX_ITEM_TYPES;slot++)
        for(CBasePlayerItem* p=player->m_rgpPlayerItems[slot];p;p=p->m_pNext)
            if(FClassnameIs(p->pev,"weapon_dualweapon")) return static_cast<CCofDual*>(p);
    return nullptr;
}
bool PairAllowed(int id, bool left) {
    switch(id) {
    case 3: case 6: case 7: case 12: case 16: case 19: case 21:return true;
    case 1: case 2: case 10: case 13:return left;
    default:return false;
    }
}
}
static void SendHandState(CCofWeapon* weapon,int hand,int sequence,bool restart) {
    static int message; if(!message) message=REG_USER_MSG("CofHands",-1);
    MESSAGE_BEGIN(MSG_ONE,message,nullptr,weapon->m_pPlayer->pev);
    WRITE_BYTE(hand); WRITE_STRING(weapon->ViewModel());
    WRITE_BYTE(weapon->Definition().id); WRITE_SHORT(sequence); WRITE_SHORT(weapon->pev->body);
    if(restart) ++weapon->pev->iuser2;
    WRITE_LONG(weapon->pev->iuser2); WRITE_LONG(int(gpGlobals->time*1000)); MESSAGE_END();
}
bool CofSpecialAnimate(CCofWeapon* weapon,int sequence) {
    if(!weapon || !weapon->m_pPlayer) return false;
    CBasePlayer* player=weapon->m_pPlayer;
    CCofDual* paired=FindDual(player);
    if(!paired || !paired->m_pairActive) return false;
    int hand=paired->Hand(paired->m_left)==weapon?1:(paired->Hand(paired->m_right)==weapon?2:0);
    if(!hand) return false;
    SendHandState(weapon,hand,sequence,true);
    return true;
}
// Source-owned wire: preserve the three native attached-light identities.
static int AttachedLight(CCofWeapon* weapon) {
    if(!weapon) return 0;
    const int id=weapon->Definition().id;
    if(id==2 && weapon->m_mode) return 1; // phone
    if(id==1 && weapon->m_mode) return 2; // flashlight2
    return CofRangedTaclightOn(weapon)?4:0;
}
void CofSpecialLightSync(CBasePlayer* player,bool force) {
    if(!player) return;
    int mask=0;
    if(player->IsAlive()) {
        CCofDual* pair=FindDual(player);
        if(pair && player->m_pActiveItem==pair && pair->m_pairActive)
            mask=AttachedLight(pair->Hand(pair->m_left))|AttachedLight(pair->Hand(pair->m_right));
        else for(int slot=1;slot<=6;++slot) {
            CCofWeapon* item=CofWeaponForSlot(player,slot);
            if(item && item==player->m_pActiveItem) mask|=AttachedLight(item);
        }
        // Explicit legacy impulse-100 source, used by engine fixtures too.
        if(!mask && (player->pev->effects&EF_DIMLIGHT)) mask=128;
    }
    static int lastMask[33]={},message;
    static float nextSync[33]={};
    if(std::getenv("COF_PROJECTEDTEST")) {
        static float began=-1;
        if(began<0 || gpGlobals->time<began) began=gpGlobals->time;
        const int sequence[]={1,2,4,5,0};
        mask=sequence[min(4,int((gpGlobals->time-began)/1.25f))];
    }
    const int index=ENTINDEX(player->edict());
    if(index<1 || index>32) return;
    if(!force && mask==lastMask[index] && nextSync[index]>gpGlobals->time &&
        nextSync[index]<=gpGlobals->time+1) return;
    if(!message) message=REG_USER_MSG("CofLight",1);
    MESSAGE_BEGIN(MSG_ONE,message,nullptr,player->pev);WRITE_BYTE(mask);MESSAGE_END();
    lastMask[index]=mask;nextSync[index]=gpGlobals->time+1;
}
void CofSpecialPlayerFrame(CBasePlayer* player) {
    if(!player) return;
    if(player->m_pActiveItem && FClassnameIs(player->m_pActiveItem->pev,"weapon_dualweapon"))
        static_cast<CCofDual*>(player->m_pActiveItem)->RefreshHands();
    CofSpecialLightSync(player,false);
}
bool CofSpecialCombine(CBasePlayer* player,int first,int second,const char* result) {
    if(!player || !player->IsAlive() || (player->pev->flags&FL_FROZEN) || !result ||
       first<1 || first>6 || second<1 || second>6 || first==second ||
       !player->m_cofInventory[first] || !player->m_cofInventory[second]) return false;
    const bool taclight=FStrEq(result,"glockwithtaclight");
    if(!taclight && !FStrEq(result,"phonewithbattery")) return false;
    const char* accessory=taclight?"inventoryitems/taclight.txt":"inventoryitems/mobile_battery.txt";
    const int accessorySlot=FStrEq(STRING(player->m_cofInventory[first]),accessory)?first:
        (FStrEq(STRING(player->m_cofInventory[second]),accessory)?second:0);
    if(!accessorySlot) return false;
    CCofWeapon* weapon=CofWeaponForSlot(player,accessorySlot==first?second:first);
    if(!weapon || weapon->Definition().id!=(taclight?3:2)) return false;
    // Original100e3020 checks matching combined_result in both descriptors.
    for(int slot:{first,second}) {
        const char* path=STRING(player->m_cofInventory[slot]);
        if(!cof::ValidDescriptorPath(path)) return false;
        int size=0;byte* raw=LOAD_FILE_FOR_ME(const_cast<char*>(path),&size);
        cof::Descriptor values;
        bool valid=raw && size>0 && size<65536 && cof::ParseDescriptor(std::string(reinterpret_cast<char*>(raw),size),values);
        if(raw) FREE_FILE(raw);
        if(!valid || values["combined_result"]!=result) return false;
    }
    if(taclight) {
        extern bool CofRangedAttachTaclight(CCofWeapon*);
        if(!CofRangedAttachTaclight(weapon)) return false;
    } else {
        CCofSpecial* phone=static_cast<CCofSpecial*>(weapon);
        if(phone->m_batteryPending) return false;
        phone->m_batteryPending=1;
    }
    CofSpecialUnpair(player);
    CofInventoryRemove(player,accessorySlot);
    EMIT_SOUND(player->edict(),CHAN_ITEM,"weapons/item_get.wav",1,.8f);
    return true;
}
bool CofSpecialDropAccessory(CBasePlayer* player,int slot) {
    if(!player || slot<1 || slot>6 || !player->m_cofInventory[slot]) return false;
    const char* path=STRING(player->m_cofInventory[slot]);
    const char* name=FStrEq(path,"inventoryitems/taclight.txt")?"item_glocktaclight":
        (FStrEq(path,"inventoryitems/mobile_battery.txt")?"item_phonebattery":nullptr);
    if(!name) return false;
    UTIL_MakeVectors(player->pev->v_angle);
    CBaseEntity* item=CBaseEntity::Create(name,player->pev->origin+gpGlobals->v_forward*24+Vector(0,0,16),g_vecZero,nullptr);
    if(!item) return false;
    item->pev->velocity=player->pev->velocity+gpGlobals->v_forward*100;
    item->pev->owner=player->edict();
    // Touch requires use, but the current drop key may share an input frame.
    item->SetTouch(nullptr);
    CofInventoryRemove(player,slot);return true;
}
bool CofSpecialPair(CBasePlayer* player,int leftSlot,int rightSlot) {
    if(!player || !player->IsAlive() || leftSlot==rightSlot) return false;
    CCofWeapon* left=CofWeaponForSlot(player,leftSlot);
    CCofWeapon* right=CofWeaponForSlot(player,rightSlot);
    if(!left || !right || !PairAllowed(left->Definition().id,true) || !PairAllowed(right->Definition().id,false)) return false;
    if(left->m_action || right->m_action || left->m_fInReload || right->m_fInReload) return false;
    CCofDual* paired=FindDual(player);
    if(!paired) {
        CBaseEntity* entity=CBaseEntity::Create("weapon_dualweapon",player->pev->origin,g_vecZero,nullptr);
        if(!entity) return false;
        paired=static_cast<CCofDual*>(entity);
        if(!player->AddPlayerItem(paired)) { UTIL_Remove(paired); return false; }
        paired->AttachToPlayer(player);
    }
    if(!paired) return false;
    paired->m_left=left; paired->m_right=right;
    if(player->m_pActiveItem==paired) paired->Deploy(); else player->SelectItem("weapon_dualweapon");
    return player->m_pActiveItem==paired;
}
void CofSpecialUnpair(CBasePlayer* player) {
    if(!player) return;
    CCofDual* paired=FindDual(player); if(!paired) return;
    paired->SendAmmo(true);
    CCofWeapon* right=paired->Hand(paired->m_right);
    if(player->m_pActiveItem==paired && right) player->SelectItem(right->Definition().classname);
    else paired->Holster();
    paired->m_left=nullptr; paired->m_right=nullptr;
}
// Loaded-DLL fixture. Caller runs this only on the isolated smoke desktop.
int CofSpecialTests(CBasePlayer* player) {
    if (!player) return 1;
    int failures=0;
    auto check=[&](bool ok,const char* name) {
        ALERT(at_console,"COF_SPECIAL_TEST %s %s\n",ok?"PASS":"FAIL",name);
        if(!ok) ++failures;
    };
    const entvars_t savedPev=*player->pev;
    CBasePlayerItem* savedActive=player->m_pActiveItem;
    CBasePlayerItem* savedLast=player->m_pLastItem;
    CBasePlayerItem* savedItems[MAX_ITEM_TYPES]; std::memcpy(savedItems,player->m_rgpPlayerItems,sizeof(savedItems));
    decltype(player->m_cofInventory) savedInventory; std::memcpy(savedInventory,player->m_cofInventory,sizeof(savedInventory));
    decltype(player->m_cofQuickSlots) savedQuick; std::memcpy(savedQuick,player->m_cofQuickSlots,sizeof(savedQuick));
    const float savedNext=player->m_flNextAttack, savedStamina=player->m_cofStamina;
    const int savedQueue=player->m_cofHealQueue, savedBlock=player->m_cofWeaponSprintBlocked, savedScoped=player->m_cofScopedRifle;
    const int savedFov=player->m_iFOV;
    int ammo[MAX_AMMO_SLOTS]; std::memcpy(ammo,player->m_rgAmmo,sizeof(ammo));
    player->pev->deadflag=DEAD_NO; player->pev->health=100;
    player->pev->flags&=~(FL_FROZEN|0x40000); player->pev->button=0;
    const char* names[]={"weapon_knife","weapon_hammer","weapon_axe","weapon_branch","weapon_sledgehammer","weapon_syringe","weapon_flashlight","weapon_mobile","weapon_flare","weapon_booklaser","weapon_camera","weapon_radio","weapon_lantern","weapon_action","weapon_dualweapon"};
    for(const char* name:names) {
        CBaseEntity* entity=CBaseEntity::Create(name,player->pev->origin+Vector(0,0,256),g_vecZero,nullptr);
        check(entity!=nullptr,name); if(!entity) continue;
        CCofWeapon* item=static_cast<CCofWeapon*>(entity); item->m_pPlayer=player;
        player->m_pActiveItem=item;
        const int id=item->Definition().id;
        if (id==6) {
            item->PrimaryAttack(); check(item->m_action==1 && item->m_actionTime>gpGlobals->time+.15f && item->m_actionTime<gpGlobals->time+.17f,"knife_delays_hit_160ms");
            item->m_action=0;item->m_actionTime=0;item->SecondaryAttack();
            check(item->m_mode==1 && item->m_flNextPrimaryAttack>=gpGlobals->time+1.49f,"knife_alternate_transition_locks_1500ms");
        } else if(id==18) {
            player->m_cofStamina=7;item->PrimaryAttack();check(item->m_action==0,"sledge_rejects_below_eight_stamina");
            player->m_cofStamina=8;item->PrimaryAttack();
            check(item->m_action==1 && item->m_actionTime>=gpGlobals->time+.99f && item->m_flNextPrimaryAttack>=gpGlobals->time+2.65f,"sledge_delayed_hit_and_2660ms_lock");
        } else if(id==8) {
            item->m_iPrimaryAmmoType=1;player->m_rgAmmo[1]=2;player->m_cofHealQueue=0;
            item->PrimaryAttack();check(item->m_action==InjectAction && player->m_cofHealQueue==0 && player->m_rgAmmo[1]==2,"syringe_no_early_heal_or_consumption");
            item->PendingAction();check(player->m_cofHealQueue>0 && player->m_rgAmmo[1]==1,"syringe_queues_heal_and_consumes_once");
        } else if(id==1) {
            item->PrimaryAttack();check((player->pev->effects&EF_DIMLIGHT)!=0,"flashlight_switch_on");
            item->Holster();check((player->pev->effects&EF_DIMLIGHT)==0,"flashlight_holster_clears_light");
        } else if(id==2) {
            player->pev->effects&=~EF_DIMLIGHT;item->PrimaryAttack();
            check(item->m_action==TogglePhone && !(player->pev->effects&EF_DIMLIGHT),"phone_switch_is_delayed");
            item->PendingAction();check((player->pev->effects&EF_DIMLIGHT)!=0,"phone_delayed_switch_lights");
            item->Holster();
        } else if(id==13) {
            item->m_iPrimaryAmmoType=1;player->m_rgAmmo[1]=2;item->PrimaryAttack();
            check(item->m_action==IgniteAction && !item->m_mode,"flare_waits_for_strike");
            item->PendingAction();check(item->m_mode==1 && static_cast<CCofSpecial*>(item)->m_lightUntil>gpGlobals->time,"flare_has_finite_burn_deadline");
        } else if(id==25) {
            item->PrimaryAttack();check(item->m_mode==1,"book_enters_continuous_fire");
            player->pev->button=0;item->ItemPostFrame();check(item->m_mode==0,"book_release_stops_continuous_fire");
        }
        item->m_action=0;item->m_actionTime=0;item->m_pPlayer=nullptr;UTIL_Remove(item);
    }
    // Actual item-chain integration, isolated from the map's starting inventory.
    std::memset(player->m_rgpPlayerItems,0,sizeof(player->m_rgpPlayerItems));
    std::memset(player->m_cofInventory,0,sizeof(player->m_cofInventory));
    player->m_pActiveItem=player->m_pLastItem=nullptr;
    auto owned=[&](const char* name) -> CCofWeapon* {
        CBaseEntity* entity=CBaseEntity::Create(name,player->pev->origin+Vector(0,0,256),g_vecZero,nullptr);
        if(!entity) return nullptr;
        CCofWeapon* item=static_cast<CCofWeapon*>(entity);
        item->Use(player,player,USE_TOGGLE,0);
        if(item->m_pPlayer!=player) {UTIL_Remove(item);return nullptr;}
        return item;
    };
    auto dispose=[&](CCofWeapon* item) {
        if(!item) return;
        if(item->m_pPlayer) {
            player->RemovePlayerItem(item,true);
            if(item->m_inventorySlot) CofInventoryRemove(player,item->m_inventorySlot);
        }
        item->m_pPlayer=nullptr;item->m_pNext=nullptr;UTIL_Remove(item);
    };
    CCofWeapon* left=owned("weapon_glock"); CCofWeapon* right=owned("weapon_p345");
    check(left && right,"dual_fixture_owned_items");
    if(left && right) {
        check(CofSpecialPair(player,left->m_inventorySlot,right->m_inventorySlot),"dual_creation_bypasses_touch_pickup");
        CCofDual* paired=FindDual(player);
        if(paired) {
            check(!paired->m_inventorySlot && paired->Hand(paired->m_left)==left && paired->Hand(paired->m_right)==right,"dual_keeps_two_inventory_slots");
            player->m_flNextAttack=gpGlobals->time;player->pev->waterlevel=0;
            left->m_flNextPrimaryAttack=right->m_flNextPrimaryAttack=0;
            left->m_flNextSecondaryAttack=right->m_flNextSecondaryAttack=0;
            const int l=left->m_iClip,r=right->m_iClip;
            player->pev->button=IN_ATTACK2;paired->ItemPostFrame();
            check(left->m_iClip==l-1 && right->m_iClip==r && player->m_flNextAttack<=gpGlobals->time,"dual_left_fire_does_not_lock_right");
            player->pev->button=IN_ATTACK;paired->ItemPostFrame();
            check(left->m_iClip==l-1 && right->m_iClip==r-1 && player->m_flNextAttack<=gpGlobals->time,"dual_right_fires_during_left_cooldown");
            player->pev->button=0;
            left->m_flNextPrimaryAttack=right->m_flNextPrimaryAttack=0;
            player->m_rgAmmo[left->m_iPrimaryAmmoType]=3;player->m_rgAmmo[right->m_iPrimaryAmmoType]=2;
            paired->Reload();
            check(left->m_fInReload && right->m_fInReload,"dual_reload_starts_both_hands");
            left->m_actionTime=right->m_actionTime=gpGlobals->time-.01f;
            CofWeaponsPlayerFrame(player);
            check(left->m_iClip==3 && right->m_iClip==2 && !left->m_fInReload && !right->m_fInReload,"dual_reload_finishes_separate_reserves");
            const int slot=left->m_inventorySlot;
            left->DropToWorld();
            check(!left->m_pPlayer && !player->m_cofInventory[slot] && !paired->CanDeploy() && player->m_pActiveItem!=paired,"dual_drop_unpairs_and_removes_slot");
            paired->SendAmmo(true);dispose(paired);
        }
    }
    dispose(left);dispose(right);
    CCofWeapon* lastSyringe=owned("weapon_syringe");
    if(lastSyringe) {
        const int slot=lastSyringe->m_inventorySlot;
        player->m_rgAmmo[lastSyringe->m_iPrimaryAmmoType]=1;
        player->m_pActiveItem=lastSyringe;lastSyringe->PrimaryAttack();lastSyringe->PendingAction();
        check(lastSyringe->m_action==ConsumeAction && player->m_cofInventory[slot],"last_syringe_waits_native_destroy_delay");
        lastSyringe->PendingAction();
        check(!lastSyringe->m_pPlayer && !player->m_cofInventory[slot] && (lastSyringe->pev->flags&FL_KILLME),"last_syringe_removes_inventory_item");
        dispose(lastSyringe);
    }
    const int batteryIndex=player->GetAmmoIndex("flashlight");
    CBaseEntity* battery=CBaseEntity::Create("ammo_flashlightbattery",player->pev->origin+Vector(0,0,256),g_vecZero,nullptr);
    if(battery && batteryIndex>0) {
        player->m_rgAmmo[batteryIndex]=200;battery->Use(player,player,USE_TOGGLE,0);
        check(!(battery->pev->flags&FL_KILLME),"battery_remains_when_full");
        player->m_rgAmmo[batteryIndex]=150;battery->Use(player,player,USE_TOGGLE,0);
        check(player->m_rgAmmo[batteryIndex]==200 && (battery->pev->flags&FL_KILLME),"battery_adds_100_clamped_200");
    } else check(false,"battery_factory_and_ammo_registration");
    if(battery) UTIL_Remove(battery);
    CCofWeapon* phone=owned("weapon_mobile");
    CCofWeapon* glock=owned("weapon_glock");
    for(int which=0;which<2;++which) {
        CCofWeapon* weapon=which?glock:phone;
        const char* name=which?"item_glocktaclight":"item_phonebattery";
        const char* path=which?"inventoryitems/taclight.txt":"inventoryitems/mobile_battery.txt";
        const char* result=which?"glockwithtaclight":"phonewithbattery";
        CBaseEntity* accessory=CBaseEntity::Create(name,player->pev->origin+Vector(0,0,256),g_vecZero,nullptr);
        if(!accessory || !weapon) {check(false,"accessory_factory_and_weapon");if(accessory)UTIL_Remove(accessory);continue;}
        accessory->Use(player,player,USE_TOGGLE,0);
        int slot=0;
        for(int i=1;i<=6;++i) if(player->m_cofInventory[i] && FStrEq(STRING(player->m_cofInventory[i]),path)) slot=i;
        check(slot>0 && (accessory->pev->flags&FL_KILLME),which?"taclight_pickup_inventory":"phone_battery_pickup_inventory");
        check(!CofSpecialCombine(player,slot,slot,result) && slot && player->m_cofInventory[slot],"combine_rejects_same_slot_without_consumption");
        check(CofSpecialCombine(player,slot,weapon->m_inventorySlot,result) && !player->m_cofInventory[slot] && weapon->m_pPlayer==player,"combine_consumes_accessory_keeps_weapon");
        if(!which) {
            CCofSpecial* mobileItem=static_cast<CCofSpecial*>(weapon);
            player->m_pActiveItem=weapon;player->pev->button=0;
            weapon->m_flNextPrimaryAttack=weapon->m_flNextSecondaryAttack=0;
            weapon->ItemPostFrame();
            check(mobileItem->m_batteryPending && weapon->m_action==BatteryMidAction,"phone_battery_queues_first_second");
            weapon->PendingAction();check(weapon->m_action==BatteryFixAction,"phone_battery_queues_second_second");
            weapon->PendingAction();check(!mobileItem->m_batteryPending && !weapon->m_action,"phone_battery_finish_clears_pending");
        }
        UTIL_Remove(accessory);
    }
    dispose(phone);dispose(glock);
    std::memcpy(player->m_cofQuickSlots,savedQuick,sizeof(savedQuick));
    std::memcpy(player->m_rgpPlayerItems,savedItems,sizeof(savedItems));
    std::memcpy(player->m_cofInventory,savedInventory,sizeof(savedInventory));
    std::memcpy(player->m_rgAmmo,ammo,sizeof(ammo));
    *player->pev=savedPev;player->m_pActiveItem=savedActive;player->m_flNextAttack=savedNext;
    player->m_cofStamina=savedStamina;player->m_cofHealQueue=savedQueue;
    player->m_cofWeaponSprintBlocked=savedBlock;player->m_cofScopedRifle=savedScoped;player->m_iFOV=savedFov;
    player->m_pLastItem=savedLast;CofInventorySync(player);
    ALERT(at_console,"COF_SPECIAL_TEST_COMPLETE failures=%d\n",failures);return failures;
}
