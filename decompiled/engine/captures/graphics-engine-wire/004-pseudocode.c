
int FUN_01d483e8(int *param_1,int param_2)

{
  int iVar1;
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  
  if (param_1[3] < param_1[4] + param_2) {
    if ((*(ushort *)(param_1 + 1) & 1) == 0) {
      if (param_1[3] == 0) {
        if (*param_1 == 0) {
          local_c = &DAT_01eb128c;
        }
        else {
          local_c = (undefined *)*param_1;
        }
        FUN_01df2656(s_SZ_GetSpace__Tried_to_write_to_a_01eb1290,local_c);
      }
      else {
        if (*param_1 == 0) {
          local_10 = &DAT_01eb12d0;
        }
        else {
          local_10 = (undefined *)*param_1;
        }
        FUN_01df2656(s_SZ_GetSpace__overflow_without_FS_01eb12d4,local_10);
      }
    }
    if (param_1[3] < param_2) {
      if ((*(ushort *)(param_1 + 1) & 1) == 0) {
        if (*param_1 == 0) {
          local_14 = &DAT_01eb1310;
        }
        else {
          local_14 = (undefined *)*param_1;
        }
        FUN_01df2656(s_SZ_GetSpace___i_is_>_full_buffer_01eb1314,param_2,local_14);
      }
      else {
        if (*param_1 == 0) {
          local_18 = &DAT_01eb1340;
        }
        else {
          local_18 = (undefined *)*param_1;
        }
        FUN_01d4abd8(s_SZ_GetSpace___i_is_>_full_buffer_01eb1344,param_2,local_18);
      }
    }
    if (*param_1 == 0) {
      local_1c = &DAT_01eb137c;
    }
    else {
      local_1c = (undefined *)*param_1;
    }
    FUN_01d4aa99(s_SZ_GetSpace__overflow_on__s_01eb1380,local_1c);
    FUN_01d483c6(param_1);
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 2;
  }
  iVar1 = param_1[4];
  param_1[4] = param_1[4] + param_2;
  return param_1[2] + iVar1;
}

