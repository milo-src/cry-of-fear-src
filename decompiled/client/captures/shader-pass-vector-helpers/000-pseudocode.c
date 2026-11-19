
float10 FUN_100947c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  dVar5 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar6 = (float)dVar5;
  if (fVar6 != 0.0) {
    fVar4 = 1.0 / fVar6;
    *param_1 = fVar1 * fVar4;
    param_1[1] = fVar2 * fVar4;
    param_1[2] = fVar3 * fVar4;
  }
  return (float10)fVar6;
}

