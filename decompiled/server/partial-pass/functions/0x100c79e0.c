// rea decompile_all
// name: FUN_100c79e0
// address: 0x100c79e0
// body: available
// range: 0x100c79e0-0x100c7d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c79e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  byte local_408 [256];
  byte local_308 [256];
  byte local_208 [256];
  byte local_108 [256];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pbVar2 = (byte *)(*DAT_102230f4)(param_2,"model");
  uVar3 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  local_108[0] = 0x70;
  local_108[1] = 0x6f;
  local_108[2] = 0x6c;
  local_108[3] = 0x69;
  local_108[4] = 99;
  local_108[5] = 0x65;
  local_108[6] = 0x31;
  local_108[7] = 0;
  local_208[0] = 0x70;
  local_208[1] = 0x6f;
  local_208[2] = 0x6c;
  local_208[3] = 0x69;
  local_208[4] = 99;
  local_208[5] = 0x65;
  local_208[6] = 0x32;
  local_208[7] = 0;
  local_308[0] = 0x70;
  local_308[1] = 0x6f;
  local_308[2] = 0x6c;
  local_308[3] = 0x69;
  local_308[4] = 99;
  local_308[5] = 0x65;
  local_308[6] = 0x33;
  local_308[7] = 0;
  local_408[0] = 0x70;
  local_408[1] = 0x6f;
  local_408[2] = 0x6c;
  local_408[3] = 0x69;
  local_408[4] = 99;
  local_408[5] = 0x65;
  local_408[6] = 0x34;
  local_408[7] = 0;
  if (DAT_10223190 != 0) {
    if (*(int *)(DAT_10223190 + 0xe0) != 0) {
      pbVar5 = local_108;
      pbVar8 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223190 + 0xe0));
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    if (*(int *)(DAT_10223190 + 0xe4) != 0) {
      pbVar5 = local_208;
      pbVar8 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223190 + 0xe4));
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    if (*(int *)(DAT_10223190 + 0xe8) != 0) {
      pbVar5 = local_308;
      pbVar8 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223190 + 0xe8));
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
    if (*(int *)(DAT_10223190 + 0xec) != 0) {
      pbVar5 = local_408;
      pbVar8 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223190 + 0xec));
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
    }
  }
  iVar10 = 1;
  if (*(int *)(DAT_10223188 + 0x90) < 1) {
LAB_100c7d19:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    iVar4 = FUN_10119680(iVar10);
    if ((iVar4 != 0) && (iVar4 == param_1)) {
      switch(iVar10) {
      case 1:
        pbVar8 = local_108;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100c7b97:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100c7b9c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100c7b97;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100c7b9c:
        if (uVar6 != 0) {
          pcVar9 = (char *)local_108;
LAB_100c7cd3:
          uVar7 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),"model",pcVar9);
          (*DAT_102230fc)(uVar3,uVar7);
          (*DAT_10223000)(1,DAT_102266bc,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223004)();
          goto LAB_100c7d19;
        }
        break;
      case 2:
        pbVar8 = local_208;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100c7bd8:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100c7bdd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100c7bd8;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100c7bdd:
        if (uVar6 != 0) {
          pcVar9 = (char *)local_208;
          goto LAB_100c7cd3;
        }
        break;
      case 3:
        pbVar8 = local_308;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100c7c20:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100c7c25;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100c7c20;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100c7c25:
        if (uVar6 != 0) {
          pcVar9 = (char *)local_308;
          goto LAB_100c7cd3;
        }
        break;
      case 4:
        pbVar8 = local_408;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100c7c61:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100c7c66;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100c7c61;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100c7c66:
        if (uVar6 != 0) {
          pcVar9 = (char *)local_408;
          goto LAB_100c7cd3;
        }
        break;
      default:
        pcVar9 = "police1";
        pbVar8 = pbVar2;
        do {
          bVar1 = *pbVar8;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_100c7ca0:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100c7ca5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_100c7ca0;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100c7ca5:
        if (uVar6 != 0) {
          pcVar9 = "police1";
          goto LAB_100c7cd3;
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (*(int *)(DAT_10223188 + 0x90) < iVar10) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

