// rea decompile_all
// name: FUN_100ce420
// address: 0x100ce420
// body: available
// range: 0x100ce420-0x100ce822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100ce420(int param_1,FILE *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined1 local_60 [4];
  int local_5c;
  float local_50;
  int local_30;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_3 = 0;
  if (*(int *)(in_ECX + 0x18) < 1) {
    (*DAT_1022303c)(2,"No Nodes!\n");
    return 0;
  }
  local_8 = in_ECX;
  if (param_2 == (FILE *)0x0) {
    (*DAT_1022303c)(2,"**LinkVisibleNodes:\ncan\'t write to file.");
  }
  else {
    _fprintf(param_2,
             "----------------------------------------------------------------------------\n");
    _fprintf(param_2,"LinkVisibleNodes - Initial Connections\n");
    _fprintf(param_2,
             "----------------------------------------------------------------------------\n");
  }
  local_24 = 0;
  local_20 = 0;
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x18)) {
    local_c = 0;
    do {
      iVar8 = 0;
      if (param_2 != (FILE *)0x0) {
        _fprintf(param_2,"Node #%4d:\n\n",local_10);
      }
      local_18 = (int *)(param_1 + local_20 * 0x18 + 8);
      iVar4 = 0x80;
      piVar10 = local_18;
      do {
        piVar10[-2] = local_10;
        piVar10[-1] = 0;
        *piVar10 = 0;
        iVar4 = iVar4 + -1;
        piVar10 = piVar10 + 6;
      } while (iVar4 != 0);
      iVar9 = 0;
      *(int *)(local_c + 0x24 + *(int *)(in_ECX + 0xc)) = local_20;
      iVar4 = *(int *)(local_8 + 0x18);
      if (0 < iVar4) {
        local_1c = 0;
        do {
          if (iVar9 != local_10) {
            iVar4 = local_1c + *(int *)(local_8 + 0xc);
            iVar6 = local_c + *(int *)(local_8 + 0xc);
            if (((*(uint *)(iVar6 + 0x1c) ^ *(uint *)(iVar4 + 0x1c)) & 7) == 0) {
              local_30 = 0;
              local_14 = 0;
              FUN_1011a800(iVar6,iVar4,1,DAT_10231f60,local_60);
              if (local_5c == 0) {
                if (local_50 == 1.0) {
LAB_100ce65a:
                  if (param_2 != (FILE *)0x0) {
                    _fprintf(param_2,"%4d",iVar9);
                    if ((*local_18 != 0) &&
                       (iVar4 = (*DAT_10223060)(*(undefined4 *)(*local_18 + 0x20c)), iVar4 != 0)) {
                      if (local_30 == 0) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = local_30 + 0x80;
                      }
                      iVar6 = *(int *)(DAT_10223188 + 0x98);
                      piVar10 = (int *)&DAT_000001d0;
                      if (local_14 != 0) {
                        piVar10 = (int *)(local_14 + 0x250);
                      }
                      _fprintf(param_2,"  Entity on connection: %s, name: %s  Model: %s",
                               *(int *)(-(uint)(local_14 != 0) & local_14 + 0x80U) + iVar6,
                               *piVar10 + iVar6,*(int *)(iVar4 + 0xb8) + iVar6);
                    }
                    _fprintf(param_2,"\n",iVar9);
                  }
                  iVar4 = local_10;
                  iVar8 = iVar8 + 1;
                  local_20 = local_20 + 1;
                  local_18[-1] = iVar9;
                  local_18 = local_18 + 6;
                  if (iVar8 == 0x80) {
                    (*DAT_1022303c)(2,
                                    "**LinkVisibleNodes:\nNode %d has NodeLinks > MAX_NODE_INITIAL_LINKS"
                                    ,local_10);
                    _fprintf(param_2,"** NODE %d HAS NodeLinks > MAX_NODE_INITIAL_LINKS **\n",iVar4)
                    ;
                    *param_3 = iVar4;
                    return 0;
                  }
                  if (*(int *)(local_8 + 0x18) * 0x80 < local_20) {
                    (*DAT_1022303c)(2,
                                    "**LinkVisibleNodes:\nTotalLinks > MAX_NODE_INITIAL_LINKS * NUMNODES"
                                   );
                    *param_3 = local_10;
                    return 0;
                  }
                  if (iVar8 == 0) {
                    _fprintf(param_2,"**NO INITIAL LINKS**\n");
                  }
                  if (local_24 < iVar8) {
                    local_24 = iVar8;
                  }
                  *(int *)(local_c + 0x20 + DAT_102238bc) = iVar8;
                }
                else {
                  local_14 = local_30;
                  FUN_1011a800(local_1c + *(int *)(local_8 + 0xc),local_c + *(int *)(local_8 + 0xc),
                               1,DAT_10231f60,local_60);
                  if (local_30 == local_14) {
                    piVar10 = (int *)(local_30 + 0x80);
                    pcVar5 = "worldspawn";
                    local_28 = (int *)0x0;
                    if (local_30 != 0) {
                      local_28 = piVar10;
                    }
                    pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *local_28);
                    do {
                      bVar1 = *pbVar2;
                      bVar11 = bVar1 < (byte)*pcVar5;
                      if (bVar1 != *pcVar5) {
LAB_100ce5f5:
                        uVar3 = -(uint)bVar11 | 1;
                        goto LAB_100ce5fa;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar2[1];
                      bVar11 = bVar1 < (byte)pcVar5[1];
                      if (bVar1 != pcVar5[1]) goto LAB_100ce5f5;
                      pbVar2 = pbVar2 + 2;
                      pcVar5 = pcVar5 + 2;
                    } while (bVar1 != 0);
                    uVar3 = 0;
LAB_100ce5fa:
                    if (uVar3 != 0) {
                      *local_18 = (int)local_28;
                      piVar7 = piVar10;
                      if (local_30 == 0) {
                        piVar7 = (int *)0x0;
                      }
                      local_18[1] = *(int *)(*(int *)(DAT_10223188 + 0x98) + piVar7[0x2e]);
                      piVar7 = piVar10;
                      if (local_30 == 0) {
                        piVar7 = (int *)0x0;
                      }
                      if ((piVar7[0x6a] & 0x10000U) == 0) {
                        if (local_30 == 0) {
                          piVar10 = (int *)0x0;
                        }
                        piVar10[0x6a] = piVar10[0x6a] + 0x10000;
                      }
                      goto LAB_100ce65a;
                    }
                  }
                }
              }
            }
          }
          iVar9 = iVar9 + 1;
          local_1c = local_1c + 0x58;
          iVar4 = *(int *)(local_8 + 0x18);
        } while (iVar9 < iVar4);
      }
      if (param_2 != (FILE *)0x0) {
        _fprintf(param_2,
                 "----------------------------------------------------------------------------\n");
        iVar4 = *(int *)(local_8 + 0x18);
      }
      local_c = local_c + 0x58;
      local_10 = local_10 + 1;
      in_ECX = local_8;
    } while (local_10 < iVar4);
  }
  iVar8 = local_20;
  _fprintf(param_2,"\n%4d Total Initial Connections - %4d Maximum connections for a single node.\n",
           local_20,local_24);
  _fprintf(param_2,
           "----------------------------------------------------------------------------\n\n\n");
  return iVar8;
}

