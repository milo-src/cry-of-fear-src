
undefined4 FUN_1004a6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1448) != 0) {
    iVar1 = FUN_100808b0();
    (**(code **)(**(int **)(DAT_101b2600 + 0x1448) + 0x24))(iVar1 != 0);
    FUN_100aaad0();
  }
  return 1;
}

