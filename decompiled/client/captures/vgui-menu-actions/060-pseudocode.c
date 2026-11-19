
void FUN_1004b210(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *in_ECX;
  char *pcVar4;
  bool bVar5;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  switch(param_1) {
  case 0:
    goto switchD_1004b232_caseD_0;
  case 1:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    if (in_ECX[0x2f] == 0) {
      (*DAT_101b2654)("unfreeze 1024");
      (*DAT_101b2660)("save/save_no.wav",0x3f800000);
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      pcVar4 = "maps/video_stress_test.bsp";
      pbVar2 = (byte *)(*DAT_101b2730)();
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) goto LAB_1004b2e0;
        if (bVar1 == 0) goto LAB_1004b2dc;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_1004b2e0;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
    }
    else {
      FUN_1000c900(local_88,"yesnoactivate %i",in_ECX[0x2f]);
      (*DAT_101b2654)(local_88);
      (*DAT_101b2660)("save/save_yes.wav",0x3f800000);
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      pcVar4 = "maps/video_stress_test.bsp";
      pbVar2 = (byte *)(*DAT_101b2730)();
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) goto LAB_1004b2e0;
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_1004b2e0;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
LAB_1004b2dc:
      uVar3 = 0;
    }
    break;
  case 3:
    FUN_1000c900(local_88,"yesnono %i",in_ECX[0x2f]);
    (*DAT_101b2654)(local_88);
    (*DAT_101b2660)("save/save_no.wav",0x3f800000);
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    pcVar4 = "maps/video_stress_test.bsp";
    pbVar2 = (byte *)(*DAT_101b2730)();
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) goto LAB_1004b2e0;
      if (bVar1 == 0) goto LAB_1004b2dc;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1004b2e0;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
    break;
  default:
    (*DAT_101b26ac)("Unknown Yesno ActionSignal %i.\n",param_1);
    goto switchD_1004b232_caseD_0;
  }
LAB_1004b2e5:
  if (uVar3 == 0) {
    (*DAT_101b2654)("stresscontinue");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
switchD_1004b232_caseD_0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_1004b2e0:
  uVar3 = -(uint)bVar5 | 1;
  goto LAB_1004b2e5;
}

