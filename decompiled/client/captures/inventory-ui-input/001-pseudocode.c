
void FUN_100451f0(void)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  LineBorder *pLVar5;
  int *piVar6;
  char *pcVar7;
  Panel *in_ECX;
  int iVar8;
  Panel *pPVar9;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134104;
  local_10 = ExceptionList;
  uStack_2c = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_30 = 0x10045224;
  cVar4 = (**(code **)(*(int *)in_ECX + 0x28))();
  if (cVar4 != '\0') {
    uStack_30 = 0x10045239;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x28))();
    if (cVar4 != '\0') {
      iVar8 = *(int *)(in_ECX + 0xf4);
      if (DAT_101b2bdd == '\0') {
        if ((0xfe < iVar8) || (*(int *)(in_ECX + 0xf4) = iVar8 + 0xf, 0xfe < iVar8 + 0xf)) {
          DAT_101b2bdd = '\x01';
          *(undefined4 *)(in_ECX + 0xf4) = 0xff;
        }
      }
      else if ((iVar8 < 1) || (*(int *)(in_ECX + 0xf4) = iVar8 + -0xf, iVar8 + -0xf < 1)) {
        DAT_101b2bdd = '\0';
        *(undefined4 *)(in_ECX + 0xf4) = 0;
      }
      uStack_30 = 0x44;
      uStack_34 = 0x100452a3;
      pLVar5 = (LineBorder *)FUN_100b44cb();
      local_8 = 0;
      if (pLVar5 == (LineBorder *)0x0) {
        uStack_30 = 0;
      }
      else {
        vgui::Color::Color((Color *)&puStack_38,0xff,0,0,*(int *)(in_ECX + 0xf4));
        uStack_30 = vgui::LineBorder::LineBorder(pLVar5);
      }
      local_8 = 0xffffffff;
      uStack_34 = 0x100452f2;
      (**(code **)(**(int **)(in_ECX + 0xf8) + 0xd4))();
    }
    if (DAT_10542bb8 != 0) {
      uStack_30 = 0x10045304;
      cVar4 = (**(code **)(*(int *)in_ECX + 0x28))();
      if (cVar4 != '\0') {
        uStack_30 = 0x10045313;
        FUN_100a9120();
        ExceptionList = local_10;
        return;
      }
    }
    uStack_30 = 0x1004532f;
    piVar6 = (int *)(**(code **)(*(int *)in_ECX + 0x14c))();
    uStack_30 = 0;
    uStack_34 = 0;
    puStack_38 = (undefined1 *)0x1004533c;
    cVar4 = (**(code **)(*piVar6 + 0x14))();
    if (cVar4 != '\0') {
      bVar3 = false;
      iVar8 = 7;
      pPVar9 = in_ECX + 0x100;
      do {
        puStack_38 = (undefined1 *)0x1004535c;
        cVar4 = (**(code **)(**(int **)pPVar9 + 0x248))();
        pPVar9 = pPVar9 + 4;
        if (cVar4 != '\0') {
          bVar3 = true;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pPVar9 = in_ECX + 0x100;
      if (!bVar3) {
        iVar8 = 7;
        do {
          puStack_38 = (undefined1 *)0x0;
          (**(code **)(**(int **)pPVar9 + 0x24))();
          pPVar9 = pPVar9 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        puStack_38 = (undefined1 *)iVar8;
        (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))();
      }
    }
    puStack_38 = (undefined1 *)0x100453aa;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x154) + 0x28))();
    if (cVar4 != '\0') {
      puStack_38 = (undefined1 *)0x0;
      (**(code **)(**(int **)(in_ECX + 0x154) + 0x24))();
    }
    pPVar9 = in_ECX + 0x15c;
    iVar8 = 1;
    do {
      puStack_38 = (undefined1 *)0x100453dc;
      cVar4 = (**(code **)(**(int **)pPVar9 + 0x248))();
      if (cVar4 != '\0') {
        puStack_38 = (undefined1 *)iVar8;
        pcVar7 = (char *)FUN_1006cdd0();
        pcVar1 = pcVar7 + 1;
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        if (1 < (uint)((int)pcVar7 - (int)pcVar1)) {
          iVar2 = **(int **)(in_ECX + 0x140);
          puStack_38 = (undefined1 *)iVar8;
          puStack_38 = (undefined1 *)FUN_1006cdd0();
          puStack_38 = (undefined1 *)FUN_1006ee90("check_picture");
          puStack_38 = (undefined1 *)FUN_10008640();
          (**(code **)(iVar2 + 0x1fc))();
          *(int *)(in_ECX + 0x1c0) = iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      pPVar9 = pPVar9 + 4;
    } while (iVar8 < 7);
    puStack_38 = (undefined1 *)0x1004545c;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x194) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 7)) {
      pcVar1 = &DAT_1018d024;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if ((char *)0x1 < pcVar7 + -0x1018d024) {
        *(undefined4 *)(in_ECX + 0x1c0) = 7;
        puStack_38 = &DAT_1018d024;
        iVar8 = **(int **)(in_ECX + 0x140);
        puStack_38 = (undefined1 *)FUN_1006ee90("check_picture");
        puStack_38 = (undefined1 *)FUN_10008640();
        (**(code **)(iVar8 + 0x1fc))();
      }
    }
    puStack_38 = (undefined1 *)0x100454cb;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x198) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 8)) {
      pcVar1 = &DAT_1018d0a4;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if ((char *)0x1 < pcVar7 + -0x1018d0a4) {
        *(undefined4 *)(in_ECX + 0x1c0) = 8;
        puStack_38 = &DAT_1018d0a4;
        iVar8 = **(int **)(in_ECX + 0x140);
        puStack_38 = (undefined1 *)FUN_1006ee90("check_picture");
        puStack_38 = (undefined1 *)FUN_10008640();
        (**(code **)(iVar8 + 0x1fc))();
      }
    }
    puStack_38 = (undefined1 *)0x1004553a;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 9)) {
      pcVar1 = &DAT_1018d124;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if ((char *)0x1 < pcVar7 + -0x1018d124) {
        *(undefined4 *)(in_ECX + 0x1c0) = 9;
        puStack_38 = &DAT_1018d124;
        iVar8 = **(int **)(in_ECX + 0x140);
        puStack_38 = (undefined1 *)FUN_1006ee90("check_picture");
        puStack_38 = (undefined1 *)FUN_10008640();
        (**(code **)(iVar8 + 0x1fc))();
      }
    }
    if (*(int *)(in_ECX + 0x1c0) - 1U < 6) {
      puStack_38 = (undefined1 *)0x100455b9;
      cVar4 = (**(code **)(**(int **)(in_ECX + *(int *)(in_ECX + 0x1c0) * 4 + 0x158) + 0x248))();
      if (cVar4 == '\0') {
        puStack_38 = (undefined1 *)0x0;
        (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))();
        *(undefined4 *)(in_ECX + 0x1c0) = 0;
      }
    }
    if (*(int *)(in_ECX + 0x1c0) == 7) {
      puStack_38 = (undefined1 *)0x100455f0;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x194) + 0x248))();
      if (cVar4 == '\0') {
        puStack_38 = (undefined1 *)0x0;
        (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))();
        *(undefined4 *)(in_ECX + 0x1c0) = 0;
      }
    }
    if (*(int *)(in_ECX + 0x1c0) == 8) {
      puStack_38 = (undefined1 *)0x10045627;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x198) + 0x248))();
      if (cVar4 == '\0') {
        puStack_38 = (undefined1 *)0x0;
        (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))();
        *(undefined4 *)(in_ECX + 0x1c0) = 0;
      }
    }
    if (*(int *)(in_ECX + 0x1c0) == 9) {
      puStack_38 = (undefined1 *)0x1004565e;
      cVar4 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0x248))();
      if (cVar4 == '\0') {
        puStack_38 = (undefined1 *)0x0;
        (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))();
        *(undefined4 *)(in_ECX + 0x1c0) = 0;
      }
    }
    puStack_38 = (undefined1 *)0x1004568c;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x194) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 7)) {
      *(undefined4 *)(in_ECX + 0x1c0) = 7;
    }
    puStack_38 = (undefined1 *)0x100456b3;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x198) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 8)) {
      *(undefined4 *)(in_ECX + 0x1c0) = 8;
    }
    puStack_38 = (undefined1 *)0x100456da;
    cVar4 = (**(code **)(**(int **)(in_ECX + 0x19c) + 0x248))();
    if ((cVar4 != '\0') && (*(int *)(in_ECX + 0x1c0) != 9)) {
      *(undefined4 *)(in_ECX + 0x1c0) = 9;
    }
  }
  uStack_30 = 0x100456f8;
  vgui::Panel::solve(in_ECX);
  ExceptionList = local_10;
  return;
}

