
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035b60(bool param_1)

{
  Panel *in_ECX;
  
  if (param_1 != false) {
    (**(code **)(**(int **)(in_ECX + 0x180) + 0x24))((_DAT_1018a3f8 & 0x1f) == 0);
    (**(code **)(**(int **)(in_ECX + 0x184) + 0x24))((_DAT_1018a3f8 & 0x20) == 0);
    (**(code **)(**(int **)(in_ECX + 0x188) + 0x24))((_DAT_1018a3f8 & 0x400000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x18c) + 0x24))((_DAT_1018a3f8 & 0x80000000) == 0);
    (**(code **)(**(int **)(in_ECX + 400) + 0x24))((_DAT_1018a3f8 & 0x1000000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x194) + 0x24))((_DAT_1018a3f8 & 0x800000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x198) + 0x24))((_DAT_1018a3f8 & 0x40) == 0);
    (**(code **)(**(int **)(in_ECX + 0x19c) + 0x24))((_DAT_1018a3f8 & 0x80000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x24))((_DAT_1018a3f8 & 0x100000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1a4) + 0x24))((_DAT_1018a3f8 & 0x200000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x24))((_DAT_1018a3f8 & 0x80) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1ac) + 0x24))((_DAT_1018a3f8 & 0x100) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1b0) + 0x24))((_DAT_1018a3f8 & 0x200) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1b4) + 0x24))((_DAT_1018a3f8 & 0x400) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1b8) + 0x24))((_DAT_1018a3f8 & 0x800) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x24))((_DAT_1018a3f8 & 0x1000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1c0) + 0x24))((_DAT_1018a3f8 & 0x2000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1c4) + 0x24))((_DAT_1018a3f8 & 0x4000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1c8) + 0x24))((_DAT_1018a3f8 & 0x8000) == 0);
    (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x24))((_DAT_1018a3f8 & 0x10000) == 0);
    if ((_DAT_1018a3f8 & 0x20000) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x24))(0);
      vgui::Panel::setVisible(in_ECX,param_1);
      return;
    }
    (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x24))(1);
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

