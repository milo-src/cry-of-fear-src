
void FUN_10064a40(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (DAT_104d26dc == 0) {
    DAT_104d26dc = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26d3 == '\0') {
    DAT_104d26d3 = '\0';
    pcVar3 = &DAT_1018a0dc;
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (pcVar2 + -0x1018a0dc < (char *)0x3) {
      pcVar3 = "police/police_sleeve.tga";
    }
    else {
      pcVar3 = &DAT_1018a0dc;
    }
    iVar1 = FUN_10069630(pcVar3,0,DAT_104d26dc);
    if (iVar1 != 0) {
      DAT_104d26d3 = '\x01';
    }
  }
  return;
}

