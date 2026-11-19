
void FUN_10045710(void)

{
  Panel *this;
  int *piVar1;
  ImagePanel *pIVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  Label *this_00;
  Panel *in_ECX;
  int iVar5;
  int iVar6;
  Color aCStack_70 [4];
  undefined4 uStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  int iStack_60;
  Color aCStack_4c [4];
  undefined4 uStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134267;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_40 = 0x1004574f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CKeypad::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_40 = 0x10045787;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  *(int **)(in_ECX + 0xbc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_40 = 0;
  pcStack_44 = (char *)0x100457b6;
  (**(code **)(**(int **)(in_ECX + 0xbc) + 300))();
  pcStack_44 = "gfx/vgui/backgroundtoall.tga";
  uStack_48 = 0x100457c0;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc0) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_44 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_48 = 0x100457fe;
    (*DAT_101b26a8)();
  }
  else {
    iStack_60 = 0x100457ea;
    vgui::Color::Color(aCStack_4c,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xc0) + 8))();
  iVar5 = DAT_1018f430 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xc0));
  }
  *(int **)(in_ECX + 0xc4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_64 = 0x1004588d;
  iStack_60 = iVar5 - local_14 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0xc4))();
  uStack_64 = 1;
  pcStack_68 = (char *)0x1004589a;
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))();
  pcStack_68 = "gfx/vgui/640_panelback.tga";
  uStack_6c = 0x100458a4;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x104) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_68 = "Cannot load gfx/vgui/640_panelback.tga!\n";
    uStack_6c = 0x100458e2;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_70,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x10c) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff84,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x114) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff78,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x11c) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff6c,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  uVar3 = FUN_1009d3a0("credits");
  uVar3 = FUN_1009d350(uVar3);
  *(undefined4 *)(in_ECX + 0xd8) = uVar3;
  iVar6 = DAT_1018f430 / 2;
  iVar5 = DAT_1018f434 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x104));
  }
  *(int **)(in_ECX + 0x108) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x108))(iVar6 + -0x140,iVar5 + -0xf0);
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 3;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x10c));
  }
  *(int **)(in_ECX + 0x110) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  (**(code **)**(undefined4 **)(in_ECX + 0x110))(0,0);
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x24))(0);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,3,3,0x14,0x14,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 5;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x114));
  }
  *(int **)(in_ECX + 0x118) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  (**(code **)**(undefined4 **)(in_ECX + 0x118))(0x208,0);
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x24))(1);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 6;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0x11c));
  }
  *(int **)(in_ECX + 0x120) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  (**(code **)**(undefined4 **)(in_ECX + 0x120))(0x208,0);
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x24))(0);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xaa,0x5a,100,100,1,1);
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 8;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x10e,0x5a,100,100,1,1);
  }
  *(int **)(in_ECX + 0xe4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 9;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x172,0x5a,100,100,1,1);
  }
  *(int **)(in_ECX + 0xe8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0xe8) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 10;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xaa,0xbe,100,100,1,1);
  }
  *(int **)(in_ECX + 0xec) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0xec) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 0xb;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x10e,0xbe,100,100,1,1);
  }
  *(int **)(in_ECX + 0xf0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0xf0) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 0xc;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x172,0xbe,100,100,1,1);
  }
  *(int **)(in_ECX + 0xf4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 7;
  }
  (**(code **)(**(int **)(in_ECX + 0xf4) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 0xd;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xaa,0x122,100,100,1,1);
  }
  *(int **)(in_ECX + 0xf8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 8;
  }
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 0xe;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x10e,0x122,100,100,1,1);
  }
  *(int **)(in_ECX + 0xfc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 9;
  }
  (**(code **)(**(int **)(in_ECX + 0xfc) + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 0xf;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x172,0x122,100,100,1,1);
  }
  *(int **)(in_ECX + 0x100) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CKeypadHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 10;
  }
  (**(code **)(**(int **)(in_ECX + 0x100) + 0x240))(puVar4);
  this_00 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0x10;
  if (this_00 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(this_00,(char *)&PTR_1013b108,0xf7,0x27,0x95,0x20);
  }
  *(int **)(in_ECX + 0xdc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x108));
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x208))(*(undefined4 *)(in_ECX + 0xd8));
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x120))(0,0,0,1);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x200))(*(int **)(in_ECX + 0xdc),&DAT_101483a8);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x21c))(4);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10046570();
  ExceptionList = local_10;
  return;
}

