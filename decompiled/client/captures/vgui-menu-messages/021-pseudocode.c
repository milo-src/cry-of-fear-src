
void FUN_1004b460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x144c) != 0) {
    uVar2 = FUN_10080a60();
    FUN_1000c900(local_88,&DAT_10146b04,uVar2);
    uVar2 = FUN_10080a10();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x144c) + 0xbc) = uVar2;
    pcVar3 = local_88;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar3 - (int)(local_88 + 1))) {
      iVar4 = FUN_10008640(local_88);
      if (iVar4 != 0) {
        iVar4 = **(int **)(*(int *)(DAT_101b2600 + 0x144c) + 0xc4);
        uVar2 = FUN_10008640(local_88);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        (**(code **)(**(int **)(DAT_101b2600 + 0x144c) + 0x24))(1);
        FUN_100aaad0();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      (*DAT_101b26a8)("Cannot load %s!\n",local_88);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_101b26a8)("No message sent\n");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

