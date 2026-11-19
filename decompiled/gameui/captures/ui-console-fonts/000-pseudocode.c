
void __thiscall FUN_1007d68d(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_30 [4];
  COleDateTimeSpan local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_10060a6b(this,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_8,s_WindowFgColor_100eb494,param_1);
  (**(code **)(*(int *)this + 0xd0))(*puVar1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_c,s_WindowBgColor_100eb4a4,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_10,s_TextCursorColor_100eb4b4,param_1);
  *(undefined4 *)((int)this + 0xf4) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_14,s_WindowDisabledFgColor_100eb4c4,param_1);
  *(undefined4 *)((int)this + 0xf8) = *puVar1;
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x138))(local_18,s_ControlBG_100eb4dc,param_1);
  *(undefined4 *)((int)this + 0xfc) = *puVar1;
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_1c,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))(local_20,s_SelectionFgColor_100eb4e8,*puVar1);
  *(undefined4 *)((int)this + 0x104) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_24,s_SelectionBgColor_100eb4fc,param_1);
  *(undefined4 *)((int)this + 0x100) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_28,s_SelectionBG2_100eb510,param_1);
  *(undefined4 *)((int)this + 0x108) = *puVar1;
  piVar3 = param_1;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_2c,0,0,0,0);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))(local_30,s_BorderSelection_100eb520,*puVar1,piVar3);
  *(undefined4 *)((int)this + 0x115) = *puVar1;
  uVar2 = (**(code **)(*param_1 + 8))(s_ButtonDepressedBorder_100eb530);
  (**(code **)(*(int *)this + 0xf0))(uVar2);
  uVar2 = (**(code **)(*(int *)this + 0x54))();
  uVar2 = (**(code **)(*param_1 + 0xc))(s_Default_100eb548,uVar2);
  *(undefined4 *)((int)this + 0xe8) = uVar2;
  (**(code **)(*(int *)this + 0x284))(*(undefined4 *)((int)this + 0xe8));
  return;
}

