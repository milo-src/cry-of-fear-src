
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1005a750(void)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  float fVar5;
  undefined1 local_4008 [16384];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  puVar3 = local_4008;
  iVar4 = 0;
  do {
    iVar2 = 0;
    do {
      if (((iVar4 == 0) || (iVar2 == 0)) ||
         (fVar5 = ((float)iVar4 - 64.0) * 0.015625, fVar1 = ((float)iVar2 - 64.0) * 0.015625,
         fVar5 = (fVar1 * fVar1 + fVar5 * fVar5) * 255.0, 255.0 < fVar5)) {
        fVar5 = 255.0;
      }
      iVar2 = iVar2 + 1;
      *puVar3 = (char)(int)fVar5;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 0x80);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x80);
  (*DAT_101be64c)(0xde1,DAT_1018fe8c);
  (*DAT_101be734)(0xde1,0,0x803c,0x80,0x80,0,0x1906,0x1401,local_4008);
  (*DAT_101be73c)(0xde1,0x2801,0x46180000);
  (*DAT_101be73c)(0xde1,0x2800,0x46180400);
  (*DAT_101be738)(0xde1,0x2802,0x812f);
  (*DAT_101be738)(0xde1,0x2803,0x812f);
  FUN_1007d4d0("Created 2d attenuation texture\n");
  DAT_1018fe8c = DAT_1018fe8c + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

