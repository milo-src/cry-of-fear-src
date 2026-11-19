
int FUN_1008a9e0(void)

{
  int iVar1;
  
  (*DAT_101b2680)(&DAT_10545128);
  DAT_10545628 = 0;
  FUN_100d3770(&DAT_10545128,&DAT_10545228,0x500);
  FUN_100d3770(&DAT_10545728,&DAT_1054572c,0x14);
  FUN_100d3770(&DAT_10545740,&DAT_10545744,0x14);
  DAT_10545528 = 0;
  if (DAT_10545128 == ' ') {
    DAT_10545128 = 2;
    iVar1 = FUN_1008a9e0();
    return iVar1 + 1;
  }
  return 1;
}

