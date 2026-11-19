
void FUN_1003eef0(int param_1)

{
  int *in_ECX;
  undefined1 local_288 [256];
  undefined1 local_188 [256];
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
LAB_1003efd3:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 == 1) {
    if (in_ECX[0x30] == 0) {
      (**(code **)(*(int *)in_ECX[0x35] + 0x200))(0,local_288,0x100);
      (**(code **)(*(int *)in_ECX[0x36] + 0x200))(0,local_188,0x100);
      FUN_1000c900(local_88,"computercheck %s %s",local_288,local_188);
      (*DAT_101b2654)(local_88);
      goto LAB_1003efd3;
    }
  }
  else if (param_1 != 2) {
    (*DAT_101b26ac)("Unknown Computer ActionSignal %i.\n",param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (**(code **)(*in_ECX + 0x24))(0);
  FUN_100aaad0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

