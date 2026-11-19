
void FUN_01d0eff8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 local_c;
  
  FUN_01d0f530();
  piVar1 = (int *)FUN_01e27f1e(param_4);
  (**(code **)(*piVar1 + 0x34))();
  piVar1 = (int *)FUN_01e27f1e(param_1,param_2);
  (**(code **)(*piVar1 + 0x40))();
  piVar1 = (int *)FUN_01e27f1e(DAT_01edabd0);
  (**(code **)(*piVar1 + 0x38))();
  iVar2 = FUN_01d0f434(param_3);
  local_c = 0;
  while( true ) {
    uVar3 = FUN_01e71816(iVar2);
    if (uVar3 <= local_c) break;
    iVar4 = FUN_01e717da(CONCAT22(extraout_var,*(undefined2 *)(iVar2 + local_c * 2)));
    if (iVar4 == 0) {
      *(undefined2 *)(iVar2 + local_c * 2) = 0x20;
    }
    local_c = local_c + 1;
  }
  uVar5 = FUN_01e71816(iVar2);
  piVar1 = (int *)FUN_01e27f1e(iVar2,uVar5);
  (**(code **)(*piVar1 + 0x48))();
  piVar1 = (int *)FUN_01e27f1e();
  (**(code **)(*piVar1 + 0x54))();
  FUN_01d0f34b(iVar2,param_4);
  return;
}

