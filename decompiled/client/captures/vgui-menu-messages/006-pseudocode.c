
undefined4 FUN_10031c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1464) != 0) {
    FUN_10097680();
    FUN_10097680();
    FUN_10097680();
    FUN_10097680();
    FUN_10097680();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xe4) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xe8) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xec) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xf0) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xf4) = 0;
    uVar2 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0x178) = uVar2;
    if (*(int *)(*(int *)(DAT_101b2600 + 0x1464) + 0x178) == 0) {
      pcVar3 = (char *)FUN_10080a60();
      pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1464) + 0xf8);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    FUN_10031df0();
    (**(code **)(**(int **)(DAT_101b2600 + 0x1464) + 0x24))(1);
    FUN_100aaad0();
    (*DAT_101b2654)("freeze 1024");
    iVar4 = (*DAT_101b26d4)();
    if (iVar4 != 0) {
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar4 + 0x2c0,0,"save/save_yes.wav",0x3f800000,0x3f4ccccd,0,100);
    }
  }
  return 1;
}

