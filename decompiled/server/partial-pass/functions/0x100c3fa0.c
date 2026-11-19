// rea decompile_all
// name: FUN_100c3fa0
// address: 0x100c3fa0
// body: available
// range: 0x100c3fa0-0x100c40b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c3fa0(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                 float param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    uVar3 = *(uint *)(iVar1 + 0x60);
    iVar2 = *(int *)(iVar1 + 4);
    if ((uVar3 & 8) == 0) {
      uVar3 = uVar3 | 8;
      *(undefined8 *)(iVar1 + 0x40) = *(undefined8 *)(iVar2 + 0x20);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar2 + 0x28);
      *(uint *)(iVar1 + 0x60) = uVar3;
    }
    if ((uVar3 & 0x10) == 0) {
      *(undefined8 *)(iVar1 + 0x4c) = *(undefined8 *)(iVar2 + 0x5c);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar2 + 100);
      *(uint *)(iVar1 + 0x60) = uVar3 | 0x10;
    }
    *(ulonglong *)(iVar2 + 0x20) =
         CONCAT44(*(float *)(iVar2 + 0x24) - param_3,*(float *)(iVar2 + 0x20) - param_2);
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) - param_4;
    iVar2 = *(int *)(iVar1 + 4);
    *(ulonglong *)(iVar2 + 0x5c) =
         CONCAT44(*(float *)(iVar2 + 0x60) - param_6,*(float *)(iVar2 + 0x5c) - param_5);
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) - param_7;
    FUN_100c3fa0(iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

