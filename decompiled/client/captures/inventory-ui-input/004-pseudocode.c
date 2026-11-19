
void FUN_10043990(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 10;
  puVar2 = (undefined4 *)(in_ECX + 0x120);
  do {
    (**(code **)(*(int *)*puVar2 + 0x1fc))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0;
  return;
}

