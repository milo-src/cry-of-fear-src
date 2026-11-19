
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cf00(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  float10 fVar3;
  
  if (in_ECX[0xcb] == 0) {
    in_ECX[0xcb] = DAT_101b2764;
  }
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)(in_ECX + 0x47) = 0;
  DAT_1018a2dc = 0;
  DAT_10542bb0 = 0;
  DAT_10542bb1 = 0;
  *(undefined1 *)(in_ECX + 199) = 0;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  _DAT_10542a70 = 1;
  in_ECX[0xca] = 0;
  FUN_1007d4d0("Initializing variables\n");
  FUN_10053bb0();
  in_ECX[0xc6c] = 0;
  _DAT_105431e0 = 0;
  *(undefined1 *)(in_ECX + 0xcf) = 0;
  in_ECX[0xd0] = 0;
  DAT_10545081 = 0;
  FUN_100566e0();
  FUN_10060690();
  FUN_10097b80();
  FUN_1005e400();
  in_ECX[0xd8] = 0;
  DAT_104cd4f8 = 0;
  *(undefined1 *)(in_ECX + 0xc8b) = 0;
  *(undefined1 *)(in_ECX + 0xccb) = 0;
  FUN_10085850();
  FUN_1008bc10();
  FUN_1006b1d0();
  FUN_1009c830();
  FUN_10097ec0();
  FUN_100a2a40();
  FUN_100a3b90();
  FUN_10038900();
  FUN_1003e1e0();
  FUN_100487b0();
  FUN_10046a90();
  FUN_10049da0();
  FUN_1004a330();
  FUN_1004a700();
  FUN_1004b5b0();
  FUN_1003dba0();
  FUN_1003f370();
  FUN_1004adc0();
  FUN_100309b0();
  FUN_10032320();
  FUN_1002eba0();
  FUN_10032cc0();
  FUN_10033ca0();
  FUN_1003e7d0();
  FUN_10033a70();
  FUN_10044ea0();
  FUN_1001e930();
  FUN_10029450();
  FUN_10020350();
  FUN_10035b40();
  FUN_10023e40();
  FUN_10040e30();
  *(undefined1 *)((int)in_ECX + 0x295a) = 0;
  FUN_10097e90();
  (*DAT_101b2650)(&DAT_1014e890,FUN_1006e7e0);
  (*DAT_101b2650)("ResetHUD",FUN_1006e9a0);
  (*DAT_101b2650)("GameMode",FUN_1006e6c0);
  (*DAT_101b2650)("InitHUD",FUN_1006e740);
  (*DAT_101b2650)("ViewMode",FUN_1006ecf0);
  (*DAT_101b2650)("SetFOV",FUN_1006ea40);
  (*DAT_101b2650)("Concuss",FUN_1006e5a0);
  (*DAT_101b2650)("HUDColor",FUN_1006e720);
  (*DAT_101b2650)("SetFog",FUN_1006ea60);
  (*DAT_101b2650)("KeyedDLight",FUN_1006e7a0);
  (*DAT_101b2650)("AddShine",FUN_1006e460);
  (*DAT_101b2650)("SetSky",FUN_1006ea80);
  (*DAT_101b2650)("GasMask",FUN_1006e6e0);
  (*DAT_101b2650)("SpecTank",FUN_1006eac0);
  (*DAT_101b2650)("TextWindow",FUN_1006ebc0);
  (*DAT_101b2650)("RainData",FUN_1006e950);
  (*DAT_101b2650)("ProFont",FUN_1006e930);
  (*DAT_101b2650)("Maglite",FUN_1006e830);
  (*DAT_101b2650)(&DAT_1014e944,FUN_1006e510);
  (*DAT_101b2650)("UnreadSMS",FUN_1006ec10);
  (*DAT_101b2650)("ViewKnock",FUN_1006ecb0);
  (*DAT_101b2650)("CoFWeapon",FUN_1006e580);
  (*DAT_101b2650)("ViewEntity",FUN_1006ec90);
  (*DAT_101b2650)("ViewLock",FUN_1006ecd0);
  (*DAT_101b2650)("Ladder",FUN_1006e7c0);
  (*DAT_101b2650)("FallOver",FUN_1006e650);
  (*DAT_101b2650)("BlackWhite",FUN_1006e4f0);
  (*DAT_101b2650)("WeaponBody",FUN_1006ed10);
  (*DAT_101b2650)("PhoneOff",FUN_1006e8d0);
  (*DAT_101b2650)("Muzzleflash",FUN_1006e870);
  (*DAT_101b2650)("FlashFlags",FUN_1006e6a0);
  (*DAT_101b2650)(&DAT_1014e9d8,FUN_1006e530);
  (*DAT_101b2650)("Ripple",FUN_1006e9c0);
  (*DAT_101b2650)("AddNote",FUN_1006e440);
  (*DAT_101b2650)("AttachCam",FUN_1006e4b0);
  (*DAT_101b2650)("BigPrick",FUN_1006e4d0);
  (*DAT_101b2650)("NewFade",FUN_1006e890);
  (*DAT_101b2650)("SkipScene",FUN_1006eaa0);
  (*DAT_101b2650)("IronSights",FUN_1006e780);
  (*DAT_101b2650)("Wheelchair",FUN_1006ed30);
  (*DAT_101b2650)("GreyFade",FUN_1006e700);
  (*DAT_101b2650)("TakePhoto",FUN_1006eb10);
  (*DAT_101b2650)("Objectives",FUN_1006e8b0);
  (*DAT_101b2650)("Unlocks",FUN_1006ebf0);
  (*DAT_101b2650)("CustomSlv",FUN_1006e600);
  (*DAT_101b2650)("CustomFng",FUN_1006e5c0);
  (*DAT_101b2650)("CustomGlv",FUN_1006e5e0);
  (*DAT_101b2650)("PlaySFX",FUN_1006e910);
  (*DAT_101b264c)("+commandmenu",&LAB_1006e320);
  (*DAT_101b264c)("-commandmenu",&LAB_1006e200);
  (*DAT_101b264c)("ForceCloseCommandMenu",&LAB_1006e2f0);
  (*DAT_101b264c)("special",&LAB_1006e300);
  (*DAT_101b264c)("togglebrowser",&LAB_1006e3e0);
  (*DAT_101b264c)("finishladder",&LAB_1006e2e0);
  (*DAT_101b264c)("donatorcheck",FUN_1006e210);
  (*DAT_101b2650)("ValClass",FUN_1006ec60);
  (*DAT_101b2650)("TeamNames",FUN_1006eb60);
  (*DAT_101b2650)("Feign",FUN_1006e670);
  (*DAT_101b2650)("Detpack",FUN_1006e620);
  (*DAT_101b2650)(&DAT_1014eb1c,FUN_1006e800);
  (*DAT_101b2650)("BuildSt",FUN_1006e550);
  (*DAT_101b2650)("RandomPC",FUN_1006e970);
  (*DAT_101b2650)("ServerName",FUN_1006ea10);
  (*DAT_101b2650)("ScoreInfo",FUN_1006e9e0);
  (*DAT_101b2650)("TeamScore",FUN_1006eb90);
  (*DAT_101b2650)("TeamInfo",FUN_1006eb30);
  (*DAT_101b2650)("Spectator",FUN_1006eae0);
  (*DAT_101b2650)("AllowSpec",FUN_1006e480);
  (*DAT_101b2650)("VGUIMenu",FUN_1006ec30);
  (*DAT_101b2650)("Inventory",FUN_1006e760);
  (*DAT_101b2650)("Materials",FUN_1006e850);
  (*DAT_101b2640)("dev_commentary",&DAT_1013c8d8,1);
  iVar1 = (*DAT_101b2640)("cl_zoomspeed",&DAT_1014eba4,0);
  in_ECX[0xc4f] = iVar1;
  (*DAT_101b2640)("hud_classautokill",&DAT_1013c8c4,3);
  (*DAT_101b2640)("hud_takesshots",&DAT_1013c8d8,1);
  (*DAT_101b2640)("brightvalue",&DAT_1014cc24,3);
  (*DAT_101b2640)("skybrightvalue",&DAT_1014ebdc,3);
  (*DAT_101b2640)(&DAT_1014ebe0,&DAT_1013c8d8,1);
  (*DAT_101b2640)("skybrightcolourr",&DAT_1014ebe8,3);
  (*DAT_101b2640)("skybrightcolourg",&DAT_1014ebe8,3);
  (*DAT_101b2640)("skybrightcolourb",&DAT_1014ebe8,3);
  fVar3 = (float10)(*DAT_101b2644)(&DAT_1014ebe0);
  DAT_10542a78 = (int)fVar3;
  (*DAT_101b2650)("PlayMP3",FUN_1006e8f0);
  (*DAT_101b264c)("stopmp3",&LAB_1006e350);
  FUN_1007fb50(0,0,0,0);
  (*DAT_101b264c)("beginspgame",&LAB_1006e1f0);
  (*DAT_101b264c)("to3dmenu",&LAB_1006e370);
  (*DAT_101b264c)("returnmenu",&LAB_1006e340);
  (*DAT_101b264c)("returnmenu",&LAB_1006e340);
  (*DAT_101b264c)("mp3player",&DAT_1006e310);
  (*DAT_101b264c)("unlockablescmd",&LAB_1006e3b0);
  (*DAT_101b264c)("texturetest",&LAB_1006e360);
  in_ECX[1] = 0;
  in_ECX[0xc48] = DAT_1018fec0;
  in_ECX[0xc87] = 0xffffff;
  in_ECX[0xaaf] = 0;
  in_ECX[0xab0] = 0;
  in_ECX[0xab1] = 0;
  *(undefined1 *)(in_ECX + 0xab2) = 0;
  fVar3 = (float10)(*DAT_101b26e0)();
  in_ECX[0xab3] = (int)(float)fVar3;
  piVar2 = in_ECX + 0xab5;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  (*DAT_101b2640)("zoom_sensitivity_ratio",&DAT_1014ec48,0);
  iVar1 = (*DAT_101b2640)("cl_raininfo",&DAT_1013c8d8,0);
  in_ECX[0xc4e] = iVar1;
  iVar1 = (*DAT_101b2640)("hud_capturemouse",&DAT_1013c8c4,1);
  in_ECX[0xc4c] = iVar1;
  iVar1 = (*DAT_101b2640)("hud_draw",&DAT_1013c8c4,1);
  in_ECX[0xc4d] = iVar1;
  DAT_10542a74 = (*DAT_101b2728)("cl_lw");
  (*DAT_101b2640)("fmod_volume",&DAT_1014ec98,1);
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    do {
      iVar1 = *in_ECX;
      *in_ECX = *(int *)(iVar1 + 4);
      FUN_100f7be4(iVar1);
    } while (*in_ECX != 0);
    *in_ECX = 0;
  }
  in_ECX[0xc3c] = 0x3f800000;
  (**(code **)(in_ECX[0xd0b] + 4))();
  (**(code **)(in_ECX[0xd5d] + 4))();
  (**(code **)(in_ECX[0x141c] + 4))();
  (**(code **)(in_ECX[0xe72] + 4))();
  (**(code **)(in_ECX[0x1312] + 4))();
  (**(code **)(in_ECX[0x1335] + 4))();
  (**(code **)(in_ECX[0x1318] + 4))();
  (**(code **)(in_ECX[0x133c] + 4))();
  (**(code **)(in_ECX[0x134c] + 4))();
  (**(code **)(in_ECX[0x1386] + 4))();
  (**(code **)(in_ECX[0x1416] + 4))();
  (**(code **)(in_ECX[0x142c] + 4))();
  (**(code **)(in_ECX[0x1437] + 4))();
  (**(code **)(in_ECX[0x143c] + 4))();
  (**(code **)(in_ECX[0x1471] + 4))();
  piVar2 = (int *)FUN_1000b540();
  (**(code **)(*piVar2 + 0x1c))(&PTR_vftable_1018fec8,&DAT_101b2600);
  (**(code **)(in_ECX[0x14d6] + 4))();
  (**(code **)(in_ECX[0x132d] + 4))();
  (**(code **)(in_ECX[0x1324] + 4))();
  (**(code **)(in_ECX[0x1423] + 4))();
  FUN_10074ae0();
  iVar1 = (*DAT_101b26c4)("-nomusic",0);
  if (iVar1 == 0) {
    FUN_1007f9e0();
  }
  FUN_100714b0();
  FUN_1007d4d0("END Initializing variables\n");
  return;
}

