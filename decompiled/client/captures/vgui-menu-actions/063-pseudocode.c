
void FUN_1002e6c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  Color *pCVar5;
  undefined4 uVar6;
  char *pcVar7;
  LPCSTR ****lpFileName;
  HANDLE hFindFile;
  undefined4 *****pppppuVar8;
  BOOL BVar9;
  int in_ECX;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  _WIN32_FIND_DATAA local_5e4;
  undefined1 local_4a4 [48];
  undefined4 ****local_474 [5];
  uint local_460;
  void *local_45c [4];
  undefined4 local_44c;
  uint local_448;
  void *local_444;
  char local_440 [12];
  undefined4 local_434;
  uint local_430;
  LPCSTR ***local_42c [4];
  undefined4 local_41c;
  undefined1 local_418 [4];
  char local_414 [6];
  undefined1 local_40e [1018];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10132bf5;
  local_10 = ExceptionList;
  uVar4 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar13 = (int *)(in_ECX + 0xc284);
  iVar12 = 0x100;
  local_14 = uVar4;
  do {
    local_8 = 0xffffffff;
    (**(code **)(*(int *)*piVar13 + 0x264))(&DAT_1014387c,uVar4);
    iVar2 = *piVar13;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 0;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x134) = uVar6;
    iVar2 = *piVar13;
    pCVar5 = (Color *)FUN_100b44cb(0xc);
    local_8 = 1;
    if (pCVar5 == (Color *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = vgui::Color::Color(pCVar5,0xff,0xff,0xff,0);
    }
    piVar13 = piVar13 + 1;
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x130) = uVar6;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  *(undefined4 *)(in_ECX + 0xc6a4) = 0;
  *(undefined1 *)(in_ECX + 0xc0) = 0;
  _memset((void *)(in_ECX + 0xc1),0,0xc1c1);
  pcVar7 = (char *)(*DAT_101b2724)();
  pcVar11 = pcVar7;
  do {
    cVar1 = *pcVar11;
    pcVar11[(int)(local_414 + -(int)pcVar7)] = cVar1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)(local_418 + 3);
  do {
    puVar10 = puVar3;
    puVar3 = (undefined4 *)((int)puVar10 + 1);
  } while (*(char *)((int)puVar10 + 1) != '\0');
  *(undefined4 *)((int)puVar10 + 1) = 0x70616d5c;
  *(undefined2 *)((int)puVar10 + 5) = 0x5c73;
  *(undefined1 *)((int)puVar10 + 7) = 0;
  pcVar11 = local_414;
  local_44c = 0;
  local_448 = 0xf;
  local_45c[0] = (void *)((uint)local_45c[0] & 0xffffff00);
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_10024620(local_414,(int)pcVar11 - (int)(local_414 + 1));
  local_444 = (void *)0x75632e2a;
  local_430 = 0xf;
  local_434 = 8;
  builtin_strncpy(local_440,"stom",5);
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_1002c250(local_42c,local_45c,&local_444);
  local_8 = CONCAT31(local_8._1_3_,4);
  lpFileName = local_42c;
  if (0xf < (uint)local_418) {
    lpFileName = (LPCSTR ****)local_42c[0];
  }
  hFindFile = FindFirstFileA((LPCSTR)lpFileName,&local_5e4);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      FUN_1002c2a0(local_474,local_45c,local_5e4.cFileName);
      local_8 = CONCAT31(local_8._1_3_,5);
      pppppuVar8 = local_474;
      if (0xf < local_460) {
        pppppuVar8 = (undefined4 *****)local_474[0];
      }
      iVar12 = FUN_100fe7bf(pppppuVar8,local_4a4);
      if (iVar12 == 0) {
        pcVar11 = (char *)(in_ECX + 0x181);
        iVar12 = 0;
        do {
          if (*pcVar11 == '\0') {
            FUN_1002e340(local_5e4.cFileName,iVar12);
            break;
          }
          iVar12 = iVar12 + 1;
          pcVar11 = pcVar11 + 0xc1;
        } while (iVar12 < 0x100);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      if (0xf < local_460) {
        std::_Deallocate<8,0>(local_474[0],local_460 + 1);
      }
      BVar9 = FindNextFileA(hFindFile,&local_5e4);
    } while (0 < BVar9);
  }
  if (0xf < (uint)local_418) {
    std::_Deallocate<8,0>(local_42c[0],(int)local_418 + 1);
  }
  local_41c = 0;
  local_418 = (undefined1  [4])0xf;
  local_42c[0] = (LPCSTR ***)((uint)local_42c[0] & 0xffffff00);
  if (0xf < local_430) {
    std::_Deallocate<8,0>(local_444,local_430 + 1);
  }
  if (0xf < local_448) {
    std::_Deallocate<8,0>(local_45c[0],local_448 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

