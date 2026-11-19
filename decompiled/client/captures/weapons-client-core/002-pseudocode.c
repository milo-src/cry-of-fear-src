
undefined4 FUN_1001b240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_10080850(param_3,param_2);
  uVar1 = FUN_100809b0();
  *(undefined4 *)(in_ECX + 0x48) = uVar1;
  uVar1 = FUN_100809b0();
  *(undefined4 *)(in_ECX + 0x4c) = uVar1;
  return 1;
}

