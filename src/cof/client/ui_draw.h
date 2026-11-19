#pragma once
// Port renderer for original CoF TGA artwork. Coordinates are native screen pixels.
struct CofUiPoint { float x, y; };
struct CofUiPlane {
    float cx, cy, distance, depth;
    float xx, xy, yy, zx, zy;
};
CofUiPlane CofUiPerspective(float cx,float cy,float distance,float yaw,float pitch,float depth);
CofUiPoint CofUiProject(const CofUiPlane& plane,float x,float y);
bool CofUiUnproject(const CofUiPlane& plane,float x,float y,CofUiPoint& local);
bool CofDrawImage(const char* path, int x, int y, int width = 0, int height = 0,
                  float u0 = 0, float v0 = 0, float u1 = 1, float v1 = 1,
                  float red = 1, float green = 1, float blue = 1, float alpha = 1,
                  const CofUiPlane* plane = nullptr);
void CofUiVidInit();
bool CofDrawMenuRain(float time,float lookX,float lookY);
void CofDrawRainLens(int x,int y,int width,int height,float alpha);
