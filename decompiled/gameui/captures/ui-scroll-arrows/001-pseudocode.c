
void __thiscall FUN_1007a0f0(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_100597f0(this,param_1);
  uVar1 = (**(code **)(*(int *)this + 0x54))();
  uVar1 = (**(code **)(*param_1 + 0xc))(s_Marlett_100ea4b8,uVar1);
  (**(code **)(*(int *)this + 0x248))(uVar1);
  uVar1 = (**(code **)(*param_1 + 8))(s_ScrollBarButtonBorder_100eb200);
  (**(code **)(*(int *)this + 0x300))(uVar1);
  uVar1 = (**(code **)(*param_1 + 8))(s_ScrollBarButtonDepressedBorder_100eb1e0);
  (**(code **)(*(int *)this + 0x304))(uVar1);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd4))(local_8);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_c,*puVar2);
  (**(code **)(*(int *)this + 0x2f0))(*puVar2);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd4))(local_10);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_14,*puVar2);
  (**(code **)(*(int *)this + 0x2f4))(*puVar2);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd4))(local_18);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_1c,s_DimBaseText_100eb1d4,param_1,*puVar2);
  (**(code **)(*(int *)this + 0x2ec))(*puVar2);
  (**(code **)(*(int *)this + 0x22c))(4);
  return;
}

