
void FUN_1002afb0(int param_1)

{
  char cVar1;
  int *in_ECX;
  char *pcVar2;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0x14) {
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
  }
  else {
    if (param_1 == 0x19) {
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      FUN_100aa7f0(0x1e);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_1 - 1U < 0x10) {
      pcVar2 = &DAT_1018b05c + param_1 * 0x1a0;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((1 < (uint)((int)pcVar2 - (int)(&DAT_1018b05d + param_1 * 0x1a0))) &&
         (in_ECX[param_1 + 0x2f] == 0)) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        FUN_1000c900(local_48,"recalldocument %i",param_1);
        (*DAT_101b2654)(local_48);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

