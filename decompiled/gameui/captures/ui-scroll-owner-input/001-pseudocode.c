
void __fastcall FUN_100a8540(int *param_1)

{
  double dVar1;
  float10 fVar2;
  longlong lVar3;
  int local_44;
  float local_34;
  float local_2c;
  float local_28;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x108))(&local_8,&local_20);
  local_1c = (float)local_20;
  local_18 = (float)(param_1[0x24] - param_1[0x23]);
  local_10 = (float)(param_1[0x25] - param_1[0x23]);
  local_14 = (float)param_1[0x1d];
  local_c = (float)param_1[0x26];
  if (0.0 < local_c) {
    if (local_18 <= 0.0) {
      local_18 = 1.0;
    }
    local_2c = (float)local_8;
    local_28 = local_1c;
    if (*(char *)((int)param_1 + 0x71) != '\0') {
      local_2c = local_1c;
      local_28 = (float)local_8;
    }
    local_34 = local_2c * (local_c / local_18);
    if (local_34 < local_28) {
      local_34 = local_28;
    }
    local_10 = (local_14 / (local_2c - local_34)) * (local_18 - local_c);
  }
  dVar1 = (double)(((float)param_1[0x26] + local_10) - (float)param_1[0x24]);
  fVar2 = FUN_100b16f0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  if ((float10)0.01 * (float10)local_18 <= fVar2) {
    lVar3 = __ftol();
    param_1[0x25] = (int)lVar3;
  }
  else {
    param_1[0x25] = param_1[0x24] - param_1[0x26];
  }
  if (param_1[0x25] < param_1[0x24] - param_1[0x26]) {
    local_44 = param_1[0x25];
  }
  else {
    local_44 = param_1[0x24] - param_1[0x26];
  }
  param_1[0x25] = local_44;
  return;
}

