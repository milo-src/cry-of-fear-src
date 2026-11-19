
void FUN_100a8310(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  if (param_3 == 1) {
    puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
    *puVar1 = *puVar1 & 0xffffff7f;
    return;
  }
  if (param_3 == 0) {
    puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
    *puVar1 = *puVar1 | 0x80;
    return;
  }
  if (param_3 == 3) {
    iVar2 = *(int *)(in_ECX + 4);
    uVar3 = *(uint *)(iVar2 + 0x118);
    if ((char)uVar3 < '\0') {
      *(uint *)(iVar2 + 0x118) = uVar3 & 0xffffff7f;
      return;
    }
    *(uint *)(iVar2 + 0x118) = uVar3 | 0x80;
  }
  return;
}

