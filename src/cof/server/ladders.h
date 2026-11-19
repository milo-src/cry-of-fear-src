#pragma once
class CBasePlayer;
struct edict_s;
struct entity_state_s;
void CofLadderPrecache();
bool CofLadderCommand(CBasePlayer*, const char*);
void CofLadderPlayerFrame(CBasePlayer*);
void CofLadderCancel(CBasePlayer*);
bool CofLadderActive(CBasePlayer*);
edict_s* CofLadderViewEntity(CBasePlayer*);
void CofLadderPackCamera(entity_state_s*, edict_s*);
void CofLadderTestFrame();
