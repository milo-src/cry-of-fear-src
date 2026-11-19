
undefined4 FUN_10040de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1474) != 0) {
    pcVar2 = (char *)FUN_10080a60();
    pcVar3 = (char *)(*(int *)(DAT_101b2600 + 0x1474) + 0xdc);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return 1;
}

