
void FUN_100dd990(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    *(undefined4 *)(in_ECX + 0x21fc + param_1 * 4) = 0;
    *(undefined4 *)(in_ECX + 0x2218 + param_1 * 4) = 0;
    *(undefined4 *)(in_ECX + 0x2234 + param_1 * 4) = 0;
    *(undefined4 *)(in_ECX + 0x2250 + param_1 * 4) = 0;
    FUN_100e4360(param_1,0,0);
    return;
  }
  puVar2 = (undefined4 *)(in_ECX + 0x221c);
  iVar1 = 1;
  if (*(char *)(in_ECX + 0x1e9c) != '\0') {
    do {
      puVar2[-7] = 0;
      *puVar2 = 0;
      puVar2[7] = 0;
      puVar2[0xe] = 0;
      FUN_100e4360(iVar1,0,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 4);
    return;
  }
  do {
    puVar2[-7] = 0;
    *puVar2 = 0;
    puVar2[7] = 0;
    puVar2[0xe] = 0;
    FUN_100e4360(iVar1,0,0);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 7);
  return;
}

