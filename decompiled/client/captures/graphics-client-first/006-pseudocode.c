
undefined4 FUN_100714b0(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  float10 fVar10;
  
  for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x14))();
    }
  }
  DAT_1055950c = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xaa0] = (float)fVar10;
  param_1[0xaa1] = 0;
  *(undefined1 *)(param_1 + 0xaa2) = 0;
  param_1[0xaaf] = 0;
  param_1[0xab0] = 0;
  param_1[0xab1] = 0;
  *(undefined1 *)(param_1 + 0xab2) = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xab3] = (float)fVar10;
  puVar8 = param_1 + 0xab5;
  for (iVar6 = 100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_1[0xaa5] = 0;
  param_1[0xaa7] = 0;
  param_1[0xaaa] = 0;
  param_1[0xaa9] = 0;
  param_1[0xaa8] = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xaab] = (float)fVar10;
  DAT_10542b94 = 0;
  DAT_10542b98 = 0;
  param_1[0xaa6] = 0;
  param_1[0xc6b] = 0;
  param_1[0xc6d] = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xc6e] = (float)fVar10;
  if (DAT_101b2600 != 0) {
    fVar10 = (float10)(*DAT_101b26e0)();
    *(float *)(DAT_101b2600 + 0x14a0) = (float)fVar10;
  }
  param_1[0xc70] = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xc71] = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xc72] = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xc73] = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  param_1[0xc74] = (float)fVar10;
  param_1[0x1329] = 0;
  *(undefined1 *)(param_1 + 0xc6f) = 0;
  if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1404) != 0)) {
    iVar6 = 1;
    do {
      puVar3 = (undefined1 *)FUN_1006cdd0(iVar6);
      iVar6 = iVar6 + 1;
      *puVar3 = 0;
    } while (iVar6 < 7);
    FUN_10043990();
  }
  pcVar7 = "maps/video_stress_test.bsp";
  pbVar4 = (byte *)(*DAT_101b2730)();
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10071680:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_10071685;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10071680;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10071685:
  if (uVar5 == 0) {
    (*DAT_101b269c)("r_weather",0);
    (*DAT_101b269c)("cg_water",0);
    (*DAT_101b269c)("gl_bump",0);
    (*DAT_101b269c)("gl_dynlight",0);
  }
  return 1;
}

