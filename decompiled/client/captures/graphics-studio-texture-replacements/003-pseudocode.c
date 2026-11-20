
void FUN_10064870(void)

{
  int iVar1;
  
  if (DAT_104d26c0 == 0) {
    DAT_104d26c0 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26c4 == '\0') {
    DAT_104d26c4 = '\0';
    iVar1 = FUN_10069630("models/page_locked.tga",0,DAT_104d26c0);
    if (iVar1 != 0) {
      DAT_104d26c4 = '\x01';
    }
  }
  return;
}

