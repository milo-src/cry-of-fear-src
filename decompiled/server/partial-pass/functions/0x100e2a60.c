// rea decompile_all
// name: FUN_100e2a60
// address: 0x100e2a60
// body: available
// range: 0x100e2a60-0x100e2eda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a60(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_58 [16];
  float local_48;
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pbVar2 = (byte *)((int)DAT_10223188[3] + (int)DAT_10223188[0x26]);
  pcVar6 = "c_server_settings";
  pbVar5 = pbVar2;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100e2aa1:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_100e2aa6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100e2aa1;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100e2aa6:
  if (uVar3 != 0) {
    pcVar6 = "c_difficulty_settings";
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100e2ad6:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_100e2adb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100e2ad6;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100e2adb:
    if (uVar3 != 0) {
      pcVar6 = "c_loadgame";
      pbVar5 = pbVar2;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_100e2b10:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_100e2b15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_100e2b10;
        pbVar5 = pbVar5 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100e2b15:
      if (uVar3 != 0) {
        pcVar6 = "c_video_stress_test";
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_100e2b42:
            uVar3 = -(uint)bVar7 | 1;
            goto LAB_100e2b47;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_100e2b42;
          pbVar2 = pbVar2 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100e2b47:
        if ((uVar3 != 0) && (*(int *)(in_ECX + 0x1ea0) == 0)) {
          FUN_100ea630();
          iVar4 = *(int *)(in_ECX + 4);
          switch(*(undefined4 *)(iVar4 + 0x188)) {
          case 99:
            bVar7 = DAT_102264e0 == 0;
            if (bVar7) {
              DAT_102264e0 = (*DAT_10223074)(&DAT_101db950,1);
              iVar4 = *(int *)(in_ECX + 4);
            }
            uVar3 = (uint)bVar7;
            (*DAT_10223000)(1,DAT_102264e0,0,*(undefined4 *)(iVar4 + 0x20c));
            (*DAT_10223008)(uVar3);
            (*DAT_10223004)();
            if (uVar3 == 0) {
              DAT_102264e0 = uVar3;
              *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
              return;
            }
            break;
          case 100:
            FUN_10119320(iVar4 + 0x74);
            iVar4 = *(int *)(in_ECX + 4);
            local_8 = DAT_10223188[0xc];
            local_14 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) + DAT_10223188[10] * 128.0;
            local_10 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) +
                       DAT_10223188[0xb] * 128.0;
            local_c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + local_8 * 128.0;
            local_1c = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
            local_18 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
            local_20 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8);
            FUN_1011a800(&local_20,&local_14,1,*(undefined4 *)(iVar4 + 0x20c),local_58);
            if ((local_28 != 0) && (*(float *)(local_28 + 0x1f0) != 0.0)) {
              (*DAT_1022303c)(1,"+++ Classname is %s\n",
                              (int)DAT_10223188[0x26] + **(int **)(in_ECX + 4));
              (*DAT_1022303c)(1,"+++ Model is %s\n",
                              *(int *)(*(int *)(in_ECX + 4) + 0xb8) + (int)DAT_10223188[0x26]);
              if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x20) != 0) {
                (*DAT_1022303c)(1,"+++ Has monster flag\n");
                *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
                return;
              }
            }
            break;
          default:
            FUN_100dc0d0(*(undefined4 *)(iVar4 + 0x188));
            break;
          case 0xc9:
            if (*(float *)(in_ECX + 0x2664) < *DAT_10223188 ||
                *(float *)(in_ECX + 0x2664) == *DAT_10223188) {
              FUN_10119320(iVar4 + 0x74);
              iVar4 = *(int *)(in_ECX + 4);
              local_8 = DAT_10223188[0xc];
              local_20 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) +
                         DAT_10223188[10] * 128.0;
              local_1c = *(float *)(iVar4 + 0xc) + *(float *)(iVar4 + 0x17c) +
                         DAT_10223188[0xb] * 128.0;
              local_18 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + local_8 * 128.0;
              local_10 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
              local_c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
              local_14 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x178);
              FUN_1011a800(&local_14,&local_20,1,*(undefined4 *)(iVar4 + 0x20c),local_58);
              if (local_48 != 1.0) {
                *(float *)(in_ECX + 0x2664) = *DAT_10223188 + _DAT_102146bc;
                FUN_100da1a0(0);
                FUN_100f4c30(*(undefined4 *)(in_ECX + 4));
                *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
                return;
              }
            }
            break;
          case 0xcc:
            FUN_100dfb80();
            *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
            return;
          }
          *(undefined4 *)(*(int *)(in_ECX + 4) + 0x188) = 0;
        }
      }
    }
  }
  return;
}

