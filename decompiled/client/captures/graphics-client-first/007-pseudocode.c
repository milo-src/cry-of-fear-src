
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079a60(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  basic_filebuf<char,struct_std::char_traits<char>_> *pbVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  double in_XMM0_Qa;
  int local_2e4;
  basic_filebuf<char,std::char_traits<char>_> local_2e0 [8];
  uint auStack_2d8 [11];
  int aiStack_2ac [30];
  undefined1 local_234 [20];
  undefined1 local_220 [8];
  char local_218 [259];
  char cStack_115;
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134a20;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (*DAT_101b264c)("+moveup",&LAB_10079950,local_14);
  (*DAT_101b264c)("-moveup",&LAB_10079960);
  (*DAT_101b264c)("+movedown",&LAB_10078ec0);
  (*DAT_101b264c)("-movedown",&LAB_10078ed0);
  (*DAT_101b264c)("+forward",FUN_10078f50);
  (*DAT_101b264c)("-forward",&LAB_10079050);
  (*DAT_101b264c)("+back",FUN_10078d30);
  (*DAT_101b264c)("-back",&LAB_10078e30);
  (*DAT_101b264c)("+lookup",&LAB_100792d0);
  (*DAT_101b264c)("-lookup",&LAB_100792e0);
  (*DAT_101b264c)("+lookdown",&LAB_100792b0);
  (*DAT_101b264c)("-lookdown",&LAB_100792c0);
  (*DAT_101b264c)("+strafe",&LAB_10079930);
  (*DAT_101b264c)("-strafe",&LAB_10079940);
  (*DAT_101b264c)("+moveleft",FUN_10079340);
  (*DAT_101b264c)("-moveleft",&LAB_10079430);
  (*DAT_101b264c)("+moveright",FUN_10079450);
  (*DAT_101b264c)("-moveright",&LAB_10079540);
  (*DAT_101b264c)("+sprint",&LAB_100798d0);
  (*DAT_101b264c)("-sprint",&LAB_10079920);
  (*DAT_101b264c)("+attack",FUN_10078ae0);
  (*DAT_101b264c)("-attack",&LAB_10078d00);
  (*DAT_101b264c)("+attack2",&LAB_10078920);
  (*DAT_101b264c)("-attack2",&LAB_10078a10);
  (*DAT_101b264c)(&DAT_1014f9f0,&LAB_10079970);
  (*DAT_101b264c)(&DAT_1014f9f8,&LAB_10079a50);
  (*DAT_101b264c)("+jump",&LAB_10079200);
  (*DAT_101b264c)("-jump",&LAB_10079280);
  (*DAT_101b264c)("impulse",&LAB_100790a0);
  (*DAT_101b264c)("+klook",&LAB_10079290);
  (*DAT_101b264c)("-klook",&LAB_100792a0);
  (*DAT_101b264c)("+mlook",&LAB_100792f0);
  (*DAT_101b264c)("-mlook",&DAT_10079300);
  (*DAT_101b264c)("+jlook",&LAB_100791e0);
  (*DAT_101b264c)("-jlook",&LAB_100791f0);
  (*DAT_101b264c)("+duck",&LAB_10078ee0);
  (*DAT_101b264c)("-duck",&LAB_10078f40);
  (*DAT_101b264c)("+reload",&LAB_10079850);
  (*DAT_101b264c)("-reload",&LAB_10079880);
  (*DAT_101b264c)("+alt1",&LAB_10078900);
  (*DAT_101b264c)("-alt1",&LAB_10078910);
  (*DAT_101b264c)("+score",&LAB_10079890);
  (*DAT_101b264c)("-score",&LAB_100798b0);
  (*DAT_101b264c)("+showscores",&LAB_10079890);
  (*DAT_101b264c)("-showscores",&LAB_100798b0);
  (*DAT_101b264c)("+graph",&LAB_10079080);
  (*DAT_101b264c)("-graph",&LAB_10079090);
  (*DAT_101b264c)("+break",&LAB_10078e60);
  (*DAT_101b264c)("-break",&LAB_10078e70);
  (*DAT_101b264c)("+attack3",&LAB_10078a40);
  (*DAT_101b264c)("-attack3",&LAB_10078ad0);
  (*DAT_101b264c)("+dodge",&LAB_10078ea0);
  (*DAT_101b264c)("-dodge",&LAB_10078eb0);
  (*DAT_101b264c)("xboxfix",&LAB_10079800);
  (*DAT_101b264c)("documents",&DAT_10078e90);
  (*DAT_101b264c)("+inventory",&LAB_100790c0);
  (*DAT_101b264c)("-inventory",&LAB_100791d0);
  (*DAT_101b264c)("+objectives",FUN_10079570);
  (*DAT_101b264c)("-objectives",&LAB_100797f0);
  DAT_1054335c = (*DAT_101b2640)("lookstrafe",&DAT_1013c8d8,1);
  DAT_10543360 = (*DAT_101b2640)("lookspring",&DAT_1013c8d8,1);
  DAT_10543388 = (*DAT_101b2640)("cl_anglespeedkey",&DAT_1014fb30,0);
  DAT_10543380 = (*DAT_101b2640)("cl_yawspeed",&DAT_1014fb4c,0);
  DAT_10543384 = (*DAT_101b2640)("cl_pitchspeed",&DAT_1014fb5c,0);
  DAT_1054336c = (*DAT_101b2640)("cl_upspeed",&DAT_1014fb70,0);
  DAT_10543370 = (*DAT_101b2640)("cl_forwardspeed",&DAT_1014fb80,1);
  DAT_10543374 = (*DAT_101b2640)("cl_backspeed",&DAT_1014fb94,1);
  DAT_10543378 = (*DAT_101b2640)("cl_sidespeed",&DAT_1014fb4c,1);
  _DAT_1054337c = (*DAT_101b2640)("cl_movespeedkey",&DAT_1014fbb8,0);
  DAT_10543364 = (*DAT_101b2640)("cl_pitchup",&DAT_1014fbcc,0);
  DAT_10543368 = (*DAT_101b2640)("cl_pitchdown",&DAT_1014fbdc,0);
  DAT_1054338c = (*DAT_101b2640)("cl_vsmoothing",&DAT_1014fbf0,1);
  _DAT_10543390 = (*DAT_101b2640)("cg_water",&DAT_1013c8c4,1);
  DAT_10543398 = (*DAT_101b2640)("cl_ripples",&DAT_1013c8c4,1);
  _DAT_105433a8 = (*DAT_101b2640)("cl_subtitles",&DAT_1013c8c4,1);
  _DAT_10543394 = (*DAT_101b2640)("r_weather",&DAT_1013c8c4,1);
  _DAT_1054339c = (*DAT_101b2640)("fps_current",&DAT_1013c8c4,0);
  DAT_105433a0 = (*DAT_101b2640)("cl_noiseeffect",&DAT_1013c8d8,1);
  DAT_105433a4 = (*DAT_101b2640)("cl_noiseamount",&DAT_1014cc24,1);
  _DAT_105433ac = (*DAT_101b2640)("cl_vignette",&DAT_1013c8c4,1);
  DAT_105433b0 = (*DAT_101b2640)("cl_fovmultiplier",&DAT_1013c8c4,1);
  DAT_1054334c = (*DAT_101b2640)("m_pitch","0.022",1);
  DAT_10543350 = (*DAT_101b2640)("m_yaw","0.022",1);
  DAT_10543354 = (*DAT_101b2640)("m_forward",&DAT_1013c8c4,1);
  DAT_10543358 = (*DAT_101b2640)("m_side",&DAT_1014fc78,1);
  _DAT_105433b4 = (*DAT_101b2640)("cl_lazyweapon_force",&DAT_10142318,1);
  _DAT_105433bc = (*DAT_101b2640)("cl_weapon_idle_speed",&DAT_1014231c,1);
  _DAT_105433b8 = (*DAT_101b2640)("cl_weapon_idle_dampener",&DAT_10142318,1);
  _DAT_105433c0 = (*DAT_101b2640)("xbox_controller_sensitivityx",&DAT_1014fc98,1);
  _DAT_105433c4 = (*DAT_101b2640)("xbox_controller_sensitivityy",&DAT_1014fc98,1);
  DAT_105433c8 = (*DAT_101b2640)("cl_smokeparticlelimit",&DAT_1013f144,1);
  DAT_105433cc = (*DAT_101b2640)("cl_cheapweaponsmoke",&DAT_1013c8d8,1);
  _DAT_105433f0 = (*DAT_101b2640)("cl_bloodeffects",&DAT_1013c8c4,1);
  DAT_105433f8 = (*DAT_101b2640)("cl_cameraeffect",&DAT_1013c8d8,1);
  DAT_105433f4 = (*DAT_101b2640)("cl_crosshair",&DAT_1013c8c4,1);
  DAT_105433d0 = (*DAT_101b2640)("cl_fastcredits",&DAT_1013c8d8,1);
  _DAT_105433d4 = (*DAT_101b2640)("cl_waterspeed_x",&DAT_1014cbfc,1);
  _DAT_105433d8 = (*DAT_101b2640)("cl_waterspeed_y",&DAT_1014fd58,1);
  _DAT_105433dc = (*DAT_101b2640)("cl_coop_language",&DAT_1013c8c4,1);
  DAT_105433e0 = (*DAT_101b2640)("cl_lowflashlight",&DAT_1013c8d8,1);
  DAT_105433e4 = (*DAT_101b2640)("cl_propdistance",&DAT_1013c8d8,1);
  _DAT_105433ec = (*DAT_101b2640)("cl_downwiththesickness",&DAT_1013c8d8,1);
  DAT_105433e8 = (*DAT_101b2640)("cl_nodoubletapdodge",&DAT_1013c8d8,1);
  FUN_1007c3b0();
  FUN_1007aec0();
  FUN_1007a710();
  FUN_100b2f20();
  cVar1 = SteamAPI_Init();
  DAT_1054333c = 0;
  if (cVar1 != '\0') {
    DAT_10543341 = 1;
  }
  iVar2 = FUN_1006f110();
  iVar3 = FUN_1006f090();
  if (iVar3 == 0) {
    DAT_1054333c = 0;
    if (iVar2 != 0) {
      DAT_1054333c = 3;
    }
  }
  else {
    iVar3 = (*DAT_101b2744)("donatormsg.txt",5,0);
    if (iVar3 == 0) {
      FUN_1006ee60(local_218);
      if (local_218[0] != '\0') {
        pcVar4 = local_218;
        do {
          iVar3 = _tolower((int)local_218[0]);
          *pcVar4 = (char)iVar3;
          pcVar4 = pcVar4 + 1;
          local_218[0] = *pcVar4;
        } while (local_218[0] != '\0');
      }
      MessageBoxA((HWND)0x0,
                  "Thank you so much for donating!\nYour generosity has kept the team motivated, focused and happy\nWithout you, the mod would be so much less. We salute you, bronators\n:biden:"
                  ,"Thank you",0);
      pcVar4 = (char *)(*DAT_101b2724)();
      if (pcVar4 != (char *)0x0) {
        pcVar9 = pcVar4;
        do {
          cVar1 = *pcVar9;
          pcVar9[(int)(local_114 + -(int)pcVar4)] = cVar1;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        pcVar4 = &cStack_115;
        do {
          pcVar9 = pcVar4;
          pcVar4 = pcVar9 + 1;
        } while (pcVar9[1] != '\0');
        builtin_strncpy(pcVar9 + 1,"/donatormsg.txt",0x10);
        FUN_10078110(local_114,2,0x40,1);
        local_8 = 0;
        if ((*(byte *)((int)auStack_2d8 + *(int *)(local_2e4 + 4)) & 6) == 0) {
          FUN_10020380(&local_2e4,":biden: :biden: :biden: :yow:\n");
          pbVar5 = std::basic_filebuf<char,std::char_traits<char>_>::close(local_2e0);
          if (pbVar5 == (basic_filebuf<char,struct_std::char_traits<char>_> *)0x0) {
            iVar3 = *(int *)(local_2e4 + 4);
            uVar6 = (uint)(*(int *)((int)aiStack_2ac + iVar3) == 0) * 4 + 2 |
                    *(uint *)((int)auStack_2d8 + iVar3) & 0x17;
            *(uint *)((int)auStack_2d8 + iVar3) = uVar6;
            uVar6 = *(uint *)((int)auStack_2d8 + iVar3 + 4) & uVar6;
            if (uVar6 != 0) {
              if ((uVar6 & 4) == 0) {
                pcVar4 = "ios_base::failbit set";
                if ((uVar6 & 2) == 0) {
                  pcVar4 = "ios_base::eofbit set";
                }
              }
              else {
                pcVar4 = "ios_base::badbit set";
              }
              uVar8 = FUN_10024d60(local_220,1);
              FUN_10021850(pcVar4,uVar8);
                    /* WARNING: Subroutine does not return */
              __CxxThrowException_8(local_234,&DAT_1017433c);
            }
          }
        }
        local_8 = 0xffffffff;
        FUN_10022160();
      }
    }
    else {
      (*DAT_101b274c)(iVar3);
    }
    if (iVar2 != 0) {
      DAT_1054333c = 2;
    }
    else {
      DAT_1054333c = 1;
    }
  }
  iVar2 = SteamUser();
  if (iVar2 != 0) {
    piVar7 = (int *)SteamUser();
    (**(code **)(*piVar7 + 8))(local_220);
    FUN_100b5090();
    if (in_XMM0_Qa == 268893370.0) {
      DAT_1054333c = 4;
    }
    if (in_XMM0_Qa == 268992206.0) {
      DAT_1054333c = 4;
    }
  }
  DAT_10542a68 = 1;
  (*DAT_101b2658)("map c_game_menu1");
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

