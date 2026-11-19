
void __fastcall FUN_10079999(int *param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  if (param_1[0x1f] != 0) {
    (**(code **)(*param_1 + 0x108))(&local_8,&local_c);
    cVar1 = (**(code **)(*(int *)param_1[0x1f] + 0x220))();
    if (cVar1 == '\0') {
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1f],local_c,-1,local_8 + local_c * -2 + 1);
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1d],0,0,local_c);
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1e],local_8 - local_c,0,local_c);
    }
    else {
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1f],0,local_8,local_8);
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1d],0,0,local_8 + -1);
      CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x1e],0,local_c - local_8,local_8 + -1);
    }
    (**(code **)(*(int *)param_1[0x1f] + 0xe8))(0,0);
  }
  FUN_10060829();
  return;
}

