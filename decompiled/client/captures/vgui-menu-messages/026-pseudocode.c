
void FUN_1002e340(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_540 [4];
  undefined1 local_53c [4];
  Color *local_538;
  Color *local_534;
  undefined1 local_530 [4];
  undefined1 local_52c [4];
  undefined1 local_528 [4];
  char *local_524;
  int local_520;
  int local_51c;
  int local_518;
  char local_514 [1023];
  char cStack_115;
  undefined4 local_114;
  undefined2 local_110;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132b69;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_524 = param_1;
  local_518 = param_2;
  (*DAT_101b26a8)("PARSING CUSTOM CAMPAIGN: %s\n",param_1,local_14);
  local_114 = 0x7370616d;
  local_110 = 0x2f;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar9 = &cStack_115;
  do {
    pcVar7 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = param_1;
  for (uVar5 = (uint)((int)pcVar6 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = (int)pcVar6 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = (*DAT_101b2744)(&local_114,5,0);
  if (iVar2 == 0) {
    pcVar6 = "PARSING CUSTOM CAMPAIGN: Couldn\'t open campaign file %s\n";
  }
  else {
    for (iVar2 = (*DAT_101b2748)(iVar2,local_514); iVar2 != 0;
        iVar2 = (*DAT_101b2748)(iVar2,local_514)) {
      iVar3 = __stricmp(local_514,"firstmap");
      if (iVar3 == 0) {
        iVar2 = (*DAT_101b2748)(iVar2,local_514);
        iVar8 = local_518 * 0xc1;
        iVar3 = iVar8 + 0xc1;
LAB_1002e49e:
        _strncpy((char *)(iVar3 + in_ECX),local_514,0x40);
        *(undefined1 *)(iVar8 + 0x181 + in_ECX) = 1;
      }
      else {
        iVar3 = __stricmp(local_514,"author");
        if (iVar3 == 0) {
          iVar2 = (*DAT_101b2748)(iVar2,local_514);
          iVar8 = local_518 * 0xc1;
          iVar3 = iVar8 + 0x141;
          goto LAB_1002e49e;
        }
        iVar3 = __stricmp(local_514,"description");
        if (iVar3 == 0) {
          iVar2 = (*DAT_101b2748)(iVar2,local_514);
          iVar8 = local_518 * 0xc1;
          _strncpy((char *)(iVar8 + 0x101 + in_ECX),local_514,0x40);
          iVar3 = local_518;
          *(undefined1 *)(iVar8 + 0x181 + in_ECX) = 1;
          if (*(int *)(in_ECX + 0xc284 + local_518 * 4) != 0) {
            (**(code **)(**(int **)(in_ECX + 0xc690) + 0xc))(local_514,&local_520,local_528);
            (**(code **)(**(int **)(in_ECX + 0xc284 + iVar3 * 4) + 4))(local_530,local_52c);
            (**(code **)(**(int **)(in_ECX + 0xc284 + iVar3 * 4) + 0x264))(local_514);
            local_51c = *(int *)(in_ECX + 0xc284 + iVar3 * 4);
            local_534 = (Color *)FUN_100b44cb(0xc);
            local_8 = 0;
            if (local_534 == (Color *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = vgui::Color::Color(local_534,0xff,0,0,0);
            }
            local_8 = 0xffffffff;
            *(undefined4 *)(local_51c + 0x130) = uVar4;
            local_51c = *(int *)(in_ECX + 0xc284 + iVar3 * 4);
            local_538 = (Color *)FUN_100b44cb(0xc);
            local_8 = 1;
            if (local_538 == (Color *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = vgui::Color::Color(local_538,0xff,0xff,0xff,0);
            }
            local_8 = 0xffffffff;
            *(undefined4 *)(local_51c + 0x134) = uVar4;
            (**(code **)(**(int **)(in_ECX + 0xc284 + iVar3 * 4) + 0xc))(local_540,local_53c);
            local_520 = (int)((double)local_520 * 1.2);
            (**(code **)(**(int **)(in_ECX + 0xc284 + iVar3 * 4) + 0x21c))(4);
          }
        }
      }
    }
    if (*(char *)(local_518 * 0xc1 + 0x181 + in_ECX) != '\0') goto LAB_1002e6a0;
    pcVar6 = "PARSING CUSTOM CAMPAIGN: Couldn\'t parse data from campaign file %s\n";
  }
  (*DAT_101b26a8)(pcVar6,local_524);
LAB_1002e6a0:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

