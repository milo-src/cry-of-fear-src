
void FUN_100a8a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  CEnvFog *in_ECX;
  
  iVar1 = FUN_10018350(param_3);
  if (iVar1 != 0) {
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      CEnvFog::TurnOff(in_ECX);
      return;
    }
    CEnvFog::TurnOn(in_ECX);
  }
  return;
}

