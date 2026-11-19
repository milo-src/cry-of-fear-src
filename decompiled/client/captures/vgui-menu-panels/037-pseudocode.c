
void FUN_10040620(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ImagePanel *pIVar4;
  undefined4 *puVar5;
  Panel *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10133c7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CGameOver::vftable;
  FUN_1009d3a0();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffa0,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc4) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff94,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xcc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff88,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))(&local_18,&local_1c);
  iVar6 = DAT_1018f430 / 2;
  iVar2 = local_18 / 2;
  iVar7 = DAT_1018f434 / 2;
  iVar3 = local_1c / 2;
  (**(code **)(**(int **)(in_ECX + 0xc4) + 8))(&local_28,&local_2c);
  (**(code **)(**(int **)(in_ECX + 0xcc) + 8))(&local_30,&local_34);
  iVar8 = local_18 / 2;
  iVar10 = iVar8 - local_28 / 2;
  iVar9 = local_1c / 2 + local_2c;
  local_14 = local_34 + iVar9;
  local_24 = iVar8 + -0x33;
  local_20 = iVar10;
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar6 - iVar2,iVar7 - iVar3);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xc4));
  }
  *(int **)(in_ECX + 200) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  (**(code **)**(undefined4 **)(in_ECX + 200))(iVar10,iVar9);
  (**(code **)(**(int **)(in_ECX + 200) + 0x24))(1);
  pIVar4 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar4 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar4,*(Image **)(in_ECX + 0xcc));
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  (**(code **)**(undefined4 **)(in_ECX + 0xd0))(iVar8 - local_30 / 2,local_14);
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x24))(1);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 3;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,local_20,iVar9,0x120,0x24,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameOverHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 1;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x240))(puVar5);
  (**(code **)**(undefined4 **)(in_ECX + 0xd4))(local_20,iVar9);
  piVar1 = (int *)FUN_100b44cb(0x140);
  iVar2 = local_14;
  local_8 = 4;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,local_24,local_14,0x69,0x25,0,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CGameOverHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x240))(puVar5);
  (**(code **)**(undefined4 **)(in_ECX + 0xd8))(local_24,iVar2);
  *(undefined4 *)(in_ECX + 0x1dc) = 0x437f0000;
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10040dd0();
  ExceptionList = local_10;
  return;
}

