
void FUN_1007f9e0(void)

{
  int iVar1;
  
  FUN_1007fa40();
  iVar1 = FUN_100b44cb(0xe0);
  if (iVar1 == 0) {
    DAT_105440a4 = (undefined1 *)0x0;
  }
  else {
    DAT_105440a4 = (undefined1 *)FUN_1007f6e0(iVar1);
    if (DAT_105440a4 != (undefined1 *)0x0) {
      *DAT_105440a4 = 0;
      DAT_105440a8 = irrklang::createIrrKlangDevice(0,0x3d,(char *)0x0,"1.6.0");
      return;
    }
  }
  return;
}

