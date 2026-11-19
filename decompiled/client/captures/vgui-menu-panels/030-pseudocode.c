
void FUN_1003dbd0(void)

{
  Panel *this;
  int *piVar1;
  ImagePanel *pIVar2;
  Image *pIVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  Label *this_00;
  Panel *in_ECX;
  int iVar7;
  int iVar8;
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
  puStack_c = &LAB_101338ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_40 = 0x1003dc0f;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CVGUIBillboard::vftable;
  this = (Panel *)FUN_100b44cb();
  local_8 = 0;
  if (this == (Panel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_40 = 0x1003dc47;
    piVar1 = (int *)vgui::Panel::Panel(this,0,0,DAT_1018f430,DAT_1018f434);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(*piVar1 + 8))();
  uStack_40 = 0;
  uStack_44 = 0x1003dc79;
  (**(code **)*piVar1)();
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0x1003dc8b;
  (**(code **)(*piVar1 + 300))();
  uStack_54 = 1;
  pcStack_58 = (char *)0x1003dc94;
  (**(code **)(*piVar1 + 0x24))();
  pcStack_58 = "gfx/vgui/backgroundtoall.tga";
  uStack_5c = 0x1003dc9e;
  piVar1 = (int *)FUN_10008640();
  *(int **)(in_ECX + 0xbc) = piVar1;
  if (piVar1 == (int *)0x0) {
    pcStack_58 = "Cannot load gfx/vgui/backgroundtoall.tga!\n";
    uStack_5c = 0x1003dcdc;
    (*DAT_101b26a8)();
  }
  else {
    vgui::Color::Color(aCStack_60,0xff,0xff,0xff,1);
    (**(code **)(*piVar1 + 0xc))();
  }
  (**(code **)(**(int **)(in_ECX + 0xbc) + 8))(&local_14,&local_18);
  iVar7 = DAT_1018f430 / 2;
  iVar8 = DAT_1018f434 / 2;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 1;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,*(Image **)(in_ECX + 0xbc));
  }
  *(int **)(in_ECX + 0xc0) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc0))(iVar7 - local_14 / 2,iVar8 - local_18 / 2);
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x24))(1);
  iVar7 = FUN_10008640("gfx/vgui/640_gustavdahlwelcome.tga");
  if (iVar7 == 0) {
    (*DAT_101b26a8)("Cannot load gfx/vgui/640_gustavdahlwelcome.tga!\n");
  }
  iVar7 = DAT_1018f430 / 2 + -0x140;
  iVar8 = DAT_1018f434 / 2 + -0xf0;
  pIVar2 = (ImagePanel *)FUN_100b44cb(0xc0);
  local_8 = 2;
  if (pIVar2 == (ImagePanel *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    pIVar3 = (Image *)FUN_10008640("gfx/vgui/640_gustavdahlwelcome.tga");
    piVar1 = (int *)vgui::ImagePanel::ImagePanel(pIVar2,pIVar3);
  }
  *(int **)(in_ECX + 0xc4) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)**(undefined4 **)(in_ECX + 0xc4))(iVar7,iVar8);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))(1);
  iVar4 = FUN_100b44cb(0x130);
  local_8 = 3;
  if (iVar4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10097020(&PTR_1013b108,iVar7,iVar8,0x280,0x1e0,1,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  puVar5 = (undefined4 *)FUN_100b44cb(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = CBillboardHandler_Command::vftable;
    puVar5[1] = in_ECX;
    puVar5[2] = 1;
  }
  (**(code **)(*piVar1 + 0x240))(puVar5);
  local_14 = 0x280;
  local_18 = 0x1e0;
  uVar6 = FUN_1009d3a0("credits");
  FUN_1009d3a0("chaptertitle");
  FUN_1009d3a0("credits");
  uVar6 = FUN_1009d350(uVar6);
  *(undefined4 *)(in_ECX + 0xcc) = uVar6;
  this_00 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 4;
  if (this_00 == (Label *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)vgui::Label::Label(this_00," ",0,0,DAT_1018f430,0x40);
  }
  *(int **)(in_ECX + 200) = piVar1;
  local_8 = 0xffffffff;
  (**(code **)(*piVar1 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 200) + 0x208))(*(undefined4 *)(in_ECX + 0xcc));
  (**(code **)(**(int **)(in_ECX + 200) + 0x120))(0,0,0,0);
  (**(code **)(**(int **)(in_ECX + 200) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 200) + 0x200))(*(int **)(in_ECX + 200),&DAT_10141994);
  (**(code **)(**(int **)(in_ECX + 200) + 0x21c))(4);
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_1003e030();
  ExceptionList = local_10;
  return;
}

