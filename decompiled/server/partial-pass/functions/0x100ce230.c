// rea decompile_all
// name: FUN_100ce230
// address: 0x100ce230
// body: available
// range: 0x100ce230-0x100ce410 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100ce230(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  undefined1 local_4c [48];
  int local_1c;
  undefined1 local_14 [12];
  int *local_8;
  
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == (int *)0x0) {
    return (int *)0x0;
  }
  pcVar7 = "func_door";
  pbVar9 = (byte *)(*piVar8 + *(int *)(DAT_10223188 + 0x98));
  pbVar2 = pbVar9;
  do {
    bVar1 = *pbVar2;
    bVar10 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100ce285:
      uVar3 = -(uint)bVar10 | 1;
      goto LAB_100ce28a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar10 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100ce285;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100ce28a:
  local_8 = piVar8;
  if (uVar3 != 0) {
    pcVar7 = "func_door_rotating";
    pbVar2 = pbVar9;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100ce2b5:
        uVar3 = -(uint)bVar10 | 1;
        goto LAB_100ce2ba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100ce2b5;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100ce2ba:
    if (uVar3 != 0) {
      (*DAT_1022303c)(2,"Unsupported PathEnt:\n\'%s\'\n",pbVar9);
      return (int *)0x0;
    }
  }
  if ((piVar8[0x69] & 0x100U) == 0) {
    for (iVar4 = FUN_101184e0(0,piVar8[0x74] + *(int *)(DAT_10223188 + 0x98)); iVar4 != 0;
        iVar4 = FUN_101184e0(iVar4,*(int *)(DAT_10223188 + 0x98) + local_8[0x74])) {
      piVar8 = *(int **)(iVar4 + 4);
      pcVar7 = "func_button";
      pbVar9 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar8);
      pbVar2 = pbVar9;
      do {
        bVar1 = *pbVar2;
        bVar10 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100ce350:
          uVar3 = -(uint)bVar10 | 1;
          goto LAB_100ce355;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar10 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100ce350;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100ce355:
      if (uVar3 == 0) {
LAB_100ce389:
        uVar5 = FUN_10012420(local_14,piVar8,1,DAT_10231f60,local_4c);
        FUN_1011a800(param_2,uVar5);
        if (local_1c == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)(local_1c + 0x80);
        }
        if (piVar6 == piVar8) {
          if (local_1c == 0) {
            return (int *)0x0;
          }
          return (int *)(local_1c + 0x80);
        }
      }
      else {
        pcVar7 = "func_rot_button";
        do {
          bVar1 = *pbVar9;
          bVar10 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100ce380:
            uVar3 = -(uint)bVar10 | 1;
            goto LAB_100ce385;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar10 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100ce380;
          pbVar9 = pbVar9 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100ce385:
        if (uVar3 == 0) goto LAB_100ce389;
      }
      piVar8 = local_8;
    }
  }
  return piVar8;
}

