
void FUN_10059d20(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = FUN_10059fe0(param_1);
  if ((*(int *)(param_1 + 0x54) != 0) && (iVar1 < 0x145)) {
    if (0 < iVar1) {
      puVar3 = &DAT_104cc098;
      pbVar2 = (byte *)(*(int *)(param_1 + 0x54) + 2);
      do {
        fVar4 = (float10)FUN_100595f0((float)pbVar2[-2] / 255.0);
        fVar5 = (float10)FUN_100595f0((float)pbVar2[-1] / 255.0);
        fVar6 = (float10)FUN_100595f0((float)*pbVar2 / 255.0);
        FUN_10059f30((float)(fVar4 * (float10)0.5),(float)(fVar5 * (float10)0.5),
                     (float)(fVar6 * (float10)0.5),puVar3);
        pbVar2 = pbVar2 + 3;
        puVar3 = puVar3 + 3;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_1005a4f0(param_1);
  }
  return;
}

