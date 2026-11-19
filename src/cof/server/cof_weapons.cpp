// Evidence and deliberate SDK adaptations: analysis/weapons/.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "cof_weapons.h"
#include "inventory.h"
#include "movement.h"
#include "studio.h"
#include "item_descriptor.h"
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#undef min
#undef max

extern void UTIL_PrecacheOtherWeapon(const char*);
extern void CofSpecialPlayerFrame(CBasePlayer*);
extern bool CofSpecialDropAccessory(CBasePlayer*, int);
extern bool CofSpecialCombine(CBasePlayer*, int, int, const char*);
extern bool CofSpecialPair(CBasePlayer*, int, int);
extern void CofSpecialUnpair(CBasePlayer*);
extern bool CofSpecialAnimate(CCofWeapon*, int);

void CofWeaponsRegisterCvars() {
    struct Default { const char* name; int values[4]; };
    const Default defaults[] = {
        {"sk_cof_axe",{55,55,55,55}}, {"sk_cof_branch",{10,10,10,10}},
        {"sk_cof_nightstick",{11,11,11,11}}, {"sk_cof_switchblade",{6,6,6,6}},
        {"sk_cof_2switchblade",{9,9,9,9}}, {"sk_cof_sledgehammer",{45,45,45,45}},
        {"sk_cof_punch",{5,5,5,5}}, {"sk_cof_weapon_melee",{5,5,5,5}},
        {"sk_flare_burn_time",{120,90,60,30}}, {"sk_cof_glock",{13,13,13,13}},
        {"sk_cof_p345",{20,20,20,20}}, {"sk_cof_revolver",{40,40,40,40}},
        {"sk_cof_rifle",{70,70,70,70}}, {"sk_cof_g43",{50,50,50,50}},
        {"sk_cof_shotgun",{5,5,5,5}}, {"sk_cof_m16",{16,16,16,16}},
        {"sk_cof_famas",{15,15,15,15}}, {"sk_cof_vp70",{15,15,15,15}},
        {"sk_cof_browning",{10,10,10,10}}
    };
    static cvar_t vars[ARRAYSIZE(defaults)*4] = {};
    static char names[ARRAYSIZE(defaults)*4][64], values[ARRAYSIZE(defaults)*4][16];
    int n = 0;
    for (const Default& def : defaults) for (int level = 0; level < 4; ++level, ++n) {
        std::snprintf(names[n], sizeof(names[n]), "%s%d", def.name, level + 1);
        std::snprintf(values[n], sizeof(values[n]), "%d", def.values[level]);
        if (CVAR_GET_POINTER(names[n])) continue;
        vars[n].name = names[n]; vars[n].string = values[n]; vars[n].flags = FCVAR_SERVER;
        CVAR_REGISTER(&vars[n]);
    }
}

namespace {
std::map<std::string, std::vector<float> > durations;
struct AimSettings { float forward = 0, right = 0, up = 0, zoom = 0; };
std::map<std::string, AimSettings> aimSettings;
int ironSightsMessage, scopeMessage;
CCofWeapon* Weapon(CBasePlayerItem* item) {
    // All own weapons occupy slot 1; reject SDK items before a downcast.
    if (!item) return nullptr;
    const char* name = STRING(item->pev->classname);
    for (const char* const* list : {cofRangedClasses, cofSpecialClasses})
        for (int i = 0; list[i]; ++i) if (FStrEq(name, list[i])) return static_cast<CCofWeapon*>(item);
    return nullptr;
}
void CacheSequences(const char* path) {
    if (!path || !*path || durations.count(path)) return;
    std::vector<float>& times = durations[path];
    int size = 0;
    byte* data = LOAD_FILE_FOR_ME(const_cast<char*>(path), &size);
    if (!data) return;
    if (size >= int(sizeof(studiohdr_t))) {
        const studiohdr_t* hdr = reinterpret_cast<studiohdr_t*>(data);
        if (hdr->numseq > 0 && hdr->numseq < 1024 && hdr->seqindex >= int(sizeof(*hdr)) &&
            size_t(hdr->seqindex) + size_t(hdr->numseq) * sizeof(mstudioseqdesc_t) <= size_t(size)) {
            const auto* seq = reinterpret_cast<const mstudioseqdesc_t*>(data + hdr->seqindex);
            for (int i = 0; i < hdr->numseq; ++i)
                times.push_back(seq[i].fps > 0 ? std::max(0.01f, (seq[i].numframes - 1) / seq[i].fps) : 0.1f);
        }
    }
    FREE_FILE(data);
}
}

