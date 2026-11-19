
void FUN_100a5af0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(in_ECX + 4);
    if (0xff < *(int *)(iVar2 + 0x248)) {
      *(undefined4 *)(iVar2 + 0x248) = 0xff;
      iVar2 = *(int *)(in_ECX + 4);
    }
    if (*(int *)(iVar2 + 0x248) < 0) {
      *(undefined4 *)(iVar2 + 0x248) = 0;
    }
    iVar2 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar1 = FUN_10119680(iVar2);
        if (iVar1 != 0) {
          (*DAT_10223000)(1,DAT_102265dc,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
          (*DAT_10223008)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248));
          (*DAT_10223004)();
          *(undefined4 *)(iVar1 + 0x1ef0) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)(DAT_10223188 + 0x90));
    }
  }
  return;
}

