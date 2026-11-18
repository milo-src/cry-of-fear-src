#pragma once
class CBasePlayer;
void CofMenuRegisterCvars();
void CofMenuPrecache();
void CofMenuPlayerInit(CBasePlayer* player);
bool CofMenuCommand(CBasePlayer* player, const char* command);
