// rea decompile_all
// name: FUN_1013f300
// address: 0x1013f300
// body: available
// range: 0x1013f300-0x1013f343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

void FUN_1013f300(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  short sVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_SS;
  undefined2 in_FS;
  undefined1 auStack_4 [4];
  int iVar7;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  sVar6 = (short)auStack_4 + -4;
  iVar7 = CONCAT22((short)((uint)auStack_4 >> 0x10),sVar6);
  puVar4 = (undefined4 *)segment(in_SS,sVar6);
  *puVar4 = *puVar1;
  iVar2 = *(int *)(iVar7 + 0x10);
  *(undefined4 *)(iVar7 + 0x10) = unaff_EBP;
  iVar2 = -iVar2;
  *(undefined4 *)(iVar7 + iVar2 + -4) = unaff_EBX;
  *(undefined4 *)(iVar7 + iVar2 + -8) = unaff_ESI;
  *(undefined4 *)(iVar7 + iVar2 + -0xc) = unaff_EDI;
  uVar5 = DAT_1021baf4;
  *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) ^ DAT_1021baf4;
  *(uint *)(iVar7 + iVar2 + -0x10) = uVar5 ^ iVar7 + 0x10U;
  *(int *)(iVar7 + -8) = iVar7 + iVar2 + -0x10;
  *(undefined4 *)(iVar7 + iVar2 + -0x14) = *(undefined4 *)(iVar7 + 8);
  uVar3 = *(undefined4 *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 0xc) = 0xfffffffe;
  *(undefined4 *)(iVar7 + 8) = uVar3;
  uVar3 = segment(in_FS,0);
  *(int *)uVar3 = iVar7;
  return;
}

