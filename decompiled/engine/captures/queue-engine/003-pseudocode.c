
void FUN_01dd80af(undefined4 param_1)

{
  undefined4 *local_8;
  
  if (DAT_024988a8 != (undefined4 *)0x0) {
    for (local_8 = DAT_024988a8; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)local_8[6]) {
      FUN_01d4705f(param_1,0x27);
      FUN_01d4705f(param_1,*local_8);
      FUN_01d4705f(param_1,local_8[1]);
      FUN_01d470eb(param_1,local_8[2]);
      FUN_01d470eb(param_1,local_8[3]);
      FUN_01d470eb(param_1,local_8[4]);
      FUN_01d470eb(param_1,local_8[5]);
    }
  }
  return;
}

