
undefined4 FUN_1006fcc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  
  FUN_10080850(param_4,param_3);
  uVar1 = FUN_100808b0();
  *(undefined4 *)(param_1 + 0x2a98) = uVar1;
  DAT_10542ba8 = FUN_100808b0();
  DAT_10542bac = 0;
  fVar2 = (float10)(*DAT_101b26e0)();
  *(float *)(param_1 + 0x2aac) = (float)fVar2;
  return 1;
}

