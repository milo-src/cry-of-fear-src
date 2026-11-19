
void FUN_1002be60(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Panel *in_ECX;
  
  cVar2 = (**(code **)(**(int **)(in_ECX + 0xf4) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x110] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xc0);
      uVar3 = FUN_10008640("gfx/vgui/menu/donate.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x110] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x110] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xc0);
    uVar3 = FUN_10008640("gfx/vgui/menu/donate_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x110] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x111] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 200);
      uVar3 = FUN_10008640("gfx/vgui/menu/soundtrack1.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x111] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x111] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 200);
    uVar3 = FUN_10008640("gfx/vgui/menu/soundtrack1_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x111] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0xfc) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x112] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xd0);
      uVar3 = FUN_10008640("gfx/vgui/menu/soundtrack2.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x112] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x112] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xd0);
    uVar3 = FUN_10008640("gfx/vgui/menu/soundtrack2_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x112] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x100) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x113] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xd8);
      uVar3 = FUN_10008640("gfx/vgui/menu/clothes.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x113] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x113] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xd8);
    uVar3 = FUN_10008640("gfx/vgui/menu/clothes_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x113] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x104) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x114] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xe0);
      uVar3 = FUN_10008640("gfx/vgui/menu/aomdc.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x114] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x114] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xe0);
    uVar3 = FUN_10008640("gfx/vgui/menu/aomdc_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x114] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x108) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x115] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xe8);
      uVar3 = FUN_10008640("gfx/vgui/menu/facebook.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x115] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x115] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xe8);
    uVar3 = FUN_10008640("gfx/vgui/menu/facebook_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x115] = (Panel)0x1;
  }
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0x248))();
  if (cVar2 == '\0') {
    if (in_ECX[0x116] != (Panel)0x0) {
      iVar1 = **(int **)(in_ECX + 0xf0);
      uVar3 = FUN_10008640("gfx/vgui/menu/cancel.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar3);
      in_ECX[0x116] = (Panel)0x0;
    }
  }
  else if (in_ECX[0x116] == (Panel)0x0) {
    iVar1 = **(int **)(in_ECX + 0xf0);
    uVar3 = FUN_10008640("gfx/vgui/menu/cancel_mo.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar3);
    (*DAT_101b2660)("ui/3d_rollover.wav",0x3f800000);
    in_ECX[0x116] = (Panel)0x1;
    vgui::Panel::solve(in_ECX);
    return;
  }
  vgui::Panel::solve(in_ECX);
  return;
}

