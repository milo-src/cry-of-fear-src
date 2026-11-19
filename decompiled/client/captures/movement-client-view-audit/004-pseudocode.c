
void FUN_10078520(float param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (((byte)DAT_1054347c & 1) != 0) {
    param_1 = *(float *)(DAT_10543388 + 0xc) * param_1;
  }
  if ((DAT_10543410 & 1) != 0) {
    FUN_100b31b0();
    iVar2 = DAT_10543384;
    fVar3 = (float10)FUN_10078840(&DAT_10543420);
    *param_2 = *param_2 - (float)(fVar3 * (float10)(param_1 * *(float *)(iVar2 + 0xc)));
    fVar3 = (float10)FUN_10078840(&DAT_1054342c);
    *param_2 = *param_2 + (float)(fVar3 * (float10)(param_1 * *(float *)(iVar2 + 0xc)));
  }
  fVar3 = (float10)FUN_10078840(&DAT_10543444);
  fVar4 = (float10)FUN_10078840(&DAT_10543438);
  if (((float)fVar4 != 0.0) || ((float)fVar3 != 0.0)) {
    FUN_100b31b0();
  }
  fVar1 = *(float *)(DAT_10543368 + 0xc);
  fVar5 = *param_2;
  if (fVar1 < *param_2) {
    *param_2 = fVar1;
    fVar5 = fVar1;
  }
  if (fVar5 < -*(float *)(DAT_10543364 + 0xc)) {
    *param_2 = -*(float *)(DAT_10543364 + 0xc);
  }
  if (param_2[2] <= 50.0) {
    if (param_2[2] < -50.0) {
      param_2[2] = -50.0;
    }
    return;
  }
  param_2[2] = 50.0;
  return;
}

