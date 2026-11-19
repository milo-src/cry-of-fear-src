
int FUN_01d0ee3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_01d0f530();
  piVar1 = (int *)FUN_01e27f1e(param_4);
  (**(code **)(*piVar1 + 0x34))();
  piVar1 = (int *)FUN_01e27f1e(param_1,param_2);
  (**(code **)(*piVar1 + 0x40))();
  piVar1 = (int *)FUN_01e27f1e(DAT_01edabd0);
  (**(code **)(*piVar1 + 0x38))();
  iVar2 = FUN_01e717da(CONCAT22(extraout_var,(undefined2)param_3));
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_01e27f1e(CONCAT22(extraout_var_00,(undefined2)param_3));
    (**(code **)(*piVar1 + 0x4c))();
    piVar1 = (int *)FUN_01e27f1e();
    (**(code **)(*piVar1 + 0x54))();
  }
  piVar1 = (int *)FUN_01e27f1e(param_4,param_3,&local_8,&local_c,&local_10);
  (**(code **)(*piVar1 + 0xfc))();
  return local_8 + local_c + local_10;
}

