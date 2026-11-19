
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CL_CreateMove(undefined4 param_1,void *param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char *pcVar9;
  undefined8 local_10;
  undefined4 local_8;
  
                    /* 0x7a880  555  CL_CreateMove */
  if (param_3 != 0) {
    (*DAT_101b2690)(&local_10);
    FUN_10078520(param_1,&local_10);
    _memset(param_2,0,0x38);
    if (DAT_1018d27c == '\0') {
      (*DAT_101b2694)(&local_10);
    }
    fVar4 = (float10)FUN_10078840(&DAT_1054345c);
    *(float *)((int)param_2 + 0x14) =
         *(float *)((int)param_2 + 0x14) + (float)(fVar4 * (float10)*(float *)(DAT_10543378 + 0xc));
    fVar4 = (float10)FUN_10078840(&DAT_10543450);
    *(float *)((int)param_2 + 0x14) =
         *(float *)((int)param_2 + 0x14) - (float)(fVar4 * (float10)*(float *)(DAT_10543378 + 0xc));
    fVar4 = (float10)FUN_10078840(&DAT_105434b0);
    *(float *)((int)param_2 + 0x18) =
         (float)(fVar4 * (float10)*(float *)(DAT_1054336c + 0xc)) + *(float *)((int)param_2 + 0x18);
    fVar4 = (float10)FUN_10078840(&DAT_105434bc);
    *(float *)((int)param_2 + 0x18) =
         *(float *)((int)param_2 + 0x18) - (float)(fVar4 * (float10)*(float *)(DAT_1054336c + 0xc));
    if ((DAT_10543410 & 1) == 0) {
      fVar4 = (float10)FUN_10078840(&DAT_10543420);
      *(float *)((int)param_2 + 0x10) =
           (float)(fVar4 * (float10)*(float *)(DAT_10543370 + 0xc)) +
           *(float *)((int)param_2 + 0x10);
      fVar4 = (float10)FUN_10078840(&DAT_1054342c);
      *(float *)((int)param_2 + 0x10) =
           *(float *)((int)param_2 + 0x10) -
           (float)(fVar4 * (float10)*(float *)(DAT_10543374 + 0xc));
    }
    if ((((byte)DAT_10543530 & 1) != 0) && (DAT_10559515 != '\0')) {
      if (((byte)DAT_10543428 & 1) == 0) {
        if (((byte)DAT_10543434 & 1) == 0) {
          if (((byte)DAT_10543464 & 1) == 0) {
            if (((byte)DAT_10543458 & 1) == 0) goto LAB_1007aa18;
            pcVar9 = "dodgeleft";
          }
          else {
            pcVar9 = "dodgeright";
          }
        }
        else {
          pcVar9 = "dodgebackward";
        }
      }
      else {
        pcVar9 = "dodgeforward";
      }
      (*DAT_101b2654)(pcVar9);
    }
LAB_1007aa18:
    FUN_1007bad0(param_1,param_2);
  }
  *(undefined1 *)((int)param_2 + 0x20) = DAT_10543344;
  _DAT_10543344 = 0;
  *(undefined1 *)((int)param_2 + 0x21) = DAT_101af80c;
  _DAT_101af80c = 0;
  uVar2 = FUN_10078670(1);
  *(undefined2 *)((int)param_2 + 0x1e) = uVar2;
  FUN_1000b540();
  cVar1 = FUN_1000b960();
  if (cVar1 != '\0') {
    *(ushort *)((int)param_2 + 0x1e) = *(ushort *)((int)param_2 + 0x1e) & 0xfffe;
  }
  if (*(float *)(DAT_105435d4 + 0xc) != 0.0) {
    if (*(float *)((int)param_2 + 0x10) <= 0.0) {
      if (*(float *)((int)param_2 + 0x10) < 0.0) {
        *(ushort *)((int)param_2 + 0x1e) = *(ushort *)((int)param_2 + 0x1e) | 0x10;
      }
    }
    else {
      *(ushort *)((int)param_2 + 0x1e) = *(ushort *)((int)param_2 + 0x1e) | 8;
    }
  }
  (*DAT_101b2690)(&local_10);
  if (DAT_1018d228 != 0) {
    fVar6 = local_10._4_4_ - DAT_1018d238;
    if (fVar6 <= 180.0) {
      if (fVar6 < -180.0) {
        fVar6 = fVar6 + 360.0;
      }
    }
    else {
      fVar6 = fVar6 - 360.0;
    }
    if (-DAT_1018d23c <= fVar6) {
      fVar8 = local_10._4_4_;
      if (DAT_1018d23c < fVar6) {
        fVar8 = DAT_1018d23c + DAT_1018d238;
        goto LAB_1007ab2e;
      }
    }
    else {
      fVar8 = DAT_1018d238 - DAT_1018d23c;
LAB_1007ab2e:
      local_10 = CONCAT44(fVar8,(float)local_10);
    }
    fVar6 = DAT_1018d240;
    if ((DAT_1018d240 < (float)local_10) ||
       (fVar7 = (float)local_10, fVar6 = -DAT_1018d240, (float)local_10 < -DAT_1018d240)) {
      fVar7 = fVar6;
      local_10 = CONCAT44(local_10._4_4_,fVar7);
    }
    if (DAT_1018d27c != '\0') goto LAB_1007ab75;
    (*DAT_101b2694)(&local_10);
  }
  fVar7 = (float)local_10;
  fVar8 = local_10._4_4_;
LAB_1007ab75:
  if (DAT_10542bb8 == 0) {
    uVar5 = 0;
  }
  else {
    *(ulonglong *)((int)param_2 + 0x28) = CONCAT44(DAT_105595c0._4_4_,(undefined4)DAT_105595c0);
    uVar5 = 0x3f800000;
    *(undefined4 *)((int)param_2 + 0x30) = DAT_105595c8;
  }
  *(undefined4 *)((int)param_2 + 0x30) = uVar5;
  if (DAT_1018f724 == 0) {
    if (DAT_10542bb8 == 0) {
      *(undefined4 *)((int)param_2 + 4) = DAT_10543544;
      *(undefined4 *)((int)param_2 + 8) = DAT_10543548;
      uVar5 = DAT_1054354c;
    }
    else {
      *(undefined4 *)((int)param_2 + 4) = (undefined4)DAT_105595c0;
      *(undefined4 *)((int)param_2 + 8) = DAT_105595c0._4_4_;
      uVar5 = DAT_105595c8;
    }
    *(undefined4 *)((int)param_2 + 0xc) = uVar5;
  }
  else if (DAT_10542bb8 == 0) {
    *(float *)((int)param_2 + 4) = fVar7;
    *(float *)((int)param_2 + 8) = fVar8;
    *(undefined4 *)((int)param_2 + 0xc) = local_8;
    local_10 = CONCAT44(fVar8,fVar7);
    _DAT_10543544 = CONCAT44(fVar8,fVar7);
    DAT_1054354c = local_8;
  }
  else {
    *(undefined4 *)((int)param_2 + 4) = (undefined4)DAT_105595c0;
    *(undefined4 *)((int)param_2 + 8) = DAT_105595c0._4_4_;
    *(undefined4 *)((int)param_2 + 0xc) = DAT_105595c8;
    _DAT_10543544 = CONCAT44(DAT_105595c0._4_4_,(undefined4)DAT_105595c0);
    DAT_1054354c = DAT_105595c8;
  }
  iVar3 = FUN_1000b540();
  if (*(char *)(iVar3 + 0x1787c) == '\0') {
    if (*(float *)((int)param_2 + 0xc) != 0.0) {
      *(undefined4 *)((int)param_2 + 0xc) = 0;
    }
  }
  else if (*(float *)((int)param_2 + 0xc) != 1.0) {
    *(undefined4 *)((int)param_2 + 0xc) = 0x3f800000;
    *(undefined4 *)((int)param_2 + 0x34) = DAT_1054333c;
    return;
  }
  *(undefined4 *)((int)param_2 + 0x34) = DAT_1054333c;
  return;
}

