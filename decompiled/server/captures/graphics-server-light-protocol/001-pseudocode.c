
void FUN_10098610(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_10017780();
  if (iVar1 == 0) {
    FUN_10017ad0();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x170) = 0;
    return;
  }
  (*DAT_10223000)(4,0x17,*(int *)(in_ECX + 4) + 8,0);
  (*DAT_10223008)(0x1c);
  iVar1 = FUN_100177a0();
  iVar1 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
  (*DAT_10223010)(*(int *)(*(int *)(in_ECX + 4) + 0x188) * 0x1000 + iVar1);
  (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xdc));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xe0));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xe4));
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x150));
  (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x154));
  (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x158));
  (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x15c));
  (*DAT_10223008)(param_1);
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x168));
  (*DAT_10223004)();
  return;
}

