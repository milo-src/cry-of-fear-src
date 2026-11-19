
Panel * FUN_1002b1f0(void)

{
  int *piVar1;
  ImagePanel *pIVar2;
  undefined4 *puVar3;
  Panel *in_ECX;
  int local_24;
  int local_20;
  Panel *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101328e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  vgui::Panel::Panel(in_ECX,DAT_1018f430 / 2 + -400,DAT_1018f434 / 2 + -300,800,600);
  *(undefined ***)in_ECX = CVGUIExtraMenu::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffffbc,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc4) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffffb0,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xcc) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffffa4,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xd4) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffff98,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xdc) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffff8c,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xe4) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffff80,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xec) = piVar1;
  vgui::Color::Color((Color *)&stack0xffffff74,0xff,0xff,0xff,0);
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))(&local_14,&local_18);
  (**(code **)(**(int **)(in_ECX + 0xec) + 8))(&local_24,&local_20);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(400 - local_14 / 2,0);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xc4));
  }
  *(int **)(in_ECX + 200) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 200))(400 - local_14 / 2,local_18);
  (**(code **)(**(int **)(in_ECX + 200) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xcc));
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xd0))(400 - local_14 / 2,local_18 * 2);
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 3;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xd4));
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xd8))(400 - local_14 / 2,local_18 * 3);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 4;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xdc));
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe0))(400 - local_14 / 2,local_18 << 2);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 5;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xe4));
  }
  *(int **)(in_ECX + 0xe8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe8))(400 - local_14 / 2,local_18 * 5);
  (**(code **)(**(int **)(in_ECX + 0xe8) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 6;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xec));
  }
  *(int **)(in_ECX + 0xf0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xf0))(400 - local_24 / 2,600 - local_20);
  (**(code **)(**(int **)(in_ECX + 0xf0) + 0x24))(1);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 7;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,0,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xf4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xf4) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 8;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,local_18,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xf8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 9;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,local_18 * 2,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
    in_ECX = local_1c;
  }
  *(int **)(in_ECX + 0xfc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(in_ECX);
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0xfc) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 10;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,local_18 * 3,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
    in_ECX = local_1c;
  }
  *(int **)(in_ECX + 0x100) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(in_ECX);
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0x100) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xb;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,local_18 * 4,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
    in_ECX = local_1c;
  }
  *(int **)(in_ECX + 0x104) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(in_ECX);
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xc;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_14 / 2,local_18 * 5,local_14,local_18,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
    in_ECX = local_1c;
  }
  *(int **)(in_ECX + 0x108) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(in_ECX);
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 7;
  }
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x240))(puVar3);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xd;
  local_1c = (Panel *)piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,400 - local_24 / 2,600 - local_20,local_24,local_20,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x10c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(in_ECX);
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CVGUIExtraMenuHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 1;
  }
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x240))(puVar3);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1002be10();
  ExceptionList = local_10;
  return in_ECX;
}

