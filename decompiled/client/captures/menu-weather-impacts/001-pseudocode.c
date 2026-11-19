
void FUN_10085740(int param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  
  fVar3 = (float10)(*DAT_101b2644)("r_weather");
  if (2.0 <= (float)fVar3) {
    if (3999 < DAT_1054504c) {
      (*DAT_101b26a8)("Rain error: FX limit overflow!\n");
      return;
    }
    if (DAT_10190248 != DAT_10190240) {
      iVar1 = DAT_1019023c[DAT_10190248 * 0xd];
      DAT_1019023c[DAT_10190248 * 0xd] = *DAT_1019023c;
      *DAT_1019023c = DAT_10190248;
      pfVar2 = (float *)(DAT_1019023c + *DAT_1019023c * 0xd + 1);
      DAT_10190248 = iVar1;
      if (pfVar2 != (float *)0x0) {
        fVar3 = (float10)(*DAT_101b2714)(0x3f19999a,0x3f666666);
        pfVar2[5] = (float)fVar3;
        pfVar2[2] = *(float *)(param_1 + 8);
        pfVar2[3] = *(float *)(param_1 + 0xc);
        pfVar2[4] = *(float *)(param_1 + 0x10);
        pfVar2[4] = *(float *)(param_1 + 4);
        fVar3 = (float10)(*DAT_101b26e0)();
        *pfVar2 = (float)fVar3;
        fVar3 = (float10)(*DAT_101b2714)(0x3f333333,0x3f800000);
        pfVar2[6] = 1.4013e-45;
        pfVar2[1] = (float)fVar3;
        pfVar2[7] = 0.0;
        DAT_1054504c = DAT_1054504c + 1;
        return;
      }
    }
    (*DAT_101b26a8)("Rain error: failed to allocate FX object!\n");
  }
  return;
}

