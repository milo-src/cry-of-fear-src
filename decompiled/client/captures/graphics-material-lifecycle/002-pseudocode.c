
bool FUN_100693d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x24) == -0x29a) && (*(int *)(param_1 + 0x2c) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
  }
  if ((*(int *)(param_2 + 0x24) == -0x29a) && (*(int *)(param_2 + 0x2c) != 0)) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x2c) + 0x14);
  }
  return iVar2 < iVar1;
}

