
void FUN_10061cf0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 4) != 0) {
      FUN_10060d60();
      return;
    }
    if (((uVar1 & 0x200) != 0) && (*(float *)(DAT_104cd50c + 0xc) != 0.0)) {
      FUN_10061080(param_1);
      DAT_104cdf9c = DAT_104cdf9c + 1;
      return;
    }
    FUN_10061b40(param_1);
    DAT_104cdf9c = DAT_104cdf9c + 1;
  }
  return;
}

