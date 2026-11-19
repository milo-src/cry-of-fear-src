
void __fastcall FUN_100474ad(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_1005e14a(param_1,&local_8,&local_20);
  local_c = (**(code **)(*param_1 + 0x218))();
  (**(code **)(*(int *)param_1[0x20] + 0x74))(1);
  (**(code **)(*(int *)param_1[0x20] + 0xbc))(0);
  (**(code **)(*(int *)param_1[0x20] + 0x220))(0,(local_c - local_20) + 0x18);
  (**(code **)(*(int *)param_1[0x20] + 0x228))(0x18);
  (**(code **)(*(int *)param_1[0x20] + 0x248))(0x18);
  FUN_1005e0ab((void *)param_1[0x20],local_8 + -0x14,param_1[0x24]);
  FUN_1005e115((void *)param_1[0x20],0x12,(local_20 + -2) - param_1[0x24]);
  (**(code **)(*(int *)param_1[0x20] + 0xe8))(0,0);
  local_1c = (**(code **)(*(int *)param_1[0x20] + 0x21c))();
  FUN_1005e0ab((void *)param_1[0x21],0,-local_1c);
  FUN_1005e115((void *)param_1[0x21],local_8 + -0x14,local_c);
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  while (iVar1 = FUN_10047880(param_1 + 0x1d), local_14 < iVar1) {
    piVar2 = (int *)FUN_10047960(param_1 + 0x1d,local_14);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      local_10 = FUN_100606d5((undefined4 *)*piVar2);
      CSliderCtrl::SetRange((CSliderCtrl *)*piVar2,8,local_18,local_8 + -0x24);
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + local_10;
  }
  return;
}

