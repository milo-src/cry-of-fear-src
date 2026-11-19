
void FUN_10059990(float param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  byte *pbVar7;
  byte *pbVar8;
  float10 fVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  byte *local_18;
  int local_14;
  float local_10;
  float local_c;
  byte local_5;
  
  iVar4 = FUN_10059fe0(param_1);
  iVar2 = *(int *)((int)param_1 + 0x54);
  if ((iVar2 != 0) && (iVar4 < 0x145)) {
    local_28 = iVar4;
    iVar5 = FUN_1005a0e0(param_1,param_2);
    local_20 = (float)(iVar2 + iVar5 * iVar4 * 3);
    if (param_3 == 0) {
      local_c = param_1;
      fVar6 = param_1;
      local_10 = param_1;
    }
    else {
      iVar5 = FUN_1005a0e0(param_1,0x3d);
      local_24 = (float)(iVar2 + iVar5 * iVar4 * 3);
      iVar5 = FUN_1005a0e0(param_1,0x3e);
      local_c = (float)(iVar2 + iVar5 * iVar4 * 3);
      iVar5 = FUN_1005a0e0(param_1,0x3f);
      fVar6 = local_24;
      local_10 = (float)(iVar2 + iVar5 * iVar4 * 3);
    }
    if (0 < iVar4) {
      local_10 = (float)((int)local_10 - (int)fVar6);
      pbVar8 = (byte *)((int)fVar6 + 2);
      pbVar7 = (byte *)((int)local_20 + 1);
      local_14 = (int)local_20 - (int)fVar6;
      local_18 = &DAT_104cc098;
      local_30 = (int)local_c - (int)fVar6;
      local_38 = (int)&DAT_104cc098 - (int)fVar6;
      local_2c = (int)local_c - (int)local_20;
      local_34 = (int)&DAT_104cc098 - (int)local_20;
      local_c = (float)((int)local_c + -0x104cc098);
      do {
        if (param_3 == 0) {
          *local_18 = pbVar7[-1];
          pbVar7[local_34] = *pbVar7;
          pbVar8[local_38] = pbVar8[local_14];
        }
        else {
          local_5 = *pbVar8;
          bVar1 = pbVar8[-1];
          uVar3 = *(ushort *)(pbVar8 + -2);
          local_1c = 0.0;
          local_50 = (float)local_18[(int)local_c] / 255.0;
          local_20 = 0.0;
          local_4c = (float)pbVar7[local_2c] / 255.0;
          local_24 = 0.0;
          local_48 = (float)pbVar8[local_30] / 255.0;
          FUN_10094880(&local_50,(float)pbVar8[(int)local_10] / 127.0 - 1.0,&local_44);
          local_44 = (float)(uVar3 & 0xff) / 255.0 + local_44;
          local_40 = (float)bVar1 / 255.0 + local_40;
          local_3c = (float)local_5 / 255.0 + local_3c;
          FUN_10094880(&local_44,0x40000000,&local_44);
          if (local_44 != 0.0) {
            fVar9 = (float10)FUN_100595f0(local_44);
            local_1c = (float)(fVar9 / (float10)local_44);
          }
          if (local_40 != 0.0) {
            fVar9 = (float10)FUN_100595f0(local_40);
            local_20 = (float)(fVar9 / (float10)local_40);
          }
          if (local_3c != 0.0) {
            fVar9 = (float10)FUN_100595f0(local_3c);
            local_24 = (float)(fVar9 / (float10)local_3c);
          }
          local_44 = ((float)pbVar7[-1] / 255.0) * local_1c;
          local_40 = ((float)*pbVar7 / 255.0) * local_20;
          local_3c = ((float)pbVar8[local_14] / 255.0) * local_24;
          FUN_10059f30(local_44,local_40,local_3c,local_18);
          iVar4 = local_28;
        }
        local_18 = local_18 + 3;
        pbVar8 = pbVar8 + 3;
        pbVar7 = pbVar7 + 3;
        iVar4 = iVar4 + -1;
        local_28 = iVar4;
      } while (iVar4 != 0);
      local_28 = 0;
    }
    FUN_1005a4f0(param_1);
  }
  return;
}

