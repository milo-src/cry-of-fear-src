
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af790(float *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uStack_154;
  float fStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float *pfStack_128;
  undefined4 *puStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [28];
  float fStack_3c;
  
  DAT_1054506c = param_1[0x15];
  if (DAT_1055b5d0 != 0) {
    DAT_1055b5d0 = 0;
    if (DAT_1055b5cc == 0) {
      uVar20 = 0x3f000000;
      uVar19 = 0xbf400000;
    }
    else {
      uVar20 = 0x3f800000;
      uVar19 = 0xc0400000;
    }
    FUN_100ae9a0(uVar19,uVar20,0);
  }
  if ((DAT_10542bb8 != 0) &&
     (((DAT_105458dc != 0.0 || (DAT_105458e0 != 0.0)) || (DAT_105458e4 != 0.0)))) {
    DAT_105458e4 = DAT_105458e4 - 24.0;
    param_1[0x19] = DAT_105458dc;
    param_1[0x1a] = DAT_105458e0;
    param_1[0x1b] = DAT_105458e4;
    *param_1 = DAT_105458dc;
    param_1[1] = DAT_105458e0;
    param_1[2] = DAT_105458e4;
    iVar5 = (*DAT_101b26d8)();
    fVar14 = *(float *)(DAT_10542bb8 + 0x2cc) + DAT_105594fc;
    DAT_105595c0._4_4_ = *(float *)(DAT_10542bb8 + 0x2d0) - _DAT_10559500;
    DAT_105595c8 = *(float *)(DAT_10542bb8 + 0x2d4);
    DAT_105595c0._0_4_ = fVar14;
    param_1[3] = fVar14;
    fVar17 = DAT_105595c0._4_4_;
    param_1[4] = DAT_105595c0._4_4_;
    fVar15 = DAT_105595c8;
    param_1[5] = DAT_105595c8;
    param_1[0x20] = fVar14;
    param_1[0x21] = fVar17;
    param_1[0x22] = fVar15;
    iVar6 = (*DAT_101b26d4)();
    if (iVar6 != 0) {
      *(float *)(iVar6 + 0xb54) = param_1[3];
      *(float *)(iVar6 + 0xb58) = param_1[4];
      *(float *)(iVar6 + 0xb5c) = param_1[5];
      *(float *)(iVar6 + 0x2cc) = param_1[3];
      *(float *)(iVar6 + 0x2d0) = param_1[4];
      *(float *)(iVar6 + 0x2d4) = param_1[5];
    }
    if (iVar5 == 0) {
      puVar11 = (undefined8 *)0xb54;
    }
    else {
      *(ulonglong *)(iVar5 + 0x2c0) = CONCAT44(DAT_105458e0,DAT_105458dc);
      *(float *)(iVar5 + 0x2c8) = DAT_105458e4;
      *(ulonglong *)(iVar5 + 0xb48) = CONCAT44(DAT_105458e0,DAT_105458dc);
      *(float *)(iVar5 + 0xb50) = DAT_105458e4;
      puVar11 = (undefined8 *)(iVar5 + 0xb54);
      *puVar11 = CONCAT44(DAT_105595c0._4_4_,(float)DAT_105595c0);
      *(float *)(iVar5 + 0xb5c) = DAT_105595c8;
    }
    (*DAT_101b2668)(puVar11,&fStack_120,&fStack_f0,&fStack_134);
  }
  iVar5 = (*DAT_101b26d0)();
  if ((iVar5 != 0) || (param_1[0x14] == 0.0)) {
    DAT_10559515 = '\0';
  }
  iVar5 = (*DAT_101b26d0)();
  if (((iVar5 == 0) && (param_1[0x14] != 0.0)) && (DAT_10559515 == '\0')) {
    DAT_10559515 = '\x01';
  }
  DAT_10556b48 = 0.0;
  fVar17 = param_1[0x38];
  if (fVar17 == 1.4013e-45) {
    param_1[0x39] = 1.4013e-45;
    param_1[0x38] = 0.0;
    DAT_10556b48 = fVar17;
    return;
  }
  if ((((fVar17 == 0.0) && (iVar5 = FUN_1008bab0(), iVar5 != 0)) && (DAT_105458b0 == 6)) ||
     ((param_1[0x38] == 0.0 &&
      (((iVar5 = FUN_1008bab0(), iVar5 != 0 && (DAT_105458b0 == 7)) ||
       ((param_1[0x38] == 0.0 &&
        ((iVar5 = FUN_1008bab0(), iVar5 != 0 && ((int)param_1[0x2c] <= (int)param_1[0x2b]))))))))))
  {
    param_1[0x38] = 1.4013e-45;
  }
  DAT_105595fc = param_1[0x24];
  DAT_10559600 = param_1[0x25];
  _DAT_10559604 = param_1[0x26];
  FUN_100b1ff0(param_1);
  iVar5 = (*DAT_101b2768)();
  if (iVar5 == 0) {
    puStack_124 = (undefined4 *)(*DAT_101b26d4)();
  }
  else {
    puStack_124 = (undefined4 *)(*DAT_101b26dc)(DAT_105593bc);
  }
  pfVar7 = (float *)(*DAT_101b26d8)();
  *(undefined1 *)(pfVar7 + 0xc0) = *(undefined1 *)(puStack_124 + 0xc0);
  *(undefined1 *)((int)pfVar7 + 0x301) = *(undefined1 *)((int)puStack_124 + 0x301);
  *(undefined1 *)((int)pfVar7 + 0x302) = *(undefined1 *)((int)puStack_124 + 0x302);
  pfVar7[0xbf] = (float)puStack_124[0xbf];
  if (DAT_1018d220 == 1) {
    _DAT_10559ea8 = pfVar7[0x2e5];
    pfVar7[0x2e5] = 0.0;
  }
  pfStack_128 = pfVar7;
  iVar5 = (*DAT_101b26ec)(pfVar7 + 0x2d2,0);
  if (iVar5 == -3) {
    fVar12 = (float10)(*DAT_101b26e0)();
    _DAT_105595a0 = (float)fVar12;
    DAT_105595a4 = 0x41200000;
    fVar12 = (float10)(*DAT_101b26e0)();
    _DAT_105595a8 = (float)fVar12;
    DAT_105595ac = 0;
  }
  fVar12 = (float10)FUN_100af250(param_1);
  fVar17 = (float)fVar12;
  param_1[3] = param_1[0x20];
  *param_1 = param_1[0x19] + param_1[0x1c];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  param_1[1] = param_1[0x1a] + param_1[0x1d];
  param_1[2] = fVar17 + param_1[0x1b] + param_1[0x1e];
  (*DAT_101b26e4)();
  (*DAT_101b26e8)(param_1,param_1 + 3,0x3f800000);
  if (DAT_105436d8 != 0) {
    *param_1 = *(float *)(DAT_105436d8 + 0xb48);
    param_1[1] = *(float *)(DAT_105436d8 + 0xb4c);
    param_1[2] = *(float *)(DAT_105436d8 + 0xb50);
    if (DAT_105436f8 == 0) {
      fStack_120 = param_1[3];
      fStack_11c = param_1[4];
      fStack_118 = param_1[5];
      (*DAT_101b2668)(&fStack_120,&fStack_fc,&fStack_134,0);
      fStack_108 = *(float *)(DAT_105436d8 + 0xb48) + fStack_fc * 4096.0;
      fStack_104 = *(float *)(DAT_105436d8 + 0xb4c) + fStack_f8 * 4096.0;
      fStack_100 = *(float *)(DAT_105436d8 + 0xb50) + fStack_f4 * 4096.0;
      fStack_148 = fStack_fc * 128.0 + *(float *)(DAT_105436d8 + 0xb48);
      fStack_144 = *(float *)(DAT_105436d8 + 0xb4c) + fStack_f8 * 128.0;
      fStack_140 = *(float *)(DAT_105436d8 + 0xb50) + fStack_f4 * 128.0;
      iVar5 = (*DAT_101b26f4)(&fStack_148,&fStack_108,0,1,0xffffffff);
      if (*(int *)(iVar5 + 0x30) != 0) {
        uVar19 = FUN_10012d30(*(int *)(iVar5 + 0x30));
        iVar5 = (*DAT_101b26dc)(uVar19);
        if (((iVar5 != 0) && (*(short *)(iVar5 + 0x2ea) == 4)) && (*(int *)(iVar5 + 0x304) == 0xa2))
        {
          (*DAT_101b2654)("telescopefinish");
          DAT_105436f8 = 1;
        }
      }
    }
  }
  if ((DAT_10542bbc != 0) &&
     (((DAT_105458d0 != 0.0 || (DAT_105458d4 != 0.0)) || (DAT_105458d8 != 0.0)))) {
    *param_1 = DAT_105458d0;
    param_1[1] = DAT_105458d4;
    param_1[2] = DAT_105458d8;
    param_1[3] = *(float *)(DAT_10542bbc + 0x2cc);
    param_1[4] = *(float *)(DAT_10542bbc + 0x2d0);
    param_1[5] = *(float *)(DAT_10542bbc + 0x2d4);
  }
  pfVar8 = param_1 + 3;
  if ((DAT_10542bc0 == 0) || (DAT_10542bb3 == '\0')) {
    if (DAT_104ce4a3 != '\0') goto LAB_100afe9c;
  }
  else {
    if (DAT_104ce4a3 == '\0') {
      _DAT_10542bc8 = 0;
      *param_1 = DAT_10550324;
      param_1[1] = DAT_10550328;
      param_1[2] = DAT_1055032c;
      *pfVar8 = DAT_1055033c;
      param_1[4] = DAT_10550340;
      fVar15 = DAT_10550344;
    }
    else {
LAB_100afe9c:
      *pfVar8 = DAT_1055033c + *pfVar8;
      param_1[4] = DAT_10550340 + param_1[4];
      fVar15 = DAT_10550344 + param_1[5];
    }
    param_1[5] = fVar15;
    if (DAT_10559514 == '\0') {
      DAT_10559514 = '\x01';
      (*DAT_101b2694)(pfVar8);
    }
  }
  _DAT_10542bc8 = 0;
  *param_1 = *param_1 + 0.03125;
  param_1[1] = param_1[1] + 0.03125;
  fVar15 = param_1[2] + 0.03125;
  fStack_150 = 0.0;
  param_1[2] = fVar15;
  if (1 < (int)param_1[0x15]) {
    fStack_150 = (float)(int)*(float *)(DAT_10559584 + 0xc);
    if ((((param_1[0x30] != 0.0) && (iVar5 = (*DAT_101b26f0)(param_1 + 0x19), -1 < iVar5)) &&
        (iVar5 < (int)param_1[0x2e])) &&
       ((iVar5 = (*DAT_101b26dc)(iVar5), iVar5 != 0 && (*(int *)(iVar5 + 0xb94) != 0)))) {
      fStack_150 = (float)(int)(*(float *)(iVar5 + 0x2f0) * 16.0 + (float)(int)fStack_150);
    }
    fStack_148 = *param_1;
    fStack_144 = param_1[1];
    uStack_154 = 0;
    if (param_1[0x15] == 2.8026e-45) {
      fStack_140 = param_1[2] - (float)(int)fStack_150;
      if (0 < (int)fStack_150) {
        do {
          iVar5 = (*DAT_101b26ec)(&fStack_148,0);
          if (-3 < iVar5) break;
          fStack_140 = fStack_140 + 1.0;
          uStack_154 = uStack_154 + 1;
        } while ((int)uStack_154 < (int)fStack_150);
      }
      fStack_150 = fStack_140 + (float)(int)fStack_150;
    }
    else {
      fStack_140 = param_1[2] + (float)(int)fStack_150;
      if (0 < (int)fStack_150) {
        do {
          iVar5 = (*DAT_101b26ec)(&fStack_148,0);
          if (iVar5 < -2) break;
          fStack_140 = fStack_140 - 1.0;
          uStack_154 = uStack_154 + 1;
        } while ((int)uStack_154 < (int)fStack_150);
      }
      fStack_150 = fStack_140 - (float)(int)fStack_150;
    }
    fVar15 = param_1[2];
    fStack_150 = fStack_150 - fVar15;
  }
  param_1[2] = fVar15 + fStack_150;
  FUN_100b1f60(param_1);
  FUN_100af160(param_1);
  fStack_d0 = param_1[0x20];
  fStack_cc = param_1[0x21];
  fStack_c8 = param_1[0x22];
  (*DAT_101b2668)(&fStack_d0,param_1 + 6,param_1 + 9,param_1 + 0xc);
  _DAT_1018d258 = param_1[3];
  _DAT_1018d25c = param_1[4];
  _DAT_1018d260 = param_1[5];
  _DAT_1018d264 = param_1[0x10];
  _DAT_1018d268 = param_1[0xf];
  if (DAT_1018d228 != 0) {
    *param_1 = DAT_1018d22c;
    param_1[1] = DAT_1018d230;
    param_1[2] = DAT_1018d234;
    FUN_10094770(param_1,DAT_1018d244 ^ 0x80000000,param_1 + 6,param_1);
    FUN_10094770(param_1,DAT_1018d248,param_1 + 0xc,param_1);
  }
  iVar3 = DAT_10559560;
  iVar6 = DAT_1055955c;
  iVar5 = DAT_10559558;
  if ((int)param_1[0x2b] < 2) {
    *param_1 = *(float *)(DAT_1055955c + 0xc) * param_1[9] +
               param_1[6] * *(float *)(DAT_10559558 + 0xc) +
               param_1[0xc] * *(float *)(DAT_10559560 + 0xc) + *param_1;
    param_1[1] = param_1[10] * *(float *)(iVar6 + 0xc) + param_1[7] * *(float *)(iVar5 + 0xc) +
                 param_1[0xd] * *(float *)(iVar3 + 0xc) + param_1[1];
    param_1[2] = param_1[0xb] * *(float *)(iVar6 + 0xc) + param_1[8] * *(float *)(iVar5 + 0xc) +
                 param_1[0xe] * *(float *)(iVar3 + 0xc) + param_1[2];
  }
  iVar5 = CL_IsThirdPerson();
  if (iVar5 != 0) {
    fStack_148 = *param_1;
    fStack_144 = param_1[1];
    fStack_140 = param_1[2];
    fStack_100 = 0.0;
    fStack_104 = 0.0;
    fStack_108 = 0.0;
    CL_CameraOffset(&fStack_108);
    fStack_dc = fStack_108;
    fStack_d8 = fStack_104;
    fStack_d4 = 0.0;
    (*DAT_101b2668)(&fStack_dc,&fStack_c4,auStack_64,auStack_70);
    fStack_fc = *param_1 - fStack_c4 * fStack_100;
    fStack_f8 = param_1[1] - fStack_c0 * fStack_100;
    *param_1 = fStack_fc;
    fStack_fc = fStack_fc - fStack_148;
    param_1[1] = fStack_f8;
    fStack_f8 = fStack_f8 - fStack_144;
    fStack_f4 = param_1[2] - fStack_bc * fStack_100;
    param_1[2] = fStack_f4;
    fStack_f4 = fStack_f4 - fStack_140;
    FUN_100947c0(&fStack_fc);
    fStack_13c = fStack_fc * 16.0;
    fVar15 = fStack_f8 * 16.0;
    fStack_138 = fStack_f4 * 16.0;
    fStack_120 = *param_1 + fStack_13c;
    fStack_11c = param_1[1] + fVar15;
    fStack_118 = param_1[2] + fStack_138;
    (**(code **)(DAT_101b2758 + 0x2c))();
    while( true ) {
      (**(code **)(DAT_101b2758 + 0x38))(2);
      (**(code **)(DAT_101b2758 + 0x3c))(&fStack_148,&fStack_120,8,0xffffffff,auStack_b8);
      if (fStack_a8 != 0.0) break;
      fStack_140 = fStack_140 - 1.0;
    }
    *param_1 = fStack_a4 - fStack_13c;
    param_1[1] = fStack_a0 - fVar15;
    param_1[2] = fStack_9c - fStack_138;
    iVar5 = (*DAT_101b26ec)(param_1,0);
    while (iVar5 == -6) {
      fStack_13c = fStack_144 - fStack_11c;
      fStack_138 = fStack_148 - fStack_120;
      fVar15 = fStack_140 - fStack_118;
      dVar13 = (double)(fStack_13c * fStack_13c + fStack_138 * fStack_138 + fVar15 * fVar15);
      if (dVar13 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      fVar14 = 1.0;
      if ((float)dVar13 == 0.0) {
        fVar16 = 0.0;
        fVar18 = 0.0;
      }
      else {
        fVar14 = 1.0 / (float)dVar13;
        fVar16 = fVar14 * fStack_138;
        fVar18 = fVar14 * fStack_13c;
        fVar14 = fVar14 * fVar15;
      }
      *param_1 = fVar16 + *param_1;
      param_1[2] = fVar14 + param_1[2];
      param_1[1] = param_1[1] + fVar18;
      iVar5 = (*DAT_101b26ec)(param_1,0);
    }
    fStack_e8 = param_1[2] + 4096.0;
    fStack_12c = param_1[2] - 8.0;
    fStack_f0 = *param_1 + 0.0;
    fStack_ec = param_1[1] + 0.0;
    fStack_134 = *param_1 - 0.0;
    fStack_130 = param_1[1] - 0.0;
    (**(code **)(DAT_101b2758 + 0x3c))(&fStack_134,&fStack_f0,8,0xffffffff,auStack_58);
    if (fStack_9c == fStack_3c) {
      param_1[2] = param_1[2] - 20.0;
    }
    (**(code **)(DAT_101b2758 + 0x30))();
  }
  pfVar7[0x2d5] = param_1[0x20];
  pfVar7[0x2d6] = param_1[0x21];
  pfVar7[0x2d7] = param_1[0x22];
  FUN_100af400(param_1);
  fVar15 = param_1[0x19];
  pfVar8 = pfVar7 + 0x2d2;
  *pfVar8 = fVar15;
  fVar14 = param_1[0x1a];
  pfVar7[0x2d3] = fVar14;
  fVar16 = param_1[0x1b];
  pfVar7[0x2d4] = fStack_150 + fVar16;
  *pfVar8 = fVar15 + param_1[0x1c];
  pfVar7[0x2d3] = fVar14 + param_1[0x1d];
  pfVar7[0x2d4] = fStack_150 + fVar16 + param_1[0x1e];
  (*DAT_101b26e8)(pfVar8,pfVar7 + 0x2d5,0x3f666666);
  fVar14 = fVar17 * 0.4;
  fVar18 = param_1[6] * fVar14 + pfVar7[0x2d5];
  pfVar7[0x2d5] = fVar18;
  fVar16 = param_1[7] * fVar14 + pfVar7[0x2d6];
  pfVar7[0x2d6] = fVar16;
  fVar15 = param_1[8];
  pfVar7[0x2d6] = fVar16 - fVar17 * 0.5;
  pfVar7[0x2d7] = (fVar15 * fVar14 + pfVar7[0x2d7]) - fVar17;
  pfVar7[0x2d5] = fVar18 - fVar17 * 0.3;
  fVar15 = (pfVar7[0x2d4] + fVar17) - 1.0;
  pfVar7[0x2d4] = fVar15;
  fVar17 = param_1[0x27];
  if (fVar17 == 110.0) {
LAB_100b0828:
    fVar15 = fVar15 + 1.0;
LAB_100b082c:
    pfVar7[0x2d4] = fVar15;
  }
  else {
    if (fVar17 == 100.0) {
      fVar15 = fVar15 + 2.0;
      goto LAB_100b082c;
    }
    if (fVar17 == 90.0) goto LAB_100b0828;
    if (fVar17 == 80.0) {
      pfVar7[0x2d4] = fVar15 + 0.5;
    }
  }
  fVar17 = param_1[5];
  fVar15 = param_1[3];
  fVar14 = param_1[4];
  param_1[5] = param_1[0x2a] + fVar17;
  param_1[3] = param_1[0x28] + fVar15;
  param_1[4] = param_1[0x29] + fVar14;
  param_1[3] = param_1[0x28] + fVar15 + DAT_105595b4;
  param_1[4] = param_1[0x29] + fVar14 + DAT_105595b8;
  param_1[5] = param_1[0x2a] + fVar17 + DAT_105595bc;
  FUN_100b2140(param_1[0xf],&DAT_105595b4);
  if ((param_1[0x31] == 0.0) && (param_1[0x14] != 0.0)) {
    fVar17 = param_1[0x1b];
    if (0.0 < fVar17 - DAT_10559ea0) {
      fVar15 = 0.0;
      if (0.0 <= param_1[0x10] - _DAT_10559ea4) {
        fVar15 = param_1[0x10] - _DAT_10559ea4;
      }
      DAT_10559ea0 = fVar15 * 150.0 + DAT_10559ea0;
      if (fVar17 < DAT_10559ea0) {
        DAT_10559ea0 = fVar17;
      }
      if (18.0 < fVar17 - DAT_10559ea0) {
        DAT_10559ea0 = fVar17 - 18.0;
      }
      fVar15 = DAT_10559ea0 - fVar17;
      param_1[2] = (DAT_10559ea0 - fVar17) + param_1[2];
      pfVar7[0x2d4] = fVar15 + pfVar7[0x2d4];
      fStack_12c = param_1[0x1b];
      goto LAB_100b0977;
    }
  }
  fStack_12c = param_1[0x1b];
  DAT_10559ea0 = fStack_12c;
LAB_100b0977:
  fStack_134 = param_1[0x19] - _DAT_10559eac;
  fStack_12c = fStack_12c - _DAT_10559eb4;
  fStack_130 = param_1[0x1a] - _DAT_10559eb0;
  fVar12 = (float10)FUN_10094510(&fStack_134);
  fStack_138 = (float)fVar12;
  if (fStack_138 != 0.0) {
    *(float *)(&DAT_10559698 + (DAT_10559e98 & 0x3f) * 0xc) = param_1[0x19];
    *(float *)(&DAT_1055969c + (DAT_10559e98 & 0x3f) * 0xc) = param_1[0x1a];
    *(float *)(&DAT_105596a0 + (DAT_10559e98 & 0x3f) * 0xc) = param_1[0x1b];
    *(float *)(&DAT_10559998 + (DAT_10559e98 & 0x3f) * 4) = param_1[0x10];
    DAT_10559e98 = DAT_10559e98 + 1;
    _DAT_10559eac = param_1[0x19];
    _DAT_10559eb0 = param_1[0x1a];
    _DAT_10559eb4 = param_1[0x1b];
  }
  if ((((DAT_1054338c != 0) && (*(float *)(DAT_1054338c + 0xc) != 0.0)) && (param_1[0x31] != 0.0))
     && (1 < (int)param_1[0x2b])) {
    if (*(float *)(DAT_1054338c + 0xc) < 0.0) {
      (*DAT_101b269c)("cl_vsmoothing",0);
    }
    iVar5 = 1;
    fVar17 = param_1[0x10] - *(float *)(DAT_1054338c + 0xc);
    uVar9 = DAT_10559e98 - 3;
    do {
      uStack_154 = uVar9 + 1;
      if (*(float *)(&DAT_10559998 + (uVar9 + 1 & 0x3f) * 4) <= fVar17) {
LAB_100b0b13:
        uVar9 = uStack_154 & 0x3f;
        fVar15 = *(float *)(&DAT_10559998 + uVar9 * 4);
        if (fVar15 != 0.0) {
          uVar10 = uStack_154 + 1 & 0x3f;
          if (0.0 < *(float *)(&DAT_10559998 + uVar10 * 4) - fVar15) {
            iVar5 = uVar10 * 0xc;
            fVar15 = (fVar17 - fVar15) / (*(float *)(&DAT_10559998 + uVar10 * 4) - fVar15);
            fVar17 = 1.0;
            if (fVar15 <= 1.0) {
              fVar17 = fVar15;
            }
            fStack_120 = *(float *)(&DAT_10559698 + iVar5) - *(float *)(&DAT_10559698 + uVar9 * 0xc)
            ;
            fStack_11c = *(float *)(&DAT_1055969c + iVar5) - *(float *)(&DAT_1055969c + uVar9 * 0xc)
            ;
            fStack_118 = *(float *)(&DAT_105596a0 + iVar5) - *(float *)(&DAT_105596a0 + uVar9 * 0xc)
            ;
            FUN_10094770(&DAT_10559698 + uVar9 * 0xc,fVar17,&fStack_120,&fStack_134);
            fVar12 = (float10)FUN_10094510(&fStack_120);
            fStack_138 = (float)fVar12;
            if (fStack_138 < 64.0) {
              fVar14 = fStack_134 - param_1[0x19];
              fVar15 = fStack_130 - param_1[0x1a];
              fVar17 = fStack_12c - param_1[0x1b];
              param_1[0x19] = fVar14 + param_1[0x19];
              param_1[0x1a] = fVar15 + param_1[0x1a];
              param_1[0x1b] = fVar17 + param_1[0x1b];
              *param_1 = *param_1 + fVar14;
              param_1[1] = param_1[1] + fVar15;
              param_1[2] = fVar17 + param_1[2];
              pfVar7[0x2d3] = fVar15 + pfVar7[0x2d3];
              pfVar7[0x2d4] = fVar17 + pfVar7[0x2d4];
              pfVar7[0x2d2] = pfVar7[0x2d2] + fVar14;
            }
          }
        }
        break;
      }
      if (*(float *)(&DAT_10559998 + (uVar9 & 0x3f) * 4) <= fVar17) {
        uStack_154 = uVar9;
        if (iVar5 + 1 < 0x3f) goto LAB_100b0b13;
        break;
      }
      iVar5 = iVar5 + 2;
      uVar9 = uVar9 - 2;
    } while (iVar5 < 0x3f);
  }
  DAT_1055962c._4_4_ = param_1[4];
  DAT_10559634 = param_1[5];
  DAT_1055962c._0_4_ = param_1[3];
  DAT_105595e4._4_4_ = param_1[4];
  DAT_105595ec = param_1[5];
  DAT_105595e4._0_4_ = param_1[3];
  iVar5 = CL_IsThirdPerson();
  if (iVar5 != 0) {
    param_1[4] = fStack_d8;
    param_1[3] = fStack_dc;
    param_1[5] = fStack_d4;
    if (fStack_dc <= 180.0) {
      fVar17 = fStack_dc;
      if (fStack_dc < -180.0) {
        fVar17 = fStack_dc + 360.0;
      }
    }
    else {
      fVar17 = fStack_dc - 360.0;
    }
    fVar17 = fVar17 / -3.0;
    puStack_124[0x2d5] = fVar17;
    puStack_124[0xb3] = fVar17;
    puStack_124[0x5e] = fVar17;
    puStack_124[0x2ca] = fVar17;
  }
  if (((int)param_1[0x2b] < (int)param_1[0x2c]) &&
     (iVar5 = (*DAT_101b26dc)(param_1[0x2c]), iVar5 != 0)) {
    if ((DAT_101905e0 == -1) || (DAT_101905e4 == -1)) {
      *param_1 = *(float *)(iVar5 + 0xb48);
      param_1[1] = *(float *)(iVar5 + 0xb4c);
      param_1[2] = *(float *)(iVar5 + 0xb50);
      DAT_1055962c._0_4_ = *(float *)(iVar5 + 0xb54);
      param_1[3] = (float)DAT_1055962c;
      DAT_1055962c._4_4_ = *(float *)(iVar5 + 0xb58);
      param_1[4] = DAT_1055962c._4_4_;
      DAT_10559634 = *(float *)(iVar5 + 0xb5c);
      param_1[5] = DAT_10559634;
    }
    else {
      *param_1 = DAT_10550f00;
      param_1[1] = DAT_10550f04;
      param_1[2] = DAT_10550f08;
    }
  }
  _DAT_10559ea4 = param_1[0x10];
  DAT_10559638._4_4_ = param_1[1];
  DAT_10559640 = param_1[2];
  DAT_10559638._0_4_ = *param_1;
  FUN_10093bc0();
  DAT_1055956c = param_1[0x15];
  fVar12 = (float10)(*DAT_101b26e0)(pfVar7,0);
  FUN_100ad9d0(param_1,pfVar7 + 0x2d2,pfVar7 + 0x2d5,param_1[0xf],(float)fVar12);
  FUN_100adec0(param_1[0xf],pfVar7 + 0x2d2,pfVar7 + 0x2d5,&DAT_1055962c,pfVar7,0);
  fStack_f0 = 0.4;
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  uStack_e4 = 0;
  if ((((DAT_10559510 == 0) && (DAT_105458b0 == 3)) &&
      ((DAT_10545864 == 10 &&
       (((cVar4 = FUN_10072710(), cVar4 == '\0' && (DAT_10542bbc == 0)) && (DAT_10542bb8 == 0))))))
     && (DAT_105436d8 == 0)) {
    iVar5 = (*DAT_101b26f4)(&DAT_10550318,&DAT_10550330,0,1,0xffffffff);
    if (((DAT_10550648 == 0) && (DAT_10550649 == 0)) &&
       ((DAT_1055064a == 0 && ((DAT_10550644 == 0xff || (DAT_10550644 == 0)))))) {
      puVar11 = (undefined8 *)FUN_1005c0f0(0xffffffce);
      *puVar11 = *(undefined8 *)(iVar5 + 0x14);
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = (*DAT_101b2718)(0xfffffffb,5);
      *(float *)((int)puVar11 + 0xc) = (float)(iVar5 + 0xdc);
      fVar12 = (float10)(*DAT_101b26e0)();
      fStack_12c = 0.4;
      puVar11[2] = CONCAT44(fStack_f0,fStack_f0);
      *(float *)((int)puVar11 + 0x1c) = (float)(fVar12 + (float10)0.01);
      *(undefined4 *)(puVar11 + 3) = 0x3ecccccd;
    }
    else {
      uVar9 = (uint)DAT_10550649;
      fStack_120 = (float)(DAT_10550648 / 0xff);
      uVar10 = (uint)DAT_1055064a;
      fStack_11c = 0.0;
      fStack_118 = 0.0;
      uStack_114 = 0;
      puVar11 = (undefined8 *)FUN_1005c0f0(0xffffffce);
      *puVar11 = *(undefined8 *)(iVar5 + 0x14);
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = (*DAT_101b2718)(0xfffffffb,5);
      *(float *)((int)puVar11 + 0xc) = (float)(iVar5 + DAT_10550644);
      fVar12 = (float10)(*DAT_101b26e0)();
      fStack_12c = (float)(uVar10 / 0xff);
      *(float *)((int)puVar11 + 0x1c) = (float)(fVar12 + (float10)0.01);
      puVar11[2] = CONCAT44((float)(uVar9 / 0xff),fStack_120);
      *(float *)(puVar11 + 3) = fStack_12c;
      pfVar7 = pfStack_128;
    }
  }
  if ((pfVar7[0x2e5] != 0.0) && (DAT_10559510 == 0)) {
    fStack_13c = (float)(*DAT_101b26d4)();
    iVar5 = DAT_1018d578;
    if (((DAT_10542bbc == 0) &&
        ((((DAT_1018d578 != 0 && (DAT_10542bb8 == 0)) && (DAT_105436d8 == 0)) &&
         ((cVar4 = FUN_10072710(), cVar4 == '\0' && (fStack_13c != 0.0)))))) &&
       ((*(int *)(iVar5 + 0x9c) == 10 || (DAT_10545868 == 10)))) {
      iVar6 = (*DAT_101b26f4)(pfVar7 + 0x2d8,pfVar7 + 0x2db,0,1,0xffffffff);
      if (((*(byte *)(pfVar7 + 0xc0) == 0) && (*(char *)((int)pfVar7 + 0x301) == '\0')) &&
         ((*(char *)((int)pfVar7 + 0x302) == '\0' &&
          ((pfVar7[0xbf] == 3.57331e-43 || (pfVar7[0xbf] == 0.0)))))) {
        puVar11 = (undefined8 *)FUN_1005c0f0(*puStack_124);
        *puVar11 = *(undefined8 *)(iVar6 + 0x14);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar6 + 0x1c);
        iVar6 = (*DAT_101b2718)(0xfffffffb,5);
        *(float *)((int)puVar11 + 0xc) = (float)(iVar6 + 0xdc);
        fVar12 = (float10)(*DAT_101b26e0)();
        fStack_12c = 0.4;
        puVar11[2] = CONCAT44(fStack_f0,fStack_f0);
        *(float *)((int)puVar11 + 0x1c) = (float)(fVar12 + (float10)0.01);
        *(undefined4 *)(puVar11 + 3) = 0x3ecccccd;
      }
      else {
        bVar1 = *(byte *)((int)pfVar7 + 0x301);
        fStack_f0 = (float)(*(byte *)(pfVar7 + 0xc0) / 0xff);
        bVar2 = *(byte *)((int)pfVar7 + 0x302);
        fStack_ec = 0.0;
        fStack_e8 = 0.0;
        uStack_e4 = 0;
        puVar11 = (undefined8 *)FUN_1005c0f0(*pfStack_128);
        *puVar11 = *(undefined8 *)(iVar6 + 0x14);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar6 + 0x1c);
        iVar6 = (*DAT_101b2718)(0xfffffffb,5);
        *(float *)((int)puVar11 + 0xc) = (float)(iVar6 + (int)pfStack_128[0xbf]);
        fVar12 = (float10)(*DAT_101b26e0)();
        fStack_12c = (float)(bVar2 / 0xff);
        *(float *)((int)puVar11 + 0x1c) = (float)(fVar12 + (float10)0.01);
        puVar11[2] = CONCAT44((float)(bVar1 / 0xff),fStack_f0);
        *(float *)(puVar11 + 3) = fStack_12c;
        pfVar7 = pfStack_128;
      }
    }
    if (((((DAT_10559510 == 0) && (DAT_10542bbc == 0)) && (DAT_10542bb8 == 0)) &&
        (((DAT_105436d8 == 0 && (cVar4 = FUN_10072710(), cVar4 == '\0')) &&
         ((fStack_13c != 0.0 && ((((byte)DAT_1018a41c & 0x10) != 0 && (iVar5 != 0)))))))) &&
       ((*(int *)(iVar5 + 0x9c) == 0xd ||
        ((*(int *)(iVar5 + 0x9c) == 0x19 || (DAT_10545868 == 0xd)))))) {
      puVar11 = (undefined8 *)FUN_1005c0f0(*puStack_124);
      fVar12 = (float10)(*DAT_101b2714)(0xbf000000,0x3f000000);
      fStack_138 = (float)fVar12;
      fVar12 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3d4ccccd);
      *puVar11 = *(undefined8 *)(pfVar7 + 0x2d8);
      fStack_13c = (float)fVar12;
      *(float *)(puVar11 + 1) = pfVar7[0x2da];
      iVar6 = (*DAT_101b2718)(0xfffffff1,0xf);
      *(float *)((int)puVar11 + 0xc) = (float)(iVar6 + 0xdc);
      fVar12 = (float10)(*DAT_101b26e0)();
      fStack_12c = fStack_13c + 0.1;
      *(float *)((int)puVar11 + 0x1c) = (float)(fVar12 + (float10)0.01);
      if (*(int *)(iVar5 + 0x9c) == 0x19) {
        puVar11[2] = CONCAT44(fStack_13c + 0.6,fStack_138 + 1.15);
        *(float *)(puVar11 + 3) = fStack_12c;
      }
      else {
        puVar11[2] = CONCAT44(fStack_13c + 0.2,fStack_138 + 1.15);
        *(float *)(puVar11 + 3) = fStack_12c;
        FUN_1004bc30(pfVar7,0,1,0x3e99999a);
      }
    }
  }
  iVar5 = (*DAT_101b26d4)();
  if ((((DAT_10559510 == 0) && (DAT_10542bc0 == 0 || DAT_10542bc4 != 0)) && (DAT_10542bbc == 0)) &&
     (((DAT_10542bb8 == 0 && (DAT_105436d8 == 0)) &&
      ((cVar4 = FUN_10072710(), cVar4 == '\0' &&
       ((iVar5 != 0 && (((byte)DAT_1018a41c & 0x40) != 0)))))))) {
    puVar11 = (undefined8 *)FUN_1005c0f0(0);
    *puVar11 = *(undefined8 *)(iVar5 + 0xb48);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar5 + 0xb50);
    *(undefined4 *)((int)puVar11 + 0xc) = 0x44610000;
    *(undefined4 *)(puVar11 + 2) = 0x3dcccccd;
    *(undefined4 *)((int)puVar11 + 0x14) = 0x3f666666;
    *(undefined4 *)(puVar11 + 3) = 0x3dcccccd;
    *(float *)((int)puVar11 + 0x1c) = param_1[0x10] + 0.01;
  }
  fStack_13c = (float)(*DAT_101b26d8)();
  if (((fStack_13c != 0.0) && (DAT_1018d26c != 0)) &&
     (((DAT_1018d578 != 0 && (*(int *)(DAT_1018d578 + 0x9c) == 1)) || (DAT_10545868 == 1)))) {
    fStack_138 = (float)(*DAT_101b26d4)();
    pfVar8 = (float *)((int)fStack_13c + 0xb6c);
    pfStack_128 = (float *)((int)fStack_13c + 0xb60);
    iVar5 = (*DAT_101b26f4)(pfStack_128,pfVar8,0,1,0xffffffff);
    if ((((((DAT_10542bbc == 0) && (DAT_10542bb8 == 0)) && (DAT_105436d8 == 0)) &&
         ((cVar4 = FUN_10072710(), cVar4 == '\0' && (fStack_138 != 0.0)))) && (iVar5 != -0x14)) &&
       (iVar6 = (*DAT_101b26d8)(), iVar6 != 0)) {
      fStack_148 = *pfVar8 - *pfStack_128;
      fStack_144 = *(float *)((int)fStack_13c + 0xb70) - *(float *)((int)fStack_13c + 0xb64);
      fStack_140 = *(float *)((int)fStack_13c + 0xb74) - *(float *)((int)fStack_13c + 0xb68);
      FUN_100945e0(&fStack_148,&fStack_148);
      fStack_148 = -fStack_148;
      FUN_100ae540(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18),
                   *(undefined4 *)(iVar5 + 0x1c),fStack_148,fStack_144,fStack_140,param_1[0x10],
                   param_1[0xf]);
    }
  }
  FUN_100aea10(pfVar7[0x2db],pfVar7[0x2dc],pfVar7[0x2dd],param_1[3],param_1[4],param_1[5],
               param_1[0x10],param_1[0xf]);
  FUN_100aee70(pfVar7[0x2db],pfVar7[0x2dc],pfVar7[0x2dd],param_1[3],param_1[4],param_1[5],
               param_1[0x10],param_1[0xf]);
  if (DAT_105458b0 == 3) {
    _DAT_10550e90 = pfVar7[0x2d2];
    _DAT_10550e94 = pfVar7[0x2d3];
    _DAT_10550e98 = pfVar7[0x2d4];
    _DAT_10550608 = pfVar7[0x2d2];
    _DAT_1055060c = pfVar7[0x2d3];
    _DAT_10550610 = pfVar7[0x2d4];
    _DAT_10550e9c = pfVar7[0x2d5];
    _DAT_10550ea0 = pfVar7[0x2d6];
    _DAT_10550ea4 = pfVar7[0x2d7];
    _DAT_10550614 = pfVar7[0x2d5];
    _DAT_10550618 = pfVar7[0x2d6];
    _DAT_1055061c = pfVar7[0x2d7];
    fVar12 = (float10)(*DAT_101b26e0)(&DAT_10550348,1);
    FUN_100ad9d0(param_1,&DAT_10550e90,&DAT_10550e9c,param_1[0xf],(float)fVar12);
    FUN_100adec0(param_1[0xf],&DAT_10550e90,&DAT_10550e9c,&DAT_10550e9c,&DAT_10550348,1);
  }
  return;
}

