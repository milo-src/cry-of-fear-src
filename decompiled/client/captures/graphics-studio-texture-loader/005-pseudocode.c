
undefined4 FUN_1006fbb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  char *_Dest;
  size_t _Count;
  
  FUN_10080850(param_4,param_3);
  _Dest = (char *)(param_1 + 0x21c);
  _Count = 0x100;
  pcVar2 = (char *)FUN_10080a60();
  _strncpy(_Dest,pcVar2,_Count);
  DAT_10542bb1 = '\x01';
  pcVar2 = _Dest;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (param_1 + 0x21d)) < 3) {
    DAT_10542bb1 = cVar1;
    *_Dest = '\0';
  }
  DAT_104d26d0 = 0;
  return 1;
}

