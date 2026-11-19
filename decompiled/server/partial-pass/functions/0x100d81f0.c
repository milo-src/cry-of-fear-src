// rea decompile_all
// name: FUN_100d81f0
// address: 0x100d81f0
// body: available
// range: 0x100d81f0-0x100d834d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d81f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  *(int *)(in_ECX + 0xdc) = param_1;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined8 *)(iVar2 + 8) = *(undefined8 *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = *(int *)(in_ECX + 0xdc);
  local_18 = *(float *)(*(int *)(iVar1 + 4) + 0xe0) + 25.0;
  local_1c = *(float *)(*(int *)(iVar1 + 4) + 0xdc) + 25.0;
  iVar2 = *(int *)(iVar1 + 4);
  local_c = *(float *)(iVar2 + 0xec) + 25.0;
  local_8 = *(float *)(iVar2 + 0xf0) + 8.0;
  local_10 = *(float *)(iVar2 + 0xe8) + 25.0;
  local_14 = local_8 - ((*(float *)(iVar1 + 0x124) - *(float *)(iVar1 + 0x130)) + 8.0);
  iVar2 = *(int *)(iVar1 + 4);
  if (*(float *)(iVar2 + 0xf4) <= 50.0) {
    local_1c = (*(float *)(iVar2 + 0xe8) + *(float *)(iVar2 + 0xdc)) * 0.5;
    local_10 = local_1c + 1.0;
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (*(float *)(iVar2 + 0xf8) <= 50.0) {
    local_18 = (*(float *)(iVar2 + 0xec) + *(float *)(iVar2 + 0xe0)) * 0.5;
    local_c = local_18 + 1.0;
  }
  FUN_1011a030(*(undefined4 *)(in_ECX + 4),&local_1c,&local_10);
  return;
}

