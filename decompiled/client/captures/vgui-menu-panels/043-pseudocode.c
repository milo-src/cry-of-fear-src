
void FUN_10046ad0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  ImagePanel *this;
  Panel *pPVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  Label *this_00;
  Panel *in_ECX;
  int iVar6;
  undefined4 uStack_84;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134337;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,param_3,param_4,param_5,param_6);
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 200) = param_2;
  *(undefined ***)in_ECX = CNoteDocument::vftable;
  *(undefined4 *)(in_ECX + 0x220) = 0;
  FUN_100473f0();
  iVar6 = DAT_1018f430 / 2;
  iVar1 = DAT_1018f434 / 2;
  vgui::Color::Color((Color *)&stack0xffffffd4,0,0,0,0);
  vgui::Panel::setBgColor();
  piVar2 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0x224) = piVar2;
  if (piVar2 == (int *)0x0) {
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color((Color *)&stack0xffffffc8,0xff,0xff,0xff,1);
    (**(code **)(*piVar2 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0x224) + 8))();
  this = (ImagePanel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (ImagePanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::ImagePanel::ImagePanel(this,*(Image **)(in_ECX + 0x224));
  }
  *(int **)(in_ECX + 0x228) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0x228))();
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x24))();
  pPVar3 = (Panel *)FUN_100b44cb();
  local_8 = 1;
  if (pPVar3 == (Panel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::Panel::Panel(pPVar3,0,0,0,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*piVar2 + 300))();
  (**(code **)(*piVar2 + 0x24))();
  pPVar3 = (Panel *)FUN_100b44cb();
  local_8 = 2;
  if (pPVar3 == (Panel *)0x0) {
    pPVar3 = (Panel *)0x0;
  }
  else {
    uStack_84 = 0x10046d17;
    vgui::Panel::Panel(pPVar3,iVar6 + -0x140,iVar1 + -0xf0,0x280,0x1e0);
    *(undefined ***)pPVar3 = CTransparentPanel::vftable;
    *(undefined4 *)(pPVar3 + 0xbc) = 0;
  }
  *(Panel **)(in_ECX + 0xd8) = pPVar3;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pPVar3 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0xd8))();
  piVar2 = *(int **)(in_ECX + 0xd8);
  vgui::Color::Color((Color *)&uStack_84,0,0,0,0xff);
  (**(code **)(*piVar2 + 0x128))();
  iVar1 = FUN_100b44cb(0xd4);
  local_8 = 3;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00(in_ECX + 0xec,0xfffffffb,0xfffffffb);
  }
  *(int **)(in_ECX + 0xdc) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x40))(*(undefined4 *)(in_ECX + 0xd8));
  iVar1 = FUN_100b44cb(0xd4);
  local_8 = 4;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10096c00("notecancel",0xfffffffb,0xfffffffb);
  }
  *(int **)(in_ECX + 0xe0) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x24))(1);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x40))(*(undefined4 *)(in_ECX + 0xd8));
  iVar1 = FUN_100b44cb(0x130);
  local_8 = 5;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10097020(&PTR_1013b108,0,0,0x14,0x14,1,1);
  }
  *(int **)(in_ECX + 0xd4) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xd8));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CNoteDocumentHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xd4) + 0x240))(puVar4);
  iVar1 = FUN_100b44cb(0x130);
  local_8 = 6;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10097020(&PTR_1013b108,0x26,0x19b,0x21,0x21,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xd8));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CNoteDocumentHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 1;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  iVar1 = FUN_100b44cb(0x130);
  local_8 = 7;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_10097020(&PTR_1013b108,0x26,0x1bf,0x21,0x21,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))(*(undefined4 *)(in_ECX + 0xd8));
  puVar4 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = CNoteDocumentHandler_Command::vftable;
    puVar4[1] = in_ECX;
    puVar4[2] = 2;
  }
  (**(code **)(*piVar2 + 0x240))(puVar4);
  uVar5 = FUN_1009d3a0("credits");
  uVar5 = FUN_1009d350(uVar5);
  *(undefined4 *)(in_ECX + 0x22c) = uVar5;
  this_00 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 8;
  if (this_00 == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)vgui::Label::Label(this_00,(char *)&PTR_1013b108,0,0,DAT_1018f430,0x40);
  }
  *(int **)(in_ECX + 0x220) = piVar2;
  local_8 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x220) + 0x208))(*(undefined4 *)(in_ECX + 0x22c));
  (**(code **)(**(int **)(in_ECX + 0x220) + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(**(int **)(in_ECX + 0x220) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x220) + 0x200))(*(int **)(in_ECX + 0x220),&PTR_1013b108);
  (**(code **)(**(int **)(in_ECX + 0x220) + 0x21c))(4);
  ExceptionList = local_10;
  return;
}