TYPEDESCRIPTION CCofWeapon::m_SaveData[] = {
    DEFINE_FIELD(CCofWeapon, m_customView, FIELD_STRING),
    DEFINE_FIELD(CCofWeapon, m_customWorld, FIELD_STRING),
    DEFINE_FIELD(CCofWeapon, m_customDescriptor, FIELD_STRING),
    DEFINE_FIELD(CCofWeapon, m_actionTime, FIELD_TIME),
    DEFINE_FIELD(CCofWeapon, m_actionDamage, FIELD_FLOAT),
    DEFINE_FIELD(CCofWeapon, m_reloadTime, FIELD_TIME),
    DEFINE_FIELD(CCofWeapon, m_nextUse, FIELD_TIME),
    DEFINE_FIELD(CCofWeapon, m_animation, FIELD_INTEGER),
    DEFINE_FIELD(CCofWeapon, m_action, FIELD_INTEGER),
    DEFINE_FIELD(CCofWeapon, m_aimed, FIELD_INTEGER),
    DEFINE_FIELD(CCofWeapon, m_mode, FIELD_INTEGER),
    DEFINE_FIELD(CCofWeapon, m_inventorySlot, FIELD_INTEGER),
    DEFINE_FIELD(CCofWeapon, m_attackHeld, FIELD_INTEGER),
};
IMPLEMENT_SAVERESTORE(CCofWeapon, CBasePlayerWeapon);

const char* CCofWeapon::ViewModel() const { return m_customView ? STRING(m_customView) : Definition().viewModel; }
const char* CCofWeapon::WorldModel() const { return m_customWorld ? STRING(m_customWorld) : Definition().worldModel; }
const char* CCofWeapon::DescriptorPath() const { return m_customDescriptor ? STRING(m_customDescriptor) : Definition().descriptor; }
void CCofWeapon::KeyValue(KeyValueData* data) {
    const bool view = FStrEq(data->szKeyName, "customv");
    const bool world = FStrEq(data->szKeyName, "customw");
    if (view || world) {
        const std::string path(data->szValue);
        if (path.size() < 128 && path.size() > 11 && path.compare(0,7,"models/") == 0 &&
            path.find("..") == std::string::npos && path.find('\\') == std::string::npos &&
            path.substr(path.size()-4) == ".mdl")
            (view ? m_customView : m_customWorld) = ALLOC_STRING(data->szValue);
        data->fHandled = TRUE;
    } else if (FStrEq(data->szKeyName, "customscript")) {
        if (cof::ValidDescriptorPath(data->szValue)) m_customDescriptor = ALLOC_STRING(data->szValue);
        data->fHandled = TRUE;
    } else CBasePlayerWeapon::KeyValue(data);
}

