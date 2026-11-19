// rea decompile_all
// name: FUN_1004a6e0
// address: 0x1004a6e0
// body: available
// range: 0x1004a6e0-0x1004ac99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ac95 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a6e0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  basic_filebuf<char,struct_std::char_traits<char>_> *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  undefined2 *puVar18;
  undefined1 local_4e0 [20];
  int local_4cc;
  basic_filebuf<char,std::char_traits<char>_> local_4c8 [8];
  uint auStack_4c0 [11];
  int aiStack_494 [30];
  undefined1 local_41c [4];
  undefined1 local_418 [4];
  char local_414 [4];
  undefined1 local_410 [6];
  char local_40a [1014];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019da90;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    (*DAT_102230d4)(local_414,local_14);
    pcVar11 = local_418 + 3;
    do {
      pcVar10 = pcVar11;
      pcVar11 = pcVar10 + 1;
    } while (pcVar10[1] != '\0');
    builtin_strncpy(pcVar10 + 1,"/txtfiles/",0xb);
    pcVar10 = (char *)(*(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98));
    pcVar11 = pcVar10;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcVar13 = local_418 + 3;
    do {
      pcVar12 = pcVar13 + 1;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    pcVar12 = pcVar10;
    for (uVar7 = (uint)((int)pcVar11 - (int)pcVar10) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = (int)pcVar11 - (int)pcVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    puVar4 = (undefined4 *)(local_418 + 3);
    do {
      puVar8 = puVar4;
      puVar4 = (undefined4 *)((int)puVar8 + 1);
    } while (*(char *)((int)puVar8 + 1) != '\0');
    *(undefined4 *)((int)puVar8 + 1) = 0x6766632e;
    *(undefined1 *)((int)puVar8 + 5) = 0;
    FUN_10049b60(local_414,2,0x40,1);
    local_8 = 0;
    fVar17 = *(float *)(*(int *)(param_1 + 4) + 0x164);
    if (0.0 < fVar17) {
      FUN_100493b0(&local_4cc,"health ",fVar17);
      uVar16 = FUN_1004a350(fVar17);
    }
    else {
      uVar16 = 0x32;
      FUN_100493b0(&local_4cc,"health ",0x32);
      uVar16 = FUN_1004a1a0(uVar16);
    }
    FUN_100493b0(uVar16,&DAT_101a84c8);
    uVar16 = *(undefined4 *)(param_1 + 0x21f0);
    FUN_100493b0(&local_4cc,"stamina ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a350(uVar16);
    FUN_100493b0(uVar16);
    pcVar11 = (char *)(param_1 + 0x204c);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar11 - (param_1 + 0x204d))) {
      uVar16 = FUN_100493b0(&local_4cc,"quicksel1 ",(char *)(param_1 + 0x204c),&DAT_101a84c8);
      uVar16 = FUN_100493b0(uVar16);
      FUN_100493b0(uVar16);
    }
    pcVar11 = (char *)(param_1 + 0x20cc);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar11 - (param_1 + 0x20cd))) {
      uVar16 = FUN_100493b0(&local_4cc,"quicksel2 ",(char *)(param_1 + 0x20cc),&DAT_101a84c8);
      uVar16 = FUN_100493b0(uVar16);
      FUN_100493b0(uVar16);
    }
    pcVar11 = (char *)(param_1 + 0x214c);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar11 - (param_1 + 0x214d))) {
      uVar16 = FUN_100493b0(&local_4cc,"quicksel3 ",(char *)(param_1 + 0x214c),&DAT_101a84c8);
      uVar16 = FUN_100493b0(uVar16);
      FUN_100493b0(uVar16);
    }
    uVar16 = *(undefined4 *)(param_1 + 0x63c);
    FUN_100493b0(&local_4cc,"playerstats_shotsfired ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x640);
    FUN_100493b0(&local_4cc,"playerstats_shotshit ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x644);
    FUN_100493b0(&local_4cc,"playerstats_syringesused ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x670);
    FUN_100493b0(&local_4cc,"playerstats_monsterskilledmelee ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x674);
    FUN_100493b0(&local_4cc,"playerstats_monsterskilledshooting ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x664);
    FUN_100493b0(&local_4cc,"playerstats_seconds ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x668);
    FUN_100493b0(&local_4cc,"playerstats_minutes ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x66c);
    FUN_100493b0(&local_4cc,"playerstats_hours ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    uVar16 = *(undefined4 *)(param_1 + 0x658);
    FUN_100493b0(&local_4cc,"playerstats_damagetaken ",uVar16,&DAT_101a84c8);
    uVar16 = FUN_1004a1a0(uVar16);
    FUN_100493b0(uVar16);
    local_418 = (undefined1  [4])0x6;
    puVar14 = (uint *)(param_1 + 0x2514);
    do {
      uVar7 = *puVar14;
      if (uVar7 != 0) {
        pcVar11 = "weapon_action";
        pbVar9 = (byte *)(**(int **)(uVar7 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar2 = *pbVar9;
          bVar15 = bVar2 < (byte)*pcVar11;
          if (bVar2 != *pcVar11) {
LAB_1004ab35:
            uVar5 = -(uint)bVar15 | 1;
            goto joined_r0x1004ab3c;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar9[1];
          bVar15 = bVar2 < (byte)pcVar11[1];
          if (bVar2 != pcVar11[1]) goto LAB_1004ab35;
          pbVar9 = pbVar9 + 2;
          pcVar11 = pcVar11 + 2;
        } while (bVar2 != 0);
        uVar5 = 0;
joined_r0x1004ab3c:
        while (uVar5 != 0) {
          uVar16 = FUN_100493b0(&local_4cc,**(int **)(uVar7 + 4) + *(int *)(DAT_10223188 + 0x98),
                                &DAT_101a84c8);
          FUN_100493b0(uVar16);
          puVar18 = &DAT_101a84c8;
          uVar16 = FUN_1004a1a0(*(undefined4 *)(uVar7 + 0x1e4));
          FUN_100493b0(uVar16,puVar18);
          puVar18 = &DAT_101a84c8;
          uVar16 = FUN_1004a1a0(*(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar7 + 0x1dc) * 4));
          FUN_100493b0(uVar16,puVar18);
          uVar7 = *(uint *)(uVar7 + 0x164);
          uVar5 = uVar7;
        }
      }
      puVar14 = puVar14 + 1;
      local_418 = (undefined1  [4])((int)local_418 + -1);
    } while (local_418 != (undefined1  [4])0x0);
    FUN_100497e0(&local_4cc);
    pbVar6 = std::basic_filebuf<char,std::char_traits<char>_>::close(local_4c8);
    if (pbVar6 == (basic_filebuf<char,struct_std::char_traits<char>_> *)0x0) {
      iVar3 = *(int *)(local_4cc + 4);
      uVar7 = 4;
      if (*(int *)((int)aiStack_494 + iVar3) != 0) {
        uVar7 = 0;
      }
      uVar7 = uVar7 | *(uint *)((int)auStack_4c0 + iVar3) & 0x15 | 2;
      *(uint *)((int)auStack_4c0 + iVar3) = uVar7;
      uVar7 = *(uint *)((int)auStack_4c0 + iVar3 + 4) & uVar7;
      if (uVar7 != 0) {
        if ((uVar7 & 4) == 0) {
          pcVar11 = "ios_base::failbit set";
          if ((uVar7 & 2) == 0) {
            pcVar11 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar11 = "ios_base::badbit set";
        }
        uVar16 = FUN_10037d50(local_41c,1);
        FUN_10030100(pcVar11,uVar16);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_4e0,&DAT_102048cc);
      }
    }
    FUN_1004a510();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

