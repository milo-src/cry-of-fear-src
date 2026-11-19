
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  
  if (param_1 != 0x32) {
    fVar3 = (float10)(*DAT_101b26e0)();
    if ((float)fVar3 < (float)in_ECX[0x31]) {
      return;
    }
    if (param_1 == 1) {
      if ((_DAT_1018a3f8 & 0x1f) == 0) {
        return;
      }
      if (DAT_101b2600 == 0) {
        return;
      }
      if (*(int *)(DAT_101b2600 + 0x1494) == 0) {
        return;
      }
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (**(code **)(**(int **)(DAT_101b2600 + 0x1494) + 0x24))(1);
      FUN_100aaad0();
      return;
    }
    if (param_1 == 4) {
      if ((_DAT_1018a3f8 & 0x80000000) == 0) {
        return;
      }
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2658)("map c_doc_city");
      return;
    }
    if (param_1 != 0x32) {
      return;
    }
  }
  if (DAT_10542a68 == 0) {
    iVar1 = (*DAT_101b2730)();
    if (iVar1 != 0) {
      uVar2 = (*DAT_101b2730)("unlockable");
      iVar1 = FUN_100d3cf0(uVar2);
      if (iVar1 != 0) {
        (*DAT_101b2658)("disconnect");
      }
    }
  }
  else if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1468) != 0)) {
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    (**(code **)(**(int **)(DAT_101b2600 + 0x1468) + 0x24))(1);
    FUN_100aaad0();
    (*DAT_101b2660)("ui/3d_click.wav",0x3f800000);
    return;
  }
  return;
}

