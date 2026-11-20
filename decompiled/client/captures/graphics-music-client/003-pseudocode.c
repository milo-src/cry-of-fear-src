
int FUN_1007fad0(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_105440a4 >> 8);
  if ((DAT_105440a4 != 0) && (*(int *)(DAT_105440a4 + 0xbc) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}

