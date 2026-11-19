// Evidence-guided SDK port; no original binary offsets are used here.
#pragma once
class CBasePlayer;
void CofMovementRegisterCvars();
void CofMovementPrecache();
void CofMovementSpawn(CBasePlayer* player);
void CofMovementRestore(CBasePlayer* player);
void CofMovementSync(CBasePlayer* player);
void CofMovementPreThink(CBasePlayer* player);
void CofMovementPostThink(CBasePlayer* player);
void CofMovementJump(CBasePlayer* player);
void CofMovementLand(CBasePlayer* player);
void CofMovementFallOver(CBasePlayer* player);
float CofMovementFallDamage(CBasePlayer* player);
bool CofMovementDodge(CBasePlayer* player, int direction);
bool CofMovementCommand(CBasePlayer* player, const char* command);
void CofMovementQueueHeal(CBasePlayer* player, int amount);
void CofMovementQueueSyringe(CBasePlayer* player);
// Weapon ports supply actual state, not guessed offsets. scopedRifle means scoped
// and eligible to hold breath (false while reloading or otherwise interrupted).
void CofMovementWeaponState(CBasePlayer* player, bool blocksSprint, bool scopedRifle);
void CofMovementHealth(CBasePlayer* player);
void CofMovementTestFrame();
