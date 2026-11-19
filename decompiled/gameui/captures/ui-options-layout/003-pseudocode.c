
void __thiscall FUN_100511a0(void *this,byte *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  void *this_00;
  void *this_01;
  void *this_02;
  undefined4 *local_1c;
  int *local_18;
  
  uVar2 = FUN_100b1620(this,param_1,(byte *)s_Defaults_100e8324);
  if (uVar2 == 0) {
    pvVar3 = operator_new(0x134);
    if (pvVar3 == (void *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = FUN_10094a70(pvVar3,s__GameUI_KeyboardSettings_100e8350,
                              s__GameUI_KeyboardSettingsText_100e8330,(undefined4 *)0x0);
    }
    (**(code **)(*local_18 + 0xa4))(this);
    pvVar3 = (void *)FUN_100743aa(0x18);
    if (pvVar3 == (void *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      local_1c = FUN_10072495(pvVar3,s_Command_100e8380,s_command_100e8378,s_DefaultsOK_100e836c);
    }
    FUN_10094f87(local_18,local_1c);
    (**(code **)(*local_18 + 0x2f8))(0);
  }
  else {
    uVar2 = FUN_100b1620(this_00,param_1,(byte *)s_DefaultsOK_100e8388);
    if (uVar2 == 0) {
      FUN_100520ed(this);
      (**(code **)(**(int **)((int)this + 0xb8) + 0x30))(0);
    }
    else {
      cVar1 = (**(code **)(**(int **)((int)this + 0xb8) + 700))();
      if ((cVar1 == '\0') &&
         (uVar2 = FUN_100b1620(this_01,param_1,(byte *)s_ChangeKey_100e8394), uVar2 == 0)) {
        (**(code **)(**(int **)((int)this + 0xb8) + 0x2b4))(1);
        return;
      }
      cVar1 = (**(code **)(**(int **)((int)this + 0xb8) + 700))();
      if ((cVar1 == '\0') &&
         (uVar2 = FUN_100b1620(this_02,param_1,(byte *)s_ClearKey_100e83a0), uVar2 == 0)) {
        (**(code **)(*(int *)this + 400))(0x49);
        (**(code **)(**(int **)((int)this + 0xb8) + 0x30))(0);
        return;
      }
      FUN_10060943();
    }
  }
  return;
}

