
void FUN_100a89d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
  if (iVar2 == 0) {
    FUN_10017740(in_ECX);
  }
  else {
    uVar1 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + iVar2,param_1);
    FUN_10017740(uVar1);
    iVar2 = FUN_10017780();
    if (iVar2 == 0) {
      (*DAT_1022303c)(1,"env_elight \"%s\" can\'t find target %s\n",
                      *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                      *(int *)(*(int *)(in_ECX + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
      return;
    }
  }
  FUN_100a8570(param_1,param_2,param_3,param_4);
  return;
}

