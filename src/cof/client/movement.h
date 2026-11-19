#pragma once
struct usercmd_s;
struct ref_params_s;
struct mstudioevent_s;
struct cl_entity_s;

void CofMovementInit();
void CofMovementReset();
void CofMovementCreateMove(usercmd_s* cmd, int active);
void CofMovementView(ref_params_s* view);
float CofMovementFov(float target, float time);
bool CofMovementStudioEvent(const mstudioevent_s* event, const cl_entity_s* entity);
// Direction order: forward, backward, left, right.
bool CofMovementDirectionDown(int direction);
void CofMovementDirectionUp(int direction);
bool CofMovementJumpDown();
bool CofMovementDuckDown();
bool CofMovementCameraActive();
void CofMovementDamageFlash(int enabled);
void CofMovementTestFrame(float time);

