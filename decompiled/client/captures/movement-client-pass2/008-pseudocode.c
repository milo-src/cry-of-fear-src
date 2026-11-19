
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10071c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_10080850(param_4,param_3);
  iVar1 = FUN_10080a10();
  iVar2 = FUN_100808b0();
  if (iVar2 != 0) {
    DAT_10542bb2 = 1;
    return 1;
  }
  if (iVar1 < 1) {
    DAT_10542bb8 = 0;
  }
  else {
    DAT_10542bb8 = (*DAT_101b26dc)(iVar1);
  }
  _DAT_10559500 = 0;
  DAT_105594fc = 0;
  return 1;
}

