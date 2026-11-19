
int FUN_1005a0e0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x3c + iVar2);
    if (bVar1 == 0xff) {
      return -1;
    }
    if (bVar1 == param_2) break;
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}

