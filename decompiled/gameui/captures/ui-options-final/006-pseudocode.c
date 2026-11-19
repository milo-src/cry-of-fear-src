
void __fastcall FUN_10051ded(int param_1)

{
  uint *puVar1;
  int local_8;
  
  FUN_10051d86(param_1);
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    puVar1 = (uint *)(**(code **)(*DAT_100f9e78 + 0xc))(local_8);
    if ((puVar1 != (uint *)0x0) && ((char)*puVar1 != '\0')) {
      puVar1 = FUN_10051e62(puVar1);
      *(uint **)(param_1 + 0xc4 + local_8 * 4) = puVar1;
    }
  }
  return;
}

