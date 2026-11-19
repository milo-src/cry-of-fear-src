
void __fastcall FUN_10045090(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0xb7) != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x21c))();
    param_1[0x2f] = iVar1;
    if (*(char *)((int)param_1 + 0xb6) == '\0') {
      param_1[0x2e] = (int)((float)param_1[0x2f] / 100.0);
    }
    else {
      param_1[0x2e] = param_1[0x31];
    }
    (**(code **)(DAT_100f9e8c + 0x94))(param_1 + 0x32,param_1[0x2e]);
  }
  return;
}

