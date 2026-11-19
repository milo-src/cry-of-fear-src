
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HUD_DrawTransparentTriangles(void)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
                    /* 0x93d10  564  HUD_DrawTransparentTriangles */
  FUN_10093bc0();
  FUN_10092320();
  if (DAT_10556b48 == 0) {
    FUN_1005fff0();
    _DAT_10556b58 = DAT_10556b5c;
    fVar1 = (float10)(*DAT_101b26e0)();
    DAT_10556b5c = (float)fVar1;
    fVar2 = 0.0;
    if (0.0 <= DAT_10556b5c - _DAT_10556b58) {
      fVar2 = DAT_10556b5c - _DAT_10556b58;
    }
    fVar3 = 0.5;
    if (fVar2 <= 0.5) {
      fVar3 = fVar2;
    }
    FUN_10080c90(fVar3,0);
    FUN_10094070();
    FUN_1006aed0();
    fVar1 = (float10)(*DAT_101b2644)("r_weather");
    if ((float)fVar1 != 0.0) {
      FUN_100858a0();
      FUN_10085980();
      FUN_10092850();
      FUN_10092390();
    }
    FUN_10055de0();
    fVar1 = (float10)(*DAT_101b2644)("cg_water");
    if ((float)fVar1 != 0.0) {
      FUN_10086cb0();
      FUN_10086d10();
      FUN_10086c40();
    }
  }
  return;
}

