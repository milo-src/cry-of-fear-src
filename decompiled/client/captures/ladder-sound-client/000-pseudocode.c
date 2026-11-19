
void HUD_StudioEvent(int param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  char *pcVar15;
  undefined4 uVar16;
  float local_23c;
  float local_238;
  float local_234;
  byte local_22d;
  float local_22c;
  float local_228;
  float local_224;
  float *local_220;
  char local_208 [255];
  char cStack_109;
  char local_108 [127];
  char cStack_89;
  char local_88 [64];
  undefined1 local_48 [64];
  uint local_8;
  
                    /* 0x4c6c0  579  HUD_StudioEvent */
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_22d = 0;
  iVar3 = FUN_100d3cf0(param_2[0x2e5],"models/cs/");
  local_220 = (float *)(uint)local_22d;
  if (iVar3 != 0) {
    local_220 = (float *)0x1;
  }
  iVar4 = (*DAT_101b26d4)();
  iVar3 = DAT_101b2754;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0x1389:
    FUN_1004bc30(param_2,0,0,0x3f800000);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x138a:
    uVar16 = 100;
    uVar5 = 0xffffff9c;
    iVar4 = _atoi((char *)(param_1 + 0xc));
    (**(code **)(iVar3 + 0x84))(param_2 + 0x2d8,iVar4,uVar5,uVar16);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x138c:
    if ((DAT_1018d578 != 0) &&
       ((((iVar3 = *(int *)(DAT_1018d578 + 0x9c), iVar3 == 0x14 || (iVar3 == 0x17)) ||
         ((((iVar3 == 0x1a || (((iVar3 == 3 || (iVar3 == 9)) || (iVar3 == 0x1b)))) ||
           (((iVar3 == 7 || (iVar3 == 0x15)) || (iVar3 == 0xb)))) ||
          ((iVar3 == 4 || (iVar3 == 0xe)))))) || (iVar3 == 0x13)))) {
      pcVar15 = (char *)(param_1 + 0xc);
      iVar3 = FUN_100d3cf0(pcVar15,"weapons/");
      if (iVar3 != 0) {
        bVar2 = false;
        uVar8 = 0;
        uVar7 = 0;
        pcVar6 = pcVar15;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (pcVar6 != (char *)(param_1 + 0xd)) {
          do {
            cVar1 = pcVar15[uVar7];
            if (bVar2) {
              local_208[uVar8] = cVar1;
              uVar8 = uVar8 + 1;
            }
            else if ((cVar1 == '/') || (cVar1 == '\\')) {
              bVar2 = true;
            }
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar15;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
          } while (uVar7 < (uint)((int)pcVar6 - (param_1 + 0xd)));
          if (bVar2) {
            if (uVar8 < 0x100) {
              local_208[uVar8] = '\0';
              builtin_strncpy(local_108 + 8,"new/",5);
              builtin_strncpy(local_108,"weapons_",8);
              pcVar15 = local_208;
              do {
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              uVar7 = (int)pcVar15 - (int)local_208;
              pcVar15 = &cStack_109;
              do {
                pcVar6 = pcVar15 + 1;
                pcVar15 = pcVar15 + 1;
              } while (*pcVar6 != '\0');
              pcVar6 = local_208;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar15 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar15 = pcVar15 + 1;
              }
              FUN_1007fb10(local_108,0,0,local_220,local_220,local_220);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
                    /* WARNING: Subroutine does not return */
            ___report_rangecheckfailure();
          }
        }
        break;
      }
    }
    pcVar15 = (char *)(param_1 + 0xc);
    if ((char)local_220 != '\0') {
      builtin_strncpy(local_88,"cs/",4);
      pcVar6 = pcVar15;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar11 = &cStack_89;
      do {
        pcVar9 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar9 != '\0');
      pcVar9 = pcVar15;
      for (uVar7 = (uint)((int)pcVar6 - (int)pcVar15) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = (int)pcVar6 - (int)pcVar15 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      (*DAT_101b2704)(local_88,0x3f800000,param_2 + 0x2d8);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_101b2704)(pcVar15,0x3f800000,param_2 + 0x2d8);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x138d:
    pfVar10 = (float *)(param_2 + 0x2e1);
    iVar3 = (*DAT_101b26ec)(pfVar10,0);
    if (((iVar3 != -3) || (iVar3 = (*DAT_101b26f0)(pfVar10), iVar3 < 1)) ||
       ((iVar3 = (*DAT_101b26dc)(iVar3), iVar3 == 0 || (*(int *)(iVar3 + 0xb94) == 0)))) break;
    fVar14 = *(float *)(iVar3 + 0x340) - (float)param_2[0x2e3];
    goto LAB_1004cd50;
  case 0x138e:
    uVar5 = (**(code **)(DAT_101b2758 + 0xc))("models/shell.mdl");
    local_23c = ((float)param_2[0x2de] - (float)param_2[0x2db]) * 10.0;
    local_238 = ((float)param_2[0x2df] - (float)param_2[0x2dc]) * 10.0;
    local_234 = ((float)param_2[0x2e0] - (float)param_2[0x2dd]) * 10.0;
    FUN_1004e000(param_2 + 0x2db,&local_23c,0,uVar5,1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x1393:
    FUN_1004bc30(param_2,1,0,0x3f800000);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x1397:
    pfVar10 = (float *)(param_2 + 0x2de);
    iVar3 = (*DAT_101b26ec)(pfVar10,0);
    if ((((iVar3 != -3) || (iVar3 = (*DAT_101b26f0)(pfVar10), iVar3 < 1)) ||
        (iVar3 = (*DAT_101b26dc)(iVar3), iVar3 == 0)) || (*(int *)(iVar3 + 0xb94) == 0)) break;
    fVar14 = *(float *)(iVar3 + 0x340) - (float)param_2[0x2e0];
LAB_1004cd50:
    if (fVar14 < 16.0) {
      local_22c = *pfVar10;
      local_228 = pfVar10[1];
      local_224 = pfVar10[2] + 25.0;
      local_23c = 0.0;
      local_238 = 0.0;
      local_234 = 0.0;
      uVar5 = (**(code **)(DAT_101b2758 + 0xc))("sprites/wsplash_x.spr");
      iVar3 = (**(code **)(DAT_101b2754 + 200))
                        (&local_22c,&local_23c,0x3f000000,uVar5,5,0,0x3f800000,0x40a00000,0x100);
      *(undefined4 *)(iVar3 + 0x354) = 0x41a00000;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x139d:
    FUN_1004bc30(param_2,2,0,0x3f800000);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13a7:
    FUN_1004bc30(param_2,3,0,0x3f800000);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13ba:
    iVar3 = (*DAT_101b2718)(0,1);
    if (iVar3 == 1) {
      pcVar15 = "weapons/flare/flare_strike1.wav";
    }
    else {
      pcVar15 = "weapons/flare/flare_strike2.wav";
    }
    (**(code **)(DAT_101b2758 + 4))(*param_2,param_2 + 0x2d8,1,pcVar15,0x3f800000,0x3f4ccccd,0,100);
    iVar3 = FUN_100b44cb(200);
    if (iVar3 != 0) {
      uVar5 = FUN_10081080(*param_2,"aurora/flare_sparks_short.aur",1,0,param_2[0x2e5]);
      FUN_10080af0(uVar5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_10080af0(0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13bb:
    FUN_1000c900(local_48,"throwflare %i %i %i",(int)(float)param_2[0x2db],
                 (int)(float)param_2[0x2dc],(int)(float)param_2[0x2dd]);
    (*DAT_101b2654)(local_48);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13c4:
    if (iVar4 != 0) {
      local_220 = (float *)(param_2 + 0x2d8);
      (*DAT_101b2704)("player/player_swim.wav",0x3f800000,local_220);
      (*DAT_101b2654)("swimboost");
      if (2 < DAT_1054506c) {
        uVar5 = (**(code **)(DAT_101b2758 + 0xc))("sprites/bubble.spr");
        iVar3 = 1;
        do {
          fVar12 = (float10)(*DAT_101b2714)(0xc0a00000,0x40a00000);
          fVar13 = (float10)(*DAT_101b2714)(0xc0a00000,0x40a00000);
          local_22c = (float)param_2[0x2db];
          local_228 = (float)param_2[0x2dc];
          local_224 = (float)param_2[0x2dd];
          (*DAT_101b2714)(0xc0000000,0x40000000);
          local_22c = local_22c + (float)fVar12;
          local_23c = 0.0;
          local_238 = 0.0;
          local_234 = 15.0;
          local_228 = local_228 + (float)fVar13;
          local_224 = local_224 + 5.0;
          (**(code **)(DAT_101b2754 + 200))
                    (&local_22c,&local_23c,0x3e19999a,uVar5,4,0,0x43000000,0x3f800000,0x200000);
          pfVar10 = local_220;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
        iVar3 = 1;
        do {
          fVar12 = (float10)(*DAT_101b2714)(0xc0a00000,0x40a00000);
          local_220 = (float *)(float)fVar12;
          fVar12 = (float10)(*DAT_101b2714)(0xc0a00000,0x40a00000);
          local_22c = *pfVar10;
          local_228 = pfVar10[1];
          local_224 = pfVar10[2];
          (*DAT_101b2714)(0xc0000000,0x40000000);
          local_22c = local_22c + (float)local_220;
          local_23c = 0.0;
          local_238 = 0.0;
          local_234 = 15.0;
          local_228 = local_228 + (float)fVar12;
          local_224 = local_224 + 5.0;
          (**(code **)(DAT_101b2754 + 200))
                    (&local_22c,&local_23c,0x3e19999a,uVar5,4,0,0x437f0000,0x3f800000,0x200000);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x13d8:
    iVar3 = _atoi((char *)(param_1 + 0xc));
    FUN_1000c900(local_48,"zoominmdl %i",iVar3);
    (*DAT_101b2654)(local_48);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13e2:
    uVar5 = (*DAT_101b2718)(0,3);
    switch(uVar5) {
    case 0:
      (*DAT_101b2704)("common/bodydrop1.wav",0x3f800000,param_2 + 0x2d8);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    case 1:
      (*DAT_101b2704)("common/bodydrop2.wav",0x3f800000,param_2 + 0x2d8);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    case 2:
      (*DAT_101b2704)("common/bodydrop3.wav",0x3f800000,param_2 + 0x2d8);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    case 3:
      (*DAT_101b2704)("common/bodydrop4.wav",0x3f800000,param_2 + 0x2d8);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x13e5:
    (*DAT_101b2704)("player/get_up.wav",0x3f000000,param_2 + 0x2d8);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x13e6:
    iVar3 = (*DAT_101b2718)(0,1);
    if (iVar3 == 0) {
      pcVar15 = "player/ladder_1.wav";
    }
    else {
      if (iVar3 != 1) break;
      pcVar15 = "player/ladder_2.wav";
    }
    (*DAT_101b2660)(pcVar15,0x3f800000);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

