
undefined4 HUD_GetStudioModelInterface(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x53820  567  HUD_GetStudioModelInterface */
  if (param_1 != 1) {
    return 0;
  }
  *param_2 = &DAT_1018f830;
  puVar2 = &DAT_105457b0;
  for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_10053810();
  return 1;
}

