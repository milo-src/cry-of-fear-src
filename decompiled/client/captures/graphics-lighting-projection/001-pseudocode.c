
void FUN_1005c4f0(void)

{
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 1.0 / (*(float *)(DAT_104cd4d0 + 0xc) + *(float *)(DAT_104cd4d0 + 0xc));
  local_c = 0.5 - DAT_104cc4a8 * local_10;
  (*DAT_101be72c)(0x2000,0x2500,0x2400);
  (*DAT_101be728)(0x2000,0x2502,&local_18);
  (*DAT_101be698)(0xc60);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

