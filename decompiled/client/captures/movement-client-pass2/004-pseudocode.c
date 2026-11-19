
undefined4 FUN_1006bfe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  FUN_10080850(param_3,param_2);
  iVar2 = FUN_100808b0();
  iVar3 = FUN_100808b0();
  iVar4 = FUN_100808b0();
  piVar5 = (int *)(*DAT_101b26d4)();
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar1 = *piVar5;
  if (iVar4 == 0) {
    *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 0x10) | 1;
  }
  else {
    if (iVar1 < 0) {
      return 0;
    }
    iVar4 = (*DAT_101b2698)();
    if (iVar4 < iVar1) {
      return 0;
    }
    *(int *)(in_ECX + 0x34 + iVar3 * 4) = iVar2;
    *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 0x10) | 1;
    if (iVar3 != iVar1) {
      return 1;
    }
  }
  if (iVar2 != *(int *)(in_ECX + 0x14)) {
    *(undefined4 *)(in_ECX + 0x30) = 0x42c80000;
    *(int *)(in_ECX + 0x14) = iVar2;
  }
  FUN_10098000(iVar2);
  return 1;
}

