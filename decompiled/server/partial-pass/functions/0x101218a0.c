// rea decompile_all
// name: FUN_101218a0
// address: 0x101218a0
// body: available
// range: 0x101218a0-0x10121d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101218a0(char param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_110;
  char local_10c [4];
  undefined4 uStack_108;
  char acStack_104 [8];
  undefined8 local_fc;
  undefined1 local_f4;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  _DAT_10231f68 = 0;
  puVar13 = &DAT_10231f70;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  puVar13 = &DAT_10232070;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  DAT_10231f6c = 0;
  DAT_10232270 = 0;
  DAT_10232274 = 0;
  puVar13 = &DAT_10232170;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  if (param_1 == '\0') {
    builtin_strncpy(local_10c,"maps",4);
    uStack_108._0_1_ = '/';
    uStack_108._1_1_ = '\0';
    pcVar8 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
    pcVar9 = pcVar8;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar14 = (char *)((int)&local_110 + 3);
    do {
      pcVar10 = pcVar14 + 1;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = pcVar8;
    for (uVar5 = (uint)((int)pcVar9 - (int)pcVar8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar5 = (int)pcVar9 - (int)pcVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar9 = (char *)((int)&local_110 + 3);
    do {
      pcVar8 = pcVar9;
      pcVar9 = pcVar8 + 1;
    } while (pcVar8[1] != '\0');
    builtin_strncpy(pcVar8 + 1,"_precache.txt",0xe);
  }
  else {
    local_f4 = 0;
    builtin_strncpy(local_10c,"maps",4);
    uStack_108._0_1_ = '/';
    uStack_108._1_1_ = 'g';
    uStack_108._2_1_ = 'l';
    uStack_108._3_1_ = 'o';
    builtin_strncpy(acStack_104,"bal_prec",8);
    local_fc = 0x7478742e65686361;
  }
  iVar7 = (*DAT_102230c4)(local_10c,&local_110);
  if ((iVar7 != 0) && (local_110 != 0)) {
    uVar3 = FUN_100c6de0(iVar7);
    pcVar9 = &DAT_102231a8;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    while (pcVar9 != &DAT_102231a9) {
      pcVar9 = "precache";
      pbVar4 = (byte *)&DAT_102231a8;
      do {
        bVar2 = *pbVar4;
        bVar15 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_10121a40:
          uVar5 = -(uint)bVar15 | 1;
          goto LAB_10121a45;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar15 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_10121a40;
        pbVar4 = pbVar4 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_10121a45:
      if (uVar5 != 0) {
        (*DAT_1022303c)(1,&DAT_101b1774);
        (*DAT_1022303c)(1," * GetTokenFromItem parsing error: %s - unknown token!\n",&DAT_102231a8);
        (*DAT_1022303c)(1," * Probably should be precache\n");
        (*DAT_1022303c)(1,&DAT_101b1774);
        (*DAT_102230c8)(iVar7);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar3 = FUN_100c6de0(uVar3);
      if (DAT_102231a8 != '{') {
        (*DAT_1022303c)(1,&DAT_101b1774);
        (*DAT_1022303c)(1," * GetTokenFromItem parsing error: expecting { after precache\n");
        (*DAT_1022303c)(1,&DAT_101b1774);
        break;
      }
      uVar3 = FUN_100c6de0(uVar3);
      while (DAT_102231a8 != '}') {
        pbVar4 = (byte *)&DAT_102231a8;
        pcVar9 = "model";
        do {
          bVar2 = *pcVar9;
          bVar15 = bVar2 < *pbVar4;
          if (bVar2 != *pbVar4) {
LAB_10121ab0:
            uVar5 = -(uint)bVar15 | 1;
            goto LAB_10121ab5;
          }
          if (bVar2 == 0) break;
          bVar2 = pcVar9[1];
          bVar15 = bVar2 < pbVar4[1];
          if (bVar2 != pbVar4[1]) goto LAB_10121ab0;
          pcVar9 = pcVar9 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_10121ab5:
        if (uVar5 == 0) {
          uVar3 = FUN_100c6de0(uVar3);
          DAT_10231f6c = DAT_10231f6c + 1;
          uVar6 = (*DAT_10223054)(&DAT_102231a8);
          (&DAT_10231f70)[DAT_10231f6c] = uVar6;
        }
        else {
          pbVar4 = (byte *)&DAT_102231a8;
          pcVar9 = "sound";
          do {
            bVar2 = *pcVar9;
            bVar15 = bVar2 < *pbVar4;
            if (bVar2 != *pbVar4) {
LAB_10121b11:
              uVar5 = -(uint)bVar15 | 1;
              goto LAB_10121b16;
            }
            if (bVar2 == 0) break;
            bVar2 = pcVar9[1];
            bVar15 = bVar2 < pbVar4[1];
            if (bVar2 != pbVar4[1]) goto LAB_10121b11;
            pcVar9 = pcVar9 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_10121b16:
          if (uVar5 == 0) {
            uVar3 = FUN_100c6de0(uVar3);
            DAT_10232270 = DAT_10232270 + 1;
            uVar6 = (*DAT_10223054)(&DAT_102231a8);
            (&DAT_10232070)[DAT_10232270] = uVar6;
          }
          else {
            pbVar4 = (byte *)&DAT_102231a8;
            pcVar9 = "sprite";
            do {
              bVar2 = *pcVar9;
              bVar15 = bVar2 < *pbVar4;
              if (bVar2 != *pbVar4) {
LAB_10121b72:
                uVar5 = -(uint)bVar15 | 1;
                goto LAB_10121b77;
              }
              if (bVar2 == 0) break;
              bVar2 = pcVar9[1];
              bVar15 = bVar2 < pbVar4[1];
              if (bVar2 != pbVar4[1]) goto LAB_10121b72;
              pcVar9 = pcVar9 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar2 != 0);
            uVar5 = 0;
LAB_10121b77:
            if (uVar5 == 0) {
              uVar3 = FUN_100c6de0(uVar3);
              DAT_10232274 = DAT_10232274 + 1;
              uVar6 = (*DAT_10223054)(&DAT_102231a8);
              (&DAT_10232170)[DAT_10232274] = uVar6;
            }
            else {
              (*DAT_1022303c)(1,&DAT_101b1774);
              (*DAT_1022303c)(1," * GetTokenFromItem parsing error: %s - unknown section name\n",
                              &DAT_102231a8);
              (*DAT_1022303c)(1,&DAT_101b1774);
            }
          }
        }
        uVar3 = FUN_100c6de0(uVar3);
      }
      _DAT_10231f68 = _DAT_10231f68 + 1;
      uVar3 = FUN_100c6de0(uVar3);
      pcVar9 = &DAT_102231a8;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
    }
    (*DAT_102230c8)(iVar7);
    iVar11 = 1;
    iVar7 = DAT_10231f6c;
    if (0 < DAT_10231f6c) {
      do {
        if ((&DAT_10231f70)[iVar11] != 0) {
          FUN_10116990(*(int *)(DAT_10223188 + 0x98) + (&DAT_10231f70)[iVar11]);
          iVar7 = DAT_10231f6c;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar7);
    }
    iVar12 = 1;
    iVar11 = DAT_10232270;
    if (0 < DAT_10232270) {
      do {
        if ((&DAT_10232070)[iVar12] != 0) {
          FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + (&DAT_10232070)[iVar12]);
          iVar11 = DAT_10232270;
        }
        iVar12 = iVar12 + 1;
        iVar7 = DAT_10231f6c;
      } while (iVar12 <= iVar11);
    }
    iVar11 = 1;
    if (0 < iVar7) {
      do {
        if ((&DAT_10232170)[iVar11] != 0) {
          FUN_10116990(*(int *)(DAT_10223188 + 0x98) + (&DAT_10232170)[iVar11]);
          iVar7 = DAT_10231f6c;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar7);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

