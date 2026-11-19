
void FUN_10098110(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  double dVar8;
  
  pcVar6 = "m_iDripsPerSecond";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10098145:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_1009814a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10098145;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1009814a:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xdc) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "m_flWindX";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10098194:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_10098199;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10098194;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10098199:
  if (uVar4 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xe0) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "m_flWindY";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100981e3:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100981e8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100981e3;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100981e8:
  if (uVar4 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xe4) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_flRandX");
  if (iVar5 != 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xe8) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_flRandY");
  if (iVar5 != 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xec) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"m_flTime");
  if (iVar5 != 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xf0) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}

