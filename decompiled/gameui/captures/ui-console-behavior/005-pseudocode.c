
void __fastcall FUN_10049ffc(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10068448(param_1);
  piVar1 = (int *)(**(code **)(*param_1 + 0x264))(param_1[0x48]);
  (**(code **)(*piVar1 + 4))();
  uVar2 = (**(code **)(*param_1 + 0x50))();
  piVar1 = (int *)FUN_10058c84();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x1c))(uVar2);
  uVar2 = (**(code **)(*piVar1 + 8))(s_DepressedButtonBorder_100e6c2c);
  (**(code **)(*(int *)param_1[0x47] + 0xf0))(uVar2);
  uVar2 = (**(code **)(*piVar1 + 8))(s_DepressedButtonBorder_100e6c44);
  (**(code **)(*(int *)param_1[0x46] + 0xf0))(uVar2);
  FUN_1005e14a(param_1,local_20 + 4,local_20);
  local_c = 8;
  local_20[1] = 0x18;
  local_20[2] = 0x1c;
  local_20[3] = 4;
  local_8 = 0x40;
  FUN_1005e0ab((void *)param_1[0x46],8,0x24);
  FUN_1005e115((void *)param_1[0x46],local_20[4] + -0x10,local_20[0] + -0x4c);
  FUN_1005e0ab((void *)param_1[0x47],8,local_20[0] + -0x20);
  FUN_1005e115((void *)param_1[0x47],local_20[4] + -0x58,0x18);
  FUN_1005e0ab((void *)param_1[0x48],local_20[4] + -0x48,local_20[0] + -0x20);
  FUN_1005e115((void *)param_1[0x48],0x40,0x18);
  FUN_1004a174(param_1);
  return;
}

