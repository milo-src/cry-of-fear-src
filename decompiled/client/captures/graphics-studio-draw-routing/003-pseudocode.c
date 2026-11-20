
undefined4 Initialize(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x1d5a0  591  Initialize */
  puVar2 = param_1;
  puVar3 = &DAT_101b2608;
  for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 7) {
    return 0;
  }
  puVar2 = &DAT_101b2608;
  for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_1006c390();
  return 1;
}

