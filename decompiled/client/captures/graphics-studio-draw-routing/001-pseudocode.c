
void FUN_10053750(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_105457d4)();
  iVar2 = (*DAT_105457c8)();
  if (iVar2 != iVar1) {
    iVar1 = (*DAT_105457c8)();
    if (*(int *)(iVar1 + 0x304) != 0xa1) {
      FUN_1005ff50();
    }
  }
  FUN_1008cee0(param_1);
  return;
}

