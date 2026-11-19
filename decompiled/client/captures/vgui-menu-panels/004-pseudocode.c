
void FUN_1001f2b0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  Color *pCVar6;
  int iVar7;
  int iVar8;
  Panel *in_ECX;
  Panel *pPVar9;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10131d5f;
  local_10 = ExceptionList;
  uVar1 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CClothesMenu::vftable;
  pPVar9 = in_ECX + 0xc0;
  local_18 = 0;
  local_1c = 0;
  iVar8 = DAT_1018f434 / 0xc;
  iVar2 = DAT_1018f430 / 2;
  do {
    piVar3 = (int *)FUN_100b44cb(0x140,uVar1);
    local_8 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_10097020(&PTR_1013b108,DAT_1018f430 / 2,local_1c,iVar2,iVar8,0,0);
      *piVar3 = (int)ColorButton::vftable;
      piVar3[0x4c] = 0;
      piVar3[0x4d] = 0;
      piVar3[0x4e] = 0;
      piVar3[0x4f] = 0;
    }
    *(int **)pPVar9 = piVar3;
    local_8 = 0xffffffff;
    (**(code **)(*piVar3 + 0x40))();
    puVar4 = (undefined4 *)FUN_100b44cb(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = CClothesMenuHandler_Command::vftable;
      puVar4[1] = in_ECX;
      puVar4[2] = local_18 + 1;
    }
    (**(code **)(**(int **)pPVar9 + 0x240))(puVar4);
    iVar7 = **(int **)pPVar9;
    uVar5 = FUN_1009d3a0("credits");
    uVar5 = FUN_1009d350(uVar5);
    (**(code **)(iVar7 + 0x208))(uVar5);
    iVar7 = *(int *)pPVar9;
    pCVar6 = (Color *)FUN_100b44cb(0xc);
    local_8 = 1;
    if (pCVar6 == (Color *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,200);
    }
    *(undefined4 *)(iVar7 + 0x13c) = uVar5;
    iVar7 = *(int *)pPVar9;
    local_8 = 0xffffffff;
    pCVar6 = (Color *)FUN_100b44cb(0xc);
    local_8 = 2;
    if (pCVar6 == (Color *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0);
    }
    *(undefined4 *)(iVar7 + 0x134) = uVar5;
    iVar7 = *(int *)pPVar9;
    local_8 = 0xffffffff;
    pCVar6 = (Color *)FUN_100b44cb(0xc);
    local_8 = 3;
    if (pCVar6 == (Color *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0x96);
    }
    *(undefined4 *)(iVar7 + 0x138) = uVar5;
    iVar7 = *(int *)pPVar9;
    local_8 = 0xffffffff;
    pCVar6 = (Color *)FUN_100b44cb(0xc);
    local_8 = 4;
    if (pCVar6 == (Color *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Color::Color(pCVar6,0xff,0,0,0x20);
    }
    *(undefined4 *)(iVar7 + 0x130) = uVar5;
    local_8 = 0xffffffff;
    (**(code **)(**(int **)pPVar9 + 300))(0,0,0,0x80);
    (**(code **)(**(int **)pPVar9 + 0x120))(0xff,0xff,0xff,0x80);
    pPVar9 = pPVar9 + 4;
    local_18 = local_18 + 1;
    local_1c = local_1c + iVar8;
  } while (local_18 < 0xd);
  piVar3 = (int *)FUN_100b44cb(0x140);
  local_8 = 5;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_10097020(&DAT_10140cd8,0,DAT_1018f434 - iVar8,iVar2 / 2,iVar8,0,0);
    *piVar3 = (int)ColorButton::vftable;
    piVar3[0x4c] = 0;
    piVar3[0x4d] = 0;
    piVar3[0x4e] = 0;
    piVar3[0x4f] = 0;
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CClothesMenuHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x32;
  }
  (**(code **)(*piVar3 + 0x240))(puVar4);
  iVar7 = *piVar3;
  uVar5 = FUN_1009d3a0("credits");
  uVar5 = FUN_1009d350(uVar5);
  (**(code **)(iVar7 + 0x208))(uVar5);
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 6;
  if (pCVar6 == (Color *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,200);
  }
  local_8 = 0xffffffff;
  piVar3[0x4f] = iVar7;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 7;
  if (pCVar6 == (Color *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0);
  }
  local_8 = 0xffffffff;
  piVar3[0x4d] = iVar7;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 8;
  if (pCVar6 == (Color *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0x96);
  }
  local_8 = 0xffffffff;
  piVar3[0x4e] = iVar7;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 9;
  if (pCVar6 == (Color *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = vgui::Color::Color(pCVar6,0xff,0,0,0x20);
  }
  piVar3[0x4c] = iVar7;
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 300))(0,0,0,0x80);
  (**(code **)(*piVar3 + 0x120))(0xff,0xff,0xff,0x80);
  piVar3 = (int *)FUN_100b44cb(0x140);
  local_8 = 10;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_10097020(&DAT_10140ce0,iVar2 / 2,DAT_1018f434 - iVar8,iVar2 / 2,iVar8,0,0);
    *piVar3 = (int)ColorButton::vftable;
    piVar3[0x4c] = 0;
    piVar3[0x4d] = 0;
    piVar3[0x4e] = 0;
    piVar3[0x4f] = 0;
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CClothesMenuHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x42;
  }
  (**(code **)(*piVar3 + 0x240))(puVar4);
  iVar8 = *piVar3;
  uVar5 = FUN_1009d3a0("credits");
  uVar5 = FUN_1009d350(uVar5);
  (**(code **)(iVar8 + 0x208))(uVar5);
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0xb;
  if (pCVar6 == (Color *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,200);
  }
  local_8 = 0xffffffff;
  piVar3[0x4f] = iVar8;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0xc;
  if (pCVar6 == (Color *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0);
  }
  local_8 = 0xffffffff;
  piVar3[0x4d] = iVar8;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0xd;
  if (pCVar6 == (Color *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = vgui::Color::Color(pCVar6,0xff,0xff,0xff,0x96);
  }
  local_8 = 0xffffffff;
  piVar3[0x4e] = iVar8;
  pCVar6 = (Color *)FUN_100b44cb(0xc);
  local_8 = 0xe;
  if (pCVar6 == (Color *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = vgui::Color::Color(pCVar6,0xff,0,0,0x20);
  }
  piVar3[0x4c] = iVar8;
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 300))(0,0,0,0x80);
  (**(code **)(*piVar3 + 0x120))(0xff,0xff,0xff,0x80);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1001fe60();
  ExceptionList = local_10;
  return;
}

