
undefined4 * __thiscall FUN_10053210(void *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  undefined1 local_44 [63];
  undefined1 local_5;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_10053830((int)this + 0xb4);
  FUN_10053920((int)this + 0xb5);
  FUN_10053a30((int)this + 0xb6);
  *(undefined ***)this = &PTR_FUN_100cedac;
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_70 = (int *)0x0;
  }
  else {
    local_70 = FUN_10044970(pvVar1,this,(uint *)s_ReverseMouse_100e8618,
                            s__GameUI_ReverseMouse_100e8600,(uint *)s_m_pitch_100e85f8);
  }
  *(int **)((int)this + 0xb8) = local_70;
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_74 = (int *)0x0;
  }
  else {
    local_74 = FUN_10045fe0(pvVar1,this,(uint *)s_MouseLook_100e8650,s__GameUI_MouseLook_100e863c,
                            (uint *)s_in_mlook_100e8630,(uint *)s_mlook_100e8628);
  }
  *(int **)((int)this + 0xbc) = local_74;
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_78 = (int *)0x0;
  }
  else {
    local_78 = FUN_10045ae0(pvVar1,this,(uint *)s_MouseFilter_100e867c,
                            s__GameUI_MouseFilter_100e8668,(uint *)s_m_filter_100e865c);
  }
  *(int **)((int)this + 0xc0) = local_78;
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_7c = (int *)0x0;
  }
  else {
    local_7c = FUN_10045ae0(pvVar1,this,(uint *)s_Joystick_100e86a8,s__GameUI_Joystick_100e8694,
                            (uint *)s_joystick_100e8688);
  }
  *(int **)((int)this + 0xc4) = local_7c;
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_80 = (int *)0x0;
  }
  else {
    local_80 = FUN_10045fe0(pvVar1,this,(uint *)s_JoystickLook_100e86e0,
                            s__GameUI_JoystickLook_100e86c8,(uint *)s_in_jlook_100e86bc,
                            (uint *)s_jlook_100e86b4);
  }
  *(int **)((int)this + 200) = local_80;
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_84 = (int *)0x0;
  }
  else {
    local_84 = FUN_10044ef0(pvVar1,this,(uint *)s_Slider_100e8718);
  }
  *(int **)((int)this + 0xcc) = local_84;
  pvVar1 = operator_new(0x134);
  if (pvVar1 == (void *)0x0) {
    local_88 = 0;
  }
  else {
    uVar2 = FUN_1007d2d0(pvVar1,this,(uint *)s_SensitivityLabel_100e8720);
    local_88 = (undefined4)uVar2;
  }
  *(undefined4 *)((int)this + 0xd0) = local_88;
  (**(code **)(**(int **)((int)this + 0xd0) + 0xa4))(this);
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_8c = (int *)0x0;
  }
  else {
    local_8c = FUN_10045ae0(pvVar1,this,(uint *)s_Auto_Aim_100e874c,s__GameUI_AutoAim_100e873c,
                            (uint *)s_sv_aim_100e8734);
  }
  *(int **)((int)this + 0xd4) = local_8c;
  FUN_1006cb58(this,s_Resource_OptionsSubMouse_res_100e8758,0);
  (**(code **)(DAT_100f9e8c + 0x3c))();
  FUN_100adee5(local_44,0x3f,(byte *)s___1f_100e8784);
  local_5 = 0;
  (**(code **)(**(int **)((int)this + 0xd0) + 0x218))();
  return this;
}

