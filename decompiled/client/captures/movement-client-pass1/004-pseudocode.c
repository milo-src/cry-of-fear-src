
void HUD_ProcessPlayerState(int param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x4c4a0  575  HUD_ProcessPlayerState */
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  piVar1 = (int *)(*DAT_101b26d4)();
  if (*(int *)(param_1 + 4) == *piVar1) {
    DAT_105593b0 = *(undefined4 *)(param_1 + 0xa8);
    DAT_105593b4 = *(undefined4 *)(param_1 + 0xa4);
    DAT_105593b8 = *(undefined4 *)(param_2 + 0x104);
    DAT_105593bc = *(undefined4 *)(param_2 + 0x108);
    DAT_105593c0 = *(undefined4 *)(param_2 + 0x10c);
    DAT_105431d8 = (int)*(float *)(param_2 + 0x130);
    DAT_105431e4 = *(undefined4 *)(param_2 + 0x134);
    DAT_101b2f14 = *(undefined4 *)(param_2 + 0x138);
    DAT_105431dc = (int)*(float *)(param_2 + 0x124);
    DAT_101b2f10 = (int)*(float *)(param_2 + 0x148);
    DAT_101b2f18 = *(undefined4 *)(param_2 + 0x150);
    DAT_101b2f1c = (int)*(float *)(param_2 + 0x13c);
    DAT_101b2f20 = *(undefined4 *)(param_2 + 0x140);
    return;
  }
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  return;
}

