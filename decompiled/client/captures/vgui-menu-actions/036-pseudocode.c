
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040590(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  Panel *in_ECX;
  char *pcVar3;
  
  vgui::Panel::setVisible(in_ECX,param_1);
  FUN_100aaad0();
  if (param_1 != false) {
    (**(code **)(*(int *)(in_ECX + 0xcc) + 0x24))((_DAT_1018a3f8 & 0x400000) != 0);
    if ((_DAT_1018a3f8 & 0x20) == 0) {
      (**(code **)(**(int **)(in_ECX + 200) + 0x24))(0);
      pcVar3 = "gfx/vgui/640_difficultylocked.tga";
    }
    else {
      (**(code **)(**(int **)(in_ECX + 200) + 0x24))(1);
      pcVar3 = "gfx/vgui/640_difficulty.tga";
    }
    iVar1 = **(int **)(in_ECX + 0xc4);
    uVar2 = FUN_10008640(pcVar3);
    (**(code **)(iVar1 + 0x1fc))(uVar2);
  }
  return;
}

