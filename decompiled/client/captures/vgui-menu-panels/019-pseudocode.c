
void FUN_100309e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ImagePanel *this;
  undefined4 *puVar4;
  Label *pLVar5;
  Panel *pPVar6;
  Panel *in_ECX;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132e95;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CSaveLoad::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x17c) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc8,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0x17c) + 8))(&local_14,&local_18);
  iVar8 = DAT_1018f430 / 2;
  iVar2 = local_14 / 2;
  iVar7 = DAT_1018f434 / 2;
  iVar3 = local_18 / 2;
  this = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (this == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(this,*(Image **)(in_ECX + 0x17c));
  }
  *(int **)(in_ECX + 0x180) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x180))(iVar8 - iVar2,iVar7 - iVar3);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x24))(1);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 1;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x104,0x18e,0x77,0x2b,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  pLVar5 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 2;
  if (pLVar5 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar5,(char *)&PTR_1013b108,0x5d,0x9a,0x1c7,0x1d);
  }
  *(int **)(in_ECX + 0xbc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  (**(code **)(**(int **)(in_ECX + 0xbc) + 300))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x120))(0xff,0xff,0xff,1);
  pLVar5 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 3;
  if (pLVar5 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar5,(char *)&PTR_1013b108,0x5d,0xbe,0x1c7,0x1d);
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  (**(code **)(**(int **)(in_ECX + 0xc0) + 300))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x120))(0xff,0xff,0xff,1);
  pLVar5 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 4;
  if (pLVar5 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar5,(char *)&PTR_1013b108,0x5d,0xe2,0x1c7,0x1d);
  }
  *(int **)(in_ECX + 0xc4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  (**(code **)(**(int **)(in_ECX + 0xc4) + 300))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x120))(0xff,0xff,0xff,1);
  pLVar5 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 5;
  if (pLVar5 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar5,(char *)&PTR_1013b108,0x5d,0x106,0x1c7,0x1d);
  }
  *(int **)(in_ECX + 200) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  (**(code **)(**(int **)(in_ECX + 200) + 300))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 200) + 0x120))(0xff,0xff,0xff,1);
  pLVar5 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 6;
  if (pLVar5 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar5,(char *)&PTR_1013b108,0x5d,0x128,0x1c7,0x1d);
  }
  *(int **)(in_ECX + 0xcc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  (**(code **)(**(int **)(in_ECX + 0xcc) + 300))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 0xcc) + 0x120))(0xff,0xff,0xff,1);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 7;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5d,0x9a,0x1c7,0x1d,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x240))(puVar4);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 8;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5d,0xbe,0x1c7,0x1d,1,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x240))(puVar4);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 9;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5d,0xe2,0x1c7,0x1d,1,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x240))(puVar4);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 10;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5d,0x106,0x1c7,0x1d,1,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xdc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x240))(puVar4);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xb;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5d,0x128,0x1c7,0x1d,1,1);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x180));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CSaveLoadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x240))(puVar4);
  pPVar6 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 0xc;
  if (pPVar6 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar6,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar6 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 0xd;
  if (pPVar6 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar6,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434);
  (**(code **)*piVar1)(DAT_1018f430 / 2 + local_14 / 2,0);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar6 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 0xe;
  if (pPVar6 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar6,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(local_14,DAT_1018f434 / 2 - local_18 / 2);
  (**(code **)*piVar1)(DAT_1018f430 / 2 - local_14 / 2,0);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  pPVar6 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 0xf;
  if (pPVar6 == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Panel::Panel(pPVar6,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))(local_14,DAT_1018f434 / 2 - local_18 / 2);
  (**(code **)*piVar1)(DAT_1018f430 / 2 - local_14 / 2,DAT_1018f434 / 2 + local_18 / 2);
  (**(code **)(*piVar1 + 300))(0,0,0,0);
  (**(code **)(*piVar1 + 0x24))(1);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10031c00();
  ExceptionList = local_10;
  return;
}

