
void FUN_10065710(undefined4 param_1,undefined4 param_2,float param_3,float *param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  iVar2 = (*DAT_101b26dc)(0);
  iVar2 = *(int *)(iVar2 + 0xb94);
  *param_4 = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[4] = 0.0;
  param_4[5] = 0.0;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_4[8] = 0.0;
  if (*(int *)(iVar2 + 0x17c) == 0) {
    *param_4 = 0.5;
    param_4[1] = 0.5;
    param_4[2] = 0.5;
    return;
  }
  local_14 = param_1;
  local_10 = param_2;
  if (param_5 == 0) {
    local_c = param_3 - 256.0;
  }
  else {
    local_c = param_3 + 256.0;
  }
  iVar2 = FUN_10065890(*(undefined4 *)(iVar2 + 0xa4),&param_1,&local_14,param_4);
  if (iVar2 == 0) {
    iVar2 = (*DAT_101b2728)("sv_skycolor_r");
    iVar3 = (*DAT_101b2728)("sv_skycolor_g");
    iVar4 = (*DAT_101b2728)("sv_skycolor_b");
    fVar5 = (float10)FUN_100595f0(*(float *)(iVar2 + 0xc) / 255.0);
    pfVar1 = param_4;
    local_8 = (float)(fVar5 * (float10)0.25);
    param_4[3] = local_8;
    *param_4 = local_8;
    fVar5 = (float10)FUN_100595f0(*(float *)(iVar3 + 0xc) / 255.0);
    local_8 = (float)(fVar5 * (float10)0.25);
    pfVar1[4] = local_8;
    pfVar1[1] = local_8;
    fVar5 = (float10)FUN_100595f0(*(float *)(iVar4 + 0xc) / 255.0);
    pfVar1[5] = (float)(fVar5 * (float10)0.25);
    pfVar1[2] = (float)(fVar5 * (float10)0.25);
    pfVar1[6] = 0.0;
    pfVar1[7] = 0.0;
    pfVar1[8] = 1.0;
  }
  return;
}

