
void FUN_1005c5a0(void)

{
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_28 = 0;
  local_24 = 1.0 / (*(float *)(DAT_104cd4d0 + 0xc) + *(float *)(DAT_104cd4d0 + 0xc));
  local_20 = 0;
  local_18[3] = 0.5 - DAT_104cc4a0 * local_24;
  local_1c = 0.5 - DAT_104cc4a4 * local_24;
  local_18[0] = local_24;
  (*DAT_101be72c)(0x2000,0x2500,0x2400);
  (*DAT_101be728)(0x2000,0x2502,local_18);
  (*DAT_101be72c)(0x2001,0x2500,0x2400);
  (*DAT_101be728)(0x2001,0x2502,&local_28);
  (*DAT_101be698)(0xc60);
  (*DAT_101be698)(0xc61);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

