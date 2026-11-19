// rea decompile_all
// name: FUN_1011fc80
// address: 0x1011fc80
// body: available
// range: 0x1011fc80-0x1011fd7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1011fc80(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x252c);
  uVar3 = 0;
  if ((iVar1 == in_ECX) && (uVar3 = 1, *(int *)(param_1 + 0x264c) != 0)) {
    uVar3 = 0x40;
  }
  uVar2 = (uint)(*(int *)(param_1 + 0x24d8) == 0);
  if (((in_ECX == iVar1) || (in_ECX == *(int *)(param_1 + 0x2530))) &&
     (iVar1 != *(int *)(param_1 + 0x2530))) {
    uVar2 = 1;
  }
  if (((*(int *)(in_ECX + 0x1e4) != *(int *)(in_ECX + 0x1e8)) ||
      (uVar3 != *(uint *)(in_ECX + 0x1ec))) ||
     ((*(int *)(param_1 + 0x2508) != *(int *)(param_1 + 0x250c) || (uVar2 != 0)))) {
    (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    (*DAT_10223008)(uVar3);
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x168));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1e4));
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(in_ECX + 0x1e4);
    *(uint *)(in_ECX + 0x1ec) = uVar3;
    *(undefined4 *)(param_1 + 0x24d8) = 1;
  }
  if (*(int **)(in_ECX + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x164) + 0x170))(param_1);
    return 1;
  }
  return 1;
}

