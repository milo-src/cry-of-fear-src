
void FUN_1003f3a0(bool param_1)

{
  int iVar1;
  Panel *in_ECX;
  float10 fVar2;
  
  if (param_1 == false) {
    (**(code **)(**(int **)(in_ECX + 0xd4) + 0x1fc))("Enter a username...",0x13);
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x1fc))("Enter a password...",0x13);
    iVar1 = *(int *)(in_ECX + 0xc0);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(in_ECX + 0xd4) + 0x24))(1);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0xd4) + 0x24))(0);
    }
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x24))(iVar1 == 0);
    (*DAT_101b2654)("stopcomputer");
    vgui::Panel::setVisible(in_ECX,false);
    return;
  }
  fVar2 = (float10)(*DAT_101b26e0)();
  *(float *)(in_ECX + 0xbc) = (float)fVar2;
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x1fc))("Enter a username...",0x13);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x1fc))("Enter a password...",0x13);
  if (*(int *)(in_ECX + 0xc0) != 0) {
    (**(code **)(**(int **)(in_ECX + 0xd4) + 0x24))(0);
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x24))(0);
    vgui::Panel::setVisible(in_ECX,param_1);
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x24))(1);
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

