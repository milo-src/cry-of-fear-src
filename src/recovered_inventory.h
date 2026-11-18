// SDK port interfaces; the original player/entity layouts are different.
#pragma once
class CBasePlayer;
class CBaseEntity;
void CofInventoryPrecache();
void CofInventorySync(CBasePlayer* player);
bool CofInventoryCommand(CBasePlayer* player, const char* command);
bool CofInventoryUse(CBasePlayer* player, int slot);
// Returns true only when a matching inter_door has been unlocked.
bool CofUnlockDoorWithKey(CBaseEntity* entity, CBasePlayer* player,
                          const char* mapName, int slot);
void CofInventoryRemove(CBasePlayer* player, int slot);
void CofInventoryTestFrame();
