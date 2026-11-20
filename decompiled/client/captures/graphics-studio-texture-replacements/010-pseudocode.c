
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff550(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  ushort in_FPUControlWord;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM0 [16];
  undefined2 in_XMM1_Wa;
  undefined2 in_XMM1_Wb;
  undefined2 in_XMM1_Wc;
  ushort in_XMM1_Wd;
  double dVar15;
  double dVar16;
  ushort uVar20;
  ushort in_XMM1_Wh;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar26;
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double local_10;
  undefined1 local_8 [8];
  
  local_10 = in_XMM0._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_1010e844();
    return;
  }
  dVar12 = (double)((ulonglong)local_10 >> 0x2c);
  uVar10 = in_XMM0._6_2_;
  uVar2 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)local_10 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_101650a0 + uVar2 * 4);
  dVar14 = *(double *)((int)&DAT_101650a0 + uVar2 * 4);
  dVar13 = *(double *)(&DAT_101654b0 + uVar2 * 8);
  dVar16 = *(double *)(&UNK_101654b8 + uVar2 * 8);
  uVar6 = 0x7fef - uVar10;
  uVar2 = in_XMM0._0_4_;
  uVar8 = in_XMM0._4_4_;
  dVar34 = local_10;
  if ((uVar10 - 0x10 | uVar6) < 0x80000000) {
    uVar6 = 0;
    uVar7 = 0x3fe7f;
LAB_100ff603:
    uVar3 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar31 = (double)((ulonglong)dVar34 & 0xfffffffffffff | DAT_10161240);
    dVar15 = (double)((ulonglong)dVar31 & 0xfffffffff8000000);
    auVar29._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar31 = dVar31 - dVar15;
    uVar4 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_10165cc0 + uVar3 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar33 = dVar14 * *(double *)(&DAT_10165cc0 + uVar3 * 4) *
             *(double *)(&DAT_101668e0 + uVar4 * 4);
    dVar35 = dVar35 * *(double *)(&DAT_10165cc0 + uVar3 * 4) *
             *(double *)(&DAT_101668e0 + uVar4 * 4);
    dVar34 = dVar13 + *(double *)(&DAT_101660d0 + uVar3 * 8) +
             (double)(int)((longlong)dVar12 - (ulonglong)uVar7 >> 8) +
             *(double *)(&DAT_101670f0 + uVar4 * 8);
    dVar13 = (double)((ulonglong)dVar33 & 0xfffffffff8000000);
    dVar33 = dVar33 - dVar13;
    dVar36 = dVar35 + -1.442694902420044;
    dVar12 = dVar34 + dVar36;
    dVar14 = (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    dVar34 = dVar34 - dVar12;
    auVar29._0_8_ = 0xfffffffff8000000;
    uVar7 = (uint)(ushort)((ulonglong)dVar12 >> 0x30);
    dVar13 = (((dVar35 - dVar13 * dVar15) - dVar15 * dVar33) - dVar13 * dVar31) - dVar31 * dVar33;
    dVar15 = dVar36 - dVar13;
    dVar35 = dVar12 - dVar13;
    if ((in_XMM1_Wd & 0x7ff0) < 0x7ff0) {
      iVar5 = ((in_XMM1_Wd & 0x7ff0) - 0x3ff0) + (uVar7 & 0x7ff0);
      if ((0x40a0U - iVar5 | iVar5 - 0x3c70U) < 0x80000000) {
LAB_100ff755:
        dVar31 = (double)((ulonglong)dVar14 & 0xfffffffff8000000);
        dVar32 = (double)((ulonglong)dVar35 & 0xfffffffff8000000);
        dVar33 = dVar31 * dVar32 * 128.0;
        uVar2 = (uint)ROUND(dVar33);
        if (0 < (int)(0x1ff7f - uVar2 | uVar2 + 0x1e1ff)) {
          return;
        }
        if ((int)uVar2 < 1) {
          if ((int)uVar2 < -0x3fdff) {
LAB_100fffb1:
            uVar9 = 0x19;
            goto LAB_100ffd70;
          }
          uVar6 = uVar6 + 0x80;
          uVar8 = (uVar2 & 0xffffff80) + 0x3fe80;
          uVar10 = 0;
        }
        else {
          if (0x3ffff < uVar2) goto LAB_100fffd4;
          uVar6 = uVar6 + 0x3ff00;
          uVar8 = uVar2 - 0x80 & 0xffffff80;
          uVar10 = 0x3ff0;
        }
        iVar5 = (uVar2 & 0x7f) * 0x10;
        uVar2 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
        auVar19._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
        auVar19._8_4_ = 0;
        auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
        dVar27 = *(double *)(&DAT_10168120 + iVar5) * auVar19._0_8_;
        dVar14 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                 dVar31 * (dVar35 - dVar32) + dVar32 * (dVar14 - dVar31) +
                 (dVar35 - dVar32) * (dVar14 - dVar31) +
                 ((dVar15 * 0.16015105075297303 + dVar15 * dVar15 * -0.08325619496072671) *
                  dVar15 * dVar15 +
                  dVar15 * 9.597935033233511e-08 + dVar15 * dVar15 * -0.3465736568077919 +
                 dVar16 + *(double *)(&DAT_101660d8 + uVar3 * 8) +
                 *(double *)(&DAT_101670f8 + uVar4 * 8) +
                 ((dVar34 + dVar36) - (dVar13 - (dVar12 - dVar35)))) *
                 (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
        dVar13 = (double)((ulonglong)uVar6 << 0x2d);
        uVar26 = (ulonglong)(uVar2 + (uVar2 & 0x20));
        dVar16 = (double)(-1L << uVar26 & (ulonglong)dVar27);
        dVar14 = dVar14 * dVar14 * dVar27 *
                 (dVar14 * 0.0013333558146428443 + 0.009618129107628477) * dVar14 * dVar14 +
                 *(double *)(&UNK_10168128 + iVar5) * auVar19._8_8_ +
                 (dVar14 * 0.055504108664821576 + 0.2402265069591007) * dVar14 * dVar14 * dVar27 +
                 dVar14 * 0.6931471805599453 * dVar27;
        dVar34 = (double)((ulonglong)(dVar16 + dVar14) & -1L << uVar26);
        dVar14 = dVar14 + (dVar16 - dVar34) + (dVar27 - dVar16);
        if ((int)(uVar8 - 0x1ff80) < 1) {
          dVar14 = dVar14 * dVar13 + dVar34 * dVar13;
          dVar14 = dVar14 + (double)((ulonglong)uVar10 << 0x30) * dVar14;
          uVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar14 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar9 = 0x19, ((ulonglong)dVar14 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
        else {
          dVar13 = (dVar14 + dVar34) * dVar13;
          dVar13 = dVar13 + (double)((ulonglong)uVar10 << 0x30) * dVar13;
          uVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar13 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar9 = 0x19, ((ulonglong)dVar13 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
      }
      else {
        dVar12 = dVar14 * dVar35;
        uVar2 = (ushort)((ulonglong)dVar12 >> 0x30) & 0x7ff0;
        uVar8 = uVar2 - 0x3c70;
        if ((0x40a0 - uVar2 | uVar8) < 0x80000000) goto LAB_100ff755;
        if (0x7fffffff < uVar8) {
          return;
        }
        if (((in_XMM1_Wd ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_100fffb1;
LAB_100fffd4:
        uVar9 = 0x18;
      }
      goto LAB_100ffd70;
    }
    auVar22._2_2_ = in_XMM1_Wb;
    auVar22._0_2_ = in_XMM1_Wa;
    auVar22._4_2_ = in_XMM1_Wc;
    auVar22._6_2_ = in_XMM1_Wd;
    auVar22._8_8_ = in_XMM2_Qb;
    bVar11 = uVar2 == 0;
    uVar2 = uVar7;
    if (bVar11) {
      if (uVar8 == 0x3ff00000) {
        return;
      }
      uVar2 = uVar8;
      if (uVar8 == 0xbff00000) {
        return;
      }
    }
  }
  else {
    uVar26 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    auVar29._8_8_ = in_XMM3._8_8_;
    auVar29._0_8_ = 0x7fffffffffffffff;
    auVar22._8_8_ = in_XMM2_Qb;
    auVar22._0_8_ = uVar26;
    uVar7 = (uint)(uVar26 >> 0x20) & 0x7fffffff;
    if (uVar7 < 0x7ff00000) {
      if (CONCAT22(in_XMM1_Wb,in_XMM1_Wa) == 0 && (uVar26 & 0x7fffffff00000000) == 0) {
        uVar9 = 0x1a;
        if (uVar2 != 0 || (uVar8 & 0x7fffffff) != 0) {
          uVar9 = 0x1d;
          if (((uVar8 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar8 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0)))) {
            return;
          }
        }
        goto LAB_100ffd70;
      }
      if ((int)uVar6 < 0) {
        auVar28._8_8_ = auVar29._8_8_ << 0x34;
        auVar28._0_8_ = 0xfff0000000000000;
        iVar5 = (uVar7 >> 0x14) - 0x3f3;
        auVar29 = (undefined1  [16])0x0;
        uVar26 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar5) * (short)((uint)iVar5 >> 0x10),
                          (ushort)(-1 < (short)iVar5) * (short)iVar5);
        uVar20 = (in_XMM1_Wh & in_XMM3._14_2_) >> 4;
        lVar21 = SUB168(auVar22 | auVar28,0) << uVar26;
        lVar25 = SUB168(auVar22 | auVar28,8) << uVar26;
        auVar23._0_4_ = -(uint)((int)lVar21 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar7 = 0x7fef - uVar6 & 0x7fff;
        if (0x7fef < uVar7) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)local_10 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)local_10 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if ((uVar10 & 0x8000) == 0) {
              if ((in_XMM1_Wd & 0x8000) == 0) {
                return;
              }
              return;
            }
            if ((bVar1 == 0xff) &&
               (lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa))),
               uVar26 = (ulonglong)
                        ((((uint)((ulonglong)lVar21 >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4),
               lVar21 = lVar21 << uVar26, lVar25 = auVar17._8_8_ << uVar26,
               auVar24._0_4_ = -(uint)((int)lVar21 == 0),
               auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
               auVar24._8_4_ = -(uint)((int)lVar25 == 0),
               auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
               (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                      (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                      (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7) != 0xff
               )) {
              if ((in_XMM1_Wd & 0x8000) != 0) {
                return;
              }
              return;
            }
            if ((in_XMM1_Wd & 0x8000) == 0) {
              return;
            }
            return;
          }
          goto LAB_100ffbf0;
        }
        if (bVar1 == 0xff) {
          lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
          uVar26 = (ulonglong)((((uint)((ulonglong)lVar21 >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4);
          auVar29 = ZEXT816(0x8000000000000000);
          lVar21 = lVar21 << uVar26;
          lVar25 = (ulonglong)(ushort)((-1 < (short)uVar20) * uVar20) << uVar26;
          auVar22._0_4_ = -(uint)((int)lVar21 == 0);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == auVar29._4_4_);
          auVar22._8_4_ = -(uint)((int)lVar25 == 0);
          auVar22._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
          uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar7) {
            uVar7 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_100ff603;
          }
          goto LAB_100ffa0f;
        }
        uVar26 = (ulonglong)local_10 >> 0x20;
        in_XMM2_Qb = auVar23._8_8_ >> 0x20;
        uVar6 = 0;
        uVar7 = 0;
        if (uVar2 != 0 || (uVar8 & 0x7fffffff) != 0) {
          uVar9 = 0x1c;
          goto LAB_100ffd70;
        }
LAB_100ffa95:
        in_XMM3 = auVar29;
        dVar34 = dVar12;
        if ((uVar7 & 0x7fffffff) == 0) {
          if ((in_XMM1_Wd & 0x8000) == 0) {
            if ((uVar7 & uVar6 << 0xd) != 0) {
              return;
            }
            return;
          }
          uVar9 = 0x1b;
          goto LAB_100ffd70;
        }
      }
      else {
        uVar6 = 0;
LAB_100ffa0f:
        dVar35 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar22._8_8_;
        uVar26 = 0x3ff0000000000000;
        dVar12 = local_10 * 1.8446744073709552e+19;
        uVar7 = uVar8;
        in_XMM3 = auVar29;
        dVar34 = dVar12;
        if (uVar2 == 0) goto LAB_100ffa95;
      }
      dVar12 = (double)((ulonglong)ABS(dVar34) >> 0x2c);
      uVar7 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar34 | uVar26) *
               *(double *)((int)&DAT_101650a0 + uVar7 * 4);
      dVar14 = *(double *)((int)&DAT_101650a0 + uVar7 * 4);
      dVar13 = *(double *)(&DAT_101654b0 + uVar7 * 8);
      dVar16 = *(double *)(&UNK_101654b8 + uVar7 * 8);
      uVar7 = 0x43e7f;
      goto LAB_100ff603;
    }
    uVar6 = uVar8;
    if ((0x7fefffff < (uVar8 & 0x7fffffff)) && ((0x7ff00000 < (uVar8 & 0x7fffffff) || (uVar2 != 0)))
       ) {
LAB_100ffbf0:
      uVar9 = 0x3ee;
      goto LAB_100ffd70;
    }
  }
  uVar26 = auVar22._0_8_ & 0xfffffffffffff;
  uVar30 = auVar29._8_8_ & auVar22._8_8_;
  auVar18._0_4_ = -(uint)((int)uVar26 == 0);
  auVar18._4_4_ = -(uint)((int)(uVar26 >> 0x20) == 0);
  auVar18._8_4_ = -(uint)((int)uVar30 == 0);
  auVar18._12_4_ = -(uint)((int)(uVar30 >> 0x20) == 0);
  if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
    if (uVar2 == 0 && uVar6 == 0xbff00000) {
      return;
    }
    if ((auVar22._6_2_ & 0x8000) == 0) {
      if ((uVar10 & 0x7ff0) < 0x3ff0) {
        return;
      }
    }
    else if (0x3fef < (uVar10 & 0x7ff0)) {
      return;
    }
    return;
  }
  uVar9 = 0x3ee;
LAB_100ffd70:
  ___libm_error_support(&local_10,local_8,&stack0xffffffe8,uVar9);
  return;
}

