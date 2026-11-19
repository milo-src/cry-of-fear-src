
void FUN_1003e7f0(void)

{
  undefined4 uVar1;
  int iVar2;
  Panel *in_ECX;
  int iVar3;
  
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x1c))();
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x18))();
  if (*(int *)(in_ECX + 0xbc) == 2) {
    (**(code **)(*(int *)in_ECX + 0x24))(0);
  }
  iVar3 = (int)(((float)*(int *)(in_ECX + 0x1c0) / (float)*(int *)(in_ECX + 0x1c4)) * (float)iVar2);
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 8))(iVar2,uVar1);
  vgui::Panel::solve(in_ECX);
  return;
}

