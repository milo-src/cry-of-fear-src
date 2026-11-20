
void FUN_100a4010(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  InputSignal *pIVar2;
  undefined4 uVar3;
  int *piVar4;
  TextPanel *pTVar5;
  Panel *in_ECX;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10135d09;
  local_10 = ExceptionList;
  uVar1 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  vgui::Panel::Panel(in_ECX,param_1,param_2,param_3,param_4);
  *(undefined ***)in_ECX = TeamFortressViewport::vftable;
  FUN_1009cd10(param_3,param_4);
  local_8 = 0;
  DAT_101b2600 = in_ECX;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 0x13e0) = 0;
  *(undefined4 *)(in_ECX + 0x13d0) = 0;
  *(undefined4 *)(in_ECX + 0x208) = 0;
  *(undefined4 *)(in_ECX + 0x140c) = 0;
  *(undefined4 *)(in_ECX + 0x1420) = 0;
  *(undefined4 *)(in_ECX + 0x1428) = 0;
  *(undefined4 *)(in_ECX + 0x1410) = 0;
  *(undefined4 *)(in_ECX + 0x1424) = 0;
  *(undefined4 *)(in_ECX + 0x142c) = 0;
  *(undefined4 *)(in_ECX + 0x1418) = 0;
  *(undefined4 *)(in_ECX + 0x1430) = 0;
  *(undefined4 *)(in_ECX + 0x1434) = 0;
  *(undefined4 *)(in_ECX + 0x1438) = 0;
  *(undefined4 *)(in_ECX + 0x143c) = 0;
  *(undefined4 *)(in_ECX + 0x1440) = 0;
  *(undefined4 *)(in_ECX + 0x1444) = 0;
  *(undefined4 *)(in_ECX + 0x1448) = 0;
  *(undefined4 *)(in_ECX + 0x144c) = 0;
  *(undefined4 *)(in_ECX + 0x1454) = 0;
  *(undefined4 *)(in_ECX + 0x1450) = 0;
  *(undefined4 *)(in_ECX + 0x1458) = 0;
  *(undefined4 *)(in_ECX + 0x145c) = 0;
  *(undefined4 *)(in_ECX + 0x1460) = 0;
  *(undefined4 *)(in_ECX + 0x1464) = 0;
  *(undefined4 *)(in_ECX + 0x1468) = 0;
  *(undefined4 *)(in_ECX + 0x146c) = 0;
  *(undefined4 *)(in_ECX + 0x1470) = 0;
  *(undefined4 *)(in_ECX + 0x1474) = 0;
  *(undefined4 *)(in_ECX + 0x1478) = 0;
  *(undefined4 *)(in_ECX + 0x147c) = 0;
  *(undefined4 *)(in_ECX + 0x1480) = 0;
  *(undefined4 *)(in_ECX + 0x1488) = 0;
  *(undefined4 *)(in_ECX + 0x148c) = 0;
  *(undefined4 *)(in_ECX + 0x1490) = 0;
  *(undefined4 *)(in_ECX + 0x1494) = 0;
  *(undefined4 *)(in_ECX + 0x1498) = 0;
  *(undefined4 *)(in_ECX + 0x149c) = 0;
  *(undefined4 *)(in_ECX + 0x14a4) = 0;
  *(undefined4 *)(in_ECX + 0x1404) = 0;
  FUN_100a83c0(uVar1);
  FUN_100a91b0();
  pIVar2 = (InputSignal *)FUN_100b44cb(8);
  if (pIVar2 == (InputSignal *)0x0) {
    pIVar2 = (InputSignal *)0x0;
  }
  else {
    *(undefined ***)pIVar2 = CViewPortInputHandler::vftable;
  }
  vgui::Panel::addInputSignal(in_ECX,pIVar2);
  FUN_100a8590();
  FUN_100a84f0();
  FUN_100a8320();
  FUN_100a8e10();
  *(undefined4 *)(in_ECX + 0x218) = 0;
  *(undefined4 *)(in_ECX + 0x22c) = 0;
  *(undefined4 *)(in_ECX + 0x228) = 0;
  *(undefined4 *)(in_ECX + 0x224) = 0;
  *(undefined4 *)(in_ECX + 0x21c) = 0;
  iVar6 = (int)(((float)DAT_1018f434 / 480.0) * 30.0 + 0.5);
  uVar3 = FUN_100a5370("commandmenu.txt",0,iVar6 * 4,0,
                       (float)(int)(((float)DAT_1018f430 / 640.0) * 160.0 + 0.5),(float)iVar6,0);
  *(undefined4 *)(in_ECX + 0x13d4) = uVar3;
  uVar3 = FUN_100a5370("spectatormenu.txt",1,(int)(((float)DAT_1018f434 / 480.0) * 32.0 + 0.5),1,
                       (float)(int)(((float)DAT_1018f430 / 640.0) * 160.0 + 0.5),
                       (float)((int)(((float)DAT_1018f434 / 480.0) * 30.0 + 0.5) / 2),0);
  *(undefined4 *)(in_ECX + 0x13d8) = uVar3;
  iVar6 = (int)(((float)DAT_1018f430 / 640.0) * 200.0 + 0.5);
  uVar3 = FUN_100a5370("spectcammenu.txt",1,(int)(((float)DAT_1018f434 / 480.0) * 32.0 + 0.5),1,
                       (float)iVar6,(float)((int)(((float)DAT_1018f434 / 480.0) * 30.0 + 0.5) / 2),
                       (DAT_1018f430 - iVar6) + -0xf);
  *(undefined4 *)(in_ECX + 0x13dc) = uVar3;
  FUN_100a86a0();
  iVar6 = FUN_100b44cb(0x164);
  local_8._0_1_ = 1;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10097db0();
  }
  *(int **)(in_ECX + 0x1414) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x1414) + 0x24))(1);
  iVar6 = FUN_100b44cb(0xd4);
  local_8._0_1_ = 2;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100a2520();
  }
  *(int **)(in_ECX + 0x140c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  (**(code **)(**(int **)(in_ECX + 0x140c) + 0x24))(0);
  iVar6 = FUN_100b44cb(0x104c);
  local_8._0_1_ = 3;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100362b0();
  }
  *(int **)(in_ECX + 0x142c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x1e0);
  local_8._0_1_ = 4;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1003e360();
  }
  *(int **)(in_ECX + 0x1418) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x2ec);
  local_8._0_1_ = 5;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1002a8d0();
  }
  *(int **)(in_ECX + 0x1480) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(500);
  local_8._0_1_ = 6;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1009c630();
  }
  *(int **)(in_ECX + 0x1410) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xd0);
  local_8._0_1_ = 7;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1003dbd0();
  }
  *(int **)(in_ECX + 0x1430) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x124);
  local_8._0_1_ = 8;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10045710();
  }
  *(int **)(in_ECX + 0x1438) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc4);
  local_8._0_1_ = 9;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1004a370();
  }
  *(int **)(in_ECX + 0x1448) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xd0);
  local_8._0_1_ = 10;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1004af90();
  }
  *(int **)(in_ECX + 0x144c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(400);
  local_8._0_1_ = 0xb;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10020e20();
  }
  *(int **)(in_ECX + 0x1498) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x1e0);
  local_8._0_1_ = 0xc;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10033cc0();
  }
  *(int **)(in_ECX + 0x1490) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xf8);
  local_8._0_1_ = 0xd;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1001f2b0();
  }
  *(int **)(in_ECX + 0x148c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc4);
  local_8._0_1_ = 0xe;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100304c0();
  }
  *(int **)(in_ECX + 0x1460) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xf4);
  local_8._0_1_ = 0xf;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10032ce0();
  }
  *(int **)(in_ECX + 0x147c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xcc);
  local_8._0_1_ = 0x10;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1001ecb0();
  }
  *(int **)(in_ECX + 0x1494) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x184);
  local_8._0_1_ = 0x11;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100309e0();
  }
  *(int **)(in_ECX + 0x1464) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc4);
  local_8._0_1_ = 0x12;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1002f8c0();
  }
  *(int **)(in_ECX + 0x1478) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc748);
  local_8._0_1_ = 0x13;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1002c390();
  }
  *(int **)(in_ECX + 0x1468) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc4);
  local_8._0_1_ = 0x14;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1002a4d0();
  }
  *(int **)(in_ECX + 0x145c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xf8);
  local_8._0_1_ = 0x15;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1003e870();
  }
  *(int **)(in_ECX + 0x1450) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xd4);
  local_8._0_1_ = 0x16;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1003d300();
  }
  *(int **)(in_ECX + 0x1454) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xc4);
  local_8._0_1_ = 0x17;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10049de0();
  }
  *(int **)(in_ECX + 0x1444) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xe4);
  local_8._0_1_ = 0x18;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10049040();
  }
  *(int **)(in_ECX + 0x143c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x330);
  local_8._0_1_ = 0x19;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1003f850();
  }
  *(int **)(in_ECX + 0x1440) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x1e4);
  local_8._0_1_ = 0x1a;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10040620();
  }
  *(int **)(in_ECX + 0x1474) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(200);
  local_8._0_1_ = 0x1b;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100327e0();
  }
  *(int **)(in_ECX + 0x146c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0x7dc);
  local_8._0_1_ = 0x1c;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10026550();
  }
  *(int **)(in_ECX + 0x1488) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xe0);
  local_8._0_1_ = 0x1d;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10033c00();
  }
  *(int **)(in_ECX + 0x1470) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xd8);
  local_8._0_1_ = 0x1e;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100a31c0();
  }
  *(int **)(in_ECX + 0x141c) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xd0);
  local_8._0_1_ = 0x1f;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_100ad0c0();
  }
  *(int **)(in_ECX + 0x1420) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  iVar6 = FUN_100b44cb(0xbc);
  local_8._0_1_ = 0x20;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_10097ab0();
  }
  *(int **)(in_ECX + 0x1424) = piVar4;
  local_8._0_1_ = 0;
  (**(code **)(*piVar4 + 0x40))();
  pTVar5 = (TextPanel *)FUN_100b44cb(0xd0);
  local_8._0_1_ = 0x21;
  if (pTVar5 == (TextPanel *)0x0) {
    pTVar5 = (TextPanel *)0x0;
  }
  else {
    vgui::TextPanel::TextPanel(pTVar5,(char *)&PTR_1013b108,0,0,DAT_1018f430,DAT_1018f434);
    *(undefined ***)pTVar5 = CScreenMessage::vftable;
    vgui::Panel::setVisible((Panel *)pTVar5,false);
    vgui::Panel::setPaintBackgroundEnabled((Panel *)pTVar5,false);
  }
  *(TextPanel **)(in_ECX + 0x1428) = pTVar5;
  local_8._0_1_ = 0;
  (**(code **)(*(int *)pTVar5 + 0x40))();
  pTVar5 = (TextPanel *)FUN_100b44cb(0xd0);
  local_8._0_1_ = 0x22;
  if (pTVar5 == (TextPanel *)0x0) {
    pTVar5 = (TextPanel *)0x0;
  }
  else {
    vgui::TextPanel::TextPanel(pTVar5,(char *)&PTR_1013b108,0,0,DAT_1018f430,DAT_1018f434);
    *(undefined ***)pTVar5 = CScrollingMessage::vftable;
    vgui::Panel::setVisible((Panel *)pTVar5,false);
    vgui::Panel::setPaintBackgroundEnabled((Panel *)pTVar5,false);
  }
  *(TextPanel **)(in_ECX + 0x14a4) = pTVar5;
  local_8._0_1_ = 0;
  (**(code **)(*(int *)pTVar5 + 0x40))();
  iVar6 = FUN_100b44cb(0x118);
  local_8._0_1_ = 0x23;
  if (iVar6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_1002b1f0();
  }
  *(int **)(in_ECX + 0x149c) = piVar4;
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(*piVar4 + 0x40))();
  ExceptionList = local_10;
  return;
}

