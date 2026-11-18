#pragma once
// Port renderer for original CoF TGA artwork. Coordinates are native screen pixels.
bool CofDrawImage(const char* path, int x, int y, int width = 0, int height = 0,
                  float u0 = 0, float v0 = 0, float u1 = 1, float v1 = 1,
                  float red = 1, float green = 1, float blue = 1);
void CofUiVidInit();
