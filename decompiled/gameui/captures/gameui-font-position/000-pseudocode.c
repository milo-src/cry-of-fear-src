
void __thiscall FUN_1005b618(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int local_3c;
  int local_2c;
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_c;
  int local_8;
  
  (**(code **)(*(int *)this + 0x108))(&local_8,&local_20);
  *param_1 = 0;
  *param_2 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = *(undefined4 *)((int)this + 0x74);
  local_14 = 0;
  while (iVar1 = FUN_1005d300((int)this + 0x7c), local_14 < iVar1) {
    piVar2 = (int *)FUN_1005d2e0((void *)((int)this + 0x7c),local_14);
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(&local_2c,local_28);
      if (local_8 < local_2c) {
        local_c = 3;
      }
      if (local_28[0] < local_1c) {
        local_3c = local_1c;
      }
      else {
        local_3c = local_28[0];
      }
      local_1c = local_3c;
      local_18 = local_18 + local_2c + (int)(short)piVar2[1];
    }
    local_14 = local_14 + 1;
  }
  switch(local_c) {
  case 0:
  case 3:
  case 6:
    *param_1 = 0;
    break;
  case 1:
  case 4:
  case 7:
    *param_1 = (local_8 - local_18) / 2;
    break;
  case 2:
  case 5:
  case 8:
    *param_1 = local_8 - local_18;
  }
  switch(*(undefined4 *)((int)this + 0x74)) {
  case 0:
  case 1:
  case 2:
    *param_2 = 0;
    break;
  case 3:
  case 4:
  case 5:
    *param_2 = (local_20 - local_1c) / 2;
    break;
  case 6:
  case 7:
  case 8:
    *param_2 = local_20 - local_1c;
  }
  *param_3 = *param_1 + local_18;
  *param_4 = *param_2 + local_1c;
  return;
}

