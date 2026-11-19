// rea decompile_all
// name: ___scrt_is_nonwritable_in_current_image
// address: 0x1013e46a
// body: available
// range: 0x1013e46a-0x1013e4ce inclusive
// range: 0x1013e4e5-0x1013e4fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_is_nonwritable_in_current_image(void)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10207cb0,8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_10000000,*(int *)(unaff_EBP + 8) + 0xf0000000)
  ;
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || ((int)p_Var1->Characteristics < 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar2;
}

