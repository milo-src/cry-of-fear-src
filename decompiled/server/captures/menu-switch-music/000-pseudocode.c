
void FUN_101148b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xd0))(), iVar1 == 0)) {
    iVar1 = (*DAT_10223068)(1);
    if ((iVar1 == 0) && (iVar1 = (*DAT_1022305c)(0), iVar1 == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)(iVar1 + 0x7c);
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar1 + 0x1d8) == 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    if (DAT_10222ee4 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar2 != 0) {
        (*DAT_10223038)("sv_coop_music",*(int *)(iVar1 + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
        iVar1 = 1;
        DAT_10222f1c = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x168);
        DAT_10222f18 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) >> 1 & 1;
        if (0 < *(int *)(DAT_10223188 + 0x90)) {
          do {
            iVar2 = FUN_10119680(iVar1);
            if ((iVar2 != 0) && (DAT_10222f20 == 0)) {
              iVar2 = *(int *)(in_ECX + 4);
              FUN_100ea5c0(*(undefined4 *)(iVar2 + 0x1d8),(*(byte *)(iVar2 + 0x1a4) & 2) != 0,
                           *(undefined4 *)(iVar2 + 0x168));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 <= *(int *)(DAT_10223188 + 0x90));
        }
        goto LAB_101149ff;
      }
    }
    FUN_100ea5c0(*(undefined4 *)(iVar1 + 0x1d8),(*(byte *)(iVar1 + 0x1a4) & 2) != 0,
                 *(undefined4 *)(iVar1 + 0x168));
  }
LAB_101149ff:
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
    FUN_10119900();
  }
  return;
}

