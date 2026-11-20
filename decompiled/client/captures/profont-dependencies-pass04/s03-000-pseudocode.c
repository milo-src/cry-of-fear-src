
void FUN_1003b0c0(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_40;
  uint *puStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  uint *puStack_2c;
  int *piStack_28;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  piStack_28 = (int *)0x1003b0d1;
  fVar9 = (float10)(*DAT_101b26e0)();
  local_8 = (float)fVar9;
  if ((char)in_ECX[0x212] == '\0') {
    piStack_28 = (int *)0x1003b3ee;
    cVar1 = (**(code **)(*(int *)in_ECX[0xec] + 0x28))();
    if (cVar1 != '\0') {
      uVar11 = 0;
LAB_1003b3f4:
      (**(code **)(*(int *)in_ECX[0xec] + 0x24))(uVar11);
    }
LAB_1003b3ff:
    cVar1 = (**(code **)(*(int *)in_ECX[0x39d] + 0x28))();
    if (cVar1 == '\x01') {
      (**(code **)(*(int *)in_ECX[0x39d] + 0x24))(0);
    }
  }
  else if ((float)in_ECX[0x214] <= local_8) {
    piVar6 = (int *)in_ECX[0x213];
    iVar2 = (int)piVar6 + -0xff;
    piStack_28 = piVar6;
    if ((int)piVar6 < 0xff) {
      piStack_28 = (int *)((int)piVar6 + 10);
      in_ECX[0x213] = (int)piStack_28;
      iVar2 = (int)piVar6 + -0xf5;
    }
    if (piStack_28 != (int *)0xff && SBORROW4((int)piStack_28,0xff) == iVar2 < 0) {
      in_ECX[0x213] = 0xff;
      piStack_28 = (int *)0xff;
    }
    puStack_2c = (uint *)0xff;
    iStack_30 = 0xff;
    iStack_34 = 0xff;
    piStack_38 = (int *)0x1003b24f;
    (**(code **)(*(int *)in_ECX[0xec] + 0x120))();
    piStack_38 = &local_c;
    puStack_3c = &local_18;
    iStack_40 = 0x1003b262;
    (**(code **)(*(int *)in_ECX[0xec] + 4))();
    if (-0x30 < local_c) {
      local_c = local_c + -2;
    }
    if (local_c < -0x30) {
      local_c = -0x30;
    }
    iStack_40 = local_c;
    (*(code *)**(undefined4 **)in_ECX[0xec])();
    (*(code *)**(undefined4 **)in_ECX[0x39d])();
    piVar6 = (int *)in_ECX[0x39e];
    vgui::Color::Color((Color *)&uStack_58,0xff,0xff,0xff,in_ECX[0x213]);
    (**(code **)(*piVar6 + 0xc))();
    if (0xfe < in_ECX[0x213]) {
      if (in_ECX[0x211] == 1) {
        piVar6 = in_ECX + 0x141;
        in_ECX[0x211] = 2;
        iVar2 = (int)in_ECX + 0x505;
        piVar4 = piVar6;
        do {
          iVar5 = *piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
        } while ((char)iVar5 != '\0');
LAB_1003b347:
        iVar5 = *(int *)in_ECX[0xec];
        if (2 < (uint)((int)piVar4 - iVar2)) {
          (**(code **)(iVar5 + 0x200))((int *)in_ECX[0xec],piVar6);
          (**(code **)(*(int *)in_ECX[0x3d5] + 0xc))(piVar6,&local_10,&local_14);
          (*(code *)**(undefined4 **)in_ECX[0xec])(DAT_1018f430 / 2 + -400,0xffffffd0);
          *(undefined1 *)(in_ECX + 0x212) = 1;
          in_ECX[0x213] = 0xff;
          fVar9 = (float10)(*DAT_101b26e0)();
          in_ECX[0x214] = (int)(float)(fVar9 + (float10)5.0);
          goto LAB_1003b41d;
        }
        pcVar3 = *(code **)(iVar5 + 0x28);
      }
      else {
        if (in_ECX[0x211] == 2) {
          piVar6 = in_ECX + 0x181;
          in_ECX[0x211] = 3;
          iVar2 = (int)in_ECX + 0x605;
          piVar4 = piVar6;
          do {
            iVar5 = *piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
          } while ((char)iVar5 != '\0');
          goto LAB_1003b347;
        }
        pcVar3 = *(code **)(*(int *)in_ECX[0xec] + 0x28);
      }
      cVar1 = (*pcVar3)();
      if (cVar1 == '\0') {
        *(undefined1 *)(in_ECX + 0x212) = 0;
        uVar11 = 1;
        goto LAB_1003b3f4;
      }
      goto LAB_1003b3ff;
    }
  }
  else {
    piStack_28 = (int *)0x1003b100;
    cVar1 = (**(code **)(*(int *)in_ECX[0xec] + 0x28))();
    if (cVar1 == '\0') {
      piStack_28 = (int *)0x1;
      puStack_2c = (uint *)0x1003b111;
      (**(code **)(*(int *)in_ECX[0xec] + 0x24))();
    }
    piStack_28 = (int *)0x1003b11e;
    cVar1 = (**(code **)(*(int *)in_ECX[0x39d] + 0x28))();
    if (cVar1 == '\0') {
      piStack_28 = (int *)0x1;
      puStack_2c = (uint *)0x1003b12f;
      (**(code **)(*(int *)in_ECX[0x39d] + 0x24))();
    }
    iVar2 = in_ECX[0x213];
    if (0 < iVar2) {
      iVar2 = iVar2 + -10;
      in_ECX[0x213] = iVar2;
    }
    if (iVar2 < 0) {
      in_ECX[0x213] = 0;
    }
    piStack_28 = &local_c;
    puStack_2c = &local_18;
    iStack_30 = 0x1003b163;
    (**(code **)(*(int *)in_ECX[0xec] + 4))();
    if (local_c < 0) {
      local_c = local_c + 2;
    }
    if (0 < local_c) {
      local_c = 0;
    }
    iStack_34 = DAT_1018f430 / 2 + -400;
    piStack_38 = (int *)0x1003b192;
    iStack_30 = local_c;
    (*(code *)**(undefined4 **)in_ECX[0x39d])();
    piVar6 = (int *)in_ECX[0x39e];
    uStack_54 = 0x1003b1b7;
    vgui::Color::Color((Color *)&iStack_40,0xff,0xff,0xff,in_ECX[0x213]);
    (**(code **)(*piVar6 + 0xc))();
    (*(code *)**(undefined4 **)in_ECX[0xec])();
    uStack_54 = 0xff;
    uStack_58 = 0xff;
    (**(code **)(*(int *)in_ECX[0xec] + 0x120))();
  }
LAB_1003b41d:
  piVar6 = in_ECX + 0x3a6;
  if ((char)in_ECX[0x3a6] != '\0') {
    cVar1 = *(char *)((int)in_ECX + 0xf31);
    if ((cVar1 != '\0') && ((float)in_ECX[0x3cd] <= local_8 && local_8 != (float)in_ECX[0x3cd])) {
      *(undefined2 *)(in_ECX + 0x3cc) = 1;
      in_ECX[0x3cb] = 0;
      piVar4 = piVar6;
      do {
        iVar2 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar2 != '\0');
      cVar1 = '\0';
      in_ECX[0x3cf] = (int)piVar4 - ((int)in_ECX + 0xe99);
    }
    if (((float)in_ECX[0x3ce] <= local_8 && local_8 != (float)in_ECX[0x3ce]) &&
       (in_ECX[0x3ce] = (int)(local_8 + 0.025), (char)in_ECX[0x3c7] == '\0')) {
      piVar4 = piVar6;
      do {
        iVar2 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar2 != '\0');
      if (in_ECX[0x3cf] < (int)piVar4 - ((int)in_ECX + 0xe99)) {
        in_ECX[0x3cf] = in_ECX[0x3cf] + 1;
      }
    }
    if ((char)in_ECX[0x3cc] == '\0') {
      if (cVar1 == '\0') {
        fVar10 = (float)in_ECX[0x3cb];
        if (0.0 < fVar10) {
          fVar10 = (float)((double)fVar10 - DAT_1018d1b8 * 250.0);
          in_ECX[0x3cb] = (int)fVar10;
        }
        if (fVar10 < 0.0) {
          *(undefined1 *)((int)in_ECX + 0xf31) = 1;
          in_ECX[0x3cb] = 0;
          in_ECX[0x3cd] = (int)(local_8 + 3.0);
        }
      }
    }
    else if (((char)in_ECX[0x3cc] == '\x01') && (cVar1 == '\0')) {
      fVar10 = (float)in_ECX[0x3cb];
      if ((double)fVar10 < 255.0) {
        fVar10 = (float)(DAT_1018d1b8 * 125.0 + (double)fVar10);
        in_ECX[0x3cb] = (int)fVar10;
      }
      if (255.0 < fVar10) {
        *(undefined1 *)(in_ECX + 0x3cc) = 0;
        in_ECX[0x3cb] = 0x437f0000;
        *(char *)piVar6 = '\0';
      }
    }
    (**(code **)(*in_ECX + 0x188))(in_ECX[0x3a5]);
    if (in_ECX[0x3d0] < 6) {
      uVar12 = 0xff;
      uVar11 = 0xff;
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
    }
    (**(code **)(*in_ECX + 400))(0xff,uVar11,uVar12,(int)(float)in_ECX[0x3cb]);
    (**(code **)(*(int *)in_ECX[0x3a5] + 0xc))(piVar6,&local_c,&local_10);
    iVar2 = DAT_1018f430 / 2 - local_c / 2;
    local_14 = DAT_1018f434 / 2 - local_10 / 2;
    (**(code **)(*in_ECX + 0x198))(iVar2,local_14);
    if (((char)*piVar6 != '\0') && (in_ECX[0x3d0] < 6)) {
      piVar4 = piVar6;
      do {
        iVar5 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar5 != '\0');
      iVar5 = (int)piVar4 - ((int)in_ECX + 0xe99);
      (*DAT_101b2634)(iVar2,local_10 + local_14,
                      (int)(((float)in_ECX[0x3cf] /
                            (float)((double)iVar5 + (double)(&DAT_1013f5b0)[-(iVar5 >> 0x1f)])) *
                           (float)local_c),2,0xff,0xff,0xff,(int)(255.0 - (float)in_ECX[0x3cb]));
    }
    (**(code **)(*(int *)in_ECX[0xeb] + 8))(DAT_1018f430,0x40);
    (**(code **)(*(int *)in_ECX[0xeb] + 0x200))((int *)in_ECX[0xeb],piVar6);
    (*(code *)**(undefined4 **)in_ECX[0xeb])(0,DAT_1018f434 / 2 + -0x20);
    (**(code **)(*(int *)in_ECX[0xeb] + 0x21c))(4);
    if (in_ECX[0x3d0] < 6) {
      uVar12 = 0xff;
      uVar11 = 0xff;
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
    }
    (**(code **)(*(int *)in_ECX[0xeb] + 0x120))(0xff,uVar11,uVar12,(int)(float)in_ECX[0x3cb]);
  }
  fVar9 = (float10)(*DAT_101b2644)("cl_subtitles");
  if ((int)fVar9 == 0) {
    return;
  }
  if ((char)in_ECX[0x35] == '\0') {
    piVar6 = in_ECX + 0x35;
    in_ECX[0x33] = 0;
    in_ECX[0x34] = 0;
    in_ECX[0x31] = 0;
    in_ECX[0x32] = 0;
    in_ECX[0x2f] = 5;
    do {
      iVar2 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
    } while ((char)iVar2 != '\0');
    if (1 < (uint)((int)piVar6 - ((int)in_ECX + 0xd5))) {
      *(undefined1 *)(in_ECX + 0x35) = 0;
    }
    pcVar7 = (char *)((int)in_ECX + 0x1d5);
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar7 - ((int)in_ECX + 0x1d6)) < 2) {
      return;
    }
    *(undefined1 *)((int)in_ECX + 0x1d5) = 0;
    return;
  }
  pcVar7 = (char *)((int)in_ECX + 0x1d5);
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar8 = (int)pcVar7 - ((int)in_ECX + 0x1d6);
  piVar4 = in_ECX + 0x35;
  local_14 = (int)in_ECX + 0xd5;
  do {
    iVar2 = *piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
  } while ((char)iVar2 != '\0');
  if ((uint)((int)piVar4 - local_14) < 2) {
    return;
  }
  cVar1 = *(char *)((int)in_ECX + 0xf1d);
  if ((cVar1 != '\0') && ((float)in_ECX[0x3c8] <= local_8 && local_8 != (float)in_ECX[0x3c8])) {
    *(undefined2 *)(in_ECX + 0x3c7) = 1;
    in_ECX[0x3c6] = 0;
    in_ECX[0x30] = 0;
    do {
      iVar2 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
    } while ((char)iVar2 != '\0');
    in_ECX[0x3ca] = (int)piVar6 - ((int)in_ECX + 0xe99);
    cVar1 = '\0';
  }
  if ((char)in_ECX[0x3c7] == '\0') {
    if (cVar1 == '\0') {
      fVar10 = (float)in_ECX[0x3c6];
      if (0.0 < fVar10) {
        fVar10 = (float)((double)fVar10 - DAT_1018d1b8 * 500.0);
        in_ECX[0x3c6] = (int)fVar10;
      }
      if (fVar10 < 0.0) {
        *(undefined1 *)((int)in_ECX + 0xf1d) = 1;
        in_ECX[0x3c6] = 0;
        in_ECX[0x3c8] = (int)(local_8 + 4.0);
      }
    }
  }
  else if (((char)in_ECX[0x3c7] == '\x01') && (cVar1 == '\0')) {
    fVar10 = (float)in_ECX[0x3c6];
    if ((double)fVar10 < 255.0) {
      fVar10 = (float)(DAT_1018d1b8 * 500.0 + (double)fVar10);
      in_ECX[0x3c6] = (int)fVar10;
    }
    if (255.0 < fVar10) {
      *(undefined1 *)(in_ECX + 0x3c7) = 0;
      in_ECX[0x3c6] = 0x437f0000;
      *(undefined1 *)(in_ECX + 0x35) = 0;
    }
  }
  fVar10 = (float)in_ECX[0x3c6];
  local_18 = uVar8;
  (**(code **)(*in_ECX + 0x188))(in_ECX[0x3d5]);
  switch(in_ECX[0x2f]) {
  case 0:
  case 3:
    uVar12 = 0xff;
    goto LAB_1003b934;
  case 1:
    uVar13 = 0xff;
    uVar12 = 0x80;
    uVar11 = 0;
    break;
  case 2:
  case 6:
    uVar12 = 0;
LAB_1003b934:
    uVar13 = 0;
    uVar11 = 0xff;
    break;
  case 4:
    uVar13 = 0;
    uVar12 = 0xff;
    uVar11 = 0;
    break;
  case 5:
    uVar13 = 200;
    uVar12 = 200;
    uVar11 = 200;
    break;
  default:
    goto switchD_1003b8f1_default;
  }
  (**(code **)(*in_ECX + 400))(uVar11,uVar12,uVar13,(int)fVar10);
