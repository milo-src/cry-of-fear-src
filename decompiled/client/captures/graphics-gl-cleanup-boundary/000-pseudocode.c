
undefined1 (*) [16] FUN_100d3cf0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cVar21;
  undefined1 auVar22 [16];
  undefined1 auVar20 [15];
  
  if (DAT_10559ed8 == 0) {
    cVar21 = (*param_2)[0];
    if (cVar21 == '\0') {
      return param_1;
    }
    if ((*param_2)[1] == '\0') {
      while (((uint)param_1 & 3) != 0) {
        puVar3 = *param_1;
        if (*puVar3 == cVar21) {
          return param_1;
        }
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        if (*puVar3 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
      }
      while( true ) {
        while( true ) {
          uVar13 = *(uint *)*param_1;
          uVar12 = uVar13 ^ CONCAT22(CONCAT11(cVar21,cVar21),CONCAT11(cVar21,cVar21));
          uVar8 = uVar13 ^ 0xffffffff ^ uVar13 + 0x7efefeff;
          pauVar6 = (undefined1 (*) [16])(*param_1 + 4);
          if (((uVar12 ^ 0xffffffff ^ uVar12 + 0x7efefeff) & 0x81010100) != 0) break;
          param_1 = pauVar6;
          if ((uVar8 & 0x81010100) != 0) {
            if ((uVar8 & 0x1010100) != 0) {
              return (undefined1 (*) [16])0x0;
            }
            if ((uVar13 + 0x7efefeff & 0x80000000) == 0) {
              return (undefined1 (*) [16])0x0;
            }
          }
        }
        uVar1 = *(undefined4 *)*param_1;
        if ((char)uVar1 == cVar21) {
          return param_1;
        }
        if ((char)uVar1 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
        cVar5 = (char)((uint)uVar1 >> 8);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 1);
        }
        if (cVar5 == '\0') break;
        cVar5 = (char)((uint)uVar1 >> 0x10);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 2);
        }
        if (cVar5 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
        cVar5 = (char)((uint)uVar1 >> 0x18);
        if (cVar5 == cVar21) {
          return (undefined1 (*) [16])(*param_1 + 3);
        }
        param_1 = pauVar6;
        if (cVar5 == '\0') {
          return (undefined1 (*) [16])0x0;
        }
      }
      return (undefined1 (*) [16])0x0;
    }
    do {
      cVar5 = (*param_1)[0];
      pauVar6 = (undefined1 (*) [16])(*param_1 + 1);
      do {
        while (param_1 = pauVar6, cVar5 != cVar21) {
          if (cVar5 == '\0') {
            return (undefined1 (*) [16])0x0;
          }
          pauVar6 = (undefined1 (*) [16])(*param_1 + 1);
          cVar5 = (*param_1)[0];
        }
        cVar5 = (*param_1)[0];
        pauVar6 = (undefined1 (*) [16])(*param_1 + 1);
        pauVar11 = param_2;
      } while (cVar5 != (*param_2)[1]);
      do {
        if ((*pauVar11)[2] == '\0') {
LAB_100d3f46:
          return (undefined1 (*) [16])(param_1[-1] + 0xf);
        }
        if ((*pauVar6)[0] != (*pauVar11)[2]) break;
        puVar3 = *pauVar11;
        if (puVar3[3] == '\0') goto LAB_100d3f46;
        puVar4 = *pauVar6;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 2);
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 2);
      } while (puVar3[3] == puVar4[1]);
    } while( true );
  }
  if (1 < DAT_10559ed8) {
    if ((*param_2)[0] == '\0') {
      return param_1;
    }
    if (0xff0 < ((uint)param_2 & 0xfff)) {
      iVar10 = 0xf;
      pauVar6 = param_2;
      do {
        puVar3 = *pauVar6;
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
        do {
          auVar22._0_8_ = in_XMM0._0_8_;
          auVar22._8_8_ = in_XMM0._8_8_ & 0xffffffffffffff | (ulonglong)(byte)*puVar3 << 0x38;
          in_XMM0 = auVar22 >> 8;
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_100d3e4d;
        } while (*puVar3 == 0);
      } while( true );
    }
    in_XMM0 = *param_2;
LAB_100d3e4d:
    do {
      pauVar11 = param_1;
      pauVar6 = param_2;
      if (((uint)pauVar11 & 0xfff) < 0xff1) goto LAB_100d3e6c;
      if ((*pauVar11)[0] == '\0') {
        return (undefined1 (*) [16])0x0;
      }
      pauVar7 = pauVar11;
      if (in_XMM0[0] == (*pauVar11)[0]) goto LAB_100d3e83;
      param_1 = (undefined1 (*) [16])(*pauVar11 + 1);
    } while( true );
  }
  uVar13 = (uint)CONCAT11((*param_2)[0],(*param_2)[0]);
  if (uVar13 == 0) {
    return param_1;
  }
  auVar22 = pshuflw(ZEXT416(uVar13),ZEXT416(uVar13),0);
  uVar13 = 0xffffffff;
  pauVar6 = param_2;
  do {
    pauVar11 = pauVar6;
    pauVar6 = (undefined1 (*) [16])(*pauVar11 + 1);
    if ((*pauVar11)[0] == '\0') goto LAB_100d3d5e;
  } while (((uint)pauVar6 & 0xf) != 0);
  auVar17[0] = -((*pauVar6)[0] == '\0');
  auVar17[1] = -((*pauVar11)[2] == '\0');
  auVar17[2] = -((*pauVar11)[3] == '\0');
  auVar17[3] = -((*pauVar11)[4] == '\0');
  auVar17[4] = -((*pauVar11)[5] == '\0');
  auVar17[5] = -((*pauVar11)[6] == '\0');
  auVar17[6] = -((*pauVar11)[7] == '\0');
  auVar17[7] = -((*pauVar11)[8] == '\0');
  auVar17[8] = -((*pauVar11)[9] == '\0');
  auVar17[9] = -((*pauVar11)[10] == '\0');
  auVar17[10] = -((*pauVar11)[0xb] == '\0');
  auVar17[0xb] = -((*pauVar11)[0xc] == '\0');
  auVar17[0xc] = -((*pauVar11)[0xd] == '\0');
  auVar17[0xd] = -((*pauVar11)[0xe] == '\0');
  auVar17[0xe] = -((*pauVar11)[0xf] == '\0');
  auVar17[0xf] = -(pauVar11[1][0] == '\0');
  if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) == 0 && (SUB161(auVar17 >> 0xf,0) & 1) == 0) &&
                  (SUB161(auVar17 >> 0x17,0) & 1) == 0) && (SUB161(auVar17 >> 0x1f,0) & 1) == 0) &&
                (SUB161(auVar17 >> 0x27,0) & 1) == 0) && (SUB161(auVar17 >> 0x2f,0) & 1) == 0) &&
              (SUB161(auVar17 >> 0x37,0) & 1) == 0) && (SUB161(auVar17 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar17 >> 0x47,0) & 1) == 0) && (SUB161(auVar17 >> 0x4f,0) & 1) == 0) &&
          (SUB161(auVar17 >> 0x57,0) & 1) == 0) && (SUB161(auVar17 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar17 >> 0x67,0) & 1) == 0) && (SUB161(auVar17 >> 0x6f,0) & 1) == 0) &&
      (SUB161(auVar17 >> 0x77,0) & 1) == 0) && -1 < auVar17[0xf]) {
    uVar13 = 0xf;
  }
