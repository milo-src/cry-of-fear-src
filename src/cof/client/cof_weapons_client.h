#pragma once
struct usercmd_s;
struct mstudioevent_s;
struct cl_entity_s;
struct ref_params_s;
void CofWeaponsClientInit();
void CofWeaponsClientReset();
void CofWeaponsClientDraw();
void CofWeaponsClientMove(usercmd_s*, int active);
void CofWeaponsClientView(ref_params_s*);
bool CofWeaponsAiming();
bool CofWeaponsStudioEvent(const mstudioevent_s*, const cl_entity_s*);
bool CofWeaponsAmmoMessage(int size, const void* data);
bool CofWeaponsCurrentMessage(int size, const void* data);
bool CofWeaponsListMessage(int size, const void* data);
int CofWeaponsRenderHands(int flags, int (*draw)(int));
bool CofWeaponsMirrorHand();
void CofWeaponsHandEvent(bool begin);

