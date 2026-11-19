
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073610(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *in_ECX;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = DAT_105595a4 + _DAT_105595a0;
  fVar6 = (float10)(*DAT_101b26e0)();
  if (((((float)fVar6 < fVar8) && (DAT_1054506c < 3)) && (iVar3 = (*DAT_101b26d4)(), iVar3 != 0)) &&
     (fVar6 = (float10)(*DAT_101b26e0)(), _DAT_105595a8 < (float)fVar6)) {
    DAT_105595ac = DAT_105595ac + 1;
    iVar3 = (*DAT_101b26d4)(0x3f800000);
    FUN_10085600(*(undefined4 *)(iVar3 + 0xb48),*(undefined4 *)(iVar3 + 0xb4c),
                 *(undefined4 *)(iVar3 + 0xb50));
    fVar6 = (float10)(*DAT_101b26e0)();
    dVar10 = (double)DAT_105595ac;
    fVar7 = (float10)(*DAT_101b2714)(0x3dcccccd,0x3e800000);
    _DAT_105595a8 = (float)(fVar7 + (float10)(dVar10 * 0.05 + (double)fVar6));
  }
  if (DAT_10542bbc != 0) {
    if (((byte)DAT_10543428 & 1) != 0) {
      (*DAT_101b2654)("boatup");
    }
    if (((byte)DAT_10543434 & 1) != 0) {
      (*DAT_101b2654)("boatdown");
    }
    if (((byte)DAT_10543458 & 1) != 0) {
      (*DAT_101b2654)("boatleft");
    }
    if (((byte)DAT_10543464 & 1) != 0) {
      (*DAT_101b2654)("boatright");
    }
  }
  if (DAT_10542bb8 != 0) {
    if (((byte)DAT_10543428 & 1) != 0) {
      (*DAT_101b2654)("wheelchairup");
    }
    if (((byte)DAT_10543434 & 1) != 0) {
      (*DAT_101b2654)("wheelchairdown");
    }
    if (((byte)DAT_10543458 & 1) != 0) {
      (*DAT_101b2654)("wheelchairleft");
    }
    if (((byte)DAT_10543464 & 1) != 0) {
      (*DAT_101b2654)("wheelchairright");
    }
  }
  if (DAT_1018d648 < 1) {
    if ((float)in_ECX[0xc83] == 0.0) {
      fVar6 = (float10)(*DAT_101b26e0)();
      in_ECX[0xc83] = (float)fVar6;
    }
    if (0 < DAT_1018d648) goto LAB_100737fe;
  }
  else {
LAB_100737fe:
    in_ECX[0xc83] = 0;
  }
  for (piVar1 = (int *)*in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*(byte *)((int *)*piVar1 + 4) & 1) != 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
    }
  }
  iVar3 = DAT_105431d8;
  if (DAT_105431d8 < 4) {
    if (DAT_105431d8 == 3) {
      fVar8 = 30.0;
    }
    else {
      iVar3 = DAT_1018fec0;
      if (DAT_105431d8 != 2) goto LAB_10073857;
      fVar8 = 60.0;
    }
  }
  else {
LAB_10073857:
    fVar8 = (float)iVar3;
  }
  if ((float)in_ECX[0xc49] <= 0.0 && (float)in_ECX[0xc49] != 0.0) {
    in_ECX[0xc49] = fVar8;
    fVar6 = (float10)(*DAT_101b26e0)();
    DAT_10543220 = (float)in_ECX[0xc49];
    fVar13 = (float)fVar6;
    fVar11 = DAT_10543220;
    goto LAB_100739dc;
  }
  fVar6 = (float10)(*DAT_101b26e0)();
  fVar11 = (float)in_ECX[0xc49];
  fVar9 = fVar8 - fVar11;
  fVar13 = (float)fVar6;
  if (fVar9 < 0.0) {
    fVar9 = fVar9 * -1.0;
  }
  fVar12 = 30.0;
  if (30.0 <= fVar9) {
    fVar12 = fVar9;
  }
  if ((DAT_105431d8 == 3) || (DAT_10543220 == 30.0)) {
    fVar12 = fVar12 + fVar12;
  }
  fVar12 = fVar12 / 30.0;
  if ((DAT_105431d8 < 4) || (fVar9 = (float)in_ECX[0xc51], fVar9 == 0.0)) {
    if (fVar8 <= fVar11) {
      if (fVar11 <= fVar8) goto LAB_100739dc;
      fVar9 = (fVar13 - _DAT_1054321c) * *(float *)(in_ECX[0xc4f] + 0xc);
LAB_100739b4:
      fVar11 = fVar11 - fVar9 * fVar12;
      bVar5 = fVar8 == fVar11;
      bVar4 = fVar8 < fVar11;
    }
    else {
      fVar11 = (fVar13 - _DAT_1054321c) * *(float *)(in_ECX[0xc4f] + 0xc) * fVar12 + fVar11;
      bVar5 = fVar11 == fVar8;
      bVar4 = fVar11 < fVar8;
    }
LAB_100739bf:
    in_ECX[0xc49] = fVar11;
    fVar2 = fVar8;
    if (bVar4 || bVar5) goto LAB_100739dc;
  }
  else {
    fVar2 = DAT_10543220;
    if ((DAT_105431d8 != 0x29a) && (fVar9 != 666.0)) {
      if (fVar8 <= fVar11) {
        if (fVar11 <= fVar8) goto LAB_100739dc;
        fVar9 = (fVar13 - _DAT_1054321c) * fVar9;
        goto LAB_100739b4;
      }
      fVar11 = (fVar13 - _DAT_1054321c) * fVar9 * fVar12 + fVar11;
      bVar5 = fVar11 == fVar8;
      bVar4 = fVar11 < fVar8;
      goto LAB_100739bf;
    }
  }
  DAT_10543220 = fVar2;
  in_ECX[0xc49] = fVar8;
  fVar11 = fVar8;
LAB_100739dc:
  _DAT_1054321c = fVar13;
  in_ECX[0xc48] = (int)fVar11;
  if ((int)fVar11 == DAT_1018fec0) {
    in_ECX[5] = 0;
    return;
  }
  fVar6 = (float10)(*DAT_101b2644)("zoom_sensitivity_ratio");
  in_ECX[5] = ((float)in_ECX[0xc49] / (float)DAT_1018fec0) * *(float *)(DAT_1054355c + 0xc) *
              (float)fVar6;
  return;
}

