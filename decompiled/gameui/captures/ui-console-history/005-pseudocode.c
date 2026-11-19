
void __thiscall FUN_100692ce(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  FUN_10060a6b(this,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_c,s_TitleBarFgColor_100ea24c,param_1);
  *(undefined4 *)((int)this + 0xb4) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_10,s_TitleBarBgColor_100ea25c,param_1);
  *(undefined4 *)((int)this + 0xac) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_14,s_TitleBarDisabledFgColor_100ea26c,param_1);
  *(undefined4 *)((int)this + 0xb8) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_18,s_TitleBarDisabledBgColor_100ea284,param_1);
  *(undefined4 *)((int)this + 0xb0) = *puVar1;
  uVar2 = (**(code **)(*(int *)this + 0x54))();
  uVar2 = (**(code **)(*param_1 + 0xc))(s_Default_100ea29c,uVar2);
  (**(code **)(**(int **)((int)this + 0xbc) + 0x80))(uVar2);
  FUN_10065f78(*(int **)((int)this + 0xbc));
  uVar2 = (**(code **)(*(int *)this + 0x54))();
  local_8 = (**(code **)(*param_1 + 0xc))(s_Marlett_100ea2a4,uVar2);
  (**(code **)(**(int **)((int)this + 0xe8) + 0x248))(local_8);
  (**(code **)(**(int **)((int)this + 0xec) + 0x248))(local_8);
  (**(code **)(**(int **)((int)this + 0xf0) + 0x248))(local_8);
  (**(code **)(**(int **)((int)this + 0xf4) + 0x248))(local_8);
  return;
}

