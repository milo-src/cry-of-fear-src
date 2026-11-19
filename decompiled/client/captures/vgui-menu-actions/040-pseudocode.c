
void FUN_10040f10(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Panel *in_ECX;
  float fVar5;
  char *pcVar6;
  Color aCStack_14 [12];
  
  fVar5 = *(float *)(in_ECX + 0x1dc);
  if (0.0 < fVar5) {
    fVar5 = (float)((double)fVar5 - DAT_1018d1b8 * 500.0);
    *(float *)(in_ECX + 0x1dc) = fVar5;
  }
  if (fVar5 < 0.0) {
    *(undefined4 *)(in_ECX + 0x1dc) = 0;
    fVar5 = 0.0;
  }
  piVar1 = *(int **)(in_ECX + 0xbc);
  vgui::Color::Color(aCStack_14,0xff,0xff,0xff,(int)fVar5);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = *(int **)(in_ECX + 0xc4);
  vgui::Color::Color((Color *)&stack0xffffffe0,0xff,0xff,0xff,(int)*(float *)(in_ECX + 0x1dc));
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = *(int **)(in_ECX + 0xcc);
  vgui::Color::Color((Color *)&stack0xffffffd4,0xff,0xff,0xff,(int)*(float *)(in_ECX + 0x1dc));
  (**(code **)(*piVar1 + 0xc))();
  iVar3 = (*DAT_101b26d4)();
  if (iVar3 != 0) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xd4) + 0x248))();
    if (cVar2 == '\0') {
      if (in_ECX[0x1e0] != (Panel)0x0) {
        iVar3 = **(int **)(in_ECX + 200);
        if (DAT_105431dc == 0) {
          pcVar6 = "gfx/vgui/game_over_load.tga";
        }
        else {
          pcVar6 = "gfx/vgui/game_over_restart.tga";
        }
        uVar4 = FUN_10008640(pcVar6);
        (**(code **)(iVar3 + 0x1fc))(uVar4);
        in_ECX[0x1e0] = (Panel)0x0;
      }
    }
    else if (in_ECX[0x1e0] == (Panel)0x0) {
      iVar3 = **(int **)(in_ECX + 200);
      if (DAT_105431dc == 0) {
        pcVar6 = "gfx/vgui/game_over_load2.tga";
      }
      else {
        pcVar6 = "gfx/vgui/game_over_restart2.tga";
      }
      uVar4 = FUN_10008640(pcVar6);
      (**(code **)(iVar3 + 0x1fc))(uVar4);
      (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
      in_ECX[0x1e0] = (Panel)0x1;
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x248))();
    if (cVar2 == '\0') {
      if (in_ECX[0x1e1] != (Panel)0x0) {
        iVar3 = **(int **)(in_ECX + 0xd0);
        uVar4 = FUN_10008640("gfx/vgui/game_over_exit.tga");
        (**(code **)(iVar3 + 0x1fc))(uVar4);
        in_ECX[0x1e1] = (Panel)0x0;
      }
    }
    else if (in_ECX[0x1e1] == (Panel)0x0) {
      iVar3 = **(int **)(in_ECX + 0xd0);
      uVar4 = FUN_10008640("gfx/vgui/game_over_exit2.tga");
      (**(code **)(iVar3 + 0x1fc))(uVar4);
      (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
      in_ECX[0x1e1] = (Panel)0x1;
      vgui::Panel::solve(in_ECX);
      return;
    }
    vgui::Panel::solve(in_ECX);
    return;
  }
  return;
}

