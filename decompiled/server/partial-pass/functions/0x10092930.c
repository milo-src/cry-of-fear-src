// rea decompile_all
// name: FUN_10092930
// address: 0x10092930
// body: available
// range: 0x10092930-0x10092a72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10092930(void)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  
  iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe0));
  iVar4 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe4));
  if (iVar3 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_10095190(iVar3);
  iVar6 = FUN_10095190(iVar4);
  if (iVar5 == 0) {
    iVar5 = iVar4;
    iVar8 = iVar3;
    if (iVar6 == 0) {
      *(uint *)(*(int *)(in_ECX + 4) + 0x14c) = *(uint *)(*(int *)(in_ECX + 4) + 0x14c) & 0xf0 | 2;
      uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      FUN_1009bfc0(uVar7);
      iVar3 = *(int *)(iVar4 + 4);
      goto LAB_100929dd;
    }
LAB_10092a09:
    bVar2 = true;
    *(uint *)(*(int *)(in_ECX + 4) + 0x14c) = *(uint *)(*(int *)(in_ECX + 4) + 0x14c) & 0xf0 | 1;
    iVar3 = iVar5;
    iVar4 = iVar8;
  }
  else {
    iVar5 = iVar3;
    iVar8 = iVar4;
    if (iVar6 == 0) goto LAB_10092a09;
    bVar2 = false;
    puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x14c);
    *puVar1 = *puVar1 & 0xf0;
  }
  iVar3 = *(int *)(iVar3 + 4);
  iVar5 = *(int *)(in_ECX + 4);
  *(undefined8 *)(iVar5 + 8) = *(undefined8 *)(iVar3 + 8);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar4 + 4);
  if (!bVar2) {
    iVar4 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar4 + 0x50) = *(undefined8 *)(iVar3 + 8);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar3 + 0x10);
    FUN_1009a0e0();
    return;
  }
LAB_100929dd:
  uVar7 = (*DAT_10223064)(*(undefined4 *)(iVar3 + 0x20c));
  FUN_1009be80(uVar7);
  FUN_1009a0e0();
  return;
}

