
void FUN_100712a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  size_t _Count;
  char local_188 [256];
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_4,param_3);
  uVar2 = FUN_100808b0();
  _Count = 0x100;
  pcVar3 = (char *)FUN_10080a60();
  _strncpy(local_188,pcVar3,_Count);
  iVar4 = FUN_100d3cf0(local_188,"DEADNOTIFY");
  if (iVar4 != 0) {
    iVar4 = FUN_1006cb10("+jump");
    if (iVar4 == 0) {
      builtin_strncpy(local_88,"Press jump to respawn (lose weapons) or wait to be revived",0x3b);
    }
    else {
      uVar5 = FUN_1006cb10("+jump");
      FUN_1000c900(local_88,"Press %s to respawn (lose weapons) or wait to be revived",uVar5);
    }
    _strncpy(local_188,local_88,0x100);
  }
  if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x142c) != 0)) {
    pcVar3 = local_188;
    pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf18) = 0x437f0000;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1c) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1d) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf20) = 0;
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xbc) = uVar2;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

