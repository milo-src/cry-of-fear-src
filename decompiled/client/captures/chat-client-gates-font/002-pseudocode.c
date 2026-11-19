
int FUN_1009d3a0(char *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  char *_Str2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x904)) {
    _Str2 = (char *)(in_ECX + 4);
    do {
      iVar1 = __stricmp(param_1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      _Str2 = _Str2 + 0x24;
    } while (iVar2 < *(int *)(in_ECX + 0x904));
  }
  iVar2 = FUN_1009cdf0(param_1);
  return iVar2;
}

