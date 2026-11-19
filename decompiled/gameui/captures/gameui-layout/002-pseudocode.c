
void __thiscall FUN_1003f300(void *this,int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined *extraout_ECX;
  float10 fVar4;
  COleDateTimeSpan local_8 [4];
  
  FUN_100970ae(this,param_1);
  pbVar1 = (byte *)(**(code **)(*param_1 + 4))(s_InGameDesktop_MenuItemHeight_100e5da0);
  uVar2 = FUN_100ad692(this_00,pbVar1);
  (**(code **)(*(int *)this + 0x29c))(uVar2);
  puVar3 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_8,0,0,0,0);
  (**(code **)(*(int *)this + 0xcc))(*puVar3);
  (**(code **)(*(int *)this + 0xf0))(0);
  pbVar1 = (byte *)(**(code **)(*param_1 + 4))(s_InGameDesktop_MenuItemVisibility_100e5d78);
  fVar4 = FUN_100af086(extraout_ECX,pbVar1);
  *(float *)((int)this + 0xf4) = (float)fVar4;
  if (*(float *)((int)this + 0xf4) < 1e-07) {
    *(undefined4 *)((int)this + 0xf4) = 0x33d6bf95;
  }
  return;
}

