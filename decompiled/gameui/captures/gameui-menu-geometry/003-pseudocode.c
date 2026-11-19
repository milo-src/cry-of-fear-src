
void __thiscall FUN_100970ae(void *this,int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_28;
  undefined1 local_20 [4];
  COleDateTimeSpan local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  FUN_10060a6b(this,param_1);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_14,s_Menu_FgColor_100ec50c,param_1);
  (**(code **)(*(int *)this + 0xd0))(*puVar2);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_18,s_Menu_BgColor_100ec51c,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar2);
  puVar2 = (undefined4 *)ATL::COleDateTimeSpan::COleDateTimeSpan(local_1c,0xff,0xff,0xff,0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(local_20,s_BorderDark_100ec52c,*puVar2);
  *(undefined4 *)((int)this + 0xdc) = *puVar2;
  local_8 = FUN_10098ba0((int)this + 0x8c);
  while( true ) {
    iVar3 = FUN_10098a20();
    if (local_8 == iVar3) break;
    piVar4 = (int *)FUN_10098a80((void *)((int)this + 0x8c),local_8);
    cVar1 = FUN_10099f40(*piVar4);
    if (cVar1 != '\0') {
      puVar2 = &local_10;
      piVar4 = &local_c;
      puVar5 = (undefined4 *)FUN_10098a80((void *)((int)this + 0x8c),local_8);
      FUN_10099e4c((void *)*puVar5,piVar4,puVar2);
      if (local_c < *(int *)((int)this + 0xd4)) {
        local_28 = *(int *)((int)this + 0xd4);
      }
      else {
        local_28 = local_c;
      }
      *(int *)((int)this + 0xd4) = local_28;
    }
    local_8 = FUN_10098bc0((void *)((int)this + 0x8c),local_8);
  }
  *(byte *)((int)this + 0xc4) = *(byte *)((int)this + 0xc4) | 4;
  FUN_10096249((int)this);
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

