
undefined4 * __thiscall FUN_1004c640(void *this,undefined4 *param_1)

{
  void *pvVar1;
  CRegKey *local_18;
  CSliderCtrl *local_14;
  
  FUN_1008bf30(this,param_1,(uint *)s_MultiplayerAdvancedDialog_100e7148,1);
  *(undefined ***)this = &PTR_FUN_100cd424;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    local_14 = (CSliderCtrl *)0x0;
  }
  else {
    local_14 = FUN_10046f72(pvVar1,this,(uint *)s_PanelListPanel_100e7164,'\0');
  }
  *(CSliderCtrl **)((int)this + 0xbc) = local_14;
  *(undefined4 *)((int)this + 0xb8) = 0;
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
    local_18 = (CRegKey *)0x0;
  }
  else {
    local_18 = FUN_1004d3a5(pvVar1,*(CAtlTransactionManager **)((int)this + 0xbc));
  }
  *(CRegKey **)((int)this + 0xb4) = local_18;
  (**(code **)**(undefined4 **)((int)this + 0xb4))(s_user_scr_100e7174);
  FUN_1003aff8(*(int *)((int)this + 0xb4));
  FUN_1004ccfb((int *)((int)this + 0xb4));
  FUN_1006cb58(this,s_Resource_MultiplayerAdvancedPage_100e7180,0);
  return this;
}

