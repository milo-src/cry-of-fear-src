
void FUN_1001f9d0(int param_1)

{
  int *in_ECX;
  float10 fVar1;
  
  if (param_1 == 0x32) {
switchD_1001fa0e_caseD_32:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    (*DAT_101b2654)("closeclothes");
  }
  else {
    fVar1 = (float10)(*DAT_101b26e0)();
    if ((float)fVar1 < (float)in_ECX[0x2f]) {
      return;
    }
    switch(param_1) {
    case 0:
      break;
    case 1:
      if ((*(byte *)(in_ECX + 0x3d) & 1) != 0) {
        DAT_1018ca20 = 1;
        DAT_104d26c5 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 1");
        return;
      }
      break;
    case 2:
      if ((*(byte *)(in_ECX + 0x3d) & 2) != 0) {
        DAT_1018ca20 = 2;
        DAT_104d26c5 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 2");
        return;
      }
      break;
    case 3:
      if ((*(byte *)(in_ECX + 0x3d) & 4) != 0) {
        DAT_1018ca20 = 3;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 3");
        return;
      }
      break;
    case 4:
      if ((*(byte *)(in_ECX + 0x3d) & 8) != 0) {
        DAT_1018ca20 = 4;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 4");
        return;
      }
      break;
    case 5:
      if ((*(byte *)(in_ECX + 0x3d) & 0x10) != 0) {
        DAT_1018ca20 = 5;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 5");
        return;
      }
      break;
    case 6:
      if ((*(byte *)(in_ECX + 0x3d) & 0x20) != 0) {
        DAT_1018ca20 = 6;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 6");
        return;
      }
      break;
    case 7:
      if ((*(byte *)(in_ECX + 0x3d) & 0x40) != 0) {
        DAT_1018ca20 = 7;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 7");
        return;
      }
      break;
    case 8:
      if ((*(byte *)(in_ECX + 0x3d) & 0x80) != 0) {
        DAT_1018ca20 = 8;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 8");
        return;
      }
      break;
    case 9:
      if ((in_ECX[0x3d] & 0x100U) != 0) {
        DAT_1018ca20 = 9;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 9");
        return;
      }
      break;
    case 10:
      if ((in_ECX[0x3d] & 0x200U) != 0) {
        DAT_1018ca20 = 10;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d1 = 0;
        DAT_104d26d2 = 0;
        (*DAT_101b2654)("setclothes 10");
        return;
      }
      break;
    case 0xb:
      if ((in_ECX[0x3d] & 0x400U) != 0) {
        DAT_1018ca20 = 0xb;
        DAT_104d26c5 = 0;
        DAT_104d26c6 = 0;
        DAT_104d26d2 = 0;
        DAT_104d26d1 = 0;
        (*DAT_101b2654)("setclothes 11");
        return;
      }
      break;
    case 0xc:
      if ((in_ECX[0x3d] & 0x800U) != 0) {
        FUN_10020230();
        fVar1 = (float10)(*DAT_101b26e0)();
        in_ECX[0x2f] = (int)(float)(fVar1 + (float10)0.5);
        return;
      }
      break;
    default:
      (*DAT_101b26ac)("Unknown clothesmenu ActionSignal %i.\n",param_1);
      return;
    case 0x32:
      goto switchD_1001fa0e_caseD_32;
    case 0x42:
      DAT_1018ca20 = 0;
      DAT_104d26c5 = 0;
      DAT_104d26c6 = 0;
      DAT_104d26d1 = 0;
      DAT_104d26d2 = 0;
      (*DAT_101b2654)("setclothes 0");
      return;
    }
  }
  return;
}

