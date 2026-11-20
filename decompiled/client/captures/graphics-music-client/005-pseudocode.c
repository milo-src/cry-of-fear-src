
void FUN_1007fb50(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
  iVar1 = DAT_105440a4;
  if (DAT_105440a4 != 0) {
    if (0.0 <= param_1) {
      *(float *)(DAT_105440a4 + 0xcc) = param_1;
    }
    if (0.0 <= param_2) {
      *(float *)(iVar1 + 0xd0) = param_2;
    }
    if (0.0 <= param_3) {
      *(float *)(iVar1 + 0xd4) = param_3;
    }
    if (0.0 <= param_4) {
      *(float *)(iVar1 + 0xd8) = param_4;
    }
  }
  return;
}

