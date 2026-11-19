
undefined4 FUN_100e2f80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = _strncmp((char *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(param_1 + 4)),"weapon_",7);
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (iVar2 == 0) {
    iVar2 = FUN_100d9ea0(puVar1);
    if (iVar2 == 0) goto LAB_100e2ff5;
    uVar5 = **(undefined4 **)(iVar2 + 4);
    uVar4 = (*(undefined4 **)(iVar2 + 4))[0x2e];
    uVar3 = *(undefined4 *)(iVar2 + 0x110);
  }
  else {
    uVar5 = *puVar1;
    uVar4 = puVar1[0x2e];
    uVar3 = puVar1[0x76];
  }
  iVar2 = FUN_100dad40(uVar3,uVar4,uVar5);
  if (iVar2 != 0) {
    return 1;
  }
LAB_100e2ff5:
  FUN_10119810();
  return 0;
}

