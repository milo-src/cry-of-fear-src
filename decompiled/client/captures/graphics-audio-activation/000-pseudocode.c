
undefined4 FUN_1007f940(void)

{
  undefined1 *in_ECX;
  bool bVar1;
  
  bVar1 = DAT_105440a8 != 0;
  *in_ECX = 1;
  if (bVar1) {
    *(undefined4 *)(in_ECX + 200) = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined2 *)(in_ECX + 0x34) = 0;
    in_ECX[0x36] = 0;
    *(undefined4 *)(in_ECX + 0xb8) = 0;
    *(undefined4 *)(in_ECX + 0xbc) = 0;
    *(undefined4 *)(in_ECX + 0xc0) = 0;
    in_ECX[0xc4] = 0;
    *(undefined4 *)(in_ECX + 0xcc) = 0;
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    *(undefined4 *)(in_ECX + 0xd4) = 0;
    *(undefined4 *)(in_ECX + 0xd8) = 0;
    *(undefined2 *)(in_ECX + 0xdc) = 0;
    return 1;
  }
  return 0;
}

