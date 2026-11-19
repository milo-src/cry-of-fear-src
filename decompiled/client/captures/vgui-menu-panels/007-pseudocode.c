
void FUN_10026550(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Label *pLVar3;
  int *piVar4;
  Panel *in_ECX;
  Panel *pPVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101325a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CCredits::vftable;
  vgui::Panel::setBgColor(in_ECX,0xff,0xff,0xff,0);
  uVar1 = FUN_1009d3a0("credits");
  uVar2 = FUN_1009d3a0("creditstitle");
  uVar1 = FUN_1009d350(uVar1);
  *(undefined4 *)(in_ECX + 2000) = uVar1;
  uVar1 = FUN_1009d350(uVar2);
  *(undefined4 *)(in_ECX + 0x7d4) = uVar1;
  pPVar5 = in_ECX + 0x3c4;
  in_ECX[0x7c5] = (Panel)0x1;
  iVar6 = 0x20;
  do {
    iVar7 = DAT_1018f434;
    pLVar3 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 0;
    if (pLVar3 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar3," ",0,iVar7 + 0x40 + iVar6,DAT_1018f430,0x20);
    }
    *(int **)pPVar5 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))();
    (**(code **)(**(int **)pPVar5 + 0x208))(*(undefined4 *)(in_ECX + 2000));
    (**(code **)(**(int **)pPVar5 + 0x120))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar5 + 300))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar5 + 0x200))(*(int **)pPVar5,&DAT_10141994);
    (**(code **)(**(int **)pPVar5 + 0x21c))(4);
    iVar6 = iVar6 + 0x20;
    pPVar5 = pPVar5 + 4;
  } while (iVar6 < 0x1fe1);
  pPVar5 = in_ECX + 0x238;
  iVar7 = 0x20;
  iVar6 = DAT_1018f434 / 2;
  do {
    pLVar3 = (Label *)FUN_100b44cb(0xd0);
    local_8 = 1;
    if (pLVar3 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar3," ",0,iVar6 + -0x100 + iVar7,DAT_1018f430,0x20);
    }
    *(int **)pPVar5 = piVar4;
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))();
    (**(code **)(**(int **)pPVar5 + 0x208))(*(undefined4 *)(in_ECX + 2000));
    (**(code **)(**(int **)pPVar5 + 0x120))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar5 + 300))(0,0,0,0xff);
    (**(code **)(**(int **)pPVar5 + 0x200))(*(int **)pPVar5,&DAT_10141994);
    (**(code **)(**(int **)pPVar5 + 0x21c))(4);
    (**(code **)(**(int **)pPVar5 + 0x24))(0);
    iVar7 = iVar7 + 0x20;
    pPVar5 = pPVar5 + 4;
  } while (iVar7 < 0x1c1);
  pLVar3 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 2;
  if (pLVar3 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar3," ",0,iVar6 + 0x100,DAT_1018f430,0x2a);
  }
  *(int **)(in_ECX + 0x22c) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  iVar7 = **(int **)(in_ECX + 0x22c);
  uVar1 = FUN_1009d3a0("chaptertitle");
  uVar1 = FUN_1009d350(uVar1);
  (**(code **)(iVar7 + 0x208))(uVar1);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x120))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x200))(*(int **)(in_ECX + 0x22c),&DAT_10141994);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x21c))(4);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x24))(0);
  pLVar3 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 3;
  if (pLVar3 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar3," ",0,iVar6 + 0x100,DAT_1018f430,0x2a);
  }
  *(int **)(in_ECX + 0x230) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  iVar7 = **(int **)(in_ECX + 0x230);
  uVar1 = FUN_1009d3a0("chaptertitle");
  uVar1 = FUN_1009d350(uVar1);
  (**(code **)(iVar7 + 0x208))(uVar1);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x120))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x230) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x200))(*(int **)(in_ECX + 0x230),&DAT_10141994);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x21c))(4);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x24))(0);
  pLVar3 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 4;
  if (pLVar3 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar3,&DAT_10142368,0,iVar6 + -0x10a,DAT_1018f430,0x2a);
  }
  *(int **)(in_ECX + 0x228) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x208))(*(undefined4 *)(in_ECX + 0x7d4));
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x120))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x228) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x200))(*(int **)(in_ECX + 0x228),&DAT_10142368);
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x21c))(4);
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x24))(0);
  pLVar3 = (Label *)FUN_100b44cb(0xd0);
  local_8 = 5;
  if (pLVar3 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Label::Label(pLVar3,"Unlocks",0,iVar6 + -0x10a,DAT_1018f430,0x2a);
  }
  *(int **)(in_ECX + 0x2b4) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x208))(*(undefined4 *)(in_ECX + 0x7d4));
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x120))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 300))(0,0,0,0xff);
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x200))(*(int **)(in_ECX + 0x2b4),"Unlocks");
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x21c))(4);
  (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x24))(0);
  DAT_101b27c0 = (int)(((float)DAT_1018f434 / 480.0) * 25.0 + 0.5);
  pPVar5 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 6;
  if (pPVar5 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar5,0,0,DAT_1018f430,DAT_101b27c0);
  }
  *(int **)(in_ECX + 0xc4) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0xc4) + 8))(DAT_1018f430,DAT_101b27c0);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 300))(0,0,0,0);
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))(1);
  pPVar5 = (Panel *)FUN_100b44cb(0xbc);
  local_8 = 7;
  if (pPVar5 == (Panel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::Panel::Panel(pPVar5,0,DAT_1018f434 - DAT_101b27c0,DAT_1018f430,
                                       DAT_101b27c0);
  }
  *(int **)(in_ECX + 200) = piVar4;
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 200) + 8))(DAT_1018f430,DAT_101b27c0);
  (**(code **)(**(int **)(in_ECX + 200) + 300))(0,0,0,0);
  (**(code **)(**(int **)(in_ECX + 200) + 0x24))(1);
  FUN_10026e40();
  ExceptionList = local_10;
  return;
}

