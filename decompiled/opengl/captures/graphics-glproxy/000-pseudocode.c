
void glDepthRange(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
                    /* 0x11c3  70  glDepthRange */
  if (((double)CONCAT44(param_2,param_1) == 0.0) &&
     (((param_3 == 0 && (param_4 == 0x3fe00000)) || ((param_3 == 0 && (param_4 == 0x3ff00000)))))) {
    param_3 = -0x66666666;
    param_4 = 0x3fe99999;
  }
  (*DAT_1001babc)(param_1,param_2,param_3,param_4);
  return;
}

