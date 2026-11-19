
/* WARNING: Type propagation algorithm not settling */

void FUN_1003bf20(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  SHORT SVar4;
  int iVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  Panel *in_ECX;
  char *pcVar9;
  float ***pppfVar10;
  undefined4 *puVar11;
  Panel *pPVar12;
  float10 fVar13;
  undefined4 ****ppppuStack_2e0;
  float ****ppppfStack_2dc;
  undefined4 ****ppppuStack_2bc;
  undefined **ppuStack_2b8;
  undefined4 ****ppppuStack_2b4;
  undefined4 local_298;
  undefined4 ****local_294;
  float ****local_290;
  int local_28c;
  float ****local_288;
  float local_284;
  int local_280;
  undefined4 ***local_27c;
  float ***local_278;
  undefined4 ****local_274;
  float ***local_270;
  float ***local_26c [65];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_e8 [128];
  undefined4 ***local_68 [8];
  float ***local_48 [8];
  undefined4 ***local_28 [8];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ppppuStack_2b4 = (undefined4 ****)0x1003bf4b;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0xe64) + 0x28))();
  if (cVar3 != '\0') {
    iVar5 = *(int *)(in_ECX + 0xe70);
    if (in_ECX[0xe6c] == (Panel)0x0) {
      if (iVar5 < 0xff) {
        iVar5 = iVar5 + 2;
        *(int *)(in_ECX + 0xe70) = iVar5;
      }
      piVar2 = *(int **)(in_ECX + 0xe68);
      vgui::Color::Color((Color *)&ppppuStack_2bc,0xff,0xff,0xff,iVar5);
      (**(code **)(*piVar2 + 0xc))();
      if (0xfe < *(int *)(in_ECX + 0xe70)) {
        piVar2 = *(int **)(in_ECX + 0xe68);
        *(undefined4 *)(in_ECX + 0xe70) = 0xff;
        vgui::Color::Color((Color *)&ppppuStack_2bc,0xff,0xff,0xff,0xff);
        (**(code **)(*piVar2 + 0xc))();
        (**(code **)(**(int **)(in_ECX + 0xe64) + 0x24))();
      }
    }
    else {
      if (0 < iVar5) {
        iVar5 = iVar5 + -2;
        *(int *)(in_ECX + 0xe70) = iVar5;
      }
      if (iVar5 < 0) {
        *(undefined4 *)(in_ECX + 0xe70) = 0;
        iVar5 = 0;
      }
      piVar2 = *(int **)(in_ECX + 0xe68);
      vgui::Color::Color((Color *)&ppppuStack_2bc,0xff,0xff,0xff,iVar5);
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  if (in_ECX[0x3f0] != (Panel)0x0) {
    ppppuStack_2b4 = (undefined4 ****)0x1003c043;
    fVar13 = (float10)(*DAT_101b26e0)();
    local_274 = (undefined4 ****)(float)fVar13;
    if (*(float *)(in_ECX + 0x36c) <= (float)local_274 &&
        (float)local_274 != *(float *)(in_ECX + 0x36c)) {
      ppppuStack_2b4 = (undefined4 ****)0x1003c064;
      fVar13 = (float10)(*DAT_101b26e0)();
      ppppuStack_2b4 = &local_278;
      ppuStack_2b8 = (undefined **)&local_280;
      ppppuStack_2bc = &local_270;
      *(float *)(in_ECX + 0x36c) = (float)(fVar13 + (float10)0.05);
      (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x138))();
      iVar5 = (int)local_27c + -0xff;
      if ((int)local_27c < 0xff) {
        local_280 = local_280 + 5;
        iVar5 = (int)local_27c + -0xfa;
        local_27c = (undefined4 ***)((int)local_27c + 5);
      }
      if (local_27c != (undefined4 ***)0xff && SBORROW4((int)local_27c,0xff) == iVar5 < 0) {
        local_280 = 0xff;
        local_27c = (undefined4 ***)0xff;
        (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x120))();
      }
      if (DAT_101b2bd8 != 0) {
        local_27c = (undefined4 ***)0x80;
        local_270 = (float ***)0x0;
        local_280 = 0;
      }
      (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x120))();
      iVar5 = 0x2ec;
      do {
        ppppuStack_2b4 = (undefined4 ****)0x1003c15a;
        cVar3 = (**(code **)(**(int **)(in_ECX + iVar5) + 0x28))();
        if (cVar3 != '\0') {
          ppppuStack_2b4 = &local_278;
          ppuStack_2b8 = (undefined **)&local_280;
          ppppuStack_2bc = &local_270;
          (**(code **)(**(int **)(in_ECX + iVar5) + 0x138))();
          local_278 = (float ***)((int)local_278 + 0xf);
          if ((int)local_278 < 0x100) {
            (**(code **)(**(int **)(in_ECX + iVar5) + 0x120))();
            ppppfStack_2dc = (float ****)0x1003c20d;
            (**(code **)(**(int **)(in_ECX + iVar5) + 4))();
            ppppuStack_2e0 = (undefined4 ****)((int)local_274 + 1);
            ppppfStack_2dc = local_288;
            local_274 = ppppuStack_2e0;
            (**(code **)**(undefined4 **)(in_ECX + iVar5))();
          }
          else {
            local_278 = (float ***)0xff;
            (**(code **)(**(int **)(in_ECX + iVar5) + 0x120))();
            (**(code **)(**(int **)(in_ECX + iVar5) + 0x24))();
          }
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x36c);
    }
  }
  if ((*(int *)(in_ECX + 0x388) != 0) && (in_ECX[0x39c] != (Panel)0x0)) {
    ppppuStack_2b4 = (undefined4 ****)0x10146814;
    ppuStack_2b8 = (undefined **)0x1003c260;
    iVar5 = FUN_1006cb10();
    if (iVar5 == 0) {
      local_140 = 0xfbede5;
      local_168 = 0xece6e0cd;
      uStack_164 = 0x20e5f2e8;
      uStack_160 = 0xe2e0ebea;
      uStack_15c = 0x20f3f8e8;
      local_13c = 0;
      local_158 = 0xeae0f2e0;
      uStack_154 = 0xebe420e8;
      uStack_150 = 0xeee32060;
      uStack_14c = 0xede2eef2;
      local_148 = 0xecf2ee2fe8f2f1ee;
    }
    else {
      ppppuStack_2b4 = (undefined4 ****)0x10146814;
      ppuStack_2b8 = (undefined **)0x1003c273;
      ppppuStack_2b4 = (undefined4 ****)FUN_1006cb10();
      ppppuStack_2bc = (undefined4 ****)&local_168;
      ppuStack_2b8 = (undefined **)&DAT_1014681c;
      FUN_1000c900();
    }
    ppuStack_2b8 = *(undefined ***)(in_ECX + 900);
    ppppuStack_2b4 = (undefined4 ****)&local_168;
    ppppuStack_2bc = (undefined4 ****)0x1003c2e2;
    (**(code **)((int)*ppuStack_2b8 + 0x200))();
    iVar5 = 0x388;
    puVar11 = &DAT_10556cc4;
    local_274 = (undefined4 ****)0x0;
    do {
      pcVar9 = (char *)*puVar11;
      if (pcVar9 == (char *)0x0) {
LAB_1003c379:
        ppuStack_2b8 = *(undefined ***)(in_ECX + iVar5);
        ppppuStack_2b4 = (undefined4 ****)&DAT_10141988;
        ppppuStack_2bc = (undefined4 ****)0x1003c38a;
        (**(code **)((int)*ppuStack_2b8 + 0x200))();
        ppppuStack_2b4 = (undefined4 ****)0x0;
        ppuStack_2b8 = (undefined **)0xff;
        ppppuStack_2bc = (undefined4 ****)0xff;
        (**(code **)(**(int **)(in_ECX + iVar5) + 0x120))();
      }
      else {
        pcVar1 = pcVar9 + 1;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        if (pcVar9 == pcVar1) goto LAB_1003c379;
        ppppuStack_2b4 = (undefined4 ****)0x0;
        ppuStack_2b8 = (undefined **)0x0;
        if ((in_ECX + 0x39d)[(int)local_274] == (Panel)0x0) {
          ppppuStack_2bc = (undefined4 ****)0x0;
          (**(code **)(**(int **)(in_ECX + iVar5) + 0x120))();
        }
        else {
          ppppuStack_2bc = (undefined4 ****)0x80;
          (**(code **)(**(int **)(in_ECX + iVar5) + 0x120))();
        }
        FUN_1000c900();
        (**(code **)(**(int **)(in_ECX + iVar5) + 0x200))();
      }
      iVar5 = iVar5 + 4;
      local_274 = (undefined4 ****)((int)local_274 + 1);
      puVar11 = puVar11 + 5;
    } while (iVar5 < 0x398);
  }
  if (in_ECX[0x3f0] != (Panel)0x0) {
    ppppuStack_2b4 = (undefined4 ****)0x1003c3e2;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x28))();
    if (cVar3 == '\0') {
      ppppuStack_2b4 = (undefined4 ****)0x1;
      ppuStack_2b8 = (undefined **)0x1003c3f3;
      (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x24))();
    }
    ppppuStack_2b4 = (undefined4 ****)0x1003c3f9;
    fVar13 = (float10)(*DAT_101b26e0)();
    if ((*(float *)(in_ECX + 0x3f4) <= (float)fVar13 && (float)fVar13 != *(float *)(in_ECX + 0x3f4))
       && (in_ECX[0x374] == (Panel)0x0)) {
      *(int *)(in_ECX + 0x3f8) = *(int *)(in_ECX + 0x3f8) + 1;
      iVar5 = *(int *)(in_ECX + 0x3f8);
      if (0x3b < iVar5) {
        *(undefined4 *)(in_ECX + 0x3f8) = 0;
        *(int *)(in_ECX + 0x3fc) = *(int *)(in_ECX + 0x3fc) + 1;
        iVar5 = 0;
      }
      ppppuStack_2b4 = (undefined4 ****)0;
      if (-1 < 0x3c - iVar5) {
        ppppuStack_2b4 = (undefined4 ****)(0x3c - iVar5);
      }
      if (*(int *)(in_ECX + 0x400) < 0) {
        *(undefined4 *)(in_ECX + 0x400) = 0;
      }
      ppuStack_2b8 = (undefined **)&DAT_10145b58;
      if ((int)ppppuStack_2b4 < 10) {
        ppuStack_2b8 = (undefined **)&DAT_10145b54;
      }
      ppppuStack_2bc = local_28;
      FUN_1000c900();
      FUN_1000c900();
      FUN_1000c900();
      ppppfStack_2dc = local_48;
      ppppuStack_2e0 = local_68;
      FUN_1000c900(local_e8,"%s:%s:%s");
      (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x200))(*(int **)(in_ECX + 0x3a4),local_e8);
      ppppuStack_2b4 = (undefined4 ****)0x1003c517;
      fVar13 = (float10)(*DAT_101b26e0)();
      *(float *)(in_ECX + 0x3f4) = (float)(fVar13 + (float10)1.0);
    }
  }
  if (((byte)DAT_1018a41c & 0x40) == 0) {
    ppppuStack_2b4 = (undefined4 ****)0x1003c578;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x380) + 0x28))();
    if (cVar3 != '\0') {
      ppuStack_2b8 = (undefined **)0x0;
      ppppuStack_2bc = (undefined4 ****)0x1003c589;
      (**(code **)(**(int **)(in_ECX + 0x380) + 0x24))();
    }
  }
  else {
    ppppuStack_2b4 = (undefined4 ****)0x1003c539;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x380) + 0x28))();
    iVar5 = **(int **)(in_ECX + 0x380);
    if (cVar3 == '\0') {
      ppppuStack_2b4 = (undefined4 ****)0x1;
      ppuStack_2b8 = (undefined **)0x1003c54a;
      (**(code **)(iVar5 + 0x24))();
    }
    else {
      ppppuStack_2b4 = (undefined4 ****)0x5;
      ppuStack_2b8 = (undefined **)0x0;
      ppppuStack_2bc = (undefined4 ****)0x1003c556;
      iVar6 = (*DAT_101b2718)();
      ppppuStack_2b4 = (undefined4 ****)(iVar6 + 0xc0);
      ppuStack_2b8 = (undefined **)0x78;
      ppppuStack_2bc = (undefined4 ****)0xb1;
      (**(code **)(iVar5 + 300))();
    }
  }
  if (DAT_1018f644 != 0) {
    ppppuStack_2bc = *(undefined4 *****)(in_ECX + 0x3ac);
    ppuStack_2b8 = &PTR_1013b108;
    (*(code *)(*ppppuStack_2bc)[0x80])();
    (**(code **)(**(int **)(in_ECX + 0x3a8) + 0x200))();
    (**(code **)(**(int **)(in_ECX + 0x3b0) + 0x200))();
    in_ECX[0x848] = (Panel)0x0;
    *(undefined4 *)(in_ECX + 0x84c) = 0xff;
    in_ECX[0xe98] = (Panel)0x0;
    *(undefined4 *)(in_ECX + 0xf18) = 0;
    *(undefined2 *)(in_ECX + 0xf1c) = 0;
    *(undefined4 *)(in_ECX + 0xf20) = 0;
    *(undefined4 *)(in_ECX + 0xf24) = 0;
    *(undefined4 *)(in_ECX + 0xf28) = 0;
    *(undefined4 *)(in_ECX + 0xf40) = 0;
    *(undefined4 *)(in_ECX + 0xf2c) = 0;
    in_ECX[0xf30] = (Panel)0x0;
    in_ECX[0xf1e] = (Panel)0x0;
    *(undefined4 *)(in_ECX + 0xf34) = 0;
    *(undefined4 *)(in_ECX + 0xf38) = 0;
    *(undefined4 *)(in_ECX + 0xf3c) = 0;
  }
  ppuStack_2b8 = (undefined **)0x1003c664;
  iVar5 = (*DAT_101b2730)();
  if (iVar5 == 0) {
LAB_1003ca9f:
    pPVar12 = in_ECX + 0xf78;
    iVar5 = 4;
    do {
      ppuStack_2b8 = (undefined **)0x1003cabd;
      cVar3 = (**(code **)(**(int **)(pPVar12 + -0xba8) + 0x28))();
      if (cVar3 != '\0') {
        ppuStack_2b8 = (undefined **)0x0;
        ppppuStack_2bc = (undefined4 ****)0x1003cace;
        (**(code **)(**(int **)(pPVar12 + -0xba8) + 0x24))();
      }
      ppuStack_2b8 = (undefined **)0x1003cad7;
      cVar3 = (**(code **)(**(int **)pPVar12 + 0x28))();
      if (cVar3 != '\0') {
        ppuStack_2b8 = (undefined **)0x0;
        ppppuStack_2bc = (undefined4 ****)0x1003cae4;
        (**(code **)(**(int **)pPVar12 + 0x24))();
      }
      ppuStack_2b8 = (undefined **)0x1003caee;
      cVar3 = (**(code **)(**(int **)(pPVar12 + 0x20) + 0x28))();
      if (cVar3 != '\0') {
        ppuStack_2b8 = (undefined **)0x0;
        ppppuStack_2bc = (undefined4 ****)0x1003cafc;
        (**(code **)(**(int **)(pPVar12 + 0x20) + 0x24))();
      }
      pPVar12 = pPVar12 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pPVar12 = in_ECX + 0x3b4;
    iVar5 = 5;
    do {
      ppuStack_2b8 = (undefined **)0x1003cb19;
      cVar3 = (**(code **)(**(int **)pPVar12 + 0x28))();
      if (cVar3 != '\0') {
        ppuStack_2b8 = (undefined **)0x0;
        ppppuStack_2bc = (undefined4 ****)0x1003cb26;
        (**(code **)(**(int **)pPVar12 + 0x24))();
      }
      pPVar12 = pPVar12 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    ppuStack_2b8 = (undefined **)0x1003cb3b;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x28))();
    if (cVar3 != '\0') {
      ppppuStack_2bc = (undefined4 ****)0x1003cb4b;
      ppuStack_2b8 = (undefined **)iVar5;
      (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x24))();
    }
    ppuStack_2b8 = (undefined **)0x1003cb58;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3e0) + 0x28))();
    if (cVar3 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0x3e0) + 0x24))();
    }
    if (*(int *)(in_ECX + 0x3ec) < 0xff) {
      *(undefined4 *)(in_ECX + 0x3ec) = 0xff;
    }
  }
  else {
    ppuStack_2b8 = (undefined **)&DAT_1014688c;
    ppppuStack_2bc = (undefined4 ****)0x1003c677;
    ppppuStack_2bc = (undefined4 ****)(*DAT_101b2730)();
    iVar5 = FUN_100d3cf0();
    if (iVar5 == 0) goto LAB_1003ca9f;
    iVar5 = *(int *)(in_ECX + 0x3ec);
    if (iVar5 < 0xff) {
      iVar5 = iVar5 + 5;
      *(int *)(in_ECX + 0x3ec) = iVar5;
    }
    if (iVar5 < 0) {
      *(undefined4 *)(in_ECX + 0x3ec) = 0;
    }
    else if (0xff < iVar5) {
      *(undefined4 *)(in_ECX + 0x3ec) = 0xff;
    }
    ppuStack_2b8 = (undefined **)0x1003c6cc;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3e0) + 0x28))();
    if (cVar3 == '\0') {
      ppuStack_2b8 = (undefined **)0x1;
      ppppuStack_2bc = (undefined4 ****)0x1003c6dd;
      (**(code **)(**(int **)(in_ECX + 0x3e0) + 0x24))();
    }
    ppuStack_2b8 = *(undefined ***)(in_ECX + 0x3ec);
    ppppuStack_2bc = (undefined4 ****)0x0;
    (**(code **)(**(int **)(in_ECX + 0x3e0) + 0x120))();
    pPVar12 = in_ECX + 0x3b4;
    iVar5 = 5;
    do {
      cVar3 = (**(code **)(**(int **)pPVar12 + 0x28))();
      if (cVar3 == '\0') {
        (**(code **)(**(int **)pPVar12 + 0x24))();
      }
      pPVar12 = pPVar12 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pPVar12 = in_ECX + 0x3d0;
    puVar11 = &DAT_10556cc4;
    local_26c[0] = (float ***)(&DAT_1018d29c + -(int)in_ECX);
    local_270 = (float ***)0x0;
    do {
      pcVar9 = (char *)*puVar11;
      if (pcVar9 == (char *)0x0) {
LAB_1003c987:
        cVar3 = (**(code **)(**(int **)pPVar12 + 0x28))();
        if (cVar3 != '\0') {
          (**(code **)(**(int **)pPVar12 + 0x24))();
        }
        cVar3 = (**(code **)(**(int **)(pPVar12 + 0xba8) + 0x28))();
        if (cVar3 != '\0') {
          (**(code **)(**(int **)(pPVar12 + 0xba8) + 0x24))();
        }
        cVar3 = (**(code **)(**(int **)(pPVar12 + 0xbc8) + 0x28))();
        if (cVar3 != '\0') {
          (**(code **)(**(int **)(pPVar12 + 0xbc8) + 0x24))();
        }
      }
      else {
        pcVar1 = pcVar9 + 1;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        if (pcVar9 == pcVar1) goto LAB_1003c987;
        cVar3 = (**(code **)(**(int **)pPVar12 + 0x28))();
        if (cVar3 == '\0') {
          (**(code **)(**(int **)pPVar12 + 0x24))();
        }
        fVar13 = (float10)(*DAT_101b26e0)();
        local_284 = (float)fVar13;
        if (*(float *)(pPVar12 + ((int)&DAT_1018d39c - (int)in_ECX)) <= local_284) {
          cVar3 = (**(code **)(**(int **)(pPVar12 + 0xba8) + 0x28))();
          if (cVar3 != '\0') goto LAB_1003c7c5;
        }
        else {
          cVar3 = (**(code **)(**(int **)(pPVar12 + 0xba8) + 0x28))();
          if (cVar3 == '\0') {
LAB_1003c7c5:
            (**(code **)(**(int **)(pPVar12 + 0xba8) + 0x24))();
          }
        }
        if ((&DAT_1018d974)[(int)local_270] == '\0') {
          cVar3 = (**(code **)(**(int **)(pPVar12 + 0xbc8) + 0x28))();
          if (cVar3 != '\0') goto LAB_1003c7fc;
        }
        else {
          cVar3 = (**(code **)(**(int **)(pPVar12 + 0xbc8) + 0x28))();
          if (cVar3 == '\0') {
LAB_1003c7fc:
            (**(code **)(**(int **)(pPVar12 + 0xbc8) + 0x24))();
          }
        }
        ppppfStack_2dc = (float ****)0x1003c828;
        FUN_1000c900();
        (**(code **)(**(int **)(in_ECX + 0xe90) + 0xc))();
        ppppfStack_2dc = (float ****)0x1003c860;
        (**(code **)(**(int **)pPVar12 + 0xc))();
        ppppfStack_2dc = &local_278;
        ppppuStack_2e0 = &local_27c;
        (**(code **)(**(int **)pPVar12 + 4))();
        (**(code **)(**(int **)pPVar12 + 8))(local_280,local_274);
        (**(code **)**(undefined4 **)pPVar12)
                  ((DAT_1018f430 - local_280) + -5,
                   (int)((double)((int)local_274 * (int)local_270) + (double)(int)DAT_1018f434 / 1.5
                        ));
        (**(code **)(**(int **)pPVar12 + 0x200))(*(int **)pPVar12,local_e8);
        (**(code **)(**(int **)pPVar12 + 4))(&local_27c,&local_278);
        (**(code **)**(undefined4 **)(pPVar12 + 0xba8))(local_27c + -7,local_278 + 1);
        (**(code **)**(undefined4 **)(pPVar12 + 0xbc8))((int)local_27c + -0xe,local_278 + 1);
        iVar5 = **(int **)pPVar12;
        if (*(int *)(pPVar12 + -0xf4) == 1) {
          (**(code **)(iVar5 + 0x120))(0x75,0,0);
        }
        else if (*(int *)(pPVar12 + -0xf4) == 2) {
          (**(code **)(iVar5 + 0x120))(0xff,0xd3,0x51);
        }
        else {
          (**(code **)(iVar5 + 0x120))(0xff,0xff,0xff,0);
        }
      }
      local_270 = (float ***)((int)local_270 + 1);
      puVar11 = puVar11 + 5;
      pPVar12 = pPVar12 + 4;
    } while ((int)puVar11 < 0x10556d14);
    fVar13 = (float10)(*DAT_101b26e0)();
    local_26c[0] = (float ***)(float)fVar13;
    if (*(float *)(in_ECX + 0x3e4) <= (float)local_26c[0]) {
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x28))();
      if (cVar3 != '\0') goto LAB_1003ca2b;
    }
    else {
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x28))();
      if (cVar3 == '\0') {
LAB_1003ca2b:
        (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x24))();
      }
    }
    if (((DAT_101b2bd4 != 0.0) && (DAT_101b2bd4 <= 4.0)) &&
       ((&DAT_10556cb0)[(int)DAT_101b2bd4 * 5] != 0)) {
      fVar13 = (float10)(*DAT_101b26e0)();
      *(float *)(in_ECX + 0x3e4) = (float)(fVar13 + (float10)0.1);
      (**(code **)(**(int **)(in_ECX + 0x3cc) + 0x200))();
    }
  }
  (**(code **)(**(int **)(in_ECX + 0xfe8) + 0x140))();
  fVar13 = (float10)(*DAT_101b26e0)();
  local_26c[0] = (float ***)(float)fVar13;
  if (*(float *)(in_ECX + 0xfe4) <= (float)local_26c[0]) {
    if (local_28c < 0xff) {
      local_28c = local_28c + 0xf;
      ppppfStack_2dc = local_290;
      ppppuStack_2e0 = local_294;
      (**(code **)(**(int **)(in_ECX + 0xfe8) + 300))(local_298);
    }
    if (0xff < local_28c) {
      ppppfStack_2dc = local_290;
      ppppuStack_2e0 = local_294;
      (**(code **)(**(int **)(in_ECX + 0xfe8) + 300))(local_298);
    }
  }
  else {
    ppppfStack_2dc = (float ****)0x0;
    ppppuStack_2e0 = (undefined4 ****)0x0;
    (**(code **)(**(int **)(in_ECX + 0xfe8) + 300))(0xff);
  }
  iVar5 = DAT_101b2bd0 / 0xf;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if (DAT_1018ed64 == 0) {
    DAT_101b2bdc = DAT_101b2bdc == '\0';
    if (!(bool)DAT_101b2bdc) goto LAB_1003cdba;
    ppppfStack_2dc = local_26c;
    ppppuStack_2e0 = (undefined4 ****)0x1003cd3f;
    (**(code **)(**(int **)(in_ECX + 0x378) + 4))();
    ppppuStack_2e0 = &local_270;
    (**(code **)(**(int **)(in_ECX + 0x37c) + 4))(&local_284);
    ppppuVar7 = (undefined4 ****)-DAT_101b2bd0;
    if ((int)ppppuVar7 < (int)local_274) {
      local_274 = (undefined4 ****)((int)local_274 - iVar5);
    }
    if ((int)local_274 < (int)ppppuVar7) {
      local_274 = ppppuVar7;
    }
    iVar6 = (int)local_270 - (int)DAT_1018f434;
    if ((int)local_270 < (int)DAT_1018f434) {
      local_270 = (float ***)((int)local_270 + iVar5);
      iVar6 = (int)local_270 - (int)DAT_1018f434;
    }
    if (local_270 != DAT_1018f434 && SBORROW4((int)local_270,(int)DAT_1018f434) == iVar6 < 0) {
      local_270 = DAT_1018f434;
    }
  }
  else {
    DAT_101b2bdc = DAT_101b2bdc == '\0';
    if (!(bool)DAT_101b2bdc) goto LAB_1003cdba;
    ppppfStack_2dc = local_26c;
    ppppuStack_2e0 = (undefined4 ****)0x1003ccbb;
    (**(code **)(**(int **)(in_ECX + 0x378) + 4))();
    ppppuStack_2e0 = &local_270;
    (**(code **)(**(int **)(in_ECX + 0x37c) + 4))(&local_284);
    if ((int)local_274 < 0) {
      local_274 = (undefined4 ****)((int)local_274 + iVar5);
    }
    if (0 < (int)local_274) {
      local_274 = (undefined4 ****)0x0;
    }
    pppfVar10 = (float ***)((int)DAT_1018f434 - DAT_101b2bd0);
    iVar6 = (int)local_270 - (int)pppfVar10;
    if ((int)pppfVar10 < (int)local_270) {
      local_270 = (float ***)((int)local_270 - iVar5);
      iVar6 = (int)local_270 - (int)pppfVar10;
    }
    if (SBORROW4((int)local_270,(int)pppfVar10) != iVar6 < 0) {
      local_270 = pppfVar10;
    }
  }
  (**(code **)**(undefined4 **)(in_ECX + 0x378))(local_26c[0],local_274);
  (**(code **)**(undefined4 **)(in_ECX + 0x37c))(local_284,local_270);
