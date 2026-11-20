
void FUN_10053bb0(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    *(byte *)(in_ECX + 0x30 + iVar1) = (iVar1 != 2) - 1U & 2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  iVar1 = 0;
  do {
    *(byte *)(in_ECX + 0x3c + iVar1) = (iVar1 != 2) - 1U & 10;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  return;
}

