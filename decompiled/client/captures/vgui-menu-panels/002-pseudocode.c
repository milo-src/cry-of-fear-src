
void FUN_1001ecb0(void)

{
  int *piVar1;
  ImagePanel *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  Panel *in_ECX;
  int iVar6;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10131c4f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CBookMenu::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xc4) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc4,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffb8,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xc4) + 8))(&local_14,&local_18);
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 0;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xc4));
  }
  *(int **)(in_ECX + 200) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 200))(local_14,local_18);
  (**(code **)(**(int **)(in_ECX + 200) + 0x24))(1);
  iVar3 = FUN_100b44cb(0x130);
  local_8 = 1;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,local_14,local_18,local_14,local_18,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CBookMenuHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))(&local_14,&local_18);
  iVar6 = DAT_1018f434 + local_18 * -2;
  iVar3 = DAT_1018f430 / 2 - local_14 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar3,iVar6);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,iVar3,iVar6,100,0x32,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CBookMenuHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  iVar5 = FUN_100b44cb(0x130);
  local_8 = 4;
  if (iVar5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,iVar3 + 100,iVar6,100,0x32,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CBookMenuHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(*piVar1 + 0x240))(puVar4);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1001f220();
  ExceptionList = local_10;
  return;
}

