
void FUN_1000dba0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  pcVar6 = "movewith";
  pbVar7 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar7;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1000dbd5:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_1000dbda;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1000dbd5;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1000dbda:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "skill";
  pbVar2 = pbVar7;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1000dc22:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_1000dc27;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1000dc22;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1000dc27:
  if (uVar3 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x60) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "style";
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1000dc70:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_1000dc75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1000dc70;
    pbVar7 = pbVar7 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1000dc75:
  if (uVar3 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 100) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

