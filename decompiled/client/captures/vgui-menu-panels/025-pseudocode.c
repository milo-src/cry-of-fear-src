
void FUN_10033cc0(void)

{
  int iVar1;
  int *piVar2;
  ImagePanel *pIVar3;
  Label *this;
  undefined4 *puVar4;
  Color *pCVar5;
  undefined4 uVar6;
  Panel *in_ECX;
  Panel *pPVar7;
  int iVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101334db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CUnlockables::vftable;
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1d8) = piVar2;
  if (piVar2 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffb8,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0x1d8) + 8))();
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 0;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x1d8));
  }
  *(int **)(in_ECX + 0x1dc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x1dc))();
  (**(code **)(**(int **)(in_ECX + 0x1dc) + 0x24))();
  FUN_1009d3a0();
  FUN_1009d350();
  this = (Label *)FUN_100b44cb();
  local_8 = 1;
  if (this == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::Label::Label(this,(char *)&PTR_1013b108,0x7e,0x1ac,0x225,0x2f);
  }
  *(int **)(in_ECX + 0x120) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 300))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x120))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x208))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_9c = 0xc0;
    uStack_a0 = 0x1f7;
    FUN_10097020(&PTR_1013b108,0x130);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x124) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x32;
  }
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x240))();
  pPVar7 = in_ECX + 0x128;
  local_14 = 0x15;
  do {
    uStack_9c = 0x10033f8f;
    piVar2 = (int *)FUN_10008640();
    *(int **)pPVar7 = piVar2;
    if (piVar2 == (int *)0x0) {
      uStack_9c = 0x10033fcc;
      (*DAT_101b26a8)();
    }
    else {
      vgui::Color::Color((Color *)&uStack_a0,0xff,0xff,0xff,1);
      (**(code **)(*piVar2 + 0xc))();
    }
    pPVar7 = pPVar7 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  uStack_9c = 0x10033fe4;
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 3;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_9c = 0x10034002;
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x128));
  }
  *(int **)(in_ECX + 0x180) = piVar2;
  local_8 = 0xffffffff;
  uStack_9c = 0x10034020;
  (**(code **)(*piVar2 + 0x40))();
  uStack_9c = 0x8b;
  uStack_a0 = 0x55;
  (**(code **)**(undefined4 **)(in_ECX + 0x180))();
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 4;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x55,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  pPVar7 = in_ECX + 200;
  *(int **)pPVar7 = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(**(int **)pPVar7 + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 5;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 300));
  }
  *(int **)(in_ECX + 0x184) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x184))(0xaf,0x8b);
  (**(code **)(**(int **)(in_ECX + 0x184) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 6;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0xaf,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xcc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xcc) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 7;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x130));
  }
  *(int **)(in_ECX + 0x188) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x188))(0x109,0x8b);
  (**(code **)(**(int **)(in_ECX + 0x188) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 8;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x109,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 9;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x134));
  }
  *(int **)(in_ECX + 0x18c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x18c))(0x163,0x8b);
  (**(code **)(**(int **)(in_ECX + 0x18c) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x163,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0xb;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x138));
  }
  *(int **)(in_ECX + 400) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 400))(0x1bd,0x8b);
  (**(code **)(**(int **)(in_ECX + 400) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xc;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x1bd,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xd8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0xd;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x13c));
  }
  *(int **)(in_ECX + 0x194) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x194))(0x217,0x8b);
  (**(code **)(**(int **)(in_ECX + 0x194) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0xe;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x217,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xdc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0xf;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x140));
  }
  *(int **)(in_ECX + 0x198) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x198))(0x271,0x8b);
  (**(code **)(**(int **)(in_ECX + 0x198) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x271,0x8b,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xe0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 7;
  }
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x11;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x144));
  }
  *(int **)(in_ECX + 0x19c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x19c))(0x55,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x19c) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x12;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x55,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xe4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 8;
  }
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x13;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x148));
  }
  *(int **)(in_ECX + 0x1a0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1a0))(0xaf,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x14;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0xaf,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xe8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 9;
  }
  (**(code **)(**(int **)(in_ECX + 0xe8) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x15;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x14c));
  }
  *(int **)(in_ECX + 0x1a4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1a4))(0x109,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1a4) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x16;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x109,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xec) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 10;
  }
  (**(code **)(**(int **)(in_ECX + 0xec) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x17;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x150));
  }
  *(int **)(in_ECX + 0x1a8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1a8))(0x163,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x18;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x163,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xf0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xb;
  }
  (**(code **)(**(int **)(in_ECX + 0xf0) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x19;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x154));
  }
  *(int **)(in_ECX + 0x1ac) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1ac))(0x1bd,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1ac) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x1a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x1bd,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xf4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xc;
  }
  (**(code **)(**(int **)(in_ECX + 0xf4) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x1b;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x158));
  }
  *(int **)(in_ECX + 0x1b0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1b0))(0x217,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1b0) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x1c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x217,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xf8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xd;
  }
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x1d;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x15c));
  }
  *(int **)(in_ECX + 0x1b4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1b4))(0x271,0xe5);
  (**(code **)(**(int **)(in_ECX + 0x1b4) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x1e;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x271,0xe5,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0xfc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xe;
  }
  (**(code **)(**(int **)(in_ECX + 0xfc) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x1f;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x160));
  }
  *(int **)(in_ECX + 0x1b8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1b8))(0x55,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1b8) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x20;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x55,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x100) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xf;
  }
  (**(code **)(**(int **)(in_ECX + 0x100) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x21;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x164));
  }
  *(int **)(in_ECX + 0x1bc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1bc))(0xaf,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x22;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0xaf,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x104) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x10;
  }
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x23;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x168));
  }
  *(int **)(in_ECX + 0x1c0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1c0))(0x109,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1c0) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x24;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x109,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x108) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x11;
  }
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x25;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x16c));
  }
  *(int **)(in_ECX + 0x1c4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1c4))(0x163,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1c4) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x26;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x163,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x10c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x12;
  }
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x27;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x170));
  }
  *(int **)(in_ECX + 0x1c8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1c8))(0x1bd,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1c8) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x28;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x1bd,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x110) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x13;
  }
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x29;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x174));
  }
  *(int **)(in_ECX + 0x1cc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1cc))(0x217,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1cc) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x2a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x217,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x114) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x14;
  }
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x240))(puVar4);
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0x2b;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x178));
  }
  *(int **)(in_ECX + 0x1d0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  (**(code **)**(undefined4 **)(in_ECX + 0x1d0))(0x271,0x13f);
  (**(code **)(**(int **)(in_ECX + 0x1d0) + 0x24))(1);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x2c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x271,0x13f,0x5a,0x5a,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x118) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x1dc));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUnlockablesHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x15;
  }
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x240))(puVar4);
  iVar8 = 0x15;
  do {
    iVar1 = *(int *)pPVar7;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 0x2d;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x13c) = uVar6;
    iVar1 = *(int *)pPVar7;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 0x2e;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0,0,0xc0);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x138) = uVar6;
    iVar1 = *(int *)pPVar7;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 0x2f;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x134) = uVar6;
    iVar1 = *(int *)pPVar7;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 0x30;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    pPVar7 = pPVar7 + 4;
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x130) = uVar6;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0);
  FUN_10035ad0();
  ExceptionList = local_10;
  return;
}

