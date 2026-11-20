
void FUN_1006a310(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  float local_10;
  float local_c;
  float local_8;
  
  param_2 = param_2 * param_3;
  if (0 < param_2) {
    pbVar1 = (byte *)(param_1 + 2);
    do {
      local_10 = (float)pbVar1[-2] / 127.0 - 1.0;
      local_c = (float)pbVar1[-1] / 127.0 - 1.0;
      local_8 = (float)*pbVar1 / 127.0 - 1.0;
      FUN_100947c0(&local_10);
      pbVar1[-2] = (byte)(int)((local_10 + 1.0) * 127.0);
      pbVar1[-1] = (byte)(int)((local_c + 1.0) * 127.0);
      *pbVar1 = (byte)(int)((local_8 + 1.0) * 127.0);
      pbVar1 = pbVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

