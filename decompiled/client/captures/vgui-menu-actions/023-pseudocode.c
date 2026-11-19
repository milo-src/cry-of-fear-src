
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035e10(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  Panel *in_ECX;
  int iVar5;
  undefined *puVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*(int *)in_ECX + 0x28))();
  if (cVar1 != '\0') {
    iVar5 = 0;
    do {
      if ((((*(int **)(in_ECX + iVar5 * 4 + 200) != (int *)0x0) && (*(int *)(in_ECX + 0x120) != 0))
          && (cVar1 = (**(code **)(**(int **)(in_ECX + iVar5 * 4 + 200) + 0x248))(), cVar1 != '\0'))
         && (*(int *)(in_ECX + 0xc0) != iVar5 + 1)) {
        *(int *)(in_ECX + 0xc0) = iVar5 + 1;
        switch(iVar5) {
        case 0:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x1f) == 0) {
LAB_10036187:
            puVar6 = &DAT_10144f80;
          }
          else {
            puVar6 = &DAT_10144f58;
          }
          break;
        case 1:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x20) == 0) goto LAB_10036187;
          puVar6 = &DAT_10144fa0;
          break;
        case 2:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x400000) == 0) goto LAB_10036187;
          puVar6 = &DAT_10144fbc;
          break;
        case 3:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x80000000) == 0) goto LAB_10036187;
          puVar6 = &DAT_10144ff0;
          break;
        case 4:
          iVar2 = FUN_1006cb10("flashlight");
          if (iVar2 == 0) {
            local_58 = 0;
            local_88 = 0xf2eef0cf;
            uStack_84 = 0xe3eee2e8;
            uStack_80 = 0xf120e7e0;
            uStack_7c = 0xc2cdcf20;
            local_78 = 0xe2202d20;
            uStack_74 = 0xf7feebea;
            uStack_70 = 0xf1f2e5e0;
            uStack_6c = 0xebea2060;
            local_68 = 0xf8e8e2e0;
            uStack_64 = 0xf420e9e5;
            uStack_60 = 0xf0e0edee;
            uStack_5c = 0x2ee0eae8;
          }
          else {
            uVar3 = FUN_1006cb10("flashlight");
            FUN_1000c900(&local_88,&DAT_1014501c,uVar3);
          }
          piVar4 = *(int **)(in_ECX + 0x120);
          if ((_DAT_1018a3f8 & 0x1000000) == 0) {
            (**(code **)(*piVar4 + 0x200))(piVar4,&DAT_10144f80);
          }
          else {
            (**(code **)(*piVar4 + 0x200))(piVar4,&local_88);
          }
          goto LAB_10036193;
        case 5:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x800000) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145074;
          break;
        case 6:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x40) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145084;
          break;
        case 7:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x80000) == 0) goto LAB_10036187;
          puVar6 = &DAT_101450ac;
          break;
        case 8:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x100000) == 0) goto LAB_10036187;
          puVar6 = &DAT_101450b8;
          break;
        case 9:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x200000) == 0) goto LAB_10036187;
          puVar6 = &DAT_101450cc;
          break;
        case 10:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x80) == 0) goto LAB_10036187;
          puVar6 = &DAT_101450dc;
          break;
        case 0xb:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x100) == 0) goto LAB_10036187;
          puVar6 = &DAT_1014510c;
          break;
        case 0xc:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x200) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145134;
          break;
        case 0xd:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x400) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145160;
          break;
        case 0xe:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x800) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145190;
          break;
        case 0xf:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x1000) == 0) goto LAB_10036187;
          puVar6 = &DAT_101451bc;
          break;
        case 0x10:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x2000) == 0) goto LAB_10036187;
          puVar6 = &DAT_101451f0;
          break;
        case 0x11:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x4000) == 0) goto LAB_10036187;
          puVar6 = &DAT_1014521c;
          break;
        case 0x12:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x8000) == 0) goto LAB_10036187;
          puVar6 = &DAT_1014524c;
          break;
        case 0x13:
          piVar4 = *(int **)(in_ECX + 0x120);
          iVar2 = *piVar4;
          if ((_DAT_1018a3f8 & 0x10000) == 0) goto LAB_10036187;
          puVar6 = &DAT_10145274;
          break;
        case 0x14:
          if ((_DAT_1018a3f8 & 0x20000) == 0) {
            puVar6 = &DAT_10144f80;
          }
          else {
            puVar6 = &DAT_1014529c;
          }
          (**(code **)(**(int **)(in_ECX + 0x120) + 0x200))(*(int **)(in_ECX + 0x120),puVar6);
          (**(code **)(**(int **)(in_ECX + 0x120) + 0x21c))(4);
          goto LAB_100361ec;
        default:
          goto switchD_10035e8c_default;
        }
        (**(code **)(iVar2 + 0x200))(piVar4,puVar6);
LAB_10036193:
        (**(code **)(**(int **)(in_ECX + 0x120) + 0x21c))(4);
      }
switchD_10035e8c_default:
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x15);
LAB_100361ec:
    if (((*(int *)(in_ECX + 0x120) != 0) && (*(int *)(in_ECX + 0xc0) != 0)) &&
       (cVar1 = (**(code **)(**(int **)(in_ECX + *(int *)(in_ECX + 0xc0) * 4 + 0xc4) + 0x248))(),
       cVar1 == '\0')) {
      *(undefined4 *)(in_ECX + 0xc0) = 0;
      (**(code **)(**(int **)(in_ECX + 0x120) + 0x200))(*(int **)(in_ECX + 0x120),&PTR_1013b108);
      (**(code **)(**(int **)(in_ECX + 0x120) + 0x21c))(4);
    }
  }
  vgui::Panel::solve(in_ECX);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

