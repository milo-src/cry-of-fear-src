
void FUN_10061da0(void)

{
  if (DAT_104cdf8c != 0) {
    if (DAT_104cdf88 != 0) {
      (*DAT_101be7dc)(0x8892,DAT_104cdf88);
      (*DAT_101be750)(3,0x1406,0x1c,0);
      DAT_104cdf94 = 2;
      (*DAT_101be69c)(0x8074);
      return;
    }
    (*DAT_101be750)(3,0x1406,0x1c,DAT_104cdf8c);
    DAT_104cdf94 = 1;
    (*DAT_101be69c)(0x8074);
  }
  return;
}

