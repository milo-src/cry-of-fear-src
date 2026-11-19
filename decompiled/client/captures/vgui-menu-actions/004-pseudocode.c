
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f060(int param_1)

{
  int *in_ECX;
  float10 fVar1;
  
  if (param_1 == 1) {
    if (DAT_1018a3fc == '\0') {
      return;
    }
    if (DAT_105458b0 != 7) {
      return;
    }
    fVar1 = (float10)(*DAT_101b26e0)();
    if ((float)fVar1 <= _DAT_1018a400) {
      return;
    }
    if (DAT_10550624 != 2) {
      if (DAT_10550624 == 4) {
        fVar1 = (float10)(*DAT_101b26e0)();
        DAT_10550624 = 6;
        goto LAB_1001f1ba;
      }
      if (DAT_10550624 != 6) {
        return;
      }
    }
    fVar1 = (float10)(*DAT_101b26e0)();
    DAT_10550624 = 7;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return;
      }
      if (DAT_101b2600 == 0) {
        return;
      }
      if (*(int *)(DAT_101b2600 + 0x1490) == 0) {
        return;
      }
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      DAT_1018a3fc = 0;
      DAT_105458b0 = 0;
      DAT_1054586c = 1;
      (**(code **)(**(int **)(DAT_101b2600 + 0x1490) + 0x24))(1);
      FUN_100aaad0();
      (*DAT_101b2660)("ui/3d_click.wav",0x3f800000);
      return;
    }
    if (DAT_1018a3fc == '\0') {
      return;
    }
    if (DAT_105458b0 != 7) {
      return;
    }
    fVar1 = (float10)(*DAT_101b26e0)();
    if ((float)fVar1 <= _DAT_1018a400) {
      return;
    }
    switch(DAT_10550624) {
    case 0:
    case 1:
    case 7:
      fVar1 = (float10)(*DAT_101b26e0)();
      DAT_10550624 = 2;
      break;
    case 2:
    case 6:
      fVar1 = (float10)(*DAT_101b26e0)();
      DAT_10550624 = 4;
      break;
    default:
      goto switchD_1001f142_caseD_3;
    }
  }
LAB_1001f1ba:
  _DAT_10550654 = (float)fVar1;
  fVar1 = (float10)(*DAT_101b26e0)();
  _DAT_1018a400 = (float)(fVar1 + (float10)1.0);
  (*DAT_101b2660)("common/page_turn.wav",0x3f800000);
switchD_1001f142_caseD_3:
  return;
}

