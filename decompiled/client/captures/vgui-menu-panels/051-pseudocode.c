
void FUN_1004a730(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  ImagePanel *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  Panel *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Color aCStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1013470d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,param_3,param_4,param_5,param_6);
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 200) = param_2;
  *(undefined ***)in_ECX = CUserDocument::vftable;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xe8) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    iStack_40 = 0x1004a7d2;
    vgui::Color::Color((Color *)&stack0xffffffd4,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xe8) + 8))();
  iVar7 = DAT_1018f430 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb();
  local_8 = 0;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xe8));
  }
  *(int **)(in_ECX + 0xec) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  uStack_44 = 0x1004a875;
  iStack_40 = iVar7 - param_6 / 2;
  (**(code **)**(undefined4 **)(in_ECX + 0xec))();
  uStack_44 = 1;
  uStack_48 = 0x1004a882;
  (**(code **)(**(int **)(in_ECX + 0xec) + 0x24))();
  iVar7 = DAT_1018f430 / 2;
  iVar6 = iVar7 + -0x140;
  iVar8 = DAT_1018f434 / 2;
  iVar9 = iVar8 + -0xf0;
  vgui::Color::Color(aCStack_50,0,0,0,0);
  vgui::Panel::setBgColor();
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xe0) = piVar1;
  if (piVar1 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffa4,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xe0));
  }
  *(int **)(in_ECX + 0xe4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xe4))(iVar6,iVar9);
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x24))(1);
  iVar3 = FUN_100b44cb(0xd4);
  local_8 = 2;
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10096c00("notecancel",iVar7 + -0x145,iVar8 + -0xf5);
  }
  *(int **)(in_ECX + 0xd8) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x40))();
  iVar7 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar7 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,iVar6,iVar9,0x14,0x14,1,1);
  }
  *(int **)(in_ECX + 0xd4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CUserDocumentHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x240))(puVar4);
  uVar5 = FUN_1009d3a0("credits");
  uVar5 = FUN_1009d350(uVar5);
  *(undefined4 *)(in_ECX + 0xdc) = uVar5;
  ExceptionList = local_10;
  return;
}

