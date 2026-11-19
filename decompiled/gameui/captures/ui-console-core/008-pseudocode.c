
void __fastcall FUN_100520ed(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  uint *puVar6;
  void *this;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 *local_350;
  uint local_330 [64];
  int local_230;
  uint local_22c [64];
  int *local_12c;
  undefined4 local_128;
  int local_124 [6];
  undefined1 local_10c [260];
  undefined4 local_8;
  
  FUN_100ad757(local_10c,(byte *)s__s_kb_def_lst_100e84e0);
  uVar9 = 0;
  puVar8 = &DAT_100e84f0;
  puVar7 = local_10c;
  piVar1 = (int *)FUN_10058cb6();
  iVar2 = (**(code **)(*piVar1 + 0x28))(puVar7,puVar8,uVar9);
  if (iVar2 != 0) {
    local_230 = iVar2;
    piVar1 = (int *)FUN_10058cb6();
    local_8 = (**(code **)(*piVar1 + 0x3c))(iVar2);
    FUN_10040ee0(local_124,0,local_8,'\x01');
    uVar9 = local_8;
    iVar2 = local_230;
    uVar3 = FUN_10035fd0(local_124);
    piVar1 = (int *)FUN_10058cb6();
    (**(code **)(*piVar1 + 0x54))(uVar3,uVar9,iVar2);
    iVar2 = local_230;
    piVar1 = (int *)FUN_10058cb6();
    (**(code **)(*piVar1 + 0x2c))(iVar2);
    FUN_10051a19((int)param_1);
    local_128 = FUN_10035fd0(local_124);
    while( true ) {
      local_128 = FUN_100517af(local_128);
      pcVar4 = FUN_100517d2();
      sVar5 = _strlen(pcVar4);
      if (sVar5 == 0) break;
      puVar6 = (uint *)FUN_100517d2();
      FUN_100ae190(local_22c,puVar6);
      local_128 = FUN_100517af(local_128);
      pcVar4 = FUN_100517d2();
      sVar5 = _strlen(pcVar4);
      if (sVar5 == 0) break;
      puVar6 = (uint *)FUN_100517d2();
      FUN_100ae190(local_330,puVar6);
      local_12c = FUN_100517dc(param_1,(byte *)local_330);
      if (local_12c != (int *)0x0) {
        FUN_1005199e(param_1,local_12c,(byte *)local_22c);
      }
    }
    this = (void *)FUN_100743aa(0x18);
    if (this == (void *)0x0) {
      local_350 = (undefined4 *)0x0;
    }
    else {
      local_350 = FUN_10072470(this,s_ApplyButtonEnable_100e84f4);
    }
    (**(code **)(*param_1 + 0xac))(local_350);
    local_12c = FUN_100517dc(param_1,(byte *)s_toggleconsole_100e8508);
    if (local_12c != (int *)0x0) {
      FUN_1005199e(param_1,local_12c,&DAT_100e8518);
    }
    local_12c = FUN_100517dc(param_1,(byte *)s_cancelselect_100e851c);
    if (local_12c != (int *)0x0) {
      FUN_1005199e(param_1,local_12c,(byte *)s_ESCAPE_100e852c);
    }
    FUN_10035f90(local_124);
  }
  return;
}

