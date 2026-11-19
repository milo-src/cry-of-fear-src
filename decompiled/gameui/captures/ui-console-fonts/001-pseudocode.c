
void __thiscall FUN_100748b8(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_10060a6b(this,param_1);
  uVar1 = (**(code **)(*(int *)this + 0x54))();
  uVar1 = (**(code **)(*param_1 + 0xc))(s_Default_100eaf50,uVar1);
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_8,s_WindowFgColor_100eaf58,param_1);
  (**(code **)(*(int *)this + 0xd0))(*puVar2);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_c,s_WindowBgColor_100eaf68,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar2);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_10,s_WindowDisabledFgColor_100eaf78,param_1);
  *(undefined4 *)((int)this + 0xdc) = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_14,param_1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))(local_18,s_SelectionFgColor_100eaf90,*puVar2);
  *(undefined4 *)((int)this + 0xe4) = *puVar2;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_1c,s_SelectionBgColor_100eafa4,param_1);
  *(undefined4 *)((int)this + 0xe0) = *puVar2;
  uVar1 = (**(code **)(*param_1 + 8))(s_ButtonDepressedBorder_100eafb8);
  (**(code **)(*(int *)this + 0xf0))(uVar1);
  return;
}

