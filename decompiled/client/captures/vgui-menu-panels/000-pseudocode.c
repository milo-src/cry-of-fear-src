
void FUN_1001d5e0(void)

{
  Panel *this;
  int *piVar1;
  int iVar2;
  ImagePanel *pIVar3;
  Label *pLVar4;
  undefined4 *puVar5;
  Panel *in_ECX;
  int iVar6;
  Color aCStack_84 [4];
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  Color aCStack_60 [4];
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10131bd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_40 = 0x1001d61f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CAmmoInventory::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_40 = 0x1001d657;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))();
  uStack_40 = 0;
  uStack_44 = 0x1001d689;
  (**(code **)*piVar1)();
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0x1001d69b;
  (**(code **)(*piVar1 + 300))();
  uStack_54 = 1;
  pcStack_58 = (char *)0x1001d6a4;
  (**(code **)(*piVar1 + 0x24))();
  pcStack_58 = "gfx/vgui/backgroundtoall.tga";
  uStack_5c = 0x1001d6ae;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_58 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_5c = 0x1001d6ec;
    (*DAT_101b26a8)();
  }
  else {
    iStack_74 = 0x1001d6d8;
    vgui::Color::Color(aCStack_60,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))();
  iVar6 = DAT_1018f430 / 2;
  iVar2 = local_14 / 2;
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 1;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_78 = 0x1001d77b;
  iStack_74 = iVar6 - iVar2;
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))();
  uStack_78 = 1;
  pcStack_7c = (char *)0x1001d788;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))();
  pcStack_7c = "gfx/vgui/ammo/ammo_inventory.tga";
  uStack_80 = 0x1001d792;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x144) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_7c = "Cannot load gfx/vgui/ammo/ammo_inventory.tga!\n";
    uStack_80 = 0x1001d7d0;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_84,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0x144) + 8))(&local_14,&local_18);
  iVar6 = DAT_1018f430 / 2;
  iVar2 = DAT_1018f434 / 2;
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x144));
  }
  *(int **)(in_ECX + 0x148) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x148))(iVar6 - local_14 / 2,iVar2 - local_18 / 2);
  (**(code **)(**(int **)(in_ECX + 0x148) + 0x24))(1);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 3;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0x1f,0x2d);
  }
  *(int **)(in_ECX + 0x108) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x1fc))(0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 4;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0x85,0x2d);
  }
  *(int **)(in_ECX + 0x10c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x1fc))(0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 5;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0xeb,0x2d);
  }
  *(int **)(in_ECX + 0x110) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x1fc))(0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 6;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0x1f,0xa7);
  }
  *(int **)(in_ECX + 0x114) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x1fc))(0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 7;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0x85,0xa7);
  }
  *(int **)(in_ECX + 0x118) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x1fc))(0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 8;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0xeb,0xa7);
  }
  *(int **)(in_ECX + 0x11c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x11c) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x11c) + 0x1fc))(0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 9;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0x24,0x32,99,99);
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xd0) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x120))(0xff,0xff,0xff,0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 10;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0x8a,0x32,99,99);
  }
  *(int **)(in_ECX + 0xd4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xd4) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x120))(0xff,0xff,0xff,0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0xb;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0xf0,0x32,99,99);
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xd8) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x120))(0xff,0xff,0xff,0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0xc;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0x24,0xac,99,99);
  }
  *(int **)(in_ECX + 0xdc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xdc) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x120))(0xff,0xff,0xff,0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0xd;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0x8a,0xac,99,99);
  }
  *(int **)(in_ECX + 0xe0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xe0) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x120))(0xff,0xff,0xff,0);
  pLVar4 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 0xe;
  if (pLVar4 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(pLVar4,(char *)&PTR_1013b108,0xf0,0xac,99,99);
  }
  *(int **)(in_ECX + 0xe4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0xe4) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x120))(0xff,0xff,0xff,0);
  iVar2 = FUN_100b44cb(0xd4);
  local_8 = 0xf;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00(0,0x1f,0x121);
  }
  *(int **)(in_ECX + 0x120) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x1fc))(0);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x10;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x24,0x32,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x128) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 1;
  }
  (**(code **)(**(int **)(in_ECX + 0x128) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x11;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x8a,0x32,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 300) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 300) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x12;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0xf0,0x32,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x130) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0x130) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x13;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x24,0xac,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x134) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0x134) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x14;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0x8a,0xac,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x138) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0x138) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x15;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,0xf0,0xac,99,99,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x13c) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0x13c) + 0x240))(puVar5);
  piVar1 = (int *)FUN_100b44cb(0x140);
  local_8 = 0x16;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_10097020(&PTR_1013b108,7,0x19f,0x168,0x32,0,0);
    *piVar1 = (int)ColorButton::vftable;
    piVar1[0x4c] = 0;
    piVar1[0x4d] = 0;
    piVar1[0x4e] = 0;
    piVar1[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x140) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CAmmoInventoryHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 7;
  }
  (**(code **)(**(int **)(in_ECX + 0x140) + 0x240))(puVar5);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0);
  FUN_1001e570();
  ExceptionList = local_10;
  return;
}

