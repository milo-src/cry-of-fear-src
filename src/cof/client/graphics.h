#pragma once

struct cl_entity_s;

// Called once when the client registers messages, and on actual HUD/map resets.
void CofGraphicsInit();
void CofGraphicsReset();
// A video restart must preserve the server's fog/colour/weather state.
void CofGraphicsVidInit();
void CofGraphicsFrame(double clientTime);
int CofGraphicsAddEntity(const cl_entity_s* entity);

struct CofRainState {
    int drips;
    float distance, windX, windY, randomX, randomY;
    int mode;
    float height;
};
// Recovered wire state only; precipitation simulation is a separate renderer.
const CofRainState& CofGraphicsRain();
