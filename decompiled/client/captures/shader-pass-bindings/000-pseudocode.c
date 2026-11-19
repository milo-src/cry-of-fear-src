
void FUN_100611a0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_10062fe0(0,3);
  FUN_10062fe0(1,2);
  FUN_10062fe0(2,0);
  FUN_10062fe0(3,1);
  (*DAT_101be650)(1,1);
  FUN_10062f10(1,1,1,1);
  (*DAT_101be698)(0x8804);
  (*DAT_101be7a8)(0x8804,DAT_1018f854);
  for (iVar1 = DAT_104cde74; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
    iVar2 = FUN_100621d0(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x24));
    FUN_10060e10(0x84c0,*(undefined4 *)(iVar2 + 0x10));
    FUN_10060e10(0x84c1,*(int *)(iVar1 + 0x38) + DAT_101cbf78);
    FUN_10060e10(0x84c2,*(int *)(iVar1 + 0x38) + DAT_101cbf74);
    FUN_10060e10(0x84c3,*(undefined4 *)(iVar2 + 0x1c));
    FUN_10063150(iVar1,&DAT_104cddcc);
    FUN_10061d80(iVar1);
    DAT_104cdfac = DAT_104cdfac + 1;
  }
  (*DAT_101be688)(0x8804);
  return;
}

