
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005f570(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  int local_20;
  float local_10;
  float local_c;
  
  DAT_104cddc8 = param_1;
  iVar1 = *(int *)(param_1 + 0xb94);
  if (((*(float *)(param_1 + 0xb54) == 0.0) && (*(float *)(param_1 + 0xb58) == 0.0)) &&
     (*(float *)(param_1 + 0xb5c) == 0.0)) {
    fVar7 = *(float *)(param_1 + 0xb48);
    local_10 = *(float *)(iVar1 + 0x60) + fVar7;
    bVar3 = false;
  }
  else {
    fVar7 = *(float *)(param_1 + 0xb48);
    local_10 = fVar7 + *(float *)(iVar1 + 0x6c);
    bVar3 = true;
  }
  iVar4 = *(int *)(param_1 + 0x304);
  if (((iVar4 == 0x46) || (iVar4 == 0x89)) || (iVar4 == 0xb8)) {
    if (DAT_101be7f8 == 0) {
      return;
    }
    local_c = DAT_105595d4 - DAT_104ce488;
    local_10 = DAT_105595cc - DAT_104ce480;
    local_24 = DAT_105595d0 - DAT_104ce484;
    if (DAT_104ce06c == 0.0) {
      DAT_104cddd0 = DAT_104ce484 - *(float *)(param_1 + 0xb4c);
      DAT_104cddd4 = DAT_104ce488 - *(float *)(param_1 + 0xb50);
      fVar6 = DAT_104ce480;
    }
    else {
      fVar6 = (DAT_105595cc - _DAT_104ce48c) / DAT_104ce06c;
      local_10 = local_10 - fVar6;
      fVar8 = (DAT_105595d0 - _DAT_104ce490) / DAT_104ce06c;
      local_24 = local_24 - fVar8;
      fVar9 = (DAT_105595d4 - _DAT_104ce494) / DAT_104ce06c;
      DAT_104cddd0 = (fVar8 + DAT_104ce484) - *(float *)(param_1 + 0xb4c);
      local_c = local_c - fVar9;
      DAT_104cddd4 = (fVar9 + DAT_104ce488) - *(float *)(param_1 + 0xb50);
      fVar6 = fVar6 + DAT_104ce480;
    }
    DAT_104cddcc = fVar6 - fVar7;
    (*DAT_101be744)(local_10,local_24,local_c);
    (*DAT_101be680)(0x9999999a,0x3fe99999,0xcccccccd,0x3feccccc);
  }
  else {
    iVar4 = FUN_10084b30();
    if (iVar4 != 0) {
      return;
    }
    DAT_104cddcc = DAT_104cde64 - *(float *)(param_1 + 0xb48);
    DAT_104cddd0 = DAT_104cde68 - *(float *)(param_1 + 0xb4c);
    DAT_104cddd4 = DAT_104cde6c - *(float *)(param_1 + 0xb50);
  }
  fVar8 = DAT_104cddd4;
  fVar6 = DAT_104cddd0;
  fVar7 = DAT_104cddcc;
  if (bVar3) {
    (*DAT_101b2668)();
    DAT_104cddcc = fVar7 * local_30 + fVar6 * local_2c + fVar8 * local_28;
    DAT_104cddd4 = fVar7 * local_48 + fVar6 * local_44 + fVar8 * local_40;
    DAT_104cddd0 = -(fVar7 * local_3c + fVar6 * local_38 + fVar8 * local_34);
  }
  puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x70) * 0x5c + *(int *)(iVar1 + 0xb4));
  (*DAT_101be6f0)();
  *(uint *)(param_1 + 0xb54) = *(uint *)(param_1 + 0xb54) ^ 0x80000000;
  FUN_1005fbd0(param_1);
  *(uint *)(param_1 + 0xb54) = *(uint *)(param_1 + 0xb54) ^ 0x80000000;
  if (param_2 == 0) {
    FUN_100622c0();
  }
  iVar4 = *(int *)(param_1 + 0x2f8);
  if (iVar4 == 4) {
    (*DAT_101be698)(0xbc0);
    (*DAT_101be644)(0x204,0x3e800000);
  }
  else {
    if (iVar4 == 2) {
      (*DAT_101be67c)(0);
      (*DAT_101be698)(0xbe2);
      uVar11 = 0x303;
      uVar10 = 0x302;
    }
    else {
      if (iVar4 != 5) goto LAB_1005fa4e;
      (*DAT_101be67c)(0);
      (*DAT_101be698)(0xbe2);
      uVar11 = 1;
      uVar10 = 1;
    }
    (*DAT_101be650)();
    (*DAT_101be668)(0xff,0xff,0xff,*(undefined1 *)(param_1 + 0x2fc),uVar10,uVar11);
  }
LAB_1005fa4e:
  local_20 = 0;
  if (0 < *(int *)(iVar1 + 0x74)) {
    do {
      pfVar2 = (float *)puVar5[1];
      fVar7 = (pfVar2[1] * DAT_104cddd0 + *pfVar2 * DAT_104cddcc + pfVar2[2] * DAT_104cddd4) -
              pfVar2[3];
      if ((*(byte *)(puVar5 + 2) & 2) == 0) {
        if (0.01 < fVar7) goto LAB_1005faba;
      }
      else if (fVar7 < -0.01) {
LAB_1005faba:
        *puVar5 = DAT_104cdd44;
        FUN_10061cf0(puVar5);
      }
      local_20 = local_20 + 1;
      puVar5 = puVar5 + 0x17;
    } while (local_20 < *(int *)(iVar1 + 0x74));
  }
  if (*(int *)(param_1 + 0x2f8) == 4) {
    (*DAT_101be688)(0xbc0);
  }
  if (param_2 == 0) {
    if (((*(int *)(param_1 + 0x304) != 0x46) && (*(int *)(param_1 + 0x304) != 0x89)) &&
       ((*(float *)(DAT_104cdd78 + 0xc) != 0.0 && (*(float *)(DAT_104cdd7c + 0xc) != 0.0)))) {
      FUN_1005ada0(param_1);
    }
    FUN_100627e0();
    FUN_10062940();
  }
  (*DAT_101be6f4)();
  iVar1 = *(int *)(param_1 + 0x304);
  if (((iVar1 == 0x46) || (iVar1 == 0x89)) || (iVar1 == 0xb8)) {
    (*DAT_101be744)(-local_10,-local_24,-local_c);
    (*DAT_101be680)(0,0x3fe999999999999a);
  }
  return;
}

