
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d9e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  char *_Source;
  float10 fVar10;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118 [260];
  uint local_14;
  
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffff0;
  DAT_10542a68 = 1;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined1 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0x11c) = 0;
  DAT_1018a2dc = 0;
  DAT_10542bb0 = 0;
  DAT_10542bb1 = 0;
  _DAT_105431e0 = 0;
  _DAT_10542a70 = 1;
  FUN_1007fb50(0,0,0,0);
  FUN_1007d4d0("\nInitializing video\n");
  *(undefined1 *)(in_ECX + 0x322c) = 0;
  *(undefined1 *)(in_ECX + 0x332c) = 0;
  *(undefined1 *)(in_ECX + 0x33c) = 0;
  *(undefined4 *)(in_ECX + 0x340) = 0;
  DAT_10545081 = 0;
  fVar10 = (float10)(*DAT_101b2644)(&DAT_1014ebe0);
  DAT_10542a78 = (int)fVar10;
  *(undefined8 *)(in_ECX + 0x344) = 0;
  *(undefined4 *)(in_ECX + 0x3214) = 0;
  *(undefined4 *)(in_ECX + 0x3210) = 0;
  *(undefined4 *)(in_ECX + 0x354) = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x358) = 0;
  *(undefined4 *)(in_ECX + 0x350) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  DAT_104cd4f8 = 0;
  fVar10 = (float10)(*DAT_101b2644)("cl_weapon_idle_speed");
  _DAT_10542a7c = (float)fVar10;
  fVar10 = (float10)(*DAT_101b2644)("cl_weapon_idle_dampener");
  _DAT_10542a80 = (float)fVar10;
  DAT_105431e9 = 0;
  *(undefined1 *)(in_ECX + 0x2934) = 0;
  DAT_105594f8 = 0;
  DAT_105594f0 = 0;
  DAT_105594f4 = 0;
  *(undefined4 *)(in_ECX + 0x2924) = 0;
  *(undefined4 *)(in_ECX + 0x2920) = 0;
  *(undefined4 *)(in_ECX + 0x291c) = 0;
  *(undefined4 *)(in_ECX + 0x2930) = 0;
  *(undefined4 *)(in_ECX + 0x292c) = 0;
  *(undefined4 *)(in_ECX + 0x2928) = 0;
  _DAT_105595a0 = 0;
  DAT_105595a4 = 0;
  _DAT_105595a8 = 0;
  DAT_105595ac = 0;
  *(undefined4 *)(in_ECX + 0x35c) = 0;
  DAT_105436d8 = 0;
  DAT_10542bc0 = 0;
  DAT_10542bbc = 0;
  DAT_10542bb8 = 0;
  *(undefined4 *)(in_ECX + 0x3148) = 0;
  *(undefined4 *)(in_ECX + 0x3150) = *(undefined4 *)(in_ECX + 0x30f0);
  DAT_1055950c = 0;
  DAT_10542bb2 = 0;
  *(undefined4 *)(in_ECX + 0x314c) = 0;
  DAT_1055959c = 0;
  DAT_10542a6c = 0;
  *(undefined1 *)(in_ECX + 0x3140) = 0;
  *(undefined4 *)(in_ECX + 0x2964) = 0;
  *(undefined4 *)(in_ECX + 0x2968) = 0;
  *(undefined4 *)(in_ECX + 0x296c) = 0;
  *(undefined4 *)(in_ECX + 0x2972) = 0;
  *(undefined4 *)(in_ECX + 0x2976) = 0;
  *(undefined4 *)(in_ECX + 0x297a) = 0;
  *(undefined2 *)(in_ECX + 0x2970) = 0;
  FUN_100556f0();
  *(undefined1 *)(in_ECX + 0x295a) = 0;
  FUN_100860e0();
  *(undefined4 *)(in_ECX + 0x320c) = 0;
  *(undefined4 *)(in_ECX + 0x3164) = 0;
  *(undefined4 *)(in_ECX + 0x3168) = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x2a80) = (float)fVar10;
  *(undefined4 *)(in_ECX + 0x2a84) = 0;
  *(undefined1 *)(in_ECX + 0x2a88) = 0;
  *(undefined4 *)(in_ECX + 0x2a8c) = 0;
  FUN_1008bce0();
  *(undefined4 *)(in_ECX + 0x3124) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x3144) = 0;
  FUN_1006b1f0();
  FUN_10056730();
  FUN_10094470();
  FUN_10060b10();
  uVar4 = (*DAT_101b2608)("sprites/muzzleflash.spr");
  *(undefined4 *)(in_ECX + 0x360) = uVar4;
  *(undefined4 *)(in_ECX + 0x536c) = 0x214;
  (*DAT_101b2638)((undefined4 *)(in_ECX + 0x536c));
  *(undefined4 *)(in_ECX + 0x30ec) = 0;
  *(undefined4 *)(in_ECX + 0x30e8) = 0;
  *(undefined4 *)(in_ECX + 0x3120) = DAT_1018fec0;
  uVar4 = 0x280;
  if (DAT_1018f430 < 0x280) {
    uVar4 = 0x140;
  }
  *(undefined4 *)(in_ECX + 0x312c) = uVar4;
  if (*(int *)(in_ECX + 8) == 0) {
    iVar5 = (*DAT_101b2630)("sprites/hud.txt",(int *)(in_ECX + 0x10));
    *(int *)(in_ECX + 8) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(in_ECX + 0xc) = 0;
      uVar6 = 0;
      iVar9 = *(int *)(in_ECX + 0x10);
      if (0 < iVar9) {
        piVar8 = (int *)(iVar5 + 0x84);
        uVar6 = 0;
        do {
          if (*piVar8 == *(int *)(in_ECX + 0x312c)) {
            uVar6 = uVar6 + 1;
            *(uint *)(in_ECX + 0xc) = uVar6;
          }
          piVar8 = piVar8 + 0x26;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      uVar4 = FUN_100b42b2(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar6 * 4));
      *(undefined4 *)(in_ECX + 0x3220) = uVar4;
      lVar1 = (ulonglong)*(uint *)(in_ECX + 0xc) * 0x10;
      uVar4 = FUN_100b42b2(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(undefined4 *)(in_ECX + 0x3224) = uVar4;
      uVar4 = FUN_100b42b2(*(int *)(in_ECX + 0xc) * 0x18);
      _Source = *(char **)(in_ECX + 8);
      *(undefined4 *)(in_ECX + 0x3228) = uVar4;
      local_11c = 0;
      if (0 < *(int *)(in_ECX + 0x10)) {
        local_120 = 0;
        local_128 = 0;
        local_124 = 0;
        do {
          if (*(int *)(_Source + 0x84) == *(int *)(in_ECX + 0x312c)) {
            FUN_1000c900(local_118,"sprites/%s.spr",_Source + 0x40);
            uVar4 = (*DAT_101b2608)(local_118);
            *(undefined4 *)(local_124 + *(int *)(in_ECX + 0x3220)) = uVar4;
            puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x3224) + local_128);
            uVar4 = *(undefined4 *)(_Source + 0x8c);
            uVar2 = *(undefined4 *)(_Source + 0x90);
            uVar3 = *(undefined4 *)(_Source + 0x94);
            *puVar7 = *(undefined4 *)(_Source + 0x88);
            puVar7[1] = uVar4;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            _strncpy((char *)(*(int *)(in_ECX + 0x3228) + local_120),_Source,0x18);
            local_124 = local_124 + 4;
            local_128 = local_128 + 0x10;
            local_120 = local_120 + 0x18;
          }
          local_11c = local_11c + 1;
          _Source = _Source + 0x98;
        } while (local_11c < *(int *)(in_ECX + 0x10));
      }
    }
  }
  else {
    local_120 = 0;
    if (0 < *(int *)(in_ECX + 0x10)) {
      local_11c = 0;
      iVar5 = *(int *)(in_ECX + 8) + 0x40;
      do {
        if (*(int *)(iVar5 + 0x44) == *(int *)(in_ECX + 0x312c)) {
          FUN_1000c900(local_118,"sprites/%s.spr",iVar5);
          uVar4 = (*DAT_101b2608)(local_118);
          *(undefined4 *)(local_11c + *(int *)(in_ECX + 0x3220)) = uVar4;
          local_11c = local_11c + 4;
        }
        local_120 = local_120 + 1;
        iVar5 = iVar5 + 0x98;
      } while (local_120 < *(int *)(in_ECX + 0x10));
    }
  }
  iVar5 = FUN_1006ce40("number_0");
  *(int *)(in_ECX + 0x558c) = iVar5;
  *(int *)(in_ECX + 0x3218) =
       *(int *)(*(int *)(in_ECX + 0x3224) + 0xc + iVar5 * 0x10) -
       *(int *)(*(int *)(in_ECX + 0x3224) + 8 + iVar5 * 0x10);
  (**(code **)(*(int *)(in_ECX + 0x342c) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x3574) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x39c8) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4c48) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4cd4) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4c60) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4cf0) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4d30) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4e18) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x5058) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x5070) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x508c) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x50b0) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x50dc) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4cb4) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x4c90) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x50f0) + 8))();
  (**(code **)(*(int *)(in_ECX + 0x51c4) + 4))();
  piVar8 = (int *)FUN_1000b540();
  (**(code **)(*piVar8 + 8))();
  (**(code **)(*(int *)(in_ECX + 0x5358) + 8))();
  *(undefined4 *)(in_ECX + 0x31ac) = 0;
  *(undefined4 *)(in_ECX + 0x31b4) = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x31b8) = (float)fVar10;
  if (DAT_101b2600 != 0) {
    fVar10 = (float10)(*DAT_101b26e0)();
    *(float *)(DAT_101b2600 + 0x14a0) = (float)fVar10;
  }
  *(undefined4 *)(in_ECX + 0x31c0) = 0;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x31c4) = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x31c8) = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x31cc) = (float)fVar10;
  fVar10 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0x31d0) = (float)fVar10;
  *(undefined4 *)(in_ECX + 0x2a90) = 0;
  *(undefined4 *)(in_ECX + 0x2938) = 0;
  *(undefined4 *)(in_ECX + 0x293c) = 0;
  *(undefined4 *)(in_ECX + 0x2940) = 0;
  *(undefined4 *)(in_ECX + 0x2944) = 0;
  *(undefined4 *)(in_ECX + 0x2948) = 0;
  *(undefined4 *)(in_ECX + 0x294c) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x2950) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x2954) = 0xbf800000;
  *(undefined2 *)(in_ECX + 0x2958) = 0;
  FUN_1007d4d0("End Initializing video\n");
  FUN_1007c7f0();
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

