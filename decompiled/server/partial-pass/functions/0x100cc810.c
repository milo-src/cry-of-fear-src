// rea decompile_all
// name: FUN_100cc810
// address: 0x100cc810
// body: available
// range: 0x100cc810-0x100ccb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cc810(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auVar4 [4];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_ECX;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  undefined1 local_214 [4];
  CHAR local_210 [259];
  char cStack_10d;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  (*DAT_102230d4)(local_210);
  puVar2 = (undefined4 *)(local_214 + 3);
  do {
    puVar8 = puVar2;
    puVar2 = (undefined4 *)((int)puVar8 + 1);
  } while (*(char *)((int)puVar8 + 1) != '\0');
  *(undefined4 *)((int)puVar8 + 1) = 0x70616d2f;
  *(undefined2 *)((int)puVar8 + 5) = 0x73;
  CreateDirectoryA(local_210,(LPSECURITY_ATTRIBUTES)0x0);
  pcVar11 = local_214 + 3;
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (pcVar13[1] != '\0');
  builtin_strncpy(pcVar13 + 1,"/graphs",8);
  CreateDirectoryA(local_210,(LPSECURITY_ATTRIBUTES)0x0);
  builtin_strncpy(local_10c + 8,"phs/",5);
  builtin_strncpy(local_10c,"maps/gra",8);
  pcVar11 = param_1;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  pcVar13 = &cStack_10d;
  do {
    pcVar12 = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  pcVar12 = param_1;
  for (uVar9 = (uint)((int)pcVar11 - (int)param_1) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = (int)pcVar11 - (int)param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  pcVar11 = &cStack_10d;
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (pcVar13[1] != '\0');
  builtin_strncpy(pcVar13 + 1,".nod",5);
  piVar3 = (int *)(*DAT_102230c4)(local_10c,local_214);
  if (piVar3 == (int *)0x0) goto LAB_100cc9e5;
  auVar4 = (undefined1  [4])((int)local_214 + -4);
  if (-1 < (int)auVar4) {
    if (*piVar3 == 0x10) {
      local_214 = (undefined1  [4])((int)local_214 + -0x20d0);
      auVar4 = local_214;
      if (-1 < (int)local_214) {
        FUN_10140130();
        piVar14 = piVar3 + 0x834;
        in_ECX[3] = 0;
        in_ECX[4] = 0;
        in_ECX[9] = 0;
        in_ECX[5] = 0;
        in_ECX[0x82f] = 0;
        iVar5 = FUN_10171536(0x58,in_ECX[6]);
        iVar6 = in_ECX[6];
        in_ECX[3] = iVar5;
        if (iVar5 == 0) {
          pcVar11 = "**ERROR**\nCouldn\'t malloc %d nodes!\n";
LAB_100cc9d0:
          (*DAT_1022303c)(2,pcVar11,iVar6);
          auVar4 = local_214;
        }
        else {
          local_214 = (undefined1  [4])((int)local_214 + iVar6 * -0x58);
          auVar4 = local_214;
          if (-1 < (int)local_214) {
            FUN_10140130(iVar5,piVar14,iVar6 * 0x58);
            piVar14 = piVar14 + in_ECX[6] * 0x16;
            iVar5 = FUN_10171536(0x18,in_ECX[7]);
            iVar6 = in_ECX[7];
            in_ECX[4] = iVar5;
            if (iVar5 == 0) {
              pcVar11 = "**ERROR**\nCouldn\'t malloc %d link!\n";
              goto LAB_100cc9d0;
            }
            local_214 = (undefined1  [4])((int)local_214 + iVar6 * -0x18);
            auVar4 = local_214;
            if (-1 < (int)local_214) {
              FUN_10140130(iVar5,piVar14,iVar6 * 0x18);
              piVar14 = piVar14 + in_ECX[7] * 6;
              iVar5 = FUN_10171536(0x10,in_ECX[6]);
              iVar6 = in_ECX[6];
              in_ECX[9] = iVar5;
              if (iVar5 == 0) {
                pcVar11 = "***ERROR**\nCouldn\'t malloc %d entries sorting nodes!\n";
                goto LAB_100cc9d0;
              }
              local_214 = (undefined1  [4])((int)local_214 + iVar6 * -0x10);
              auVar4 = local_214;
              if (-1 < (int)local_214) {
                FUN_10140130(iVar5,piVar14,iVar6 * 0x10);
                iVar5 = in_ECX[6];
                in_ECX[2] = 0;
                iVar6 = FUN_10171536(1,in_ECX[8]);
                in_ECX[5] = iVar6;
                if (iVar6 == 0) {
                  iVar6 = in_ECX[8];
                  pcVar11 = "***ERROR**\nCounldn\'t malloc %d route bytes!\n";
                  goto LAB_100cc9d0;
                }
                iVar6 = 0;
                in_ECX[0x618] = 0;
                if (0 < (int)in_ECX[6]) {
                  iVar10 = 0;
                  do {
                    iVar6 = iVar6 + 1;
                    *(undefined4 *)(iVar10 + 0xc + in_ECX[9]) = 0;
                    iVar10 = iVar10 + 0x10;
                  } while (iVar6 < (int)in_ECX[6]);
                }
                local_214 = (undefined1  [4])((int)local_214 - in_ECX[8]);
                auVar4 = local_214;
                if (-1 < (int)local_214) {
                  FUN_10140130(in_ECX[5],piVar14 + iVar5 * 4,in_ECX[8]);
                  iVar10 = in_ECX[8];
                  in_ECX[2] = 1;
                  iVar7 = FUN_10171536(2,in_ECX[0x830]);
                  iVar6 = in_ECX[0x830];
                  in_ECX[0x82f] = iVar7;
                  if (iVar7 == 0) {
                    pcVar11 = "***ERROR**\nCounldn\'t malloc %d hash link bytes!\n";
                    goto LAB_100cc9d0;
                  }
                  local_214 = (undefined1  [4])((int)local_214 + iVar6 * -2);
                  auVar4 = local_214;
                  if (-1 < (int)local_214) {
                    FUN_10140130(iVar7,(int)(piVar14 + iVar5 * 4) + iVar10,iVar6 * 2);
                    *in_ECX = 1;
                    in_ECX[1] = 0;
                    (*DAT_102230c8)(piVar3);
                    if (local_214 != (undefined1  [4])0x0) {
                      (*DAT_1022303c)(2,
                                      "***WARNING***:Node graph was longer than expected by %d bytes.!\n"
                                      ,local_214);
                    }
                    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_214 = auVar4;
      (*DAT_1022303c)(2,"**ERROR** Graph version is %d, expected %d\n",*piVar3,0x10);
      auVar4 = local_214;
    }
  }
  local_214 = auVar4;
  (*DAT_102230c8)(piVar3);
LAB_100cc9e5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

