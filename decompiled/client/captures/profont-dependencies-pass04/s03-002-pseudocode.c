
void FUN_10038df0(void)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  Color aCStack_38 [4];
  undefined4 uStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  uStack_14 = 0x80;
  uStack_18 = 0xff;
  *(undefined1 *)(in_ECX + 0xdd) = 0;
  DAT_101b2bd8 = 0;
  DAT_1018a0dc = 0;
  DAT_1018a1dc = 0;
  DAT_1018a2dc = 0;
  uStack_1c = 0x80;
  uStack_20 = 0x10038e3a;
  (**(code **)(*(int *)in_ECX[0xe9] + 0x120))();
  if ((char)in_ECX[0xfc] == '\0') {
    if ((int *)in_ECX[0xe9] == (int *)0x0) goto LAB_10038e9e;
    uStack_20 = 0x10038e54;
    cVar1 = (**(code **)(*(int *)in_ECX[0xe9] + 0x28))();
    if (cVar1 == '\0') goto LAB_10038e9e;
  }
  if ((int *)in_ECX[0xe9] != (int *)0x0) {
    *(undefined1 *)(in_ECX + 0xfc) = 0;
    uStack_20 = 0;
    uStack_24 = 0x10038e70;
    (**(code **)(*(int *)in_ECX[0xe9] + 0x24))();
    piVar3 = in_ECX + 0xbb;
    iVar2 = 0x20;
    do {
      uStack_20 = 0x10038e89;
      cVar1 = (**(code **)(*(int *)*piVar3 + 0x28))();
      if (cVar1 != '\0') {
        uStack_20 = 0;
        uStack_24 = 0x10038e96;
        (**(code **)(*(int *)*piVar3 + 0x24))();
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_10038e9e:
  in_ECX[0xdc] = 0;
  in_ECX[0xfe] = 0;
  in_ECX[0xff] = 0;
  in_ECX[0x100] = 0;
  in_ECX[0x39c] = 0xff;
  *(undefined1 *)(in_ECX + 0x39b) = 0;
  uStack_20 = 0;
  uStack_24 = 0x10038ee4;
  (**(code **)(*(int *)in_ECX[0x399] + 0x24))();
  uStack_24 = 0;
  ppuStack_28 = (undefined **)0x10038ef1;
  (**(code **)(*(int *)in_ECX[0xfa] + 0x24))();
  *(undefined1 *)(in_ECX + 0xe7) = 0;
  iVar2 = 0;
  do {
    (&DAT_1018d870)[iVar2] = 0;
    (&DAT_1018d974)[iVar2] = 0;
    ppuStack_28 = (undefined **)0x10038f18;
    fVar4 = (float10)(*DAT_101b26e0)();
    (&DAT_1018d76c)[iVar2] = (float)fVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x41);
  iVar2 = 0;
  piVar3 = in_ECX + 0x3e6;
  do {
    *(undefined1 *)((int)in_ECX + iVar2 + 0x39d) = 0;
    ppuStack_28 = (undefined **)0x0;
    ppuStack_2c = (undefined **)0x10038f42;
    (**(code **)(*(int *)piVar3[-8] + 0x24))();
    ppuStack_2c = (undefined **)0x0;
    piStack_30 = (int *)0x10038f4b;
    (**(code **)(*(int *)*piVar3 + 0x24))();
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  ppuStack_2c = (undefined **)in_ECX[0xf3];
  ppuStack_28 = &PTR_1013b108;
  piStack_30 = (int *)0x10038f68;
  (**(code **)((int)*ppuStack_2c + 0x200))();
  ppuStack_28 = (undefined **)0x0;
  ppuStack_2c = (undefined **)0x10038f78;
  (**(code **)(*(int *)in_ECX[0xf3] + 0x24))();
  ppuStack_2c = (undefined **)0x10038f7e;
  fVar4 = (float10)(*DAT_101b26e0)();
  in_ECX[0xf9] = (int)(float)fVar4;
  ppuStack_2c = (undefined **)0x10038f8a;
  fVar4 = (float10)(*DAT_101b26e0)();
  in_ECX[0xdb] = (int)(float)fVar4;
  ppuStack_2c = (undefined **)0x10038f96;
  fVar4 = (float10)(*DAT_101b26e0)();
  piStack_30 = (int *)in_ECX[0xf8];
  in_ECX[0xfd] = (int)(float)fVar4;
  ppuStack_2c = &PTR_1013b108;
  uStack_34 = 0x10038fb0;
  (**(code **)(*piStack_30 + 0x200))();
  in_ECX[0xfb] = 0xff;
  *(undefined1 *)(in_ECX + 0x3d7) = 0;
  in_ECX[0x3d9] = 0;
  ppuStack_2c = (undefined **)0x1;
  piStack_30 = (int *)0x10038fd7;
  (**(code **)(*in_ECX + 0x24))();
  piStack_30 = (int *)0x10038fdd;
  fVar4 = (float10)(*DAT_101b26e0)();
  piVar3 = (int *)in_ECX[0x406];
  in_ECX[0x3ff] = 0xff;
  in_ECX[0x3fe] = (int)(float)fVar4;
  vgui::Color::Color(aCStack_38,0xff,0xff,0xff,0xff);
  (**(code **)(*piVar3 + 0xc))();
  FUN_1003bbd0(0);
  (**(code **)(*(int *)in_ECX[0x3f5] + 0x24))(0);
  *(undefined1 *)(in_ECX + 0x3fd) = 0;
  in_ECX[0x2f] = 5;
  in_ECX[0x3d0] = 5;
  fVar4 = (float10)(*DAT_101b26e0)();
  in_ECX[0x3f9] = (int)(float)fVar4;
  *(undefined1 *)(in_ECX + 0x101) = 0;
  piVar3 = in_ECX + 0xed;
  *(undefined1 *)(in_ECX + 0x141) = 0;
  iVar2 = 5;
  *(undefined1 *)(in_ECX + 0x181) = 0;
  *(undefined1 *)(in_ECX + 0x1c1) = 0;
  in_ECX[0x3d6] = 0xff;
  *(undefined2 *)(in_ECX + 0x75) = 0;
  in_ECX[0x3d1] = -0x40800000;
  in_ECX[0x3d2] = -0x40800000;
  in_ECX[0x3d3] = -0x40800000;
  in_ECX[0x3d4] = -0x40800000;
  in_ECX[0x3d8] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  *(undefined1 *)(in_ECX + 0x35) = 0;
  in_ECX[0x3f0] = 0;
  in_ECX[0x3f1] = 0;
  in_ECX[0x3ef] = 0;
  do {
    (**(code **)(*(int *)*piVar3 + 0x200))((int *)*piVar3,&PTR_1013b108);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(*(int *)in_ECX[0xeb] + 0x200))((int *)in_ECX[0xeb],&PTR_1013b108);
  (**(code **)(*(int *)in_ECX[0xea] + 0x200))((int *)in_ECX[0xea],&PTR_1013b108);
  (**(code **)(*(int *)in_ECX[0xec] + 0x200))((int *)in_ECX[0xec],&PTR_1013b108);
  *(undefined1 *)(in_ECX + 0x212) = 0;
  in_ECX[0x213] = 0xff;
  *(undefined1 *)(in_ECX + 0x3a6) = 0;
  in_ECX[0x3c6] = 0;
  *(undefined2 *)(in_ECX + 0x3c7) = 0;
  in_ECX[0x3c8] = 0;
  in_ECX[0x3c9] = 0;
  in_ECX[0x3ca] = 0;
  in_ECX[0x3d0] = 0;
  in_ECX[0x3cb] = 0;
  *(undefined1 *)(in_ECX + 0x3cc) = 0;
  *(undefined1 *)((int)in_ECX + 0xf1e) = 0;
  in_ECX[0x3cd] = 0;
  in_ECX[0x3ce] = 0;
  in_ECX[0x3cf] = 0;
  (**(code **)(*(int *)in_ECX[0x401] + 0x24))(0);
  *(undefined1 *)(in_ECX + 0x402) = 0;
  fVar4 = (float10)(*DAT_101b26e0)();
  in_ECX[0x403] = (int)(float)fVar4;
  in_ECX[0x405] = -0xa0;
  return;
}

