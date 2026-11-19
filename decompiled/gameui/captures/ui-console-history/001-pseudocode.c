
void __fastcall FUN_1004a174(int *param_1)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_1005e0e0(param_1,&local_10,&local_14);
  FUN_1005e0e0((void *)param_1[0x47],&local_8,&local_c);
  FUN_1005e0ab((void *)param_1[0x49],local_10 + local_8,local_14 + 0x20 + local_c);
  (**(code **)(*(int *)param_1[0x47] + 0x30))(0);
  (**(code **)(*param_1 + 200))();
  return;
}