LAB_100d3d5e:
  pauVar6 = param_1;
  cVar21 = auVar22[0];
  if (((uint)pauVar6 & 0xfff) < 0xff1) goto code_r0x100d3d6d;
  goto LAB_100d3d94;
LAB_100d3e6c:
  iVar10 = pcmpistri(in_XMM0,*pauVar11,0xc);
  param_1 = pauVar11 + 1;
  if (pauVar11 >= (undefined1 (*) [16])0xfffffff0 || pauVar11 + 1 == (undefined1 (*) [16])0x0) {
    if (pauVar11 < (undefined1 (*) [16])0xfffffff0) {
      return (undefined1 (*) [16])0x0;
    }
    pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar10);
    pauVar7 = pauVar11;
LAB_100d3e83:
    while( true ) {
      for (; (0xff0 < ((uint)pauVar11 & 0xfff) || (0xff0 < ((uint)pauVar6 & 0xfff)));
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1)) {
        if ((*pauVar6)[0] == '\0') {
          return pauVar7;
        }
        if ((*pauVar6)[0] != (*pauVar11)[0]) goto LAB_100d3e46;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
      }
      pauVar14 = pauVar6 + 1;
      pcmpistri(*pauVar6,*pauVar11,0xc);
      if (!SCARRY4((int)pauVar6,0x10)) break;
      pauVar6 = pauVar14;
      pauVar11 = pauVar11 + 1;
      if ((int)pauVar14 < 0) {
        return pauVar7;
      }
    }
