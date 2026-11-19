
void FUN_10092390(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float local_c;
  float local_8;
  
  if (*DAT_1019023c != 0) {
    fVar7 = (float10)(*DAT_101b26e0)();
    DAT_10190244 = 0;
    if (*DAT_1019023c == 0) {
      pfVar6 = (float *)0x0;
    }
    else {
      pfVar6 = (float *)(DAT_1019023c + *DAT_1019023c * 0xd + 1);
    }
    uVar1 = FUN_10094580("sprites/waterring.spr");
    iVar2 = (*DAT_101b2700)(uVar1);
    (**(code **)(DAT_101b2750 + 0x2c))(iVar2,0);
    (**(code **)(DAT_101b2750 + 4))(5);
    (**(code **)(DAT_101b2750 + 0x28))(1);
    uVar1 = FUN_10094580("sprites/wsplash_x.spr");
    iVar3 = (*DAT_101b2700)(uVar1);
    (**(code **)(DAT_101b2750 + 0x2c))(iVar3,0);
    (**(code **)(DAT_101b2750 + 4))(5);
    (**(code **)(DAT_101b2750 + 0x28))(1);
    uVar1 = FUN_10094580("sprites/hi_rain.spr");
    iVar4 = (*DAT_101b2700)(uVar1);
    (**(code **)(DAT_101b2750 + 0x2c))(iVar4,0);
    (**(code **)(DAT_101b2750 + 4))(5);
    (**(code **)(DAT_101b2750 + 0x28))(1);
    while (pfVar6 != (float *)0x0) {
      fVar10 = pfVar6[6];
      local_8 = 5.0;
      if (fVar10 == 1.4013e-45) {
        if ((int)pfVar6[7] < *(int *)(iVar3 + 0x48) + -1) {
          pfVar6[7] = (float)((int)pfVar6[7] + 1);
        }
        local_c = 0.4;
        local_8 = 5.0;
      }
      else if (fVar10 == 2.8026e-45) {
        fVar8 = (float10)(*DAT_101b26e0)();
        fVar9 = (float)(fVar8 - (float10)*pfVar6) / pfVar6[1];
        fVar10 = 1.0;
        if (fVar9 <= 1.0) {
          fVar10 = fVar9;
        }
        local_c = pfVar6[5] - pfVar6[5] * fVar10;
        local_8 = fVar10 * 1.2 * (float)(int)pfVar6[8];
      }
      else if (fVar10 == 4.2039e-45) {
        fVar8 = (float10)(*DAT_101b26e0)();
        fVar9 = (float)(fVar8 - (float10)*pfVar6) / pfVar6[1];
        fVar10 = 1.0;
        if (fVar9 <= 1.0) {
          fVar10 = fVar9;
        }
        fVar9 = pfVar6[0xb] - (float)(int)(fVar10 * 512.0);
        pfVar6[0xb] = fVar9;
        pfVar6[4] = fVar9;
        iVar5 = (*DAT_101b26ec)(pfVar6 + 2,0);
        if (((pfVar6[4] <= pfVar6[0xb] - 512.0) || (iVar5 == -2)) || (iVar5 == -3)) {
          (*DAT_101b2704)("ambience/drip.wav",0x3f800000,pfVar6 + 2);
          local_c = 0.0;
        }
        else {
          local_c = pfVar6[5] - pfVar6[5] * fVar10;
        }
      }
      else {
        local_8 = ((float)fVar7 - *pfVar6) * 25.0;
        local_c = (((pfVar6[1] + *pfVar6) - (float)fVar7) / pfVar6[1]) * pfVar6[5];
      }
      fVar10 = pfVar6[6];
      if (fVar10 == 1.4013e-45) {
        fVar10 = pfVar6[7];
        iVar5 = iVar3;
      }
      else if ((fVar10 == 2.8026e-45) || (fVar10 != 4.2039e-45)) {
        fVar10 = 0.0;
        iVar5 = iVar2;
      }
      else {
        fVar10 = 0.0;
        iVar5 = iVar4;
      }
      (**(code **)(DAT_101b2750 + 0x2c))(iVar5,fVar10);
      (**(code **)(DAT_101b2750 + 0x10))(0x3f800000,0x3f800000,0x3f800000,local_c);
      (**(code **)(DAT_101b2750 + 8))(2);
      (**(code **)(DAT_101b2750 + 0x18))(0,0);
      (**(code **)(DAT_101b2750 + 0x20))(pfVar6[2] - local_8,pfVar6[3] - local_8,pfVar6[4]);
      (**(code **)(DAT_101b2750 + 0x18))(0,0x3f800000);
      (**(code **)(DAT_101b2750 + 0x20))(pfVar6[2] - local_8,pfVar6[3] + local_8,pfVar6[4]);
      (**(code **)(DAT_101b2750 + 0x18))(0x3f800000,0x3f800000);
      (**(code **)(DAT_101b2750 + 0x20))(local_8 + pfVar6[2],pfVar6[3] + local_8,pfVar6[4]);
      (**(code **)(DAT_101b2750 + 0x18))(0x3f800000,0);
      (**(code **)(DAT_101b2750 + 0x20))(local_8 + pfVar6[2],pfVar6[3] - local_8,pfVar6[4]);
      (**(code **)(DAT_101b2750 + 0xc))();
      if (0.0 < local_c) {
        DAT_10190244 = DAT_1019023c[DAT_10190244 * 0xd];
      }
      else {
        iVar5 = DAT_1019023c[DAT_10190244 * 0xd];
        DAT_1019023c[DAT_10190244 * 0xd] = DAT_1019023c[iVar5 * 0xd];
        DAT_1019023c[iVar5 * 0xd] = DAT_10190248;
        DAT_10190248 = iVar5;
      }
      if (DAT_1019023c[DAT_10190244 * 0xd] == 0) {
        return;
      }
      pfVar6 = (float *)(DAT_1019023c + DAT_1019023c[DAT_10190244 * 0xd] * 0xd + 1);
    }
  }
  return;
}

