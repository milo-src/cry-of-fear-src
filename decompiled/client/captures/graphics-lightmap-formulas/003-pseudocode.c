
void FUN_10059f30(float param_1,float param_2,float param_3,undefined1 *param_4)

{
  float fVar1;
  
  FUN_10094880(&param_1,0x437f0000,&param_1);
  fVar1 = param_2;
  if (param_2 <= param_3) {
    fVar1 = param_3;
  }
  if (fVar1 < param_1) {
    fVar1 = param_1;
  }
  if (255.0 < fVar1) {
    FUN_10094880(&param_1,255.0 / fVar1,&param_1);
  }
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  *param_4 = (char)(int)param_1;
  param_4[1] = (char)(int)param_2;
  param_4[2] = (char)(int)param_3;
  return;
}

