
undefined4 * __thiscall FUN_1008c690(void *this,undefined4 *param_1,uint *param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_2c;
  int *local_28;
  int *local_20;
  undefined4 *local_1c;
  
  FUN_10067550(this,param_1,param_2,1);
  FUN_1008cf50((int)this + 0x10c);
  FUN_1008cff0((int)this + 0x10d);
  *(undefined ***)this = &PTR_FUN_100d3f44;
  pvVar1 = operator_new(0xac);
  if (pvVar1 == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_100a9160(pvVar1,this,(uint *)s_Sheet_100eba78);
  }
  *(undefined4 **)((int)this + 0x110) = local_1c;
  (**(code **)(**(int **)((int)this + 0x110) + 0xa4))(this);
  (**(code **)(**(int **)((int)this + 0x110) + 0xec))(1);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = FUN_10058f65(pvVar1,this,(uint *)s_OKButton_100eba94,s__PropertyDialog_OK_100eba80);
  }
  *(int **)((int)this + 0x114) = local_20;
  (**(code **)(**(int **)((int)this + 0x114) + 0xa4))(this);
  (**(code **)(**(int **)((int)this + 0x114) + 0xec))(2);
  (**(code **)(**(int **)((int)this + 0x114) + 0x310))(&DAT_100ebaa0);
  uVar3 = *(undefined4 *)((int)this + 0x114);
  piVar2 = (int *)FUN_1006cf2f((int)this);
  (**(code **)(*piVar2 + 4))(uVar3);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    local_28 = FUN_10058f65(pvVar1,this,(uint *)s_CancelButton_100ebabc,
                            s__PropertyDialog_Cancel_100ebaa4);
  }
  *(int **)((int)this + 0x118) = local_28;
  (**(code **)(**(int **)((int)this + 0x118) + 0xa4))(this);
  (**(code **)(**(int **)((int)this + 0x118) + 0xec))(3);
  (**(code **)(**(int **)((int)this + 0x118) + 0x310))(s_Close_100ebacc);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    local_2c = FUN_10058f65(pvVar1,this,(uint *)s_ApplyButton_100ebaec,
                            s__PropertyDialog_Apply_100ebad4);
  }
  *(int **)((int)this + 0x11c) = local_2c;
  (**(code **)(**(int **)((int)this + 0x11c) + 0xa4))(this);
  (**(code **)(**(int **)((int)this + 0x11c) + 0xec))(4);
  (**(code **)(**(int **)((int)this + 0x11c) + 0x74))(0);
  (**(code **)(**(int **)((int)this + 0x11c) + 0xbc))(0);
  (**(code **)(**(int **)((int)this + 0x11c) + 0x310))(s_Apply_100ebaf8);
  FUN_10068b4d(this,0);
  return this;
}

