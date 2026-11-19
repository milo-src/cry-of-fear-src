
void FUN_1002be30(bool param_1)

{
  Panel *in_ECX;
  
  if (param_1 != false) {
    *(undefined4 *)(in_ECX + 0x110) = 0;
    *(undefined2 *)(in_ECX + 0x114) = 0;
    in_ECX[0x116] = (Panel)0x0;
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

