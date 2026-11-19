
void FUN_100626e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_100630e0(2,0,0);
  if (DAT_104cdf80 != 0) {
    (*DAT_101be698)(0xbe2);
    (*DAT_101be67c)(0);
    (*DAT_101be684)(0x202);
    FUN_10062f10(1,0,0,0);
    FUN_10062fe0(0,2);
    if (DAT_101be760 == 2) {
      (*DAT_101be650)(0,0x300);
      iVar3 = 0;
      do {
        iVar2 = (&DAT_104cde80)[iVar3];
        if (iVar2 != 0) {
          FUN_10060e10(0x84c0,DAT_101cbf74 + iVar3);
          do {
            FUN_10061d80(iVar2);
            iVar2 = *(int *)(iVar2 + 0x28);
          } while (iVar2 != 0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40);
    }
    (*DAT_101be650)(1,1);
    iVar3 = 0;
    do {
      iVar2 = (&DAT_104cde80)[iVar3];
      if (iVar2 != 0) {
        FUN_10060e10(0x84c0,DAT_101cbf70 + iVar3);
        do {
          FUN_10061d80(iVar2);
          iVar1 = *(int *)(iVar2 + 0x28);
          FUN_10060de0(iVar2);
          iVar2 = iVar1;
        } while (iVar1 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
  }
  return;
}

