
undefined4 * __thiscall FUN_10079630(void *this,undefined4 *param_1,uint *param_2,char param_3)

{
  void *pvVar1;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  
  FUN_1005da5a(this,param_1,param_2);
  FUN_1007a3f0((int)this + 0x70);
  FUN_1007a490((int)this + 0x71);
  *(undefined ***)this = &PTR_FUN_100d1f70;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x84) = 400;
  *(undefined1 *)((int)this + 0x88) = 1;
  if (param_3 == '\0') {
    pvVar1 = operator_new(0xa4);
    if (pvVar1 == (void *)0x0) {
      local_30 = (int *)0x0;
    }
    else {
      local_30 = FUN_100a8240(pvVar1,(undefined4 *)0x0,(uint *)0x0,0);
    }
    FUN_10079d07(this,(int)local_30);
    pvVar1 = operator_new(0x108);
    if (pvVar1 == (void *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      local_34 = FUN_1007a060(pvVar1,(undefined4 *)0x0,(uint *)0x0,&DAT_100eb0f8);
    }
    FUN_10079c06(this,(int)local_34,0);
    pvVar1 = operator_new(0x108);
    if (pvVar1 == (void *)0x0) {
      local_38 = (undefined4 *)0x0;
    }
    else {
      local_38 = FUN_1007a060(pvVar1,(undefined4 *)0x0,(uint *)0x0,&DAT_100eb0fc);
    }
    FUN_10079c06(this,(int)local_38,1);
    (**(code **)(**(int **)((int)this + 0x74) + 0x230))(1,0);
    (**(code **)(**(int **)((int)this + 0x78) + 0x230))(1,0);
  }
  else {
    pvVar1 = operator_new(0xa4);
    if (pvVar1 == (void *)0x0) {
      local_24 = (int *)0x0;
    }
    else {
      local_24 = FUN_100a8240(pvVar1,(undefined4 *)0x0,(uint *)0x0,1);
    }
    FUN_10079d07(this,(int)local_24);
    pvVar1 = operator_new(0x108);
    if (pvVar1 == (void *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      local_28 = FUN_1007a060(pvVar1,(undefined4 *)0x0,(uint *)0x0,&DAT_100eb0f0);
    }
    FUN_10079c06(this,(int)local_28,0);
    pvVar1 = operator_new(0x108);
    if (pvVar1 == (void *)0x0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      local_2c = FUN_1007a060(pvVar1,(undefined4 *)0x0,(uint *)0x0,&DAT_100eb0f4);
    }
    FUN_10079c06(this,(int)local_2c,1);
    (**(code **)(**(int **)((int)this + 0x74) + 0x230))(1,1);
    (**(code **)(**(int **)((int)this + 0x78) + 0x230))(1,0xffffffff);
  }
  FUN_10060563(this,1);
  FUN_10060579(this,0);
  FUN_1006058f(this,1);
  FUN_10079f26(this,0x14);
  FUN_10079f83((int)this);
  return this;
}

