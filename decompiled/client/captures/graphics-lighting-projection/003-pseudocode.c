
void FUN_1005a630(void)

{
  int iVar1;
  float fVar2;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar1 = 0;
  do {
    if ((iVar1 == 0) ||
       (fVar2 = ((float)iVar1 - 64.0) * 0.015625, fVar2 = fVar2 * fVar2 * 255.0, 255.0 < fVar2)) {
      fVar2 = 255.0;
    }
    local_88[iVar1] = (char)(int)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  (*DAT_101be64c)(0xde0,DAT_1018fe8c);
  (*DAT_101be730)(0xde0,0,0x803c,0x80,0,0x1906,0x1401,local_88);
  (*DAT_101be73c)(0xde0,0x2801,0x46180000);
  (*DAT_101be73c)(0xde0,0x2800,0x46180400);
  (*DAT_101be738)(0xde0,0x2802,0x812f);
  FUN_1007d4d0("Created 1d attenuation texture\n");
  DAT_1018fe8c = DAT_1018fe8c + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

