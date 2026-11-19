
void FUN_10032ce0(void)

{
  Panel *this;
  int *piVar1;
  int iVar2;
  ImagePanel *pIVar3;
  undefined4 *puVar4;
  Panel *in_ECX;
  int iVar5;
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
  puStack_c = &LAB_10133153;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_40 = 0x10032d1f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CTelephone::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_40 = 0x10032d57;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))();
  uStack_40 = 0;
  uStack_44 = 0x10032d89;
  (**(code **)*piVar1)();
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0x10032d9b;
  (**(code **)(*piVar1 + 300))();
  uStack_54 = 1;
  pcStack_58 = (char *)0x10032da4;
  (**(code **)(*piVar1 + 0x24))();
  pcStack_58 = "gfx/vgui/backgroundtoall.tga";
  uStack_5c = 0x10032dae;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_58 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_5c = 0x10032dec;
    (*DAT_101b26a8)();
  }
  else {
    iStack_74 = 0x10032dd8;
    vgui::Color::Color(aCStack_60,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))();
  iVar5 = DAT_1018f430 / 2;
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
  uStack_78 = 0x10032e7b;
  iStack_74 = iVar5 - iVar2;
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))();
  uStack_78 = 1;
  pcStack_7c = (char *)0x10032e88;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))();
  pcStack_7c = "gfx/vgui/puzzle/telephone_vgui.tga";
  uStack_80 = 0x10032e92;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xec) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_7c = "Cannot load gfx/vgui/puzzle/telephone_vgui.tga!\n";
    uStack_80 = 0x10032ed0;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_84,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xec) + 8))(&local_14,&local_18);
  iVar5 = DAT_1018f430 / 2;
  iVar2 = DAT_1018f434 / 2;
  pIVar3 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar3 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar3,*(Image **)(in_ECX + 0xec));
  }
  *(int **)(in_ECX + 0xf0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xf0))(iVar5 - local_14 / 2,iVar2 - local_18 / 2);
  (**(code **)(**(int **)(in_ECX + 0xf0) + 0x24))(1);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0,0,0x14,0x14,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xc;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x8c,0x90,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xaf,0x90,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 6;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xd3,0x90,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x8b,0xb2,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 4;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 8;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xae,0xb2,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 5;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 9;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xd2,0xb2,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 6;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 10;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x89,0xd5,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 7;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 0xb;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xad,0xd5,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 8;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 0xc;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xd2,0xd5,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 9;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 0xd;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xad,0xf9,0x1e,0x1e,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 10;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar2 = FUN_100b44cb(0x130);
  local_8 = 0xe;
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xfb,0x120,0x39,0x1b,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xf0));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CTelephoneHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 0xb;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0);
  FUN_10033860();
  ExceptionList = local_10;
  return;
}

