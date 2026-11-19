
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100678d0(void)

{
  byte bVar1;
  float *pfVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  char *pcVar9;
  int iVar10;
  undefined *puVar11;
  bool bVar12;
  float10 fVar13;
  double dVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [7];
  byte local_111;
  int *local_110;
  float fStack_10c;
  undefined *puStack_108;
  float fStack_104;
  float fStack_100;
  undefined *puStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int iStack_ec;
  undefined *puStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_cc;
  int local_c8;
  int iStack_c4;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int aiStack_90 [33];
  uint local_c;
  
  local_c = DAT_10190600 ^ (uint)auStack_118;
  local_110 = (int *)0x0;
  if (*(int *)(*(int *)(in_ECX + 0x30) + 0x304) == 0x3c) goto LAB_10068744;
  if (DAT_105458b0 == 0) {
    pbVar4 = *(byte **)(in_ECX + 0x34);
    pcVar9 = "models/nv_goggles.mdl";
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) goto LAB_10067940;
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10067940;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
LAB_1006793c:
    uVar5 = 0;
LAB_10067945:
    if (uVar5 == 0) {
LAB_1006794d:
      local_110 = (int *)0x1;
    }
  }
  else {
    if (DAT_105458b0 == 7) {
      pbVar4 = *(byte **)(in_ECX + 0x34);
      pcVar9 = "models/bookmenu.mdl";
      do {
        bVar1 = *pbVar4;
        bVar12 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) goto LAB_10067940;
        if (bVar1 == 0) goto LAB_1006793c;
        bVar1 = pbVar4[1];
        bVar12 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_10067940;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
      goto LAB_10067945;
    }
    if (DAT_105458b0 == 10) {
      pbVar4 = *(byte **)(in_ECX + 0x34);
      pcVar9 = "models/weapons/v_gasmask.mdl";
      do {
        local_111 = *pbVar4;
        bVar12 = local_111 < (byte)*pcVar9;
        pbVar6 = *(byte **)(in_ECX + 0x34);
        if (local_111 != *pcVar9) {
LAB_100679c9:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_100679ce;
        }
        if (local_111 == 0) break;
        local_111 = pbVar4[1];
        bVar12 = local_111 < (byte)pcVar9[1];
        pbVar6 = *(byte **)(in_ECX + 0x34);
        if (local_111 != pcVar9[1]) goto LAB_100679c9;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (local_111 != 0);
      uVar5 = 0;
LAB_100679ce:
      if (uVar5 != 0) {
        pcVar9 = "models/weapons/v_gasmask_simon.mdl";
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) goto LAB_10067940;
          if (bVar1 == 0) goto LAB_1006793c;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_10067940;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
        goto LAB_10067945;
      }
      goto LAB_1006794d;
    }
    if (DAT_105458b0 == 1) {
      pbVar4 = *(byte **)(in_ECX + 0x34);
      pcVar9 = "models/items/tv_frame.mdl";
      do {
        bVar1 = *pbVar4;
        bVar12 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) goto LAB_10067940;
        if (bVar1 == 0) goto LAB_1006793c;
        bVar1 = pbVar4[1];
        bVar12 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_10067940;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
      goto LAB_10067945;
    }
    if (DAT_105458b0 == 5) {
      pbVar4 = *(byte **)(in_ECX + 0x34);
      pcVar9 = "models/props/blandat/v_telescope.mdl";
      do {
        bVar1 = *pbVar4;
        bVar12 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) goto LAB_10067940;
        if (bVar1 == 0) goto LAB_1006793c;
        bVar1 = pbVar4[1];
        bVar12 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_10067940;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
      goto LAB_10067945;
    }
    if ((DAT_105458b0 == 6) && (DAT_1018a3f0 != (byte *)0x0)) {
      pbVar4 = *(byte **)(in_ECX + 0x34);
      pbVar6 = DAT_1018a3f0;
      do {
        bVar1 = *pbVar4;
        bVar12 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_10067ac0:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_10067ac5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar12 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_10067ac0;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10067ac5:
      local_110 = (int *)0x0;
      if (uVar5 == 0) {
        local_110 = (int *)0x1;
      }
    }
  }
  piVar3 = local_110;
  iVar10 = *(int *)(in_ECX + 0x30);
  local_c8 = in_ECX;
  FUN_10065710((*(float *)(iVar10 + 0x338) + *(float *)(iVar10 + 0x32c)) * 0.5 +
               *(float *)(iVar10 + 0xb48),
               *(float *)(iVar10 + 0xb4c) +
               (*(float *)(iVar10 + 0x33c) + *(float *)(iVar10 + 0x330)) * 0.5,
               *(float *)(iVar10 + 0xb50) +
               (*(float *)(iVar10 + 0x340) + *(float *)(iVar10 + 0x334)) * 0.5,&DAT_104d26f4,
               *(uint *)(iVar10 + 0x2ec) & 0x10);
  if (piVar3 == (int *)0x0) {
    FUN_10094730(&DAT_104d270c);
  }
  pbVar4 = *(byte **)(in_ECX + 0x34);
  pcVar9 = "models/flash1.mdl";
  do {
    local_111 = *pbVar4;
    bVar12 = local_111 < (byte)*pcVar9;
    pbVar6 = *(byte **)(in_ECX + 0x34);
    if (local_111 != *pcVar9) {
LAB_10067bb4:
      uVar5 = -(uint)bVar12 | 1;
      goto LAB_10067bb9;
    }
    if (local_111 == 0) break;
    local_111 = pbVar4[1];
    bVar12 = local_111 < (byte)pcVar9[1];
    pbVar6 = *(byte **)(in_ECX + 0x34);
    if (local_111 != pcVar9[1]) goto LAB_10067bb4;
    pbVar4 = pbVar4 + 2;
    pcVar9 = pcVar9 + 2;
  } while (local_111 != 0);
  uVar5 = 0;
LAB_10067bb9:
  if (uVar5 == 0) {
LAB_10067beb:
    DAT_104d26f4._0_4_ = 0.15;
    DAT_104d26f4._4_4_ = 0.15;
    DAT_104d26fc = 0.15;
  }
  else {
    pcVar9 = "models/flash2.mdl";
    do {
      bVar1 = *pbVar6;
      bVar12 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10067be2:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_10067be7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar12 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10067be2;
      pbVar6 = pbVar6 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10067be7:
    if (uVar5 == 0) goto LAB_10067beb;
  }
  if ((DAT_10556b48 != 0) && ((DAT_105458b0 == 6 || (DAT_105458b0 == 7)))) {
    DAT_104d26f4._0_4_ = 0.15;
    DAT_104d26f4._4_4_ = 0.15;
    DAT_104d26fc = 0.15;
  }
  iVar10 = *(int *)(in_ECX + 0x30);
  if (*(int *)(iVar10 + 0x304) == 100) {
    fVar13 = (float10)(*DAT_101b2644)("brightvalue");
    DAT_104d26f4._0_4_ = (float)fVar13;
    iVar10 = *(int *)(in_ECX + 0x30);
    DAT_104d26f4._4_4_ = (float)DAT_104d26f4;
    DAT_104d26fc = (float)DAT_104d26f4;
    fStack_10c = (float)DAT_104d26f4;
  }
  if (*(int *)(iVar10 + 0x304) == 0x89) {
    fVar13 = (float10)(*DAT_101b2644)("skybrightvalue");
    fStack_10c = (float)fVar13;
    fVar13 = (float10)(*DAT_101b2644)("skybrightcolourr");
    puStack_fc = (undefined *)(float)fVar13;
    fVar13 = (float10)(*DAT_101b2644)("skybrightcolourg");
    puStack_e8 = (undefined *)(float)fVar13;
    fVar13 = (float10)(*DAT_101b2644)("skybrightcolourb");
    pbVar4 = *(byte **)(in_ECX + 0x34);
    puStack_108 = (undefined *)(float)fVar13;
    pcVar9 = "models/props/sky_stars.mdl";
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10067cf5:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_10067cfa;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10067cf5;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10067cfa:
    if (uVar5 == 0) {
      fVar13 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
      fStack_10c = (float)(fVar13 + (float10)0.5);
      fVar13 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
      DAT_104d2700 = (undefined *)(float)(fVar13 + (float10)0.1);
      DAT_104d26f4._0_4_ = fStack_10c;
      DAT_104d26f4._4_4_ = fStack_10c;
      DAT_104d26fc = fStack_10c;
      DAT_104d2704 = DAT_104d2700;
      DAT_104d2708 = DAT_104d2700;
      puStack_fc = DAT_104d2700;
    }
    else {
      DAT_104d2704 = puStack_e8;
      DAT_104d26f4._0_4_ = fStack_10c;
      DAT_104d26f4._4_4_ = fStack_10c;
      DAT_104d26fc = fStack_10c;
      DAT_104d2700 = puStack_fc;
      DAT_104d2708 = puStack_108;
    }
  }
  iVar7 = *(int *)(in_ECX + 0x30);
  iVar10 = *(int *)(iVar7 + 0x304);
  if ((((100 < iVar10) && (iVar10 < 0xc9)) && (iVar10 != 0x65)) && (iVar10 != 0x89)) {
    DAT_104d26f4._0_4_ = (float)(iVar10 + -100) / 100.0;
    iVar7 = *(int *)(in_ECX + 0x30);
    DAT_104d26f4._4_4_ = (float)DAT_104d26f4;
    DAT_104d26fc = (float)DAT_104d26f4;
  }
  if (*(int *)(iVar7 + 0x304) == 0x65) {
    DAT_104d26f4._0_4_ = 0.1;
    DAT_104d26f4._4_4_ = 0.1;
    DAT_104d26fc = 0.1;
    DAT_104d2700 = (undefined *)0x3e19999a;
    DAT_104d2704 = (undefined *)0x3dcccccd;
    DAT_104d2708 = (undefined *)0x3dcccccd;
    iVar7 = *(int *)(in_ECX + 0x30);
  }
  if (*(int *)(iVar7 + 0x304) == 0xa7) {
    DAT_104d26f4._0_4_ = 0.1;
    DAT_104d26f4._4_4_ = 0.1;
    DAT_104d26fc = 0.1;
    DAT_104d2700 = (undefined *)0x3dcccccd;
    DAT_104d2704 = (undefined *)0x3dcccccd;
    DAT_104d2708 = (undefined *)0x3dcccccd;
    iVar7 = *(int *)(in_ECX + 0x30);
  }
  iVar10 = *(int *)(iVar7 + 0x304);
  if (((iVar10 == 99) || (iVar10 == 0x7b)) || ((iVar10 == 0xf5 || (iVar10 == 0xa5)))) {
    fVar13 = (float10)FUN_10065210((undefined4)DAT_10559638,DAT_10559638._4_4_,DAT_10559640,
                                   *(undefined4 *)(iVar7 + 0x2c0),*(undefined4 *)(iVar7 + 0x2c4),
                                   *(undefined4 *)(iVar7 + 0x2c8));
    fStack_10c = (float)fVar13;
    fVar17 = 0.0;
    if (0.0 <= fStack_10c - 64.0) {
      fVar17 = fStack_10c - 64.0;
    }
    if (255.0 < fVar17) {
      fVar17 = 255.0;
    }
    if (DAT_104ce4a2 == '\0') {
      fVar16 = (float)((int)(DAT_1018d1b0 * 10.0) % 0x19) / 100.0;
      if (0.0 < fVar16) goto LAB_10067f88;
      fVar16 = 0.0;
      DAT_104ce4a2 = '\x01';
    }
    else {
      fVar16 = (float)((int)(DAT_1018d1b0 * 10.0) % 0x19) / 100.0;
      if (0.0 < fVar16) {
LAB_10067f88:
        if (0.25 <= fVar16) {
          fVar16 = 0.25;
        }
      }
      else {
        fVar16 = 0.0;
        DAT_104ce4a2 = '\0';
      }
    }
    _DAT_1018cb44 = (undefined *)(fVar16 * 4.0);
    puVar11 = (undefined *)0x3e800000;
    if (0.25 - (float)_DAT_1018cb44 <= 0.25) {
      puVar11 = (undefined *)(0.25 - (float)_DAT_1018cb44);
    }
    puVar15 = (undefined *)0x0;
    if (0.0 <= (float)puVar11) {
      puVar15 = puVar11;
    }
    switch(DAT_10542ba4) {
    case 0:
    case 2:
      if (fVar17 < 96.0) {
        DAT_104d26f4._0_4_ = 0.25;
        DAT_104d26f4._4_4_ = 0.25;
        DAT_104d26fc = 0.25;
joined_r0x10068070:
        DAT_104d2708 = (undefined *)0x0;
        DAT_104d2704 = (undefined *)0x0;
        DAT_104d2700 = puVar15;
        if (DAT_104ce4a2 == '\0') {
          DAT_104d2708 = (undefined *)0x0;
          DAT_104d2704 = (undefined *)0x0;
          DAT_104d2700 = _DAT_1018cb44;
        }
      }
      break;
    case 1:
      if (fVar17 < 96.0) {
        DAT_104d26f4._0_4_ = 0.5;
        DAT_104d26f4._4_4_ = 0.5;
        DAT_104d26fc = 0.5;
        goto joined_r0x10068070;
      }
      break;
    case 3:
      if (fVar17 < 96.0) {
        DAT_104d26f4._0_4_ = 0.1;
        DAT_104d26f4._4_4_ = 0.1;
        DAT_104d26fc = 0.1;
        goto joined_r0x10068070;
      }
    }
  }
  iVar10 = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x44) + 0x8c)) {
    fStack_100 = 0.0;
    puStack_108 = &DAT_104dff18;
    do {
      FUN_100690f0(&DAT_104d270c,*(int *)(in_ECX + 0x40a8) + (int)fStack_100,puStack_108);
      iVar10 = iVar10 + 1;
      puStack_108 = puStack_108 + 0xc;
      fStack_100 = (float)((int)fStack_100 + 0x30);
    } while (iVar10 < *(int *)(*(int *)(in_ECX + 0x44) + 0x8c));
  }
  DAT_104ce4b0 = 0;
  if (local_110 == (int *)0x0) {
    iVar10 = *(int *)(in_ECX + 0x30);
    iVar7 = (*DAT_101b26d8)();
    uStack_d0 = (uint)(iVar10 == iVar7);
    if ((((byte)DAT_1018a41c & 8) != 0) && (uStack_d0 != 0)) {
      DAT_104d2700 = (undefined *)0x3e4ccccd;
      DAT_104d2704 = (undefined *)0x3e4ccccd;
      DAT_104d2708 = (undefined *)0x3e4ccccd;
      iVar10 = *(int *)(in_ECX + 0x30);
    }
    iVar7 = *(int *)(in_ECX + 0x30);
    iVar8 = *(int *)(in_ECX + 0x30);
    iStack_c4 = FUN_1005bd90(*(undefined4 *)(iVar8 + 0xb48),*(undefined4 *)(iVar8 + 0xb4c),
                             *(undefined4 *)(iVar8 + 0xb50),*(undefined4 *)(iVar7 + 0x32c),
                             *(undefined4 *)(iVar7 + 0x330),*(undefined4 *)(iVar7 + 0x334),
                             *(undefined4 *)(iVar10 + 0x338),*(undefined4 *)(iVar10 + 0x33c),
                             *(undefined4 *)(iVar10 + 0x340),aiStack_90,uStack_d0);
    fStack_10c = 0.0;
    if (0 < iStack_c4) {
      local_110 = aiStack_90;
      do {
        if (DAT_104ce4b0 == 4) break;
        iVar10 = *local_110;
        if (*(char *)(iVar10 + 0x3c) != '\0') {
          (*DAT_101b2668)(iVar10 + 0x28,&fStack_9c,0,0);
          iVar10 = *local_110;
          dVar14 = (double)(*(float *)(iVar10 + 0x38) + *(float *)(iVar10 + 0x34)) * 0.3 *
                   0.017453292519943295;
          FUN_100f8160();
          fStack_cc = (float)dVar14;
        }
        puStack_fc = (undefined *)(*(float *)(iVar10 + 0xc) * *(float *)(iVar10 + 0xc));
        puStack_e8 = (undefined *)0x0;
        if ((uStack_d0 != 0) && (*(int *)(iVar10 + 0x24) == -0x29a)) {
          puStack_e8 = (undefined *)0x1;
          uStack_b8 = *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0xb5c);
          uStack_c0 = *(ulonglong *)(*(int *)(in_ECX + 0x30) + 0xb54) ^ 0x80000000;
          (*DAT_101b2668)(&uStack_c0,&fStack_b4,&fStack_a8,0);
          iVar7 = *(int *)(in_ECX + 0x30);
          iVar10 = *local_110;
          fStack_100 = (*(float *)(iVar7 + 0xb48) - fStack_b4 * 13.0) + fStack_a8 * 5.0;
          fStack_e0 = (*(float *)(iVar7 + 0xb4c) - fStack_b0 * 13.0) + fStack_a4 * 5.0;
          fStack_e4 = (*(float *)(iVar7 + 0xb50) - fStack_ac * 13.0) + fStack_a0 * 5.0;
        }
        iStack_ec = 0;
        if (0 < *(int *)(*(int *)(in_ECX + 0x44) + 0x8c)) {
          puStack_108 = (undefined *)0x0;
          do {
            iVar10 = iStack_ec;
            puVar11 = puStack_108 + *(int *)(in_ECX + 0x40a8);
            if (puStack_e8 == (undefined *)0x0) {
              pfVar2 = (float *)*local_110;
              fStack_f4 = *pfVar2;
              fStack_f8 = pfVar2[1];
              fStack_f0 = *(float *)(puVar11 + 0x2c) - pfVar2[2];
            }
            else {
              fStack_f0 = *(float *)(puVar11 + 0x2c) - fStack_e4;
              fStack_f8 = fStack_e0;
              fStack_f4 = fStack_100;
            }
            fStack_f4 = *(float *)(puVar11 + 0xc) - fStack_f4;
            fStack_f8 = *(float *)(puVar11 + 0x1c) - fStack_f8;
            fVar16 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
            fVar17 = (fVar16 / (float)puStack_fc - 1.0) * -1.0;
            fStack_104 = 0.0;
            if (0.0 <= fVar17) {
              fStack_104 = fVar17;
            }
            dVar14 = (double)fVar16;
            fStack_dc = fStack_f4;
            fStack_d8 = fStack_f8;
            fStack_d4 = fStack_f0;
            if (dVar14 < 0.0) {
              __libm_sse2_sqrt_precise();
            }
            else {
              dVar14 = SQRT(dVar14);
            }
            if ((float)dVar14 != 0.0) {
              fVar17 = 1.0 / (float)dVar14;
              fStack_f4 = fStack_f4 * fVar17;
              fStack_f8 = fStack_f8 * fVar17;
              fStack_f0 = fStack_f0 * fVar17;
              fStack_dc = fStack_f4;
              fStack_d8 = fStack_f8;
              fStack_d4 = fStack_f0;
            }
            puVar15 = &DAT_104de718 + (DAT_104ce4b0 * 0x80 + iVar10) * 0xc;
            FUN_100690f0(&fStack_dc,puVar11,puVar15);
            FUN_10094880(puVar15,fStack_104,puVar15);
            iVar7 = iStack_ec;
            iVar10 = *local_110;
            if (*(char *)(iVar10 + 0x3c) != '\0') {
              iVar8 = DAT_104ce4b0 * 0x80 + iStack_ec;
              fVar17 = fStack_98 * fStack_f8 + fStack_9c * fStack_f4 + fStack_94 * fStack_f0;
              if (fStack_cc <= fVar17) {
                FUN_10094880(&DAT_104de718 + iVar8 * 0xc,(fVar17 - fStack_cc) / (1.0 - fStack_cc),
                             &DAT_104de718 + iVar8 * 0xc);
                iVar10 = *local_110;
              }
              else {
                *(undefined4 *)(&DAT_104de718 + iVar8 * 0xc) = 0;
                *(undefined4 *)(&DAT_104de71c + iVar8 * 0xc) = 0;
                *(undefined4 *)(&DAT_104de720 + iVar8 * 0xc) = 0;
              }
            }
            iStack_ec = iVar7 + 1;
            puStack_108 = puStack_108 + 0x30;
            in_ECX = local_c8;
          } while (iStack_ec < *(int *)(*(int *)(local_c8 + 0x44) + 0x8c));
        }
        fVar13 = (float10)FUN_100595f0(*(undefined4 *)(iVar10 + 0x10));
        piVar3 = local_110;
        fStack_104 = (float)(fVar13 * (float10)0.5);
        (&DAT_104e0518)[DAT_104ce4b0 * 3] = fStack_104;
        fVar13 = (float10)FUN_100595f0(*(undefined4 *)(*local_110 + 0x14));
        fStack_104 = (float)(fVar13 * (float10)0.5);
        (&DAT_104e051c)[DAT_104ce4b0 * 3] = fStack_104;
        fVar13 = (float10)FUN_100595f0(*(undefined4 *)(*piVar3 + 0x18));
        iVar10 = DAT_104ce4b0;
        local_110 = piVar3 + 1;
        DAT_104ce4b0 = DAT_104ce4b0 + 1;
        fStack_104 = (float)(fVar13 * (float10)0.5);
        (&DAT_104e0520)[iVar10 * 3] = fStack_104;
        fStack_10c = (float)((int)fStack_10c + 1);
      } while ((int)fStack_10c < iStack_c4);
    }
    iVar10 = *(int *)(*(int *)(in_ECX + 0x30) + 0x304);
    if (iVar10 - 0x1fU < 10) {
      iVar10 = iVar10 + -0x1e;
      iVar7 = 0;
      if (-1 < iVar10) {
        iVar7 = iVar10;
      }
      if (10 < iVar7) {
        iVar7 = 10;
      }
      fVar17 = (float)iVar7 / 10.0;
      DAT_104d26f4._0_4_ = (float)DAT_104d26f4 - fVar17;
      DAT_104d26f4._4_4_ = DAT_104d26f4._4_4_ - fVar17;
      DAT_104d26fc = DAT_104d26fc - fVar17;
    }
  }
LAB_10068744:
  __security_check_cookie(local_c ^ (uint)auStack_118);
  return;
LAB_10067940:
  uVar5 = -(uint)bVar12 | 1;
  goto LAB_10067945;
}

