
uint FUN_100a5290(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x13d0);
  if (((uVar1 != 0) && (DAT_105593b0 == 0)) &&
     ((uVar1 = *(uint *)(uVar1 + 0xc4), uVar1 == 2 ||
      (((uVar1 == 3 || (uVar1 == 5)) || (uVar1 == 6)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

