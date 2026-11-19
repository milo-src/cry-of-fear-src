
undefined4 GetEntityAPI(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
                    /* 0x183d0  373  GetEntityAPI */
  if ((param_1 != (undefined4 *)0x0) && (param_2 == 0x8c)) {
    ppuVar2 = &PTR_LAB_102119f8;
    for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}

