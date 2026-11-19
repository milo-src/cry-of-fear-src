
void FUN_10040b40(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (param_1 == 1) {
    if (DAT_105431dc == 0) {
      if (*(int *)(DAT_101b2600 + 0x1464) != 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_10097680();
        FUN_10097680();
        FUN_10097680();
        FUN_10097680();
        FUN_10097680();
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xe4) = 0;
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xe8) = 0;
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xec) = 0;
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xf0) = 0;
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0xf4) = 0;
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1464) + 0x178) = 1;
        FUN_10031df0();
        (**(code **)(**(int **)(DAT_101b2600 + 0x1464) + 0x24))(1);
        FUN_100aaad0();
        (*DAT_101b2654)("freeze 1024");
        (*DAT_101b2660)("ui/3d_click.wav",0x3f800000);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      piVar2 = in_ECX + 0x37;
      piVar4 = piVar2;
      do {
        iVar3 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar3 != '\0');
      if ((uint)((int)piVar4 - ((int)in_ECX + 0xdd)) < 3) {
        (*DAT_101b2658)("map c_doc_city");
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      builtin_strncpy(local_108,"map ",5);
      piVar4 = piVar2;
      do {
        iVar3 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar3 != '\0');
      piVar7 = (int *)&stack0xfffffef7;
      do {
        pcVar1 = (char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      } while (*pcVar1 != '\0');
      piVar6 = piVar2;
      for (uVar5 = (uint)((int)piVar4 - (int)piVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar5 = (int)piVar4 - (int)piVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar7 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      (*DAT_101b2658)(local_108);
    }
  }
  else if (param_1 == 2) {
    (**(code **)(*in_ECX + 0x24))(0);
    if (DAT_10542a68 != 0) {
      (*DAT_101b2658)("map c_game_menu1");
      FUN_100aaad0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_101b2654)("closegame");
    FUN_100aaad0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

