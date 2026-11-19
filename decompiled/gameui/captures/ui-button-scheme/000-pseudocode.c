
void __thiscall FUN_100597f0(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_2c [4];
  COleDateTimeSpan local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_1005c2fa(this,param_1);
  uVar1 = (**(code **)(*param_1 + 8))(s_ButtonBorder_100e9470);
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  uVar1 = (**(code **)(*param_1 + 8))(s_ButtonDepressedBorder_100e9480);
  *(undefined4 *)((int)this + 0xdc) = uVar1;
  uVar1 = (**(code **)(*param_1 + 8))(s_ButtonKeyFocusBorder_100e9498);
  *(undefined4 *)((int)this + 0xe0) = uVar1;
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_8,param_1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))(local_c,s_ButtonFgColor_100e94b0,*puVar2);
  *(undefined4 *)((int)this + 0xe4) = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0xd4))(local_10,param_1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))(local_14,s_ButtonBgColor_100e94c0,*puVar2);
  *(undefined4 *)((int)this + 0xe8) = *puVar2;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))
                     (local_18,s_ButtonArmedFgColor_100e94d0,*(undefined4 *)((int)this + 0xe4),
                      param_1);
  *(undefined4 *)((int)this + 0xec) = *puVar2;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))
                     (local_1c,s_ButtonArmedBgColor_100e94e4,*(undefined4 *)((int)this + 0xe8),
                      param_1);
  *(undefined4 *)((int)this + 0xf0) = *puVar2;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))
                     (local_20,s_ButtonDepressedFgColor_100e94f8,*(undefined4 *)((int)this + 0xe4),
                      param_1);
  *(undefined4 *)((int)this + 0xf4) = *puVar2;
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))
                     (local_24,s_ButtonDepressedBgColor_100e9510,*(undefined4 *)((int)this + 0xe8),
                      param_1);
  *(undefined4 *)((int)this + 0xf8) = *puVar2;
  puVar2 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_28,0,0,0,0xff);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x134))
                     (local_2c,s_ButtonFocusBorder_100e9528,*puVar2,param_1);
  *(undefined4 *)((int)this + 0xfc) = *puVar2;
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

