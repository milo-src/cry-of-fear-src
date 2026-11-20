
void FUN_1007fd50(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (((*in_ECX == '\0') || (DAT_105440a8 == (int *)0x0)) ||
     (iVar2 = (*DAT_101b26c4)("-nomusic",0), iVar2 != 0)) {
LAB_1008012e:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 != (byte *)0x0) {
    pcVar6 = "ap3hall1end.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fdc8:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fdcd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fdc8;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fdcd:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "aparthall2end.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fe00:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fe05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fe00;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fe05:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "aparthall2end2.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fe36:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fe3b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fe36;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fe3b:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "aphall1end.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fe70:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fe75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fe70;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fe75:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "basement1end.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fea6:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007feab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fea6;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007feab:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "cityend.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007fee0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fee5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007fee0;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fee5:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "coopend.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007ff16:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007ff1b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007ff16;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007ff1b:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "doctorend.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1007ff50:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007ff55;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1007ff50;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007ff55:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pbVar7 = &DAT_10150a44;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_1007ff86:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007ff8b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_1007ff86;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007ff8b:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pbVar7 = &DAT_10150a50;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_1007ffc0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007ffc5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_1007ffc0;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007ffc5:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pbVar7 = &DAT_10150a5c;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_1007fff6:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1007fffb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_1007fff6;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1007fffb:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pbVar7 = &DAT_10150a68;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_10080030:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_10080035;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_10080030;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10080035:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "nightmareend.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_10080066:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_1008006b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_10080066;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1008006b:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "sawend.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100800a0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100800a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100800a0;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100800a5:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "sewerhit.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100800d6:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100800db;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100800d6;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100800db:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
    pcVar6 = "trainhit.mp3";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_10080110:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_10080115;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_10080110;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10080115:
    if (uVar4 == 0) {
      in_ECX[0xdc] = '\0';
    }
  }
  if (in_ECX[0xc4] != '\0') {
    *(byte **)(in_ECX + 200) = param_1;
    goto LAB_1008012e;
  }
  pbVar3 = *(byte **)(in_ECX + 200);
  if ((pbVar3 != (byte *)0x0) && (pbVar7 = param_1, param_1 != (byte *)0x0)) {
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_10080173:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_10080178;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_10080173;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10080178:
    if (uVar4 == 0) goto LAB_1008012e;
  }
  pbVar3 = param_1;
  pbVar7 = (byte *)(in_ECX + 0x36);
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100801a3:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100801a8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100801a3;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100801a8:
  if (uVar4 == 0) goto LAB_1008012e;
  in_ECX[0xcc] = '\0';
  in_ECX[0xcd] = '\0';
  in_ECX[0xce] = '\0';
  in_ECX[0xcf] = '\0';
  in_ECX[0xd0] = '\0';
  in_ECX[0xd1] = '\0';
  in_ECX[0xd2] = '\0';
  in_ECX[0xd3] = '\0';
  in_ECX[0xd4] = '\0';
  in_ECX[0xd5] = '\0';
  in_ECX[0xd6] = '\0';
  in_ECX[0xd7] = '\0';
  in_ECX[0xd8] = '\0';
  in_ECX[0xd9] = '\0';
  in_ECX[0xda] = '\0';
  in_ECX[0xdb] = '\0';
  uVar5 = (*DAT_101b2724)(param_1);
  FUN_1000c900(local_108,"%s/mp3/%s",uVar5);
  if (in_ECX[0xdc] == '\0') {
    if (DAT_105440b0 != (int *)0x0) {
      (**(code **)(*DAT_105440b0 + 0x18))();
    }
    DAT_105440b0 = (int *)(**(code **)(*DAT_105440a8 + 8))(local_108,0,1,1,0,0);
    if (DAT_105440b0 == (int *)0x0) goto LAB_100802c7;
    fVar9 = (float10)(*DAT_101b2644)("MP3Volume");
    fVar10 = 1.0;
    if ((float)fVar9 <= 1.0) {
      fVar10 = (float)fVar9;
    }
  }
  else {
    if (DAT_105440b0 != (int *)0x0) {
      (**(code **)(*DAT_105440b0 + 0x18))();
    }
    DAT_105440b0 = (int *)(**(code **)(*DAT_105440a8 + 8))(local_108,1,1,1,0,0);
    if (DAT_105440b0 == (int *)0x0) goto LAB_100802c7;
    fVar9 = (float10)(*DAT_101b2644)("MP3Volume");
    fVar10 = 1.0;
    if ((float)fVar9 <= 1.0) {
      fVar10 = (float)fVar9;
    }
  }
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar10;
  }
  (**(code **)(*DAT_105440b0 + 0x20))(fVar11);
  (**(code **)(*DAT_105440b0 + 0x10))(0);
LAB_100802c7:
  in_ECX[0xb8] = '\x01';
  in_ECX[0xb9] = '\0';
  in_ECX[0xba] = '\0';
  in_ECX[0xbb] = '\0';
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar3[(int)(in_ECX + 0x36 + (-1 - (int)param_1))] = bVar1;
  } while (bVar1 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

