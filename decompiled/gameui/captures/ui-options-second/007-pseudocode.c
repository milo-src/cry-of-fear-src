
void __fastcall FUN_10056de8(int param_1)

{
  uint uVar1;
  undefined1 local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_14 = (int *)0x0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*DAT_100f9e78 + 0x14))(&local_14,&local_c);
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0x32c))();
  local_18 = -1;
  for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
    FUN_100ad757(local_11c,(byte *)s__i_x__i_100e90f8);
    local_1c = -1;
    uVar1 = FUN_100579f0(*local_14,local_14[1]);
    if ((uVar1 & 0xff) == 0) {
      if (*(char *)(param_1 + 0x2a0) == '\0') {
        local_1c = (**(code **)(**(int **)(param_1 + 0x1dc) + 0x310))(local_11c,0);
      }
    }
    else {
      if (*(char *)(param_1 + 0x2a0) == '\x01') {
        local_1c = (**(code **)(**(int **)(param_1 + 0x1dc) + 0x310))(local_11c,0);
      }
      local_8 = 1;
    }
    if ((*local_14 == *(int *)(param_1 + 0x148)) && (local_14[1] == *(int *)(param_1 + 0x14c))) {
      local_18 = local_1c;
    }
    local_14 = local_14 + 3;
  }
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0xbc))(local_8);
  if (local_18 == -1) {
    (**(code **)(**(int **)(param_1 + 0x1dc) + 0x33c))(0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1dc) + 0x33c))(local_18);
  }
  return;
}

