
CSliderCtrl * __thiscall FUN_1004fa60(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  FUN_1008c690(this,param_1,(uint *)s_OptionsDialog_100e7fa8);
  *(undefined ***)this = &PTR_FUN_100ce2c8;
  CSliderCtrl::SetRange(this,0,0,0x200);
  FUN_10068b4d(this,0);
  FUN_10003160((int)this);
  FUN_1003dc3a();
  FUN_1004fc8a(this,s__GameUI_Options_100e7fb8,'\x01');
  pvVar1 = operator_new(0x4d8);
  if (pvVar1 == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_10050f87(pvVar1,this);
  }
  FUN_1008c9dd(this,local_24,s__GameUI_Keyboard_100e7fc8);
  pvVar1 = operator_new(0xd8);
  if (pvVar1 == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10053210(pvVar1,this);
  }
  FUN_1008c9dd(this,local_28,s__GameUI_Mouse_100e7fdc);
  pvVar1 = operator_new(0xd0);
  if (pvVar1 == (void *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_100503b0(pvVar1,this);
  }
  FUN_1008c9dd(this,local_2c,s__GameUI_Audio_100e7fec);
  pvVar1 = operator_new(0x2a4);
  if (pvVar1 == (void *)0x0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = FUN_10056a40(pvVar1,this);
  }
  FUN_1008c9dd(this,local_30,s__GameUI_Video_100e7ffc);
  pvVar1 = operator_new(0xf8);
  if (pvVar1 == (void *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = FUN_10057a70(pvVar1,this);
  }
  FUN_1008c9dd(this,local_34,s__GameUI_Voice_100e800c);
  pvVar1 = operator_new(0xc0);
  if (pvVar1 == (void *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = FUN_1004c640(pvVar1,this);
  }
  FUN_1008c9dd(this,local_38,s__GameUI_AdvancedNoEllipsis_100e801c);
  FUN_1008cdf7(this,1);
  uVar3 = 0x48;
  piVar2 = (int *)FUN_1008c9a4((int)this);
  (**(code **)(*piVar2 + 0x220))(uVar3);
  return this;
}

