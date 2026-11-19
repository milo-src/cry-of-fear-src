// rea decompile_all
// name: FUN_100c4b90
// address: 0x100c4b90
// body: available
// range: 0x100c4b90-0x100c4c84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c4b90(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    local_20 = CONCAT44(param_3,param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    param_2 = *(float *)(iVar1 + 0x5c) + param_2;
    param_3 = *(float *)(iVar1 + 0x60) + param_3;
    param_4 = *(float *)(iVar1 + 100) + param_4;
    local_20 = CONCAT44(param_3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = 100;
    do {
      FUN_100c4c90(iVar1,param_2,param_3,param_4,100);
      iVar1 = *(int *)(iVar1 + 0x20);
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) {
        (*DAT_1022303c)(4,"SetAvelocity: Infinite sibling list for MoveWith!\n");
        break;
      }
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined8 *)(iVar1 + 0x5c) = local_20;
  *(float *)(iVar1 + 100) = param_4;
  return;
}

