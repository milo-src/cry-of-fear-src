
void FUN_01d0eda5(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_01e27f14();
  uVar2 = (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_01e27f14(uVar2);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x1c))();
  if (DAT_01edb3d4 == 0) {
    DAT_01edb3d4 = (**(code **)(*piVar1 + 0xc))(s_EngineFont_01ea8b44,1);
  }
  if (DAT_01edb3d8 == 0) {
    DAT_01edb3d8 = (**(code **)(*piVar1 + 0xc))(s_Legacy_CreditsFont_01ea8b50,1);
  }
  return;
}

