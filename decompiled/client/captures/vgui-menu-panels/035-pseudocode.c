
void FUN_1003f850(void)

{
  uint3 uVar1;
  int *piVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  Panel *in_ECX;
  undefined4 *puVar4;
  Panel *pPVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_28 [4];
  ImagePanel *local_24;
  int local_1c;
  int local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10133bfb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)(in_ECX + 0xbc) = vgui::ICheckButton2Handler::vftable;
  *(undefined ***)in_ECX = CDifficulty::vftable;
  *(undefined ***)(in_ECX + 0xbc) = CDifficulty::vftable;
  FUN_10002340();
  local_8 = 0;
  FUN_1009d3a0();
  local_14 = (float)(DAT_1018f430 / 2 + -0x140);
  iVar6 = DAT_1018f434 / 2 + -0xf0;
  local_18 = iVar6;
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc0) = piVar2;
  if (piVar2 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffbc,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  pPVar5 = in_ECX + 0xcc;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8._0_1_ = 1;
  if (local_24 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(local_24,*(Image **)(in_ECX + 0xc0));
  }
  *(int **)(in_ECX + 0xc4) = piVar2;
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc4))(local_14,iVar6);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))(1);
  (**(code **)(*(int *)pPVar5 + 0x40))();
  FUN_10003ba0("gfx/vgui/checked.tga","gfx/vgui/unchecked.tga");
  FUN_10003be0(pPVar5,"Enable developer commentary");
  FUN_10003b20(1);
  fVar7 = (float10)(*DAT_101b2644)("dev_commentary");
  local_14 = (float)fVar7;
  uVar1 = CONCAT21(extraout_var,(local_14 == 0.0) << 6 | NAN(local_14) << 2 | 2U | local_14 < 0.0);
  if (local_14 == 0.0) {
    iVar6 = (uint)uVar1 << 8;
  }
  else {
    iVar6 = CONCAT31(uVar1,1);
  }
  FUN_10003b40(iVar6);
  FUN_10003b60(in_ECX + 0xbc);
  (**(code **)(*(int *)pPVar5 + 0xc))(&local_1c,local_28);
  (*(code *)**(undefined4 **)pPVar5)(DAT_1018f430 / 2 - local_1c / 2,local_18 + 0x1ea);
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8._0_1_ = 2;
  local_24 = (ImagePanel *)piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x78,0x5a,400,0x4b,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xc4));
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  if (local_24 == (ImagePanel *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined ***)local_24 = CDifficultyHandler_Command::vftable;
    *(Panel **)((int)local_24 + 4) = in_ECX;
    *(undefined4 *)((int)local_24 + 8) = 1;
    puVar4 = (undefined4 *)local_24;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 3;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4f] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 4;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0xff,0xff,0xff,0xc0);
  }
  local_8._0_1_ = 0;
  piVar2[0x4e] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 5;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4d] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 6;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4c] = iVar6;
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8._0_1_ = 7;
  local_24 = (ImagePanel *)piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x78,0xa5,400,0x4b,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xc4));
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  if (local_24 == (ImagePanel *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined ***)local_24 = CDifficultyHandler_Command::vftable;
    *(Panel **)((int)local_24 + 4) = in_ECX;
    *(undefined4 *)((int)local_24 + 8) = 2;
    puVar4 = (undefined4 *)local_24;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 8;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4f] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 9;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0xff,0xff,0xff,0xc0);
  }
  local_8._0_1_ = 0;
  piVar2[0x4e] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 10;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4d] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0xb;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4c] = iVar6;
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8._0_1_ = 0xc;
  local_24 = (ImagePanel *)piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x78,0xf0,400,0x4b,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xc4));
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  if (local_24 == (ImagePanel *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined ***)local_24 = CDifficultyHandler_Command::vftable;
    *(Panel **)((int)local_24 + 4) = in_ECX;
    *(undefined4 *)((int)local_24 + 8) = 3;
    puVar4 = (undefined4 *)local_24;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0xd;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4f] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0xe;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0xff,0xff,0xff,0xc0);
  }
  local_8._0_1_ = 0;
  piVar2[0x4e] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0xf;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4d] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x10;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4c] = iVar6;
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8._0_1_ = 0x11;
  local_24 = (ImagePanel *)piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x78,0x13b,400,0x4b,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 200) = piVar2;
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xc4));
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  if (local_24 == (ImagePanel *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined ***)local_24 = CDifficultyHandler_Command::vftable;
    *(Panel **)((int)local_24 + 4) = in_ECX;
    *(undefined4 *)((int)local_24 + 8) = 4;
    puVar4 = (undefined4 *)local_24;
  }
  (**(code **)(**(int **)(in_ECX + 200) + 0x240))(puVar4);
  iVar6 = *(int *)(in_ECX + 200);
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x12;
  if (local_24 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  *(undefined4 *)(iVar6 + 0x13c) = uVar3;
  iVar6 = *(int *)(in_ECX + 200);
  local_8._0_1_ = 0;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x13;
  if (local_24 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color((Color *)local_24,0xff,0xff,0xff,0xc0);
  }
  *(undefined4 *)(iVar6 + 0x138) = uVar3;
  iVar6 = *(int *)(in_ECX + 200);
  local_8._0_1_ = 0;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x14;
  if (local_24 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  *(undefined4 *)(iVar6 + 0x134) = uVar3;
  iVar6 = *(int *)(in_ECX + 200);
  local_8._0_1_ = 0;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x15;
  if (local_24 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  *(undefined4 *)(iVar6 + 0x130) = uVar3;
  piVar2 = (int *)FUN_100b44cb(0x140);
  local_8._0_1_ = 0x16;
  local_24 = (ImagePanel *)piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x5f,0x199,0x1c2,0x2f,0,0);
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  local_8._0_1_ = 0;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xc4));
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  if (local_24 == (ImagePanel *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined ***)local_24 = CDifficultyHandler_Command::vftable;
    *(Panel **)((int)local_24 + 4) = in_ECX;
    *(undefined4 *)((int)local_24 + 8) = 5;
    puVar4 = (undefined4 *)local_24;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x17;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4f] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x18;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0xff,0xff,0xff,0xc0);
  }
  local_8._0_1_ = 0;
  piVar2[0x4e] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x19;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8._0_1_ = 0;
  piVar2[0x4d] = iVar6;
  local_24 = (ImagePanel *)FUN_100b44cb(0xc);
  local_8._0_1_ = 0x1a;
  if (local_24 == (ImagePanel *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = vgui::Color::Color((Color *)local_24,0,0,0,0xff);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  piVar2[0x4c] = iVar6;
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_100404b0();
  ExceptionList = local_10;
  return;
}

