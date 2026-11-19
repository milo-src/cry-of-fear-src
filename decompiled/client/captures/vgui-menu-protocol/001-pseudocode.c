
undefined4 FUN_100aa170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *_Source;
  int iVar3;
  int in_ECX;
  size_t _Count;
  undefined4 uVar4;
  
  FUN_10080850(param_3,param_2);
  iVar2 = FUN_100808b0();
  DAT_105593c4 = FUN_100808b0();
  if (iVar2 == 4) {
    _Count = 0x40;
    _Source = (char *)FUN_10080a60();
    _strncpy((char *)(in_ECX + 0x1354),_Source,_Count);
    *(undefined1 *)(in_ECX + 0x1393) = 0;
    FUN_100aa7f0(4);
    return 1;
  }
  if (iVar2 == 0xa6) {
    if ((*(int **)(in_ECX + 0x144c) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x144c) + 0x28))(), cVar1 == '\0'))
    goto LAB_100aa1fb;
    uVar4 = 0;
    iVar3 = **(int **)(in_ECX + 0x144c);
  }
  else {
    if (iVar2 != 0xbc) {
      if (iVar2 == 200) {
        FUN_100a9120();
        return 1;
      }
      if (iVar2 == 0xde) {
        cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x1404) + 0x28))();
        if (cVar1 == '\0') {
          return 1;
        }
        FUN_100a9120();
        (*DAT_101b2660)("inventory/inventory_close.wav",0x3f800000);
        return 1;
      }
      goto LAB_100aa1fb;
    }
    if ((*(int **)(in_ECX + 0x1490) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x1490) + 0x28))(), cVar1 != '\0'))
    goto LAB_100aa1fb;
    FUN_100a9120();
    uVar4 = 1;
    iVar3 = **(int **)(in_ECX + 0x1490);
  }
  (**(code **)(iVar3 + 0x24))(uVar4);
  FUN_100aaad0();
LAB_100aa1fb:
  FUN_100aa7f0(iVar2);
  return 1;
}

