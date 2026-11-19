
void FUN_1009e860(void)

{
  uint *puVar1;
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 0;
  puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
  *puVar1 = *puVar1 | 0x80;
  return;
}

