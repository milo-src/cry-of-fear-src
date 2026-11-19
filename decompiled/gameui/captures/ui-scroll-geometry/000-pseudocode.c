
void __fastcall FUN_1007b905(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x108))(&local_8,&local_c);
  FUN_1007e92c(param_1);
  CSliderCtrl::SetRange((CSliderCtrl *)param_1[0x50],(local_8 - local_c) + 4,2,local_c + -2);
  cVar1 = (**(code **)(*param_1 + 0x290))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xdc))(2);
  }
  else {
    (**(code **)(*param_1 + 0xdc))(3);
  }
  uVar2 = (**(code **)(*param_1 + 0xc0))();
  (**(code **)(*(int *)param_1[0x50] + 0xbc))(uVar2);
  FUN_1007b9c2(param_1);
  return;
}

