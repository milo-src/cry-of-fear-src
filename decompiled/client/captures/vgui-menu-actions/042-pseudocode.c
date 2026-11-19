
void FUN_10044ef0(bool param_1)

{
  int *piVar1;
  char cVar2;
  Panel *in_ECX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  Panel *pPVar8;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar5 = 7;
  pPVar8 = in_ECX + 0x100;
  do {
    (**(code **)(**(int **)pPVar8 + 0x24))(0);
    pPVar8 = pPVar8 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
  (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(0);
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0;
  if (param_1 == false) {
    if (*(int **)(in_ECX + 0x154) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x154) + 0x1fc))(0);
    }
    in_ECX[0xe0] = (Panel)0x0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    iVar5 = (*DAT_101b2730)();
    if (iVar5 != 0) {
      pPVar8 = in_ECX + 0x180;
      iVar5 = 5;
      do {
        if ((*(int **)pPVar8 != (int *)0x0) &&
           (cVar2 = (**(code **)(**(int **)pPVar8 + 0x28))(), cVar2 != '\0')) {
          FUN_10097680();
        }
        pPVar8 = pPVar8 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pPVar8 = in_ECX + 0x15c;
      iVar5 = 6;
      do {
        if ((*(int **)pPVar8 != (int *)0x0) &&
           (cVar2 = (**(code **)(**(int **)pPVar8 + 0x28))(), cVar2 != '\0')) {
          FUN_10097680();
        }
        pPVar8 = pPVar8 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_10097680();
      FUN_10097680();
      FUN_10097680();
    }
    (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))(0);
  }
  else {
    if (*(int **)(in_ECX + 0x140) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x140) + 0x1fc))(0);
    }
    if (*(int **)(in_ECX + 0x154) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x154) + 0x1fc))(0);
    }
    in_ECX[0xe0] = (Panel)0x0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    pcVar3 = &DAT_1018d2ec;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    if ((char *)0x2 < pcVar4 + -0x1018d2ec) {
      pcVar3 = &DAT_1018d3ec;
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      if ((char *)0x2 < pcVar4 + -0x1018d3ec) {
        FUN_1003a930(&DAT_1018d2ec,&DAT_1018d3ec);
        iVar5 = *(int *)(DAT_101b2600 + 0x142c);
        pcVar4 = (char *)(iVar5 + 0x404);
        pcVar3 = pcVar4;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        if (2 < (uint)((int)pcVar3 - (iVar5 + 0x405))) {
          uVar6 = 0;
          uVar7 = 0;
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (pcVar4 != (char *)(iVar5 + 0x405)) {
            do {
              cVar2 = *(char *)(iVar5 + 0x404 + uVar7);
              uVar6 = uVar6 + 1;
              if (cVar2 == '@') {
                cVar2 = '\n';
              }
              local_108[uVar7] = cVar2;
              uVar7 = uVar7 + 1;
              iVar5 = *(int *)(DAT_101b2600 + 0x142c);
              pcVar3 = (char *)(iVar5 + 0x404);
              do {
                cVar2 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar2 != '\0');
            } while (uVar7 < (uint)((int)pcVar3 - (iVar5 + 0x405)));
            if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
              ___report_rangecheckfailure();
            }
          }
          piVar1 = *(int **)(in_ECX + 0x1a0);
          local_108[uVar6] = '\0';
          (**(code **)(*piVar1 + 0x200))(piVar1,local_108);
        }
        (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x24))(1);
        goto LAB_100451c7;
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x24))(0);
  }
LAB_100451c7:
  vgui::Panel::setVisible(in_ECX,param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

