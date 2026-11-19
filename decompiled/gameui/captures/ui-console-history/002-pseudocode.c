
void __thiscall FUN_1004a34d(void *this,char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  void *this_00;
  void *this_01;
  uint *puVar5;
  undefined1 *local_20;
  void *local_1c;
  size_t local_18;
  int local_14;
  uint *local_10;
  uint *local_c;
  int *local_8;
  
  local_1c = this;
  while (iVar1 = FUN_1004acc0((int)local_1c + 0x24c), 99 < iVar1) {
    FUN_1004ad00((void *)((int)local_1c + 0x24c),0);
  }
  _strlen(param_1);
  FUN_100aec60();
  local_20 = (undefined1 *)&local_20;
  local_10 = (uint *)&local_20;
  if (&stack0x00000000 != (undefined1 *)0x20) {
    local_20 = (undefined1 *)&local_20;
    local_10 = (uint *)&local_20;
    sVar2 = _strlen(param_1);
    _memset(local_10,0,sVar2 + 1);
    sVar2 = _strlen(param_1);
    _strncpy((char *)local_10,param_1,sVar2);
    sVar2 = _strlen((char *)local_10);
    if (*(byte *)((int)local_10 + (sVar2 - 1)) == 0x20) {
      sVar2 = _strlen((char *)local_10);
      *(byte *)((int)local_10 + (sVar2 - 1)) = 0;
    }
  }
  local_c = (uint *)0x0;
  if (param_2 != (char *)0x0) {
    sVar2 = _strlen(param_2);
    local_c = _malloc(sVar2 + 1);
    if (local_c != (uint *)0x0) {
      sVar2 = _strlen(param_2);
      _memset(local_c,0,sVar2 + 1);
      sVar2 = _strlen(param_2);
      _strncpy((char *)local_c,param_2,sVar2);
      local_18 = _strlen((char *)local_c);
      while ((local_18 = local_18 - 1, -1 < (int)local_18 &&
             (*(byte *)((int)local_c + local_18) == 0x20))) {
        *(byte *)((int)local_c + local_18) = 0;
      }
    }
  }
  local_8 = (int *)0x0;
  local_14 = FUN_1004acc0((int)local_1c + 0x24c);
LAB_1004a4d5:
  do {
    do {
      local_14 = local_14 + -1;
      if (local_14 < 0) {
        iVar1 = FUN_1004ace0((void *)((int)local_1c + 0x24c));
        local_8 = (int *)FUN_1004aca0((void *)((int)local_1c + 0x24c),iVar1);
        FUN_10049032(local_8,local_10,local_c);
        *(undefined4 *)((int)local_1c + 0x134) = 0;
        FUN_100494f8(local_1c,(uint *)((int)local_1c + 0x138));
        FUN_100add65(local_c);
        return;
      }
      local_8 = (int *)FUN_1004aca0((void *)((int)local_1c + 0x24c),local_14);
    } while (local_8 == (int *)0x0);
    puVar5 = local_10;
    pbVar3 = FUN_10048ff5(local_8);
    uVar4 = FUN_100b1620(this_00,pbVar3,(byte *)puVar5);
  } while (uVar4 != 0);
  if ((local_c != (uint *)0x0) || (iVar1 = FUN_10049014((int)local_8), iVar1 != 0))
  goto LAB_1004a529;
  goto LAB_1004a55b;
LAB_1004a529:
  if ((local_c != (uint *)0x0) && (iVar1 = FUN_10049014((int)local_8), iVar1 != 0)) {
    puVar5 = local_c;
    pbVar3 = (byte *)FUN_10049014((int)local_8);
    uVar4 = FUN_100b1620(this_01,pbVar3,(byte *)puVar5);
    if (uVar4 == 0) {
LAB_1004a55b:
      FUN_1004ad00((void *)((int)local_1c + 0x24c),local_14);
    }
  }
  goto LAB_1004a4d5;
}

