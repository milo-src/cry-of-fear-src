
uint FUN_1008a280(char *param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar1);
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  if (0 < (int)(pcVar3 + (-1 - (int)(param_2 + 1)))) {
    do {
      pcVar6 = (char *)0x0;
      uVar2 = _tolower((int)param_2[iVar5]);
      in_EAX = _tolower((int)*param_1);
      if (in_EAX == uVar2) {
        do {
          if (pcVar6 == pcVar4 + (-1 - (int)(param_1 + 1))) {
            return CONCAT31((int3)((uint)(pcVar4 + (-1 - (int)(param_1 + 1))) >> 8),1);
          }
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
          uVar2 = _tolower((int)param_2[iVar5]);
          in_EAX = _tolower((int)param_1[(int)pcVar6]);
        } while (in_EAX == uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(pcVar3 + (-1 - (int)(param_2 + 1))));
  }
  return in_EAX & 0xffffff00;
}

