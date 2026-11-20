
void FUN_100690a0(float *param_1,byte *param_2)

{
  *param_1 = (float)*param_2 / 255.0;
  param_1[1] = (float)param_2[1] / 255.0;
  param_1[2] = (float)param_2[2] / 255.0;
  return;
}

