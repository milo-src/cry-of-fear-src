
char * FUN_1010d34b(char *param_1)

{
  char cVar1;
  char *_Dst;
  errno_t eVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_100f7bff(pcVar3 + (1 - (int)(param_1 + 1)));
    if (_Dst != (char *)0x0) {
      eVar2 = _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)(param_1 + 1))),param_1);
      if (eVar2 == 0) {
        return _Dst;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (char *)0x0;
}

