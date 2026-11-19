
void FUN_100b2140(float param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (*DAT_101b2698)();
  if (1 < iVar1) {
    fVar2 = (float10)FUN_10094510(param_2);
    if ((0.001 < (double)fVar2) ||
       (fVar2 = (float10)FUN_10094510(&DAT_10559620), 0.001 < (double)fVar2)) {
      FUN_10094770(param_2,param_1,&DAT_10559620,param_2);
      fVar5 = 1.0 - param_1 * 9.0;
      fVar3 = 0.0;
      if (0.0 <= fVar5) {
        fVar3 = fVar5;
      }
      FUN_10094880(&DAT_10559620,fVar3,&DAT_10559620);
      fVar3 = 0.0;
      if (0.0 <= param_1 * 65.0) {
        fVar3 = param_1 * 65.0;
      }
      fVar5 = 2.0;
      if (fVar3 <= 2.0) {
        fVar5 = fVar3;
      }
      FUN_10094770(&DAT_10559620,-fVar5,param_2,&DAT_10559620);
      fVar3 = -89.0;
      if (-89.0 <= *param_2) {
        fVar3 = *param_2;
      }
      fVar5 = -89.0;
      if (-89.0 <= param_2[2]) {
        fVar5 = param_2[2];
      }
      fVar4 = 89.0;
      if (fVar3 <= 89.0) {
        fVar4 = fVar3;
      }
      fVar3 = -179.0;
      if (-179.0 <= param_2[1]) {
        fVar3 = param_2[1];
      }
      fVar6 = 89.0;
      if (fVar5 <= 89.0) {
        fVar6 = fVar5;
      }
      *param_2 = fVar4;
      fVar5 = 179.0;
      if (fVar3 <= 179.0) {
        fVar5 = fVar3;
      }
      param_2[2] = fVar6;
      param_2[1] = fVar5;
    }
    return;
  }
  fVar2 = (float10)FUN_100947c0();
  fVar3 = (float)((double)fVar2 - ((double)fVar2 * 0.5 + 10.0) * (double)param_1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_10094880(param_2,fVar3,param_2);
  return;
}

