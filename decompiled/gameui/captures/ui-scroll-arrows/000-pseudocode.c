
void __thiscall FUN_1007b055(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_100597f0(this,param_1);
  uVar1 = (**(code **)(*(int *)this + 0x54))();
  uVar1 = (**(code **)(*param_1 + 0xc))(s_Marlett_100eb28c,uVar1);
  (**(code **)(*(int *)this + 0x248))(uVar1);
  (**(code **)(*(int *)this + 0x22c))(3);
  (**(code **)(*(int *)this + 0x230))(3,0);
  uVar1 = (**(code **)(*param_1 + 8))(s_ScrollBarButtonBorder_100eb294);
  (**(code **)(*(int *)this + 0x300))(uVar1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_8,s_MenuButton_ButtonBgColor_100eb2ac,param_1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_c,s_MenuButton_ArmedArrowColor_100eb2c8,param_1,*puVar2);
  (**(code **)(*(int *)this + 0x2f0))(*puVar2);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_10,s_MenuButton_ButtonBgColor_100eb2e4,param_1)
  ;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_14,s_MenuButton_ArmedArrowColor_100eb300,param_1,*puVar2);
  (**(code **)(*(int *)this + 0x2f4))(*puVar2);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_18,s_MenuButton_ButtonBgColor_100eb31c,param_1)
  ;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_1c,s_MenuButton_ButtonArrowColor_100eb338,param_1,*puVar2);
  (**(code **)(*(int *)this + 0x2ec))(*puVar2);
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x138))(local_20,s_ControlBG_100eb354,param_1);
  *(undefined4 *)((int)this + 0x108) = *puVar2;
  return;
}

