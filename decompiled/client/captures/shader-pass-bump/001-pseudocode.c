
void FUN_10060de0(int param_1)

{
  int iVar1;
  
  DAT_104cdf84 = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x1c);
  *(int *)(iVar1 + 0x1c) = param_1;
  return;
}

