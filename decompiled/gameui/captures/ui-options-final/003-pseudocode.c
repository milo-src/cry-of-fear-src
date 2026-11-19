
void __fastcall FUN_10051efa(void *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  int local_c;
  int local_8;
  
  for (local_c = 0; iVar1 = FUN_10052dc0((int)param_1 + 0x4c4), local_c < iVar1;
      local_c = local_c + 1) {
    puVar2 = (undefined2 *)FUN_10052da0((void *)((int)param_1 + 0x4c4),local_c);
    FUN_10041984(puVar2);
    FUN_10051ecf();
  }
  FUN_10052e00((void *)((int)param_1 + 0x4c4));
  FUN_10051d86((int)param_1);
  for (local_8 = 0; iVar1 = (**(code **)(**(int **)((int)param_1 + 0xb8) + 0x288))(),
      local_8 < iVar1; local_8 = local_8 + 1) {
    uVar3 = (**(code **)(**(int **)((int)param_1 + 0xb8) + 0x28c))(local_8);
    piVar4 = (int *)(**(code **)(**(int **)((int)param_1 + 0xb8) + 0x274))(uVar3);
    if (((piVar4 != (int *)0x0) &&
        (puVar5 = (uint *)(**(code **)(*piVar4 + 0x30))(s_Binding_100e84a8,&DAT_1010047c),
        puVar5 != (uint *)0x0)) && ((char)*puVar5 != '\0')) {
      pbVar6 = (byte *)(**(code **)(*piVar4 + 0x30))(&DAT_100e84b0,&DAT_10100480);
      if ((pbVar6 != (byte *)0x0) && (*pbVar6 != 0)) {
        FUN_10051ea0();
        iVar1 = FUN_10051909(param_1,pbVar6);
        if (iVar1 != -1) {
          puVar7 = FUN_10051e62(puVar5);
          *(uint **)((int)param_1 + iVar1 * 4 + 0xc4) = puVar7;
        }
      }
      pbVar6 = (byte *)(**(code **)(*piVar4 + 0x30))(s_AltKey_100e84b4,&DAT_10100484);
      if ((pbVar6 != (byte *)0x0) && (*pbVar6 != 0)) {
        FUN_10051ea0();
        iVar1 = FUN_10051909(param_1,pbVar6);
        if (iVar1 != -1) {
          puVar5 = FUN_10051e62(puVar5);
          *(uint **)((int)param_1 + iVar1 * 4 + 0xc4) = puVar5;
        }
      }
    }
  }
  (**(code **)(DAT_100f9e8c + 0x50))(s_exec_userconfig_cfg_100e84bc);
  return;
}

