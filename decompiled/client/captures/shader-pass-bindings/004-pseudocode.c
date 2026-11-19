
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005eeb0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_104cdd60 != 0) {
    FUN_10060bd0();
    DAT_104cdd60 = 0;
    iVar2 = (*DAT_101b26dc)(0);
    iVar2 = *(int *)(iVar2 + 0xb94);
    iVar3 = FUN_100847c0(DAT_104cde64,DAT_104cde68,DAT_104cde6c,iVar2);
    DAT_104cdd6c = *(undefined4 *)(iVar3 + 4);
    FUN_10061da0();
    _DAT_104cddcc = CONCAT44(DAT_104cde68,DAT_104cde64);
    DAT_104cddd4 = DAT_104cde6c;
    DAT_104cddc8 = (*DAT_101b26dc)(0);
    FUN_100622c0();
    FUN_1005fca0(*(undefined4 *)(iVar2 + 0xa4));
    iVar5 = 0;
    iVar3 = DAT_104cdd40;
    if (0 < DAT_104cdd40) {
      do {
        uVar1 = (&DAT_104cd540)[iVar5];
        iVar4 = FUN_1005f070(uVar1);
        if (iVar4 == 0) {
          FUN_1005f570(uVar1,1);
          iVar3 = DAT_104cdd40;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    FUN_100626e0();
    if (*(float *)(DAT_104cdd78 + 0xc) != 0.0) {
      FUN_1005b300();
    }
    FUN_100627e0();
    FUN_10062940();
    if (DAT_104cde7c == 0) {
      DAT_104cdd70 = 1;
    }
    iVar5 = 0;
    iVar3 = DAT_104cdd40;
    if (0 < DAT_104cdd40) {
      do {
        uVar1 = (&DAT_104cd540)[iVar5];
        iVar4 = FUN_1005f070(uVar1);
        if (iVar4 != 0) {
          FUN_1005f570(uVar1,0);
          iVar3 = DAT_104cdd40;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    (*DAT_101be684)(0x203);
    FUN_10061020();
    FUN_100586c0();
    FUN_10060b60();
    iVar5 = 0;
    iVar3 = *(int *)(iVar2 + 0x174);
    if (0 < *(int *)(iVar2 + 0x170)) {
      do {
        iVar4 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(iVar3 + iVar4) + 0x1c) = 0;
      } while (iVar5 < *(int *)(iVar2 + 0x170));
    }
  }
  return;
}

