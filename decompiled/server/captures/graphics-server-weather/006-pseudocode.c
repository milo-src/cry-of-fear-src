
void FUN_100a99a0(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
    return;
  }
  if (DAT_10223188[5] == 0.0) {
    iVar1 = (*DAT_10223068)(1);
    if ((iVar1 == 0) && (iVar1 = (*DAT_1022305c)(0), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x7c);
    }
    if (*(float *)(in_ECX + 0xf0) == 0.0) {
      *(undefined4 *)(iVar1 + 0x27dc) = *(undefined4 *)(in_ECX + 0xdc);
      *(undefined4 *)(iVar1 + 0x27e8) = *(undefined4 *)(in_ECX + 0xe8);
      *(undefined4 *)(iVar1 + 0x27ec) = *(undefined4 *)(in_ECX + 0xec);
      *(undefined4 *)(iVar1 + 0x27e0) = *(undefined4 *)(in_ECX + 0xe0);
      *(undefined4 *)(iVar1 + 0x27e4) = *(undefined4 *)(in_ECX + 0xe4);
      *(undefined4 *)(iVar1 + 0x280c) = 1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x27f0) = *(undefined4 *)(in_ECX + 0xdc);
    *(undefined4 *)(iVar1 + 0x27fc) = *(undefined4 *)(in_ECX + 0xe8);
    *(undefined4 *)(iVar1 + 0x2800) = *(undefined4 *)(in_ECX + 0xec);
    *(undefined4 *)(iVar1 + 0x27f4) = *(undefined4 *)(in_ECX + 0xe0);
    *(undefined4 *)(iVar1 + 0x27f8) = *(undefined4 *)(in_ECX + 0xe4);
    *(float *)(iVar1 + 0x2804) = *(float *)(in_ECX + 0xf0) + *DAT_10223188;
    *(float *)(iVar1 + 0x2808) = *DAT_10223188 + 1.0;
    return;
  }
  (*DAT_1022303c)(1,"Rain error: only static rain in multiplayer\n");
  return;
}

