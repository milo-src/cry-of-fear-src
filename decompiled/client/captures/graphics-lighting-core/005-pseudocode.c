
undefined4 FUN_1005f2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  FUN_10080850(param_3,param_2);
  fVar5 = (float10)FUN_10080910();
  fVar6 = (float10)FUN_10080910();
  fVar7 = (float10)FUN_10080910();
  iVar1 = FUN_100808b0();
  iVar2 = FUN_100808b0();
  iVar3 = FUN_100808b0();
  pfVar4 = (float *)FUN_1005c0f0(0);
  *pfVar4 = (float)fVar5;
  pfVar4[1] = (float)fVar6;
  pfVar4[2] = (float)fVar7;
  pfVar4[3] = (float)iVar1 * 10.0;
  fVar5 = (float10)(*DAT_101b26e0)();
  pfVar4[8] = (float)iVar3 * 10.0;
  pfVar4[4] = 0.7;
  pfVar4[5] = 0.6;
  pfVar4[6] = 0.5;
  pfVar4[7] = (float)(fVar5 + (float10)((float)iVar2 / 10.0));
  return 1;
}

