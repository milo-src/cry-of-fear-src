
void FUN_100627e0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  if (DAT_104cdf84 != 0) {
    (*DAT_101be698)(0xbe2);
    (*DAT_101be67c)(0);
    (*DAT_101be684)(0x202);
    (*DAT_101be650)(0x306,0x300);
    FUN_10062fe0(0,1);
    FUN_10062fe0(1,1);
    iVar1 = (*DAT_101b26dc)(0);
    local_8 = 0;
    iVar1 = *(int *)(iVar1 + 0xb94);
    piVar3 = *(int **)(iVar1 + 0x174);
    if (0 < *(int *)(iVar1 + 0x170)) {
      do {
        iVar4 = *(int *)(*piVar3 + 0x1c);
        if (iVar4 != 0) {
          FUN_10060e10(0x84c0,*(undefined4 *)(*piVar3 + 0x18));
          do {
            iVar2 = FUN_100621d0(*piVar3);
            if (((iVar2 == 0) || (*(int *)(iVar2 + 0x14) == 0)) ||
               (*(float *)(DAT_104cd514 + 0xc) == 0.0)) {
              FUN_10062f10(1,0,0,0);
            }
            else {
              FUN_10062f10(1,5,0,0);
              FUN_100630e0(1,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24));
              FUN_10060e10(0x84c1,*(undefined4 *)(iVar2 + 0x14));
            }
            FUN_10061d80(iVar4);
            iVar2 = *(int *)(iVar4 + 0x28);
            if ((*(uint *)(iVar4 + 8) & 0x400) != 0) {
              FUN_10060d80(iVar4);
            }
            iVar4 = iVar2;
          } while (iVar2 != 0);
        }
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
      } while (local_8 < *(int *)(iVar1 + 0x170));
    }
    FUN_100630e0(1,0,0);
  }
  return;
}

