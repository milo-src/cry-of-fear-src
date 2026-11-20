
undefined4 FUN_10065890(int *param_1,float *param_2,float *param_3,float *param_4)

{
  char cVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*param_1 < 0) {
    return 0;
  }
  pfVar2 = (float *)param_1[9];
  local_c = (*param_2 * *pfVar2 + param_2[1] * pfVar2[1] + param_2[2] * pfVar2[2]) - pfVar2[3];
  local_8 = *param_3 * *pfVar2;
  fVar10 = (local_8 + param_3[1] * pfVar2[1] + param_3[2] * pfVar2[2]) - pfVar2[3];
  if (fVar10 < 0.0 == local_c < 0.0) {
    uVar4 = FUN_10065890(param_1[(local_c < 0.0) + 10],param_2,param_3,param_4);
    return uVar4;
  }
  fVar10 = local_c / (local_c - fVar10);
  local_4c = (*param_3 - *param_2) * fVar10 + *param_2;
  local_48 = (param_3[1] - param_2[1]) * fVar10 + param_2[1];
  local_44 = (param_3[2] - param_2[2]) * fVar10 + param_2[2];
  iVar5 = FUN_10065890(param_1[(local_c < 0.0) + 10],param_2,&local_4c,param_4);
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = (*DAT_101b26dc)(0);
  iVar8 = 0;
  iVar5 = (uint)*(ushort *)(param_1 + 0xc) * 0x5c + *(int *)(*(int *)(iVar5 + 0xb94) + 0xb4);
  local_8 = (float)(uint)*(ushort *)((int)param_1 + 0x32);
  if (local_8 != 0.0) {
    do {
      if ((*(byte *)(iVar5 + 8) & 0x24) == 0) {
        pfVar2 = *(float **)(iVar5 + 0x2c);
        iVar7 = (int)(pfVar2[1] * local_48 + *pfVar2 * local_4c + pfVar2[2] * local_44 + pfVar2[3]);
        if (*(short *)(iVar5 + 0x14) <= iVar7) {
          local_10 = (float)(int)*(short *)(iVar5 + 0x16);
          iVar6 = (int)(pfVar2[5] * local_48 + pfVar2[4] * local_4c + pfVar2[6] * local_44 +
                       pfVar2[7]);
          if ((int)local_10 <= iVar6) {
            iVar7 = iVar7 - *(short *)(iVar5 + 0x14);
            iVar6 = iVar6 - *(short *)(iVar5 + 0x16);
            if (((iVar7 <= *(short *)(iVar5 + 0x18)) && (iVar6 <= *(short *)(iVar5 + 0x1a))) &&
               (*(int *)(iVar5 + 0x54) != 0)) {
              local_8 = 0.0;
              local_1c = 0.0;
              local_18 = 0.0;
              local_14 = 0.0;
              local_34 = 0.0;
              local_30 = 0.0;
              iVar8 = *(int *)(iVar5 + 0x54) +
                      ((((int)*(short *)(iVar5 + 0x18) >> 4) + 1) * (iVar6 >> 4) + (iVar7 >> 4)) * 3
              ;
              local_2c = 0.0;
              local_40 = 0.0;
              local_3c = 0.0;
              local_38 = 0.0;
              param_1 = (int *)0x0;
              goto LAB_10065b40;
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x5c;
    } while (iVar8 < (int)local_8);
  }
  uVar4 = FUN_10065890(param_1[(0.0 <= local_c) + 10],&local_4c,param_3,param_4);
  return uVar4;
  while( true ) {
    if (cVar1 == '\0') {
      FUN_100690a0(&local_1c,iVar8);
    }
    else if (cVar1 == '?') {
      FUN_100690a0(&local_7c,iVar8);
      local_58 = *pfVar2;
      local_54 = pfVar2[1];
      local_50 = pfVar2[2];
      local_64 = pfVar2[4];
      local_60 = pfVar2[5];
      local_5c = pfVar2[6];
      FUN_100947c0(&local_58);
      FUN_100947c0(&local_64);
      puVar3 = *(undefined4 **)(iVar5 + 4);
      local_70 = *puVar3;
      local_6c = puVar3[1];
      local_68 = puVar3[2];
      if ((*(byte *)(iVar5 + 8) & 2) != 0) {
        FUN_10094730(&local_70);
      }
      local_28 = 0.0;
      local_c = local_74 * 2.0 - 1.0;
      local_24 = 0.0;
      local_20 = 0.0;
      FUN_10094770(&local_28,local_7c * 2.0 - 1.0,&local_58,&local_28);
      FUN_10094770(&local_28,local_78 * 2.0 - 1.0,&local_64,&local_28);
      FUN_10094770(&local_28,local_c,&local_70,&local_28);
    }
    else if (cVar1 == '>') {
      FUN_100690a0(&local_40,iVar8);
    }
    else if (cVar1 == '=') {
      FUN_100690a0(&local_34,iVar8);
      local_8 = 1.4013e-45;
    }
    param_1 = (int *)((int)param_1 + 1);
    iVar8 = iVar8 + (((int)*(short *)(iVar5 + 0x1a) >> 4) + 1) * 3 *
                    (((int)*(short *)(iVar5 + 0x18) >> 4) + 1);
    if (3 < (int)param_1) break;
LAB_10065b40:
    cVar1 = *(char *)(iVar5 + 0x3c + (int)param_1);
    if (cVar1 == -1) break;
  }
  if (local_8 == 0.0) {
    fVar9 = (float10)FUN_100595f0(local_1c);
    *param_4 = (float)(fVar9 * (float10)0.5);
    fVar9 = (float10)FUN_100595f0(local_18);
    param_4[1] = (float)(fVar9 * (float10)0.5);
    fVar9 = (float10)FUN_100595f0(local_14);
    param_4[2] = (float)(fVar9 * (float10)0.5);
    return 1;
  }
  param_1 = (int *)0x0;
  local_8 = 0.0;
  FUN_10094880(&local_40,local_c,&local_1c);
  local_1c = local_1c + local_34;
  local_c = local_2c;
  local_18 = local_18 + local_30;
  local_14 = local_14 + local_2c;
  FUN_10094880(&local_1c,0x40000000,&local_1c);
  if (local_1c != 0.0) {
    fVar9 = (float10)FUN_100595f0(local_1c);
    param_1 = (int *)(float)(fVar9 / (float10)local_1c);
  }
  if (local_18 != 0.0) {
    fVar9 = (float10)FUN_100595f0(local_18);
    local_10 = (float)(fVar9 / (float10)local_18);
    local_8 = local_10;
  }
  fVar10 = 0.0;
  if (local_14 != 0.0) {
    fVar9 = (float10)FUN_100595f0(local_14);
    fVar10 = (float)(fVar9 / (float10)local_14);
  }
  param_4[3] = local_40 * (float)param_1;
  param_4[4] = local_3c * local_8;
  param_4[5] = local_38 * fVar10;
  *param_4 = local_34 * (float)param_1;
  param_4[1] = local_30 * local_8;
  param_4[6] = local_28;
  param_4[7] = local_24;
  param_4[8] = local_20;
  param_4[2] = local_c * fVar10;
  return 1;
}

