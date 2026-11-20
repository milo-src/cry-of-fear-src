
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1006bf10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_10 [3];
  
  FUN_10080850(param_3,param_2);
  iVar1 = FUN_100808b0();
  iVar2 = FUN_100808b0();
  uVar3 = FUN_100809b0();
  iVar4 = 0;
  do {
    fVar5 = (float10)FUN_10080910();
    local_10[iVar4] = (float)fVar5;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  FUN_1006c130(DAT_1018d1b0,uVar3);
  iVar4 = FUN_100808b0();
  if (iVar4 != 0) {
    fVar5 = (float10)(*DAT_101b26e0)();
    _DAT_1018a3e8 = (float)(fVar5 + (float10)0.15);
  }
  if ((0 < iVar2) || (0 < iVar1)) {
    FUN_1006ba00(local_10[0],local_10[1],local_10[2]);
  }
  return 1;
}

