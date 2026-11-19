
void __fastcall FUN_1003d1d7(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_18;
  char *local_14;
  char local_10;
  uint local_c;
  int local_8;
  
  piVar7 = &local_18;
  piVar6 = &local_8;
  piVar2 = (int *)FUN_10058c8e();
  (**(code **)(*piVar2 + 0x80))(piVar6,piVar7);
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar3 = FUN_100606d5(*(undefined4 **)(param_1 + 0xb0));
    iVar5 = (local_18 - iVar3) + -0x40;
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar4 = FUN_10060665(*(undefined4 **)(param_1 + 0xb0));
    FUN_1005e0ab(*(void **)(param_1 + 0xb0),(local_8 - iVar3) - iVar4,iVar5);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x74))(1);
  }
  local_c = local_c & 0xffffff00;
  local_10 = '\0';
  if (DAT_100fe918 != '\0') {
    cVar1 = (**(code **)(*DAT_100ef800 + 4))();
    if (cVar1 == '\0') {
      FUN_100113eb(DAT_100ef800,0,0);
      DAT_100fe918 = '\0';
    }
  }
  local_14 = (char *)(**(code **)(DAT_100f9e8c + 0x128))();
  if (local_14 != (char *)0x0) {
    if (*local_14 != '\0') {
      local_c = CONCAT31(local_c._1_3_,1);
      iVar3 = (**(code **)(DAT_100f9e8c + 0x90))();
      if ((1 < iVar3) && (local_10 = '\x01', DAT_100ef800 != (int *)0x0)) {
        cVar1 = (**(code **)(*DAT_100ef800 + 4))();
        if (cVar1 != '\0') {
          DAT_100fe918 = '\x01';
        }
      }
    }
  }
  if (DAT_100fdb64 != (int *)0x0) {
    iVar3 = FUN_10032140((int *)&DAT_100f9e74);
    if ((iVar3 == 0) && ((local_c & 0xff) == 0)) {
      cVar1 = (**(code **)(*DAT_100fdb64 + 0x10))(2);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_100fdb64 + 4))(2,1);
        goto LAB_1003d442;
      }
    }
    iVar3 = FUN_10032140((int *)&DAT_100f9e74);
    if (((iVar3 != 0) && ((local_c & 0xff) == 0)) && (DAT_100fe918 != '\0')) {
      cVar1 = (**(code **)(*DAT_100fdb64 + 0x10))(2);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_100fdb64 + 4))(2,1);
        goto LAB_1003d442;
      }
    }
    iVar3 = FUN_10032140((int *)&DAT_100f9e74);
    if ((iVar3 != 0) && (DAT_100fe918 == '\0')) {
      cVar1 = (**(code **)(*DAT_100fdb64 + 0x10))(2);
      if (cVar1 != '\0') {
        (**(code **)(*DAT_100fdb64 + 0xc))();
        goto LAB_1003d442;
      }
    }
    if ((local_c & 0xff) != 0) {
      cVar1 = (**(code **)(*DAT_100fdb64 + 0x10))(2);
      if (cVar1 != '\0') {
        (**(code **)(*DAT_100fdb64 + 0xc))();
      }
    }
  }
LAB_1003d442:
  FUN_1003fa90(*(void **)(param_1 + 0xb4),(char)local_c,local_10,DAT_100fe918);
  iVar3 = FUN_100606d5(*(undefined4 **)(param_1 + 0xb4));
  FUN_1005e0ab(*(void **)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xbc),(local_18 - iVar3) + -0x40
              );
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x74))(1);
  return;
}

