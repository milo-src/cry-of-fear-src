
void FUN_1005ab50(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  float fVar4;
  undefined1 local_308;
  undefined1 local_307 [767];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  puVar3 = local_307;
  iVar2 = 0;
  do {
    fVar4 = ((float)iVar2 * (float)iVar2 * 1.5258789e-05 - 1.0) * -255.0;
    if ((iVar2 == 0xff) || (iVar2 == 0)) {
      fVar4 = 0.0;
    }
    iVar2 = iVar2 + 1;
    uVar1 = (undefined1)(int)fVar4;
    puVar3[1] = uVar1;
    *puVar3 = uVar1;
    puVar3[-1] = uVar1;
    puVar3 = puVar3 + 3;
  } while (iVar2 < 0x100);
  (*DAT_101be64c)(0xde0,DAT_1018fe8c);
  (*DAT_101be730)(0xde0,0,3,0x100,0,0x1907,0x1401,&local_308);
  (*DAT_101be73c)(0xde0,0x2801,0x46180000);
  (*DAT_101be73c)(0xde0,0x2800,0x46180400);
  (*DAT_101be738)(0xde0,0x2802,0x812f);
  FUN_1007d4d0("Created spotlight attenuation texture\n");
  DAT_1018fe8c = DAT_1018fe8c + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