LAB_100d3e46:
    param_1 = (undefined1 (*) [16])(*pauVar7 + 1);
  }
  goto LAB_100d3e4d;
code_r0x100d3d6d:
  auVar20 = SUB1615((undefined1  [16])0x0,1);
  auVar18[0] = -((*pauVar6)[0] == '\0');
  auVar18[1] = -((*pauVar6)[1] == '\0');
  auVar18[2] = -((*pauVar6)[2] == '\0');
  auVar18[3] = -((*pauVar6)[3] == '\0');
  auVar18[4] = -((*pauVar6)[4] == '\0');
  auVar18[5] = -((*pauVar6)[5] == '\0');
  auVar18[6] = -((*pauVar6)[6] == '\0');
  auVar18[7] = -((*pauVar6)[7] == '\0');
  auVar18[8] = -((*pauVar6)[8] == '\0');
  auVar18[9] = -(auVar20[8] == (*pauVar6)[9]);
  auVar18[10] = -(auVar20[9] == (*pauVar6)[10]);
  auVar18[0xb] = -(auVar20[10] == (*pauVar6)[0xb]);
  auVar18[0xc] = -(auVar20[0xb] == (*pauVar6)[0xc]);
  auVar18[0xd] = -(auVar20[0xc] == (*pauVar6)[0xd]);
  auVar18[0xe] = -(auVar20[0xd] == (*pauVar6)[0xe]);
  auVar18[0xf] = -(auVar20[0xe] == (*pauVar6)[0xf]);
  auVar15[0] = -((*pauVar6)[0] == cVar21);
  auVar15[1] = -((*pauVar6)[1] == auVar22[1]);
  auVar15[2] = -((*pauVar6)[2] == auVar22[2]);
  auVar15[3] = -((*pauVar6)[3] == auVar22[3]);
  auVar15[4] = -((*pauVar6)[4] == auVar22[4]);
  auVar15[5] = -((*pauVar6)[5] == auVar22[5]);
  auVar15[6] = -((*pauVar6)[6] == auVar22[6]);
  auVar15[7] = -((*pauVar6)[7] == auVar22[7]);
  auVar15[8] = -((*pauVar6)[8] == cVar21);
  auVar15[9] = -((*pauVar6)[9] == auVar22[1]);
  auVar15[10] = -((*pauVar6)[10] == auVar22[2]);
  auVar15[0xb] = -((*pauVar6)[0xb] == auVar22[3]);
  auVar15[0xc] = -((*pauVar6)[0xc] == auVar22[4]);
  auVar15[0xd] = -((*pauVar6)[0xd] == auVar22[5]);
  auVar15[0xe] = -((*pauVar6)[0xe] == auVar22[6]);
  auVar15[0xf] = -((*pauVar6)[0xf] == auVar22[7]);
  auVar15 = auVar15 | auVar18;
  uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
  param_1 = pauVar6 + 1;
  if (uVar2 != 0) {
    iVar10 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
      }
    }
    pauVar6 = (undefined1 (*) [16])(*pauVar6 + iVar10);
