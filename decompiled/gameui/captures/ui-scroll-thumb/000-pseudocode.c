
CSliderCtrl * __thiscall FUN_10046f72(void *this,undefined4 *param_1,uint *param_2,char param_3)

{
  void *pvVar1;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  
  FUN_1005da5a(this,param_1,param_2);
  FUN_10047b60((int)this + 0x70);
  FUN_10047c00((int)this + 0x71);
  FUN_10047820((undefined4 *)((int)this + 0x74));
  *(undefined ***)this = &PTR_FUN_100cbbc0;
  CSliderCtrl::SetRange(this,0,0,100);
  *(undefined4 *)((int)this + 0x90) = 0;
  if (param_3 == '\0') {
    pvVar1 = operator_new(0x8c);
    if (pvVar1 == (void *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      local_1c = FUN_10079630(pvVar1,this,(uint *)s_CPanelListPanelVScroll_100e66b8,'\x01');
    }
    *(undefined4 **)((int)this + 0x80) = local_1c;
  }
  else {
    pvVar1 = operator_new(0x8c);
    if (pvVar1 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18 = FUN_10046d90(pvVar1,this,(uint *)s_CPanelListPanelVScroll_100e66a0,'\x01');
    }
    *(undefined4 **)((int)this + 0x80) = local_18;
  }
  CSliderCtrl::SetRange(*(CSliderCtrl **)((int)this + 0x80),0,0,0x14);
  (**(code **)(**(int **)((int)this + 0x80) + 0x74))(0);
  (**(code **)(**(int **)((int)this + 0x80) + 0xa4))(this);
  pvVar1 = operator_new(0x70);
  if (pvVar1 == (void *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_20 = FUN_1005da5a(pvVar1,this,(uint *)s_PanelListEmbedded_100e66d0);
  }
  *(undefined4 **)((int)this + 0x84) = local_20;
  CSliderCtrl::SetRange(*(CSliderCtrl **)((int)this + 0x84),0,0,0x14);
  (**(code **)(**(int **)((int)this + 0x84) + 0xfc))(0);
  (**(code **)(**(int **)((int)this + 0x84) + 0xf8))(0);
  return this;
}

