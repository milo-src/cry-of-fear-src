
void FUN_10098540(int param_1)

{
  int in_ECX;
  
  (*DAT_10223000)(2,DAT_102264b4,0,0);
  (*DAT_10223008)(*(undefined4 *)(in_ECX + 0xe8));
  (*DAT_10223008)(param_1);
  if (param_1 != 0) {
    (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xdc));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xe0));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0xe4));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x150));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x154));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x158));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x15c));
  }
  (*DAT_10223004)();
  return;
}

