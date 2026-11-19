
void __fastcall FUN_10095f2e(CSliderCtrl *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar2 = FUN_10078b30((int)(param_1 + 0xb0));
  if (*(int *)(param_1 + 0x84) < iVar2) {
    (**(code **)(*(int *)param_1 + 0x2c0))();
    (**(code **)(*(int *)param_1 + 0x2d0))();
  }
  else {
    (**(code **)(*(int *)param_1 + 0x2c4))();
  }
  (**(code **)(*(int *)param_1 + 0x2cc))();
  (**(code **)(*(int *)param_1 + 0x18))(local_10,local_1c,&local_8,&local_14);
  local_28 = 0;
  local_20 = 0;
  while( true ) {
    iVar2 = FUN_10078b30((int)(param_1 + 0xb0));
    if (iVar2 <= local_20) break;
    piVar3 = (int *)FUN_10070c30(param_1 + 0xb0,local_20);
    puVar4 = (undefined4 *)FUN_10098a80(param_1 + 0x8c,*piVar3);
    piVar3 = (int *)*puVar4;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x78))();
      if (cVar1 != '\0') {
        FUN_1005e0ab(piVar3,0,local_28);
        if (*(int *)(param_1 + 0xe4) != 0) {
          (**(code **)(*piVar3 + 0x248))(*(undefined4 *)(param_1 + 0xe4));
        }
        local_28 = local_28 + *(int *)(param_1 + 0x78);
        cVar1 = FUN_10099f40((int)piVar3);
        if ((cVar1 == '\0') && (0 < *(int *)(param_1 + 0xd4))) {
          (**(code **)(*piVar3 + 0x230))(*(undefined4 *)(param_1 + 0xd4),0);
        }
        else {
          cVar1 = FUN_10099f40((int)piVar3);
          if (cVar1 != '\0') {
            (**(code **)(*piVar3 + 0x230))(0,0);
          }
        }
      }
    }
    local_20 = local_20 + 1;
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_10096249((int)param_1);
  }
  else if ((*(int *)(param_1 + 0x7c) != 0) &&
          (*(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x7c),
          ((byte)param_1[0xc4] & 1) != 0)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xd8);
  }
  FUN_10096579((int *)param_1);
  local_c = 0;
  if (((byte)param_1[0xc4] & 1) != 0) {
    local_c = *(int *)(param_1 + 0xd8);
  }
  FUN_1005e115(param_1,*(int *)(param_1 + 200) + local_c,local_28 + local_8 + local_14);
  local_18 = FUN_10097389((int *)param_1);
  if (local_18 != 0) {
    FUN_10096451(param_1);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x78))();
  if (cVar1 != '\0') {
    FUN_1009634a((int *)param_1);
  }
  local_24 = FUN_10098ba0((int)(param_1 + 0x8c));
  while( true ) {
    iVar2 = FUN_10098a20();
    if (local_24 == iVar2) break;
    uVar6 = 0;
    uVar5 = 0;
    puVar4 = (undefined4 *)FUN_10098a80(param_1 + 0x8c,local_24);
    (**(code **)(*(int *)*puVar4 + 0xe8))(uVar5,uVar6);
    local_24 = FUN_10098bc0(param_1 + 0x8c,local_24);
  }
  (**(code **)(*(int *)param_1 + 0x10))();
  return;
}

