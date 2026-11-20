
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d4aa99(void)

{
  int iVar1;
  int iVar2;
  char local_1004 [4072];
  undefined4 uStackY_1c;
  char *pcStackY_18;
  
  FUN_01e71670();
  pcStackY_18 = local_1004;
  uStackY_1c = 0x1d4aacc;
  FUN_01e725ae();
  FUN_01df27b5();
  if (DAT_025160d4 == 0) {
    if (DAT_02d7d0ec != 0) {
      pcStackY_18 = (char *)0x1d4ab60;
      FUN_01d4aa24();
    }
    if (((DAT_023c9de4 != 0) && (DAT_02d7d0e0 != 0)) && (DAT_02dcf280 != 0)) {
      if (_DAT_01ebc9ac != 0.0) {
        pcStackY_18 = (char *)0x1d4abad;
        _strncpy(&DAT_02079bd8,local_1004,0x100);
        DAT_02079cd7 = 0;
        *DAT_0207ace0 = (float)_DAT_027fc1e0;
      }
      FUN_01d0f9ba();
    }
  }
  else {
    iVar1 = FUN_01d466c2();
    iVar2 = FUN_01d466c2();
    if (0x577 < (uint)(iVar1 + iVar2)) {
      FUN_01ddb985();
    }
    pcStackY_18 = (char *)0x1d4ab39;
    _strncat(&DAT_026fd680,local_1004,0x577);
  }
  return;
}

