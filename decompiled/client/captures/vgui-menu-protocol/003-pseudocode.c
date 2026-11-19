
void FUN_100a3560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *in_ECX;
  char *pcVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  undefined1 *puStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  char **ppcStack_94;
  int *piStack_90;
  undefined1 **ppuStack_8c;
  char **ppcStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *local_60;
  char *local_5c;
  float local_58;
  int local_54;
  uint local_50;
  char *local_4c;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  uStack_74 = param_2;
  uStack_78 = param_3;
  uStack_7c = 0x100a3581;
  FUN_10080850();
  uStack_74 = 0x100a3589;
  local_50 = FUN_100808b0();
  if (local_50 == 0) {
    uStack_74 = 0x100a3597;
    FUN_100a34f0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uStack_74 = 0;
  uStack_78 = 0x100a35b7;
  (**(code **)(*(int *)in_ECX[0x31] + 0x24))();
  uStack_78 = 0;
  uStack_7c = 0x100a35c4;
  (**(code **)(*(int *)in_ECX[0x32] + 0x24))();
  uStack_7c = 0;
  puStack_80 = (undefined1 *)0x100a35d4;
  (**(code **)(*(int *)in_ECX[0x32] + 0x1fc))();
  puStack_84 = (undefined1 *)in_ECX[0x33];
  if (puStack_84 != (undefined1 *)0x0) {
    puStack_80 = (undefined1 *)0x30;
    ppcStack_88 = (char **)0x100a35e6;
    FUN_100b42a4();
  }
  uVar1 = local_50 & 8;
  in_ECX[0x33] = 0;
  puStack_80 = (undefined1 *)0x1000;
  puStack_84 = &DAT_105583b0;
  ppcStack_88 = (char **)0x100a360b;
  ppcStack_88 = (char **)FUN_10080a60();
  ppuStack_8c = (undefined1 **)0x100a3611;
  FUN_100918b0();
  ppuStack_8c = &local_60;
  local_60 = &DAT_105583b0;
  piStack_90 = (int *)0x100a3621;
  uVar2 = FUN_100a2940();
  puStack_80 = &DAT_105583b0;
  puStack_84 = (undefined1 *)0x100a3639;
  (**(code **)(*(int *)in_ECX[0x30] + 0x1fc))();
  ppcStack_88 = (char **)0x100a3648;
  puStack_84 = (undefined1 *)uVar2;
  (**(code **)(*(int *)in_ECX[0x30] + 0x200))();
  iVar7 = (int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5);
  local_54 = iVar7;
  if ((local_50 & 2) != 0) {
    ppcStack_88 = (char **)0x100a3689;
    piStack_90 = (int *)FUN_10080a60();
    ppcStack_88 = (char **)0x1000;
    ppuStack_8c = (undefined1 **)&DAT_105583b0;
    ppcStack_94 = (char **)0x100a3699;
    FUN_100918b0();
    pcVar4 = &DAT_105583b0;
    do {
      pcVar6 = pcVar4;
      pcVar4 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (pcVar6[-1] == '\r') {
      pcVar6[-1] = '\0';
    }
    ppcStack_88 = &local_4c;
    local_4c = &DAT_105583b0;
    ppuStack_8c = (undefined1 **)0x100a36cc;
    ppcStack_88 = (char **)FUN_100a2940();
    ppuStack_8c = (undefined1 **)0x100a36de;
    (**(code **)(*(int *)in_ECX[0x31] + 0x208))();
    piStack_90 = (int *)in_ECX[0x31];
    ppuStack_8c = (undefined1 **)&DAT_105583b0;
    ppcStack_94 = (char **)0x100a36f2;
    (**(code **)(*piStack_90 + 0x200))();
    ppuStack_8c = (undefined1 **)0x1;
    piStack_90 = (int *)0x100a3702;
    (**(code **)(*(int *)in_ECX[0x31] + 0x24))();
    piStack_90 = &local_54;
    ppcStack_94 = &local_5c;
    pcStack_98 = (char *)0x100a3718;
    (**(code **)(*(int *)in_ECX[0x31] + 0x214))();
    pcStack_98 = (char *)local_54;
    pcStack_9c = local_5c;
    puStack_a0 = (undefined1 *)0x100a3729;
    (**(code **)(*(int *)in_ECX[0x31] + 8))();
    local_54 = iVar7 + (int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5) + local_54;
  }
  ppcStack_88 = (char **)0x10;
  iVar7 = *(int *)in_ECX[0x2f];
  iVar8 = (int)(((float)DAT_1018f430 / 640.0) * 5.0 + 0.5);
  ppuStack_8c = (undefined1 **)0x100a3790;
  iVar3 = (**(code **)(*in_ECX + 0x18))();
  ppuStack_8c = (undefined1 **)(iVar3 + iVar8 * -2);
  piStack_90 = (int *)local_54;
  pcStack_98 = (char *)0x100a37a3;
  ppcStack_94 = (char **)iVar8;
  (**(code **)(iVar7 + 0x10))();
  if ((local_50 & 4) != 0) {
    pcStack_98 = (char *)0x100a37ae;
    pcVar4 = (char *)FUN_10080a60();
    pcStack_9c = (char *)0x100a37b6;
    pcStack_98 = pcVar4;
    iVar7 = FUN_10008640();
    in_ECX[0x33] = iVar7;
    if (iVar7 == 0) {
      iVar3 = 0;
      iVar8 = 0;
      iVar7 = DAT_10190410;
      while ((iVar7 <= DAT_1018f430 && (iVar8 < 9))) {
        iVar7 = (&DAT_10190410)[iVar8 + 1];
        iVar3 = iVar8;
        iVar8 = iVar8 + 1;
      }
      do {
        if (iVar3 < 0) {
          pcStack_9c = "Could not load image [%s]\n";
          puStack_a0 = (undefined1 *)0x100a381e;
          pcStack_98 = pcVar4;
          (*DAT_101b26a8)();
          break;
        }
        pcStack_98 = (char *)(&DAT_10190410)[iVar3];
        puStack_a0 = local_48;
        pcStack_9c = pcVar4;
        FUN_1000c900();
        iVar7 = FUN_10008640(local_48);
        in_ECX[0x33] = iVar7;
        iVar3 = iVar3 + -1;
      } while (iVar7 == 0);
    }
  }
  if (in_ECX[0x33] == 0) {
    iVar7 = *(int *)in_ECX[0x30];
    pcStack_98 = (char *)0x100a39cf;
    iVar3 = (**(code **)(*(int *)in_ECX[0x2f] + 0x18))();
    pcStack_98 = (char *)0x10;
    iVar8 = (int)(((float)DAT_1018f430 / 640.0) * 5.0 + 0.5);
    pcStack_9c = (char *)(iVar3 + iVar8 * -2);
    puStack_a0 = (undefined1 *)(int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5);
    (**(code **)(iVar7 + 0x10))(iVar8);
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x30] + 0x208))();
    (**(code **)(*piVar5 + 0x68))(&local_58,&local_4c);
    (**(code **)(*(int *)in_ECX[0x30] + 8))(local_58,local_4c);
    local_5c = local_4c + (int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5) * 2;
  }
  else {
    piVar5 = (int *)in_ECX[0x33];
    vgui::Color::Color((Color *)&puStack_a0,0xff,0xff,0xff,0);
    (**(code **)(*piVar5 + 0xc))();
    (**(code **)(*(int *)in_ECX[0x32] + 0x1fc))(in_ECX[0x33]);
    (**(code **)(*(int *)in_ECX[0x32] + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(*(int *)in_ECX[0x32] + 300))(0xff,0xff,0xff,0);
    (**(code **)(*(int *)in_ECX[0x32] + 0x24))(1);
    (**(code **)(*(int *)in_ECX[0x33] + 8))(&local_50,&local_4c);
    iVar7 = *(int *)in_ECX[0x30];
    iVar3 = (**(code **)(*(int *)in_ECX[0x2f] + 0x18))();
    iVar8 = (int)(((float)DAT_1018f430 / 640.0) * 5.0 + 0.5);
    (**(code **)(iVar7 + 0x10))
              (local_50 + iVar8 * 2,(int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5),
               (iVar3 + iVar8 * -3) - local_50,0x10);
    (**(code **)(*(int *)in_ECX[0x32] + 8))(local_50,local_4c);
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x30] + 0x208))();
    (**(code **)(*piVar5 + 0x68))(&local_58,&local_5c);
    (**(code **)(*(int *)in_ECX[0x30] + 8))(local_58,local_5c);
    if ((int)local_5c < (int)local_4c) {
      local_5c = local_4c;
    }
    local_5c = local_5c + (int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5) * 2;
  }
  iVar7 = *(int *)in_ECX[0x2f];
  uVar2 = (**(code **)(iVar7 + 0x18))(local_5c);
  (**(code **)(iVar7 + 8))(uVar2);
  iVar7 = *in_ECX;
  iVar3 = (**(code **)(*(int *)in_ECX[0x2f] + 0x1c))();
  uVar2 = (**(code **)(*in_ECX + 0x18))
                    ((int)(((float)DAT_1018f434 / 480.0) * 5.0 + 0.5) + iVar3 + local_54);
  (**(code **)(iVar7 + 8))(uVar2);
  in_ECX[0x34] = 1;
  fVar10 = 0.0;
  if (*(float *)(DAT_105583a8 + 0xc) != 0.0) {
    fVar9 = (float10)(*DAT_101b26e0)();
    fVar10 = (float)(fVar9 + (float10)*(float *)(DAT_105583a8 + 0xc));
    local_58 = fVar10;
  }
  in_ECX[0x35] = (int)fVar10;
  if (uVar1 != 0) {
    (**(code **)(*in_ECX + 0x24))(1);
    (*DAT_101b2660)("common/gpanel_popup.wav",0x3f800000);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

