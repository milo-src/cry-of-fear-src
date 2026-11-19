
PROC wglGetProcAddress(LPCSTR param_1)

{
  int iVar1;
  code *pcVar2;
  
                    /* 0x145f  356  wglGetProcAddress */
  iVar1 = strcmp(param_1,s_glMultiTexCoord2fARB_1000a000);
  if (iVar1 == 0) {
    DAT_1000b594 = (*DAT_1001b770)(param_1);
    pcVar2 = FUN_10001000;
  }
  else {
    iVar1 = strcmp(param_1,s_glBindTextureEXT_1000a018);
    if (iVar1 == 0) {
      DAT_1000b554 = (*DAT_1001b770)(param_1);
      pcVar2 = FUN_1000102a;
    }
    else {
      iVar1 = strcmp(param_1,s_glActiveTextureARB_1000a02c);
      if (iVar1 == 0) {
        DAT_1001b774 = (*DAT_1001b770)(param_1);
        pcVar2 = FUN_10001019;
      }
      else {
        pcVar2 = (code *)(*DAT_1001b770)(param_1);
      }
    }
  }
  return pcVar2;
}

