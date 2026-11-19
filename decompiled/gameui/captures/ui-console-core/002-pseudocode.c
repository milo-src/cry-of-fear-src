
undefined4 * __fastcall FUN_1004912d(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  
  FUN_10023f60(param_1,(undefined4 *)0x0,(uint *)s_GameConsole_100e6b74,1);
  FUN_1004b560(param_1 + 0x44);
  FUN_1004b650((int)param_1 + 0x111);
  FUN_1004b760((int)param_1 + 0x112);
  FUN_1004b7f0((int)param_1 + 0x113);
  FUN_1004b880(param_1 + 0x45);
  FUN_10002f00(param_1 + 0x4a);
  FUN_10002f00(param_1 + 0x4b);
  FUN_1004aaf0(param_1 + 0x8e,0,0);
  FUN_1004ac40(param_1 + 0x93,0,0);
  *param_1 = &PTR_FUN_100cc5e0;
  FUN_1005fec1(param_1,1,0);
  FUN_1005e262(param_1,0);
  FUN_1005ff26(param_1,100,100);
  FUN_10003160((int)param_1);
  FUN_1003dc3a();
  FUN_100240b0(param_1,s__GameUI_Console_100e6b80,'\x01');
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = FUN_10058f65(pvVar1,param_1,(uint *)s_ConsoleSubmit_100e6ba0,
                            s__GameUI_Submit_100e6b90);
  }
  param_1[0x48] = local_1c;
  (**(code **)(*(int *)param_1[0x48] + 0x310))(s_submit_100e6bb0);
  pvVar1 = operator_new(0xec);
  if (pvVar1 == (void *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_20 = FUN_10095220(pvVar1,param_1,(uint *)s_CompletionList_100e6bb8);
  }
  param_1[0x49] = local_20;
  FUN_1005fec1((void *)param_1[0x49],1,0);
  (**(code **)(*(int *)param_1[0x49] + 0x74))(0);
  pvVar1 = operator_new(0x138);
  if (pvVar1 == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x49])();
    local_24 = FUN_1004a8a0(pvVar1,param_1,(uint *)s_ConsoleEntry_100e6bc8,uVar2);
  }
  param_1[0x47] = local_24;
  (**(code **)(*(int *)param_1[0x47] + 0xa4))(param_1);
  (**(code **)(*(int *)param_1[0x47] + 0x2a8))(1);
  (**(code **)(*(int *)param_1[0x47] + 0xec))(1);
  pvVar1 = operator_new(0x13c);
  if (pvVar1 == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_1004aa00(pvVar1,param_1,(uint *)s_ConsoleHistory_100e6bd8,param_1[0x47]);
  }
  param_1[0x46] = local_28;
  FUN_100764a3((void *)param_1[0x46],'\x01');
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return param_1;
}

