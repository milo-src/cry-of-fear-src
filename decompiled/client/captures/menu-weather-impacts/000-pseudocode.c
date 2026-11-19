
void FUN_100862b0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  
  if (*(float *)(DAT_10543398 + 0xc) == 0.0) {
    return;
  }
  if (DAT_1054504c < 4000) {
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
        pfVar2[6] = 0.0;
        pfVar2[1] = (float)fVar3;
        pfVar2[7] = 0.0;
        DAT_1054504c = DAT_1054504c + 1;
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x100863a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101b26a8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100862e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_101b26a8)();
  return;
}

