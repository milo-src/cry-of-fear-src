
undefined4 FUN_10071880(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  cVar2 = FUN_10072710();
  if (cVar2 != '\0') {
    fVar9 = (float10)(*DAT_101b2644)("host_framerate");
    if ((float)fVar9 == 0.0) {
      pcVar7 = "maps/video_stress_test.bsp";
      pbVar3 = (byte *)(*DAT_101b2730)();
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100718e0:
          uVar4 = -(uint)bVar8 | 1;
          goto LAB_100718e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100718e0;
        pbVar3 = pbVar3 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100718e5:
      if (uVar4 != 0) {
        uVar5 = (*DAT_101b2730)("game_menu");
        iVar6 = FUN_100d3cf0(uVar5);
        if (iVar6 == 0) {
          (*DAT_101b269c)("host_framerate",(float)DAT_1018fec4);
        }
      }
    }
  }
  return 1;
}