LAB_100d3d94:
    if ((*pauVar6)[0] == '\0') {
      return (undefined1 (*) [16])0x0;
    }
    param_1 = (undefined1 (*) [16])(*pauVar6 + 1);
    if (cVar21 == (*pauVar6)[0]) {
      pcVar9 = *param_2 + 1;
      pauVar11 = param_1;
LAB_100d3da7:
      for (; ((uVar13 & (uint)pcVar9) == 0 && (((uint)pauVar11 & 0xfff) < 0xff1));
          pauVar11 = pauVar11 + 1) {
        auVar19[0] = -(*pcVar9 == '\0');
        auVar19[1] = -(pcVar9[1] == '\0');
        auVar19[2] = -(pcVar9[2] == '\0');
        auVar19[3] = -(pcVar9[3] == '\0');
        auVar19[4] = -(pcVar9[4] == '\0');
        auVar19[5] = -(pcVar9[5] == '\0');
        auVar19[6] = -(pcVar9[6] == '\0');
        auVar19[7] = -(pcVar9[7] == '\0');
        auVar19[8] = -(pcVar9[8] == '\0');
        auVar19[9] = -(pcVar9[9] == '\0');
        auVar19[10] = -(pcVar9[10] == '\0');
        auVar19[0xb] = -(pcVar9[0xb] == '\0');
        auVar19[0xc] = -(pcVar9[0xc] == '\0');
        auVar19[0xd] = -(pcVar9[0xd] == '\0');
        auVar19[0xe] = -(pcVar9[0xe] == '\0');
        auVar19[0xf] = -(pcVar9[0xf] == '\0');
        auVar16[0] = -((*pauVar11)[0] != *pcVar9);
        auVar16[1] = -((*pauVar11)[1] != pcVar9[1]);
        auVar16[2] = -((*pauVar11)[2] != pcVar9[2]);
        auVar16[3] = -((*pauVar11)[3] != pcVar9[3]);
        auVar16[4] = -((*pauVar11)[4] != pcVar9[4]);
        auVar16[5] = -((*pauVar11)[5] != pcVar9[5]);
        auVar16[6] = -((*pauVar11)[6] != pcVar9[6]);
        auVar16[7] = -((*pauVar11)[7] != pcVar9[7]);
        auVar16[8] = -((*pauVar11)[8] != pcVar9[8]);
        auVar16[9] = -((*pauVar11)[9] != pcVar9[9]);
        auVar16[10] = -((*pauVar11)[10] != pcVar9[10]);
        auVar16[0xb] = -((*pauVar11)[0xb] != pcVar9[0xb]);
        auVar16[0xc] = -((*pauVar11)[0xc] != pcVar9[0xc]);
        auVar16[0xd] = -((*pauVar11)[0xd] != pcVar9[0xd]);
        auVar16[0xe] = -((*pauVar11)[0xe] != pcVar9[0xe]);
        auVar16[0xf] = -((*pauVar11)[0xf] != pcVar9[0xf]);
        auVar19 = auVar19 | auVar16;
        uVar2 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
        if (uVar2 != 0) {
          iVar10 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
            }
          }
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar10);
          pcVar9 = pcVar9 + iVar10;
          break;
        }
        pcVar9 = pcVar9 + 0x10;
      }
      if (*pcVar9 == '\0') {
        return pauVar6;
      }
      if (*pcVar9 == (*pauVar11)[0]) {
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
        pcVar9 = pcVar9 + 1;
        goto LAB_100d3da7;
      }
    }
  }
  goto LAB_100d3d5e;
}

