
undefined4 FUN_100709a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float10 fVar2;
  
  FUN_10080850(param_4,param_3);
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x291c) = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x2920) = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  *(float *)(param_1 + 0x2924) = (float)fVar2;
  FUN_100808b0();
  iVar1 = FUN_100808b0();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2934) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x291c) = 0;
  *(undefined4 *)(param_1 + 0x2920) = 0;
  *(undefined4 *)(param_1 + 0x2924) = 0;
  *(undefined1 *)(param_1 + 0x2934) = 0;
  return 1;
}

