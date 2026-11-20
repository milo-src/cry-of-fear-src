
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dde46f(void)

{
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  DAT_027fc11c = DAT_0251f324;
  for (local_8 = 0; local_8 < DAT_0251f328; local_8 = local_8 + 1) {
    if (DAT_027fc11c[0x12e7] != 0) {
      if ((DAT_027fc11c[0x1330] != 0) && ((float)DAT_027fc11c[0x1331] <= (float)_DAT_027fc1e0)) {
        DAT_027fc11c[0x1330] = 0;
        DAT_027fc11c[0x1331] = (int)(float)((float10)_DAT_027fc1e0 + (float10)1.0);
        FUN_01ddeafb(DAT_027fc11c);
        FUN_01ddccec(DAT_027fc11c,&DAT_025734c4);
      }
      if ((DAT_027fc11c[0x952] == 0) &&
         (((*DAT_027fc11c != 0 || (DAT_027fc11c[3] != 0)) && (DAT_024988a8 != 0)))) {
        FUN_01dd80af(DAT_027fc11c + 0x1f);
      }
    }
    DAT_027fc11c = DAT_027fc11c + 0x1406;
  }
  if (DAT_024988a8 != 0) {
    if (DAT_024988ac == 0) {
      DAT_024988ac = DAT_024988a8;
    }
    else {
      for (local_14 = DAT_024988ac; *(int *)(local_14 + 0x18) != 0;
          local_14 = *(int *)(local_14 + 0x18)) {
      }
      *(int *)(local_14 + 0x18) = DAT_024988a8;
    }
    DAT_024988a8 = 0;
  }
  if ((DAT_02572514 & 2) != 0) {
    FUN_01d4abd8(s_sv_datagram_overflowed__01ecbad0);
    FUN_01d483c6(&DAT_02572510);
  }
  if ((DAT_02574890 & 2) != 0) {
    FUN_01d4abd8(s_sv_spectator_overflowed__01ecbaec);
    FUN_01d483c6(&DAT_0257488c);
  }
  local_10 = DAT_0251f324;
  for (local_c = 0; local_c < DAT_0251f328; local_c = local_c + 1) {
    if ((local_10[0x952] == 0) && (*local_10 != 0)) {
      if (local_10[0x23] + DAT_025734d4 < local_10[0x22]) {
        FUN_01d48557(local_10 + 0x1f,DAT_025734cc,DAT_025734d4);
      }
      else {
        FUN_01d90aad(1,local_10 + 8,&DAT_025734c4);
      }
      if (local_10[0x974] + DAT_02572520 < local_10[0x973]) {
        FUN_01d48557(local_10 + 0x970,DAT_02572518,DAT_02572520);
      }
      else {
        FUN_01d4abd8(s_Warning__Ignoring_unreliable_dat_01ecbb08,local_10 + 0x1342);
      }
      if ((local_10[0x953] != 0) && (local_10[0x974] + DAT_0257489c < local_10[0x973])) {
        FUN_01d48557(local_10 + 0x970,DAT_02574894,DAT_0257489c);
      }
    }
    local_10 = local_10 + 0x1406;
  }
  FUN_01d483c6(&DAT_025734c4);
  FUN_01d483c6(&DAT_02572510);
  FUN_01d483c6(&DAT_0257488c);
  return;
}

