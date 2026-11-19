
undefined4 * __thiscall FUN_10050f87(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *local_18;
  int *local_14;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_10052b40((int)this + 0xb4);
  FUN_10052c30((int)this + 0xb5);
  FUN_10052d40((void *)((int)this + 0x4c4),0,0);
  *(undefined ***)this = &PTR_FUN_100ceb10;
  _memset((void *)((int)this + 0xc4),0,0x400);
  FUN_10051154(this);
  FUN_10051ded((int)this);
  FUN_100513cd((int)this);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = FUN_10058f65(pvVar1,this,(uint *)s_ChangeKeyButton_100e82cc,&DAT_10100440);
  }
  *(int **)((int)this + 0xbc) = local_14;
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = FUN_10058f65(pvVar1,this,(uint *)s_ClearKeyButton_100e82dc,&DAT_10100444);
  }
  *(int **)((int)this + 0xc0) = local_18;
  FUN_1006cb58(this,s_Resource_OptionsSubKeyboard_res_100e82ec,0);
  (**(code **)(**(int **)((int)this + 0xbc) + 0xbc))(0);
  (**(code **)(**(int **)((int)this + 0xc0) + 0xbc))(0);
  return this;
}

