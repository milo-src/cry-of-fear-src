
void FUN_1002eeb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Panel *pPVar7;
  Panel *in_ECX;
  Panel *pPVar8;
  Panel *pPStack_128;
  Panel *pPStack_124;
  Panel *pPStack_120;
  Panel local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  pPStack_120 = (Panel *)0x1002eece;
  iVar5 = (*DAT_101b26d4)();
  if (iVar5 != 0) {
    piVar1 = *(int **)(in_ECX + 0xc6e0);
    iVar5 = (*DAT_101b2718)(0,0x32);
    vgui::Color::Color((Color *)&pPStack_128,0xff,0xff,0xff,iVar5);
    (**(code **)(*piVar1 + 0xc))();
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6b4) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc699] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc6f4);
        uVar6 = FUN_10008640("gfx/vgui/menu/newgame.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc699] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc6f4);
      if (in_ECX[0xc699] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/newgame_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc699] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc6f4) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6b8) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69a] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc6fc);
        uVar6 = FUN_10008640("gfx/vgui/menu/loadgame.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69a] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc6fc);
      if (in_ECX[0xc69a] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/loadgame_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69a] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc6fc) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6bc) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69b] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc704);
        uVar6 = FUN_10008640("gfx/vgui/menu/customc.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69b] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc704);
      if (in_ECX[0xc69b] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/customc_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69b] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc704) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6c0) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69c] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc70c);
        uVar6 = FUN_10008640("gfx/vgui/menu/jserver.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69c] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc70c);
      if (in_ECX[0xc69c] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/jserver_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69c] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc70c) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6c4) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69d] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc714);
        uVar6 = FUN_10008640("gfx/vgui/menu/options.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69d] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc714);
      if (in_ECX[0xc69d] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/options_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69d] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc714) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6c8) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69e] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc71c);
        uVar6 = FUN_10008640("gfx/vgui/menu/language.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69e] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc71c);
      if (in_ECX[0xc69e] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/language_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69e] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc71c) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6cc) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc69f] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc724);
        uVar6 = FUN_10008640("gfx/vgui/menu/unlockables.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc69f] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc724);
      if (in_ECX[0xc69f] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/unlockables_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc69f] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc724) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6d0) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc6a0] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc72c);
        uVar6 = FUN_10008640("gfx/vgui/menu/extras.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc6a0] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc72c);
      if (in_ECX[0xc6a0] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/extras_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc6a0] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc72c) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6d4) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc6a1] != (Panel)0x0) {
        iVar5 = **(int **)(in_ECX + 0xc734);
        uVar6 = FUN_10008640("gfx/vgui/menu/hserver.tga");
        (**(code **)(iVar5 + 0x1fc))(uVar6);
        in_ECX[0xc6a1] = (Panel)0x0;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc734);
      if (in_ECX[0xc6a1] == (Panel)0x0) {
        uVar6 = FUN_10008640("gfx/vgui/menu/hserver_mo.tga");
        (*(code *)puVar2[0x7f])(uVar6);
        (*DAT_101b2660)("ui/3d_rollover.wav",0x3f000000);
        in_ECX[0xc6a1] = (Panel)0x1;
        (**(code **)(**(int **)(in_ECX + 0xc734) + 4))(in_ECX + 0xc6a8,in_ECX + 0xc6ac);
      }
      else {
        iVar5 = (*DAT_101b2718)(0xfffffffd,3,*(undefined4 *)(in_ECX + 0xc6ac));
        (*(code *)*puVar2)(iVar5 + *(int *)(in_ECX + 0xc6a8));
      }
    }
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xc6d8) + 0x248))();
    if (cVar4 == '\0') {
      if (in_ECX[0xc6a2] != (Panel)0x0) {
        pPStack_120 = (Panel *)0x10143748;
        iVar5 = **(int **)(in_ECX + 0xc73c);
        pPStack_124 = (Panel *)0x1002f736;
        pPStack_120 = (Panel *)FUN_10008640();
        pPStack_124 = (Panel *)0x1002f746;
        (**(code **)(iVar5 + 0x1fc))();
        in_ECX[0xc6a2] = (Panel)0x0;
        pPStack_120 = (Panel *)0x1002f754;
        FUN_1002ea30();
      }
    }
    else {
      puVar2 = (undefined4 *)**(int **)(in_ECX + 0xc73c);
      if (in_ECX[0xc6a2] == (Panel)0x0) {
        pPStack_120 = (Panel *)0x10143a20;
        pPStack_124 = (Panel *)0x1002f6b4;
        pPStack_120 = (Panel *)FUN_10008640();
        pPStack_124 = (Panel *)0x1002f6c4;
        (*(code *)puVar2[0x7f])();
        pPStack_124 = (Panel *)0x3f000000;
        pPStack_128 = (Panel *)0x10143128;
        (*DAT_101b2660)();
        pPStack_124 = in_ECX + 0xc6ac;
        in_ECX[0xc6a2] = (Panel)0x1;
        pPStack_128 = in_ECX + 0xc6a8;
        (**(code **)(**(int **)(in_ECX + 0xc73c) + 4))();
      }
      else {
        pPStack_120 = *(Panel **)(in_ECX + 0xc6ac);
        pPStack_124 = (Panel *)0x3;
        pPStack_128 = (Panel *)0xfffffffd;
        iVar5 = (*DAT_101b2718)();
        pPStack_124 = (Panel *)(iVar5 + *(int *)(in_ECX + 0xc6a8));
        pPStack_128 = (Panel *)0x1002f71e;
        (*(code *)*puVar2)();
      }
    }
    pPVar7 = in_ECX + 0xc284;
    bVar3 = false;
    *(undefined4 *)(in_ECX + 0xc694) = 0xffffffff;
    pPVar8 = in_ECX + 0x141;
    iVar5 = 0;
    do {
      pPStack_120 = (Panel *)0x1002f78c;
      cVar4 = (**(code **)(**(int **)pPVar7 + 0x248))();
      if ((cVar4 != '\0') && (*(int *)(in_ECX + 0xc694) != iVar5)) {
        *(int *)(in_ECX + 0xc694) = iVar5;
        if ((pPVar8 == (Panel *)0x0) || (pPVar8[0x40] == (Panel)0x0)) {
          pPStack_124 = *(Panel **)(in_ECX + 0xc68c);
          pPStack_120 = (Panel *)&PTR_1013b108;
          pPStack_128 = (Panel *)0x1002f7eb;
          (**(code **)(*(int *)pPStack_124 + 0x200))();
          pPStack_120 = (Panel *)0x0;
        }
        else {
          pPStack_128 = local_108;
          pPStack_124 = (Panel *)&DAT_10143a3c;
          pPStack_120 = pPVar8;
          FUN_1000c900();
          (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x200))(*(int **)(in_ECX + 0xc68c),local_108);
          pPStack_120 = (Panel *)0x1;
        }
        pPStack_124 = (Panel *)0x1002f7fb;
        (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x24))();
        in_ECX[0xc698] = (Panel)0x1;
      }
      pPStack_120 = (Panel *)0x1002f814;
      cVar4 = (**(code **)(**(int **)pPVar7 + 0x248))();
      if (cVar4 != '\0') {
        *(int *)(in_ECX + 0xc694) = iVar5;
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
      pPVar7 = pPVar7 + 4;
      pPVar8 = pPVar8 + 0xc1;
    } while (iVar5 < 0x100);
    if ((in_ECX[0xc698] == (Panel)0x0) && (-1 < *(int *)(in_ECX + 0xc694))) {
      *(undefined4 *)(in_ECX + 0xc694) = 0xffffffff;
    }
    if (!bVar3) {
      pPStack_120 = (Panel *)0x1002f87d;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x28))();
      if (cVar4 != '\0') {
        pPStack_124 = *(Panel **)(in_ECX + 0xc68c);
        pPStack_120 = (Panel *)&PTR_1013b108;
        pPStack_128 = (Panel *)0x1002f895;
        (**(code **)(*(int *)pPStack_124 + 0x200))();
        pPStack_120 = (Panel *)0x0;
        pPStack_124 = (Panel *)0x1002f8a5;
        (**(code **)(**(int **)(in_ECX + 0xc68c) + 0x24))();
      }
    }
    pPStack_120 = (Panel *)0x1002f8ac;
    vgui::Panel::solve(in_ECX);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

