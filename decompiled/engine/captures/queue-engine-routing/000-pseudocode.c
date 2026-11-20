
undefined4 FUN_01dd696a(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  uVar1 = param_3 & 0xffffff7f;
  iVar2 = FUN_01d7f691();
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x254c) == 0)) {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        local_8 = FUN_01d45b16(param_2);
      }
      else {
        if (uVar1 != 4) {
          FUN_01d4aa99(s_MULTICAST__Error__d__01ecac7c,param_3);
          return 0;
        }
        local_8 = FUN_01d45b3d(param_2);
      }
    }
    if ((local_8 != 0) &&
       (iVar2 = FUN_01ddd3c7(*(int *)(param_1 + 0x4b9c) + 0x88),
       ((uint)*(byte *)(local_8 + (iVar2 + -1 >> 3)) & 1 << ((byte)(iVar2 + -1) & 7)) == 0)) {
      return 0;
    }
  }
  return 1;
}

