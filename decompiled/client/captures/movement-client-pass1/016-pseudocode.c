
void FUN_10078f50(void)

{
  float10 fVar1;
  
  if ((DAT_1018cb58 == 0) && (DAT_101b2f10 == 0)) {
    if (DAT_10543340 != '\0') {
      DAT_105594f4 = DAT_105594f4 + 0.25;
      return;
    }
    FUN_1007a780(&DAT_10543420);
    FUN_10076a20(8);
    fVar1 = (float10)(*DAT_101b26e0)();
    if ((((float)fVar1 < DAT_1018d284) && (*(float *)(DAT_105433e8 + 0xc) == 0.0)) &&
       (DAT_10559515 != '\0')) {
      (*DAT_101b2654)("dodgeforward");
    }
    if ((((byte)DAT_10543530 & 1) != 0) && (DAT_10559515 != '\0')) {
      (*DAT_101b2654)("dodgeforward");
    }
    if (DAT_10542bc0 != 0) {
      (*DAT_101b2654)("forwardpressed");
    }
    fVar1 = (float10)(*DAT_101b26e0)();
    DAT_1018d284 = (float)(fVar1 + (float10)0.18);
  }
  return;
}

