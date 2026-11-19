
void FUN_1002f8c0(void)

{
  int *piVar1;
  ImagePanel *this;
  undefined4 *puVar2;
  Panel *in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132cb5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CLanguage::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffd0,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar4 = DAT_1018f430 / 2;
  iVar3 = DAT_1018f434 / 2;
  this = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (this == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(this,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar4 + -0x140,iVar3 + -0xf0);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 1;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x53,0x40,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 2;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xf1,0x40,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 7;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,399,0x40,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 5;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x53,0xb5,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xf1,0xb5,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 6;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,399,0xb5,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 4;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x53,0x12a,0x9e,0x75,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CLanguageHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 6;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10030100();
  ExceptionList = local_10;
  return;
}

