// rea decompile_all
// name: FUN_10098c90
// address: 0x10098c90
// body: available
// range: 0x10098c90-0x10098fe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10098fdb to 0x100a18b0 FUN_100a18b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10098fe5 to 0x100a1a80 FUN_100a1a80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10098c90(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  
  if (*(int *)(in_ECX + 0xe4) == 0) {
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x400) == 0) {
LAB_10098d95:
      *(undefined4 *)(in_ECX + 0xdc) = 0;
    }
    else {
      uVar6 = FUN_1009f400("sprites/null.spr",*(int *)(in_ECX + 4) + 8,1);
      *(undefined4 *)(in_ECX + 0xdc) = uVar6;
    }
  }
  else {
    iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe4));
    if (iVar3 == 0) {
      iVar3 = FUN_1009f400(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe4),
                           *(int *)(in_ECX + 4) + 8,1);
      *(int *)(in_ECX + 0xdc) = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)(in_ECX + 4);
        FUN_10070580(3,(int)*(float *)(iVar3 + 0x154),(int)*(float *)(iVar3 + 0x158),
                     (int)*(float *)(iVar3 + 0x15c),(int)*(float *)(iVar3 + 0x150),
                     *(undefined4 *)(iVar3 + 0x160));
      }
    }
    else {
      pcVar8 = "env_sprite";
      iVar2 = *(int *)(DAT_10223188 + 0x98);
      pbVar4 = (byte *)(**(int **)(iVar3 + 4) + iVar2);
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10098d63:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_10098d68;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10098d63;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10098d68:
      if (uVar5 != 0) {
        (*DAT_1022303c)(4,
                        "env_laser \"%s\" found startsprite %s, but can\'t use: not an env_sprite\n"
                        ,*(int *)(*(int *)(in_ECX + 4) + 0x1d0) + iVar2,
                        *(int *)(in_ECX + 0xe4) + iVar2);
        goto LAB_10098d95;
      }
      *(int *)(in_ECX + 0xdc) = iVar3;
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x108) = 8;
    }
  }
  if (*(int *)(in_ECX + 0xe8) == 0) {
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x400) != 0) {
      uVar6 = FUN_1009f400("sprites/null.spr",*(int *)(in_ECX + 4) + 8,1);
      *(undefined4 *)(in_ECX + 0xe0) = uVar6;
      goto LAB_10098f00;
    }
  }
  else {
    iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8));
    if (iVar3 == 0) {
      iVar3 = FUN_1009f400(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8),
                           *(int *)(in_ECX + 4) + 8,1);
      *(int *)(in_ECX + 0xe0) = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)(in_ECX + 4);
        FUN_10070580(3,(int)*(float *)(iVar3 + 0x154),(int)*(float *)(iVar3 + 0x158),
                     (int)*(float *)(iVar3 + 0x15c),(int)*(float *)(iVar3 + 0x150),
                     *(undefined4 *)(iVar3 + 0x160));
      }
      goto LAB_10098f00;
    }
    pcVar8 = "env_sprite";
    iVar2 = *(int *)(DAT_10223188 + 0x98);
    pbVar4 = (byte *)(**(int **)(iVar3 + 4) + iVar2);
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_10098ec2:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10098ec7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_10098ec2;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10098ec7:
    if (uVar5 == 0) {
      *(int *)(in_ECX + 0xe0) = iVar3;
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x108) = 8;
      goto LAB_10098f00;
    }
    (*DAT_1022303c)(4,"env_laser \"%s\" found endsprite %s, but can\'t use: not an env_sprite\n",
                    *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + iVar2,*(int *)(in_ECX + 0xe8) + iVar2);
  }
  *(undefined4 *)(in_ECX + 0xe0) = 0;
LAB_10098f00:
  if (((*(int *)(in_ECX + 0xdc) == 0) || (*(int *)(in_ECX + 0xe0) == 0)) ||
     ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x400) == 0)) {
    iVar3 = *(int *)(in_ECX + 4) + 8;
    FUN_10098bf0(iVar3,iVar3);
  }
  else {
    uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xe0) + 4) + 0x20c));
    uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xdc) + 4) + 0x20c),uVar6);
    FUN_10094640(uVar7,uVar6);
  }
  if ((*(int *)(*(int *)(in_ECX + 4) + 0x1d0) != 0) &&
     ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0)) {
    FUN_100a18b0();
    return;
  }
  FUN_100a1a80();
  return;
}

