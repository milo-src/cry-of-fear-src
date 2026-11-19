
void FUN_1007a780(int *param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  int iVar3;
  
  _Str = (char *)(*DAT_101b26a4)(1);
  if (*_Str == '\0') {
    iVar3 = -1;
  }
  else {
    iVar3 = _atoi(_Str);
  }
  iVar1 = *param_1;
  if ((iVar3 != iVar1) && (iVar2 = param_1[1], iVar3 != iVar2)) {
    if (iVar1 == 0) {
      *param_1 = iVar3;
    }
    else {
      if (iVar2 != 0) {
        (*DAT_101b26ac)("Three keys down for a button \'%c\' \'%c\' \'%c\'!\n",iVar1,iVar2,_Str);
        return;
      }
      param_1[1] = iVar3;
    }
    if ((param_1[2] & 1U) == 0) {
      param_1[2] = param_1[2] | 3;
      return;
    }
  }
  return;
}

