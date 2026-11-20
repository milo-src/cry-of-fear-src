
float10 FUN_10094510(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)(*param_1 * *param_1 + 0.0 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  if (0.0 <= dVar1) {
    return (float10)(float)SQRT(dVar1);
  }
  __libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}

