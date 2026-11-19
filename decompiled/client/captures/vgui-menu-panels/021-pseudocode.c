
void FUN_100327e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Panel *pPVar4;
  ImagePanel *this;
  Panel *in_ECX;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1013301f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CScope::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc0) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc0,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xc0) + 8))(&local_14,&local_18);
  iVar5 = DAT_1018f430 / 2;
  iVar2 = local_14 / 2;
  iVar6 = DAT_1018f434 / 2;
  iVar3 = local_18 / 2;
  pPVar4 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 0;
  if (pPVar4 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar4,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar4 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 1;
  if (pPVar4 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar4,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434);
  (**(code **)*piVar1)(DAT_1018f430 / 2 + local_14 / 2,0);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar4 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 2;
  if (pPVar4 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar4,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(local_14,DAT_1018f434 / 2 - local_18 / 2);
  (**(code **)*piVar1)(DAT_1018f430 / 2 - local_14 / 2,0);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar4 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 3;
  if (pPVar4 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar4,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(local_14,DAT_1018f434 / 2 - local_18 / 2);
  (**(code **)*piVar1)(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434 / 2 + local_18 / 2);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  this = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 4;
  if (this == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(this,*(Image **)(in_ECX + 0xc0));
  }
  *(int **)(in_ECX + 0xc4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc4))(iVar5 - iVar2,iVar6 - iVar3);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))(1);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10032bd0();
  ExceptionList = local_10;
  return;
}