void CCofWeapon::Precache() {
    const auto& def = Definition();
    for (const char* model : {ViewModel(), WorldModel(), def.playerModel})
        if (model && *model) PRECACHE_MODEL(const_cast<char*>(model));
    if (def.fireSound && *def.fireSound) PRECACHE_SOUND(const_cast<char*>(def.fireSound));
    PRECACHE_SOUND("weapons/item_get.wav");
    PRECACHE_SOUND("weapons/weapon_fire_empty.wav");
    PRECACHE_SOUND("weapons/weapon_fire_empty_noclick.wav");
    const char* meleeSounds[]={"weapons/mobile/punch_swing.wav","weapons/mobile/punch_smack.wav",
        "weapons/axe/axe_hitbody.wav","weapons/axe/axe_hit.wav","weapons/branch/branch_hit.wav",
        "weapons/sledgehammer/sledgehammer_hitbody.wav","weapons/sledgehammer/sledgehammer_hit.wav",
        "weapons/nightstick/nightstick_hitbody1.wav","weapons/nightstick/nightstick_hitbody2.wav",
        "weapons/nightstick/nightstick_hitwall1.wav","weapons/nightstick/nightstick_hitwall2.wav",
        "weapons/switchblade/switchblade_hitbody1.wav","weapons/switchblade/switchblade_hitbody2.wav",
        "weapons/switchblade/switchblade_hitwall1.wav","weapons/switchblade/switchblade_hitwall2.wav"};
    for(const char* sound:meleeSounds) PRECACHE_SOUND(const_cast<char*>(sound));
    CacheSequences(ViewModel());
    if (DescriptorPath() && !aimSettings.count(DescriptorPath())) {
        AimSettings settings;
        int size = 0;
        byte* data = LOAD_FILE_FOR_ME(const_cast<char*>(DescriptorPath()), &size);
        cof::Descriptor values;
        if (data && size > 0 && size < 65536 && cof::ParseDescriptor(std::string(reinterpret_cast<char*>(data), size), values)) {
            settings.forward = float(std::atof(values["ironsight_forward"].c_str()));
            settings.right = float(std::atof(values["ironsight_right"].c_str()));
            settings.up = float(std::atof(values["ironsight_up"].c_str()));
            settings.zoom = float(std::atof(values["ironsight_zoom"].c_str()));
        }
        if (data) FREE_FILE(data);
        aimSettings[DescriptorPath()] = settings;
    }
}
void CCofWeapon::Spawn() {
    const auto& def = Definition();
    pev->classname = MAKE_STRING(def.classname);
    m_iId = def.id;
    m_iClip = def.clip > 0 ? 0 : WEAPON_NOCLIP;
    m_iDefaultAmmo = def.defaultAmmo;
    Precache();
    if (WorldModel() && *WorldModel()) SET_MODEL(edict(), WorldModel());
    pev->movetype = MOVETYPE_TOSS;
    pev->solid = SOLID_BBOX;
    pev->renderfx = 99;
    UTIL_SetSize(pev, Vector(-8,-8,0), Vector(8,8,8));
    SetTouch(nullptr); // Original items are acquired with Use.
}
int CCofWeapon::GetItemInfo(ItemInfo* info) {
    const auto& def = Definition();
    *info = {};
    info->pszName = def.classname;
    info->iId = def.id;
    info->iSlot = 1;
    info->iPosition = def.id;
    info->pszAmmo1 = def.ammo;
    info->iMaxAmmo1 = def.maxAmmo;
    info->iMaxAmmo2 = -1;
    info->iMaxClip = def.clip;
    info->iFlags = ITEM_FLAG_SELECTONEMPTY | ITEM_FLAG_NOAUTORELOAD | ITEM_FLAG_NOAUTOSWITCHEMPTY;
    info->iWeight = 10;
    return 1;
}
void CCofWeapon::Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) {
    if (!activator || !activator->IsPlayer() || m_pPlayer || gpGlobals->time < m_nextUse || (pev->flags & FL_KILLME)) return;
    auto* player = static_cast<CBasePlayer*>(activator);
    if (!player->IsAlive()) return;
    m_nextUse = gpGlobals->time + .3f;
    if (!player->AddPlayerItem(this)) return;
    if (!(pev->flags & FL_KILLME)) AttachToPlayer(player);
    EMIT_SOUND(player->edict(), CHAN_ITEM, "weapons/item_get.wav", 1, ATTN_NORM);
    if (pev->target) FireTargets(STRING(pev->target), this, player, USE_TOGGLE, 0);
    CofInventorySync(player);
}
int CCofWeapon::AddToPlayer(CBasePlayer* player) {
    if (Definition().kind == COF_DUAL || Definition().kind == COF_ACTION)
        return CBasePlayerWeapon::AddToPlayer(player);
    int slot = 0;
    for (int i = 1; i <= 6; ++i) if (!player->m_cofInventory[i]) { slot = i; break; }
    if (!slot) { ClientPrint(player->pev, HUD_PRINTCENTER, "Inventory is full."); return FALSE; }
    if (!CBasePlayerWeapon::AddToPlayer(player)) return FALSE;
    m_inventorySlot = slot;
    player->m_cofInventory[slot] = ALLOC_STRING(DescriptorPath());
    CofInventorySync(player);
    return TRUE;
}
int CCofWeapon::AddDuplicate(CBasePlayerItem* existing) {
    if (!existing || !existing->m_pPlayer || !Definition().ammo) return FALSE;
    const int amount = m_iDefaultAmmo ? m_iDefaultAmmo : std::max(0, m_iClip);
    if (amount <= 0) return FALSE;
    const int index = existing->m_pPlayer->GiveAmmo(amount, const_cast<char*>(Definition().ammo), Definition().maxAmmo);
    return index >= 0;
}
float CCofWeapon::SequenceDuration(int sequence) const {
    auto found = durations.find(ViewModel() ? ViewModel() : "");
    if (found == durations.end() || sequence < 0 || sequence >= int(found->second.size())) return .1f;
    return found->second[sequence];
}
float CCofWeapon::Animate(int sequence) {
    if (m_pPlayer && sequence >= 0) {
        m_animation = sequence; // Viewmodel sequence is not valid for the world pickup model.
        if (!CofSpecialAnimate(this, sequence)) SendWeaponAnim(sequence, 0);
    }
    return SequenceDuration(sequence);
}
void CCofWeapon::Lock(float seconds) {
    const float until = gpGlobals->time + std::max(0.0f, seconds);
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = m_flTimeWeaponIdle = until;
    if (m_pPlayer) m_pPlayer->m_flNextAttack = until;
}
BOOL CCofWeapon::Deploy() {
    if (!m_pPlayer) return FALSE;
    const auto& def = Definition();
    m_pPlayer->pev->viewmodel = ViewModel() && *ViewModel() ? ALLOC_STRING(ViewModel()) : 0;
    m_pPlayer->pev->weaponmodel = def.playerModel && *def.playerModel ? ALLOC_STRING(def.playerModel) : 0;
    strcpy(m_pPlayer->m_szAnimExtention, "onehanded");
    m_attackHeld = 0; m_iPlayEmptySound = TRUE;
    SetAim(false);
    Lock(Animate(def.deploy));
    SyncMovement();
    return TRUE;
}
void CCofWeapon::Holster(int skiplocal) {
    m_actionTime = m_reloadTime = 0;
    m_action = m_fInReload = m_fInSpecialReload = m_attackHeld = 0;
    if (m_pPlayer) { SetAim(false); CofMovementWeaponState(m_pPlayer, false, false); }
    CBasePlayerWeapon::Holster(skiplocal);
}
bool CCofWeapon::HasAmmo() const {
    if (Definition().clip > 0) return m_iClip > 0;
    return !Definition().ammo || (m_pPlayer && m_iPrimaryAmmoType > 0 && m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType] > 0);
}
void CCofWeapon::SetAim(bool enabled, float fov) {
    m_aimed = enabled ? 1 : 0;
    AimSettings settings;
    if (enabled && DescriptorPath()) settings = aimSettings[DescriptorPath()];
    if (enabled && settings.zoom > 0 && m_iId != 11) fov = settings.zoom;
    if (m_pPlayer) m_pPlayer->m_iFOV = m_pPlayer->pev->fov = enabled ? fov : 90;
    if (m_pPlayer && ironSightsMessage) {
        MESSAGE_BEGIN(MSG_ONE, ironSightsMessage, nullptr, m_pPlayer->pev);
        WRITE_COORD(settings.forward); WRITE_COORD(settings.right); WRITE_COORD(settings.up);
        WRITE_BYTE(enabled ? int(fov) : 0); WRITE_BYTE(1); MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, scopeMessage, nullptr, m_pPlayer->pev);
        WRITE_BYTE(enabled && m_iId == 11); MESSAGE_END();
    }
    SyncMovement();
}
void CCofWeapon::SyncMovement() {
    if (m_pPlayer && m_pPlayer->m_pActiveItem == this)
        CofMovementWeaponState(m_pPlayer, m_aimed || m_fInReload || m_actionTime > gpGlobals->time,
            m_aimed && m_iId == 11 && !m_fInReload);
}
void CCofWeapon::Shoot(float damage, float spread, int pellets, int sequence, float cycle, const char* sound, float range) {
    if (!m_pPlayer || !HasAmmo()) { PlayEmptySound(); Lock(.2f); return; }
    if (Definition().clip > 0) --m_iClip;
    else if (Definition().ammo && m_iPrimaryAmmoType > 0) --m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType];
    UTIL_MakeVectors(m_pPlayer->pev->v_angle + m_pPlayer->pev->punchangle);
    m_pPlayer->FireBulletsPlayer(pellets, m_pPlayer->GetGunPosition(), gpGlobals->v_forward,
        Vector(spread, spread, spread), range, BULLET_PLAYER_9MM, 0, int(damage), m_pPlayer->pev, m_pPlayer->random_seed);
    Animate(sequence);
    if (sound && *sound) EMIT_SOUND(m_pPlayer->edict(), CHAN_WEAPON, sound, 1, ATTN_NORM);
    m_pPlayer->pev->effects |= EF_MUZZLEFLASH;
    m_pPlayer->m_iWeaponVolume = NORMAL_GUN_VOLUME;
    m_pPlayer->m_iWeaponFlash = NORMAL_GUN_FLASH;
    m_pPlayer->SetAnimation(PLAYER_ATTACK1);
    Lock(cycle);
}
void CCofWeapon::Swing(float damage, float delay, float cooldown, int sequence, float stamina) {
    if (!m_pPlayer || m_actionTime > gpGlobals->time) return;
    if (!m_pPlayer->m_cofUnlimitedStamina && m_pPlayer->m_cofStamina < stamina) { Lock(.2f); return; }
    m_action = 1;
    m_actionTime = gpGlobals->time + delay;
    m_actionDamage = damage;
    Animate(sequence);
    const int id=Definition().id;
    // Native axe/branch emit at attack start; normal knife does likewise.
    // Nightstick emits at impact, alternate knife at impact, sledge model
    // sequence1 has event5004 at frame29: do not double-play that event here.
    if(Definition().fireSound && (id==24 || (id==16 && sequence!=8) || (id==6 && !m_mode)))
        EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,Definition().fireSound,1,.8f);
    Lock(cooldown);
    SyncMovement();
}
void CCofWeapon::MeleeImpact(float damage, float distance) {
    if (!m_pPlayer || !m_pPlayer->IsAlive()) return;
    const int id=Definition().id;
    const bool branchPush=id==16 && m_animation==8;
    const bool melee=Definition().kind==COF_MELEE && !branchPush;
    // Confirmed instructions: axe100e6bec and branch100e6ebc load40;
    // nightstick/sledge/knife/Punch/WeaponMelee load32. No native64 trace.
    distance=(id==24 || (id==16 && !branchPush))?40.f:32.f;
    if(id==12 || (id==6 && m_mode))
        EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,Definition().fireSound,1,.8f);
    if(!melee && id!=2 && id!=22 && id!=10) {
        EMIT_SOUND(m_pPlayer->edict(),CHAN_AUTO,"weapons/mobile/punch_swing.wav",1,.8f);
        m_pPlayer->pev->vuser3=m_pPlayer->pev->vuser3+Vector(-20,20,160);
    }
    if(id==12) m_pPlayer->pev->vuser3=m_pPlayer->pev->vuser3+Vector(60,-160,0);
    if(id==18) m_pPlayer->pev->vuser3=m_pPlayer->pev->vuser3+Vector(80,20,160);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector start = m_pPlayer->GetGunPosition();
    TraceResult tr;
    UTIL_TraceLine(start, start + gpGlobals->v_forward * distance, dont_ignore_monsters, m_pPlayer->edict(), &tr);
    if (tr.flFraction == 1) {
        UTIL_TraceHull(start, start + gpGlobals->v_forward * distance, dont_ignore_monsters, head_hull, m_pPlayer->edict(), &tr);
        CBaseEntity* hullHit=CBaseEntity::Instance(tr.pHit);
        if(tr.flFraction<1 && (!hullHit || hullHit->IsBSPModel())) {
            // Same algorithm as original100df820: doubled hull endpoint then
            // eight duck-hull corner rays, keeping the nearest intersection.
            extern void FindHullIntersection(const Vector&,TraceResult&,float*,float*,edict_t*);
            float mins[]={-16,-16,-18},maxs[]={16,16,18};
            FindHullIntersection(start,tr,mins,maxs,m_pPlayer->edict());
        }
    }
    if (tr.flFraction < 1) {
        CBaseEntity* hit = CBaseEntity::Instance(tr.pHit);
        const bool flesh=hit && hit->Classify()!=CLASS_NONE && hit->Classify()!=CLASS_MACHINE;
        if (hit && hit->pev->takedamage) {
            ClearMultiDamage();
            // Preserve original custom bits; stock monster AI does not yet
            // implement all CoF stagger/gib reactions associated with them.
            const int damageFlags=id==18?0x0d001000:0x04001000;
            hit->TraceAttack(m_pPlayer->pev, damage, gpGlobals->v_forward, &tr, damageFlags);
            ApplyMultiDamage(m_pPlayer->pev, m_pPlayer->pev);
        }
        const char* sound="weapons/mobile/punch_smack.wav";
        int channel=CHAN_AUTO,pitch=100;
        if(melee) {
            channel=CHAN_WEAPON;
            if(id==24) sound=flesh?"weapons/axe/axe_hitbody.wav":"weapons/axe/axe_hit.wav";
            if(id==16) sound="weapons/branch/branch_hit.wav";
            if(id==18) sound=flesh?"weapons/sledgehammer/sledgehammer_hitbody.wav":"weapons/sledgehammer/sledgehammer_hit.wav";
            if(id==12) sound=flesh?(RANDOM_LONG(0,1)?"weapons/nightstick/nightstick_hitbody1.wav":"weapons/nightstick/nightstick_hitbody2.wav"):(RANDOM_LONG(0,1)?"weapons/nightstick/nightstick_hitwall1.wav":"weapons/nightstick/nightstick_hitwall2.wav");
            if(id==6) sound=flesh?(RANDOM_LONG(0,1)?"weapons/switchblade/switchblade_hitbody1.wav":"weapons/switchblade/switchblade_hitbody2.wav"):(RANDOM_LONG(0,1)?"weapons/switchblade/switchblade_hitwall1.wav":"weapons/switchblade/switchblade_hitwall2.wav");
            if(id==24 || id==16) pitch+=RANDOM_LONG(-10,10);
        } else if(id==2 || id==22) {channel=CHAN_WEAPON;pitch+=RANDOM_LONG(-10,10);}
        EMIT_SOUND_DYN(m_pPlayer->edict(),channel,sound,1,.8f,0,pitch);
        if(id==24 || id==16 || id==2 || id==22)
            UTIL_ScreenShake(m_pPlayer->pev->origin,2,.25f,.1f,2);
        else if(!melee) UTIL_ScreenShake(m_pPlayer->pev->origin,5,.25f,flesh?.1f:.15f,2);
    }
    m_pPlayer->SetAnimation(PLAYER_ATTACK1);
}
void CCofWeapon::PendingAction() {
    if (!m_pPlayer) { m_action = 0; return; }
    if (m_action == 1) {
        const float cost = Definition().staminaCost;
        if (!m_pPlayer->m_cofUnlimitedStamina) m_pPlayer->m_cofStamina = std::max(0.0f, m_pPlayer->m_cofStamina - cost);
        MeleeImpact(m_actionDamage);
    } else if (m_action == 2) CofMovementQueueSyringe(m_pPlayer);
    m_action = 0;
    SyncMovement();
}
void CCofWeapon::PrimaryAttack() {
    const auto& def = Definition();
    if (def.kind == COF_MELEE) Swing(def.damage, def.impactDelay, def.cycle, def.fire, def.staminaCost);
    else if (def.kind == COF_FIREARM) Shoot(def.damage, .015f, 1, def.fire, def.cycle, def.fireSound);
}
void CCofWeapon::SecondaryAttack() { Swing(5, .2f, .6f, Definition().fire); }
void CCofWeapon::Aim() { if (Definition().kind == COF_FIREARM && !m_fInReload) { SetAim(!m_aimed); Lock(.25f); } }
void CCofWeapon::ExtraAction() {}
void CCofWeapon::Reload() {
    if (!m_pPlayer || m_fInReload || Definition().clip <= 0 || m_iClip >= Definition().clip ||
        m_iPrimaryAmmoType <= 0 || m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType] <= 0) return;
    SetAim(false);
    m_fInReload = TRUE;
    float time = Animate(m_iClip ? Definition().reload : Definition().reloadEmpty);
    m_reloadTime = gpGlobals->time + time;
    Lock(time);
    SyncMovement();
}
BOOL CCofWeapon::PlayEmptySound() {
    // Native 1011e4a0: first empty press clicks; held repeats use the no-click sample.
    if (m_pPlayer) EMIT_SOUND(m_pPlayer->edict(), CHAN_AUTO,
        m_iPlayEmptySound ? "weapons/weapon_fire_empty.wav" : "weapons/weapon_fire_empty_noclick.wav", .8f, .8f);
    m_iPlayEmptySound = FALSE;
    return TRUE;
}
void CCofWeapon::WeaponIdle() {
    if (gpGlobals->time < m_flTimeWeaponIdle) return;
    m_flTimeWeaponIdle = gpGlobals->time + Animate(Definition().idle);
}
void CCofWeapon::ItemPostFrame() {
    if (!m_pPlayer || !m_pPlayer->IsAlive() || (m_pPlayer->pev->flags & FL_FROZEN)) return;
    const int buttons = m_pPlayer->pev->button;
    const int pressed = buttons & ~m_attackHeld;
    m_attackHeld = buttons;
    if (m_fInReload) return;
    // Native priority: melee, aim, fire, reload. 0x4000 is the SDK +attack3 adapter.
    if ((buttons & IN_ATTACK2) && gpGlobals->time >= m_flNextSecondaryAttack) SecondaryAttack();
    else if ((pressed & 0x4000) && gpGlobals->time >= m_flNextSecondaryAttack) Aim();
    else if ((buttons & IN_ATTACK) && (Definition().automatic || (pressed & IN_ATTACK)) && gpGlobals->time >= m_flNextPrimaryAttack) PrimaryAttack();
    else if ((buttons & IN_RELOAD) && gpGlobals->time >= m_flNextPrimaryAttack) Reload();
    else WeaponIdle();
}

