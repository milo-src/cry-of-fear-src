
undefined4 * __thiscall FUN_1004fdf0(void *this,undefined4 *param_1)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  CSliderCtrl *local_30;
  undefined4 *local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_10050190((int)this + 0xb4);
  FUN_10050280((int)this + 0xb5);
  *(undefined ***)this = &PTR_FUN_100ce5e0;
  pvVar2 = operator_new(0x120);
  if (pvVar2 == (void *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1008d110(pvVar2,this,(uint *)s_ContentlockButton_100e8080,
                            s__GameUI_ContentLock_100e806c);
  }
  *(undefined4 **)((int)this + 0xbc) = local_2c;
  (**(code **)(**(int **)((int)this + 0xbc) + 0x310))(s_ContentControl_100e8094);
  FUN_1006cb58(this,s_Resource_OptionsSubAdvanced_res_100e80a4,0);
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_30 = (CSliderCtrl *)0x0;
  }
  else {
    local_30 = FUN_100484e0(pvVar2,this);
  }
  *(CSliderCtrl **)((int)this + 0xb8) = local_30;
  (**(code **)(**(int **)((int)this + 0xb8) + 0xa4))(this);
  piVar7 = &local_c;
  piVar6 = &local_18;
  piVar5 = &local_14;
  piVar4 = &local_10;
  piVar3 = (int *)FUN_10058c8e();
  (**(code **)(*piVar3 + 0x140))(piVar4,piVar5,piVar6,piVar7);
  FUN_1005e14a(*(void **)((int)this + 0xb8),&local_8,&local_1c);
  FUN_1005e0ab(*(void **)((int)this + 0xb8),local_10 + (local_18 - local_8) / 2,
               local_14 + (local_c - local_1c) / 2);
  bVar1 = FUN_10050390(*(int *)((int)this + 0xb8));
  (**(code **)(**(int **)((int)this + 0xbc) + 0x2b4))(bVar1);
  return this;
}

