
void FUN_1001b330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  iVar1 = FUN_100808b0();
  if (&DAT_101af810 + iVar1 * 0x15c != (undefined *)0x0) {
    FUN_1000c900(local_108,&DAT_1013f4d0,&DAT_101af810 + iVar1 * 0x15c);
    fVar2 = (float10)(*DAT_101b26e0)();
    FUN_1007dea0(local_108,(float)fVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

