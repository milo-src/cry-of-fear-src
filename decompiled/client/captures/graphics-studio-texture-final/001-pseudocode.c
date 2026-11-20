
void FUN_10020230(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar1 = (*DAT_101b2744)("models/costumes/custom_hoodie.tga",5,0);
  if (iVar1 != 0) {
    DAT_1018ca20 = 0xc;
    DAT_104d26c5 = 0;
    DAT_104d26d1 = 0;
    DAT_104d26c6 = 0;
    DAT_104d26d2 = 0;
    FUN_1000c900(local_108,"setclothes 12 %s","custom_hoodie.tga");
    (*DAT_101b2654)(local_108);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar2 = &DAT_10140a78;
  puVar3 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf18) = 0x437f0000;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1c) = 0;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1d) = 0;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf20) = 0;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xbc) = 5;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

