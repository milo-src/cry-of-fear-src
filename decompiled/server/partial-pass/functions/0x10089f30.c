// rea decompile_all
// name: FUN_10089f30
// address: 0x10089f30
// body: available
// range: 0x10089f30-0x1008a231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10089f30(undefined4 param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = "monster_slower";
  iVar3 = *(int *)(in_ECX + 4);
  pbVar6 = (byte *)(*(int *)(-(uint)(*(int *)(iVar3 + 0x20c) != 0) & *(int *)(iVar3 + 0x20c) + 0x80U
                            ) + *(int *)(DAT_10223188 + 0x98));
  pbVar4 = pbVar6;
  do {
    bVar2 = *pbVar4;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_10089f83:
      uVar5 = -(uint)bVar8 | 1;
      goto LAB_10089f88;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_10089f83;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_10089f88:
  if (uVar5 != 0) {
    pcVar7 = "monster_zombie";
    do {
      bVar2 = *pbVar6;
      bVar8 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_10089fb1:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_10089fb6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar8 = bVar2 < (byte)pcVar7[1];
      if (bVar2 != pcVar7[1]) goto LAB_10089fb1;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10089fb6:
    if (uVar5 != 0) {
      return;
    }
  }
  switch(param_1) {
  case 1:
    if ((*(uint *)(iVar3 + 0x210) & 1) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 1;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_HEAD\n");
      return;
    }
    break;
  case 10:
    if ((*(uint *)(iVar3 + 0x210) & 8) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 2;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 8;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_LOWER_LEFTARM\n");
      return;
    }
    break;
  case 0xb:
    if ((*(uint *)(iVar3 + 0x210) & 0x10) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 2;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 8;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x10;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_UPPER_LEFTARM\n");
      return;
    }
    break;
  case 0xc:
    if ((*(uint *)(iVar3 + 0x210) & 0xc) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 4;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x20;
      (*DAT_1022303c)(1,"Setting HITGROUP_LOWER_RIGHTARM\n");
      return;
    }
    break;
  case 0xd:
    if ((*(uint *)(iVar3 + 0x210) & 0x40) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 4;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x20;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x40;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_UPPER_RIGHTARM\n");
      return;
    }
    break;
  case 0xe:
    if (-1 < (char)*(uint *)(iVar3 + 0x210)) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 0x80;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_LOWER_LEFTLEG\n");
      return;
    }
    break;
  case 0xf:
    if ((*(uint *)(iVar3 + 0x210) & 0x100) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 0x100;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x80;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_UPPER_LEFTLEG\n");
      return;
    }
    break;
  case 0x10:
    if ((*(uint *)(iVar3 + 0x210) & 0x200) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 0x200;
      (*DAT_1022303c)(1,"Setting HITGROUP_LOWER_RIGHTLEG\n");
      return;
    }
    break;
  case 0x11:
    if ((*(uint *)(iVar3 + 0x210) & 0x400) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 0x400;
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x210);
      *puVar1 = *puVar1 | 0x200;
      (*DAT_1022303c)(1,"Setting HITGROUP_UPPER_RIGHTLEG\n");
    }
    break;
  case 0x12:
    if ((*(uint *)(iVar3 + 0x210) & 2) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 2;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_LEFTHAND\n");
      return;
    }
    break;
  case 0x13:
    if ((*(uint *)(iVar3 + 0x210) & 4) == 0) {
      *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 4;
      (*DAT_1022303c)(1,"Setting GOREFLAG_LOST_RIGHTHAND\n");
      return;
    }
  }
  return;
}

