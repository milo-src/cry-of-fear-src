
void FUN_10071760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  
  FUN_10080850(param_4,param_3);
  pfVar2 = (float *)&DAT_10542b88;
  do {
    iVar1 = FUN_100808b0();
    *pfVar2 = (float)iVar1;
    pfVar2 = pfVar2 + 1;
  } while ((int)pfVar2 < 0x10542b94);
  iVar1 = FUN_10080a10();
  DAT_10542ba0 = (float)iVar1;
  iVar1 = FUN_10080a10();
  DAT_10542b94 = (float)iVar1;
  if (0.0 < DAT_10542ba0) {
    DAT_10542b9c = FUN_10080a10();
    DAT_10542b98 = 30000.0;
    return;
  }
  if (DAT_10542ba0 < 0.0) {
    iVar1 = FUN_10080a10();
    DAT_10542b98 = (float)iVar1;
    DAT_10542b9c = (int)(float)iVar1;
    return;
  }
  iVar1 = FUN_10080a10();
  DAT_10542b98 = (float)iVar1;
  return;
}

