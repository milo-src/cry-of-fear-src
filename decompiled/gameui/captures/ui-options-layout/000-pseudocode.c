
void __fastcall FUN_1008ca31(int *param_1)

{
  char cVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_10068448(param_1);
  (**(code **)(*param_1 + 0x2e8))(&local_14,&local_18,&local_8,&local_1c);
  CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x44],local_14,local_18,local_8);
  local_c = local_14 + -0x50 + local_8;
  local_10 = local_1c + -0x1c + local_18;
  cVar1 = (**(code **)(*(int *)param_1[0x47] + 0x78))();
  if (cVar1 != '\0') {
    CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x47],local_c,local_10,0x48);
    local_c = local_c + -0x50;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x46] + 0x78))();
  if (cVar1 != '\0') {
    CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x46],local_c,local_10,0x48);
    local_c = local_c + -0x50;
  }
  CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x45],local_c,local_10,0x48);
  (**(code **)(*(int *)param_1[0x44] + 0xe8))(0,0);
  (**(code **)(*param_1 + 0x10))();
  return;
}

