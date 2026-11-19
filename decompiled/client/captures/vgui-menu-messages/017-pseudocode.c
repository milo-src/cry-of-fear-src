
undefined4 FUN_10049c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x143c) != 0) {
    iVar2 = FUN_100808b0();
    cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x143c) + 0x28))();
    if ((cVar1 == '\0') && (iVar2 != 0)) {
      (**(code **)(**(int **)(DAT_101b2600 + 0x143c) + 0x24))(1);
      FUN_100aaad0();
    }
    return 1;
  }
  return 1;
}

