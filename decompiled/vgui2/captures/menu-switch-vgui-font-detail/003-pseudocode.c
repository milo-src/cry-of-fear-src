
longlong __fastcall FUN_100135cf(undefined4 param_1)

{
  longlong lVar1;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  double local_c;
  
  (**(code **)(*DAT_1004830c + 0x80))(local_10,&local_1c,param_1);
  (**(code **)(*DAT_1004830c + 0x148))(local_14,&local_18);
  local_c = (double)local_1c / (double)local_18;
  lVar1 = __ftol();
  return lVar1;
}

