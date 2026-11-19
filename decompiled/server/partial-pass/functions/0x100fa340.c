// rea decompile_all
// name: FUN_100fa340
// address: 0x100fa340
// body: available
// range: 0x100fa340-0x100fa443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fa43f to 0x10017250 FUN_10017250 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fa340(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  piVar1 = (int *)FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x374));
  iVar2 = 0;
  do {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_10118460(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x374));
      goto LAB_100fa3c0;
    }
    if ((*(byte *)(piVar1[1] + 0x1a8) & 0x20) != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x78))();
    }
    piVar1 = (int *)FUN_10118590(piVar1,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x374));
  } while (iVar2 == 0);
  goto LAB_100fa3ee;
  while( true ) {
    iVar2 = (**(code **)(*piVar1 + 0x78))();
    piVar1 = (int *)FUN_10118460(piVar1,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x374));
    if (iVar2 != 0) break;
LAB_100fa3c0:
    if (piVar1 == (int *)0x0) goto LAB_100fa43a;
  }
LAB_100fa3ee:
  iVar2 = (*DAT_10223070)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
  if (iVar2 != 0) {
    FUN_1000f590(iVar2,*(int *)(in_ECX + 0x36c) + *(int *)(DAT_10223188 + 0x98));
    FUN_1000f590(iVar2,*(int *)(in_ECX + 0x370) + *(int *)(DAT_10223188 + 0x98));
  }
LAB_100fa43a:
  FUN_10017250();
  return;
}

