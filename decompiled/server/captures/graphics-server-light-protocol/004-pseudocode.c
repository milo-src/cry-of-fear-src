
void FUN_100c44e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (DAT_10223190 == 0) {
      (*DAT_1022303c)(1,"AddToAssistList %s \"%s\" has no AssistList!\n",
                      **(int **)(param_1 + 4) + *(int *)(DAT_10223188 + 0x98),
                      (*(int **)(param_1 + 4))[0x74] + *(int *)(DAT_10223188 + 0x98));
      return;
    }
    iVar3 = *(int *)(DAT_10223190 + 0x3c);
    iVar2 = DAT_10223190;
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x3c);
    }
    if (iVar2 != param_1) {
      *(int *)(iVar2 + 0x3c) = param_1;
    }
  }
  return;
}

