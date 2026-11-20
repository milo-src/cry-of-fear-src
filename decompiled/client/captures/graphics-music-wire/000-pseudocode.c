
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100808b0(void)

{
  int iVar1;
  
  iVar1 = DAT_105440bc;
  if (DAT_105440b8 < DAT_105440bc + 1) {
    _DAT_105440c0 = 1;
    return 0xffffffff;
  }
  DAT_105440bc = DAT_105440bc + 1;
  return (uint)*(byte *)(DAT_105440b4 + iVar1);
}

