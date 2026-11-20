
void FUN_01dd6a43(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_14;
  int local_10;
  int *local_8;
  
  piVar1 = DAT_027fc11c;
  uVar2 = FUN_01ddd3c7(param_2);
  if ((param_1 != 0) && ((DAT_027fc11c == (int *)0x0 || (DAT_027fc11c[0x12e7] != param_1)))) {
    local_14 = DAT_0251f324;
    for (local_10 = 0; local_10 < DAT_0251f328; local_10 = local_10 + 1) {
      if (local_14[0x12e7] == param_1) {
        DAT_027fc11c = local_14;
        break;
      }
      local_14 = local_14 + 0x1406;
    }
  }
  local_10 = 0;
  local_14 = DAT_0251f324;
  do {
    if (DAT_0251f328 <= local_10) {
      FUN_01d483c6(&DAT_02574478);
      DAT_027fc11c = piVar1;
      return;
    }
    if ((*local_14 == 0) || (((param_3 & 0x80) != 0 && (local_14 == DAT_027fc11c))))
    goto LAB_01dd6ade;
    if ((param_1 == 0) ||
       ((*(int *)(param_1 + 0x2c4) == 0 || (*(int *)(local_14[0x12e7] + 0x2c4) == 0)))) {
LAB_01dd6ba0:
      iVar3 = FUN_01dd696a(local_14,uVar2,param_3);
      if (iVar3 == 0) {
        DAT_024988a0 = DAT_024988a0 + DAT_02574488;
      }
      else {
        if (param_4 == 0) {
          local_8 = local_14 + 0x970;
        }
        else {
          local_8 = local_14 + 0x1f;
        }
        if (DAT_02574488 < local_8[3] - local_8[4]) {
          FUN_01d48557(local_8,DAT_02574480,DAT_02574488);
        }
      }
    }
    else if (DAT_0242f310 == 0) {
      if ((*(uint *)(param_1 + 0x2c4) & *(uint *)(local_14[0x12e7] + 0x2c4)) != 0)
      goto LAB_01dd6ba0;
    }
    else if ((DAT_0242f310 != 1) ||
            ((*(uint *)(param_1 + 0x2c4) & *(uint *)(local_14[0x12e7] + 0x2c4)) == 0))
    goto LAB_01dd6ba0;
LAB_01dd6ade:
    local_10 = local_10 + 1;
    local_14 = local_14 + 0x1406;
  } while( true );
}

