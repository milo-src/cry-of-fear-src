
void __fastcall FUN_100451d3(int *param_1)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  
  fVar2 = (float10)(**(code **)(DAT_100f9e8c + 0x3c))(param_1 + 0x32);
  param_1[0x2e] = (int)(float)fVar2;
  param_1[0x31] = param_1[0x2e];
  lVar3 = __ftol();
  (**(code **)(*param_1 + 0x218))((int)lVar3,1);
  iVar1 = (**(code **)(*param_1 + 0x21c))();
  param_1[0x2f] = iVar1;
  param_1[0x30] = param_1[0x2f];
  return;
}

