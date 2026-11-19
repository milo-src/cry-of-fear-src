
void FUN_1001eba0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Panel *in_ECX;
  Panel *pPVar4;
  int iVar5;
  char *pcVar6;
  
  cVar2 = (**(code **)(*(int *)in_ECX + 0x28))();
  if (cVar2 != '\0') {
    if (((*(int *)(in_ECX + 200) != 0) &&
        (*(int **)(in_ECX + *(int *)(in_ECX + 200) * 4 + 0x124) != (int *)0x0)) &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + *(int *)(in_ECX + 200) * 4 + 0x124) + 0x248))(),
       cVar2 == '\0')) {
      *(undefined4 *)(in_ECX + 200) = 0;
      (**(code **)(**(int **)(in_ECX + 0x120) + 0x1fc))(0);
    }
    iVar5 = 1;
    pPVar4 = in_ECX + 0xec;
    do {
      if (((*(int **)(pPVar4 + 0x3c) != (int *)0x0) &&
          (cVar2 = (**(code **)(**(int **)(pPVar4 + 0x3c) + 0x248))(), cVar2 != '\0')) &&
         ((*(int *)(in_ECX + 200) != iVar5 && (*(int *)pPVar4 != 0)))) {
        *(int *)(in_ECX + 200) = iVar5;
        switch(*(int *)pPVar4) {
        case 1:
          pcVar6 = "gfx/vgui/ammo/glock_check.tga";
          break;
        case 2:
          pcVar6 = "gfx/vgui/ammo/m16_check.tga";
          break;
        case 3:
          pcVar6 = "gfx/vgui/ammo/p345_check.tga";
          break;
        case 4:
          pcVar6 = "gfx/vgui/ammo/shotgun_check.tga";
          break;
        case 5:
          pcVar6 = "gfx/vgui/ammo/tmp_check.tga";
          break;
        default:
          goto switchD_1001ec33_default;
        }
        iVar1 = **(int **)(in_ECX + 0x120);
        uVar3 = FUN_10008640(pcVar6);
        (**(code **)(iVar1 + 0x1fc))(uVar3);
      }
switchD_1001ec33_default:
      iVar5 = iVar5 + 1;
      pPVar4 = pPVar4 + 4;
    } while (iVar5 < 7);
  }
  vgui::Panel::solve(in_ECX);
  return;
}

