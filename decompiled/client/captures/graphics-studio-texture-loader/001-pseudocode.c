
void FUN_10069f50(undefined1 *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  param_3 = param_3 >> 1;
  if (0 < param_3) {
    puVar4 = param_1;
    do {
      if (0 < param_2 / 2) {
        pbVar1 = param_1 + param_2 * 3 + 4;
        iVar2 = param_2 / 2;
        pbVar3 = param_1 + 4;
        do {
          *puVar4 = (char)((uint)pbVar1[-4] + (uint)pbVar1[-1] + (uint)pbVar3[-4] + (uint)pbVar3[-1]
                          >> 2);
          puVar4[1] = (char)((uint)pbVar1[-3] + (uint)pbVar3[-3] + (uint)*pbVar1 + (uint)*pbVar3 >>
                            2);
          puVar4[2] = (char)((uint)pbVar1[-2] + (uint)pbVar1[1] + (uint)pbVar3[-2] + (uint)pbVar3[1]
                            >> 2);
          puVar4 = puVar4 + 3;
          iVar2 = iVar2 + -1;
          pbVar1 = pbVar1 + 6;
          pbVar3 = pbVar3 + 6;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + param_2 * 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