void CofWeaponsPrecache() {
    durations.clear();
    aimSettings.clear();
    if (!ironSightsMessage) ironSightsMessage = REG_USER_MSG("IronSights", 8);
    if (!scopeMessage) scopeMessage = REG_USER_MSG("Scope", 1);
    extern void CofAmmoPrecache();
    CofAmmoPrecache();
    for (const char* const* list : {cofRangedClasses, cofSpecialClasses})
        for (int i = 0; list[i]; ++i) UTIL_PrecacheOtherWeapon(list[i]);
}
void CofWeaponsHudSync(CBasePlayer* player) {
    CCofWeapon* active=player?Weapon(player->m_pActiveItem):nullptr;
    if(active && active->Definition().kind!=COF_DUAL) {
        active->SetAim(active->m_aimed!=0,player->m_iFOV>0?float(player->m_iFOV):60.f);
        static int bodyMessage; if(!bodyMessage) bodyMessage=REG_USER_MSG("WeaponBody",1);
        MESSAGE_BEGIN(MSG_ONE,bodyMessage,nullptr,player->pev);WRITE_BYTE(active->pev->body);MESSAGE_END();
    }
}
void CofWeaponsPlayerFrame(CBasePlayer* player) {
    if (!player) return;
    CCofWeapon* active = Weapon(player->m_pActiveItem);
    const bool dual = active && active->Definition().kind == COF_DUAL;
    const float playerGate = player->m_flNextAttack;
    for (CBasePlayerItem* item = player->m_rgpPlayerItems[1], *next; item; item = next) {
        next = item->m_pNext; // A consumed syringe/flare may detach itself during PendingAction.
        CCofWeapon* weapon = Weapon(item);
        if (!weapon) continue;
        if (!player->IsAlive()) { weapon->m_actionTime = weapon->m_reloadTime = 0; weapon->m_fInReload = 0; continue; }
        if (weapon->m_actionTime > 0 && gpGlobals->time >= weapon->m_actionTime) {
            weapon->m_actionTime = 0;
            weapon->PendingAction();
        }
        if (weapon->m_fInReload && weapon->m_reloadTime > 0 && gpGlobals->time >= weapon->m_reloadTime) {
            const int index = weapon->m_iPrimaryAmmoType;
            if (index > 0) {
                int amount = std::min(weapon->Definition().clip - weapon->m_iClip, player->m_rgAmmo[index]);
                weapon->m_iClip += std::max(0, amount);
                player->m_rgAmmo[index] -= std::max(0, amount);
            }
            weapon->m_fInReload = 0; weapon->m_reloadTime = 0;
        }
        // Release detection must run during attack locks too, so short taps aren't lost.
        weapon->m_attackHeld &= player->pev->button;
        if (!(player->pev->button & IN_ATTACK)) weapon->m_iPlayEmptySound = TRUE;
        weapon->SyncMovement();
    }
    if (dual) player->m_flNextAttack = playerGate;
    CofSpecialPlayerFrame(player);
}
CCofWeapon* CofWeaponForSlot(CBasePlayer* player, int slot) {
    if (!player || slot < 1 || slot > 6) return nullptr;
    for (CBasePlayerItem* item = player->m_rgpPlayerItems[1]; item; item = item->m_pNext) {
        CCofWeapon* weapon = Weapon(item);
        if (weapon && weapon->m_inventorySlot == slot) return weapon;
    }
    return nullptr;
}
bool CofWeaponsInventoryUse(CBasePlayer* player, int slot, bool drop) {
    if (!player || !player->IsAlive() || (player->pev->flags & FL_FROZEN)) return false;
    CCofWeapon* weapon = CofWeaponForSlot(player, slot);
    if (!weapon) return drop && CofSpecialDropAccessory(player,slot);
    if (drop) weapon->DropToWorld();
    else if (player->m_pActiveItem != weapon) player->SwitchWeapon(weapon);
    return true;
}
void CCofWeapon::DropToWorld() {
    CBasePlayer* player = m_pPlayer;
    if (!player) return;
    CofSpecialUnpair(player);
    player->RemovePlayerItem(this, true);
    player->pev->weapons &= ~(1 << m_iId);
    CofInventoryRemove(player, m_inventorySlot);
    m_inventorySlot = 0; m_pPlayer = nullptr; m_pNext = nullptr;
    pev->aiment = pev->owner = nullptr;
    pev->effects &= ~EF_NODRAW;
    pev->sequence = 0; pev->frame = 0;
    if (WorldModel() && *WorldModel()) SET_MODEL(edict(), WorldModel());
    pev->movetype = MOVETYPE_TOSS; pev->solid = SOLID_BBOX;
    UTIL_MakeVectors(player->pev->v_angle);
    UTIL_SetOrigin(pev, player->pev->origin + Vector(0,0,16) + gpGlobals->v_forward * 20);
    UTIL_SetSize(pev, Vector(-8,-8,0), Vector(8,8,8));
    pev->velocity = player->pev->velocity + gpGlobals->v_forward * 100;
    m_iDefaultAmmo = 0; m_nextUse = gpGlobals->time + .5f;
    SetThink(nullptr); SetTouch(nullptr); pev->nextthink = 0;
}
bool CofWeaponsCommand(CBasePlayer* player, const char* command) {
    if (FStrEq(command, "weapontoggle")) {
        CCofWeapon* weapon = player ? Weapon(player->m_pActiveItem) : nullptr;
        if (weapon && player->IsAlive() && !(player->pev->flags & FL_FROZEN) && gpGlobals->time >= player->m_flNextAttack)
            weapon->ExtraAction();
        return true;
    }
    if (FStrEq(command, "quicksel")) {
        if (player && CMD_ARGC() == 2 && CMD_ARGV(1)[0] >= '1' && CMD_ARGV(1)[0] <= '3' && !CMD_ARGV(1)[1])
            CofWeaponsInventoryUse(player, player->m_cofQuickSlots[CMD_ARGV(1)[0] - '1']);
        return true;
    }
    for (int quick = 0; quick < 3; ++quick) {
        char name[24]; std::snprintf(name, sizeof(name), "quickselset%d", quick + 1);
        if (!FStrEq(command, name)) continue;
        if (player && CMD_ARGC() == 2 && CMD_ARGV(1)[0] >= '1' && CMD_ARGV(1)[0] <= '6' && !CMD_ARGV(1)[1]) {
            const int slot = CMD_ARGV(1)[0] - '0';
            if (CofWeaponForSlot(player, slot)) {
                player->m_cofQuickSlots[quick] = slot;
                CofInventorySync(player);
            }
        }
        return true;
    }
    if (FStrEq(command, "inventorycombine")) {
        if (CMD_ARGC() == 4 && CMD_ARGV(1)[0] >= '1' && CMD_ARGV(1)[0] <= '6' && !CMD_ARGV(1)[1] &&
            CMD_ARGV(2)[0] >= '1' && CMD_ARGV(2)[0] <= '6' && !CMD_ARGV(2)[1])
            CofSpecialCombine(player,CMD_ARGV(1)[0]-'0',CMD_ARGV(2)[0]-'0',CMD_ARGV(3));
        return true;
    }
    if (FStrEq(command, "inventoryunpair")) { CofSpecialUnpair(player); return true; }
    if (FStrEq(command, "inventorydual") || FStrEq(command, "inventorydualwield")) {
        if (CMD_ARGC() == 3 && CMD_ARGV(1)[0] >= '1' && CMD_ARGV(1)[0] <= '6' && !CMD_ARGV(1)[1] &&
            CMD_ARGV(2)[0] >= '1' && CMD_ARGV(2)[0] <= '6' && !CMD_ARGV(2)[1])
            CofSpecialPair(player, CMD_ARGV(1)[0] - '0', CMD_ARGV(2)[0] - '0');
        return true;
    }
    if (FStrEq(command, "inventorydrop")) {
        if (CMD_ARGC() == 2 && CMD_ARGV(1)[0] >= '1' && CMD_ARGV(1)[0] <= '6' && !CMD_ARGV(1)[1])
            CofWeaponsInventoryUse(player, CMD_ARGV(1)[0] - '0', true);
        return true;
    }
    return false;
}

#include "weapon_runtime_tests.inc"
