
void FUN_1005ff50(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101348cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_104cdd64 != 0) {
    FUN_1005e740(DAT_10190600 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    FUN_1005eeb0();
    FUN_1005c180();
    iVar1 = FUN_10053c70();
    if ((iVar1 != 0) && (DAT_101be7f8 != 0)) {
      FUN_10060b60();
      FUN_10063780();
    }
    DAT_104ce078 = 0;
    DAT_104cdd64 = 0;
    FUN_1005e920();
  }
  ExceptionList = local_10;
  return;
}

