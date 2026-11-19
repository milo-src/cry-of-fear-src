
void FUN_100a8320(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101361a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_100b44cb(0x230,DAT_10190600 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10046ad0(0,0,0,0,DAT_1018f430,DAT_1018f434);
  }
  *(int **)(in_ECX + 0x1434) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x1434) + 0x24))(0);
  ExceptionList = local_10;
  return;
}

