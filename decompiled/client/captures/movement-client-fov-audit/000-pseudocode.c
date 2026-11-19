
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100393d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  FUN_10080850(param_3,param_2);
  fVar2 = (float10)FUN_10080910();
  _DAT_1018d204 = (float)fVar2;
  DAT_1018d208 = FUN_100808b0();
  iVar1 = FUN_100808b0();
  DAT_1018d200 = iVar1 != 0;
  if (DAT_1018d208 != 0) {
    _DAT_1018d210 = DAT_1018d1b0;
  }
  return 1;
}

