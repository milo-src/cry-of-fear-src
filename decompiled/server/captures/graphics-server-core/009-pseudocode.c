
void FUN_10096a40(int param_1)

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
  
  pcVar6 = "startdist";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10096a75:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_10096a7a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10096a75;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096a7a:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xdc) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "enddist";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10096ac4:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_10096ac9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10096ac4;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096ac9:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe0) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "fadein";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10096b13:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_10096b18;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10096b13;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10096b18:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(float *)(in_ECX + 0xe4) = (float)iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"fadeout");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(float *)(in_ECX + 0xe8) = (float)iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"holdtime");
  if (iVar5 != 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xec) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}

