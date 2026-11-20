
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068d70(ulonglong *param_1,int param_2,uint param_3,float param_4,float param_5,
                 float param_6)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_14;
  float local_c;
  int *local_8;
  
  local_14 = DAT_104d26f4;
  local_c = DAT_104d26fc;
  if ((param_3 & 1) == 0) {
    local_14._0_4_ = (float)DAT_104d26f4;
    fVar12 = DAT_104d2700 + (float)local_14;
    local_14._4_4_ = (float)(DAT_104d26f4 >> 0x20);
    fVar13 = DAT_104d2704 + local_14._4_4_;
    local_c = DAT_104d2708 + DAT_104d26fc;
    local_14 = CONCAT44(fVar13,fVar12);
    fVar11 = 1.0;
    if (1.0 <= *(float *)(DAT_104cd53c + 0xc)) {
      fVar11 = *(float *)(DAT_104cd53c + 0xc);
    }
    fVar10 = *(float *)(&DAT_104dff18 + param_2 * 0xc) * param_4 +
             *(float *)(&DAT_104dff1c + param_2 * 0xc) * param_5 +
             *(float *)(&DAT_104dff20 + param_2 * 0xc) * param_6;
    fVar2 = 1.0;
    if (fVar10 <= 1.0) {
      fVar2 = fVar10;
    }
    fVar11 = (fVar2 + (fVar11 - 1.0)) / fVar11;
    local_8 = in_ECX;
    if (0.0 < fVar11) {
      FUN_10094770(&local_14,-fVar11,&DAT_104d2700,&local_14);
      fVar12 = (float)local_14;
      fVar13 = local_14._4_4_;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      local_14 = local_14 & 0xffffffff00000000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
      local_14 = local_14 & 0xffffffff;
    }
    if (local_c <= 0.0) {
      local_c = 0.0;
    }
    param_3 = 0;
    if (DAT_104ce4b0 < 1) goto LAB_10068f68;
    puVar9 = &DAT_104e0518;
    pfVar8 = (float *)(&DAT_104de71c + param_2 * 0xc);
    iVar7 = DAT_104ce4b0;
    do {
      fVar11 = -(pfVar8[-1] * param_4 + *pfVar8 * param_5 + pfVar8[1] * param_6);
      if (0.0 < fVar11) {
        FUN_10094770(&local_14,fVar11,puVar9,&local_14);
        iVar7 = DAT_104ce4b0;
      }
      param_3 = param_3 + 1;
      pfVar8 = pfVar8 + 0x180;
      puVar9 = puVar9 + 3;
      in_ECX = local_8;
    } while ((int)param_3 < iVar7);
  }
  else {
    FUN_10094770(&local_14,0x3f4ccccd,&DAT_104d2700,&local_14);
  }
  fVar12 = (float)local_14;
  fVar13 = local_14._4_4_;
LAB_10068f68:
  fVar11 = fVar13;
  if (fVar13 <= local_c) {
    fVar11 = local_c;
  }
  if (fVar11 < fVar12) {
    fVar11 = fVar12;
  }
  if (1.0 < fVar11) {
    fVar11 = 1.0 / fVar11;
    local_c = local_c * fVar11;
    local_14 = CONCAT44(fVar13 * fVar11,fVar12 * fVar11);
  }
  *param_1 = local_14;
  *(float *)(param_1 + 1) = local_c;
  iVar7 = in_ECX[0xc];
  if (((DAT_105458bc != 0) && (((byte)DAT_1018d1dc & 1) == 0)) && (DAT_10545860 != 0)) {
    in_ECX[0xc] = DAT_10545860;
    (**(code **)(*in_ECX + 0x1c))();
    (*DAT_10545830)();
    if (0 < *(int *)in_ECX[0xc]) {
      iVar6 = (*DAT_101b26dc)(*(int *)in_ECX[0xc]);
      iVar1 = in_ECX[0xc];
      uVar3 = *(undefined4 *)(iVar1 + 0xb64);
      uVar4 = *(undefined4 *)(iVar1 + 0xb68);
      uVar5 = *(undefined4 *)(iVar1 + 0xb6c);
      *(undefined4 *)(iVar6 + 0xb60) = *(undefined4 *)(iVar1 + 0xb60);
      *(undefined4 *)(iVar6 + 0xb64) = uVar3;
      *(undefined4 *)(iVar6 + 0xb68) = uVar4;
      *(undefined4 *)(iVar6 + 0xb6c) = uVar5;
      uVar3 = *(undefined4 *)(iVar1 + 0xb74);
      uVar4 = *(undefined4 *)(iVar1 + 0xb78);
      uVar5 = *(undefined4 *)(iVar1 + 0xb7c);
      *(undefined4 *)(iVar6 + 0xb70) = *(undefined4 *)(iVar1 + 0xb70);
      *(undefined4 *)(iVar6 + 0xb74) = uVar3;
      *(undefined4 *)(iVar6 + 0xb78) = uVar4;
      *(undefined4 *)(iVar6 + 0xb7c) = uVar5;
      uVar3 = *(undefined4 *)(iVar1 + 0xb84);
      uVar4 = *(undefined4 *)(iVar1 + 0xb88);
      uVar5 = *(undefined4 *)(iVar1 + 0xb8c);
      *(undefined4 *)(iVar6 + 0xb80) = *(undefined4 *)(iVar1 + 0xb80);
      *(undefined4 *)(iVar6 + 0xb84) = uVar3;
      *(undefined4 *)(iVar6 + 0xb88) = uVar4;
      *(undefined4 *)(iVar6 + 0xb8c) = uVar5;
    }
    if (DAT_105458bc != 0) {
      _DAT_10550318 = *(undefined8 *)(in_ECX[0xc] + 0xb60);
      _DAT_10550320 = *(undefined4 *)(in_ECX[0xc] + 0xb68);
      _DAT_10550330 = *(undefined8 *)(in_ECX[0xc] + 0xb6c);
      _DAT_10550338 = *(undefined4 *)(in_ECX[0xc] + 0xb74);
      DAT_105458bc = 0;
    }
  }
  in_ECX[0xc] = iVar7;
  return;
}

