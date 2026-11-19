
void __thiscall FUN_100a87d4(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_10060a6b(this,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_8,s_ScrollBarSlider_ScrollBarSliderF_100ed668,param_1);
  (**(code **)(*(int *)this + 0xd0))(*puVar1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_c,s_ScrollBarSlider_ScrollBarSliderB_100ed690,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar1);
  uVar2 = (**(code **)(*param_1 + 8))(s_ButtonBorder_100ed6b8);
  *(undefined4 *)((int)this + 0xa0) = uVar2;
  return;
}

