
void FUN_10049de0(void)

{
  int *piVar1;
  ImagePanel *this;
  undefined4 *puVar2;
  Panel *in_ECX;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134641;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CPuzzleBar::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc8,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))(&local_14,&local_18);
  iVar3 = DAT_1018f434 - local_18;
  iVar4 = DAT_1018f430 / 2;
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
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar4 - local_14 / 2,iVar3);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 1;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097080(&PTR_1013b108,0,0,0x14,0x14,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CPuzzleBarHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 5;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 2;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x10,0x4a,0x28,0x28,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CPuzzleBarHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x49,0x4a,0x28,0x28,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CPuzzleBarHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0x80,0x4a,0x28,0x28,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CPuzzleBarHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,0xb8,0x4a,0x28,0x28,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(in_ECX + 0xc0));
  puVar2 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = CPuzzleBarHandler_Command::vftable;
    puVar2[1] = in_ECX;
    puVar2[2] = 4;
  }
  (**(code **)(*piVar1 + 0x240))(puVar2);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1004a250();
  ExceptionList = local_10;
  return;
}

