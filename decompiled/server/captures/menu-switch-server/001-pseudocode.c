
void FUN_100908e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (iVar2 = (*DAT_10222f9c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x20c);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_10223044)(iVar2,0xdc), iVar1 = param_1,
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = CCofGameMenu::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

