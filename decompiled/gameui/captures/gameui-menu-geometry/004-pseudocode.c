
void __thiscall FUN_1003f980(void *this,byte *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100b1620(this,param_1,&DAT_100e5ecc);
  if (uVar1 == 0) {
    (**(code **)(*(int *)this + 200))();
    (**(code **)(*(int *)this + 0x30))(0);
    FUN_1003f9e0((int)this);
  }
  else {
    FUN_100969d8(this,(char *)param_1);
  }
  return;
}

