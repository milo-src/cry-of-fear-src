
void FUN_100a5bb0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xd0))();
    if (iVar1 != 0) {
      iVar1 = FUN_100125e0(param_1[1]);
      *(uint *)(iVar1 + 0x1ebc) = (uint)(*(int *)(iVar1 + 0x1ebc) == 0);
    }
  }
  return;
}

