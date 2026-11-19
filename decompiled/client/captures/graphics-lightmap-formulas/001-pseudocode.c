
void FUN_10059660(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  float10 fVar9;
  float fVar10;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  byte *local_10;
  byte *local_c;
  byte local_5;
  
  local_c = (byte *)FUN_10059fe0(param_1);
  if ((*(int *)(param_1 + 0x54) != 0) && ((int)local_c < 0x145)) {
    iVar3 = FUN_1005a0e0(param_1,0x3d);
    iVar4 = FUN_1005a0e0(param_1,0x3e);
    iVar5 = FUN_1005a0e0(param_1,0x3f);
    iVar3 = *(int *)(param_1 + 0x54) + iVar3 * (int)local_c * 3;
    pbVar8 = (byte *)(*(int *)(param_1 + 0x54) + iVar4 * (int)local_c * 3);
    local_10 = pbVar8;
    if (0 < (int)local_c) {
      pbVar6 = (byte *)(iVar3 + 2);
      local_20 = (*(int *)(param_1 + 0x54) + iVar5 * (int)local_c * 3) - iVar3;
      local_10 = pbVar8 + -iVar3;
      local_1c = (int)&DAT_104cc098 - (int)pbVar8;
      pbVar7 = local_c;
      do {
        local_5 = *pbVar6;
        bVar1 = pbVar6[-1];
        uVar2 = *(ushort *)(pbVar6 + -2);
        local_38 = (float)*pbVar8 / 255.0;
        local_34 = (float)pbVar8[1] / 255.0;
        local_30 = (float)local_10[(int)pbVar6] / 255.0;
        local_c = pbVar6;
        FUN_10094880(&local_38,(float)pbVar6[local_20] / 127.0 - 1.0,&local_2c);
        fVar10 = (float)(uVar2 & 0xff) / 255.0 + local_2c;
        local_14 = (float)bVar1 / 255.0 + local_28;
        local_18 = (float)local_5 / 255.0 + local_24;
        fVar9 = (float10)FUN_100595f0(fVar10 + fVar10);
        local_2c = (float)(fVar9 * (float10)0.5);
        fVar9 = (float10)FUN_100595f0(local_14 + local_14);
        local_28 = (float)(fVar9 * (float10)0.5);
        fVar9 = (float10)FUN_100595f0(local_18 + local_18);
        local_24 = (float)(fVar9 * (float10)0.5);
        FUN_10059f30(local_2c,local_28,local_24,pbVar8 + local_1c);
        pbVar6 = local_c + 3;
        pbVar8 = pbVar8 + 3;
        pbVar7 = pbVar7 + -1;
        local_c = pbVar6;
      } while (pbVar7 != (byte *)0x0);
    }
    FUN_1005a4f0(param_1);
  }
  return;
}

