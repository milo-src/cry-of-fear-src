
void FUN_1003d300(void)

{
  Panel *this;
  int *piVar1;
  ImagePanel *pIVar2;
  undefined4 *puVar3;
  Panel *in_ECX;
  int iVar4;
  int iVar5;
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
  puStack_c = &LAB_10133875;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_40 = 0x1003d33f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CAnimalStatue::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_40 = 0x1003d377;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  *(int **)(in_ECX + 0xbc) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_40 = 0;
  pcStack_44 = (char *)0x1003d3a6;
  (**(code **)(**(int **)(in_ECX + 0xbc) + 300))();
  pcStack_44 = "gfx/vgui/backgroundtoall.tga";
  uStack_48 = 0x1003d3b0;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc0) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_44 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_48 = 0x1003d3ee;
    (*DAT_101b26a8)();
  }
  else {
    iStack_60 = 0x1003d3da;
    vgui::Color::Color(aCStack_4c,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xc0) + 8))();
  iVar4 = DAT_1018f430 / 2;
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
  uStack_64 = 0x1003d47d;
  iStack_60 = iVar4 - local_14 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0xc4))();
  uStack_64 = 1;
  pcStack_68 = (char *)0x1003d48a;
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))();
  pcStack_68 = "gfx/vgui/640_eagle_button.tga";
  uStack_6c = 0x1003d494;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xcc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_68 = "Cannot load gfx/vgui/640_eagle_button.tga!\n";
    uStack_6c = 0x1003d4d2;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_70,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar5 = DAT_1018f430 / 2;
  iVar4 = DAT_1018f434 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xcc));
  }
  *(int **)(in_ECX + 0xd0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xd0))(iVar5 + -0x140,iVar4 + -0xf0);
  (**(code **)(**(int **)(in_ECX + 0xd0) + 0x24))(1);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0,0,0x280,0x1e0,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xd0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CAnimalStatueHandler_Command::vftable;
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
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x122,0xd2,0x3c,0x3c,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xd0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CAnimalStatueHandler_Command::vftable;
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
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x122,0x14a,0x3c,0x3c,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xd0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CAnimalStatueHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 4;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 6;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xe6,0x10e,0x3c,0x3c,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xd0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CAnimalStatueHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 5;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x15e,0x10e,0x3c,0x3c,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xd0));
  puVar3 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CAnimalStatueHandler_Command::vftable;
    puVar3[1] = in_ECX;
    puVar3[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar3);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1003d940();
  ExceptionList = local_10;
  return;
}

