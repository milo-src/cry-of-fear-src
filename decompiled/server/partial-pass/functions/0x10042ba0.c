// rea decompile_all
// name: FUN_10042ba0
// address: 0x10042ba0
// body: available
// range: 0x10042ba0-0x10042ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042ba0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x30))();
  *(undefined4 *)(in_ECX[1] + 0x10c) = 4;
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  FUN_10119fe0();
  iVar2 = in_ECX[1];
  FUN_1011a030(iVar2,iVar2 + 0xdc,iVar2 + 0xe8);
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  if (*(int *)(in_ECX[1] + 0x1d8) == 0) {
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
    pcVar1 = CFuncValve::ProThink;
  }
  else {
    (**(code **)(*in_ECX + 8))(0x40000000);
    pcVar1 = CFuncValve::FindTargetEnt;
  }
  in_ECX[0x1e] = (int)pcVar1;
  if (in_ECX[0x60] == 0) {
    *(undefined4 *)(in_ECX[1] + 0x14c) = 0;
    *(undefined4 *)(in_ECX[1] + 0x150) = 0x437f0000;
  }
  else {
    *(undefined4 *)(in_ECX[1] + 0x14c) = 5;
    *(undefined4 *)(in_ECX[1] + 0x150) = 0;
  }
  iVar2 = in_ECX[1];
  if (0x167 < *(int *)(iVar2 + 0x248)) {
    *(undefined4 *)(iVar2 + 0x248) = 0x167;
    iVar2 = in_ECX[1];
  }
  if (*(int *)(iVar2 + 0x24c) < 1) {
    *(undefined4 *)(iVar2 + 0x24c) = 2;
    iVar2 = in_ECX[1];
  }
  if (2 < *(int *)(iVar2 + 0x254)) {
    *(undefined4 *)(iVar2 + 0x254) = 2;
    iVar2 = in_ECX[1];
  }
  if (*(int *)(iVar2 + 0x254) < 0) {
    *(undefined4 *)(iVar2 + 0x254) = 0;
    iVar2 = in_ECX[1];
  }
  *(undefined4 *)(iVar2 + 0x250) = 0;
  return;
}

