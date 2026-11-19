
void FUN_10032340(char *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  BOOL BVar5;
  undefined4 uVar6;
  basic_filebuf<char,struct_std::char_traits<char>_> *pbVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 local_3f4 [4];
  int iStack_3f0;
  undefined **local_3ec;
  basic_filebuf<char,std::char_traits<char>_> local_3e8 [8];
  uint auStack_3e0 [11];
  int aiStack_3b4 [11];
  undefined4 local_388;
  undefined **local_384;
  undefined1 local_33c [20];
  __time64_t local_328;
  int local_320;
  undefined1 local_31c [4];
  char local_318 [6];
  undefined1 local_312 [250];
  char local_218 [255];
  char cStack_119;
  char local_118 [6];
  char acStack_112 [254];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132f8d;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_31c = (undefined1  [4])0x0;
  FUN_1006ee60(local_118,local_14);
  pcVar10 = &cStack_119;
  do {
    pcVar4 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
  } while (*pcVar4 != '\0');
  pcVar10[0] = '/';
  pcVar10[1] = '\0';
  pcVar4 = (char *)(*DAT_101b2724)();
  pcVar10 = pcVar4;
  do {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  pcVar14 = &cStack_119;
  do {
    pcVar12 = pcVar14 + 1;
    pcVar14 = pcVar14 + 1;
  } while (*pcVar12 != '\0');
  pcVar12 = pcVar4;
  for (uVar8 = (uint)((int)pcVar10 - (int)pcVar4) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = (int)pcVar10 - (int)pcVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar10 = &cStack_119;
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (pcVar4[1] != '\0');
  iVar11 = 0;
  builtin_strncpy(pcVar4 + 1,"/SAVE/",7);
  pcVar10 = local_118;
  do {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  if (pcVar10 != local_118 + 1 && -1 < (int)pcVar10 - (int)(local_118 + 1)) {
    do {
      if (local_118[iVar11] == '/') {
        local_118[iVar11] = '\\';
      }
      pcVar10 = local_118;
      iVar11 = iVar11 + 1;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
    } while (iVar11 < (int)pcVar10 - (int)(local_118 + 1));
  }
  cVar3 = FUN_10031dd0(local_118);
  if (cVar3 == '\0') {
    (*DAT_101b26a8)("Creating save directory %s\n",local_118);
    BVar5 = CreateDirectoryA(local_118,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar5 != 0) {
      (*DAT_101b26a8)("Made save directory\n");
    }
  }
  pcVar4 = (char *)(*DAT_101b2724)();
  pcVar10 = pcVar4;
  do {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar10[(int)(local_318 + (-1 - (int)pcVar4))] = cVar3;
  } while (cVar3 != '\0');
  puVar2 = (undefined4 *)(local_31c + 3);
  do {
    puVar9 = puVar2;
    puVar2 = (undefined4 *)((int)puVar9 + 1);
  } while (*(char *)((int)puVar9 + 1) != '\0');
  *(undefined4 *)((int)puVar9 + 1) = 0x5641532f;
  *(undefined2 *)((int)puVar9 + 5) = 0x2f45;
  *(undefined1 *)((int)puVar9 + 7) = 0;
  pcVar10 = param_1;
  do {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  pcVar4 = local_31c + 3;
  do {
    pcVar14 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar14 != '\0');
  local_3ec = &PTR_10141170;
  pcVar14 = param_1;
  for (uVar8 = (uint)((int)pcVar10 - (int)param_1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar8 = (int)pcVar10 - (int)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar4 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar4 = pcVar4 + 1;
  }
  local_8 = 0;
  local_31c = (undefined1  [4])0x1;
  local_384 = std::basic_ostream<char,std::char_traits<char>_>::vftable;
  local_388 = 0x60;
  FUN_10024be0(local_3e8,0);
  local_8 = 2;
  *(undefined ***)(local_3e8 + (int)(local_3ec[1] + -4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(undefined **)((int)&iStack_3f0 + (int)local_3ec[1]) = local_3ec[1] + -0x68;
  FUN_10020d10();
  local_8 = 3;
  iVar11 = FUN_10024e40(local_318,2,0x40);
  uVar13 = 4;
  puVar1 = local_3ec[1];
  uVar8 = 4;
  if (iVar11 == 0) {
    if (*(int *)((int)aiStack_3b4 + (int)puVar1) != 0) {
      uVar8 = 0;
    }
    uVar8 = uVar8 | *(uint *)((int)auStack_3e0 + (int)puVar1) & 0x15 | 2;
    *(uint *)((int)auStack_3e0 + (int)puVar1) = uVar8;
    uVar8 = *(uint *)(puVar1 + (int)(auStack_3e0 + 1)) & uVar8;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        pcVar10 = "ios_base::failbit set";
        if ((uVar8 & 2) == 0) {
          pcVar10 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar10 = "ios_base::badbit set";
      }
      uVar6 = FUN_10024d60(&local_328,1);
      goto LAB_10032798;
    }
  }
  else {
    if (*(int *)((int)aiStack_3b4 + (int)puVar1) != 0) {
      uVar8 = 0;
    }
    *(uint *)((int)auStack_3e0 + (int)puVar1) = uVar8;
    if ((*(uint *)(puVar1 + (int)(auStack_3e0 + 1)) & uVar8) != 0) {
      uVar6 = FUN_10024d60(&local_328,1);
      pcVar10 = "ios_base::badbit set";
      goto LAB_10032798;
    }
  }
  if ((*(byte *)((int)auStack_3e0 + (int)local_3ec[1]) & 6) == 0) {
    FID_conflict___time64(&local_328);
    pcVar4 = FID_conflict___wctime64(&local_328);
    pcVar10 = pcVar4;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar10[(int)(local_312 + (0xf9 - (int)pcVar4))] = cVar3;
    } while (cVar3 != '\0');
    pcVar10 = local_218;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    if (pcVar10[(int)(local_312 + (0xf9 - (int)(local_218 + 1)))] == '\n') {
      if ((char *)0xff < pcVar10 + (-1 - (int)(local_218 + 1))) {
                    /* WARNING: Subroutine does not return */
        ___report_rangecheckfailure();
      }
      local_312[(int)(pcVar10 + (-1 - (int)(local_218 + 1)) + 0xfa)] = 0;
    }
    uVar6 = FUN_10020380(&local_3ec,local_320 + 0xf8,&DAT_101442ac,local_218);
    uVar6 = FUN_10020380(uVar6);
    FUN_10020380(uVar6);
    pbVar7 = std::basic_filebuf<char,std::char_traits<char>_>::close(local_3e8);
    if (pbVar7 == (basic_filebuf<char,struct_std::char_traits<char>_> *)0x0) {
      puVar1 = local_3ec[1];
      if (*(int *)((int)aiStack_3b4 + (int)puVar1) != 0) {
        uVar13 = 0;
      }
      uVar8 = uVar13 | *(uint *)((int)auStack_3e0 + (int)puVar1) & 0x15 | 2;
      *(uint *)((int)auStack_3e0 + (int)puVar1) = uVar8;
      uVar8 = *(uint *)(puVar1 + (int)(auStack_3e0 + 1)) & uVar8;
      if (uVar8 != 0) {
        if ((uVar8 & 4) == 0) {
          pcVar10 = "ios_base::failbit set";
          if ((uVar8 & 2) == 0) {
            pcVar10 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar10 = "ios_base::badbit set";
        }
        uVar6 = FUN_10024d60(local_3f4,1);
LAB_10032798:
        FUN_10021850(pcVar10,uVar6);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_33c,&DAT_1017433c);
      }
    }
  }
  FUN_10022160();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