LAB_1003cdba:
  FUN_10038a10();
  FUN_10039210();
  if (DAT_10542bb8 != 0) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x28))();
    if (cVar3 != '\0') {
      ppppfStack_2dc = (float ****)0x1003cdef;
      (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x24))();
    }
    if (DAT_10542bb8 != 0) {
      cVar3 = (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x28))();
      if (cVar3 != '\0') {
        ppppfStack_2dc = (float ****)0x1003ce16;
        (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x24))();
      }
      if ((DAT_10542bb8 != 0) &&
         (cVar3 = (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x28))(), cVar3 != '\0')) {
        ppppfStack_2dc = (float ****)0x1003ce3d;
        (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x24))();
      }
    }
  }
  local_284 = *(float *)(in_ECX + 0xfc4);
  fVar13 = (float10)(*DAT_101b26e0)();
  local_26c[0] = (float ***)(float)fVar13;
  if (local_284 <= (float)local_26c[0]) {
    local_26c[0] = (float ***)(*(float *)(in_ECX + 0xfc0) + local_284);
    fVar13 = (float10)(*DAT_101b26e0)();
    local_284 = (float)fVar13;
    if (local_284 < (float)local_26c[0]) {
      local_270 = *(float ****)(in_ECX + 0xfc4);
      local_26c[0] = local_270;
      fVar13 = (float10)(*DAT_101b26e0)();
      local_274 = *(undefined4 *****)(in_ECX + 0xfc0);
      local_26c[0] = (float ***)(float)(fVar13 - (float10)(float)local_26c[0]);
      local_284 = (float)local_26c[0] / (float)local_274;
      if (1.0 < local_284) {
        DAT_1018d1e0 = (int)*(float *)(in_ECX + 0xfbc);
        local_270 = *(float ****)(in_ECX + 0xfc4);
        local_274 = *(undefined4 *****)(in_ECX + 0xfc0);
      }
      fVar13 = (float10)(*DAT_101b26e0)();
      local_26c[0] = (float ***)(float)fVar13;
      if ((float)local_26c[0] <= (float)local_274 + (float)local_270) {
        DAT_1018d1e0 = 0x5a - (int)(local_284 * *(float *)(in_ECX + 0xfbc));
      }
      else {
        DAT_1018d1e0 = (int)*(float *)(in_ECX + 0xfbc);
      }
      if (*(float *)(in_ECX + 0xfbc) < (float)DAT_1018d1e0) {
        DAT_1018d1e0 = (int)*(float *)(in_ECX + 0xfbc);
      }
    }
  }
  cVar3 = (**(code **)(**(int **)(in_ECX + 0xff0) + 0x28))();
  if ((cVar3 != '\0') && (in_ECX[0xff4] != (Panel)0x0)) {
    fVar13 = (float10)(*DAT_101b26e0)();
    local_26c[0] = (float ***)(float)fVar13;
    if (*(float *)(in_ECX + 0xff8) <= (float)local_26c[0] &&
        (float)local_26c[0] != *(float *)(in_ECX + 0xff8)) {
      if (0 < *(int *)(in_ECX + 0xffc)) {
        piVar2 = *(int **)(in_ECX + 0x1018);
        iVar5 = *(int *)(in_ECX + 0xffc) + -0xf;
        *(int *)(in_ECX + 0xffc) = iVar5;
        vgui::Color::Color((Color *)&ppppuStack_2e0,0xff,0xff,0xff,iVar5);
        (**(code **)(*piVar2 + 0xc))();
      }
      fVar13 = (float10)(*DAT_101b26e0)();
      *(float *)(in_ECX + 0xff8) = (float)(fVar13 + (float10)0.05);
    }
  }
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x1004) + 0x28))();
  if ((cVar3 != '\0') && (in_ECX[0x1008] != (Panel)0x0)) {
    ppppfStack_2dc = (float ****)&local_274;
    ppppuStack_2e0 = (undefined4 ****)0x1003d05a;
    (**(code **)(**(int **)(in_ECX + 0x1004) + 4))();
    local_278 = *(float ****)(in_ECX + 0xf44);
    ppppuStack_2e0 = (undefined4 ****)0x1003d070;
    fVar13 = (float10)(*DAT_101b26e0)();
    local_26c[0] = (float ***)(float)fVar13;
    if ((float)local_278 <= (float)local_26c[0]) {
      local_278 = (float ***)((float)local_278 + *(float *)(in_ECX + 0xf48));
      ppppuStack_2e0 = (undefined4 ****)0x1003d0a5;
      fVar13 = (float10)(*DAT_101b26e0)();
      local_26c[0] = (float ***)(float)fVar13;
      if ((float)local_26c[0] < (float)local_278) {
        ppppuStack_2e0 = (undefined4 ****)0x1003d0c2;
        fVar13 = (float10)(*DAT_101b26e0)();
        local_26c[0] = (float ***)(float)(fVar13 - (float10)*(float *)(in_ECX + 0xf44));
        ppppuStack_2e0 =
             (undefined4 ****)
             ((int)(((float)local_26c[0] / *(float *)(in_ECX + 0xf48)) * 160.0) + -0x9a);
        (**(code **)**(undefined4 **)(in_ECX + 0x1004))(local_274);
        if ((int)local_270 < -0xa1) {
          in_ECX[0x1008] = (Panel)0x0;
          local_270 = (float ***)0xffffff5f;
        }
      }
    }
    local_278 = *(float ****)(in_ECX + 0xf4c);
    ppppuStack_2e0 = (undefined4 ****)0x1003d133;
    fVar13 = (float10)(*DAT_101b26e0)();
    local_26c[0] = (float ***)(float)fVar13;
    if ((float)local_278 <= (float)local_26c[0]) {
      local_278 = (float ***)((float)local_278 + *(float *)(in_ECX + 0xf50));
      ppppuStack_2e0 = (undefined4 ****)0x1003d168;
      fVar13 = (float10)(*DAT_101b26e0)();
      local_26c[0] = (float ***)(float)fVar13;
      if ((float)local_26c[0] < (float)local_278) {
        ppppuStack_2e0 = (undefined4 ****)0x1003d189;
        fVar13 = (float10)(*DAT_101b26e0)();
        local_26c[0] = (float ***)(float)(fVar13 - (float10)*(float *)(in_ECX + 0xf4c));
        if (1.0 < (float)local_26c[0] / *(float *)(in_ECX + 0xf50)) {
          in_ECX[0x1008] = (Panel)0x0;
        }
        ppppuStack_2e0 =
             (undefined4 ****)(int)(((float)local_26c[0] / *(float *)(in_ECX + 0xf50)) * -160.0);
        (**(code **)**(undefined4 **)(in_ECX + 0x1004))(local_274);
        if ((int)local_270 < -0xa1) {
          in_ECX[0x1008] = (Panel)0x0;
          local_270 = (float ***)0xffffff5f;
        }
        else if (0 < (int)local_270) {
          local_270 = (float ***)0x0;
        }
      }
    }
    ppppuStack_2e0 = (undefined4 ****)0x1003d205;
    fVar13 = (float10)(*DAT_101b26e0)();
    local_26c[0] = (float ***)(float)fVar13;
    if ((float)local_26c[0] < *(float *)(in_ECX + 0xf4c)) {
      ppppfStack_2dc = (float ****)0x1003d224;
      SVar4 = GetAsyncKeyState(0xd);
      if (SVar4 < 0) {
        *(undefined4 *)(in_ECX + 0xf44) = 0;
        *(undefined4 *)(in_ECX + 0xf48) = 0;
        fVar13 = (float10)(*DAT_101b26e0)();
        *(float *)(in_ECX + 0xf4c) = (float)fVar13;
        *(undefined4 *)(in_ECX + 0xf50) = 0x3f800000;
      }
    }
  }
  ppppfStack_2dc = (float ****)(**(code **)(**(int **)(in_ECX + 0xfd0) + 0x18))();
  ppppuStack_2e0 = (undefined4 ****)0x1003d2a4;
  (**(code **)(**(int **)(in_ECX + 0xfd0) + 8))();
  ppppuStack_2e0 = (undefined4 ****)0x1003d2b5;
  uVar8 = (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x18))();
  ppppuStack_2e0 = (undefined4 ****)(int)((double)(100 - *(int *)(in_ECX + 0x1000)) * 1.18);
  (**(code **)(**(int **)(in_ECX + 0xfe0) + 8))(uVar8);
  vgui::Panel::solve(in_ECX);
  ppppfStack_2dc = (float ****)0x1003d2f5;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

