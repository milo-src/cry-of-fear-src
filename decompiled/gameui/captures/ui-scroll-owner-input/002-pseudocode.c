
void __fastcall FUN_100a8ab2(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  piVar3 = &local_c;
  piVar5 = &local_8;
  piVar1 = (int *)FUN_10058c7a();
  (**(code **)(*piVar1 + 0x1c))(piVar5,piVar3);
  FUN_1005fe1f(param_1,&local_8,&local_c);
  if (*(char *)((int)param_1 + 0x71) == '\0') {
    if ((local_8 < param_1[0x1d]) || (param_1[0x1e] <= local_8)) {
      if (local_8 < param_1[0x1d]) {
        iVar4 = (**(code **)(*param_1 + 0x21c))();
        (**(code **)(*param_1 + 0x218))(iVar4 - param_1[0x26]);
      }
      else if (param_1[0x1e] <= local_8) {
        iVar4 = (**(code **)(*param_1 + 0x21c))();
        (**(code **)(*param_1 + 0x218))(iVar4 + param_1[0x26]);
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x72) = 1;
      uVar2 = (**(code **)*param_1)();
      piVar3 = (int *)FUN_10058c7a();
      (**(code **)(*piVar3 + 8))(uVar2);
      param_1[0x1f] = param_1[0x1d];
      param_1[0x20] = param_1[0x1e];
      param_1[0x21] = local_8;
      param_1[0x22] = local_c;
    }
  }
  else if ((local_c < param_1[0x1d]) || (param_1[0x1e] <= local_c)) {
    if (local_c < param_1[0x1d]) {
      iVar4 = (**(code **)(*param_1 + 0x21c))();
      (**(code **)(*param_1 + 0x218))(iVar4 - param_1[0x26]);
    }
    else if (param_1[0x1e] <= local_c) {
      iVar4 = (**(code **)(*param_1 + 0x21c))();
      (**(code **)(*param_1 + 0x218))(iVar4 + param_1[0x26]);
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x72) = 1;
    uVar2 = (**(code **)*param_1)();
    piVar3 = (int *)FUN_10058c7a();
    (**(code **)(*piVar3 + 8))(uVar2);
    param_1[0x1f] = param_1[0x1d];
    param_1[0x20] = param_1[0x1e];
    param_1[0x21] = local_8;
    param_1[0x22] = local_c;
  }
  return;
}

