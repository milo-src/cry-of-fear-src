
void FUN_1003e870(void)

{
  Panel *this;
  int *piVar1;
  ImagePanel *pIVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  TextEntry *pTVar5;
  TextPanel *this_00;
  Panel *in_ECX;
  int iVar6;
  int iVar7;
  Color aCStack_94 [4];
  undefined4 uStack_90;
  char *pcStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  Color aCStack_70 [4];
  undefined4 uStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10133a27;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_50 = 0x1003e8af;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CComputer::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_50 = 0x1003e8e7;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))();
  uStack_50 = 0;
  uStack_54 = 0x1003e919;
  (**(code **)*piVar1)();
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0x1003e92b;
  (**(code **)(*piVar1 + 300))();
  uStack_64 = 1;
  pcStack_68 = (char *)0x1003e934;
  (**(code **)(*piVar1 + 0x24))();
  pcStack_68 = "gfx/vgui/backgroundtoall.tga";
  uStack_6c = 0x1003e93e;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xcc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_68 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_6c = 0x1003e97c;
    (*DAT_101b26a8)();
  }
  else {
    iStack_84 = 0x1003e968;
    vgui::Color::Color(aCStack_70,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xcc) + 8))();
  iVar6 = DAT_1018f430 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xcc));
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_88 = 0x1003ea0b;
  iStack_84 = iVar6 - local_24 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0xd0))();
  uStack_88 = 1;
  pcStack_8c = (char *)0x1003ea18;
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x24))();
  pcStack_8c = "gfx/vgui/puzzle/computer/computer_logon.tga";
  uStack_90 = 0x1003ea22;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xdc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_8c = "Cannot load gfx/vgui/puzzle/computer/computer_logon.tga!\n";
    uStack_90 = 0x1003ea60;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_94,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar7 = DAT_1018f430 / 2;
  iVar6 = DAT_1018f434 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xdc));
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe0))(iVar7 + -0x115,iVar6 + -0xf0);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x24))(1);
  iVar6 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar6 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x9d,0x140,0x4b,0x17,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CComputerHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar6 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar6 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xee,0x140,0x4b,0x17,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CComputerHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar6 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar6 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x1de,0x1bf,0x1d,0x1d,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CComputerHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  uVar4 = FUN_1009d3a0("Title Font");
  pTVar5 = (TextEntry *)FUN_100b44cb(0xf4);
  local_8 = 6;
  if (pTVar5 == (TextEntry *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::TextEntry::TextEntry(pTVar5,(char *)&PTR_1013b108,0xa0,0xcc,0xef,0x10);
  }
  *(int **)(in_ECX + 0xd4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  FUN_1009d2f0(uVar4,&local_20,&local_1c,&local_18,&local_14);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x120))(local_20,local_1c,local_18,local_14);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x124))(3);
  FUN_1009d1d0(uVar4,&local_20,&local_1c,&local_18,&local_14);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 300))(local_20,local_1c,local_18,local_14);
  pTVar5 = (TextEntry *)FUN_100b44cb(0xf4);
  local_8 = 7;
  if (pTVar5 == (TextEntry *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::TextEntry::TextEntry(pTVar5,(char *)&PTR_1013b108,0xa0,0xe7,0xef,0x10);
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  FUN_1009d2f0(uVar4,&local_20,&local_1c,&local_18,&local_14);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x120))(local_20,local_1c,local_18,local_14);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x124))(3);
  FUN_1009d1d0(uVar4,&local_20,&local_1c,&local_18,&local_14);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 300))(local_20,local_1c,local_18,local_14);
  this_00 = (TextPanel *)FUN_100b44cb(0xc0);
  local_8 = 8;
  if (this_00 == (TextPanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::TextPanel::TextPanel(this_00,(char *)&PTR_1013b108,0xc2,0xa2,0xd3,0x98);
  }
  *(int **)(in_ECX + 0xe4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xe0));
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x24))(0);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1003eff0();
  ExceptionList = local_10;
  return;
}

