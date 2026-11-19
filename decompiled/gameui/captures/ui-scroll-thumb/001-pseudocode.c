
void __fastcall FUN_100a83e2(int *param_1)

{
  longlong lVar1;
  float local_34;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x108))(&local_8,&local_20);
  local_34 = (float)local_8;
  local_1c = (float)local_20 - 1.0;
  local_18 = (float)(param_1[0x24] - param_1[0x23]);
  local_14 = (float)(param_1[0x25] - param_1[0x23]);
  local_10 = (float)param_1[0x26];
  local_c = local_14 / (local_18 - local_10);
  if (0.0 < local_10) {
    if (local_18 <= 0.0) {
      local_18 = 1.0;
    }
    if (*(char *)((int)param_1 + 0x71) != '\0') {
      local_34 = local_1c;
    }
    lVar1 = __ftol();
    param_1[0x1d] = (int)lVar1;
    lVar1 = __ftol();
    param_1[0x1e] = (int)lVar1;
    if (local_34 < (float)param_1[0x1e]) {
      lVar1 = __ftol();
      param_1[0x1d] = (int)lVar1;
      lVar1 = __ftol();
      param_1[0x1e] = (int)lVar1;
    }
  }
  (**(code **)(*param_1 + 0x10))();
  return;
}

