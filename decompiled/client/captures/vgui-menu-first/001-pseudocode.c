
void FUN_1002d8d0(int param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = (*DAT_101b26d4)();
  if (iVar1 != 0) {
    if ((param_1 - 0x32U < 0x1e) &&
       (iVar1 = (param_1 - 0x32U) * 0xc1, *(char *)(iVar1 + 0x181 + (int)in_ECX) != '\0')) {
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
      if (*(int *)(DAT_101b2600 + 0x1440) != 0) {
        in_ECX[0x31a9] = (int)in_ECX + iVar1 + 0xc1;
        (**(code **)(**(int **)(DAT_101b2600 + 0x1440) + 0x24))(1);
        FUN_100aaad0();
      }
    }
    switch(param_1) {
    case 1:
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
      if (*(int *)(DAT_101b2600 + 0x1440) != 0) {
        in_ECX[0x31a9] = 0;
        piVar2 = *(int **)(DAT_101b2600 + 0x1440);
LAB_1002dda8:
        (**(code **)(*piVar2 + 0x24))(1);
        FUN_100aaad0();
        return;
      }
      break;
    case 2:
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
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
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0x178) = 1;
        FUN_10031df0();
        (**(code **)(**(int **)(DAT_101b2600 + 0x1464) + 0x24))(1);
        FUN_100aaad0();
        (*DAT_101b2654)("freeze 1024");
LAB_1002dd60:
        (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
        return;
      }
      break;
    case 3:
      (**(code **)(*(int *)in_ECX[0x31ad] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31ae] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31af] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b0] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b1] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b2] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b3] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b4] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b5] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b6] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b9] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31bd] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31bf] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31c1] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31c3] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31c5] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31c7] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31c9] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31cb] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31cd] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31cf] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31b7] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31ac] + 0x24))(1);
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
      piVar2 = in_ECX + 0x30a1;
      iVar1 = 0x100;
      do {
        (**(code **)(*(int *)*piVar2 + 0x24))(1);
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_1002e6c0();
      (**(code **)(*(int *)in_ECX[0x31ac] + 0x220))();
      return;
    case 4:
      (*DAT_101b2654)("optionshack 0");
      return;
    case 5:
      (*DAT_101b2654)("optionshack 2");
      return;
    case 6:
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
      piVar2 = *(int **)(DAT_101b2600 + 0x1478);
      if (piVar2 != (int *)0x0) goto LAB_1002dda8;
      break;
    case 7:
      if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1490) != 0)) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (**(code **)(**(int **)(DAT_101b2600 + 0x1490) + 0x24))(1);
        FUN_100aaad0();
        goto LAB_1002dd60;
      }
      break;
    case 8:
      if (*(int *)(DAT_101b2600 + 0x149c) != 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        piVar2 = *(int **)(DAT_101b2600 + 0x149c);
        goto LAB_1002dda8;
      }
      break;
    case 9:
      (*DAT_101b2654)("optionshack 1");
      return;
    case 10:
      (**(code **)(*in_ECX + 0x24))(0);
      (*DAT_101b2658)(&DAT_101437a8);
      FUN_100aaad0();
      return;
    case 0xb:
      (**(code **)(*(int *)in_ECX[0x31ad] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31ae] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31af] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b0] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b1] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b2] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b3] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b4] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b5] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b6] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b9] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31bd] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31bf] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31c1] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31c3] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31c5] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31c7] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31c9] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31cb] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31cd] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31cf] + 0x24))(1);
      (**(code **)(*(int *)in_ECX[0x31b7] + 0x24))(0);
      (**(code **)(*(int *)in_ECX[0x31ac] + 0x24))(0);
      (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
      iVar1 = 0x100;
      piVar2 = in_ECX + 0x30a1;
      do {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

