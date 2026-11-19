// SDK reconstruction contracts; native private offsets never enter these types.
#pragma once
#include "weapons.h"

enum CofWeaponKind { COF_FIREARM, COF_MELEE, COF_SYRINGE, COF_LIGHT, COF_CAMERA, COF_BOOK, COF_ACTION, COF_DUAL };
struct CofWeaponDef {
    const char* classname;
    int id;
    CofWeaponKind kind;
    const char* viewModel;
    const char* worldModel;
    const char* playerModel;
    const char* descriptor;
    const char* ammo;
    int maxAmmo, clip, defaultAmmo;
    int deploy, idle, fire, reload, reloadEmpty;
    float damage, cycle, impactDelay, staminaCost;
    const char* fireSound;
    bool automatic;
};

class CCofWeapon : public CBasePlayerWeapon {
public:
    virtual const CofWeaponDef& Definition() const = 0;
    void KeyValue(KeyValueData*) override;
    const char* ViewModel() const;
    const char* WorldModel() const;
    const char* DescriptorPath() const;
    void Spawn() override;
    void Precache() override;
    int GetItemInfo(ItemInfo*) override;
    int iItemSlot() override { return 1; }
    int ObjectCaps() override { return FCAP_ACROSS_TRANSITION | FCAP_IMPULSE_USE; }
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE, float) override;
    int AddToPlayer(CBasePlayer*) override;
    int AddDuplicate(CBasePlayerItem*) override;
    BOOL CanDeploy() override { return TRUE; }
    BOOL IsUseable() override { return TRUE; }
    BOOL Deploy() override;
    void Holster(int skiplocal = 0) override;
    void ItemPostFrame() override;
    void PrimaryAttack() override;
    void SecondaryAttack() override;
    virtual void Aim();
    virtual void ExtraAction();
    void Reload() override;
    void WeaponIdle() override;
    BOOL PlayEmptySound() override;
    virtual void PendingAction();
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    static TYPEDESCRIPTION m_SaveData[];
    float SequenceDuration(int sequence) const;
    float Animate(int sequence);
    void Lock(float seconds);
    void Shoot(float damage, float spread, int pellets, int sequence, float cycle, const char* sound, float range = 8192);
    void Swing(float damage, float delay, float cooldown, int sequence, float stamina = 0);
    void MeleeImpact(float damage, float distance = 64);
    bool HasAmmo() const;
    void SetAim(bool enabled, float fov = 60);
    void SyncMovement();
    void DropToWorld();
    // Saved per-instance state; absolute server deadlines (CLIENT_WEAPONS=OFF).
    string_t m_customView, m_customWorld, m_customDescriptor;
    float m_actionTime, m_actionDamage, m_reloadTime, m_nextUse;
    int m_animation, m_action, m_aimed, m_mode, m_inventorySlot, m_attackHeld;
};

void CofWeaponsPrecache();
void CofWeaponsHudSync(CBasePlayer*);
void CofWeaponsPlayerFrame(CBasePlayer*);
bool CofWeaponsCommand(CBasePlayer*, const char*);
bool CofWeaponsInventoryUse(CBasePlayer*, int slot, bool drop = false);
CCofWeapon* CofWeaponForSlot(CBasePlayer*, int slot);
void CofWeaponsTestFrame();
// Lists provided by the independently audited weapon families.
extern const char* const cofRangedClasses[];
extern const char* const cofSpecialClasses[];
