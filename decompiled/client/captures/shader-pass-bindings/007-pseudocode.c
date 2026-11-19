
void FUN_10062280(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = param_2;
    return;
  }
  for (iVar2 = *(int *)(iVar1 + 0x28); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
    iVar1 = iVar2;
  }
  *(int *)(iVar1 + 0x28) = param_2;
  return;
}

