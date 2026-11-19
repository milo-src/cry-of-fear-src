
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007c9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_10080850(param_3,param_2);
  iVar1 = FUN_10080a10();
  iVar2 = FUN_10080a10();
  DAT_105436dc = (float)iVar2;
  iVar2 = FUN_10080a10();
  DAT_105436e0 = (float)iVar2;
  iVar2 = FUN_10080a10();
  _DAT_105436e4 = (float)iVar2;
  _DAT_105436f0 = DAT_105436dc + 20.0;
  _DAT_105436e8 = DAT_105436dc - 20.0;
  _DAT_105436ec = DAT_105436e0 - 20.0;
  _DAT_105436f4 = DAT_105436e0 + 20.0;
  if (iVar1 == -1) {
    DAT_105436d8 = 0;
  }
  else {
    DAT_105436f8 = 0;
    DAT_105436d8 = (*DAT_101b26dc)(iVar1);
  }
  _DAT_1018d210 = DAT_1018d1b0;
  return 1;
}

