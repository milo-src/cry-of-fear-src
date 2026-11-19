
undefined4 * __thiscall FUN_1005ad10(void *this,undefined4 *param_1,uint *param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_14;
  COleDateTimeSpan local_c [4];
  void *local_8;
  
  FUN_1005da5a(this,param_1,param_2);
  FUN_1005cf90((int)this + 0x70);
  FUN_1005d030((int)this + 0x71);
  FUN_1005d140((int)this + 0x72);
  FUN_1005d1d0((int)this + 0x73);
  FUN_1005d280((void *)((int)this + 0x7c),0,0);
  FUN_10002f00((void *)((int)this + 0x98));
  FUN_10002f00((void *)((int)this + 0x9c));
  FUN_10002f00((void *)((int)this + 0xa0));
  *(undefined ***)this = &PTR_FUN_100cfd94;
  FUN_1005affe((int)this);
  local_8 = operator_new(0x4c);
  if (local_8 == (void *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_10065590(local_8,param_3);
  }
  *(undefined4 **)((int)this + 0x78) = local_14;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_c,0,0,0,0);
  (**(code **)(**(int **)((int)this + 0x78) + 0x14))(*puVar1);
  FUN_1005b41f(this,param_3);
  iVar2 = FUN_1005bf9f(this,*(undefined4 *)((int)this + 0x78),0);
  *(int *)((int)this + 0xa4) = iVar2;
  return this;
}

