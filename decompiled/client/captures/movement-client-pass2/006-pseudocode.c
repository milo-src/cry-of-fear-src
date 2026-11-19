
undefined4 FUN_10070ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  
  FUN_10080850(param_4,param_3);
  uVar1 = FUN_100808b0();
  *(undefined4 *)(param_1 + 0x2a94) = uVar1;
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x2ab0) = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x2ab4) = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x2ab8) = (float)fVar2;
  fVar2 = (float10)(*DAT_101b26e0)();
  *(float *)(param_1 + 0x2aac) = (float)fVar2;
  return 1;
}

