
undefined4 FUN_1005a000(void)

{
  char *_Str1;
  int iVar1;
  
  if (DAT_101cbf7c == 0) {
    DAT_104cc465 = 0;
    DAT_104cc464 = 0;
  }
  else if (((DAT_101cc084 == *(float *)(DAT_104cd528 + 0xc)) &&
           (DAT_101cc088 == *(float *)(DAT_104cd52c + 0xc))) &&
          (DAT_101cc08c == *(float *)(DAT_104cd530 + 0xc))) {
    if (*(float *)(DAT_104cd50c + 0xc) == 0.0) {
      if (DAT_101cc080 != 0) {
        return 1;
      }
    }
    else if (DAT_101cc080 == 0) {
      return 1;
    }
    _Str1 = (char *)(*DAT_101b2730)();
    iVar1 = __stricmp(_Str1,&DAT_101cbf80);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

