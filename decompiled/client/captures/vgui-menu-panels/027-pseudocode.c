
Panel * FUN_100362b0(void)

{
  undefined4 *puVar1;
  ImagePanel *pIVar2;
  Image *pIVar3;
  int *piVar4;
  undefined4 uVar5;
  ImagePanel *pIVar6;
  int iVar7;
  int iVar8;
  Label *pLVar9;
  Panel *in_ECX;
  int iVar10;
  Panel *pPVar11;
  Color aCStack_178 [8];
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  Color aCStack_a0 [4];
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 local_34 [4];
  ImagePanel *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  ImagePanel *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1013377b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (ImagePanel *)in_ECX;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CHUDControl::vftable;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar2,(undefined4)local_1c);
  local_8 = 0;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pIVar3 = (Image *)FUN_10008640();
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 1000) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 1000))();
  (**(code **)(**(int **)(in_ECX + 1000) + 0x24))();
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar2,(undefined4)local_1c);
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pIVar3 = (Image *)FUN_10008640();
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 0xe7c) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe7c))();
  (**(code **)(**(int **)(in_ECX + 0xe7c) + 0x24))();
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar2,(undefined4)local_1c);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pIVar3 = (Image *)FUN_10008640();
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 0xe80) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe80))();
  (**(code **)(**(int **)(in_ECX + 0xe80) + 0x24))();
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar2,(undefined4)local_1c);
  local_8 = 3;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pIVar3 = (Image *)FUN_10008640();
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 0xe84) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe84))();
  (**(code **)(**(int **)(in_ECX + 0xe84) + 0x24))();
  iStack_8c = 0x100364c8;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar2,(undefined4)local_1c);
  local_8 = 4;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iStack_8c = 0x100364e5;
    pIVar3 = (Image *)FUN_10008640();
    iStack_8c = 0x100364f0;
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 0xe88) = piVar4;
  local_8 = 0xffffffff;
  iStack_8c = 0x10036509;
  (**(code **)(*piVar4 + 0x40))();
  iStack_8c = DAT_1018f434 + -0x100;
  iStack_90 = DAT_1018f430 + -0x100;
  uStack_94 = 0x10036529;
  (**(code **)**(undefined4 **)(in_ECX + 0xe88))();
  uStack_94 = 0;
  pcStack_98 = (char *)0x10036536;
  (**(code **)(**(int **)(in_ECX + 0xe88) + 0x24))();
  pcStack_98 = "gfx/vgui/640_hudelem_smsicon.tga";
  uStack_9c = 0x10036540;
  piVar4 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1018) = piVar4;
  if (piVar4 == (int *)0x0) {
    pcStack_98 = "Cannot load gfx/vgui/640_hudelem_smsicon.tga!\n";
    uStack_9c = 0x1003657e;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_a0,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x101c) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff54,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1020) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff48,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xfec) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff3c,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x1024) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff30,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  local_1c = (double)CONCAT44(DAT_101b2600 + 0x230,(undefined4)local_1c);
  FUN_1009d3a0();
  FUN_1009d3a0();
  FUN_1009d3a0();
  FUN_1009d350();
  uVar5 = FUN_1009d350();
  *(undefined4 *)(local_14 + 0xe90) = uVar5;
  uVar5 = FUN_1009d350();
  *(undefined4 *)(local_14 + 0xf54) = uVar5;
  uVar5 = FUN_1009d350();
  pIVar2 = local_14;
  *(undefined4 *)(local_14 + 0xe94) = uVar5;
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0x1028) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff24,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0x102c) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff18,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0x1030) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff0c,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0x1034) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff00,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0x1038) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xfffffef4,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0xe78) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xfffffee8,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  piVar4 = (int *)FUN_10008640();
  *(int **)(local_14 + 0xe68) = piVar4;
  if (piVar4 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xfffffedc,0xff,0xff,0xff,1);
    (**(code **)(*piVar4 + 0xc))();
  }
  pPVar11 = (Panel *)(local_14 + 0xf88);
  local_14 = (ImagePanel *)0x0;
  do {
    pIVar6 = local_14;
    piVar4 = (int *)FUN_10008640();
    *(int **)(pPVar11 + -0x20) = piVar4;
    if (piVar4 == (int *)0x0) {
      (*DAT_101b26a8)();
    }
    else {
      vgui::Color::Color((Color *)&stack0xfffffed0,0xff,0xff,0xff,1);
      (**(code **)(*piVar4 + 0xc))();
      pIVar6 = local_14;
    }
    piVar4 = (int *)FUN_10008640();
    *(int **)pPVar11 = piVar4;
    if (piVar4 == (int *)0x0) {
      (*DAT_101b26a8)();
    }
    else {
      vgui::Color::Color((Color *)&stack0xfffffec4,0xff,0xff,0xff,1);
      (**(code **)(*piVar4 + 0xc))();
      pIVar6 = local_14;
    }
    local_14 = pIVar6 + 1;
    pPVar11 = pPVar11 + 4;
  } while ((int)local_14 < 4);
  vgui::Panel::setBgColor((Panel *)pIVar2,0,0,0,0xff);
  pIVar6 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 5;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0xe68));
  }
  *(int **)(pIVar2 + 0xe64) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)**(undefined4 **)(pIVar2 + 0xe64))();
  (**(code **)(**(int **)(pIVar2 + 0xe64) + 0x24))();
  piVar4 = *(int **)(pIVar2 + 0xe68);
  vgui::Color::Color((Color *)&stack0xfffffec0,0xff,0xff,0xff,*(int *)(pIVar2 + 0xe70));
  (**(code **)(*piVar4 + 0xc))();
  pIVar6 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 6;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1018));
  }
  *(int **)(pIVar2 + 0xff0) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  piVar4 = *(int **)(pIVar2 + 0xff0);
  puVar1 = (undefined4 *)*piVar4;
  (*(code *)puVar1[7])();
  (**(code **)(*piVar4 + 0x18))();
  (*(code *)*puVar1)();
  (**(code **)(**(int **)(pIVar2 + 0xff0) + 0x24))();
  pIVar6 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 7;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x101c));
  }
  *(int **)(pIVar2 + 0x1004) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  puVar1 = (undefined4 *)**(int **)(pIVar2 + 0x1004);
  iVar7 = (*(code *)puVar1[6])();
  local_1c = (double)iVar7 * 1.2;
  (**(code **)(**(int **)(pIVar2 + 0x1004) + 0x18))();
  (*(code *)*puVar1)();
  (**(code **)(**(int **)(pIVar2 + 0x1004) + 0x24))();
  iStack_168 = 0x10036bb2;
  pIVar6 = (ImagePanel *)FUN_100b44cb();
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 8;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iStack_168 = 0x10036bd0;
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0xfec));
  }
  *(int **)(pIVar2 + 0xfd4) = piVar4;
  local_8 = 0xffffffff;
  iStack_168 = 0x10036be9;
  (**(code **)(*piVar4 + 0x40))();
  iStack_168 = 0x10036bf4;
  iVar7 = (**(code **)(**(int **)(pIVar2 + 0xfd4) + 0x18))();
  iVar10 = DAT_1018f430 / 2;
  iStack_168 = 0x10036c14;
  iVar8 = (**(code **)(**(int **)(pIVar2 + 0xfd4) + 0x1c))();
  iStack_168 = DAT_1018f434 / 2 - iVar8 / 2;
  uStack_170 = 0x10036c33;
  iStack_16c = iVar10 - iVar7 / 2;
  (**(code **)**(undefined4 **)(pIVar2 + 0xfd4))();
  piVar4 = *(int **)(pIVar2 + 0xfec);
  vgui::Color::Color(aCStack_178,0xff,0xff,0xff,0xff);
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(**(int **)(pIVar2 + 0xfd4) + 0x24))(0);
  pPVar11 = (Panel *)FUN_100b44cb(0xbc);
  local_1c = (double)CONCAT44(pPVar11,(undefined4)local_1c);
  local_8 = 9;
  if (pPVar11 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar11,0,0,DAT_1018f430,DAT_1018f434);
  }
  *(int **)(pIVar2 + 0x380) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x380) + 8))(DAT_1018f430,DAT_1018f434);
  (**(code **)**(undefined4 **)(pIVar2 + 0x380))(0,0);
  (**(code **)(**(int **)(pIVar2 + 0x380) + 300))(0x21,0xb1,0x78,0x80);
  (**(code **)(**(int **)(pIVar2 + 0x380) + 0x24))(0);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 10;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1024));
  }
  *(int **)(pIVar2 + 0xfc8) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  piVar4 = *(int **)(pIVar2 + 0xfc8);
  puVar1 = (undefined4 *)*piVar4;
  iVar7 = (*(code *)puVar1[7])();
  uVar5 = (**(code **)(*piVar4 + 0x18))(DAT_1018f434 - iVar7);
  (*(code *)*puVar1)(uVar5);
  (**(code **)(**(int **)(pIVar2 + 0xfc8) + 0x24))(1);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0xb;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1028));
  }
  *(int **)(pIVar2 + 0xfcc) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 0xfc8));
  (**(code **)**(undefined4 **)(pIVar2 + 0xfcc))(0xb,5);
  (**(code **)(**(int **)(pIVar2 + 0xfcc) + 0x24))(1);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0xc;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x102c));
  }
  *(int **)(pIVar2 + 0xfd0) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 0xfc8));
  (**(code **)**(undefined4 **)(pIVar2 + 0xfd0))(0xb,5);
  (**(code **)(**(int **)(pIVar2 + 0xfd0) + 0x24))(1);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0xd;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1030));
  }
  *(int **)(pIVar2 + 0xfd8) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  piVar4 = *(int **)(pIVar2 + 0xfd8);
  puVar1 = (undefined4 *)*piVar4;
  iVar7 = (*(code *)puVar1[7])();
  iVar7 = (**(code **)(*piVar4 + 0x18))(DAT_1018f434 - iVar7);
  (*(code *)*puVar1)(iVar7 * 2);
  (**(code **)(**(int **)(pIVar2 + 0xfd8) + 0x24))(1);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0xe;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1034));
  }
  *(int **)(pIVar2 + 0xfdc) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 0xfd8));
  (**(code **)**(undefined4 **)(pIVar2 + 0xfdc))(0xb,5);
  (**(code **)(**(int **)(pIVar2 + 0xfdc) + 0x24))(1);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0xf;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0x1038));
  }
  *(int **)(pIVar2 + 0xfe0) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 0xfd8));
  (**(code **)**(undefined4 **)(pIVar2 + 0xfe0))(0xb,5);
  (**(code **)(**(int **)(pIVar2 + 0xfe0) + 0x24))(1);
  (**(code **)(**(int **)(pIVar2 + 0x1038) + 8))(&local_24,&local_20);
  pPVar11 = (Panel *)FUN_100b44cb(0xbc);
  local_1c = (double)CONCAT44(pPVar11,(undefined4)local_1c);
  local_8 = 0x10;
  if (pPVar11 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar11,0xff,0,0,0xff);
  }
  *(int **)(pIVar2 + 0xfe8) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 0xfdc));
  (**(code **)(**(int **)(pIVar2 + 0xfe8) + 8))(local_24,local_20);
  (**(code **)**(undefined4 **)(pIVar2 + 0xfe8))(0,0);
  (**(code **)(**(int **)(pIVar2 + 0xfe8) + 300))(0xff,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0xfe8) + 0x24))(1);
  pPVar11 = (Panel *)FUN_100b44cb(0xbc);
  local_1c = (double)CONCAT44(pPVar11,(undefined4)local_1c);
  local_8 = 0x11;
  if (pPVar11 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar11,0,0,0,0);
  }
  *(int **)(pIVar2 + 0xe8c) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0xe8c) + 8))(DAT_1018f430,DAT_1018f434);
  (**(code **)(**(int **)(pIVar2 + 0xe8c) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0xe8c) + 0x24))(0);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x12;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",DAT_1018f430 / 2 + -0x80,DAT_1018f434 / 2,0x100,
                                       0x20);
  }
  *(int **)(pIVar2 + 900) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 900) + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
  (**(code **)(**(int **)(pIVar2 + 900) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(pIVar2 + 900) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 900) + 0x200))(*(int **)(pIVar2 + 900),&DAT_1014674c);
  (**(code **)(**(int **)(pIVar2 + 900) + 0x21c))(4);
  (**(code **)(**(int **)(pIVar2 + 900) + 0x24))(0);
  iVar7 = 0;
  pPVar11 = (Panel *)(pIVar2 + 0x388);
  do {
    pLVar9 = (Label *)FUN_100b44cb(0xd0);
    local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
    local_8 = 0x13;
    if (pLVar9 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar8 = DAT_1018f430;
      if (DAT_1018f430 < 0) {
        iVar8 = DAT_1018f430 + 1;
      }
      piVar4 = (int *)vgui::Label::Label(pLVar9," ",(iVar8 >> 1) + -0x200 + iVar7,
                                         DAT_1018f434 / 2 + 0x20,0x100,0x20);
    }
    *(int **)pPVar11 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(*(undefined4 *)(pIVar2 + 1000));
    (**(code **)(**(int **)pPVar11 + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
    (**(code **)(**(int **)pPVar11 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar11 + 300))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar11 + 0x200))(*(int **)pPVar11,&DAT_1014676c);
    (**(code **)(**(int **)pPVar11 + 0x21c))(4);
    (**(code **)(**(int **)pPVar11 + 0x24))(0);
    iVar7 = iVar7 + 0x100;
    pPVar11 = pPVar11 + 4;
  } while (iVar7 < 0x400);
  (**(code **)**(undefined4 **)(pIVar2 + 0x388))(0x74,0x101);
  (**(code **)**(undefined4 **)(pIVar2 + 0x38c))(0x74,0x1b8);
  (**(code **)**(undefined4 **)(pIVar2 + 0x390))(0x1ad,0x101);
  (**(code **)**(undefined4 **)(pIVar2 + 0x394))(0x1ad,0x1b8);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x14;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",DAT_1018f430 / 2 + -0x80,DAT_1018f434 / 2 + 0x40,
                                       0x100,0x20);
  }
  *(int **)(pIVar2 + 0x398) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x200))(*(int **)(pIVar2 + 0x398),&DAT_10146770);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x21c))(4);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x24))(0);
  (**(code **)(**(int **)(pIVar2 + 900) + 0x40))(*(undefined4 *)(pIVar2 + 1000));
  (**(code **)**(undefined4 **)(pIVar2 + 900))(0x110,0x1ec);
  (**(code **)(**(int **)(pIVar2 + 0x398) + 0x40))(*(undefined4 *)(pIVar2 + 1000));
  (**(code **)**(undefined4 **)(pIVar2 + 0x398))(0x110,0x20c);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x15;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",0,0,DAT_1018f430,0x40);
  }
  *(int **)(pIVar2 + 0x3a4) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 0x208))(*(undefined4 *)(pIVar2 + 0xf54));
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 0x200))(*(int **)(pIVar2 + 0x3a4),"00:00:00");
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 0x21c))(4);
  (**(code **)(**(int **)(pIVar2 + 0x3a4) + 0x24))(0);
  pPVar11 = (Panel *)(pIVar2 + 0x2ec);
  iVar7 = 0x20;
  do {
    pLVar9 = (Label *)FUN_100b44cb(0xd0);
    local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
    local_8 = 0x16;
    if (pLVar9 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar9," ",0,0,0x40,0x80);
    }
    *(int **)pPVar11 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(pIVar2);
    (**(code **)(**(int **)pPVar11 + 0x208))(*(undefined4 *)(pIVar2 + 0xe94));
    (**(code **)(**(int **)pPVar11 + 0x120))(0,0x80,0,0);
    (**(code **)(**(int **)pPVar11 + 300))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar11 + 0x200))(*(int **)pPVar11,&DAT_101467ac);
    (**(code **)(**(int **)pPVar11 + 0x21c))(0);
    (**(code **)(**(int **)pPVar11 + 0x24))(0);
    pPVar11 = pPVar11 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x17;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",0,DAT_1018f434 / 2,DAT_1018f430,0x40);
  }
  *(int **)(pIVar2 + 0x3ac) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3ac) + 0x208))(*(undefined4 *)(pIVar2 + 0xe94));
  (**(code **)(**(int **)(pIVar2 + 0x3ac) + 0x120))(0,0,0,0);
  (**(code **)(**(int **)(pIVar2 + 0x3ac) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3ac) + 0x200))(*(int **)(pIVar2 + 0x3ac),&DAT_10141994);
  (**(code **)(**(int **)(pIVar2 + 0x3ac) + 0x21c))(4);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x18;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",DAT_1018f430 / 2 + -0x80,DAT_1018f434 / 2 + -0x28,
                                       0x100,0x20);
  }
  *(int **)(pIVar2 + 0x3cc) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3cc) + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
  (**(code **)(**(int **)(pIVar2 + 0x3cc) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(pIVar2 + 0x3cc) + 300))(0xff,0xff,0xff,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3cc) + 0x200))(*(int **)(pIVar2 + 0x3cc),&DAT_10141994);
  (**(code **)(**(int **)(pIVar2 + 0x3cc) + 0x21c))(4);
  (**(code **)(**(int **)(pIVar2 + 0xfd8) + 4))(local_2c,local_28);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x19;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9,(char *)&PTR_1013b108,DAT_1018f430 + -0x85,5,0x80,0x28
                                      );
  }
  *(int **)(pIVar2 + 0x3e0) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3e0) + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
  (**(code **)(**(int **)(pIVar2 + 0x3e0) + 0x120))(0xff,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3e0) + 300))(0xff,0xff,0xff,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3e0) + 0x200))(*(int **)(pIVar2 + 0x3e0),&PTR_1013b108);
  (**(code **)(**(int **)(pIVar2 + 0x3e0) + 0x21c))(5);
  iVar7 = 0;
  pPVar11 = (Panel *)(pIVar2 + 0x3d0);
  do {
    pLVar9 = (Label *)FUN_100b44cb(0xd0);
    local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
    local_8 = 0x1a;
    if (pLVar9 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar9,(char *)&PTR_1013b108,DAT_1018f430 + -0x85,
                                         (int)((double)DAT_1018f434 / 1.5 + (double)iVar7),0x80,0x30
                                        );
    }
    *(int **)pPVar11 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(pIVar2);
    (**(code **)(**(int **)pPVar11 + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
    (**(code **)(**(int **)pPVar11 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar11 + 300))(0xff,0xff,0xff,0xff);
    (**(code **)(**(int **)pPVar11 + 0x200))(*(int **)pPVar11,&PTR_1013b108);
    (**(code **)(**(int **)pPVar11 + 0x21c))(5);
    (**(code **)(**(int **)pPVar11 + 0x24))(0);
    local_14 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 0x1b;
    if (local_14 == (ImagePanel *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::ImagePanel::ImagePanel(local_14,*(Image **)(pPVar11 + 0xb98));
    }
    *(int **)(pPVar11 + 0xba8) = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(pIVar2);
    (**(code **)**(undefined4 **)(pPVar11 + 0xba8))
              (DAT_1018f430 + -0x105,(int)((double)DAT_1018f434 / 1.5 + (double)iVar7));
    (**(code **)(**(int **)(pPVar11 + 0xba8) + 0x24))(0);
    local_30 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 0x1c;
    if (local_30 == (ImagePanel *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::ImagePanel::ImagePanel(local_30,*(Image **)(pPVar11 + 3000));
    }
    *(int **)(pPVar11 + 0xbc8) = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(pIVar2);
    (**(code **)**(undefined4 **)(pPVar11 + 0xbc8))
              (DAT_1018f430 + -0x85,(int)((double)DAT_1018f434 / 1.5 + (double)iVar7));
    (**(code **)(**(int **)(pPVar11 + 0xbc8) + 0x24))(0);
    iVar7 = iVar7 + 0x30;
    pPVar11 = pPVar11 + 4;
  } while (iVar7 < 0xc0);
  iVar7 = 0;
  pPVar11 = (Panel *)(pIVar2 + 0x3b4);
  do {
    if (*(int *)(pIVar2 + 0x860) == 0) {
      *(int *)(pIVar2 + 0x860) = DAT_1018f434 / 2;
    }
    if (*(int *)(pIVar2 + 0x85c) == 0) {
      *(undefined4 *)(pIVar2 + 0x85c) = 5;
    }
    (**(code **)(**(int **)(pIVar2 + 0xe90) + 0xc))("ysizetestg",local_34,&local_30);
    pLVar9 = (Label *)FUN_100b44cb(0xd0);
    local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
    local_8 = 0x1d;
    if (pLVar9 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar9,(char *)&PTR_1013b108,*(int *)(pIVar2 + 0x85c),
                                         *(int *)(pIVar2 + 0x860) + iVar7,DAT_1018f430,0x20);
    }
    *(int **)pPVar11 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(pIVar2);
    (**(code **)(**(int **)pPVar11 + 0x208))(*(undefined4 *)(pIVar2 + 0xe90));
    (**(code **)(**(int **)pPVar11 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar11 + 300))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar11 + 0x200))(*(int **)pPVar11,&PTR_1013b108);
    (**(code **)(**(int **)pPVar11 + 0x21c))(3);
    (**(code **)(**(int **)pPVar11 + 0x24))(1);
    iVar7 = iVar7 + 0x20;
    pPVar11 = pPVar11 + 4;
  } while (iVar7 < 0xa0);
  DAT_101b2bd0 = (int)(((float)DAT_1018f434 / 480.0) * 25.0 + 0.5);
  pPVar11 = (Panel *)FUN_100b44cb(0xbc);
  local_1c = (double)CONCAT44(pPVar11,(undefined4)local_1c);
  local_8 = 0x1e;
  if (pPVar11 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar11,0,0,DAT_1018f430,DAT_101b2bd0);
  }
  *(int **)(pIVar2 + 0x378) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x378) + 8))(DAT_1018f430,DAT_101b2bd0);
  (**(code **)(**(int **)(pIVar2 + 0x378) + 300))(0,0,0,0);
  (**(code **)(**(int **)(pIVar2 + 0x378) + 0x24))(1);
  pPVar11 = (Panel *)FUN_100b44cb(0xbc);
  local_1c = (double)CONCAT44(pPVar11,(undefined4)local_1c);
  local_8 = 0x1f;
  if (pPVar11 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar11,0,DAT_1018f434 - DAT_101b2bd0,DAT_1018f430,
                                       DAT_101b2bd0);
  }
  *(int **)(pIVar2 + 0x37c) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x37c) + 8))(DAT_1018f430,DAT_101b2bd0);
  (**(code **)(**(int **)(pIVar2 + 0x37c) + 300))(0,0,0,0);
  (**(code **)(**(int **)(pIVar2 + 0x37c) + 0x24))(1);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x20;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",0,0,DAT_1018f430,0x40);
  }
  *(int **)(pIVar2 + 0x3a8) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3a8) + 0x208))(*(undefined4 *)(pIVar2 + 0xf54));
  (**(code **)(**(int **)(pIVar2 + 0x3a8) + 0x120))(0,0,0,0);
  (**(code **)(**(int **)(pIVar2 + 0x3a8) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3a8) + 0x200))(*(int **)(pIVar2 + 0x3a8),&DAT_10141994);
  (**(code **)(**(int **)(pIVar2 + 0x3a8) + 0x21c))(4);
  pIVar6 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_1c = (double)CONCAT44(pIVar6,(undefined4)local_1c);
  local_8 = 0x21;
  if (pIVar6 == (ImagePanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar6,*(Image **)(pIVar2 + 0xe78));
  }
  *(int **)(pIVar2 + 0xe74) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)**(undefined4 **)(pIVar2 + 0xe74))(DAT_1018f434 / 2 + -400,0xffffffd0);
  (**(code **)(**(int **)(pIVar2 + 0xe74) + 0x24))(0);
  pLVar9 = (Label *)FUN_100b44cb(0xd0);
  local_1c = (double)CONCAT44(pLVar9,(undefined4)local_1c);
  local_8 = 0x22;
  if (pLVar9 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar9," ",DAT_1018f434 / 2 + -400,-0x30,800,0x30);
  }
  *(int **)(pIVar2 + 0x3b0) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))(pIVar2);
  (**(code **)(**(int **)(pIVar2 + 0x3b0) + 0x208))(*(undefined4 *)(pIVar2 + 0xf54));
  (**(code **)(**(int **)(pIVar2 + 0x3b0) + 0x120))(0,0,0,0);
  (**(code **)(**(int **)(pIVar2 + 0x3b0) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(pIVar2 + 0x3b0) + 0x200))(*(int **)(pIVar2 + 0x3b0),&DAT_10141994);
  (**(code **)(**(int **)(pIVar2 + 0x3b0) + 0x21c))(4);
  FUN_10038df0();
  ExceptionList = local_10;
  return (Panel *)pIVar2;
}

