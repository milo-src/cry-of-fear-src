// rea decompile_all
// name: FUN_1002a000
// address: 0x1002a000
// body: available
// range: 0x1002a000-0x1002a460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a000(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  bool bVar10;
  int local_10;
  
  puVar9 = (uint *)(param_4 + 0x2514);
  local_10 = 0;
  iVar6 = DAT_10223188;
  while (uVar3 = *puVar9, uVar3 == 0) {
LAB_1002a3fa:
    local_10 = local_10 + 1;
    puVar9 = puVar9 + 1;
    if (5 < local_10) {
      return;
    }
  }
  pcVar7 = "weapon_action";
  pbVar4 = (byte *)(**(int **)(uVar3 + 4) + *(int *)(iVar6 + 0x98));
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a070:
      uVar5 = -(uint)bVar10 | 1;
      goto joined_r0x1002a077;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a070;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
joined_r0x1002a077:
  do {
    if ((uVar5 == 0) ||
       (pcVar7 = (char *)(**(int **)(uVar3 + 4) + *(int *)(iVar6 + 0x98)), pcVar7 == (char *)0x0))
    goto LAB_1002a3fa;
    pcVar8 = pcVar7;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if ((uint)((int)pcVar8 - (int)(pcVar7 + 1)) < 2) goto LAB_1002a3fa;
    iVar6 = FUN_1013f5f0(pcVar7,param_1);
    if (iVar6 != 0) {
      switch(param_2) {
      case 1:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a110:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a115;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a110;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a115:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 0x234) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x238) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x23c) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
        break;
      case 2:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a1a0:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a1a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a1a0;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a1a5:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 0x240) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x244) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x248) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
        break;
      case 3:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a230:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a235;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a230;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a235:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 0x24c) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x250) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x254) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
        break;
      case 4:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a2c0:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a2c5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a2c0;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a2c5:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 600) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x25c) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x260) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
        break;
      case 5:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a350:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a355;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a350;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a355:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 0x264) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x268) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x26c) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
        break;
      case 6:
        pcVar7 = "weapon_action";
        pbVar4 = (byte *)(**(int **)(*puVar9 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_1002a3e0:
            uVar5 = -(uint)bVar10 | 1;
            goto LAB_1002a3e5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_1002a3e0;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1002a3e5:
        if (uVar5 != 0) {
          iVar6 = in_ECX + param_3 * 0x41c;
          *(int *)(iVar6 + 0x270) = **(int **)(uVar3 + 4) + *(int *)(DAT_10223188 + 0x98);
          *(undefined4 *)(iVar6 + 0x274) = *(undefined4 *)(uVar3 + 0x1e4);
          *(undefined4 *)(iVar6 + 0x278) =
               *(undefined4 *)(param_4 + 0x2540 + *(int *)(uVar3 + 0x1dc) * 4);
          return;
        }
      }
    }
    uVar3 = *(uint *)(uVar3 + 0x164);
    iVar6 = DAT_10223188;
    uVar5 = uVar3;
  } while( true );
}

