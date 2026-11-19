// rea decompile_all
// name: FUN_1010a2f0
// address: 0x1010a2f0
// body: available
// range: 0x1010a2f0-0x1010a3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1010a2f0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar5 = FUN_10107c50(0);
  uVar2 = (*(undefined4 **)(iVar5 + 4))[0x83];
  puVar7 = *(undefined4 **)(in_ECX + 4);
  puVar8 = *(undefined4 **)(iVar5 + 4);
  for (iVar6 = 0xab; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c) = uVar2;
  puVar1 = (uint *)(*(int *)(iVar5 + 4) + 0x1a4);
  *puVar1 = *puVar1 | 0x80000000;
  *(undefined4 *)(iVar5 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  if (*(int *)(in_ECX + 0x17c) != 0) {
    *(int *)(*(int *)(iVar5 + 4) + 0x1d0) = *(int *)(in_ECX + 0x17c);
  }
  *(undefined4 *)(iVar5 + 0x18c) = *(undefined4 *)(in_ECX + 0x18c);
  *(undefined4 *)(iVar5 + 0x178) = *(undefined4 *)(in_ECX + 0x178);
  *(undefined4 *)(iVar5 + 0x16c) = *(undefined4 *)(in_ECX + 0x16c);
  *(undefined4 *)(iVar5 + 0x170) = *(undefined4 *)(in_ECX + 0x170);
  uVar2 = *(undefined4 *)(in_ECX + 0xf0);
  uVar3 = *(undefined4 *)(in_ECX + 0xf4);
  uVar4 = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(iVar5 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(iVar5 + 0xf0) = uVar2;
  *(undefined4 *)(iVar5 + 0xf4) = uVar3;
  *(undefined4 *)(iVar5 + 0xf8) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x100);
  uVar3 = *(undefined4 *)(in_ECX + 0x104);
  uVar4 = *(undefined4 *)(in_ECX + 0x108);
  *(undefined4 *)(iVar5 + 0xfc) = *(undefined4 *)(in_ECX + 0xfc);
  *(undefined4 *)(iVar5 + 0x100) = uVar2;
  *(undefined4 *)(iVar5 + 0x104) = uVar3;
  *(undefined4 *)(iVar5 + 0x108) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x110);
  uVar3 = *(undefined4 *)(in_ECX + 0x114);
  uVar4 = *(undefined4 *)(in_ECX + 0x118);
  *(undefined4 *)(iVar5 + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
  *(undefined4 *)(iVar5 + 0x110) = uVar2;
  *(undefined4 *)(iVar5 + 0x114) = uVar3;
  *(undefined4 *)(iVar5 + 0x118) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x120);
  uVar3 = *(undefined4 *)(in_ECX + 0x124);
  uVar4 = *(undefined4 *)(in_ECX + 0x128);
  *(undefined4 *)(iVar5 + 0x11c) = *(undefined4 *)(in_ECX + 0x11c);
  *(undefined4 *)(iVar5 + 0x120) = uVar2;
  *(undefined4 *)(iVar5 + 0x124) = uVar3;
  *(undefined4 *)(iVar5 + 0x128) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x130);
  uVar3 = *(undefined4 *)(in_ECX + 0x134);
  uVar4 = *(undefined4 *)(in_ECX + 0x138);
  *(undefined4 *)(iVar5 + 300) = *(undefined4 *)(in_ECX + 300);
  *(undefined4 *)(iVar5 + 0x130) = uVar2;
  *(undefined4 *)(iVar5 + 0x134) = uVar3;
  *(undefined4 *)(iVar5 + 0x138) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x140);
  uVar3 = *(undefined4 *)(in_ECX + 0x144);
  uVar4 = *(undefined4 *)(in_ECX + 0x148);
  *(undefined4 *)(iVar5 + 0x13c) = *(undefined4 *)(in_ECX + 0x13c);
  *(undefined4 *)(iVar5 + 0x140) = uVar2;
  *(undefined4 *)(iVar5 + 0x144) = uVar3;
  *(undefined4 *)(iVar5 + 0x148) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x150);
  uVar3 = *(undefined4 *)(in_ECX + 0x154);
  uVar4 = *(undefined4 *)(in_ECX + 0x158);
  *(undefined4 *)(iVar5 + 0x14c) = *(undefined4 *)(in_ECX + 0x14c);
  *(undefined4 *)(iVar5 + 0x150) = uVar2;
  *(undefined4 *)(iVar5 + 0x154) = uVar3;
  *(undefined4 *)(iVar5 + 0x158) = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x160);
  uVar3 = *(undefined4 *)(in_ECX + 0x164);
  uVar4 = *(undefined4 *)(in_ECX + 0x168);
  *(undefined4 *)(iVar5 + 0x15c) = *(undefined4 *)(in_ECX + 0x15c);
  *(undefined4 *)(iVar5 + 0x160) = uVar2;
  *(undefined4 *)(iVar5 + 0x164) = uVar3;
  *(undefined4 *)(iVar5 + 0x168) = uVar4;
  return iVar5;
}

