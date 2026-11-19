
void __fastcall FUN_10079d8b(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  cVar1 = (**(code **)(*(int *)param_1[0x1d] + 0x2a8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(int *)param_1[0x1e] + 0x2a8))();
    if (cVar1 != '\0') {
      local_8 = 1;
    }
  }
  else {
    local_8 = -1;
  }
  if (local_8 == 0) {
    piVar2 = (int *)FUN_10058c98();
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    param_1[0x21] = iVar3 + 400;
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
    (**(code **)(*param_1 + 600))(local_8);
    piVar2 = (int *)FUN_10058c98();
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    if (param_1[0x21] < iVar3) {
      piVar2 = (int *)FUN_10058c98();
      iVar3 = (**(code **)(*piVar2 + 0x18))();
      param_1[0x21] = iVar3 + 0x32;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
  }
  return;
}

