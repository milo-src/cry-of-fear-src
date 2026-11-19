
void __thiscall FUN_1008cb68(void *this,byte *param_1)

{
  uint uVar1;
  void *this_00;
  void *this_01;
  
  uVar1 = FUN_100b1620(this,param_1,&DAT_100ebb00);
  if (uVar1 == 0) {
    (**(code **)(*(int *)this + 0x30c))();
    (**(code **)(*(int *)this + 0x15c))(s_Close_100ebb04);
  }
  else {
    uVar1 = FUN_100b1620(this_00,param_1,(byte *)s_Cancel_100ebb0c);
    if (uVar1 == 0) {
      (**(code **)(*(int *)this + 0x15c))(s_Close_100ebb14);
    }
    else {
      uVar1 = FUN_100b1620(this_01,param_1,(byte *)s_Apply_100ebb1c);
      if (uVar1 == 0) {
        (**(code **)(*(int *)this + 0x30c))();
        (**(code **)(**(int **)((int)this + 0x11c) + 0xbc))(0);
        (**(code **)(*(int *)this + 0xe8))(0,0);
      }
      else {
        FUN_10069684(this,param_1);
      }
    }
  }
  return;
}

