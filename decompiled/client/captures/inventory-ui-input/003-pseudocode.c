
undefined4 HUD_Key_Event(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x7ace0  570  HUD_Key_Event */
  if (DAT_101b2600 != 0) {
    uVar1 = FUN_100a9880(param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}

