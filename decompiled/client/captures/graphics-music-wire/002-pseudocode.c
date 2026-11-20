
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10080a10(void)

{
  byte *pbVar1;
  
  if (DAT_105440b8 < DAT_105440bc + 2) {
    _DAT_105440c0 = 1;
    return -1;
  }
  pbVar1 = (byte *)(DAT_105440b4 + DAT_105440bc);
  DAT_105440bc = DAT_105440bc + 2;
  return (int)(short)((ushort)pbVar1[1] * 0x100 + (ushort)*pbVar1);
}

