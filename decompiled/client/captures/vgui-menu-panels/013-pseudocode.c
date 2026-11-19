
void FUN_1002c390(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ImagePanel *pIVar4;
  undefined4 *puVar5;
  int *piVar6;
  Slider *this;
  Label *this_00;
  Color *pCVar7;
  Panel *in_ECX;
  Panel *pPVar8;
  int iVar9;
  int local_30;
  int local_2c;
  Label *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132b1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CGameMenu::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc6e0) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffac,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc6f0) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar2 = FUN_10008640();
  *(int *)(in_ECX + 0xc6f8) = iVar2;
  if (iVar2 != 0) {
    piVar1 = *(int **)(in_ECX + 0xc6f0);
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc700) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc708) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc710) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc718) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc720) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc728) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc730) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 51000) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc6e8) = piVar1;
  if (piVar1 != (int *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,0);
    (**(code **)(*piVar1 + 0xc))();
  }
  FUN_1009d3a0();
  uVar3 = FUN_1009d350();
  *(undefined4 *)(in_ECX + 0xc690) = uVar3;
  local_28 = (Label *)FUN_100b44cb();
  local_8 = 0;
  if (local_28 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(local_28,(char *)&PTR_1013b108,5,5,0x100,0x20);
  }
  *(int **)(in_ECX + 0xbc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x208))();
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xbc) + 300))(0,0,0);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x24))(1);
  piVar1 = *(int **)(in_ECX + 0xbc);
  iVar2 = *piVar1;
  uVar3 = FUN_1002dfa0();
  (**(code **)(iVar2 + 0x200))(piVar1,uVar3);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x21c))(3);
  (**(code **)(**(int **)(in_ECX + 0xc6f0) + 8))(&local_18,&local_14);
  (**(code **)(**(int **)(in_ECX + 0xc6e8) + 8))(&local_30,&local_2c);
  iVar2 = DAT_1018f434 - local_14;
  local_1c = (int *)(DAT_1018f430 / 2 - local_18 / 2);
  (**(code **)(**(int **)(in_ECX + 0xc6e0) + 8))(&local_20,&local_24);
  iVar9 = DAT_1018f430 / 2;
  local_28 = (Label *)(DAT_1018f434 / 2 + local_24 * -3);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc6e0));
  }
  *(int **)(in_ECX + 0xc6e4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc6e4))(iVar9 - local_20 / 2,local_28);
  (**(code **)(**(int **)(in_ECX + 0xc6e4) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc6e8));
  }
  *(int **)(in_ECX + 0xc6ec) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc6ec))
            ((DAT_1018f430 - local_30) + -0xf,(DAT_1018f434 - local_2c) + -0xf);
  (**(code **)(**(int **)(in_ECX + 0xc6ec) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 3;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc6f0));
  }
  *(int **)(in_ECX + 0xc6f4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc6f4))(local_1c,iVar2 + local_14 * -10);
  (**(code **)(**(int **)(in_ECX + 0xc6f4) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 4;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc6f8));
  }
  *(int **)(in_ECX + 0xc6fc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc6fc))(local_1c,iVar2 + local_14 * -9);
  (**(code **)(**(int **)(in_ECX + 0xc6fc) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 5;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc700));
  }
  *(int **)(in_ECX + 0xc704) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc704))(local_1c,iVar2 + local_14 * -8);
  (**(code **)(**(int **)(in_ECX + 0xc704) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 6;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc708));
  }
  *(int **)(in_ECX + 0xc70c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc70c))(local_1c,iVar2 + local_14 * -7);
  (**(code **)(**(int **)(in_ECX + 0xc70c) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 7;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc710));
  }
  *(int **)(in_ECX + 0xc714) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc714))(local_1c,iVar2 + local_14 * -2);
  (**(code **)(**(int **)(in_ECX + 0xc714) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 8;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc718));
  }
  *(int **)(in_ECX + 0xc71c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc71c))(local_1c,iVar2 + local_14 * -5);
  (**(code **)(**(int **)(in_ECX + 0xc71c) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 9;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc720));
  }
  *(int **)(in_ECX + 0xc724) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc724))(local_1c,iVar2 + local_14 * -4);
  (**(code **)(**(int **)(in_ECX + 0xc724) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 10;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc728));
  }
  *(int **)(in_ECX + 0xc72c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc72c))(local_1c,iVar2 + local_14 * -3);
  (**(code **)(**(int **)(in_ECX + 0xc72c) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0xb;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc730));
  }
  *(int **)(in_ECX + 0xc734) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc734))(local_1c,iVar2 + local_14 * -6);
  (**(code **)(**(int **)(in_ECX + 0xc734) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0xc;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 51000));
  }
  *(int **)(in_ECX + 0xc73c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  piVar1 = local_1c;
  (**(code **)**(undefined4 **)(in_ECX + 0xc73c))(local_1c,iVar2 - local_14);
  (**(code **)(**(int **)(in_ECX + 0xc73c) + 0x24))(1);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0xd;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -10,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6b4) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 1;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6b4) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0xe;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -9,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6b8) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6b8) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0xf;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -8,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6bc) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6bc) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x10;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -7,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6c0) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6c0) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x11;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -2,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6c4) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6c4) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x12;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -5,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6c8) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6c8) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x13;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -4,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6cc) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 7;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6cc) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x14;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -3,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6d0) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 8;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6d0) + 0x240))(puVar5);
  local_1c = (int *)FUN_100b44cb(0x140);
  local_8 = 0x15;
  if (local_1c == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 + local_14 * -6,local_18,local_14,0,1);
    *local_1c = (int)ColorButton::vftable;
    local_1c[0x4c] = 0;
    local_1c[0x4d] = 0;
    local_1c[0x4e] = 0;
    local_1c[0x4f] = 0;
    piVar6 = local_1c;
  }
  *(int **)(in_ECX + 0xc6d4) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 9;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6d4) + 0x240))(puVar5);
  piVar6 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x16;
  local_28 = (Label *)piVar6;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,piVar1,iVar2 - local_14,local_18,local_14,0,1);
    *piVar6 = (int)ColorButton::vftable;
    piVar6[0x4c] = 0;
    piVar6[0x4d] = 0;
    piVar6[0x4e] = 0;
    piVar6[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xc6d8) = piVar6;
  local_8 = 0xffffffff;
  (**(code **)(*piVar6 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 10;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6d8) + 0x240))(puVar5);
  local_28 = (Label *)DAT_1018f430;
  iVar2 = FUN_100b44cb(0xd0);
  local_8 = 0x17;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096d30(DAT_1018f430 / 2 + -0x15e,DAT_1018f434 / 2 + -0x106,700,0x20d);
  }
  *(int **)(in_ECX + 0xc6b0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x1fc))(0,0);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x21c))();
  this = (Slider *)FUN_100b44cb(0xfc);
  local_8 = 0x18;
  if (this == (Slider *)0x0) {
    this = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(this,0,699,700,-0x369,true);
    *(undefined ***)this = CCampaignSlider::vftable;
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x224))(this);
  local_1c = (int *)0x0;
  pPVar8 = in_ECX + 0xc284;
  do {
    piVar1 = (int *)FUN_100b44cb(0x140);
    local_8 = 0x19;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_10097020(&DAT_1014387c,0x19,(int)local_1c << 5,0x28a,0x20,0,1);
      *piVar1 = (int)ColorButton::vftable;
      piVar1[0x4c] = 0;
      piVar1[0x4d] = 0;
      piVar1[0x4e] = 0;
      piVar1[0x4f] = 0;
    }
    *(int **)pPVar8 = piVar1;
    iVar2 = *piVar1;
    local_8 = 0xffffffff;
    uVar3 = (**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x204))();
    (**(code **)(iVar2 + 0x40))(uVar3);
    puVar5 = (undefined4 *)FUN_100b44cb(0xc);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = CGameMenuHandler_Command::vftable;
      puVar5[1] = in_ECX;
      puVar5[2] = (int)local_1c + 0x32;
    }
    (**(code **)(**(int **)pPVar8 + 0x240))(puVar5);
    (**(code **)(**(int **)pPVar8 + 0x24))(0);
    (**(code **)(**(int **)pPVar8 + 0x264))(&DAT_1014387c);
    (**(code **)(**(int **)pPVar8 + 0x21c))(4);
    pPVar8 = pPVar8 + 4;
    local_1c = (int *)((int)local_1c + 1);
  } while ((int)local_1c < 0x100);
  this_00 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0x1a;
  if (this_00 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(this_00," ",0,0,DAT_1018f430,0x40);
  }
  *(int **)(in_ECX + 0xc68c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0xc68c) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x200))(*(int **)(in_ECX + 0xc68c),&DAT_10141994);
  (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x208))(*(undefined4 *)(in_ECX + 0xc690));
  (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x21c))(5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x1b;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020("Cancel",0,DAT_1018f434 / 2 + 0x106,local_28,0x20,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xc6dc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameMenuHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 0xb;
  }
  (**(code **)(**(int **)(in_ECX + 0xc6dc) + 0x240))(puVar5);
  (**(code **)(**(int **)(in_ECX + 0xc6dc) + 0x24))(0);
  (**(code **)(**(int **)(in_ECX + 0xc6dc) + 0x21c))(4);
  iVar2 = *(int *)(in_ECX + 0xc6dc);
  pCVar7 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0x1c;
  if (pCVar7 == (Color *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color(pCVar7,0xff,0xff,0xff,0);
  }
  *(undefined4 *)(iVar2 + 0x134) = uVar3;
  iVar2 = *(int *)(in_ECX + 0xc6dc);
  local_8 = 0xffffffff;
  pCVar7 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0x1d;
  if (pCVar7 == (Color *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color(pCVar7,0xff,0,0,0);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x130) = uVar3;
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x20c))(0,0);
  (**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x220))();
  FUN_1002dfb0();
  ExceptionList = local_10;
  return;
}

