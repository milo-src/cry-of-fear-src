
void __fastcall FUN_10030698(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int local_28;
  undefined4 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = operator_new(0x260);
  if (puVar1 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_1004912d(puVar1);
  }
  puVar1 = FUN_10030ac0(local_1c);
  *(undefined4 **)(param_1 + 8) = puVar1;
  uVar2 = (**(code **)*DAT_100f9e94)();
  (**(code **)(**(int **)(param_1 + 8) + 0x90))(uVar2);
  puVar1 = &local_c;
  piVar4 = &local_10;
  piVar3 = (int *)FUN_10058c8e();
  (**(code **)(*piVar3 + 0x80))(piVar4,puVar1);
  local_8 = 0x28;
  if (local_10 + -0x50 < 0x230) {
    local_28 = local_10 + -0x50;
  }
  else {
    local_28 = 0x230;
  }
  CSliderCtrl::SetRange(*(CSliderCtrl **)(param_1 + 8),0x28,0x28,local_28);
  *(undefined1 *)(param_1 + 4) = 1;
  (*DAT_100f9c9c)(s_condump_100e3e28,FUN_100309df);
  return;
}

