
void FUN_10061b40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_10062650(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24));
  DAT_104cdfa4 = DAT_104cdfa4 + 1;
  FUN_10060e10(0x84c0,*(int *)(param_1 + 0x38) + DAT_101cbf70);
  if (DAT_104cdf98 != 0) {
    if (*(int *)(DAT_104cddc8 + 0x2f8) != 0) {
      (*DAT_101be66c)(0,0,0,0);
      FUN_10062f10(1,1,0,0);
      FUN_10060e10(0x84c1,*(undefined4 *)(iVar1 + 0x18));
      FUN_10061d80(param_1);
      (*DAT_101be66c)(1,1,1,0);
      (*DAT_101be684)(0x202);
      FUN_10062f10(1,0,0,0);
      FUN_10061d80(param_1);
      (*DAT_101be684)(0x203);
      FUN_10060de0(param_1);
      return;
    }
LAB_10061c45:
    FUN_10062f10(1,0,0,0);
    FUN_10061d80(param_1);
    FUN_10060de0(param_1);
    return;
  }
  iVar2 = FUN_100621d0(iVar1);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x14) == 0)) || (*(float *)(DAT_104cd514 + 0xc) == 0.0)) {
    FUN_10062f10(1,5,0,0);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar3 = 0x84c1;
  }
  else {
    if (DAT_101be760 == 2) goto LAB_10061c45;
    FUN_10062f10(1,5,5,0);
    FUN_10062fe0(2,1);
    FUN_100630e0(2,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24));
    FUN_10060e10(0x84c1,*(undefined4 *)(iVar1 + 0x18));
    uVar4 = *(undefined4 *)(iVar2 + 0x14);
    uVar3 = 0x84c2;
  }
  FUN_10060e10(uVar3,uVar4);
  FUN_10061d80(param_1);
  if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
    FUN_10060d80(param_1);
  }
  return;
}

