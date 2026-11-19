
void FUN_1001ea70(bool param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Panel *in_ECX;
  Panel *pPVar5;
  int *piVar6;
  char *pcVar7;
  
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  if (*(int **)(in_ECX + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x120) + 0x1fc))(0);
  }
  iVar3 = (*DAT_101b2730)();
  if (iVar3 != 0) {
    pPVar5 = in_ECX + 0x128;
    iVar3 = 6;
    do {
      if ((*(int **)pPVar5 != (int *)0x0) &&
         (cVar2 = (**(code **)(**(int **)pPVar5 + 0x28))(), cVar2 != '\0')) {
        FUN_10097680();
      }
      pPVar5 = pPVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(in_ECX + 0x140) != 0) {
      FUN_10097680();
    }
    if (param_1 != false) {
      pPVar5 = in_ECX + 0x108;
      iVar3 = 6;
      do {
        switch(*(int *)(pPVar5 + -0x1c)) {
        case 1:
          piVar6 = *(int **)pPVar5;
          if (piVar6 != (int *)0x0) {
            pcVar7 = "gfx/vgui/ammo/glock_slot.tga";
LAB_1001eb50:
            iVar1 = *piVar6;
            uVar4 = FUN_10008640(pcVar7);
            (**(code **)(iVar1 + 0x1fc))(uVar4);
          }
          break;
        case 2:
          piVar6 = *(int **)pPVar5;
          if (piVar6 != (int *)0x0) {
            pcVar7 = "gfx/vgui/ammo/m16_slot.tga";
            goto LAB_1001eb50;
          }
          break;
        case 3:
          piVar6 = *(int **)pPVar5;
          if (piVar6 != (int *)0x0) {
            pcVar7 = "gfx/vgui/ammo/p345_slot.tga";
            goto LAB_1001eb50;
          }
          break;
        case 4:
          piVar6 = *(int **)pPVar5;
          if (piVar6 != (int *)0x0) {
            pcVar7 = "gfx/vgui/ammo/shotgun_slot.tga";
            goto LAB_1001eb50;
          }
          break;
        case 5:
          piVar6 = *(int **)pPVar5;
          if (piVar6 != (int *)0x0) {
            pcVar7 = "gfx/vgui/ammo/tmp_slot.tga";
            goto LAB_1001eb50;
          }
        }
        pPVar5 = pPVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

