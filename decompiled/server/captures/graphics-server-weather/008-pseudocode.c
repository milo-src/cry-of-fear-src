
void FUN_100982b0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  double dVar8;
  
  pcVar6 = "m_flDistance";
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100982e5:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_100982ea;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100982e5;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100982ea:
  if (uVar3 == 0) {
    dVar8 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(in_ECX + 0xdc) = (float)dVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "m_iMode";
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10098332:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_10098337;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10098332;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_10098337:
  if (uVar3 == 0) {
    iVar4 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe0) = iVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}

