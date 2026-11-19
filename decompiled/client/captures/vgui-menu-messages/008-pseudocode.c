
undefined4 FUN_100338a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_10080850(param_3,param_2);
  iVar2 = FUN_100808b0();
  if (*(int *)(DAT_101b2600 + 0x147c) != 0) {
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x147c) + 0xc4) = 0;
    if (iVar2 < 1) {
      cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x147c) + 0x28))();
      if (cVar1 == '\x01') {
        (**(code **)(**(int **)(DAT_101b2600 + 0x147c) + 0x24))(0);
        (*DAT_101b2660)("phone/telephone_receiver_down.wav",0x3f800000);
      }
      FUN_100aaad0();
      pcVar3 = (char *)FUN_10080a60();
      pcVar4 = (char *)(*(int *)(DAT_101b2600 + 0x147c) + 0xcc);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      return 1;
    }
    if (iVar2 == 1) {
      cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x147c) + 0x28))();
      if (cVar1 == '\0') {
        (**(code **)(**(int **)(DAT_101b2600 + 0x147c) + 0x24))(1);
        (*DAT_101b2660)("phone/telephone_receiver_up.wav",0x3f800000);
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x147c) + 200) = 0x437f0000;
      }
      FUN_100aaad0();
      pcVar3 = (char *)FUN_10080a60();
      pcVar4 = (char *)(*(int *)(DAT_101b2600 + 0x147c) + 0xcc);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      return 1;
    }
    if (iVar2 == 2) {
      iVar2 = (*DAT_101b26d4)();
      if (iVar2 != 0) {
        (**(code **)(DAT_101b2758 + 8))(0xffffffff,3,"phone/telephone_dial_tone.wav");
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar2 + 0x2c0,3,"phone/telephone_dial_tone.wav",0x3f800000,0,0,100);
      }
      return 1;
    }
    if (iVar2 == 3) {
      *(undefined1 *)(*(int *)(DAT_101b2600 + 0x147c) + 0xc4) = 1;
    }
  }
  return 1;
}

