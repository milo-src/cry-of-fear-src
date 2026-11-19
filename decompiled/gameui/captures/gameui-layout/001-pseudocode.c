
void __thiscall FUN_1003db27(void *this,int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this_00;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_8 [4];
  
  FUN_10060a6b(this,param_1);
  (**(code **)(*(int *)this + 0xf0))(0);
  pbVar1 = (byte *)(**(code **)(*param_1 + 4))(s_InGameDesktop_GameMenuInset_100e5658);
  uVar2 = FUN_100ad692(this_00,pbVar1);
  *(undefined4 *)((int)this + 0xbc) = uVar2;
  uVar2 = 0;
  pcVar7 = s_resource_game_menu_mouseover_100e5674;
  piVar3 = (int *)FUN_10058c84();
  uVar2 = (**(code **)(*piVar3 + 0x14))(pcVar7,uVar2);
  uVar6 = 0;
  pcVar7 = s_resource_game_menu_100e5694;
  piVar3 = (int *)FUN_10058c84();
  iVar4 = (**(code **)(*piVar3 + 0x14))(pcVar7,uVar6,uVar2);
  FUN_10040260(*(void **)((int)this + 0xa8),iVar4,(int)pcVar7);
  uVar2 = 0;
  pcVar7 = s_resource_steam_menu_mouseover_100e56a8;
  piVar3 = (int *)FUN_10058c84();
  uVar2 = (**(code **)(*piVar3 + 0x14))(pcVar7,uVar2);
  uVar6 = 0;
  pcVar7 = s_resource_steam_menu_100e56c8;
  piVar3 = (int *)FUN_10058c84();
  iVar4 = (**(code **)(*piVar3 + 0x14))(pcVar7,uVar6,uVar2);
  FUN_10040260(*(void **)((int)this + 0xac),iVar4,(int)pcVar7);
  puVar5 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))
                     (local_8,s_InGameDesktop_WidescreenBarColor_100e56dc,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar5);
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

