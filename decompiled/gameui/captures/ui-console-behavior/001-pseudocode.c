
void __fastcall FUN_100307af(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 4) != '\0') && (iVar1 = FUN_100343a4(), iVar1 == 0)) {
    uVar3 = 0;
    piVar2 = (int *)FUN_10058c8e();
    (**(code **)(*piVar2 + 0xcc))(uVar3);
    (**(code **)(**(int **)(param_1 + 8) + 0x280))();
  }
  return;
}

