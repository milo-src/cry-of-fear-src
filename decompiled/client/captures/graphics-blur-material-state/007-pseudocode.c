
char * FUN_10086520(char *param_1)

{
  char *_Str2;
  int iVar1;
  int in_ECX;
  
  _Str2 = *(char **)(in_ECX + 0xc);
  while( true ) {
    if (_Str2 == (char *)0x0) {
      return (char *)0x0;
    }
    iVar1 = __stricmp(param_1,_Str2);
    if (iVar1 == 0) break;
    _Str2 = *(char **)(_Str2 + 0x28);
  }
  return _Str2;
}

