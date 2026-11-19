
undefined4 * __thiscall
FUN_1007b234(void *this,undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4)

{
  void *pvVar1;
  undefined4 *local_18;
  undefined4 *local_14;
  
  FUN_1007d2d0(this,param_1,param_2);
  FUN_1007ca70((int)this + 0x134);
  FUN_1007cb10((int)this + 0x135);
  FUN_1007cc20((int)this + 0x136);
  FUN_1007ccb0((int)this + 0x137);
  FUN_1007cd40((int)this + 0x138);
  *(undefined ***)this = &PTR_FUN_100d2b38;
  FUN_1007f0da(this,param_4);
  FUN_100809a2(this,0);
  pvVar1 = operator_new(0xec);
  if (pvVar1 == (void *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_10095220(pvVar1,this,(uint *)0x0);
  }
  *(undefined4 **)((int)this + 0x13c) = local_14;
  (**(code **)(**(int **)((int)this + 0x13c) + 0xa4))(this);
  pvVar1 = operator_new(0x10c);
  if (pvVar1 == (void *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = FUN_1007b010(pvVar1,this,(uint *)0x0,&DAT_100eb370);
  }
  *(undefined4 **)((int)this + 0x140) = local_18;
  (**(code **)(**(int **)((int)this + 0x140) + 0x310))(s_ButtonClicked_100eb374);
  (**(code **)(**(int **)((int)this + 0x140) + 0xa4))(this);
  FUN_1007b443(this,param_3);
  *(undefined1 *)((int)this + 0x145) = 0;
  *(undefined4 *)((int)this + 0x148) = 3;
  *(undefined4 *)((int)this + 0x14c) = 0;
  return this;
}

