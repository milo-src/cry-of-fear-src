
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085980(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  undefined1 local_90 [4];
  int local_8c;
  undefined1 local_7c [8];
  float local_74;
  double local_4c;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  float local_c;
  int local_8;
  
  DAT_10545030 = DAT_10545028;
  fVar7 = (float10)(*DAT_101b26e0)();
  DAT_10545028 = (double)fVar7;
  DAT_10545038 = DAT_10545028 - DAT_10545030;
  local_38 = DAT_10545028;
  if (DAT_10545030 == 0.0) {
    fVar7 = (float10)(*DAT_101b26e0)();
    DAT_10545040 = (double)fVar7;
    return;
  }
  if ((DAT_10545008 == 0) && (*DAT_1019022c == 0)) {
    DAT_10545040 = DAT_10545028;
    return;
  }
  if (DAT_10545038 != 0.0) {
    DAT_10190234 = 0;
    local_4c = 1.0 / (double)DAT_10545008;
    if (DAT_10190230 < 2) {
LAB_100860bc:
      DAT_10545008 = 0;
      (*DAT_101b26a8)();
    }
    else {
      if (*DAT_1019022c == 0) {
        iVar2 = (*DAT_101b26d4)();
        local_8 = 0;
        local_c = 0.0;
      }
      else {
        pfVar1 = (float *)(DAT_1019022c + *DAT_1019022c * 10 + 1);
        iVar2 = (*DAT_101b26d4)();
        fVar5 = 0.0;
        local_c = 0.0;
        local_8 = 0;
        while (pfVar1 != (float *)0x0) {
          fVar3 = pfVar1[4];
          if (DAT_10545020 == 0) {
            dVar8 = DAT_10545038 * 900.0;
          }
          else {
            dVar8 = DAT_10545038 * 200.0;
          }
          pfVar1[4] = (float)((double)fVar3 - dVar8);
          fVar9 = (float)((double)pfVar1[6] * DAT_10545038 + (double)pfVar1[2]);
          pfVar1[2] = fVar9;
          pfVar1[3] = (float)((double)pfVar1[7] * DAT_10545038 + (double)pfVar1[3]);
          if (pfVar1[1] <= (float)((double)fVar3 - dVar8)) {
            DAT_10190234 = DAT_1019022c[DAT_10190234 * 10];
          }
          else {
            if (iVar2 != 0) {
              fVar7 = (float10)FUN_100855b0(*(undefined4 *)(iVar2 + 0xb48),
                                            *(undefined4 *)(iVar2 + 0xb4c),
                                            *(undefined4 *)(iVar2 + 0xb50),fVar9,pfVar1[3]);
              local_14 = (float)fVar7;
              fVar5 = local_c;
              if (local_14 <= 500.0) {
                fVar3 = pfVar1[8];
                if (fVar3 == 1.4013e-45) {
                  FUN_100862b0();
                  fVar3 = pfVar1[8];
                }
                fVar5 = local_c;
                if (fVar3 == 2.8026e-45) {
                  FUN_10085740();
                  fVar5 = local_c;
                }
              }
            }
            if (*(float *)(DAT_1018d1f8 + 0xc) != 0.0) {
              local_8 = local_8 + 1;
              fVar5 = (float)((DAT_10545028 - (double)*pfVar1) + (double)fVar5);
              local_c = fVar5;
            }
            iVar6 = DAT_1019022c[DAT_10190234 * 10];
            DAT_1019022c[DAT_10190234 * 10] = DAT_1019022c[iVar6 * 10];
            DAT_1019022c[iVar6 * 10] = DAT_10190238;
            DAT_10545048 = DAT_10545048 + -1;
            DAT_10190238 = iVar6;
          }
          if (DAT_1019022c[DAT_10190234 * 10] == 0) break;
          pfVar1 = (float *)(DAT_1019022c + DAT_1019022c[DAT_10190234 * 10] * 10 + 1);
        }
      }
      if (DAT_10545020 == 0) {
        dVar8 = DAT_10545038 * 900.0;
        local_24 = (DAT_10545024 + 4096.0) / 900.0;
      }
      else {
        local_24 = (DAT_10545024 + 4096.0) / 200.0;
        dVar8 = DAT_10545038 * 200.0;
      }
      fVar5 = 0.0;
      iVar6 = 0;
      local_38 = (double)CONCAT44((int)dVar8,(undefined4)local_38);
      if (DAT_10545040 < DAT_10545028) {
        local_14 = 0.0;
        local_10 = 0;
        do {
          DAT_10545040 = DAT_10545040 + local_4c;
          if (*(float *)(DAT_1018d1f8 + 0xc) != 0.0) {
            fVar5 = (float)((int)fVar5 + 1);
            local_14 = fVar5;
          }
          if (3999 < DAT_10545048) {
            return;
          }
          fVar7 = (float10)(*DAT_101b2714)(*(float *)(iVar2 + 0xb48) - _DAT_1054500c,
                                           *(float *)(iVar2 + 0xb48) + _DAT_1054500c);
          local_20 = (float)fVar7;
          fVar7 = (float10)(*DAT_101b2714)(*(float *)(iVar2 + 0xb4c) - _DAT_1054500c);
          local_18 = DAT_10545024;
          local_1c = (float)fVar7;
          fVar7 = (float10)(*DAT_101b2714)(DAT_10545018 * -1.0);
          local_28 = (float)(fVar7 + (float10)_DAT_10545010);
          fVar7 = (float10)(*DAT_101b2714)();
          local_44 = local_28 * local_24 + local_20;
          local_2c = (float)(fVar7 + (float10)_DAT_10545014);
          local_40 = local_2c * local_24 + local_1c;
          local_3c = local_18 - 4096.0;
          (**(code **)(DAT_101b2758 + 0x38))(2);
          (**(code **)(DAT_101b2758 + 0x3c))(&local_20,&local_44,1,0xffffffff,local_90);
          if (local_8c == 0) {
            iVar6 = (*DAT_101b26ec)(local_7c);
            fVar3 = local_74;
            if (iVar6 == -3) {
              iVar4 = (*DAT_101b26f0)();
              if (iVar4 < 1) {
                (*DAT_101b26a8)();
                iVar6 = local_10;
              }
              else {
                iVar4 = (*DAT_101b26dc)();
                if ((iVar4 != 0) && (*(int *)(iVar4 + 0xb94) != 0)) {
                  fVar3 = *(float *)(iVar4 + 0x340);
                  goto LAB_10085eef;
                }
                (*DAT_101b26a8)();
                iVar6 = local_10;
              }
            }
            else {
LAB_10085eef:
              local_30 = fVar3;
              if (fVar3 <= local_18) {
                if (DAT_10190238 == DAT_10190230) goto LAB_100860bc;
                iVar4 = DAT_1019022c[DAT_10190238 * 10];
                DAT_1019022c[DAT_10190238 * 10] = *DAT_1019022c;
                *DAT_1019022c = DAT_10190238;
                pfVar1 = (float *)(DAT_1019022c + *DAT_1019022c * 10 + 1);
                DAT_10190238 = iVar4;
                if (pfVar1 == (float *)0x0) goto LAB_100860bc;
                fVar7 = (float10)(*DAT_101b2714)(0);
                local_18 = (float)((float10)local_18 - fVar7);
                fVar7 = (float10)(*DAT_101b2714)();
                pfVar1[5] = (float)fVar7;
                pfVar1[2] = local_20;
                pfVar1[3] = local_1c;
                pfVar1[4] = local_18;
                pfVar1[6] = local_28;
                pfVar1[7] = local_2c;
                *pfVar1 = (float)DAT_10545028;
                pfVar1[1] = local_30;
                pfVar1[8] = (float)((iVar6 != -3) + 1);
                DAT_10545048 = DAT_10545048 + 1;
                fVar5 = local_14;
                iVar6 = local_10;
              }
              else {
                (*DAT_101b26a8)();
                iVar6 = local_10;
              }
            }
          }
          else if (*(float *)(DAT_1018d1f8 + 0xc) != 0.0) {
            local_10 = iVar6 + 1;
            iVar6 = local_10;
          }
        } while (DAT_10545040 < DAT_10545028);
      }
      if (*(float *)(DAT_1018d1f8 + 0xc) != 0.0) {
        (*DAT_101b26a8)("Rain info: Drips exist: %i\n",DAT_10545048);
        (*DAT_101b26a8)("Rain info: FXs exist: %i\n",DAT_1054504c);
        (*DAT_101b26a8)("Rain info: Attempted/Dropped: %i, %i\n",fVar5,iVar6);
        if (local_8 == 0) {
          (*DAT_101b26a8)();
          return;
        }
        (*DAT_101b26a8)("Rain info: Average drip life time: %f\n",(double)(local_c / (float)local_8)
                       );
        return;
      }
    }
  }
  return;
}

