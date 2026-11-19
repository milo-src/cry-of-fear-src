
void __thiscall FUN_1003f510(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_24 [4];
  COleDateTimeSpan local_20 [4];
  undefined1 local_1c [4];
  COleDateTimeSpan local_18 [4];
  undefined1 local_14 [4];
  COleDateTimeSpan local_10 [4];
  COleDateTimeSpan local_c [4];
  undefined1 local_8 [4];
  
  FUN_10099b05(this,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_8,s_InGameDesktop_MenuColor_100e5eb4,param_1);
  (**(code **)(*(int *)this + 0xd0))(*puVar1);
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_c,0,0,0,0);
  (**(code **)(*(int *)this + 0xcc))(*puVar1);
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_10,0,0,0,0);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_14,s_InGameDesktop_MenuColor_100e5eb4,param_1,*puVar1);
  (**(code **)(*(int *)this + 0x2ec))(*puVar1);
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_18,0,0,0,0);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_1c,s_InGameDesktop_ArmedMenuColor_100e5e94,param_1,*puVar1);
  (**(code **)(*(int *)this + 0x2f0))(*puVar1);
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_20,0,0,0,0);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_24,s_InGameDesktop_DepressedMenuColor_100e5e70,param_1,*puVar1);
  (**(code **)(*(int *)this + 0x2f4))(*puVar1);
  (**(code **)(*(int *)this + 0x22c))(3);
  (**(code **)(*(int *)this + 0xf0))(0);
  (**(code **)(*(int *)this + 0x300))(0);
  (**(code **)(*(int *)this + 0x304))(0);
  (**(code **)(*(int *)this + 0x308))(0);
  uVar2 = (**(code **)(*(int *)this + 0x54))();
  uVar2 = (**(code **)(*param_1 + 0xc))(s_MenuLarge_100e5e64,uVar2);
  (**(code **)(*(int *)this + 0x248))(uVar2);
  (**(code **)(*(int *)this + 0x230))(0,0);
  FUN_10059e4f(this,s_sound_UI_buttonrollover_wav_100e5e48);
  FUN_10059e95(this,s_sound_UI_buttonclick_wav_100e5e2c);
  FUN_10059edb(this,s_sound_UI_buttonclickrelease_wav_100e5e0c);
  (**(code **)(*(int *)this + 0x2d4))(1);
  if (*(char *)((int)this + 0x128) != '\0') {
    (**(code **)(*(int *)this + 0x22c))(5);
  }
  return;
}

