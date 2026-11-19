
void FUN_10049040(void)

{
  Panel *this;
  int *piVar1;
  ImagePanel *pIVar2;
  undefined4 *puVar3;
  Label *this_00;
  Panel *in_ECX;
  int iVar4;
  int iVar5;
  Color aCStack_88 [4];
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  Color aCStack_64 [4];
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101345b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_44 = 0x1004907f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CPhone::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_44 = 0x100490b7;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))();
  uStack_44 = 0;
  uStack_48 = 0x100490e9;
  (**(code **)*piVar1)();
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0x100490fb;
  (**(code **)(*piVar1 + 300))();
  uStack_58 = 1;
  pcStack_5c = (char *)0x10049104;
  (**(code **)(*piVar1 + 0x24))();
  pcStack_5c = "gfx/vgui/backgroundtoall.tga";
  uStack_60 = 0x1004910e;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc4) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_5c = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_60 = 0x1004914c;
    (*DAT_101b26a8)();
  }
  else {
    iStack_78 = 0x10049138;
    vgui::Color::Color(aCStack_64,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xc4) + 8))();
  iVar4 = DAT_1018f430 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
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
  uStack_7c = 0x100491db;
  iStack_78 = iVar4 - local_14 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 200))();
  uStack_7c = 1;
  pcStack_80 = (char *)0x100491e8;
  (**(code **)(**(int **)(in_ECX + 200) + 0x24))();
  pcStack_80 = "Title Font";
  uStack_84 = 0x100491fe;
  FUN_1009d3a0();
  iVar4 = DAT_1018f430 / 2;
  iVar5 = DAT_1018f434 / 2;
  pcStack_80 = "gfx/vgui/640_phone.tga";
  uStack_84 = 0x1004922f;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_80 = "Cannot load gfx/vgui/640_phone.tga!\n";
    uStack_84 = 0x10049270;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_88,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar4 + -0x83,iVar5 + -0x119);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x11,0x132,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x61,0x132,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xb1,0x132,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 6;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x11,0x158,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 4;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x61,0x158,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 5;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 8;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xb1,0x158,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 6;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 9;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x11,0x17e,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 7;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 10;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x61,0x17e,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 8;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 0xb;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xb1,0x17e,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 9;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 0xc;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x62,0x1a4,0x40,0x1a,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 10;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 0xd;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x5e,0xdc,0x4b,0x4b,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CPhoneHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 0xb;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  this_00 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0xe;
  if (this_00 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(this_00,(char *)&PTR_1013b108,0x41,0x54,0x83,0x14);
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 300))(0,0,0,0);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10049bf0();
  ExceptionList = local_10;
  return;
}

