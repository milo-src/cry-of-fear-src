
void FUN_100622c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  (*DAT_101be688)(0xbe2);
  (*DAT_101be67c)(1);
  (*DAT_101be684)(0x203);
  DAT_104cde70 = 0;
  DAT_104cde78 = 0;
  DAT_104cde74 = 0;
  DAT_104cde7c = 0;
  DAT_104cdf80 = 0;
  DAT_104cdf84 = 0;
  DAT_104cdf98 = FUN_1005bff0();
  puVar5 = &DAT_104cde80;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_10062b60();
  FUN_10062fe0(0,2);
  FUN_10062fe0(1,1);
  FUN_10062fe0(3,2);
  iVar4 = (*DAT_101b26dc)(0);
  iVar4 = *(int *)(iVar4 + 0xb94);
  iVar3 = 0;
  iVar2 = *(int *)(iVar4 + 0x174);
  if (0 < *(int *)(iVar4 + 0x170)) {
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(iVar2 + iVar1) + 0x1c) = 0;
    } while (iVar3 < *(int *)(iVar4 + 0x170));
  }
  return;
}

