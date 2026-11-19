
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072740(float param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *in_ECX;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  float fVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float local_c0;
  double local_bc;
  undefined4 *local_b4;
  float local_b0;
  float local_ac;
  char local_a8 [128];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_b4 = in_ECX;
  FUN_1005d7a0();
  if ((*(char *)(in_ECX + 199) != '\0') && (in_ECX[0xc9] != 0)) {
    fVar15 = (float10)(*DAT_101b26e0)();
    local_ac = (float)fVar15;
    if ((float)in_ECX[200] <= local_ac && local_ac != (float)in_ECX[200]) {
      FUN_1000c900(local_28,"savehack cofsave%i\n",in_ECX[0xc9]);
      (*DAT_101b2654)();
      *(undefined1 *)(in_ECX + 199) = 0;
      in_ECX[200] = 0;
      in_ECX[0xc9] = 0;
    }
  }
  if (DAT_10542bb4 != 0) {
    fVar15 = (float10)(*DAT_101b26e0)();
    local_ac = (float)fVar15;
    if ((_DAT_105431e0 < local_ac) && (iVar6 = (*DAT_101b26d4)(), iVar9 = DAT_101b2758, iVar6 != 0))
    {
      uVar22 = 100;
      uVar21 = 0x3f4ccccd;
      uVar19 = 0x3f8000001014f0e0;
      uVar23 = 0;
      iVar6 = (*DAT_101b26d4)();
      (**(code **)(iVar9 + 4))(0xffffffff,iVar6 + 0xb48,uVar23,uVar19,uVar21,uVar22);
      fVar15 = (float10)(*DAT_101b26e0)();
      _DAT_105431e0 = (float)(fVar15 + (float10)15.0);
    }
  }
  if (DAT_10542bb2 == '\0') {
    if (0.0 < DAT_10543208) {
      DAT_10543208 = 0.0;
    }
  }
  else {
    fVar15 = (float10)(*DAT_101b26e0)();
    local_ac = (float)fVar15;
    if (DAT_10543208 < local_ac) {
      DAT_105594fc = DAT_105594fc + 5.0;
      if (40.0 < DAT_105594fc) {
        DAT_105594fc = 40.0;
      }
      fVar15 = (float10)(*DAT_101b26e0)();
      DAT_10543208 = (float)(fVar15 + (float10)0.025);
    }
  }
  if ((*(char *)(in_ECX + 0xc6f) != '\0') && ((float)in_ECX[0xd5] != 666.0)) {
    fVar15 = (float10)(*DAT_101b26e0)();
    local_ac = (float)fVar15;
    if (((float)in_ECX[0xd5] <= local_ac && local_ac != (float)in_ECX[0xd5]) &&
       (*(char *)(in_ECX + 0xd6) == '\0')) {
      *(undefined1 *)(in_ECX + 0xc6f) = 0;
    }
  }
  if (DAT_10543340 != '\0') {
    FUN_1000c900(local_a8,"Forward: %f - Right: %f - Up: %f Zoom: %i\n",(double)DAT_105594f4,
                 (double)DAT_105594f0,(double)DAT_105594f8,DAT_105431d8);
    FUN_1008a870(local_a8,0x80,0xffffffff);
  }
  if ((((in_ECX[0xc52] != 0) || (DAT_105436d8 != 0)) &&
      ((float)in_ECX[0xc54] <= (float)in_ECX[0xc3c] && (float)in_ECX[0xc3c] != (float)in_ECX[0xc54])
      ) && (in_ECX[0xc53] == 0)) {
    (*DAT_101b2690)(&local_c0);
    fVar15 = (float10)(*DAT_101b2714)();
    local_ac = (float)fVar15;
    fVar15 = (float10)(*DAT_101b2714)();
    local_c0 = local_c0 - local_ac;
    local_b0 = (float)fVar15;
    local_bc = (double)CONCAT44(local_bc._4_4_,local_bc._0_4_ - local_b0);
    if (DAT_1018d27c == '\0') {
      (*DAT_101b2694)(&local_c0);
    }
    in_ECX[0xc54] = (float)in_ECX[0xc3c] + 0.05;
  }
  if ((DAT_10542ba4 < 1) || (4 < DAT_10542ba4)) {
    fVar15 = (float10)(*DAT_101b2644)("difficulty");
    local_ac = (float)fVar15;
    DAT_10542ba4 = (int)fVar15;
  }
  cVar5 = FUN_10072710();
  if (cVar5 == '\0') {
    fVar15 = (float10)(*DAT_101b2644)("host_framerate");
    local_ac = (float)fVar15;
    if (local_ac == (float)DAT_1018fec4) {
      pcVar12 = "maps/video_stress_test.bsp";
      pbVar7 = (byte *)(*DAT_101b2730)();
      do {
        bVar1 = *pbVar7;
        bVar14 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_10072b01:
          uVar8 = -(uint)bVar14 | 1;
          goto LAB_10072b06;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar14 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_10072b01;
        pbVar7 = pbVar7 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10072b06:
      if (uVar8 != 0) {
        (*DAT_101b2730)("game_menu");
        iVar9 = FUN_100d3cf0();
        if (iVar9 == 0) {
          (*DAT_101b269c)();
        }
      }
    }
  }
  cVar5 = FUN_10072710();
  if (cVar5 == '\0') {
LAB_10072b8b:
    if (((DAT_101b2600 != 0) && (*(int **)(DAT_101b2600 + 0x145c) != (int *)0x0)) &&
       (cVar5 = (**(code **)(**(int **)(DAT_101b2600 + 0x145c) + 0x28))(), cVar5 != '\0')) {
      uVar23 = 0;
LAB_10072bac:
      (**(code **)(**(int **)(DAT_101b2600 + 0x145c) + 0x24))(uVar23);
    }
  }
  else {
    fVar15 = (float10)(*DAT_101b2644)("host_framerate");
    local_ac = (float)fVar15;
    if (local_ac != (float)DAT_1018fec4) goto LAB_10072b8b;
    if ((*(int **)(DAT_101b2600 + 0x145c) != (int *)0x0) &&
       (cVar5 = (**(code **)(**(int **)(DAT_101b2600 + 0x145c) + 0x28))(), cVar5 == '\0')) {
      uVar23 = 1;
      goto LAB_10072bac;
    }
  }
  pcVar12 = "maps/video_stress_test.bsp";
  pbVar7 = (byte *)(*DAT_101b2730)();
  do {
    bVar1 = *pbVar7;
    bVar14 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_10072be7:
      uVar8 = -(uint)bVar14 | 1;
      goto LAB_10072bec;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar14 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_10072be7;
    pbVar7 = pbVar7 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  uVar8 = 0;
LAB_10072bec:
  if (uVar8 == 0) {
    fVar15 = (float10)(*DAT_101b26e0)();
    local_ac = (float)fVar15;
    fVar18 = 1.0;
    if (local_ac - _DAT_10543224 <= 1.0) {
      fVar18 = local_ac - _DAT_10543224;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar18) {
      fVar4 = fVar18;
    }
    iVar9 = (int)(1.0 / fVar4);
    _DAT_10543224 = local_ac;
    uVar23 = FUN_10071d80(iVar9);
    in_ECX[0xab1] = uVar23;
    fVar15 = (float10)(*DAT_101b2644)("fps_max");
    local_ac = (float)fVar15;
    if (1 < iVar9) {
      fVar16 = (float10)(*DAT_101b26e0)();
      local_ac = (float)fVar16;
      if ((float)in_ECX[0xab3] <= local_ac) {
        if (*(char *)(in_ECX + 0xab2) != '\0') {
          in_ECX[0xab0] = iVar9;
        }
        else {
          in_ECX[0xaaf] = iVar9;
        }
        *(bool *)(in_ECX + 0xab2) = *(char *)(in_ECX + 0xab2) == '\0';
        (*DAT_101b269c)();
        fVar16 = (float10)(*DAT_101b26e0)();
        in_ECX[0xab3] = (float)(fVar16 + (float10)1.0);
        if (((in_ECX[0xab1] == 0) || (in_ECX[0xaaf] == 0)) || (in_ECX[0xab0] == 0)) {
          FUN_1000c900(local_a8,"FPS is %i with an average of %i and a max of %i",iVar9,iVar9,
                       (int)fVar15);
          if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x142c) != 0)) {
            pcVar12 = local_a8;
            do {
              cVar5 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar5 != '\0');
            if ((uint)((int)pcVar12 - (int)(local_a8 + 1)) < 0x1f) {
              fVar15 = (float10)(*DAT_101b26e0)();
              fVar15 = fVar15 + (float10)4.0;
            }
            else {
              fVar15 = (float10)(*DAT_101b26e0)();
              fVar15 = fVar15 + (float10)6.0;
            }
            local_ac = (float)fVar15;
            pcVar12 = local_a8;
            *(int *)(*(int *)(DAT_101b2600 + 0x142c) + 0xc0) = (int)fVar15;
            *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0x1d5) = 0;
            pcVar11 = (char *)(*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
            do {
              cVar5 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar11 = cVar5;
              pcVar11 = pcVar11 + 1;
            } while (cVar5 != '\0');
          }
        }
        else {
          FUN_1000c900(local_a8,"FPS is %i with an average of %i and a max of %i",iVar9,
                       in_ECX[0xab1],(int)fVar15);
          if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x142c) != 0)) {
            pcVar12 = local_a8;
            do {
              cVar5 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar5 != '\0');
            if ((uint)((int)pcVar12 - (int)(local_a8 + 1)) < 0x1f) {
              fVar15 = (float10)(*DAT_101b26e0)();
              fVar15 = fVar15 + (float10)4.0;
            }
            else {
              fVar15 = (float10)(*DAT_101b26e0)();
              fVar15 = fVar15 + (float10)6.0;
            }
            local_ac = (float)fVar15;
            pcVar12 = local_a8;
            *(int *)(*(int *)(DAT_101b2600 + 0x142c) + 0xc0) = (int)fVar15;
            *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0x1d5) = 0;
            pcVar11 = (char *)(*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
            do {
              cVar5 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar11 = cVar5;
              pcVar11 = pcVar11 + 1;
            } while (cVar5 != '\0');
          }
        }
      }
    }
  }
  fVar18 = (float)in_ECX[0xc3c];
  in_ECX[0xc3c] = param_1;
  local_bc = (double)param_1;
  in_ECX[0xc3d] = fVar18;
  *(double *)(in_ECX + 0xc3e) = local_bc - (double)fVar18;
  FUN_10072470();
  FUN_10071df0((float)*(double *)(in_ECX + 0xc3e));
  if (DAT_10542ba0 != 0.0) {
    DAT_10542b98 = (float)((double)DAT_10542b98 -
                          (*(double *)(in_ECX + 0xc3e) / (double)DAT_10542ba0) *
                          (double)(30000 - DAT_10542b9c));
    if (30000.0 < DAT_10542b98) {
      DAT_10542b98 = 30000.0;
    }
    if (DAT_10542b98 < (float)DAT_10542b9c) {
      DAT_10542b98 = (float)DAT_10542b9c;
    }
  }
  if (*(double *)(in_ECX + 0xc3e) <= 0.0 && *(double *)(in_ECX + 0xc3e) != 0.0) {
    *(undefined8 *)(in_ECX + 0xc3e) = 0;
  }
  if (in_ECX[0xc59] != 0) {
    iVar9 = (*DAT_10545850)();
    if (iVar9 == 0) {
      FUN_100723b0((int)(((float)DAT_1018f430 / 640.0) * 10.0 + 0.5),
                   (int)(((float)DAT_1018f434 / 480.0) * 350.0 + 0.5),
                   (int)(((float)DAT_1018f430 / 640.0) * 600.0 + 0.5),"Using Gas Mask",0xb4,0xb4,
                   0xb4);
    }
    else {
      FUN_10093700();
    }
  }
  if ((DAT_105431d8 == 3) && (iVar9 = (*DAT_10545850)(), iVar9 != 0)) {
    FUN_10093a00();
  }
  iVar9 = (*DAT_10545850)();
  if ((iVar9 == 0) && (DAT_1054586c != 1)) {
    FUN_100723b0((int)(((float)DAT_1018f430 / 640.0) * 10.0 + 0.5),
                 (int)(((float)DAT_1018f434 / 480.0) * 350.0 + 0.5),
                 (int)(((float)DAT_1018f430 / 640.0) * 600.0 + 0.5),"Using Head Shield",0xb4,0xb4,
                 0xb4);
  }
  FUN_1009ba60();
  if (DAT_101b2600 != 0) {
    if (in_ECX[0x1562] == 0) {
      if (param_2 != 0) {
        in_ECX[0x1562] = param_2;
        FUN_100a9040();
        FUN_100a9180();
        FUN_100aa790();
        fVar15 = (float10)(*DAT_101b2644)("hud_takesshots");
        local_ac = (float)fVar15;
        if (local_ac != 0.0) {
          DAT_10543228 = (float)(local_bc + 1.0);
        }
      }
    }
    else if (param_2 == 0) {
      in_ECX[0x1562] = 0;
      FUN_100a9040();
      FUN_100a90e0();
    }
  }
  if ((DAT_10543228 != 0.0) && (DAT_10543228 < param_1)) {
    (*DAT_101b2658)("snapshot\n");
    DAT_10543228 = 0.0;
  }
  in_ECX[0x1562] = param_2;
  if (*(float *)(in_ECX[0xc4d] + 0xc) != 0.0) {
    for (piVar2 = (int *)*in_ECX; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      piVar3 = (int *)*piVar2;
      if (param_2 == 0) {
        if (((*(byte *)(piVar3 + 4) & 1) != 0) && ((*(byte *)(in_ECX + 0xc47) & 4) == 0)) {
LAB_1007322a:
          (**(code **)(*piVar3 + 0xc))(param_1);
        }
      }
      else if ((*(byte *)(piVar3 + 4) & 2) != 0) goto LAB_1007322a;
    }
  }
  if (DAT_10542bb4 != 0) {
    uVar23 = FUN_10094580("sprcache");
    uVar22 = (*DAT_101b2718)(0,DAT_1018f430 + -0x100);
    uVar10 = (*DAT_101b2718)(0,DAT_1018f434 + -0x100);
    (*DAT_101b2618)(uVar23,0xfa,0xfa,0xfa);
    (*DAT_101b2624)(0,uVar22,uVar10,0);
    in_ECX = local_b4;
  }
  if (in_ECX[1] != 0) {
    uVar8 = in_ECX[0xc3b];
    if (uVar8 == 0) {
      uVar8 = FUN_10094580("sprites/%d_logo.spr");
      in_ECX[0xc3b] = uVar8;
    }
    uVar22 = 0xfa;
    uVar19 = 0xfa000000fa;
    (*DAT_101b2618)();
    lVar20 = (ulonglong)uVar8 << 0x20;
    uVar23 = in_ECX[0xc3b];
    iVar9 = (*DAT_101b2614)();
    iVar9 = DAT_1018f430 - iVar9;
    iVar6 = (*DAT_101b2610)(in_ECX[0xc3b],0,uVar23,lVar20,uVar19,uVar22);
    (*DAT_101b2624)(*(int *)(&DAT_1018fed0 + ((int)(param_1 * 20.0) % 0x38) * 4) + -1,iVar9,
                    iVar6 / 2,0);
  }
  if ((((DAT_10543210 != 0.0) && (DAT_105431d8 != 3)) && (in_ECX[0xc5a] == 0)) &&
     (*(float *)(DAT_1018d1f4 + 0xc) != 0.0)) {
    if (((DAT_101b2600 != 0) && (*(int **)(DAT_101b2600 + 0x1408) != (int *)0x0)) &&
       (cVar5 = (**(code **)(**(int **)(DAT_101b2600 + 0x1408) + 0x28))(), cVar5 != '\0'))
    goto LAB_10073596;
    iVar9 = in_ECX[0xc48];
    iVar6 = 6;
    if (DAT_105431d8 == 1) {
      iVar6 = 9;
    }
    local_b0 = (float)(DAT_1018f430 / 2);
    iVar13 = DAT_1018f434 / 2;
    local_b4 = (undefined4 *)(float)(int)local_b0;
    iVar6 = (int)((float)iVar6 * ((float)DAT_1018f430 / 640.0) + 0.5);
    dVar17 = (double)(iVar9 / 2) * 0.017453292519943295;
    FUN_101000a0();
    local_ac = (float)(int)((float)(1.0 / dVar17) * (((float)local_b4 * DAT_10543210) / 500.0));
    if ((DAT_105595fc != 0.0) || (DAT_10559600 != 0.0)) {
      fVar18 = (float)(DAT_1018f430 / iVar9);
      local_b0 = (float)(int)((float)local_b4 - fVar18 * DAT_10559600);
      iVar13 = (int)((float)iVar13 - fVar18 * DAT_105595fc);
    }
    iVar9 = (int)(255.0 - DAT_10543218 * 0.5);
    (*DAT_101b2634)(((int)local_b0 - (int)local_ac) - iVar6,iVar13,iVar6,1,0xff,iVar9,iVar9,200);
    (*DAT_101b2634)((int)local_b0 + (int)local_ac,iVar13,iVar6,1,0xff,iVar9,iVar9,200);
    (*DAT_101b2634)(local_b0,(iVar13 - (int)local_ac) - iVar6,1,iVar6,0xff,iVar9,iVar9,200);
    (*DAT_101b2634)(local_b0,(int)local_ac + iVar13,1,iVar6,0xff,iVar9,iVar9,200);
  }
  FUN_1005ff40();
LAB_10073596:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

