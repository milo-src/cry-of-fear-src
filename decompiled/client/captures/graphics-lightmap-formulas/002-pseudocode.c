
void FUN_10059880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar2 = FUN_10059fe0(param_1);
  iVar1 = *(int *)(param_1 + 0x54);
  if ((iVar1 != 0) && (iVar2 < 0x145)) {
    iVar3 = FUN_1005a0e0(param_1,0x3d);
    pbVar4 = (byte *)(iVar1 + iVar3 * iVar2 * 3 + 2);
    if (0 < iVar2) {
      puVar5 = &DAT_104cc098;
      do {
        fVar6 = (float10)FUN_100595f0((float)pbVar4[-2] / 255.0);
        fVar7 = (float10)FUN_100595f0((float)pbVar4[-1] / 255.0);
        fVar8 = (float10)FUN_100595f0((float)*pbVar4 / 255.0);
        FUN_10059f30((float)fVar6,(float)fVar7,(float)fVar8,puVar5);
        pbVar4 = pbVar4 + 3;
        puVar5 = puVar5 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_1005a4f0(param_1);
  }
  return;
}

