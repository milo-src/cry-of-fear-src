
void __fastcall FUN_10096611(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = (**(code **)(**(int **)(param_1 + 0x88) + 0x21c))();
  do {
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      uVar4 = 0;
      piVar1 = (int *)FUN_10070c30((void *)(param_1 + 0xb0),local_10);
      puVar2 = (undefined4 *)FUN_10098a80((void *)(param_1 + 0x8c),*piVar1);
      (**(code **)(*(int *)*puVar2 + 0x74))(uVar4);
    }
    for (local_10 = local_c;
        (local_8 < *(int *)(param_1 + 0x84) &&
        (iVar3 = FUN_10078b30(param_1 + 0xb0), local_10 < iVar3)); local_10 = local_10 + 1) {
      uVar4 = 1;
      piVar1 = (int *)FUN_10070c30((void *)(param_1 + 0xb0),local_10);
      puVar2 = (undefined4 *)FUN_10098a80((void *)(param_1 + 0x8c),*piVar1);
      (**(code **)(*(int *)*puVar2 + 0x74))(uVar4);
      local_8 = local_8 + 1;
    }
    for (; iVar3 = FUN_10078b30(param_1 + 0xb0), local_10 < iVar3; local_10 = local_10 + 1) {
      uVar4 = 0;
      piVar1 = (int *)FUN_10070c30((void *)(param_1 + 0xb0),local_10);
      puVar2 = (undefined4 *)FUN_10098a80((void *)(param_1 + 0x8c),*piVar1);
      (**(code **)(*(int *)*puVar2 + 0x74))(uVar4);
    }
    if (local_8 < *(int *)(param_1 + 0x84)) {
      local_c = local_c + -1;
      local_8 = 0;
    }
  } while (local_8 < *(int *)(param_1 + 0x84) + -1);
  return;
}

