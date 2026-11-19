
void FUN_1003e360(void)

{
  int *piVar1;
  ImagePanel *pIVar2;
  int iVar3;
  undefined4 uVar4;
  Panel *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1013395b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CBossBar::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1cc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffd0,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1d0) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc4,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x1cc));
  }
  *(int **)(in_ECX + 0x1d4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x18))();
  uVar4 = (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x1c))();
  iVar3 = DAT_1018f430 / 2 - iVar3 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0x1d4))(iVar3,uVar4);
  (**(code **)(**(int **)(in_ECX + 0x1d4) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x1d0));
  }
  *(int **)(in_ECX + 0x1d8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x1d8))(iVar3,uVar4);
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x1cc));
  }
  *(int **)(in_ECX + 0x1dc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x1dc))(iVar3,uVar4);
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x24))(1);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  *(undefined4 *)(in_ECX + 0x1c8) = 0;
  FUN_1003e5f0();
  ExceptionList = local_10;
  return;
}

