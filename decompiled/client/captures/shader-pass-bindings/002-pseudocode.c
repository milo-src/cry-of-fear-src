
void FUN_10060b60(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_101be760) {
    do {
      (*DAT_101be764)(iVar1 + 0x84c0);
      (*DAT_101be724)(0x2300,0x8573,1);
      (*DAT_101be688)(0xde1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_101be760);
  }
  (*DAT_101be764)(0x84c0);
  (*DAT_101be698)(0xde1);
  (*DAT_101be688)(0xbe2);
  (*DAT_101be67c)(1);
  return;
}