switchD_1003b8f1_default:
  (**(code **)(*(int *)in_ECX[0x3d5] + 0xc))(in_ECX + 0x35,&local_c,&local_8);
  if (1 < uVar8) {
    (**(code **)(*(int *)in_ECX[0x3d5] + 0xc))((int)in_ECX + 0x1d5,&local_14,&local_8);
  }
  if (in_ECX[0x2f] < 6) {
    local_10 = DAT_1018f430 / 2 - local_c / 2;
    iVar2 = (int)local_8 * 2;
    iVar5 = DAT_1018f434;
  }
  else {
    local_10 = 10;
    iVar5 = DAT_1018f434 / 2;
    iVar2 = (int)local_8 / 2;
  }
  iVar5 = iVar5 - iVar2;
  if (1 < uVar8) {
    iVar5 = iVar5 - (int)local_8;
  }
  (**(code **)(*in_ECX + 0x198))(local_10,iVar5);
  (**(code **)(*(int *)in_ECX[0xea] + 8))(DAT_1018f430,0x40);
  (**(code **)(*(int *)in_ECX[0xea] + 0x200))((int *)in_ECX[0xea],in_ECX + 0x35);
  (**(code **)(*(int *)in_ECX[0x3d5] + 0xc))(in_ECX + 0x35,&local_c,&local_8);
  (*(code *)**(undefined4 **)in_ECX[0xea])(0,DAT_1018f434 + DAT_101b2bd0 * -3);
  (**(code **)(*(int *)in_ECX[0xea] + 0x21c))(4);
  switch(in_ECX[0x2f]) {
  case 0:
  case 3:
    uVar12 = 0xff;
    goto LAB_1003baa0;
  case 1:
    uVar13 = 0xff;
    uVar12 = 0x80;
    uVar11 = 0;
    break;
  case 2:
  case 6:
    uVar12 = 0;
LAB_1003baa0:
    uVar13 = 0;
    uVar11 = 0xff;
    break;
  case 4:
    uVar13 = 0;
    uVar12 = 0xff;
    uVar11 = 0;
    break;
  case 5:
    uVar13 = 200;
    uVar12 = 200;
    uVar11 = 200;
    break;
  default:
    goto switchD_1003ba5d_default;
  }
  (**(code **)(*(int *)in_ECX[0xea] + 0x120))(uVar11,uVar12,uVar13,(int)fVar10);
switchD_1003ba5d_default:
  if (local_18 < 2) {
    return;
  }
  (**(code **)(*(int *)in_ECX[0x3d5] + 0xc))((int)in_ECX + 0x1d5,&local_c,&local_8);
  (**(code **)(*in_ECX + 0x198))(DAT_1018f430 / 2 - local_c / 2,DAT_1018f434 + (int)local_8 * -2);
  return;
}

