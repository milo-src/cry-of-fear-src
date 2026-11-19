
undefined4 FUN_1001b110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_10080850(param_3,param_2);
  iVar1 = FUN_100808b0();
  uVar2 = FUN_10080a10();
  *(uint *)(&DAT_101b2420 + iVar1 * 4) = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  return 1;
}

