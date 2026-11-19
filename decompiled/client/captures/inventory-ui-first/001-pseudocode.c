
Panel * FUN_10041140(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                    int param_6)

{
  Panel *pPVar1;
  int *piVar2;
  ImagePanel *pIVar3;
  undefined4 *puVar4;
  Color *pCVar5;
  undefined4 uVar6;
  LineBorder *pLVar7;
  Label *this;
  Panel *in_ECX;
  int iVar8;
  int iVar9;
  Panel *pPVar10;
  Color aCStack_6c [4];
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  Color aCStack_48 [4];
  undefined4 uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101340c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_3c = 0x1004117e;
  vgui::Panel::Panel(in_ECX,param_3,param_4,param_5,param_6);
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 200) = param_2;
  *(undefined ***)in_ECX = CRECBInventory::vftable;
  pPVar1 = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (pPVar1 == (Panel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_3c = 0x100411e6;
    piVar2 = (int *)vgui::Panel::Panel(pPVar1,0,0,DAT_1018f430,DAT_1018f434);
  }
  *(int **)(in_ECX + 0x148) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  uStack_3c = 0;
  pcStack_40 = (char *)0x10041215;
  (**(code **)(**(int **)(in_ECX + 0x148) + 300))();
  pcStack_40 = "gfx/vgui/backgroundtoall.tga";
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  uStack_44 = 0x10041229;
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xd4) = piVar2;
  if (piVar2 == (int *)0x0) {
    pcStack_40 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_44 = 0x10041267;
    (*DAT_101b26a8)();
  }
  else {
    iStack_5c = 0x10041253;
    vgui::Color::Color(aCStack_48,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 8))();
  iVar9 = DAT_1018f430 / 2;
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 1;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0xd4));
  }
  *(int **)(in_ECX + 0xd8) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  uStack_60 = 0x100412f6;
  iStack_5c = iVar9 - param_6 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0xd8))();
  uStack_60 = 1;
  pcStack_64 = (char *)0x10041303;
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x24))();
  pcStack_64 = "gfx/vgui/640_inventory.tga";
  uStack_68 = 0x10041334;
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x14c) = piVar2;
  if (piVar2 == (int *)0x0) {
    pcStack_64 = "Cannot load gfx/vgui/640_inventory.tga!\n";
    uStack_68 = 0x10041375;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_6c,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 2;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x14c));
  }
  *(int **)(in_ECX + 0x150) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x150))();
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x24))();
  iVar9 = FUN_100b44cb();
  local_8 = 3;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x120) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x120) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 4;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x124) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 5;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x128) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x128) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x128) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 6;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 300) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 300) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 300) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 7;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x130) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x130) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x130) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 8;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x134) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x134) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x134) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 9;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x138) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x138) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x138) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 10;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x13c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x13c) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x13c) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 0xb;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x140) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x140) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 0xc;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x144) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x144) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x144) + 0x1fc))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0xd;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  pPVar1 = in_ECX + 0x15c;
  *(int **)pPVar1 = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(**(int **)pPVar1 + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0xe;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x160) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(**(int **)(in_ECX + 0x160) + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0xf;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x164) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0x164) + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x168) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 4;
  }
  (**(code **)(**(int **)(in_ECX + 0x168) + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x11;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x16c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 5;
  }
  (**(code **)(**(int **)(in_ECX + 0x16c) + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x12;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x170) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 6;
  }
  (**(code **)(**(int **)(in_ECX + 0x170) + 0x240))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x13;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  pPVar10 = in_ECX + 0x180;
  local_8 = 0xffffffff;
  *(int **)pPVar10 = piVar2;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 7;
  }
  (**(code **)(**(int **)pPVar10 + 0x240))();
  (**(code **)(**(int **)pPVar10 + 0x24))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x14;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x184) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 8;
  }
  (**(code **)(**(int **)(in_ECX + 0x184) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x184) + 0x24))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x15;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x188) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 10;
  }
  (**(code **)(**(int **)(in_ECX + 0x188) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x188) + 0x24))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x16;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x18c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xf;
  }
  (**(code **)(**(int **)(in_ECX + 0x18c) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x18c) + 0x24))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x17;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 400) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x10;
  }
  (**(code **)(**(int **)(in_ECX + 400) + 0x240))();
  iVar9 = 6;
  do {
    iVar8 = iVar9;
    iVar9 = *(int *)pPVar1;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x18;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x13c) = uVar6;
    iVar9 = *(int *)pPVar1;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x19;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0x80);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x138) = uVar6;
    iVar9 = *(int *)pPVar1;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1a;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x134) = uVar6;
    iVar9 = *(int *)pPVar1;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1b;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    pPVar1 = pPVar1 + 4;
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x130) = uVar6;
    iVar9 = iVar8 + -1;
  } while (iVar9 != 0);
  iVar8 = iVar8 + 4;
  do {
    local_8 = 0xffffffff;
    iVar9 = *(int *)pPVar10;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1c;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x13c) = uVar6;
    iVar9 = *(int *)pPVar10;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1d;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0x80);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x138) = uVar6;
    iVar9 = *(int *)pPVar10;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1e;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x134) = uVar6;
    iVar9 = *(int *)pPVar10;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x1f;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
    }
    pPVar10 = pPVar10 + 4;
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x130) = uVar6;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x20;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x194) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xc;
  }
  (**(code **)(**(int **)(in_ECX + 0x194) + 0x240))();
  iVar9 = *(int *)(in_ECX + 0x194);
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x21;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x13c) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x194);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x22;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0xff);
  }
  *(undefined4 *)(iVar9 + 0x138) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x194);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x23;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x134) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x194);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x24;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x130) = uVar6;
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x25;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x198) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xd;
  }
  (**(code **)(**(int **)(in_ECX + 0x198) + 0x240))();
  iVar9 = *(int *)(in_ECX + 0x198);
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x26;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x13c) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x198);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x27;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0xff);
  }
  *(undefined4 *)(iVar9 + 0x138) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x198);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x28;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x134) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x198);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x29;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x130) = uVar6;
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x2a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x19c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xe;
  }
  (**(code **)(**(int **)(in_ECX + 0x19c) + 0x240))();
  iVar9 = *(int *)(in_ECX + 0x19c);
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x2b;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x13c) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x19c);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x2c;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0xff);
  }
  *(undefined4 *)(iVar9 + 0x138) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x19c);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x2d;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  *(undefined4 *)(iVar9 + 0x134) = uVar6;
  iVar9 = *(int *)(in_ECX + 0x19c);
  local_8 = 0xffffffff;
  pCVar5 = (Color *)FUN_100b44cb();
  local_8 = 0x2e;
  if (pCVar5 == (Color *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = vgui::Color::Color(pCVar5,0,0,0,0xff);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x130) = uVar6;
  iVar9 = FUN_100b44cb();
  local_8 = 0x2f;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0x154) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x1fc))();
  iVar9 = FUN_100b44cb();
  local_8 = 0x30;
  if (iVar9 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00();
  }
  *(int **)(in_ECX + 0xdc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x40))();
  iVar9 = **(int **)(in_ECX + 0xdc);
  FUN_10008640();
  (**(code **)(iVar9 + 0x1fc))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x31;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  pPVar1 = in_ECX + 0x100;
  *(int **)pPVar1 = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x32;
  }
  (**(code **)(**(int **)pPVar1 + 0x240))();
  (**(code **)(**(int **)pPVar1 + 0x24))();
  (**(code **)(**(int **)pPVar1 + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x32;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x104) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x33;
  }
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x104) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x33;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x108) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x34;
  }
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x34;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x10c) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x35;
  }
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x10c) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x35;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x110) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x36;
  }
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x36;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x114) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x37;
  }
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x21c))();
  piVar2 = (int *)FUN_100b44cb();
  local_8 = 0x37;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_10097020();
    *piVar2 = (int)ColorButton::vftable;
    piVar2[0x4c] = 0;
    piVar2[0x4d] = 0;
    piVar2[0x4e] = 0;
    piVar2[0x4f] = 0;
  }
  *(int **)(in_ECX + 0x118) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = CRECBInventoryHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x38;
  }
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x240))();
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x118) + 0x21c))();
  iVar9 = 7;
  do {
    iVar8 = *(int *)pPVar1;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x38;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0x80);
    }
    *(undefined4 *)(iVar8 + 0x13c) = uVar6;
    iVar8 = *(int *)pPVar1;
    local_8 = 0xffffffff;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x39;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0);
    }
    *(undefined4 *)(iVar8 + 0x138) = uVar6;
    iVar8 = *(int *)pPVar1;
    local_8 = 0xffffffff;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x3a;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0x80);
    }
    *(undefined4 *)(iVar8 + 0x134) = uVar6;
    iVar8 = *(int *)pPVar1;
    local_8 = 0xffffffff;
    pCVar5 = (Color *)FUN_100b44cb();
    local_8 = 0x3b;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0);
    }
    pPVar1 = pPVar1 + 4;
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x130) = uVar6;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pPVar1 = (Panel *)FUN_100b44cb();
  local_8 = 0x3c;
  if (pPVar1 == (Panel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::Panel::Panel(pPVar1,0x24,0x49,99,99);
  }
  local_8 = 0xffffffff;
  *(int **)(in_ECX + 0xf8) = piVar2;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xf8) + 300))();
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))();
  pLVar7 = (LineBorder *)FUN_100b44cb();
  local_8 = 0x3d;
  if (pLVar7 != (LineBorder *)0x0) {
    vgui::Color::Color((Color *)&stack0xfffffde0,0xff,0,0,0xff);
    vgui::LineBorder::LineBorder(pLVar7);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0xd4))();
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0xd8))();
  FUN_1009d3a0();
  uVar6 = FUN_1009d350();
  this = (Label *)FUN_100b44cb();
  local_8 = 0x3e;
  if (this == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::Label::Label(this,(char *)&PTR_1013b108,0x194,0x162,0x12d,0x61);
  }
  *(int **)(in_ECX + 0x1a0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x208))(uVar6);
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x21c))(4);
  (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x24))(1);
  ExceptionList = local_10;
  return in_ECX;
}

