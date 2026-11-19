
undefined4 FUN_1003e610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1418) != 0) {
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1418) + 0x1c8) = 0;
    uVar3 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1418) + 0xbc) = uVar3;
    uVar3 = FUN_10080a60();
    FUN_1000c900(*(int *)(DAT_101b2600 + 0x1418) + 0xc0,&DAT_10146b04,uVar3);
    uVar3 = FUN_10080a60();
    FUN_1000c900(*(int *)(DAT_101b2600 + 0x1418) + 0x140,&DAT_10146b04,uVar3);
    iVar4 = **(int **)(*(int *)(DAT_101b2600 + 0x1418) + 0x1d4);
    uVar3 = FUN_10008640(*(int *)(DAT_101b2600 + 0x1418) + 0x140);
    (**(code **)(iVar4 + 0x1fc))(uVar3);
    iVar4 = **(int **)(*(int *)(DAT_101b2600 + 0x1418) + 0x1dc);
    uVar3 = FUN_10008640(*(int *)(DAT_101b2600 + 0x1418) + 0x140);
    (**(code **)(iVar4 + 0x1fc))(uVar3);
    iVar4 = **(int **)(*(int *)(DAT_101b2600 + 0x1418) + 0x1d8);
    uVar3 = FUN_10008640(*(int *)(DAT_101b2600 + 0x1418) + 0xc0);
    (**(code **)(iVar4 + 0x1fc))(uVar3);
    iVar4 = FUN_10080a10();
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar1 = *(int *)(DAT_101b2600 + 0x1418);
    if (*(int *)(iVar1 + 0xbc) == 1) {
      *(int *)(iVar1 + 0x1c0) = iVar4;
    }
    else {
      *(undefined4 *)(iVar1 + 0x1c0) = 0;
    }
    uVar3 = FUN_10080a10();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1418) + 0x1c4) = uVar3;
    piVar2 = *(int **)(DAT_101b2600 + 0x1418);
    if (piVar2[0x2f] == 1) {
      (**(code **)(*piVar2 + 0x24))(1);
      return 1;
    }
    if (piVar2[0x2f] == 0) {
      (**(code **)(*piVar2 + 0x24))(0);
    }
  }
  return 1;
}

