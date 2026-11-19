
void FUN_10087860(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)(*DAT_101b2644)("cg_water");
  if ((int)fVar3 == 0) {
    *(undefined1 *)(in_ECX + 9) = 0;
    return;
  }
  if (*(char *)(in_ECX + 9) != '\0') {
    iVar2 = 0;
    do {
      iVar1 = (*DAT_101b26dc)(iVar2);
      if ((iVar1 != 0) && (*(short *)(iVar1 + 0x2e8) == -3)) {
        *(undefined4 *)(iVar1 + 0x44) = 0x80;
        *(undefined4 *)(iVar1 + 0x54) = 0;
        *(undefined4 *)(iVar1 + 0x50) = 5;
        *(undefined4 *)(iVar1 + 0x198) = 0x80;
        *(undefined4 *)(iVar1 + 0x1a8) = 0;
        *(undefined4 *)(iVar1 + 0x1a4) = 5;
        *(undefined4 *)(iVar1 + 0x2ec) = 0x80;
        *(undefined4 *)(iVar1 + 0x2fc) = 0;
        *(undefined4 *)(iVar1 + 0x2f8) = 5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x400);
  }
  return;
}

