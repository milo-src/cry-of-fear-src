
void FUN_1009bed0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
    iVar3 = *(int *)(in_ECX + 0x110);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x114);
  }
  if (iVar3 != 0) {
    FUN_100a9ce0();
    uVar1 = FUN_1000e9b0(*(int *)(DAT_10223188 + 0x98) + iVar3);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 300) = uVar1;
    iVar2 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar2 + 300) == -1) {
      iVar5 = *(int *)(DAT_10223188 + 0x98);
      iVar3 = iVar5 + iVar3;
      if (*(int *)(iVar2 + 0x1d0) == 0) {
        pcVar4 = "env_model: unknown sequence \"%s\"\n";
      }
      else {
        iVar5 = *(int *)(iVar2 + 0x1d0) + iVar5;
        pcVar4 = "env_model %s: unknown sequence \"%s\"\n";
      }
      (*DAT_1022303c)(4,pcVar4,iVar5,iVar3);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 300) = 0;
      iVar2 = *(int *)(in_ECX + 4);
    }
    *(undefined4 *)(iVar2 + 0x134) = 0;
    FUN_1000e9e0();
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      *(uint *)(in_ECX + 0xfc) = (uint)(*(int *)(in_ECX + 0x11c) == 1);
      return;
    }
    *(uint *)(in_ECX + 0xfc) = (uint)(*(int *)(in_ECX + 0x118) == 1);
  }
  return;
}

