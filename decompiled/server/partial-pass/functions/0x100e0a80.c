// rea decompile_all
// name: FUN_100e0a80
// address: 0x100e0a80
// body: available
// range: 0x100e0a80-0x100e0cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e0a80(byte *param_1,char param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  
  if (param_1 != (byte *)0x0) {
    pcVar7 = "weapon_famas";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100e0ac0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100e0ac5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100e0ac0;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100e0ac5:
    if ((uVar4 == 0) && (cVar2 = FUN_100dd000(0x40,0,0), cVar2 == '\0')) {
      return;
    }
    pcVar7 = "weapon_axe";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100e0b03:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100e0b08;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100e0b03;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100e0b08:
    if ((uVar4 == 0) && (cVar2 = FUN_100dd000(0x80000,0,0), cVar2 == '\0')) {
      return;
    }
    pcVar7 = "weapon_tmp";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100e0b50:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100e0b55;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100e0b50;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100e0b55:
    if ((((uVar4 == 0) && (param_3 == '\0')) && (iVar5 = FUN_100e4d60(), iVar5 == 0)) &&
       (*(int *)(in_ECX + 0x3b4) == 0)) {
      return;
    }
    pcVar7 = "weapon_mp5";
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100e0ba0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100e0ba5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100e0ba0;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100e0ba5:
    if (((((uVar4 == 0) && (iVar5 = FUN_100e4c30(), iVar5 == 0)) &&
         ((iVar5 = *(int *)(in_ECX + 0xc4), iVar5 != 2 && ((iVar5 != 3 && (iVar5 != 4)))))) &&
        (DAT_10222ee4 != 0)) && (cVar2 = FUN_100af7e0(), cVar2 == '\0')) {
      return;
    }
  }
  iVar5 = (*DAT_10222fa4)((int)param_1 - *(int *)(DAT_10223188 + 0x98));
  if ((iVar5 != 0) && (iVar6 = (*DAT_10223060)(iVar5), iVar6 != 0)) {
    iVar6 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar5 + 0x88) = *(undefined8 *)(iVar6 + 8);
    *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar6 + 0x10);
    *(uint *)(iVar5 + 0x224) = *(uint *)(iVar5 + 0x224) | 0x40000000;
    *(undefined4 *)(iVar5 + 0x2d4) = 1;
    if (DAT_10226488 != '\0') {
      *(undefined4 *)(iVar5 + 0x2d0) = 1;
      DAT_10226488 = '\0';
    }
    if ((*(char *)(in_ECX + 0x1ef8) != '\0') &&
       (iVar6 = FUN_1013f5f0(param_1,"weapon_"), iVar6 != 0)) {
      *(undefined4 *)(iVar5 + 0x234) = 0x3f800000;
    }
    if ((param_2 != '\0') && (iVar6 = FUN_1013f5f0(param_1,"weapon_"), iVar6 != 0)) {
      *(undefined4 *)(iVar5 + 0x234) = 0x40000000;
    }
    FUN_100167d0(iVar5);
    FUN_10016980(iVar5,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    return;
  }
  (*DAT_1022303c)(1,"NULL Ent in GiveNamedItem!\n");
  return;
}

