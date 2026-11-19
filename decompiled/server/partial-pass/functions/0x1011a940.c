// rea decompile_all
// name: FUN_1011a940
// address: 0x1011a940
// body: available
// range: 0x1011a940-0x1011aa29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1011a940(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_0000001c;
  int *in_stack_00000020;
  undefined1 local_3c [16];
  float local_2c;
  int local_c;
  
  uVar1 = in_stack_0000001c;
  FUN_1011a800(&stack0x00000004,&stack0x00000010,1,in_stack_0000001c,local_3c);
  if (1.0 <= local_2c) {
    FUN_1011a7e0(&stack0x00000004,&stack0x00000010,0,3,uVar1,local_3c);
    if (1.0 <= local_2c) {
      return 0;
    }
    iVar2 = local_c;
    if ((local_c == 0) && (iVar2 = (*DAT_1022305c)(0), iVar2 == 0)) {
      return 1;
    }
    if (*(int **)(iVar2 + 0x7c) == (int *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x7c) + 0xc0))();
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (1.0 <= local_2c) {
    return 0;
  }
  if ((local_c == 0) && (local_c = (*DAT_1022305c)(0), local_c == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(local_c + 0x7c);
  }
  iVar2 = (**(code **)(*piVar3 + 0xc0))();
  if (iVar2 == 0) {
    if (piVar3 == in_stack_00000020) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x50))();
    if (iVar2 != 0) {
      (**(code **)(*piVar3 + 0x50))();
    }
  }
  return 1;
}

