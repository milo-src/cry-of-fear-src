
void FUN_100e4360(undefined4 param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x1e9c);
  (*DAT_10223000)(1,DAT_102265e4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(param_1);
  (*DAT_10223008)(0);
  (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + param_2);
  (*DAT_10223008)(cVar1 != '\0');
  (*DAT_10223008)(*(char *)(in_ECX + 0x1ef8) != '\0');
  cVar1 = FUN_100e24a0();
  (*DAT_10223008)(cVar1 != '\0');
  (*DAT_10223004)();
  if (*(char *)(in_ECX + 0x1ef8) != '\0') {
    *(undefined1 *)(in_ECX + 0x1ef8) = 0;
  }
  return;
}

