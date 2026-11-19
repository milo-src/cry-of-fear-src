
undefined4 __fastcall FUN_100606d5(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  uVar1 = (**(code **)*param_1)(local_8,&local_c);
  piVar2 = (int *)FUN_10058cac();
  (**(code **)(*piVar2 + 0x14))(uVar1);
  return local_c;
}

