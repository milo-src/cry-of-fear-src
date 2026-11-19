
void __fastcall FUN_100a8860(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x108))(&local_c,&local_14);
  local_10 = param_1[0x24] - param_1[0x23];
  if ((0 < local_10) && (param_1[0x26] < local_10)) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xd8))(local_18);
    uVar4 = *puVar1;
    local_8 = uVar4;
    piVar2 = (int *)FUN_10058c8e();
    (**(code **)(*piVar2 + 0x1c))(uVar4);
    if (*(char *)((int)param_1 + 0x71) == '\0') {
      iVar7 = param_1[0x1e];
      uVar6 = 0;
      iVar5 = param_1[0x1d];
      uVar4 = local_14;
      piVar2 = (int *)FUN_10058c8e();
      (**(code **)(*piVar2 + 0x24))(iVar5,uVar6,iVar7,uVar4);
      if (param_1[0x28] != 0) {
        (**(code **)(*(int *)param_1[0x28] + 4))(param_1[0x1d] + -1,1,param_1[0x1e],local_14);
      }
    }
    else {
      iVar7 = param_1[0x1e];
      iVar3 = local_c + -1;
      iVar5 = param_1[0x1d];
      uVar4 = 0;
      piVar2 = (int *)FUN_10058c8e();
      (**(code **)(*piVar2 + 0x24))(uVar4,iVar5,iVar3,iVar7);
      if (param_1[0x28] != 0) {
        (**(code **)(*(int *)param_1[0x28] + 4))(0,param_1[0x1d],local_c + -1,param_1[0x1e]);
      }
    }
  }
  return;
}

