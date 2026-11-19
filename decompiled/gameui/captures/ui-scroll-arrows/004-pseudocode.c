
void __thiscall FUN_100a1400(void *this,int *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_24 [4];
  COleDateTimeSpan local_20 [4];
  undefined1 local_1c [4];
  COleDateTimeSpan local_18 [4];
  undefined1 local_14 [4];
  COleDateTimeSpan local_10 [4];
  undefined1 local_c [4];
  COleDateTimeSpan local_8 [4];
  
  piVar3 = param_1;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_8,0x96,0x96,0x96,0);
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0x18) + 0x134))
                     (local_c,s_CheckBgColor_100eca00,*puVar1,piVar3);
  *(undefined4 *)((int)this + 0x28) = *puVar1;
  piVar3 = param_1;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_10,0x14,0x14,0x14,0);
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0x18) + 0x134))
                     (local_14,s_CheckButtonBorder1_100ec9ec,*puVar1,piVar3);
  *(undefined4 *)((int)this + 0x1c) = *puVar1;
  piVar3 = param_1;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_18,0x5a,0x5a,0x5a,0);
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0x18) + 0x134))
                     (local_1c,s_CheckButtonBorder2_100ec9d8,*puVar1,piVar3);
  *(undefined4 *)((int)this + 0x20) = *puVar1;
  piVar3 = param_1;
  puVar1 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_20,0x14,0x14,0x14,0);
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0x18) + 0x134))
                     (local_24,s_CheckButtonCheck_100ec9c4,*puVar1,piVar3);
  *(undefined4 *)((int)this + 0x24) = *puVar1;
  uVar2 = (**(code **)(*param_1 + 0xc))(s_Marlett_100ea4b8,param_2);
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  return;
}

