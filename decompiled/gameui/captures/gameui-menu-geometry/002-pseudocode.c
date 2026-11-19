
void __fastcall FUN_1003f830(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  longlong lVar4;
  int local_c;
  int local_8;
  
  FUN_1005f80d();
  if (DAT_100ef800 != (int *)0x0) {
    FUN_100106f6(DAT_100ef800);
  }
  if ((char)param_1[0x3b] != '\0') {
    *(undefined1 *)((int)param_1 + 0xed) = 1;
    piVar1 = (int *)FUN_10058c98();
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    param_1[0x3c] = (int)(float)fVar3;
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  if (*(char *)((int)param_1 + 0xed) != '\0') {
    piVar1 = (int *)FUN_10058c98();
    (**(code **)(*piVar1 + 0x10))();
    lVar4 = __ftol();
    local_c = (int)lVar4;
    iVar2 = FUN_1006009d(param_1);
    if (iVar2 <= local_c) {
      local_c = FUN_1006009d(param_1);
      *(undefined1 *)((int)param_1 + 0xed) = 0;
    }
    for (local_8 = 0; iVar2 = FUN_1006009d(param_1), local_8 < iVar2; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_100600c8(param_1,local_8);
      if (piVar1 != (int *)0x0) {
        iVar2 = FUN_1006009d(param_1);
        if (local_8 < iVar2 - local_c) {
          (**(code **)(*piVar1 + 0x100))(0);
        }
        else {
          (**(code **)(*piVar1 + 0x100))(1);
        }
      }
    }
    (**(code **)(*param_1 + 0xe8))(0,0);
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

