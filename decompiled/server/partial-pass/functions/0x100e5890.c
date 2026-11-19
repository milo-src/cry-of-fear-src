// rea decompile_all
// name: FUN_100e5890
// address: 0x100e5890
// body: available
// range: 0x100e5890-0x100e59eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e5890(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = FUN_10118460(0,"cof_keypad");
  if (iVar1 == 0) {
    (*DAT_1022303c)(4,"Error: Can\'t find keypad entity!\n");
    return;
  }
  if ((param_1 == *(int *)(in_ECX + 0x2040)) && (*(int *)(in_ECX + 0x2040) != 9999)) {
    iVar2 = FUN_10090be0(*(undefined4 *)(iVar1 + 4));
    *(undefined1 *)(iVar2 + 0xdc) = 1;
    iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x1d8);
    if (iVar2 != 0) {
      FUN_1011a8a0(&DAT_101a124c,*(int *)(DAT_10223188 + 0x98) + iVar2);
    }
    FUN_10119810();
    iVar1 = FUN_10090be0(*(undefined4 *)(iVar1 + 4));
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(iVar1 + 4) + 0x1cc));
    (*DAT_10223000)(1,DAT_1022658c,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x2044));
    (*DAT_10223008)(1);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x2040) = 9999;
    return;
  }
  iVar1 = FUN_10090be0(*(undefined4 *)(iVar1 + 4));
  *(undefined1 *)(iVar1 + 0xdc) = 0;
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"keypad/keypad_deny.wav",0x3f800000,
               0x3f4ccccd,0,100);
  return;
}

