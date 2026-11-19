
undefined4 FUN_10086580(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (param_2 == 1) {
    uVar1 = in_ECX[2];
  }
  else {
    if (param_2 != 2) goto LAB_100865bd;
    uVar1 = in_ECX[1];
  }
  param_1 = cgCreateProgramFromFile(*in_ECX,0x1010,param_1,uVar1,&DAT_10151090,0);
LAB_100865bd:
  if (param_1 != 0) {
    return 1;
  }
  uVar1 = cgGetError();
  uVar1 = cgGetErrorString(uVar1);
  (*DAT_101b26a8)(&DAT_10151098,uVar1);
  return 0;
}

