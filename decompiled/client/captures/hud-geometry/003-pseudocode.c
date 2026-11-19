
undefined4 FUN_1003a360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int *)(DAT_101b2600 + 0x142c) != 0) {
    FUN_10080850(param_3,param_2);
    uVar1 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0x1000) = uVar1;
    fVar2 = (float10)FUN_10080910();
    if (0.0 < (float)fVar2) {
      fVar3 = (float10)(*DAT_101b26e0)();
      *(float *)(*(int *)(DAT_101b2600 + 0x142c) + 0xfe4) = (float)(fVar3 + (float10)(float)fVar2);
    }
  }
  return 1;
}

