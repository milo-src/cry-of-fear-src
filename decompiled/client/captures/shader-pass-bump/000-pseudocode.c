
void FUN_10061080(int param_1)

{
  int iVar1;
  
  DAT_104cdfa0 = DAT_104cdfa0 + 1;
  iVar1 = FUN_100621d0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24));
  FUN_10060e10(0x84c0,*(int *)(param_1 + 0x38) + DAT_101cbf78);
  FUN_10060e10(0x84c1,*(undefined4 *)(iVar1 + 0x10));
  if (3 < DAT_101be760) {
    FUN_10062f10(1,7,4,6);
    FUN_10062fe0(2,2);
    FUN_100630e0(2,0,0);
    FUN_10060e10(0x84c2,*(int *)(param_1 + 0x38) + DAT_101cbf74);
    FUN_10060e10(0x84c3,*(int *)(param_1 + 0x38) + DAT_101cbf70);
    FUN_10060de0(param_1);
    FUN_10061d80(param_1);
    return;
  }
  if (DAT_101be760 == 3) {
    FUN_10062f10(1,7,4,0);
    FUN_10062fe0(2,2);
    FUN_100630e0(2,0,0);
    FUN_10060e10(0x84c2,*(int *)(param_1 + 0x38) + DAT_101cbf74);
    FUN_10060d30(param_1);
    FUN_10061d80(param_1);
    return;
  }
  if (DAT_101be760 == 2) {
    FUN_10062f10(1,7,0,0);
    FUN_10060d30(param_1);
  }
  FUN_10061d80(param_1);
  return;
}

