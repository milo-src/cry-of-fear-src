
float10 FUN_100595f0(float param_1)

{
  double dVar1;
  
  if (DAT_101cc084 == 1.0) {
    return (float10)DAT_101cc08c * (float10)param_1 + (float10)DAT_101cc088;
  }
  dVar1 = (double)param_1;
  FUN_100ff550();
  return (float10)(float)(dVar1 * (double)DAT_101cc08c + (double)DAT_101cc088);
}

