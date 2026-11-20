
void FUN_1007fa40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_105440a8 != 0) {
    puVar2 = (undefined4 *)(DAT_105440a8 + 4 + *(int *)(*(int *)(DAT_105440a8 + 4) + 4));
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (DAT_105440a4 != 0) {
    FUN_100b42a4(DAT_105440a4,0xe0);
    DAT_105440a4 = 0;
  }
  return;
}

