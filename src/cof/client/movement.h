#pragma once
struct usercmd_s;
struct ref_params_s;

void CofMovementInit();
void CofMovementReset();
void CofMovementCreateMove(usercmd_s* cmd, int active);
void CofMovementView(ref_params_s* view);
float CofMovementFov(float target, float time);
// Direction order: forward, backward, left, right.
bool CofMovementDirectionDown(int direction);
void CofMovementDirectionUp(int direction);
bool CofMovementJumpDown();
bool CofMovementDuckDown();
bool CofMovementCameraActive();
void CofMovementDamageFlash(int enabled);
void CofMovementTestFrame(float time);

