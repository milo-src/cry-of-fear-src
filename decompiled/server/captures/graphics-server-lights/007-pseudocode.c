
void FUN_10017ad0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = 0;
  if ((*(int *)(in_ECX + 0x14) == 0) && (*(int *)(in_ECX + 0x1c) == 0)) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x104) = 0;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  return;
}

