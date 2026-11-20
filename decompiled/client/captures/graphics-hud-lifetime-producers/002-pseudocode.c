
void IN_DeactivateMouse(void)

{
                    /* 0x7c1d0  589  IN_DeactivateMouse */
  if (DAT_10543588 != 0) {
    if (DAT_10543640 != 0) {
      SystemParametersInfoA(4,0,&DAT_10543644,0);
    }
    DAT_10543650 = 0;
  }
  return;
}

