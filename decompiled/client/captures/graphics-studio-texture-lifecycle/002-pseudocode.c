
void FUN_1005a4f0(int param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  puVar3 = &DAT_104cc098;
  iVar4 = ((int)*(short *)(param_1 + 0x1a) >> 4) + 1;
  iVar5 = ((int)*(short *)(param_1 + 0x18) >> 4) + 1;
  if (0 < iVar4) {
    puVar7 = &DAT_101cc09a +
             ((*(int *)(param_1 + 0x38) * 0x80 + *(int *)(param_1 + 0x20)) * 0x80 +
             *(int *)(param_1 + 0x1c)) * 3;
    do {
      puVar2 = puVar7;
      iVar6 = iVar5;
      if (0 < iVar5) {
        do {
          puVar2[-2] = *puVar3;
          puVar2[-1] = puVar3[1];
          puVar1 = puVar3 + 2;
          puVar3 = puVar3 + 3;
          *puVar2 = *puVar1;
          iVar6 = iVar6 + -1;
          puVar2 = puVar2 + 3;
        } while (iVar6 != 0);
      }
      puVar7 = puVar7 + 0x180;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

