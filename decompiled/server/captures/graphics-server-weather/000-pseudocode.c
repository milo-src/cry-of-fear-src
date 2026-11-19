
void FUN_1009b650(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < *(int *)(DAT_10223188 + 0x90)) {
    do {
      iVar1 = FUN_10119680(iVar2);
      if (iVar1 != 0) {
        (*DAT_10223000)(1,DAT_102264b0,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
        (*DAT_10223008)((int)param_1);
        (*DAT_10223008)((int)param_2);
        (*DAT_10223008)((int)param_3);
        (*DAT_10223010)(param_4);
        (*DAT_10223010)(param_5);
        (*DAT_10223010)(param_6);
        (*DAT_10223004)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10223188 + 0x90));
  }
  return;
}

