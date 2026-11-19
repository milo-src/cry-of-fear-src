// rea decompile_all
// name: FUN_1003ff10
// address: 0x1003ff10
// body: available
// range: 0x1003ff10-0x10040005 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040001 to 0x1011d150 FUN_1011d150 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ff10(void)

{
  char *pcVar1;
  int *in_ECX;
  int iVar2;
  
  *(int *)in_ECX[1] = (int)"weapon_flashlight" - *(int *)(DAT_10223188 + 0x98);
  (**(code **)(*in_ECX + 0x30))();
  if (in_ECX[0x5c] == 0) {
    pcVar1 = "models/weapons/flashlight/w_flashlight.mdl";
  }
  else {
    pcVar1 = (char *)(*(int *)(DAT_10223188 + 0x98) + in_ECX[0x5c]);
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),pcVar1);
  in_ECX[0x5a] = 1;
  iVar2 = in_ECX[0x44];
  in_ECX[0x56] = 5;
  in_ECX[0x57] = 0x29a;
  while (iVar2 == 0) {
    iVar2 = (int)"inventoryitems/weapons/weapon_flashlight.txt" - *(int *)(DAT_10223188 + 0x98);
    in_ECX[0x44] = iVar2;
  }
  if (in_ECX[0x5d] != 0) {
    in_ECX[0x44] = in_ECX[0x5d];
  }
  *(undefined4 *)(in_ECX[1] + 0x160) = 99;
  in_ECX[0x43] = (int)"models/weapons/flashlight/w_flashlight.mdl" - *(int *)(DAT_10223188 + 0x98);
  iVar2 = (int)*(float *)(in_ECX[1] + 0x168);
  if (*(float *)(in_ECX[1] + 0x168) <= 0.0) {
    iVar2 = 100;
  }
  in_ECX[0x7d] = iVar2;
  FUN_1011d150();
  return;
}

