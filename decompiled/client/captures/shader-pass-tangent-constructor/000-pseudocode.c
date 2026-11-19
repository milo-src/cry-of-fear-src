
void FUN_10061e10(void)

{
  if (DAT_104cdf88 != 0) {
    FUN_1007d4d0("Clearing VBO...");
    (*DAT_101be7e8)(1,&DAT_104cdf88);
    FUN_1007d4d0(&DAT_1014cd80);
    DAT_104cdf88 = 0;
  }
  if (DAT_104cdf8c != 0) {
    FUN_1007d4d0("Deleting vertex array\n");
    thunk_FUN_100f7be4(DAT_104cdf8c);
    DAT_104cdf8c = 0;
  }
  if (DAT_104cdf90 != 0) {
    FUN_1007d4d0("Deleting faces extra data\n");
    thunk_FUN_100f7be4(DAT_104cdf90);
    DAT_104cdf90 = 0;
  }
  return;
}

