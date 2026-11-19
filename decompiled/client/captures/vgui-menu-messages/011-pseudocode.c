
void FUN_1003e0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1430) != 0) {
    uVar2 = FUN_10080a60();
    FUN_1000c900(local_88,&DAT_10146b04,uVar2);
    pcVar4 = local_88;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar4 - (int)(local_88 + 1)) < 2) {
      (*DAT_101b26a8)("No message sent\n");
    }
    else {
      iVar3 = FUN_10008640(local_88);
      if (iVar3 == 0) {
        (*DAT_101b26a8)("Cannot load %s!\n",local_88);
      }
      else {
        iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1430) + 0xc4);
        uVar2 = FUN_10008640(local_88);
        (**(code **)(iVar3 + 0x1fc))(uVar2);
      }
    }
    cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x1430) + 0x28))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_101b2600 + 0x1430) + 0x24))(1);
      FUN_100aaad0();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

