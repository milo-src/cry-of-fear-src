
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d4abd8(undefined4 param_1)

{
  CHAR local_1004 [4076];
  undefined4 uStackY_18;
  CHAR *pCStackY_14;
  undefined4 uStackY_10;
  undefined4 uStackY_c;
  
  FUN_01e71670();
  if ((_DAT_01ebc9ac != 0.0) && ((_DAT_027fc7f4 == 0.0 || (DAT_02dcf280 != 5)))) {
    uStackY_c = param_1;
    uStackY_10 = 0x1000;
    pCStackY_14 = local_1004;
    uStackY_18 = 0x1d4ac3d;
    FUN_01e725ae();
    uStackY_c = 0x1d4ac57;
    OutputDebugStringA(local_1004);
    uStackY_c = 0x1d4ac63;
    FUN_01d0fa2b();
  }
  return;
}

