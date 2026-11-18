#pragma once
// Original 256-glyph bitmap font; text bytes are CP1251 in this installed build.
void CofUiText(int x, int y, const char* text, bool centered = false,
               float red = 1, float green = 1, float blue = 1);
int CofUiTextWidth(const char* text);
// Pager history accepts the port's UTF-8, with legacy CP1251 fallback.
void CofPagerText(int x, int y, const char* text);
