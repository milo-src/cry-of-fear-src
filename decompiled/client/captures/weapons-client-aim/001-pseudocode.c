
undefined4 FUN_10032bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x146c) != 0) {
    iVar2 = FUN_100808b0();
    *(int *)(*(int *)(DAT_101b2600 + 0x146c) + 0xbc) = iVar2;
    if (iVar2 == 0) {
      cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x146c) + 0x28))();
      if (cVar1 == '\0') {
        return 1;
      }
      uVar3 = 0;
    }
    else {
      iVar2 = **(int **)(*(int *)(DAT_101b2600 + 0x146c) + 0xc4);
      uVar3 = FUN_10008640("gfx/vgui/telescope_scope.tga");
      (**(code **)(iVar2 + 0x1fc))(uVar3);
      cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x146c) + 0x28))();
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = 1;
    }
    (**(code **)(**(int **)(DAT_101b2600 + 0x146c) + 0x24))(uVar3);
  }
  return 1;
}

