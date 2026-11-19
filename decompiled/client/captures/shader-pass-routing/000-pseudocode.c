
void FUN_10060d80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100621d0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24));
  if (*(int *)(iVar1 + 0x18) == 0) {
    *(int *)(param_1 + 0x28) = DAT_104cde74;
    DAT_104cde74 = param_1;
    return;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x28) = DAT_104cde78;
    DAT_104cde78 = param_1;
    return;
  }
  *(int *)(param_1 + 0x28) = DAT_104cde70;
  DAT_104cde70 = param_1;
  return;
}

