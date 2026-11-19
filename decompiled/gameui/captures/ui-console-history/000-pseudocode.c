
void __thiscall FUN_10049787(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  uint local_108 [64];
  char *local_8;
  
  if (*(char *)((int)this + 0x130) == '\0') {
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined1 *)((int)this + 0x130) = 1;
  }
  if ((param_1 != '\0') &&
     (*(int *)((int)this + 0x134) = *(int *)((int)this + 0x134) + -2,
     *(int *)((int)this + 0x134) < 0)) {
    iVar2 = FUN_1004ab70((int)this + 0x238);
    *(int *)((int)this + 0x134) = iVar2 + -1;
  }
  cVar1 = FUN_1004ab90((void *)((int)this + 0x238),*(int *)((int)this + 0x134));
  if (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x134) = 0;
  }
  cVar1 = FUN_1004ab90((void *)((int)this + 0x238),*(int *)((int)this + 0x134));
  if (cVar1 != '\0') {
    local_8 = (char *)FUN_1004ab50((void *)((int)this + 0x238),*(int *)((int)this + 0x134));
    if (*local_8 == '\0') {
      sVar4 = 0xfe;
      pcVar3 = FUN_1004b990((int)local_8);
      _strncpy((char *)local_108,pcVar3,sVar4);
      FUN_100ae1a0(local_108,(uint *)&DAT_100e6bf0);
    }
    else {
      sVar4 = 0xfe;
      pcVar3 = FUN_1004ba30((int)local_8);
      _strncpy((char *)local_108,pcVar3,sVar4);
      FUN_100ae1a0(local_108,(uint *)&DAT_100e6bec);
    }
    (**(code **)(**(int **)((int)this + 0x11c) + 0x218))(local_108);
    (**(code **)(**(int **)((int)this + 0x11c) + 0x264))();
    (**(code **)(**(int **)((int)this + 0x11c) + 0x24c))();
    *(int *)((int)this + 0x134) = *(int *)((int)this + 0x134) + 1;
  }
  return;
}

