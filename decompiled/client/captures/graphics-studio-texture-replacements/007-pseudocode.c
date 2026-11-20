
void FUN_100642b0(void)

{
  char *pcVar1;
  int in_ECX;
  char *pcVar2;
  char cVar3;
  
  if (DAT_104d26cc == 0) {
    DAT_104d26cc = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26d0 == '\0') {
    cVar3 = '\0';
    DAT_104d26d0 = '\0';
    pcVar1 = &DAT_1018a2dc;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if ((char *)0x2 < pcVar2 + -0x1018a2dc) {
      in_ECX = FUN_10069630(&DAT_1018a2dc,0,DAT_104d26cc);
      cVar3 = DAT_104d26d0;
    }
    DAT_104d26d0 = cVar3;
    if (in_ECX != 0) {
      DAT_104d26d0 = '\x01';
    }
  }
  return;
}

