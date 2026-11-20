
undefined4 FUN_10053bf0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  
  uVar2 = (**(code **)(in_ECX + 0xb0))(0x1f03);
  iVar3 = FUN_100d3cf0(uVar2,param_1);
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = _isspace((int)pcVar5[iVar3 - (int)(param_1 + 1)]);
    if ((iVar4 != 0) || (pcVar5[iVar3 - (int)(param_1 + 1)] == '\0')) break;
    iVar3 = FUN_100d3cf0(pcVar5 + (iVar3 - (int)(param_1 + 1)),param_1);
  }
  return 1;
}

