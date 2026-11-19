
void FUN_1002a8d0(void)

{
  Panel *pPVar1;
  int *piVar2;
  ImagePanel *pIVar3;
  undefined4 *puVar4;
  Panel *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  char *pcStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  Color aCStack_80 [4];
  undefined4 uStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101327bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_60 = 0x1002a90f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CDocuments::vftable;
  pPVar1 = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (pPVar1 == (Panel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_60 = 0x1002a947;
    piVar2 = (int *)vgui::Panel::Panel(pPVar1,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(*piVar2 + 8))();
  uStack_60 = 0;
  uStack_64 = 0x1002a979;
  (**(code **)*piVar2)();
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0x1002a98b;
  (**(code **)(*piVar2 + 300))();
  uStack_74 = 1;
  pcStack_78 = (char *)0x1002a994;
  (**(code **)(*piVar2 + 0x24))();
  pcStack_78 = "gfx/vgui/640_documents.tga";
  uStack_7c = 0x1002a99e;
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x144) = piVar2;
  if (piVar2 == (int *)0x0) {
    pcStack_78 = "Cannot load gfx/vgui/640_documents.tga!\n";
    uStack_7c = 0x1002a9dc;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_80,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x14c) = piVar2;
  if (piVar2 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffff74,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0x14c) + 8))();
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 1;
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
  (**(code **)(**(int **)(in_ECX + 0x144) + 8))();
  iVar5 = DAT_1018f430 / 2;
  iVar6 = DAT_1018f434 / 2;
  iStack_b4 = 0x1002ab0c;
  pIVar3 = (ImagePanel *)FUN_100b44cb();
  local_8 = 2;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iStack_b4 = 0x1002ab2a;
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0x144));
  }
  *(int **)(in_ECX + 0x148) = piVar2;
  local_8 = 0xffffffff;
  iStack_b4 = 0x1002ab43;
  (**(code **)(*piVar2 + 0x40))();
  uStack_bc = 0x1002ab4f;
  iStack_b8 = iVar5 - local_14 / 2;
  iStack_b4 = iVar6 - local_18 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0x148))();
  uStack_bc = 1;
  pcStack_c0 = (char *)0x1002ab5c;
  (**(code **)(**(int **)(in_ECX + 0x148) + 0x24))();
  local_1c = 1;
  local_20 = 0x4c;
  pPVar1 = in_ECX + 0x2ac;
  do {
    pcStack_c0 = "gfx/vgui/notes/hiddennote1.tga";
    puStack_c4 = (undefined4 *)0x1002ab7b;
    piVar2 = (int *)FUN_10008640();
    *(int **)(pPVar1 + -0x44) = piVar2;
    if (piVar2 == (int *)0x0) {
      pcStack_c0 = "Cannot load gfx/vgui/notes/hiddennote1.tga!\n";
      puStack_c4 = (undefined4 *)0x1002abb9;
      (*DAT_101b26a8)();
    }
    else {
      vgui::Color::Color((Color *)&uStack_c8,0xff,0xff,0xff,1);
      (**(code **)(*piVar2 + 0xc))();
    }
    pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 3;
    if (pIVar3 == (ImagePanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(pPVar1 + -0x44));
    }
    *(int **)pPVar1 = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    (**(code **)**(undefined4 **)pPVar1)(0xe6,local_20);
    (**(code **)(**(int **)pPVar1 + 0x24))(0);
    pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 4;
    if (pIVar3 == (ImagePanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,(Image *)0x0);
    }
    *(int **)(pPVar1 + -0x154) = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    (**(code **)**(undefined4 **)(pPVar1 + -0x154))(0xe6,local_20);
    (**(code **)(**(int **)(pPVar1 + -0x154) + 0x24))(0);
    pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 5;
    if (pIVar3 == (ImagePanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,(Image *)0x0);
    }
    *(int **)(pPVar1 + -0x110) = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    (**(code **)**(undefined4 **)(pPVar1 + -0x110))(0xe6,local_20);
    (**(code **)(**(int **)(pPVar1 + -0x110) + 0x24))(0);
    pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 6;
    if (pIVar3 == (ImagePanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,(Image *)0x0);
    }
    *(int **)(pPVar1 + -0xcc) = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    (**(code **)**(undefined4 **)(pPVar1 + -0xcc))(0xe6,local_20);
    (**(code **)(**(int **)(pPVar1 + -0xcc) + 0x24))(0);
    pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
    local_8 = 7;
    if (pIVar3 == (ImagePanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,(Image *)0x0);
    }
    *(int **)(pPVar1 + -0x88) = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    (**(code **)**(undefined4 **)(pPVar1 + -0x88))(0xe6,local_20);
    (**(code **)(**(int **)(pPVar1 + -0x88) + 0x24))(0);
    iVar5 = FUN_100b44cb(0x130);
    local_8 = 8;
    if (iVar5 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_10097020(&PTR_1013b108,0xe6,local_20,0x1a6,0x1e,1,1);
    }
    *(int **)(pPVar1 + -0x1a8) = piVar2;
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0x148));
    puVar4 = (undefined4 *)FUN_100b44cb(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = CDocumentsHandler_Command::vftable;
      puVar4[1] = in_ECX;
      puVar4[2] = local_1c;
    }
    (**(code **)(**(int **)(pPVar1 + -0x1a8) + 0x240))(puVar4);
    local_20 = local_20 + 0x1e;
    local_1c = local_1c + 1;
    pPVar1 = pPVar1 + 4;
  } while (local_1c < 0x11);
  pcStack_c0 = (char *)0x130;
  puStack_c4 = (undefined4 *)0x1002ae3a;
  iVar5 = FUN_100b44cb();
  local_8 = 9;
  if (iVar5 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    pcStack_c0 = (char *)0x1;
    puStack_c4 = (undefined4 *)0x1;
    uStack_c8 = 0x14;
    piVar2 = (int *)FUN_10097020(&PTR_1013b108,0,0,0x14);
  }
  pcStack_c0 = *(char **)(in_ECX + 0x148);
  local_8 = 0xffffffff;
  puStack_c4 = (undefined4 *)0x1002ae7d;
  (**(code **)(*piVar2 + 0x40))();
  puStack_c4 = (undefined4 *)0xc;
  uStack_c8 = 0x1002ae84;
  puStack_c4 = (undefined4 *)FUN_100b44cb();
  if (puStack_c4 == (undefined4 *)0x0) {
    puStack_c4 = (undefined4 *)0x0;
  }
  else {
    *puStack_c4 = CDocumentsHandler_Command::vftable;
    puStack_c4[1] = in_ECX;
    puStack_c4[2] = 0x14;
  }
  uStack_c8 = 0x1002aeaf;
  (**(code **)(*piVar2 + 0x240))();
  uStack_c8 = 0x130;
  iVar5 = FUN_100b44cb();
  local_8 = 10;
  if (iVar5 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_c8 = 1;
    piVar2 = (int *)FUN_10097020(&PTR_1013b108,0,0x22,0x21,0x21,1);
  }
  uStack_c8 = *(undefined4 *)(in_ECX + 0x148);
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CDocumentsHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0x19;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1002b0d0();
  ExceptionList = local_10;
  return;
}

