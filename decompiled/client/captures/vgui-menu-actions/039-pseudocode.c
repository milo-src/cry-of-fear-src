
void FUN_10040e60(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  Panel *in_ECX;
  char *pcVar3;
  
  if (param_1 != false) {
    if (DAT_105593c4 == 0) {
      FUN_1007faf0("game_over.mp3");
    }
    *(undefined2 *)(in_ECX + 0x1e0) = 0;
    *(undefined4 *)(in_ECX + 0x1dc) = 0x437f0000;
    iVar1 = **(int **)(in_ECX + 200);
    if (DAT_105431dc == 0) {
      pcVar3 = "gfx/vgui/game_over_load.tga";
    }
    else {
      pcVar3 = "gfx/vgui/game_over_restart.tga";
    }
    uVar2 = FUN_10008640(pcVar3);
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(in_ECX + 0xd0);
    uVar2 = FUN_10008640("gfx/vgui/game_over_exit.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  FUN_100aaad0();
  return;
}

