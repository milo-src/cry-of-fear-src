
Panel * FUN_10020e20(void)

{
  int iVar1;
  Label *pLVar2;
  Panel *pPVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  Panel *in_ECX;
  undefined1 local_2c [4];
  Label *local_28;
  Label *local_24;
  Panel *local_20;
  Panel *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10131f51;
  local_10 = ExceptionList;
  uVar4 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CCoopStats::vftable;
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  local_14 = DAT_101b2600 + 0x230;
  local_24 = (Label *)FUN_100b44cb(0xd0,uVar4);
  local_8 = 0;
  if (local_24 == (Label *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)vgui::Label::Label(local_24,&DAT_10141960,0,DAT_1018f6d4,DAT_1018f430,
                                       DAT_1018f6d4);
  }
  *(int **)(in_ECX + 0xc0) = piVar5;
  local_8 = 0xffffffff;
  (**(code **)(*piVar5 + 0x40))();
  iVar1 = **(int **)(in_ECX + 0xc0);
  uVar6 = FUN_1009d3a0("credits");
  uVar6 = FUN_1009d350(uVar6);
  (**(code **)(iVar1 + 0x208))(uVar6);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xdc))(0);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x200))(*(int **)(in_ECX + 0xc0),&DAT_10141960);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x21c))(4);
  local_24 = (Label *)(in_ECX + 0xf4);
  local_20 = (Panel *)0x1;
  do {
    pPVar3 = local_20;
    local_28 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 1;
    if (local_28 == (Label *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)vgui::Label::Label(local_28,"-",DAT_1018f430 / 2 - DAT_1018f6d8,
                                         ((int)pPVar3 + -10) * DAT_1018f6dc + DAT_1018f434 / 2,
                                         DAT_1018f6d8,DAT_1018f6dc);
      in_ECX = local_1c;
    }
    pLVar2 = local_24;
    local_8 = 0xffffffff;
    *(int **)local_24 = piVar5;
    (**(code **)(*piVar5 + 0x40))(in_ECX);
    iVar1 = **(int **)pLVar2;
    uVar6 = FUN_1009d3a0("pager");
    uVar6 = FUN_1009d350(uVar6);
    (**(code **)(iVar1 + 0x208))(uVar6);
    (**(code **)(**(int **)pLVar2 + 0xdc))(0);
    (**(code **)(**(int **)pLVar2 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pLVar2 + 0x21c))(3);
    local_24 = pLVar2 + 4;
    local_20 = (Panel *)((int)local_20 + 1);
  } while ((int)local_20 < 10);
  local_20 = in_ECX + 0x11c;
  local_24 = (Label *)0x1;
  do {
    pLVar2 = local_24;
    local_28 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 2;
    if (local_28 == (Label *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)vgui::Label::Label(local_28,"-",DAT_1018f430 / 2 - DAT_1018f6d8,
                                         ((int)pLVar2 + -1) * DAT_1018f6dc + DAT_1018f434 / 2,
                                         DAT_1018f6d8,DAT_1018f6dc);
      in_ECX = local_1c;
    }
    pPVar3 = local_20;
    local_8 = 0xffffffff;
    *(int **)local_20 = piVar5;
    (**(code **)(*piVar5 + 0x40))(in_ECX);
    iVar1 = **(int **)pPVar3;
    uVar6 = FUN_1009d3a0("pager");
    uVar6 = FUN_1009d350(uVar6);
    (**(code **)(iVar1 + 0x208))(uVar6);
    (**(code **)(**(int **)pPVar3 + 0xdc))(0);
    (**(code **)(**(int **)pPVar3 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar3 + 0x21c))(3);
    local_20 = pPVar3 + 4;
    local_24 = (Label *)((int)local_24 + 1);
  } while ((int)local_24 < 10);
  (**(code **)(**(int **)(in_ECX + 0x13c) + 4))(local_2c,&local_18);
  local_18 = local_18 + DAT_1018f6dc;
  local_28 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 3;
  if (local_28 == (Label *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)vgui::Label::Label(local_28," ",DAT_1018f430 / 2 - DAT_1018f6d8 / 2,local_18,
                                       DAT_1018f6d8,DAT_1018f6dc);
  }
  *(int **)(in_ECX + 0xc4) = piVar5;
  local_8 = 0xffffffff;
  (**(code **)(*piVar5 + 0x40))(in_ECX);
  iVar1 = **(int **)(in_ECX + 0xc4);
  uVar6 = FUN_1009d3a0("pager");
  uVar6 = FUN_1009d350(uVar6);
  (**(code **)(iVar1 + 0x208))(uVar6);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0xdc))(0);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x200))(*(int **)(in_ECX + 0xc4),&DAT_10141994);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x21c))(4);
  local_20 = in_ECX + 0x144;
  local_24 = (Label *)0x1;
  do {
    pLVar2 = local_24;
    local_28 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 4;
    if (local_28 == (Label *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)vgui::Label::Label(local_28,"-",DAT_1018f430 / 2,
                                         ((int)pLVar2 + -10) * DAT_1018f6dc + DAT_1018f434 / 2,
                                         DAT_1018f6d8,DAT_1018f6dc);
    }
    pPVar3 = local_20;
    local_8 = 0xffffffff;
    *(int **)local_20 = piVar5;
    (**(code **)(*piVar5 + 0x40))(local_1c);
    iVar1 = **(int **)pPVar3;
    uVar6 = FUN_1009d3a0("pager");
    uVar6 = FUN_1009d350(uVar6);
    (**(code **)(iVar1 + 0x208))(uVar6);
    (**(code **)(**(int **)pPVar3 + 0xdc))(0);
    (**(code **)(**(int **)pPVar3 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar3 + 0x21c))(5);
    local_20 = pPVar3 + 4;
    local_24 = (Label *)((int)local_24 + 1);
  } while ((int)local_24 < 10);
  local_20 = local_1c + 0x16c;
  local_24 = (Label *)0x1;
  do {
    pLVar2 = local_24;
    local_28 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 5;
    if (local_28 == (Label *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)vgui::Label::Label(local_28,"-",DAT_1018f430 / 2,
                                         ((int)pLVar2 + -1) * DAT_1018f6dc + DAT_1018f434 / 2,
                                         DAT_1018f6d8,DAT_1018f6dc);
    }
    pPVar3 = local_20;
    local_8 = 0xffffffff;
    *(int **)local_20 = piVar5;
    (**(code **)(*piVar5 + 0x40))(local_1c);
    iVar1 = **(int **)pPVar3;
    uVar6 = FUN_1009d3a0("pager");
    uVar6 = FUN_1009d350(uVar6);
    (**(code **)(iVar1 + 0x208))(uVar6);
    (**(code **)(**(int **)pPVar3 + 0xdc))(0);
    (**(code **)(**(int **)pPVar3 + 0x120))(0xff,0xff,0xff,0);
    (**(code **)(**(int **)pPVar3 + 0x21c))(5);
    local_20 = pPVar3 + 4;
    local_24 = (Label *)((int)local_24 + 1);
  } while ((int)local_24 < 10);
  FUN_10023570();
  ExceptionList = local_10;
  return local_1c;
}

