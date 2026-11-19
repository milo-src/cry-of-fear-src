// rea decompile_all
// name: FUN_101208e0
// address: 0x101208e0
// body: available
// range: 0x101208e0-0x10120e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101208e0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  
  DAT_10222f24 = 0;
  pcVar8 = "skyname";
  pbVar3 = *(byte **)(param_1 + 4);
  pbVar4 = pbVar3;
  do {
    bVar2 = *pbVar4;
    bVar9 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_10120920:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_10120925;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar9 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_10120920;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_10120925:
  if (uVar5 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 8);
    pcVar8 = "sv_skyname";
  }
  else {
    pcVar8 = "materialstxt";
    pbVar4 = pbVar3;
    do {
      bVar2 = *pbVar4;
      bVar9 = bVar2 < (byte)*pcVar8;
      if (bVar2 != *pcVar8) {
LAB_10120960:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10120965;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar9 = bVar2 < (byte)pcVar8[1];
      if (bVar2 != pcVar8[1]) goto LAB_10120960;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10120965:
    if (uVar5 != 0) {
      pcVar8 = "sounds";
      pbVar4 = pbVar3;
      do {
        bVar2 = *pbVar4;
        bVar9 = bVar2 < (byte)*pcVar8;
        if (bVar2 != *pcVar8) {
LAB_101209b0:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_101209b5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar9 = bVar2 < (byte)pcVar8[1];
        if (bVar2 != pcVar8[1]) goto LAB_101209b0;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_101209b5:
      if (uVar5 == 0) {
        iVar6 = _atoi(*(char **)(param_1 + 8));
        *(int *)(DAT_10223188 + 0x8c) = iVar6;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar6 = FUN_1000aba0(pbVar3,"nosimon");
      if (iVar6 == 0) {
        iVar6 = FUN_1000aba0(pbVar3,"WaveHeight");
        if (iVar6 != 0) {
          dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
          *(float *)(*(int *)(in_ECX + 4) + 0x148) = (float)((float10)dVar10 * (float10)0.125);
          *(undefined4 *)(param_1 + 0xc) = 1;
          (*DAT_10223034)("sv_wateramp",*(undefined4 *)(*(int *)(in_ECX + 4) + 0x148));
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"MaxRange");
        if (iVar6 != 0) {
          dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
          *(float *)(*(int *)(in_ECX + 4) + 0x1fc) = (float)dVar10;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"chaptertitle");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1d4) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,&DAT_101ca684);
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xe0) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,&DAT_101ca68c);
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xe4) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,&DAT_101ca694);
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xe8) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"player4");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xec) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"customsleeve");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xf0) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"customfingers");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xf4) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"customgloves");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xf8) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"doctormap");
        if (iVar6 != 0) {
          uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(in_ECX + 0xdc) = uVar7;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"startdark");
        if (iVar6 != 0) {
          iVar6 = _atoi(*(char **)(param_1 + 8));
          *(undefined4 *)(param_1 + 0xc) = 1;
          if (iVar6 == 0) {
            return;
          }
          puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
          *puVar1 = *puVar1 | 1;
          return;
        }
        iVar6 = FUN_1000aba0(pbVar3,"newunit");
        if (iVar6 == 0) {
          iVar6 = FUN_1000aba0(pbVar3,"gametitle");
          if (iVar6 == 0) {
            iVar6 = FUN_1000aba0(pbVar3,"mapteams");
            if (iVar6 != 0) {
              uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
              *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1b0) = uVar7;
              *(undefined4 *)(param_1 + 0xc) = 1;
              return;
            }
            iVar6 = FUN_1000aba0(pbVar3,"defaultteam");
            if (iVar6 == 0) {
              iVar6 = FUN_1000aba0(pbVar3,"allowmonsters");
              if (iVar6 != 0) {
                dVar10 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
                (*DAT_10223034)("mp_allowmonsters",(float)dVar10);
                *(undefined4 *)(param_1 + 0xc) = 1;
                return;
              }
              iVar6 = FUN_1000aba0(pbVar3,"noitemdropping");
              if (iVar6 == 0) {
                iVar6 = FUN_1000aba0(pbVar3,"lobbymap");
                if (iVar6 != 0) {
                  iVar6 = _atoi(*(char **)(param_1 + 8));
                  *(int *)(*(int *)(in_ECX + 4) + 0x248) = iVar6;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                  return;
                }
                iVar6 = FUN_1000aba0(pbVar3,"dualrevolver");
                if (iVar6 == 0) {
                  FUN_1000dba0(param_1);
                  return;
                }
                iVar6 = _atoi(*(char **)(param_1 + 8));
                *(int *)(*(int *)(in_ECX + 4) + 0x250) = iVar6;
                *(undefined4 *)(param_1 + 0xc) = 1;
                return;
              }
              iVar6 = _atoi(*(char **)(param_1 + 8));
              if (iVar6 != 0) {
                puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
                *puVar1 = *puVar1 | 8;
              }
            }
            else {
              iVar6 = _atoi(*(char **)(param_1 + 8));
              if (iVar6 != 0) {
                puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
                *puVar1 = *puVar1 | 4;
                *(undefined4 *)(param_1 + 0xc) = 1;
                return;
              }
            }
          }
          else {
            iVar6 = _atoi(*(char **)(param_1 + 8));
            if (iVar6 != 0) {
              puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a4);
              *puVar1 = *puVar1 | 2;
              *(undefined4 *)(param_1 + 0xc) = 1;
              return;
            }
          }
        }
        else {
          iVar6 = _atoi(*(char **)(param_1 + 8));
          if (iVar6 != 0) {
            (*DAT_10223034)("sv_newunit",0x3f800000);
            *(undefined4 *)(param_1 + 0xc) = 1;
            return;
          }
        }
      }
      else {
        iVar6 = _atoi(*(char **)(param_1 + 8));
        if (iVar6 != 0) {
          DAT_10222f24 = 1;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 8);
    pcVar8 = "sv_custommaterials";
  }
  (*DAT_10223038)(pcVar8,uVar7);
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

